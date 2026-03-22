const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qobjectcleanuphandler.html
pub const qobjectcleanuphandler = struct {

    /// New constructs a new QObjectCleanupHandler object.
    pub fn New() QtC.QObjectCleanupHandler {
        return qtc.QObjectCleanupHandler_new();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObjectCleanupHandler_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qobjectcleanuphandler.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Add(self: ?*anyopaque, object: ?*anyopaque) QtC.QObject {
        return qtc.QObjectCleanupHandler_Add(@ptrCast(self), @ptrCast(object));
    }

    pub fn Remove(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QObjectCleanupHandler_Remove(@ptrCast(self), @ptrCast(object));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QObjectCleanupHandler_IsEmpty(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QObjectCleanupHandler_Clear(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObjectCleanupHandler_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qobjectcleanuphandler.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObjectCleanupHandler_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qobjectcleanuphandler.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QObjectCleanupHandler_Delete(@ptrCast(self));
    }
};
