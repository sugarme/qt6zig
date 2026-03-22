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

const tmp_ast_file = ".zig-cache/clang_ast_tmp.json";

/// Run clang to produce a JSON AST dump, writing output to a temp file.
/// Then stream-filter the file to extract only nodes from the target header.
/// Returns the FILTERED JSON (only nodes from the target file) allocated with `allocator`.
///
/// This avoids loading the full AST (~800MB per Qt header) into memory.
pub fn clangExecFiltered(
    allocator: std.mem.Allocator,
    io: std.Io,
    clang_cmd: []const []const u8,
    input_header: []const u8,
    cflags: []const []const u8,
) ![]const u8 {
    // Build command: gen/run-clang.bat <output-file> -x c++ <cflags> -Xclang -ast-dump=json -fsyntax-only <header>
    // The batch file handles stdout redirect internally.
    var cmd_parts: std.ArrayList([]const u8) = .empty;

    if (@import("builtin").os.tag == .windows) {
        try cmd_parts.append(allocator, "cmd");
        try cmd_parts.append(allocator, "/c");
        // Set CLANG_OUTPUT env and call run-clang.bat with all clang args
        try cmd_parts.append(allocator, try std.fmt.allocPrint(
            allocator,
            "set CLANG_OUTPUT={s}&&gen\\run-clang.bat",
            .{tmp_ast_file},
        ));
    } else {
        // On Unix, build a shell command with redirect
        try cmd_parts.append(allocator, "sh");
        try cmd_parts.append(allocator, "-c");
        var cmd_str = std.ArrayList(u8).empty;
        for (clang_cmd) |arg| {
            if (cmd_str.items.len > 0) try cmd_str.append(allocator, ' ');
            try appendQuoted(&cmd_str, allocator, arg);
        }
        try cmd_str.appendSlice(allocator, " -x c++");
        for (cflags) |flag| {
            try cmd_str.append(allocator, ' ');
            try appendQuoted(&cmd_str, allocator, flag);
        }
        try cmd_str.appendSlice(allocator, " -Xclang -ast-dump=json -fsyntax-only ");
        try appendQuoted(&cmd_str, allocator, input_header);
        try cmd_str.appendSlice(allocator, " > ");
        try cmd_str.appendSlice(allocator, tmp_ast_file);
        try cmd_str.appendSlice(allocator, " 2>/dev/null");
        try cmd_parts.append(allocator, cmd_str.items);
    }

    // Clang arguments
    if (@import("builtin").os.tag == .windows) {
        try cmd_parts.append(allocator, "-x");
        try cmd_parts.append(allocator, "c++");
        for (cflags) |flag| {
            try cmd_parts.append(allocator, flag);
        }
        try cmd_parts.append(allocator, "-Xclang");
        try cmd_parts.append(allocator, "-ast-dump=json");
        try cmd_parts.append(allocator, "-fsyntax-only");
        // Normalize backslashes for clang
        const norm_header = try allocator.alloc(u8, input_header.len);
        for (input_header, 0..) |ch, idx| {
            norm_header[idx] = if (ch == '\\') @as(u8, '/') else ch;
        }
        try cmd_parts.append(allocator, norm_header);
    }

    // Ensure cache dir exists for temp file
    const cwd = std.Io.Dir.cwd();
    cwd.createDirPath(io, ".zig-cache") catch {};

    std.log.info("Clang cmd: {s}", .{cmd_parts.items[cmd_parts.items.len - 1]});

    // Spawn shell and wait
    var child = std.process.spawn(io, .{
        .argv = cmd_parts.items,
        .stdin = .ignore,
        .stdout = .ignore,
        .stderr = .ignore,
    }) catch |err| {
        std.log.err("Failed to spawn clang: {s}", .{@errorName(err)});
        return ClangError.ClangFailed;
    };
    _ = child.wait(io) catch return ClangError.ClangFailed;
    // Ignore exit code — zig cc may return non-zero but still produce valid output

    // Now stream-filter the temp file
    const filtered = streamFilterAstFile(allocator, io, tmp_ast_file) catch |err| {
        std.log.err("Failed to filter AST: {s}", .{@errorName(err)});
        return ClangError.InvalidJson;
    };

    return filtered;
}

/// Run clang with caching. If a cached result exists in `cache_dir` for the
/// given header, return it. Otherwise run clang, filter, cache, and return.
/// The cached result is the FILTERED JSON (small), not the raw output.
pub fn clangExecCached(
    allocator: std.mem.Allocator,
    io: std.Io,
    clang_cmd: []const []const u8,
    input_header: []const u8,
    cflags: []const []const u8,
    cache_dir: []const u8,
) ![]const u8 {
    const cache_key = cacheKeyFromPath(input_header);

    // Try loading from cache first
    if (loadCached(allocator, io, cache_dir, cache_key)) |cached| {
        return cached;
    } else |_| {}

    // Cache miss — run clang and filter
    const output = try clangExecFiltered(allocator, io, clang_cmd, input_header, cflags);

    // Write filtered result to cache (best-effort)
    saveCached(io, cache_dir, cache_key, output) catch {};

    return output;
}

// ==========================================================================
// Stream-based AST filter
// ==========================================================================

/// Read a clang AST JSON file and extract only the top-level "inner" nodes
/// that originate from the translation unit itself (not from #included files).
///
/// This works by scanning the file for the "inner" array, then using bracket
/// depth tracking to find each element's boundaries. For each element, only
/// the first ~2KB is examined to find the "loc" field and determine origin.
///
/// Memory usage: O(output_size) — only kept nodes are allocated.
fn streamFilterAstFile(
    allocator: std.mem.Allocator,
    io: std.Io,
    file_path: []const u8,
) ![]const u8 {
    const cwd = std.Io.Dir.cwd();

    // Read file using page_allocator (virtual memory, OS can page to disk)
    const raw = cwd.readFileAlloc(io, file_path, std.heap.page_allocator, .unlimited) catch |err| {
        std.log.err("Failed to read AST file {s}: {s}", .{ file_path, @errorName(err) });
        return ClangError.InvalidJson;
    };
    defer std.heap.page_allocator.free(raw);

    if (raw.len == 0 or raw[0] != '{') return ClangError.InvalidJson;

    // Scan for the top-level "inner" array, then extract matching elements
    var result = std.ArrayList(u8).empty;
    try result.appendSlice(allocator, "{\"inner\":[\n");

    // Find "inner": [
    const inner_marker = mem.indexOf(u8, raw, "\"inner\"") orelse return ClangError.NoInnerNodes;
    var pos = inner_marker + 7;
    // Skip whitespace and colon
    while (pos < raw.len and (raw[pos] == ' ' or raw[pos] == ':' or
        raw[pos] == '\n' or raw[pos] == '\r' or raw[pos] == '\t')) : (pos += 1)
    {}
    if (pos >= raw.len or raw[pos] != '[') return ClangError.NoInnerNodes;
    pos += 1; // skip [

    var depth: i32 = 0;
    var element_start: ?usize = null;
    var found_count: u32 = 0;
    var in_string = false;

    while (pos < raw.len) : (pos += 1) {
        const c = raw[pos];

        // Handle strings (skip content, handle escapes)
        if (in_string) {
            if (c == '\\') {
                pos += 1; // skip escaped char
                continue;
            }
            if (c == '"') in_string = false;
            continue;
        }

        if (c == '"') {
            in_string = true;
            continue;
        }

        if (c == '{') {
            if (depth == 0) element_start = pos;
            depth += 1;
        } else if (c == '}') {
            depth -= 1;
            if (depth == 0) {
                if (element_start) |start| {
                    const element_text = raw[start .. pos + 1];
                    if (isFromTargetFile(element_text)) {
                        if (found_count > 0) {
                            try result.appendSlice(allocator, ",\n");
                        }
                        try result.appendSlice(allocator, element_text);
                        found_count += 1;
                    }
                }
                element_start = null;
            }
        } else if (c == ']' and depth == 0) {
            break; // end of inner array
        }
    }

    try result.appendSlice(allocator, "\n]}");

    std.log.info("Filtered AST: kept {d} top-level nodes ({d} bytes from {d} MB input)", .{
        found_count,
        result.items.len,
        raw.len / (1024 * 1024),
    });
    return result.items;
}

/// Quick heuristic check: does this AST node originate from the target file?
/// Checks the "loc" field for "includedFrom" or "expansionLoc" with a "file" key.
/// If neither is found, the node is from the translation unit (target file).
fn isFromTargetFile(element_json: []const u8) bool {
    // Find "loc" field (should be near the start of the element)
    const search_limit = @min(element_json.len, 2048);
    const loc_start = mem.indexOf(u8, element_json[0..search_limit], "\"loc\"") orelse {
        // No loc field — treat as target file node
        return true;
    };

    // Look for "includedFrom" within the loc object
    const loc_region_end = @min(loc_start + 512, element_json.len);
    const loc_region = element_json[loc_start..loc_region_end];

    if (mem.indexOf(u8, loc_region, "\"includedFrom\"")) |inc_pos| {
        // Found includedFrom — check if it has a "file" field with content
        const after_inc = loc_region[inc_pos..];
        if (mem.indexOf(u8, after_inc, "\"file\"")) |_| {
            // Has a file field — this node is from an included file
            return false;
        }
    }

    // Check for expansionLoc with file
    if (mem.indexOf(u8, loc_region, "\"expansionLoc\"")) |exp_pos| {
        const after_exp = loc_region[exp_pos..];
        if (mem.indexOf(u8, after_exp, "\"file\"")) |_| {
            return false;
        }
    }

    // No includedFrom or expansionLoc with file — node is from target file
    return true;
}

/// Quote a shell argument if it contains spaces
fn appendQuoted(list: *std.ArrayList(u8), allocator: std.mem.Allocator, arg: []const u8) !void {
    if (mem.indexOfScalar(u8, arg, ' ') != null or mem.indexOfScalar(u8, arg, '\\') != null) {
        try list.append(allocator, '"');
        try list.appendSlice(allocator, arg);
        try list.append(allocator, '"');
    } else {
        try list.appendSlice(allocator, arg);
    }
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

test "isFromTargetFile" {
    // Node with no loc — from target
    try std.testing.expect(isFromTargetFile("{\"kind\":\"TypedefDecl\"}"));

    // Node with includedFrom — NOT from target
    try std.testing.expect(!isFromTargetFile(
        \\{"kind":"TypedefDecl","loc":{"includedFrom":{"file":"other.h"}}}
    ));

    // Node with loc but no includedFrom — from target
    try std.testing.expect(isFromTargetFile(
        \\{"kind":"CXXRecordDecl","loc":{"offset":123,"line":5,"col":1}}
    ));
}
