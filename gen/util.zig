const std = @import("std");
const mem = std.mem;

// ---------------------------------------------------------------------------
// Case conversion
// ---------------------------------------------------------------------------

/// Convert the first character of `s` to uppercase, returning a new string
/// allocated from `allocator`. E.g. "widget" -> "Widget".
pub fn titleCase(allocator: std.mem.Allocator, s: []const u8) ![]const u8 {
    if (s.len == 0) return s;
    const buf = try allocator.alloc(u8, s.len);
    @memcpy(buf[1..], s[1..]);
    buf[0] = std.ascii.toUpper(s[0]);
    return buf;
}

/// Convert a PascalCase or Title_Case string to camelCase.
/// E.g. "MyWidget" -> "myWidget", "XMLParser" -> "xmlParser".
pub fn camelCase(allocator: std.mem.Allocator, s: []const u8) ![]const u8 {
    if (s.len == 0) return s;
    const buf = try allocator.alloc(u8, s.len);
    @memcpy(buf[1..], s[1..]);
    buf[0] = std.ascii.toLower(s[0]);
    return buf;
}

/// Convert a camelCase or PascalCase string to snake_case.
/// E.g. "MyWidget" -> "my_widget", "getURL" -> "get_u_r_l".
pub fn snakeCase(allocator: std.mem.Allocator, s: []const u8) ![]const u8 {
    if (s.len == 0) return s;

    var buf = std.ArrayList(u8).empty;
    for (s, 0..) |c, i| {
        if (std.ascii.isUpper(c)) {
            if (i > 0) try buf.append(allocator, '_');
            try buf.append(allocator, std.ascii.toLower(c));
        } else {
            try buf.append(allocator, c);
        }
    }
    return buf.items;
}

// ---------------------------------------------------------------------------
// String predicates (supplement std.mem where convenient)
// ---------------------------------------------------------------------------

/// Return true if `haystack` contains `needle`.
pub fn contains(haystack: []const u8, needle: []const u8) bool {
    return mem.indexOf(u8, haystack, needle) != null;
}

/// Return true if `s` contains the character `c`.
pub fn containsChar(s: []const u8, c: u8) bool {
    return mem.indexOfScalar(u8, s, c) != null;
}

/// Check if a string consists entirely of ASCII digits.
pub fn isDigits(s: []const u8) bool {
    if (s.len == 0) return false;
    for (s) |c| {
        if (!std.ascii.isDigit(c)) return false;
    }
    return true;
}

/// Check if a string consists entirely of ASCII alphanumeric characters.
pub fn isAlphanumeric(s: []const u8) bool {
    if (s.len == 0) return false;
    for (s) |c| {
        if (!std.ascii.isAlphanumeric(c)) return false;
    }
    return true;
}

// ---------------------------------------------------------------------------
// String manipulation
// ---------------------------------------------------------------------------

/// Remove a prefix from a string. Returns the string unchanged if the prefix
/// is not present.
pub fn trimPrefix(s: []const u8, prefix: []const u8) []const u8 {
    if (mem.startsWith(u8, s, prefix)) {
        return s[prefix.len..];
    }
    return s;
}

/// Remove a suffix from a string. Returns the string unchanged if the suffix
/// is not present.
pub fn trimSuffix(s: []const u8, suffix: []const u8) []const u8 {
    if (mem.endsWith(u8, s, suffix)) {
        return s[0 .. s.len - suffix.len];
    }
    return s;
}

/// Replace all occurrences of `needle` with `replacement` in `haystack`.
/// Result is allocated from `allocator`.
pub fn replaceAll(allocator: std.mem.Allocator, haystack: []const u8, needle: []const u8, replacement: []const u8) ![]const u8 {
    if (needle.len == 0) {
        const dup = try allocator.alloc(u8, haystack.len);
        @memcpy(dup, haystack);
        return dup;
    }

    var buf = std.ArrayList(u8).empty;
    var i: usize = 0;
    while (i < haystack.len) {
        if (i + needle.len <= haystack.len and mem.eql(u8, haystack[i .. i + needle.len], needle)) {
            try buf.appendSlice(allocator, replacement);
            i += needle.len;
        } else {
            try buf.append(allocator, haystack[i]);
            i += 1;
        }
    }
    return buf.items;
}

// ---------------------------------------------------------------------------
// Numbering helpers (ported from Go)
// ---------------------------------------------------------------------------

/// Return a disambiguating numeric suffix for overloaded names.
/// counter == 0 -> "" (first occurrence needs no suffix)
/// counter == 1 -> "2", counter == 2 -> "3", etc.
pub fn maybeSuffix(allocator: std.mem.Allocator, counter: usize) ![]const u8 {
    if (counter == 0) return "";
    return try std.fmt.allocPrint(allocator, "{d}", .{counter + 1});
}

// ---------------------------------------------------------------------------
// Pretty-print JSON (debugging aid)
// ---------------------------------------------------------------------------

/// Pretty-print a JSON value to stderr (for debugging).
pub fn prettyPrint(value: std.json.Value) void {
    const stderr = std.io.getStdErr().writer();
    std.json.stringify(value, .{ .whitespace = .indent_2 }, stderr) catch {};
    stderr.writeByte('\n') catch {};
}

// ---------------------------------------------------------------------------
// Conditional / misc (ported from Go generics)
// ---------------------------------------------------------------------------

/// Ternary-style conditional: return `true_val` if `condition` is true,
/// otherwise `false_val`. Mirrors Go's `ifv` generic.
pub fn ifv(comptime T: type, condition: bool, true_val: T, false_val: T) T {
    return if (condition) true_val else false_val;
}

/// Convert a slice to a hash set (key-only StringHashMap) for O(1) lookups.
pub fn sliceToSet(allocator: std.mem.Allocator, items: []const []const u8) !std.StringHashMap(void) {
    var set = std.StringHashMap(void).empty;
    for (items) |item| {
        try set.put(allocator, item, {});
    }
    return set;
}

/// Duplicate a slice, returning a new allocation from `allocator`.
pub fn sliceCopy(allocator: std.mem.Allocator, comptime T: type, input: []const T) ![]T {
    const copy = try allocator.alloc(T, input.len);
    @memcpy(copy, input);
    return copy;
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

test "titleCase" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const a = arena.allocator();

    try std.testing.expectEqualStrings("Hello", try titleCase(a, "hello"));
    try std.testing.expectEqualStrings("A", try titleCase(a, "a"));
    try std.testing.expectEqualStrings("Already", try titleCase(a, "Already"));
}

test "camelCase" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const a = arena.allocator();

    try std.testing.expectEqualStrings("myWidget", try camelCase(a, "MyWidget"));
    try std.testing.expectEqualStrings("x", try camelCase(a, "X"));
}

test "snakeCase" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const a = arena.allocator();

    try std.testing.expectEqualStrings("my_widget", try snakeCase(a, "MyWidget"));
    try std.testing.expectEqualStrings("hello", try snakeCase(a, "hello"));
}

test "trimPrefix and trimSuffix" {
    try std.testing.expectEqualStrings("World", trimPrefix("HelloWorld", "Hello"));
    try std.testing.expectEqualStrings("HelloWorld", trimPrefix("HelloWorld", "Bye"));
    try std.testing.expectEqualStrings("Hello", trimSuffix("HelloWorld", "World"));
    try std.testing.expectEqualStrings("HelloWorld", trimSuffix("HelloWorld", "Bye"));
}

test "replaceAll" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const a = arena.allocator();

    try std.testing.expectEqualStrings("hXllo world", try replaceAll(a, "hello world", "e", "X"));
    try std.testing.expectEqualStrings("abc", try replaceAll(a, "abc", "x", "y"));
}

test "maybeSuffix" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const a = arena.allocator();

    try std.testing.expectEqualStrings("", try maybeSuffix(a, 0));
    try std.testing.expectEqualStrings("2", try maybeSuffix(a, 1));
    try std.testing.expectEqualStrings("3", try maybeSuffix(a, 2));
}

test "ifv" {
    try std.testing.expectEqual(@as(i32, 10), ifv(i32, true, 10, 20));
    try std.testing.expectEqual(@as(i32, 20), ifv(i32, false, 10, 20));
}

test "sliceToSet" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const a = arena.allocator();

    const items = [_][]const u8{ "foo", "bar", "baz" };
    var set = try sliceToSet(a, &items);
    defer set.deinit(a);

    try std.testing.expect(set.contains("foo"));
    try std.testing.expect(set.contains("bar"));
    try std.testing.expect(!set.contains("qux"));
}

test "contains and containsChar" {
    try std.testing.expect(contains("hello world", "world"));
    try std.testing.expect(!contains("hello world", "xyz"));
    try std.testing.expect(containsChar("hello", 'l'));
    try std.testing.expect(!containsChar("hello", 'z'));
}

test "isDigits and isAlphanumeric" {
    try std.testing.expect(isDigits("12345"));
    try std.testing.expect(!isDigits("123a5"));
    try std.testing.expect(!isDigits(""));
    try std.testing.expect(isAlphanumeric("abc123"));
    try std.testing.expect(!isAlphanumeric("abc 123"));
}
