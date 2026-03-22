const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvideoframeinput.html
pub const qvideoframeinput = struct {

    /// New constructs a new QVideoFrameInput object.
    pub fn New() QtC.QVideoFrameInput {
        return qtc.QVideoFrameInput_new();
    }


    /// New2 constructs a new QVideoFrameInput object.
    pub fn New2(format: ?*anyopaque) QtC.QVideoFrameInput {
        return qtc.QVideoFrameInput_new2(@ptrCast(format));
    }


    /// New3 constructs a new QVideoFrameInput object.
    pub fn New3(parent: ?*anyopaque) QtC.QVideoFrameInput {
        return qtc.QVideoFrameInput_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QVideoFrameInput object.
    pub fn New4(format: ?*anyopaque, parent: ?*anyopaque) QtC.QVideoFrameInput {
        return qtc.QVideoFrameInput_new4(@ptrCast(format), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameInput_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeinput.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SendVideoFrame(self: ?*anyopaque, frame: ?*anyopaque) bool {
        return qtc.QVideoFrameInput_SendVideoFrame(@ptrCast(self), @ptrCast(frame));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QVideoFrameFormat {
        return qtc.QVideoFrameInput_Format(@ptrCast(self));
    }

    pub fn CaptureSession(self: ?*anyopaque, ) QtC.QMediaCaptureSession {
        return qtc.QVideoFrameInput_CaptureSession(@ptrCast(self));
    }

    pub fn ReadyToSendVideoFrame(self: ?*anyopaque, ) void {
        qtc.QVideoFrameInput_ReadyToSendVideoFrame(@ptrCast(self));
    }

    pub fn OnReadyToSendVideoFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVideoFrameInput_Connect_ReadyToSendVideoFrame(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameInput_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeinput.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameInput_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeinput.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVideoFrameInput_Delete(@ptrCast(self));
    }
};
