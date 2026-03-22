const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qerrormessage.html
pub const qerrormessage = struct {

    /// New constructs a new QErrorMessage object.
    pub fn New(parent: ?*anyopaque) QtC.QErrorMessage {
        return qtc.QErrorMessage_new(@ptrCast(parent));
    }


    /// New2 constructs a new QErrorMessage object.
    pub fn New2() QtC.QErrorMessage {
        return qtc.QErrorMessage_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QErrorMessage_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qerrormessage.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn QtHandler() QtC.QErrorMessage {
        return qtc.QErrorMessage_QtHandler();
    }

    pub fn ShowMessage(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
qtc.QErrorMessage_ShowMessage(@ptrCast(self), message_str);
    }

    pub fn ShowMessage2(self: ?*anyopaque, message: []const u8, typeVal: []const u8) void {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
const typeVal_str = qtc.libqt_string{
    .len = typeVal.len,
    .data = typeVal.ptr,
};
qtc.QErrorMessage_ShowMessage2(@ptrCast(self), message_str, typeVal_str);
    }

    pub fn Done(self: ?*anyopaque, param1: i32) void {
        qtc.QErrorMessage_Done(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QErrorMessage_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, param1: i32) void {
        qtc.QErrorMessage_QBaseDone(@ptrCast(self), param1);
    }

    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QErrorMessage_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QErrorMessage_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QErrorMessage_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QErrorMessage_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qerrormessage.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QErrorMessage_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qerrormessage.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QErrorMessage_Delete(@ptrCast(self));
    }
};
