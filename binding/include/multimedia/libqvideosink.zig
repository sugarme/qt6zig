const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvideosink.html
pub const qvideosink = struct {

    /// New constructs a new QVideoSink object.
    pub fn New() QtC.QVideoSink {
        return qtc.QVideoSink_new();
    }


    /// New2 constructs a new QVideoSink object.
    pub fn New2(parent: ?*anyopaque) QtC.QVideoSink {
        return qtc.QVideoSink_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoSink_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideosink.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn VideoSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QVideoSink_VideoSize(@ptrCast(self));
    }

    pub fn SubtitleText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoSink_SubtitleText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideosink.SubtitleText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSubtitleText(self: ?*anyopaque, subtitle: []const u8) void {
        const subtitle_str = qtc.libqt_string{
    .len = subtitle.len,
    .data = subtitle.ptr,
};
qtc.QVideoSink_SetSubtitleText(@ptrCast(self), subtitle_str);
    }

    pub fn SetVideoFrame(self: ?*anyopaque, frame: ?*anyopaque) void {
        qtc.QVideoSink_SetVideoFrame(@ptrCast(self), @ptrCast(frame));
    }

    pub fn VideoFrame(self: ?*anyopaque, ) QtC.QVideoFrame {
        return qtc.QVideoSink_VideoFrame(@ptrCast(self));
    }

    pub fn VideoFrameChanged(self: ?*anyopaque, frame: ?*anyopaque) void {
        qtc.QVideoSink_VideoFrameChanged(@ptrCast(self), @ptrCast(frame));
    }

    pub fn OnVideoFrameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVideoSink_Connect_VideoFrameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SubtitleTextChanged(self: ?*anyopaque, subtitleText: []const u8) void {
        const subtitleText_str = qtc.libqt_string{
    .len = subtitleText.len,
    .data = subtitleText.ptr,
};
qtc.QVideoSink_SubtitleTextChanged(@ptrCast(self), subtitleText_str);
    }

    pub fn OnSubtitleTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QVideoSink_Connect_SubtitleTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VideoSizeChanged(self: ?*anyopaque, ) void {
        qtc.QVideoSink_VideoSizeChanged(@ptrCast(self));
    }

    pub fn OnVideoSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVideoSink_Connect_VideoSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoSink_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideosink.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoSink_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideosink.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVideoSink_Delete(@ptrCast(self));
    }
};
