const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qambientsound.html
pub const qambientsound = struct {

    /// New constructs a new QAmbientSound object.
    pub fn New(engine: ?*anyopaque) QtC.QAmbientSound {
        return qtc.QAmbientSound_new(@ptrCast(engine));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAmbientSound_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qambientsound.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSource(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QAmbientSound_SetSource(@ptrCast(self), @ptrCast(url));
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QAmbientSound_Source(@ptrCast(self));
    }

    pub fn Loops(self: ?*anyopaque, ) i32 {
        return qtc.QAmbientSound_Loops(@ptrCast(self));
    }

    pub fn SetLoops(self: ?*anyopaque, loops: i32) void {
        qtc.QAmbientSound_SetLoops(@ptrCast(self), loops);
    }

    pub fn AutoPlay(self: ?*anyopaque, ) bool {
        return qtc.QAmbientSound_AutoPlay(@ptrCast(self));
    }

    pub fn SetAutoPlay(self: ?*anyopaque, autoPlay: bool) void {
        qtc.QAmbientSound_SetAutoPlay(@ptrCast(self), autoPlay);
    }

    pub fn SetVolume(self: ?*anyopaque, volume: f32) void {
        qtc.QAmbientSound_SetVolume(@ptrCast(self), volume);
    }

    pub fn Volume(self: ?*anyopaque, ) f32 {
        return qtc.QAmbientSound_Volume(@ptrCast(self));
    }

    pub fn Engine(self: ?*anyopaque, ) QtC.QAudioEngine {
        return qtc.QAmbientSound_Engine(@ptrCast(self));
    }

    pub fn SourceChanged(self: ?*anyopaque, ) void {
        qtc.QAmbientSound_SourceChanged(@ptrCast(self));
    }

    pub fn OnSourceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAmbientSound_Connect_SourceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LoopsChanged(self: ?*anyopaque, ) void {
        qtc.QAmbientSound_LoopsChanged(@ptrCast(self));
    }

    pub fn OnLoopsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAmbientSound_Connect_LoopsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AutoPlayChanged(self: ?*anyopaque, ) void {
        qtc.QAmbientSound_AutoPlayChanged(@ptrCast(self));
    }

    pub fn OnAutoPlayChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAmbientSound_Connect_AutoPlayChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VolumeChanged(self: ?*anyopaque, ) void {
        qtc.QAmbientSound_VolumeChanged(@ptrCast(self));
    }

    pub fn OnVolumeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAmbientSound_Connect_VolumeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Play(self: ?*anyopaque, ) void {
        qtc.QAmbientSound_Play(@ptrCast(self));
    }

    pub fn Pause(self: ?*anyopaque, ) void {
        qtc.QAmbientSound_Pause(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QAmbientSound_Stop(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAmbientSound_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qambientsound.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAmbientSound_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qambientsound.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAmbientSound_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/ambientsound.html#types
pub const enums = struct {
    pub const Loops = enum {
        pub const Infinite: i32 = -1;
        pub const Once: i32 = 1;
    };

};
