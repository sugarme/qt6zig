const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudiooutput.html
pub const qaudiooutput = struct {

    /// New constructs a new QAudioOutput object.
    pub fn New() QtC.QAudioOutput {
        return qtc.QAudioOutput_new();
    }


    /// New2 constructs a new QAudioOutput object.
    pub fn New2(device: ?*anyopaque) QtC.QAudioOutput {
        return qtc.QAudioOutput_new2(@ptrCast(device));
    }


    /// New3 constructs a new QAudioOutput object.
    pub fn New3(parent: ?*anyopaque) QtC.QAudioOutput {
        return qtc.QAudioOutput_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QAudioOutput object.
    pub fn New4(device: ?*anyopaque, parent: ?*anyopaque) QtC.QAudioOutput {
        return qtc.QAudioOutput_new4(@ptrCast(device), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioOutput_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiooutput.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QAudioDevice {
        return qtc.QAudioOutput_Device(@ptrCast(self));
    }

    pub fn Volume(self: ?*anyopaque, ) f32 {
        return qtc.QAudioOutput_Volume(@ptrCast(self));
    }

    pub fn IsMuted(self: ?*anyopaque, ) bool {
        return qtc.QAudioOutput_IsMuted(@ptrCast(self));
    }

    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAudioOutput_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn SetVolume(self: ?*anyopaque, volume: f32) void {
        qtc.QAudioOutput_SetVolume(@ptrCast(self), volume);
    }

    pub fn SetMuted(self: ?*anyopaque, muted: bool) void {
        qtc.QAudioOutput_SetMuted(@ptrCast(self), muted);
    }

    pub fn DeviceChanged(self: ?*anyopaque, ) void {
        qtc.QAudioOutput_DeviceChanged(@ptrCast(self));
    }

    pub fn OnDeviceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioOutput_Connect_DeviceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VolumeChanged(self: ?*anyopaque, volume: f32) void {
        qtc.QAudioOutput_VolumeChanged(@ptrCast(self), volume);
    }

    pub fn OnVolumeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QAudioOutput_Connect_VolumeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MutedChanged(self: ?*anyopaque, muted: bool) void {
        qtc.QAudioOutput_MutedChanged(@ptrCast(self), muted);
    }

    pub fn OnMutedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAudioOutput_Connect_MutedChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioOutput_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiooutput.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioOutput_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiooutput.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioOutput_Delete(@ptrCast(self));
    }
};
