const std = @import("std");
const ir = @import("../intermediate.zig");

/// Merges duplicate enum definitions that appear in multiple headers.
///
/// When the same enum name is encountered more than once, its entries are
/// merged into the first occurrence and the duplicate's name is cleared
/// (set to ""), signalling later passes to ignore it.
///
/// Mirrors Go's `astTransformRedundant`.
pub const AstTransformRedundant = struct {
    /// Map of enum_name -> pointer to the first CppEnum we saw with that name.
    preserve: std.StringHashMapUnmanaged(*ir.CppEnum),
    allocator: std.mem.Allocator,

    pub fn init(allocator: std.mem.Allocator) AstTransformRedundant {
        return .{
            .preserve = std.StringHashMapUnmanaged(*ir.CppEnum){},
            .allocator = allocator,
        };
    }

    /// Process a single parsed header, merging any duplicate enums.
    pub fn process(self: *AstTransformRedundant, parsed: *ir.CppParsedHeader) void {
        for (parsed.enums) |*e| {
            if (e.enum_name.len == 0) continue;

            const existing = self.preserve.get(e.enum_name);
            if (existing == null) {
                // First time seeing this enum -- remember it
                self.preserve.put(self.allocator, e.enum_name, e) catch {};
                continue;
            }

            const prev = existing.?;

            // Verify underlying types match
            if (!std.mem.eql(u8, prev.underlying_type.parameter_type, e.underlying_type.parameter_type)) {
                // In the Go code this panics.  We log and skip.
                std.log.err(
                    "Enum '{s}' defined with conflicting underlying types",
                    .{e.enum_name},
                );
                continue;
            }

            // Merge entries from the duplicate into the original
            const merged = self.allocator.alloc(
                ir.CppEnumEntry,
                prev.entries.len + e.entries.len,
            ) catch continue;
            @memcpy(merged[0..prev.entries.len], prev.entries);
            @memcpy(merged[prev.entries.len..], e.entries);
            prev.entries = merged;

            // Blank out the duplicate's name so downstream ignores it
            e.enum_name = "";
        }
    }
};
