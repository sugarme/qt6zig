const std = @import("std");
const fs = std.fs;
const mem = std.mem;
const process = std.process;

pub const ClangError = error{
    ClangNotFound,
    ClangFailed,
    CacheWriteFailed,
    InvalidJson,
    NoInnerNodes,
    EntryNotMap,
    NoLocField,
};

/// Function type for matching AST nodes by their originating filename.
/// Return true to keep the node, false to discard it.
pub const ClangMatcher = *const fn (ast_node_filename: []const u8) bool;

/// Default matcher: keeps only nodes defined directly in the scanned header
/// (i.e. nodes whose filename is empty, meaning "this translation unit").
pub fn matchSameHeaderOnly(ast_node_filename: []const u8) bool {
    return ast_node_filename.len == 0;
}

/// Run clang to produce a JSON AST dump for the given header file.
/// Returns the raw JSON output as a string allocated with `allocator`.
pub fn clangExec(
    allocator: std.mem.Allocator,
    clang_bin: []const u8,
    input_header: []const u8,
    cflags: []const []const u8,
) ![]const u8 {
    var argv_list: std.ArrayList([]const u8) = .empty;

    try argv_list.append(allocator, clang_bin);
    try argv_list.append(allocator, "-x");
    try argv_list.append(allocator, "c++");
    for (cflags) |flag| {
        try argv_list.append(allocator, flag);
    }
    try argv_list.append(allocator, "-Xclang");
    try argv_list.append(allocator, "-ast-dump=json");
    try argv_list.append(allocator, "-fsyntax-only");
    try argv_list.append(allocator, input_header);

    var tio = std.Io.Threaded.init_single_threaded;
    const exec_io = tio.io();

    const result = std.process.run(allocator, exec_io, .{
        .argv = argv_list.items,
        .stdout_limit = .unlimited,
        .stderr_limit = .unlimited,
    }) catch return ClangError.ClangFailed;

    if (result.term != .exited or result.term.exited != 0) {
        return ClangError.ClangFailed;
    }

    return result.stdout;
}

/// Run clang and filter the AST JSON, keeping only nodes that match `matcher`.
/// Returns the filtered JSON as a string allocated with `allocator`.
pub fn clangExecFiltered(
    allocator: std.mem.Allocator,
    clang_bin: []const u8,
    input_header: []const u8,
    cflags: []const []const u8,
    matcher: ClangMatcher,
) ![]const u8 {
    const raw_json = try clangExec(allocator, clang_bin, input_header, cflags);
    return try stripUpToFile(allocator, raw_json, matcher);
}

/// Run clang with caching. If a cached result exists in `cache_dir` for the
/// given header, return it. Otherwise run clang, cache the result, and return it.
pub fn clangExecCached(
    allocator: std.mem.Allocator,
    io: std.Io,
    clang_bin: []const u8,
    input_header: []const u8,
    cflags: []const []const u8,
    cache_dir: []const u8,
) ![]const u8 {
    const cache_key = cacheKeyFromPath(input_header);

    // Try loading from cache first
    if (loadCached(allocator, io, cache_dir, cache_key)) |cached| {
        return cached;
    } else |_| {}

    // Cache miss -- run clang
    const output = try clangExec(allocator, clang_bin, input_header, cflags);

    // Write to cache (best-effort)
    saveCached(io, cache_dir, cache_key, output) catch {};

    return output;
}

/// Strip AST nodes that originate from #included files, keeping only those
/// that match `matcher`. Mirrors the Go `clangStripUpToFile` function.
///
/// The input `json_bytes` must be the raw JSON output from
/// `clang -ast-dump=json`. The top-level object has an "inner" array;
/// each element is checked for its originating filename through the
/// `loc` / `includedFrom` / `expansionLoc` chain.
///
/// Returns a JSON string containing only the filtered "inner" array.
pub fn stripUpToFile(
    allocator: std.mem.Allocator,
    json_bytes: []const u8,
    matcher: ClangMatcher,
) ![]const u8 {
    const parsed = std.json.parseFromSlice(std.json.Value, allocator, json_bytes, .{
        .allocate = .alloc_always,
    }) catch return ClangError.InvalidJson;
    const root = parsed.value;

    const inner_val = switch (root) {
        .object => |obj| obj.get("inner") orelse return ClangError.NoInnerNodes,
        else => return ClangError.InvalidJson,
    };

    const inner = switch (inner_val) {
        .array => |a| a,
        else => return ClangError.NoInnerNodes,
    };

    var filtered = std.json.Array.empty;

    for (inner.items) |entry_val| {
        const entry = switch (entry_val) {
            .object => |obj| obj,
            else => return ClangError.EntryNotMap,
        };

        const match_filename = resolveNodeFilename(entry) catch |err| switch (err) {
            ClangError.NoLocField => return ClangError.NoLocField,
            else => "",
        };

        if (matcher(match_filename)) {
            try filtered.append(allocator, entry_val);
        }
    }

    // Serialize the filtered array back to JSON
    var buf = std.ArrayList(u8).empty;
    std.json.stringify(std.json.Value{ .array = filtered }, .{ .whitespace = .indent_2 }, buf.writer(allocator)) catch
        return ClangError.InvalidJson;
    return buf.items;
}

/// Resolve the originating filename for an AST node by walking:
///   loc.includedFrom.file
///   loc.expansionLoc.file
///   loc.expansionLoc.includedFrom.file
fn resolveNodeFilename(entry: std.json.ObjectMap) ClangError![]const u8 {
    const loc_val = entry.get("loc") orelse return ClangError.NoLocField;
    const loc = switch (loc_val) {
        .object => |obj| obj,
        else => return ClangError.NoLocField,
    };

    // Try loc.includedFrom.file
    if (loc.get("includedFrom")) |included_from_val| {
        if (included_from_val == .object) {
            if (included_from_val.object.get("file")) |file_val| {
                if (file_val == .string) return file_val.string;
            }
        }
    }

    // Try loc.expansionLoc
    if (loc.get("expansionLoc")) |expansion_val| {
        if (expansion_val == .object) {
            const expansion = expansion_val.object;

            // expansionLoc.file
            if (expansion.get("file")) |file_val| {
                if (file_val == .string) return file_val.string;
            }

            // expansionLoc.includedFrom.file
            if (expansion.get("includedFrom")) |inc_val| {
                if (inc_val == .object) {
                    if (inc_val.object.get("file")) |file_val| {
                        if (file_val == .string) return file_val.string;
                    }
                }
            }
        }
    }

    // No filename found -- node belongs to the translation unit itself
    return "";
}

// ---------------------------------------------------------------------------
// Caching helpers
// ---------------------------------------------------------------------------

/// Derive a cache key from a header file path.
/// Uses the basename without extension (e.g. "qwidget.h" -> "qwidget").
fn cacheKeyFromPath(path: []const u8) []const u8 {
    const base = fs.path.basename(path);
    if (mem.lastIndexOfScalar(u8, base, '.')) |dot| {
        return base[0..dot];
    }
    return base;
}

/// Try to load a cached clang output from `cache_dir/key.json`.
fn loadCached(
    allocator: std.mem.Allocator,
    io: std.Io,
    cache_dir: []const u8,
    key: []const u8,
) ![]const u8 {
    const file_name = try std.fmt.allocPrint(allocator, "{s}.json", .{key});
    const full_path = try fs.path.join(allocator, &.{ cache_dir, file_name });

    const cwd = std.Io.Dir.cwd();
    return try cwd.readFileAlloc(io, full_path, allocator, .unlimited);
}

/// Write clang output to `cache_dir/key.json`.
fn saveCached(
    io: std.Io,
    cache_dir: []const u8,
    key: []const u8,
    data: []const u8,
) !void {
    const cwd = std.Io.Dir.cwd();

    // Ensure cache directory exists
    cwd.createDirPath(io, cache_dir) catch {};

    var buf: [fs.max_path_bytes]u8 = undefined;
    const file_name_z = try std.fmt.bufPrint(&buf, "{s}.json", .{key});
    // Build a temporary path string for the full path
    var path_buf: [fs.max_path_bytes]u8 = undefined;
    const full_path = try std.fmt.bufPrint(&path_buf, "{s}{c}{s}", .{
        cache_dir,
        fs.path.sep,
        file_name_z,
    });

    const file = try cwd.createFile(io, full_path, .{});
    defer file.close(io);

    try file.writeStreamingAll(io, data);
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

test "cacheKeyFromPath" {
    try std.testing.expectEqualStrings("qwidget", cacheKeyFromPath("include/qwidget.h"));
    try std.testing.expectEqualStrings("qwidget", cacheKeyFromPath("qwidget.h"));
    try std.testing.expectEqualStrings("qwidget", cacheKeyFromPath("C:\\Qt\\include\\qwidget.h"));
    try std.testing.expectEqualStrings("noext", cacheKeyFromPath("noext"));
}

test "matchSameHeaderOnly" {
    try std.testing.expect(matchSameHeaderOnly(""));
    try std.testing.expect(!matchSameHeaderOnly("other.h"));
}
