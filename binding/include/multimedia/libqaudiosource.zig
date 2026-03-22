const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudiosource.html
pub const qaudiosource = struct {

    /// New constructs a new QAudioSource object.
    pub fn New() QtC.QAudioSource {
        return qtc.QAudioSource_new();
    }


    /// New2 constructs a new QAudioSource object.
    pub fn New2(audioDeviceInfo: ?*anyopaque) QtC.QAudioSource {
        return qtc.QAudioSource_new2(@ptrCast(audioDeviceInfo));
    }


    /// New3 constructs a new QAudioSource object.
    pub fn New3(format: ?*anyopaque) QtC.QAudioSource {
        return qtc.QAudioSource_new3(@ptrCast(format));
    }


    /// New4 constructs a new QAudioSource object.
    pub fn New4(format: ?*anyopaque, parent: ?*anyopaque) QtC.QAudioSource {
        return qtc.QAudioSource_new4(@ptrCast(format), @ptrCast(parent));
    }


    /// New5 constructs a new QAudioSource object.
    pub fn New5(audioDeviceInfo: ?*anyopaque, format: ?*anyopaque) QtC.QAudioSource {
        return qtc.QAudioSource_new5(@ptrCast(audioDeviceInfo), @ptrCast(format));
    }


    /// New6 constructs a new QAudioSource object.
    pub fn New6(audioDeviceInfo: ?*anyopaque, format: ?*anyopaque, parent: ?*anyopaque) QtC.QAudioSource {
        return qtc.QAudioSource_new6(@ptrCast(audioDeviceInfo), @ptrCast(format), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioSource_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiosource.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QAudioSource_IsNull(@ptrCast(self));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QAudioFormat {
        return qtc.QAudioSource_Format(@ptrCast(self));
    }

    pub fn Start(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAudioSource_Start(@ptrCast(self), @ptrCast(device));
    }

    pub fn Start2(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QAudioSource_Start2(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QAudioSource_Stop(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QAudioSource_Reset(@ptrCast(self));
    }

    pub fn Suspend(self: ?*anyopaque, ) void {
        qtc.QAudioSource_Suspend(@ptrCast(self));
    }

    pub fn Resume(self: ?*anyopaque, ) void {
        qtc.QAudioSource_Resume(@ptrCast(self));
    }

    pub fn SetBufferSize(self: ?*anyopaque, bytes: i64) void {
        qtc.QAudioSource_SetBufferSize(@ptrCast(self), bytes);
    }

    pub fn BufferSize(self: ?*anyopaque, ) i64 {
        return qtc.QAudioSource_BufferSize(@ptrCast(self));
    }

    pub fn BytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QAudioSource_BytesAvailable(@ptrCast(self));
    }

    pub fn SetVolume(self: ?*anyopaque, volume: f64) void {
        qtc.QAudioSource_SetVolume(@ptrCast(self), volume);
    }

    pub fn Volume(self: ?*anyopaque, ) f64 {
        return qtc.QAudioSource_Volume(@ptrCast(self));
    }

    pub fn ProcessedUSecs(self: ?*anyopaque, ) i64 {
        return qtc.QAudioSource_ProcessedUSecs(@ptrCast(self));
    }

    pub fn ElapsedUSecs(self: ?*anyopaque, ) i64 {
        return qtc.QAudioSource_ElapsedUSecs(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QAudioSource_Error(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QAudioSource_State(@ptrCast(self));
    }

    pub fn StateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QAudioSource_StateChanged(@ptrCast(self), @intCast(state));
    }

    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAudioSource_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioSource_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiosource.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioSource_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiosource.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioSource_Delete(@ptrCast(self));
    }
};
