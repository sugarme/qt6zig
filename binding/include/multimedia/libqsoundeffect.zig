const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsoundeffect.html
pub const qsoundeffect = struct {

    /// New constructs a new QSoundEffect object.
    pub fn New() QtC.QSoundEffect {
        return qtc.QSoundEffect_new();
    }


    /// New2 constructs a new QSoundEffect object.
    pub fn New2(audioDevice: ?*anyopaque) QtC.QSoundEffect {
        return qtc.QSoundEffect_new2(@ptrCast(audioDevice));
    }


    /// New3 constructs a new QSoundEffect object.
    pub fn New3(parent: ?*anyopaque) QtC.QSoundEffect {
        return qtc.QSoundEffect_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QSoundEffect object.
    pub fn New4(audioDevice: ?*anyopaque, parent: ?*anyopaque) QtC.QSoundEffect {
        return qtc.QSoundEffect_new4(@ptrCast(audioDevice), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSoundEffect_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsoundeffect.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SupportedMimeTypes() []const u8 {
        return qtc.QSoundEffect_SupportedMimeTypes();
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QSoundEffect_Source(@ptrCast(self));
    }

    pub fn SetSource(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QSoundEffect_SetSource(@ptrCast(self), @ptrCast(url));
    }

    pub fn LoopCount(self: ?*anyopaque, ) i32 {
        return qtc.QSoundEffect_LoopCount(@ptrCast(self));
    }

    pub fn LoopsRemaining(self: ?*anyopaque, ) i32 {
        return qtc.QSoundEffect_LoopsRemaining(@ptrCast(self));
    }

    pub fn SetLoopCount(self: ?*anyopaque, loopCount: i32) void {
        qtc.QSoundEffect_SetLoopCount(@ptrCast(self), loopCount);
    }

    pub fn AudioDevice(self: ?*anyopaque, ) QtC.QAudioDevice {
        return qtc.QSoundEffect_AudioDevice(@ptrCast(self));
    }

    pub fn SetAudioDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QSoundEffect_SetAudioDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Volume(self: ?*anyopaque, ) f32 {
        return qtc.QSoundEffect_Volume(@ptrCast(self));
    }

    pub fn SetVolume(self: ?*anyopaque, volume: f32) void {
        qtc.QSoundEffect_SetVolume(@ptrCast(self), volume);
    }

    pub fn IsMuted(self: ?*anyopaque, ) bool {
        return qtc.QSoundEffect_IsMuted(@ptrCast(self));
    }

    pub fn SetMuted(self: ?*anyopaque, muted: bool) void {
        qtc.QSoundEffect_SetMuted(@ptrCast(self), muted);
    }

    pub fn IsLoaded(self: ?*anyopaque, ) bool {
        return qtc.QSoundEffect_IsLoaded(@ptrCast(self));
    }

    pub fn IsPlaying(self: ?*anyopaque, ) bool {
        return qtc.QSoundEffect_IsPlaying(@ptrCast(self));
    }

    pub fn Status(self: ?*anyopaque, ) i32 {
        return qtc.QSoundEffect_Status(@ptrCast(self));
    }

    pub fn SourceChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_SourceChanged(@ptrCast(self));
    }

    pub fn OnSourceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_SourceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LoopCountChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_LoopCountChanged(@ptrCast(self));
    }

    pub fn OnLoopCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_LoopCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LoopsRemainingChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_LoopsRemainingChanged(@ptrCast(self));
    }

    pub fn OnLoopsRemainingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_LoopsRemainingChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VolumeChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_VolumeChanged(@ptrCast(self));
    }

    pub fn OnVolumeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_VolumeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MutedChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_MutedChanged(@ptrCast(self));
    }

    pub fn OnMutedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_MutedChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LoadedChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_LoadedChanged(@ptrCast(self));
    }

    pub fn OnLoadedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_LoadedChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PlayingChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_PlayingChanged(@ptrCast(self));
    }

    pub fn OnPlayingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_PlayingChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StatusChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_StatusChanged(@ptrCast(self));
    }

    pub fn OnStatusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_StatusChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioDeviceChanged(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_AudioDeviceChanged(@ptrCast(self));
    }

    pub fn OnAudioDeviceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_AudioDeviceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Play(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_Play(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QSoundEffect_Stop(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSoundEffect_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsoundeffect.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSoundEffect_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsoundeffect.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSoundEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/soundeffect.html#types
pub const enums = struct {
    pub const Loop = enum {
        pub const Infinite: i32 = -2;
    };

    pub const Status = enum {
        pub const Null: i32 = 0;
        pub const Loading: i32 = 1;
        pub const Ready: i32 = 2;
        pub const Error: i32 = 3;
    };

};
