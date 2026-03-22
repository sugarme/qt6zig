const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcapturablewindow.html
pub const qcapturablewindow = struct {

    /// New constructs a new QCapturableWindow object.
    pub fn New() QtC.QCapturableWindow {
        return qtc.QCapturableWindow_new();
    }


    /// New2 constructs a new QCapturableWindow object.
    pub fn New2(other: ?*anyopaque) QtC.QCapturableWindow {
        return qtc.QCapturableWindow_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCapturableWindow_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCapturableWindow_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QCapturableWindow_IsValid(@ptrCast(self));
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCapturableWindow_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcapturablewindow.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCapturableWindow_Delete(@ptrCast(self));
    }
};
