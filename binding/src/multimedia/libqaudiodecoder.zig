const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudiodecoder.html
pub const qaudiodecoder = struct {

    /// New constructs a new QAudioDecoder object.
    pub fn New() QtC.QAudioDecoder {
        return qtc.QAudioDecoder_new();
    }


    /// New2 constructs a new QAudioDecoder object.
    pub fn New2(parent: ?*anyopaque) QtC.QAudioDecoder {
        return qtc.QAudioDecoder_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioDecoder_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiodecoder.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsSupported(self: ?*anyopaque, ) bool {
        return qtc.QAudioDecoder_IsSupported(@ptrCast(self));
    }

    pub fn IsDecoding(self: ?*anyopaque, ) bool {
        return qtc.QAudioDecoder_IsDecoding(@ptrCast(self));
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QAudioDecoder_Source(@ptrCast(self));
    }

    pub fn SetSource(self: ?*anyopaque, fileName: ?*anyopaque) void {
        qtc.QAudioDecoder_SetSource(@ptrCast(self), @ptrCast(fileName));
    }

    pub fn SourceDevice(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QAudioDecoder_SourceDevice(@ptrCast(self));
    }

    pub fn SetSourceDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAudioDecoder_SetSourceDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn AudioFormat(self: ?*anyopaque, ) QtC.QAudioFormat {
        return qtc.QAudioDecoder_AudioFormat(@ptrCast(self));
    }

    pub fn SetAudioFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QAudioDecoder_SetAudioFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QAudioDecoder_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioDecoder_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiodecoder.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Read(self: ?*anyopaque, ) QtC.QAudioBuffer {
        return qtc.QAudioDecoder_Read(@ptrCast(self));
    }

    pub fn BufferAvailable(self: ?*anyopaque, ) bool {
        return qtc.QAudioDecoder_BufferAvailable(@ptrCast(self));
    }

    pub fn Position(self: ?*anyopaque, ) i64 {
        return qtc.QAudioDecoder_Position(@ptrCast(self));
    }

    pub fn Duration(self: ?*anyopaque, ) i64 {
        return qtc.QAudioDecoder_Duration(@ptrCast(self));
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QAudioDecoder_Start(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QAudioDecoder_Stop(@ptrCast(self));
    }

    pub fn BufferAvailableChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QAudioDecoder_BufferAvailableChanged(@ptrCast(self), param1);
    }

    pub fn BufferReady(self: ?*anyopaque, ) void {
        qtc.QAudioDecoder_BufferReady(@ptrCast(self));
    }

    pub fn Finished(self: ?*anyopaque, ) void {
        qtc.QAudioDecoder_Finished(@ptrCast(self));
    }

    pub fn IsDecodingChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QAudioDecoder_IsDecodingChanged(@ptrCast(self), param1);
    }

    pub fn FormatChanged(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QAudioDecoder_FormatChanged(@ptrCast(self), @ptrCast(format));
    }

    pub fn Error2(self: ?*anyopaque, errorVal: i32) void {
        qtc.QAudioDecoder_Error2(@ptrCast(self), @intCast(errorVal));
    }

    pub fn SourceChanged(self: ?*anyopaque, ) void {
        qtc.QAudioDecoder_SourceChanged(@ptrCast(self));
    }

    pub fn PositionChanged(self: ?*anyopaque, position: i64) void {
        qtc.QAudioDecoder_PositionChanged(@ptrCast(self), position);
    }

    pub fn DurationChanged(self: ?*anyopaque, duration: i64) void {
        qtc.QAudioDecoder_DurationChanged(@ptrCast(self), duration);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioDecoder_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiodecoder.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioDecoder_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiodecoder.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioDecoder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/audiodecoder.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const ResourceError: i32 = 1;
        pub const FormatError: i32 = 2;
        pub const AccessDeniedError: i32 = 3;
        pub const NotSupportedError: i32 = 4;
    };

};
