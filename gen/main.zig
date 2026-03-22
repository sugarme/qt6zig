const std = @import("std");
const Io = std.Io;
const ir = @import("intermediate.zig");
const clang = @import("clang.zig");
const ast_parser = @import("ast_parser.zig");
const state = @import("state.zig");
const config = @import("config.zig");
const modules = @import("modules.zig");
const util = @import("util.zig");
const compat = @import("compat.zig");

// Transform passes
const child_classes = @import("transforms/child_classes.zig");
const enums_transform = @import("transforms/enums.zig");
const structs_transform = @import("transforms/structs.zig");
const typedefs_transform = @import("transforms/typedefs.zig");
const optional_transform = @import("transforms/optional.zig");
const overloads_transform = @import("transforms/overloads.zig");
const ctors_transform = @import("transforms/ctors.zig");
const redundant_transform = @import("transforms/redundant.zig");
const blocklist_transform = @import("transforms/blocklist.zig");

// Code emitters
const cabi_header = @import("emit/cabi_header.zig");
const cabi_impl = @import("emit/cabi_impl.zig");
const cabi_virtual = @import("emit/cabi_virtual.zig");
const zig_wrapper = @import("emit/zig_wrapper.zig");

const ClangSubprocessCount = 4;

pub fn main() !void {

    var gpa = std.heap.GeneralPurposeAllocator(.{}){};
    defer _ = gpa.deinit();

    var arena = std.heap.ArenaAllocator.init(gpa.allocator());
    defer arena.deinit();
    const allocator = arena.allocator();

    // Configuration
    const out_dir: []const u8 = "binding";
    const include_base: []const u8 = "qt6-zig-build/Qt/6.8.3/include";

    // Clang command for AST dumping.
    // On Windows, uses gen/zig-cc.bat wrapper which sets ZIG_GLOBAL_CACHE_DIR
    // before invoking "zig cc -target x86_64-windows-msvc" to ensure:
    //   1. zig can find its cache directory (avoids AppDataDirUnavailable)
    //   2. C++ standard library headers are found (via MSVC)
    // On other platforms, use "clang" directly.
    const clang_cmd: []const []const u8 = if (@import("builtin").os.tag == .windows)
        &.{"gen\\zig-cc.bat"}
    else
        &.{"clang"};

    // Verify include_base exists
    {
        const cwd = Io.Dir.cwd();
        var tio2 = Io.Threaded.init_single_threaded;
        const check_io = tio2.io();
        cwd.access(check_io, include_base, .{}) catch {
            std.log.err("Include base directory not found: {s}", .{include_base});
            std.log.err("Ensure qt6-zig-build submodule has Qt source at Qt/6.8.3/include/", .{});
            return error.IncludeBaseNotFound;
        };
    }

    // IO context - needs full threading support for process spawning
    var threaded_io = Io.Threaded.init(gpa.allocator(), .{});
    defer threaded_io.deinit();
    const io = threaded_io.io();

    // Initialize global state
    var global_state = state.StateTracker.init(allocator);

    // Process each Qt module
    const module_list = modules.getModules();
    for (module_list) |mod| {
        std.log.info("Processing module: {s}", .{mod.path});
        try gatherTypes(allocator, io, &global_state, mod, clang_cmd, include_base);
    }

    // Generate bindings for each module
    for (module_list) |mod| {
        std.log.info("Generating bindings for: {s}", .{mod.path});
        try generate(allocator, io, &global_state, mod, out_dir, clang_cmd, include_base);
    }

    // Format output files
    try formatOutput(allocator, io, out_dir);

    std.log.info("Binding generation complete.", .{});
}

/// PASS 0: Gather types from all headers to build global type registry.
/// Uses an uber-header approach: creates a single header that includes all
/// module headers, runs clang ONCE, then registers all discovered types.
fn gatherTypes(
    allocator: std.mem.Allocator,
    io: Io,
    global_state: *state.StateTracker,
    mod: modules.Module,
    clang_cmd: []const []const u8,
    include_base: []const u8,
) !void {
    var include_files: std.ArrayList([]const u8) = .empty;

    for (mod.dirs) |dir| {
        const full_dir = try std.fs.path.join(allocator, &.{ include_base, dir });
        if (std.mem.endsWith(u8, dir, ".h")) {
            try include_files.append(allocator, full_dir);
        } else {
            const headers = try findHeadersInDir(allocator, full_dir, mod.allow_header);
            try include_files.appendSlice(allocator, headers);
        }
    }

    if (include_files.items.len == 0) return;

    // Create uber-header that includes all module headers
    const uber_path = ".zig-cache/uber_header.h";
    {
        var uber_content = std.ArrayList(u8).empty;
        for (include_files.items) |header| {
            try uber_content.appendSlice(allocator, "#include \"");
            // Normalize backslashes to forward slashes for clang
            for (header) |ch| {
                try uber_content.append(allocator, if (ch == '\\') @as(u8, '/') else ch);
            }
            try uber_content.appendSlice(allocator, "\"\n");
        }
        try writeFile(uber_path, uber_content.items);
    }

    // Split cflags string into array and add include base path
    const base_cflags = try splitCflags(allocator, mod.cflags);
    var cflags_list: std.ArrayList([]const u8) = .empty;
    try cflags_list.appendSlice(allocator, base_cflags);
    try cflags_list.append(allocator, try std.fmt.allocPrint(allocator, "-I{s}", .{include_base}));

    // Run clang ONCE on the uber-header
    std.log.info("PASS 0: Running clang on {d} headers for module '{s}'...", .{ include_files.items.len, mod.path });
    const ast_json = clang.clangExecCached(allocator, io, clang_cmd, uber_path, cflags_list.items, "cachedir") catch |err| {
        std.log.warn("PASS 0 clang failed for module '{s}': {s}, skipping type gathering", .{ mod.path, @errorName(err) });
        return;
    };

    const parsed = try allocator.create(ir.CppParsedHeader);
    parsed.* = ast_parser.parseJsonAst(allocator, ast_json) catch |err| {
        std.log.warn("PASS 0 parse failed for module '{s}': {s}", .{ mod.path, @errorName(err) });
        return;
    };
    try global_state.addKnownTypes(mod.path, parsed);
}

/// PASS 1 & 2: Parse headers, apply transforms, emit code
fn generate(
    allocator: std.mem.Allocator,
    io: Io,
    global_state: *state.StateTracker,
    mod: modules.Module,
    out_dir: []const u8,
    clang_cmd: []const []const u8,
    include_base: []const u8,
) !void {
    var include_files: std.ArrayList([]const u8) = .empty;

    for (mod.dirs) |dir| {
        const full_dir = try std.fs.path.join(allocator, &.{ include_base, dir });
        if (std.mem.endsWith(u8, dir, ".h")) {
            try include_files.append(allocator, full_dir);
        } else {
            const headers = try findHeadersInDir(allocator, full_dir, mod.allow_header);
            try include_files.appendSlice(allocator, headers);
        }
    }

    const package_name = if (mod.path.len > 0)
        try std.fmt.allocPrint(allocator, "src/{s}", .{mod.path})
    else
        "src";

    const include_path = if (mod.path.len > 0)
        try std.fmt.allocPrint(allocator, "include/{s}", .{mod.path})
    else
        "include";

    const include_dir = try std.fs.path.join(allocator, &.{ out_dir, include_path });
    const src_out_dir = try std.fs.path.join(allocator, &.{ out_dir, package_name });

    // Create output directories
    const cwd = Io.Dir.cwd();
    cwd.createDirPath(io, include_dir) catch {};
    cwd.createDirPath(io, src_out_dir) catch {};

    // PASS 1: Parse and transform
    var process_headers: std.ArrayList(*ir.CppParsedHeader) = .empty;
    var redundant = redundant_transform.AstTransformRedundant.init(allocator);

    // Split cflags string into array and add include base path
    const base_cflags = try splitCflags(allocator, mod.cflags);
    var cflags_list: std.ArrayList([]const u8) = .empty;
    try cflags_list.appendSlice(allocator, base_cflags);
    try cflags_list.append(allocator, try std.fmt.allocPrint(allocator, "-I{s}", .{include_base}));

    for (include_files.items) |header| {
        const ast_json = try clang.clangExecCached(allocator, io, clang_cmd, header, cflags_list.items, "cachedir");
        const parsed = try allocator.create(ir.CppParsedHeader);
        parsed.* = try ast_parser.parseJsonAst(allocator, ast_json);

        parsed.filename = header;

        // Apply transform passes (order matters)
        child_classes.transform(parsed);
        enums_transform.transform(parsed, global_state);
        structs_transform.transform(parsed, global_state);
        optional_transform.transform(parsed);
        overloads_transform.transform(parsed);
        ctors_transform.transform(parsed);
        redundant.process(parsed);

        // Update global state (after child class transform)
        try global_state.addKnownTypes(mod.path, parsed);

        try process_headers.append(allocator, parsed);
    }

    // PASS 2: Emit code
    var header_list: std.ArrayList([]const u8) = .empty;

    for (process_headers.items) |parsed| {
        // More transforms
        typedefs_transform.transform(parsed, global_state);
        blocklist_transform.transform(parsed);

        if (parsed.empty()) {
            std.log.info("Nothing bindable in {s}", .{parsed.filename});
            continue;
        }

        // Generate output filenames
        const basename = std.fs.path.stem(parsed.filename);
        const lib_name = try std.fmt.allocPrint(allocator, "lib{s}", .{basename});
        const output_path = try std.fs.path.join(allocator, &.{ src_out_dir, lib_name });

        try header_list.append(allocator, try std.fmt.allocPrint(allocator, "{s}.h", .{lib_name}));

        // Emit .h (C ABI header)
        const h_content = try cabi_header.emit(allocator, parsed, global_state);
        try writeFile(try std.fmt.allocPrint(allocator, "{s}.h", .{output_path}), h_content);

        // Emit .cpp (C ABI implementation)
        const cpp_content = try cabi_impl.emit(allocator, parsed, global_state);
        try writeFile(try std.fmt.allocPrint(allocator, "{s}.cpp", .{output_path}), cpp_content);

        // Emit .hxx (Virtual callback header)
        const hxx_content = try cabi_virtual.emit(allocator, parsed, global_state);
        try writeFile(try std.fmt.allocPrint(allocator, "{s}.hxx", .{output_path}), hxx_content);

        // Emit .zig (Zig wrapper)
        const zig_content = try zig_wrapper.emit(allocator, parsed, global_state);
        try writeFile(try std.fmt.allocPrint(allocator, "{s}.zig", .{output_path}), zig_content);

        // Copy .h and .zig to include directory
        const include_h = try std.fs.path.join(allocator, &.{ include_dir, try std.fmt.allocPrint(allocator, "{s}.h", .{lib_name}) });
        try writeFile(include_h, h_content);

        const include_zig = try std.fs.path.join(allocator, &.{ include_dir, try std.fmt.allocPrint(allocator, "{s}.zig", .{lib_name}) });
        try writeFile(include_zig, zig_content);
    }

    // Generate aggregate headers
    try emitAggregateHeader(allocator, include_dir, header_list.items);
}

fn findHeadersInDir(
    allocator: std.mem.Allocator,
    dir_path: []const u8,
    allow_header: ?*const fn ([]const u8) bool,
) ![][]const u8 {
    var result: std.ArrayList([]const u8) = .empty;

    const cwd = Io.Dir.cwd();
    var tio = Io.Threaded.init_single_threaded;
    const io = tio.io();
    var dir = cwd.openDir(io, dir_path, .{ .iterate = true }) catch return result.items;
    defer dir.close(io);

    var iter = dir.iterate();
    while (try iter.next(io)) |entry| {
        if (entry.kind != .file) continue;
        if (!std.mem.endsWith(u8, entry.name, ".h")) continue;

        const full_path = try std.fs.path.join(allocator, &.{ dir_path, entry.name });
        if (allow_header) |filter| {
            if (!filter(full_path)) continue;
        }
        try result.append(allocator, full_path);
    }

    return result.items;
}

fn writeFile(path: []const u8, content: []const u8) !void {
    const cwd = Io.Dir.cwd();
    var tio = Io.Threaded.init_single_threaded;
    const io = tio.io();
    // Ensure parent directory exists
    if (std.fs.path.dirname(path)) |dir| {
        cwd.createDirPath(io, dir) catch {};
    }
    const file = try cwd.createFile(io, path, .{});
    defer file.close(io);
    try file.writeStreamingAll(io, content);
}

fn emitAggregateHeader(
    allocator: std.mem.Allocator,
    include_dir: []const u8,
    headers: []const []const u8,
) !void {
    var buf: std.ArrayList(u8) = .empty;
    var writer = compat.arrayListWriter(allocator, &buf);

    try writer.writeAll("#pragma once\n");
    try writer.writeAll("#ifndef QT6ZIG_LIBQT6C_H\n");
    try writer.writeAll("#define QT6ZIG_LIBQT6C_H\n\n");
    try writer.writeAll("#include \"../src/qtlibc.h\"\n\n");

    for (headers) |header| {
        try writer.print("#include \"../src/{s}\"\n", .{header});
    }

    try writer.writeAll("\n#endif\n");

    const path = try std.fs.path.join(allocator, &.{ include_dir, "libqt6c.h" });
    try writeFile(path, buf.items);
}

fn splitCflags(allocator: std.mem.Allocator, cflags_str: []const u8) ![]const []const u8 {
    var result: std.ArrayList([]const u8) = .empty;
    var iter = std.mem.splitScalar(u8, cflags_str, ' ');
    while (iter.next()) |token| {
        if (token.len > 0) {
            try result.append(allocator, token);
        }
    }
    return result.items;
}

fn formatOutput(allocator: std.mem.Allocator, io: Io, out_dir: []const u8) !void {
    var zig_files: std.ArrayList([]const u8) = .empty;

    const cwd = Io.Dir.cwd();
    const src_dir = try std.fs.path.join(allocator, &.{ out_dir, "src" });
    var dir = cwd.openDir(io, src_dir, .{ .iterate = true }) catch return;
    defer dir.close(io);

    var walker = try dir.walk(allocator);
    defer walker.deinit();

    while (try walker.next(io)) |entry| {
        if (entry.kind == .file and std.mem.endsWith(u8, entry.path, ".zig")) {
            try zig_files.append(allocator, try std.fs.path.join(allocator, &.{ src_dir, entry.path }));
        }
    }

    if (zig_files.items.len > 0) {
        var argv: std.ArrayList([]const u8) = .empty;
        try argv.append(allocator, "zig");
        try argv.append(allocator, "fmt");
        try argv.appendSlice(allocator, zig_files.items);

        var tio2 = Io.Threaded.init_single_threaded;
        const fio = tio2.io();
        _ = std.process.run(allocator, fio, .{
            .argv = argv.items,
        }) catch null;
    }
}
