const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwineventnotifier.html
pub const qwineventnotifier = struct {

    /// New constructs a new QWinEventNotifier object.
    pub fn New() QtC.QWinEventNotifier {
        return qtc.QWinEventNotifier_new();
    }


    /// New2 constructs a new QWinEventNotifier object.
    pub fn New2(hEvent: ?*anyopaque) QtC.QWinEventNotifier {
        return qtc.QWinEventNotifier_new2(@ptrCast(hEvent));
    }


    /// New3 constructs a new QWinEventNotifier object.
    pub fn New3(parent: ?*anyopaque) QtC.QWinEventNotifier {
        return qtc.QWinEventNotifier_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QWinEventNotifier object.
    pub fn New4(hEvent: ?*anyopaque, parent: ?*anyopaque) QtC.QWinEventNotifier {
        return qtc.QWinEventNotifier_new4(@ptrCast(hEvent), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWinEventNotifier_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwineventnotifier.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHandle(self: ?*anyopaque, hEvent: ?*anyopaque) void {
        qtc.QWinEventNotifier_SetHandle(@ptrCast(self), @ptrCast(hEvent));
    }

    pub fn Handle(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QWinEventNotifier_Handle(@ptrCast(self));
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QWinEventNotifier_IsEnabled(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWinEventNotifier_SetEnabled(@ptrCast(self), enable);
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QWinEventNotifier_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWinEventNotifier_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QWinEventNotifier_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWinEventNotifier_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwineventnotifier.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWinEventNotifier_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwineventnotifier.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Wrapper to allow calling private signal
    pub fn Onactivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, HANDLE) callconv(.c) void) void {
        qtc.QWinEventNotifier_Connect_activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWinEventNotifier_Delete(@ptrCast(self));
    }
};
