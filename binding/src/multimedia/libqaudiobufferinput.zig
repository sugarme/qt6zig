const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudiobufferinput.html
pub const qaudiobufferinput = struct {

    /// New constructs a new QAudioBufferInput object.
    pub fn New() QtC.QAudioBufferInput {
        return qtc.QAudioBufferInput_new();
    }


    /// New2 constructs a new QAudioBufferInput object.
    pub fn New2(format: ?*anyopaque) QtC.QAudioBufferInput {
        return qtc.QAudioBufferInput_new2(@ptrCast(format));
    }


    /// New3 constructs a new QAudioBufferInput object.
    pub fn New3(parent: ?*anyopaque) QtC.QAudioBufferInput {
        return qtc.QAudioBufferInput_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QAudioBufferInput object.
    pub fn New4(format: ?*anyopaque, parent: ?*anyopaque) QtC.QAudioBufferInput {
        return qtc.QAudioBufferInput_new4(@ptrCast(format), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioBufferInput_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiobufferinput.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SendAudioBuffer(self: ?*anyopaque, audioBuffer: ?*anyopaque) bool {
        return qtc.QAudioBufferInput_SendAudioBuffer(@ptrCast(self), @ptrCast(audioBuffer));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QAudioFormat {
        return qtc.QAudioBufferInput_Format(@ptrCast(self));
    }

    pub fn CaptureSession(self: ?*anyopaque, ) QtC.QMediaCaptureSession {
        return qtc.QAudioBufferInput_CaptureSession(@ptrCast(self));
    }

    pub fn ReadyToSendAudioBuffer(self: ?*anyopaque, ) void {
        qtc.QAudioBufferInput_ReadyToSendAudioBuffer(@ptrCast(self));
    }

    pub fn OnReadyToSendAudioBuffer(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioBufferInput_Connect_ReadyToSendAudioBuffer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioBufferInput_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiobufferinput.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioBufferInput_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiobufferinput.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioBufferInput_Delete(@ptrCast(self));
    }
};
