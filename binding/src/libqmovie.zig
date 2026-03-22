const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmovie.html
pub const qmovie = struct {

    /// New constructs a new QMovie object.
    pub fn New() QtC.QMovie {
        return qtc.QMovie_new();
    }


    /// New2 constructs a new QMovie object.
    pub fn New2(device: ?*anyopaque) QtC.QMovie {
        return qtc.QMovie_new2(@ptrCast(device));
    }


    /// New3 constructs a new QMovie object.
    pub fn New3(fileName: []const u8) QtC.QMovie {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QMovie_new3(fileName_str);
    }


    /// New4 constructs a new QMovie object.
    pub fn New4(parent: ?*anyopaque) QtC.QMovie {
        return qtc.QMovie_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QMovie object.
    pub fn New5(device: ?*anyopaque, format: []u8) QtC.QMovie {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QMovie_new5(@ptrCast(device), format_str);
    }


    /// New6 constructs a new QMovie object.
    pub fn New6(device: ?*anyopaque, format: []u8, parent: ?*anyopaque) QtC.QMovie {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QMovie_new6(@ptrCast(device), format_str, @ptrCast(parent));
    }


    /// New7 constructs a new QMovie object.
    pub fn New7(fileName: []const u8, format: []u8) QtC.QMovie {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QMovie_new7(fileName_str, format_str);
    }


    /// New8 constructs a new QMovie object.
    pub fn New8(fileName: []const u8, format: []u8, parent: ?*anyopaque) QtC.QMovie {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QMovie_new8(fileName_str, format_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMovie_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmovie.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SupportedFormats() []const u8 {
        return qtc.QMovie_SupportedFormats();
    }

    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QMovie_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QMovie_Device(@ptrCast(self));
    }

    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QMovie_SetFileName(@ptrCast(self), fileName_str);
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMovie_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmovie.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QMovie_SetFormat(@ptrCast(self), format_str);
    }

    pub fn Format(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMovie_Format(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmovie.Format: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetBackgroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QMovie_SetBackgroundColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn BackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QMovie_BackgroundColor(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QMovie_State(@ptrCast(self));
    }

    pub fn FrameRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QMovie_FrameRect(@ptrCast(self));
    }

    pub fn CurrentImage(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QMovie_CurrentImage(@ptrCast(self));
    }

    pub fn CurrentPixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QMovie_CurrentPixmap(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QMovie_IsValid(@ptrCast(self));
    }

    pub fn LastError(self: ?*anyopaque, ) i32 {
        return qtc.QMovie_LastError(@ptrCast(self));
    }

    pub fn LastErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMovie_LastErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmovie.LastErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn JumpToFrame(self: ?*anyopaque, frameNumber: i32) bool {
        return qtc.QMovie_JumpToFrame(@ptrCast(self), frameNumber);
    }

    pub fn LoopCount(self: ?*anyopaque, ) i32 {
        return qtc.QMovie_LoopCount(@ptrCast(self));
    }

    pub fn FrameCount(self: ?*anyopaque, ) i32 {
        return qtc.QMovie_FrameCount(@ptrCast(self));
    }

    pub fn NextFrameDelay(self: ?*anyopaque, ) i32 {
        return qtc.QMovie_NextFrameDelay(@ptrCast(self));
    }

    pub fn CurrentFrameNumber(self: ?*anyopaque, ) i32 {
        return qtc.QMovie_CurrentFrameNumber(@ptrCast(self));
    }

    pub fn Speed(self: ?*anyopaque, ) i32 {
        return qtc.QMovie_Speed(@ptrCast(self));
    }

    pub fn ScaledSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMovie_ScaledSize(@ptrCast(self));
    }

    pub fn SetScaledSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QMovie_SetScaledSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn CacheMode(self: ?*anyopaque, ) i32 {
        return qtc.QMovie_CacheMode(@ptrCast(self));
    }

    pub fn SetCacheMode(self: ?*anyopaque, mode: i32) void {
        qtc.QMovie_SetCacheMode(@ptrCast(self), @intCast(mode));
    }

    pub fn Started(self: ?*anyopaque, ) void {
        qtc.QMovie_Started(@ptrCast(self));
    }

    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMovie_Connect_Started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Resized(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QMovie_Resized(@ptrCast(self), @ptrCast(size));
    }

    pub fn OnResized(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMovie_Connect_Resized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Updated(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMovie_Updated(@ptrCast(self), @ptrCast(rect));
    }

    pub fn OnUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMovie_Connect_Updated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QMovie_StateChanged(@ptrCast(self), @intCast(state));
    }

    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMovie_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Error(self: ?*anyopaque, errorVal: i32) void {
        qtc.QMovie_Error(@ptrCast(self), @intCast(errorVal));
    }

    pub fn OnError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMovie_Connect_Error(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Finished(self: ?*anyopaque, ) void {
        qtc.QMovie_Finished(@ptrCast(self));
    }

    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMovie_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FrameChanged(self: ?*anyopaque, frameNumber: i32) void {
        qtc.QMovie_FrameChanged(@ptrCast(self), frameNumber);
    }

    pub fn OnFrameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMovie_Connect_FrameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QMovie_Start(@ptrCast(self));
    }

    pub fn JumpToNextFrame(self: ?*anyopaque, ) bool {
        return qtc.QMovie_JumpToNextFrame(@ptrCast(self));
    }

    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QMovie_SetPaused(@ptrCast(self), paused);
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QMovie_Stop(@ptrCast(self));
    }

    pub fn SetSpeed(self: ?*anyopaque, percentSpeed: i32) void {
        qtc.QMovie_SetSpeed(@ptrCast(self), percentSpeed);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMovie_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmovie.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMovie_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmovie.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMovie_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/movie.html#types
pub const enums = struct {
    pub const MovieState = enum {
        pub const NotRunning: i32 = 0;
        pub const Paused: i32 = 1;
        pub const Running: i32 = 2;
    };

    pub const CacheMode = enum {
        pub const CacheNone: i32 = 0;
        pub const CacheAll: i32 = 1;
    };

};
