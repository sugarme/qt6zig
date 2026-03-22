const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsplashscreen.html
pub const qsplashscreen = struct {

    /// New constructs a new QSplashScreen object.
    pub fn New() QtC.QSplashScreen {
        return qtc.QSplashScreen_new();
    }


    /// New2 constructs a new QSplashScreen object.
    pub fn New2(screen: ?*anyopaque) QtC.QSplashScreen {
        return qtc.QSplashScreen_new2(@ptrCast(screen));
    }


    /// New3 constructs a new QSplashScreen object.
    pub fn New3(pixmap: ?*anyopaque) QtC.QSplashScreen {
        return qtc.QSplashScreen_new3(@ptrCast(pixmap));
    }


    /// New4 constructs a new QSplashScreen object.
    pub fn New4(pixmap: ?*anyopaque, f: i64) QtC.QSplashScreen {
        return qtc.QSplashScreen_new4(@ptrCast(pixmap), @intCast(f));
    }


    /// New5 constructs a new QSplashScreen object.
    pub fn New5(screen: ?*anyopaque, pixmap: ?*anyopaque) QtC.QSplashScreen {
        return qtc.QSplashScreen_new5(@ptrCast(screen), @ptrCast(pixmap));
    }


    /// New6 constructs a new QSplashScreen object.
    pub fn New6(screen: ?*anyopaque, pixmap: ?*anyopaque, f: i64) QtC.QSplashScreen {
        return qtc.QSplashScreen_new6(@ptrCast(screen), @ptrCast(pixmap), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplashScreen_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplashscreen.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QSplashScreen_SetPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn Pixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QSplashScreen_Pixmap(@ptrCast(self));
    }

    pub fn Finish(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QSplashScreen_Finish(@ptrCast(self), @ptrCast(w));
    }

    pub fn Repaint(self: ?*anyopaque, ) void {
        qtc.QSplashScreen_Repaint(@ptrCast(self));
    }

    pub fn Message(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplashScreen_Message(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplashscreen.Message: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShowMessage(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
qtc.QSplashScreen_ShowMessage(@ptrCast(self), message_str);
    }

    pub fn ClearMessage(self: ?*anyopaque, ) void {
        qtc.QSplashScreen_ClearMessage(@ptrCast(self));
    }

    pub fn MessageChanged(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
qtc.QSplashScreen_MessageChanged(@ptrCast(self), message_str);
    }

    pub fn OnMessageChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSplashScreen_Connect_MessageChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QSplashScreen_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSplashScreen_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QSplashScreen_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DrawContents(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QSplashScreen_DrawContents(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplashScreen_OnDrawContents(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawContents(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QSplashScreen_QBaseDrawContents(@ptrCast(self), @ptrCast(painter));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplashScreen_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplashScreen_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplashScreen_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplashScreen_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplashscreen.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplashScreen_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplashscreen.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShowMessage2(self: ?*anyopaque, message: []const u8, alignment: i32) void {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
qtc.QSplashScreen_ShowMessage2(@ptrCast(self), message_str, alignment);
    }

    pub fn ShowMessage3(self: ?*anyopaque, message: []const u8, alignment: i32, color: ?*anyopaque) void {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
qtc.QSplashScreen_ShowMessage3(@ptrCast(self), message_str, alignment, @ptrCast(color));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSplashScreen_Delete(@ptrCast(self));
    }
};
