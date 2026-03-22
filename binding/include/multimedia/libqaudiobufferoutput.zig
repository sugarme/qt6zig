const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudiobufferoutput.html
pub const qaudiobufferoutput = struct {

    /// New constructs a new QAudioBufferOutput object.
    pub fn New() QtC.QAudioBufferOutput {
        return qtc.QAudioBufferOutput_new();
    }


    /// New2 constructs a new QAudioBufferOutput object.
    pub fn New2(format: ?*anyopaque) QtC.QAudioBufferOutput {
        return qtc.QAudioBufferOutput_new2(@ptrCast(format));
    }


    /// New3 constructs a new QAudioBufferOutput object.
    pub fn New3(parent: ?*anyopaque) QtC.QAudioBufferOutput {
        return qtc.QAudioBufferOutput_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QAudioBufferOutput object.
    pub fn New4(format: ?*anyopaque, parent: ?*anyopaque) QtC.QAudioBufferOutput {
        return qtc.QAudioBufferOutput_new4(@ptrCast(format), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioBufferOutput_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiobufferoutput.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QAudioFormat {
        return qtc.QAudioBufferOutput_Format(@ptrCast(self));
    }

    pub fn AudioBufferReceived(self: ?*anyopaque, buffer: ?*anyopaque) void {
        qtc.QAudioBufferOutput_AudioBufferReceived(@ptrCast(self), @ptrCast(buffer));
    }

    pub fn OnAudioBufferReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAudioBufferOutput_Connect_AudioBufferReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioBufferOutput_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiobufferoutput.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioBufferOutput_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiobufferoutput.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioBufferOutput_Delete(@ptrCast(self));
    }
};
