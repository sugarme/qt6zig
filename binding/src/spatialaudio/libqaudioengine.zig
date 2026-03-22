const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudioengine.html
pub const qaudioengine = struct {

    /// New constructs a new QAudioEngine object.
    pub fn New() QtC.QAudioEngine {
        return qtc.QAudioEngine_new();
    }


    /// New2 constructs a new QAudioEngine object.
    pub fn New2(parent: ?*anyopaque) QtC.QAudioEngine {
        return qtc.QAudioEngine_new2(@ptrCast(parent));
    }


    /// New3 constructs a new QAudioEngine object.
    pub fn New3(sampleRate: i32) QtC.QAudioEngine {
        return qtc.QAudioEngine_new3(sampleRate);
    }


    /// New4 constructs a new QAudioEngine object.
    pub fn New4(sampleRate: i32, parent: ?*anyopaque) QtC.QAudioEngine {
        return qtc.QAudioEngine_new4(sampleRate, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioEngine_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudioengine.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOutputMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAudioEngine_SetOutputMode(@ptrCast(self), @intCast(mode));
    }

    pub fn OutputMode(self: ?*anyopaque, ) i32 {
        return qtc.QAudioEngine_OutputMode(@ptrCast(self));
    }

    pub fn SampleRate(self: ?*anyopaque, ) i32 {
        return qtc.QAudioEngine_SampleRate(@ptrCast(self));
    }

    pub fn SetOutputDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAudioEngine_SetOutputDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn OutputDevice(self: ?*anyopaque, ) QtC.QAudioDevice {
        return qtc.QAudioEngine_OutputDevice(@ptrCast(self));
    }

    pub fn SetMasterVolume(self: ?*anyopaque, volume: f32) void {
        qtc.QAudioEngine_SetMasterVolume(@ptrCast(self), volume);
    }

    pub fn MasterVolume(self: ?*anyopaque, ) f32 {
        return qtc.QAudioEngine_MasterVolume(@ptrCast(self));
    }

    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QAudioEngine_SetPaused(@ptrCast(self), paused);
    }

    pub fn Paused(self: ?*anyopaque, ) bool {
        return qtc.QAudioEngine_Paused(@ptrCast(self));
    }

    pub fn SetRoomEffectsEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QAudioEngine_SetRoomEffectsEnabled(@ptrCast(self), enabled);
    }

    pub fn RoomEffectsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QAudioEngine_RoomEffectsEnabled(@ptrCast(self));
    }

    pub fn SetDistanceScale(self: ?*anyopaque, scale: f32) void {
        qtc.QAudioEngine_SetDistanceScale(@ptrCast(self), scale);
    }

    pub fn DistanceScale(self: ?*anyopaque, ) f32 {
        return qtc.QAudioEngine_DistanceScale(@ptrCast(self));
    }

    pub fn OutputModeChanged(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_OutputModeChanged(@ptrCast(self));
    }

    pub fn OnOutputModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioEngine_Connect_OutputModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OutputDeviceChanged(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_OutputDeviceChanged(@ptrCast(self));
    }

    pub fn OnOutputDeviceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioEngine_Connect_OutputDeviceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MasterVolumeChanged(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_MasterVolumeChanged(@ptrCast(self));
    }

    pub fn OnMasterVolumeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioEngine_Connect_MasterVolumeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PausedChanged(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_PausedChanged(@ptrCast(self));
    }

    pub fn OnPausedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioEngine_Connect_PausedChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DistanceScaleChanged(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_DistanceScaleChanged(@ptrCast(self));
    }

    pub fn OnDistanceScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioEngine_Connect_DistanceScaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_Start(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_Stop(@ptrCast(self));
    }

    pub fn Pause(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_Pause(@ptrCast(self));
    }

    pub fn Resume(self: ?*anyopaque, ) void {
        qtc.QAudioEngine_Resume(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioEngine_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudioengine.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioEngine_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudioengine.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioEngine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/audioengine.html#types
pub const enums = struct {
    pub const OutputMode = enum {
        pub const Surround: i32 = 0;
        pub const Stereo: i32 = 1;
        pub const Headphone: i32 = 2;
    };

};
