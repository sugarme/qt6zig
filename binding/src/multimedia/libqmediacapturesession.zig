const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmediacapturesession.html
pub const qmediacapturesession = struct {

    /// New constructs a new QMediaCaptureSession object.
    pub fn New() QtC.QMediaCaptureSession {
        return qtc.QMediaCaptureSession_new();
    }


    /// New2 constructs a new QMediaCaptureSession object.
    pub fn New2(parent: ?*anyopaque) QtC.QMediaCaptureSession {
        return qtc.QMediaCaptureSession_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaCaptureSession_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediacapturesession.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AudioInput(self: ?*anyopaque, ) QtC.QAudioInput {
        return qtc.QMediaCaptureSession_AudioInput(@ptrCast(self));
    }

    pub fn SetAudioInput(self: ?*anyopaque, input: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetAudioInput(@ptrCast(self), @ptrCast(input));
    }

    pub fn AudioBufferInput(self: ?*anyopaque, ) QtC.QAudioBufferInput {
        return qtc.QMediaCaptureSession_AudioBufferInput(@ptrCast(self));
    }

    pub fn SetAudioBufferInput(self: ?*anyopaque, input: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetAudioBufferInput(@ptrCast(self), @ptrCast(input));
    }

    pub fn Camera(self: ?*anyopaque, ) QtC.QCamera {
        return qtc.QMediaCaptureSession_Camera(@ptrCast(self));
    }

    pub fn SetCamera(self: ?*anyopaque, camera: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetCamera(@ptrCast(self), @ptrCast(camera));
    }

    pub fn ImageCapture(self: ?*anyopaque, ) QtC.QImageCapture {
        return qtc.QMediaCaptureSession_ImageCapture(@ptrCast(self));
    }

    pub fn SetImageCapture(self: ?*anyopaque, imageCapture: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetImageCapture(@ptrCast(self), @ptrCast(imageCapture));
    }

    pub fn ScreenCapture(self: ?*anyopaque, ) QtC.QScreenCapture {
        return qtc.QMediaCaptureSession_ScreenCapture(@ptrCast(self));
    }

    pub fn SetScreenCapture(self: ?*anyopaque, screenCapture: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetScreenCapture(@ptrCast(self), @ptrCast(screenCapture));
    }

    pub fn WindowCapture(self: ?*anyopaque, ) QtC.QWindowCapture {
        return qtc.QMediaCaptureSession_WindowCapture(@ptrCast(self));
    }

    pub fn SetWindowCapture(self: ?*anyopaque, windowCapture: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetWindowCapture(@ptrCast(self), @ptrCast(windowCapture));
    }

    pub fn VideoFrameInput(self: ?*anyopaque, ) QtC.QVideoFrameInput {
        return qtc.QMediaCaptureSession_VideoFrameInput(@ptrCast(self));
    }

    pub fn SetVideoFrameInput(self: ?*anyopaque, input: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetVideoFrameInput(@ptrCast(self), @ptrCast(input));
    }

    pub fn Recorder(self: ?*anyopaque, ) QtC.QMediaRecorder {
        return qtc.QMediaCaptureSession_Recorder(@ptrCast(self));
    }

    pub fn SetRecorder(self: ?*anyopaque, recorder: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetRecorder(@ptrCast(self), @ptrCast(recorder));
    }

    pub fn SetVideoOutput(self: ?*anyopaque, output: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetVideoOutput(@ptrCast(self), @ptrCast(output));
    }

    pub fn VideoOutput(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QMediaCaptureSession_VideoOutput(@ptrCast(self));
    }

    pub fn SetVideoSink(self: ?*anyopaque, sink: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetVideoSink(@ptrCast(self), @ptrCast(sink));
    }

    pub fn VideoSink(self: ?*anyopaque, ) QtC.QVideoSink {
        return qtc.QMediaCaptureSession_VideoSink(@ptrCast(self));
    }

    pub fn SetAudioOutput(self: ?*anyopaque, output: ?*anyopaque) void {
        qtc.QMediaCaptureSession_SetAudioOutput(@ptrCast(self), @ptrCast(output));
    }

    pub fn AudioOutput(self: ?*anyopaque, ) QtC.QAudioOutput {
        return qtc.QMediaCaptureSession_AudioOutput(@ptrCast(self));
    }

    pub fn AudioInputChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_AudioInputChanged(@ptrCast(self));
    }

    pub fn OnAudioInputChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioInputChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioBufferInputChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_AudioBufferInputChanged(@ptrCast(self));
    }

    pub fn OnAudioBufferInputChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioBufferInputChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CameraChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_CameraChanged(@ptrCast(self));
    }

    pub fn OnCameraChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_CameraChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ScreenCaptureChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_ScreenCaptureChanged(@ptrCast(self));
    }

    pub fn OnScreenCaptureChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_ScreenCaptureChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WindowCaptureChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_WindowCaptureChanged(@ptrCast(self));
    }

    pub fn OnWindowCaptureChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_WindowCaptureChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VideoFrameInputChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_VideoFrameInputChanged(@ptrCast(self));
    }

    pub fn OnVideoFrameInputChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_VideoFrameInputChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ImageCaptureChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_ImageCaptureChanged(@ptrCast(self));
    }

    pub fn OnImageCaptureChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_ImageCaptureChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RecorderChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_RecorderChanged(@ptrCast(self));
    }

    pub fn OnRecorderChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_RecorderChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VideoOutputChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_VideoOutputChanged(@ptrCast(self));
    }

    pub fn OnVideoOutputChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_VideoOutputChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioOutputChanged(self: ?*anyopaque, ) void {
        qtc.QMediaCaptureSession_AudioOutputChanged(@ptrCast(self));
    }

    pub fn OnAudioOutputChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioOutputChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaCaptureSession_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediacapturesession.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaCaptureSession_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediacapturesession.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaCaptureSession_Delete(@ptrCast(self));
    }
};
