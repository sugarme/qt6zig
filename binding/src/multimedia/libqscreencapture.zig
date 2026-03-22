const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qscreencapture.html
pub const qscreencapture = struct {

    /// New constructs a new QScreenCapture object.
    pub fn New() QtC.QScreenCapture {
        return qtc.QScreenCapture_new();
    }


    /// New2 constructs a new QScreenCapture object.
    pub fn New2(parent: ?*anyopaque) QtC.QScreenCapture {
        return qtc.QScreenCapture_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreenCapture_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreencapture.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CaptureSession(self: ?*anyopaque, ) QtC.QMediaCaptureSession {
        return qtc.QScreenCapture_CaptureSession(@ptrCast(self));
    }

    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QScreenCapture_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    pub fn Screen(self: ?*anyopaque, ) QtC.QScreen {
        return qtc.QScreenCapture_Screen(@ptrCast(self));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QScreenCapture_IsActive(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QScreenCapture_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreenCapture_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreencapture.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QScreenCapture_SetActive(@ptrCast(self), active);
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QScreenCapture_Start(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QScreenCapture_Stop(@ptrCast(self));
    }

    pub fn ActiveChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QScreenCapture_ActiveChanged(@ptrCast(self), param1);
    }

    pub fn OnActiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QScreenCapture_Connect_ActiveChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorChanged(self: ?*anyopaque, ) void {
        qtc.QScreenCapture_ErrorChanged(@ptrCast(self));
    }

    pub fn OnErrorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QScreenCapture_Connect_ErrorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ScreenChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScreenCapture_ScreenChanged(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnScreenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreenCapture_Connect_ScreenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QScreenCapture_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QScreenCapture_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreenCapture_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreencapture.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreenCapture_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreencapture.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScreenCapture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/screencapture.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const InternalError: i32 = 1;
        pub const CapturingNotSupported: i32 = 2;
        pub const CaptureFailed: i32 = 4;
        pub const NotFound: i32 = 5;
    };

};
