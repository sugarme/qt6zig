const std = @import("std");
const ir = @import("../intermediate.zig");

/// Renames methods that collide (same `SafeMethodName`) by appending numeric
/// suffixes.  The first occurrence keeps its original name; subsequent
/// duplicates get "2", "3", etc.
///
/// Mirrors Go's `astTransformOverloads`.
pub fn transform(parsed: *ir.CppParsedHeader) void {
    // Arena is intentionally leaked -- names produced here are stored back
    // into method structs and must outlive this function call.
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    const alloc = arena.allocator();

    for (parsed.classes) |*c| {
        // Track names we have already seen within this class.
        var existing = std.StringHashMap(void).init(alloc);

        for (c.methods) |*m| {
            const original_proposal = safeMethodName(alloc, m.*);
            var proposed_name = original_proposal;

            if (!existing.contains(proposed_name)) {
                // No collision - register and move on
                existing.put(proposed_name, {}) catch {};
                continue;
            }

            // Collision detected - find a non-colliding name
            var ctr: usize = 2;
            while (true) {
                proposed_name = std.fmt.allocPrint(alloc, "{s}{d}", .{
                    original_proposal, ctr,
                }) catch original_proposal;

                if (!existing.contains(proposed_name)) {
                    break;
                }
                ctr += 1;
            }

            existing.put(proposed_name, {}) catch {};
            m.rename(proposed_name);
        }
    }
}

/// Produce a safe, binding-friendly method name from a CppMethod.
/// This mirrors Go's `SafeMethodName()` which strips the "qt_" prefix,
/// replaces operator symbols, title-cases, and converts underscores to
/// camelCase.
fn safeMethodName(alloc: std.mem.Allocator, m: ir.CppMethod) []const u8 {
    var tmp = m.method_name;

    // Strip redundant "qt_" prefix
    if (std.mem.startsWith(u8, tmp, "qt_")) {
        tmp = tmp[3..];
    }

    // Operator replacements (order matters: more-specific first)
    const replacements = [_]struct { from: []const u8, to: []const u8 }{
        .{ .from = "operator ", .to = "Operator" },
        .{ .from = "operator", .to = "Operator" },
        .{ .from = "::", .to = "__" },
        // Compound assignment (must be before single-char operators)
        .{ .from = "+=", .to = "PlusAssign" },
        .{ .from = "-=", .to = "MinusAssign" },
        .{ .from = "*=", .to = "MultiplyAssign" },
        .{ .from = "/=", .to = "DivideAssign" },
        .{ .from = "%=", .to = "ModuloAssign" },
        .{ .from = "&=", .to = "BitwiseAndAssign" },
        .{ .from = "|=", .to = "BitwiseOrAssign" },
        .{ .from = "^=", .to = "BitwiseXorAssign" },
        .{ .from = "<<=", .to = "ShiftLeftAssign" },
        .{ .from = ">>=", .to = "ShiftRightAssign" },
        // Comparison
        .{ .from = "==", .to = "Equal" },
        .{ .from = "!=", .to = "NotEqual" },
        .{ .from = ">=", .to = "GreaterOrEqual" },
        .{ .from = "<=", .to = "LesserOrEqual" },
        .{ .from = "=", .to = "Assign" },
        .{ .from = "<<", .to = "ShiftLeft" },
        .{ .from = ">>", .to = "ShiftRight" },
        .{ .from = ">", .to = "Greater" },
        .{ .from = "<", .to = "Lesser" },
        .{ .from = "+", .to = "Plus" },
        .{ .from = "-", .to = "Minus" },
        .{ .from = "*", .to = "Multiply" },
        .{ .from = "/", .to = "Divide" },
        .{ .from = "%", .to = "Modulo" },
        .{ .from = "&&", .to = "LogicalAnd" },
        .{ .from = "||", .to = "LogicalOr" },
        .{ .from = "!", .to = "Not" },
        .{ .from = "&", .to = "BitwiseAnd" },
        .{ .from = "|", .to = "BitwiseOr" },
        .{ .from = "~", .to = "BitwiseXor" },
        .{ .from = "^", .to = "BitwiseNot" },
        .{ .from = "->", .to = "PointerDereference" },
        .{ .from = "[]", .to = "Subscript" },
        .{ .from = "()", .to = "Call" },
    };

    for (&replacements) |rep| {
        if (std.mem.indexOf(u8, tmp, rep.from) != null) {
            tmp = multiReplace(alloc, tmp, rep.from, rep.to) orelse tmp;
        }
    }

    // Title-case: uppercase the first letter
    if (tmp.len > 0 and std.ascii.isLower(tmp[0])) {
        const buf = alloc.alloc(u8, tmp.len) catch return tmp;
        @memcpy(buf[1..], tmp[1..]);
        buf[0] = std.ascii.toUpper(tmp[0]);
        tmp = buf;
    }

    // Replace " x" patterns (space + letter) with uppercase letter (camelCase)
    tmp = camelCaseSpaces(alloc, tmp);

    // Replace "_x" (underscore + lowercase letter) with uppercase
    tmp = camelCaseUnderscores(alloc, tmp);

    return tmp;
}

/// Replace all occurrences of `needle` with `replacement` in `s`.
fn multiReplace(alloc: std.mem.Allocator, s: []const u8, needle: []const u8, replacement: []const u8) ?[]const u8 {
    var buf: std.ArrayList(u8) = .empty;
    var i: usize = 0;
    while (i < s.len) {
        if (i + needle.len <= s.len and std.mem.eql(u8, s[i .. i + needle.len], needle)) {
            buf.appendSlice(alloc, replacement) catch return null;
            i += needle.len;
        } else {
            buf.append(alloc, s[i]) catch return null;
            i += 1;
        }
    }
    return buf.toOwnedSlice(alloc) catch null;
}

/// Convert " x" (space + alpha) to uppercase alpha, removing the space.
fn camelCaseSpaces(alloc: std.mem.Allocator, s: []const u8) []const u8 {
    if (std.mem.indexOf(u8, s, " ") == null) return s;

    var buf: std.ArrayList(u8) = .empty;
    var i: usize = 0;
    while (i < s.len) {
        if (s[i] == ' ' and i + 1 < s.len and std.ascii.isAlphabetic(s[i + 1])) {
            buf.append(alloc, std.ascii.toUpper(s[i + 1])) catch return s;
            i += 2;
        } else {
            buf.append(alloc, s[i]) catch return s;
            i += 1;
        }
    }
    return buf.toOwnedSlice(alloc) catch s;
}

/// Convert "_x" (underscore + lowercase alpha) to uppercase alpha, removing
/// the underscore.
fn camelCaseUnderscores(alloc: std.mem.Allocator, s: []const u8) []const u8 {
    if (std.mem.indexOf(u8, s, "_") == null) return s;

    var buf: std.ArrayList(u8) = .empty;
    var i: usize = 0;
    while (i < s.len) {
        if (s[i] == '_' and i + 1 < s.len and std.ascii.isLower(s[i + 1])) {
            buf.append(alloc, std.ascii.toUpper(s[i + 1])) catch return s;
            i += 2;
        } else {
            buf.append(alloc, s[i]) catch return s;
            i += 1;
        }
    }
    return buf.toOwnedSlice(alloc) catch s;
}
