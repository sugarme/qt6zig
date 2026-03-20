// Compatibility layer for Zig 0.16-dev API changes.
// Provides an ArrayList(u8) writer that mimics the pre-0.16 writer() API.

const std = @import("std");
const Allocator = std.mem.Allocator;

pub const ArrayListWriter = struct {
    list: *std.ArrayList(u8),
    allocator: Allocator,

    pub fn writeAll(self: ArrayListWriter, bytes: []const u8) !void {
        try self.list.appendSlice(self.allocator, bytes);
    }

    pub fn print(self: ArrayListWriter, comptime fmt: []const u8, args: anytype) !void {
        const s = try std.fmt.allocPrint(self.allocator, fmt, args);
        try self.list.appendSlice(self.allocator, s);
    }

    pub fn writeByte(self: ArrayListWriter, byte: u8) !void {
        try self.list.append(self.allocator, byte);
    }
};

pub fn arrayListWriter(allocator: Allocator, list: *std.ArrayList(u8)) ArrayListWriter {
    return .{ .list = list, .allocator = allocator };
}
