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
    const clang_bin: []const u8 = "clang";

    // IO context for filesystem operations
    var threaded_io = Io.Threaded.init_single_threaded;
    const io = threaded_io.io();

    // Initialize global state
    var global_state = state.StateTracker.init(allocator);

    // Process each Qt module
    const module_list = modules.getModules();
    for (module_list) |mod| {
        std.log.info("Processing module: {s}", .{mod.path});
        try gatherTypes(allocator, io, &global_state, mod, clang_bin);
    }

    // Generate bindings for each module
    for (module_list) |mod| {
        std.log.info("Generating bindings for: {s}", .{mod.path});
        try generate(allocator, io, &global_state, mod, out_dir, clang_bin);
    }

    // Format output files
    try formatOutput(allocator, io, out_dir);

    std.log.info("Binding generation complete.", .{});
}

/// PASS 0: Gather types from all headers to build global type registry
fn gatherTypes(
    allocator: std.mem.Allocator,
    io: Io,
    global_state: *state.StateTracker,
    mod: modules.Module,
    clang_bin: []const u8,
) !void {
    var include_files: std.ArrayList([]const u8) = .empty;

    for (mod.dirs) |dir| {
        if (std.mem.endsWith(u8, dir, ".h")) {
            try include_files.append(allocator, dir);
        } else {
            const headers = try findHeadersInDir(allocator, dir, mod.allow_header);
            try include_files.appendSlice(allocator, headers);
        }
    }

    // Split cflags string into array
    const cflags = try splitCflags(allocator, mod.cflags);

    // Parse headers and register types
    for (include_files.items) |header| {
        const ast_json = try clang.clangExecCached(allocator, io, clang_bin, header, cflags, "cachedir");
        const parsed = try allocator.create(ir.CppParsedHeader);
        parsed.* = try ast_parser.parseJsonAst(allocator, ast_json);
        try global_state.addKnownTypes(mod.path, parsed);
    }
}

/// PASS 1 & 2: Parse headers, apply transforms, emit code
fn generate(
    allocator: std.mem.Allocator,
    io: Io,
    global_state: *state.StateTracker,
    mod: modules.Module,
    out_dir: []const u8,
    clang_bin: []const u8,
) !void {
    var include_files: std.ArrayList([]const u8) = .empty;

    for (mod.dirs) |dir| {
        if (std.mem.endsWith(u8, dir, ".h")) {
            try include_files.append(allocator, dir);
        } else {
            const headers = try findHeadersInDir(allocator, dir, mod.allow_header);
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

    // Split cflags string into array
    const cflags = try splitCflags(allocator, mod.cflags);

    for (include_files.items) |header| {
        const ast_json = try clang.clangExecCached(allocator, io, clang_bin, header, cflags, "cachedir");
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
