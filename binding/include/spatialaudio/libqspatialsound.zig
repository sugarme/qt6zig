const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qspatialsound.html
pub const qspatialsound = struct {

    /// New constructs a new QSpatialSound object.
    pub fn New(engine: ?*anyopaque) QtC.QSpatialSound {
        return qtc.QSpatialSound_new(@ptrCast(engine));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpatialSound_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSource(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QSpatialSound_SetSource(@ptrCast(self), @ptrCast(url));
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QSpatialSound_Source(@ptrCast(self));
    }

    pub fn Loops(self: ?*anyopaque, ) i32 {
        return qtc.QSpatialSound_Loops(@ptrCast(self));
    }

    pub fn SetLoops(self: ?*anyopaque, loops: i32) void {
        qtc.QSpatialSound_SetLoops(@ptrCast(self), loops);
    }

    pub fn AutoPlay(self: ?*anyopaque, ) bool {
        return qtc.QSpatialSound_AutoPlay(@ptrCast(self));
    }

    pub fn SetAutoPlay(self: ?*anyopaque, autoPlay: bool) void {
        qtc.QSpatialSound_SetAutoPlay(@ptrCast(self), autoPlay);
    }

    pub fn SetPosition(self: ?*anyopaque, pos: QtC.QVector3D) void {
        qtc.QSpatialSound_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QSpatialSound_Position(@ptrCast(self));
    }

    pub fn SetRotation(self: ?*anyopaque, q: ?*anyopaque) void {
        qtc.QSpatialSound_SetRotation(@ptrCast(self), @ptrCast(q));
    }

    pub fn Rotation(self: ?*anyopaque, ) QtC.QQuaternion {
        return qtc.QSpatialSound_Rotation(@ptrCast(self));
    }

    pub fn SetVolume(self: ?*anyopaque, volume: f32) void {
        qtc.QSpatialSound_SetVolume(@ptrCast(self), volume);
    }

    pub fn Volume(self: ?*anyopaque, ) f32 {
        return qtc.QSpatialSound_Volume(@ptrCast(self));
    }

    pub fn SetDistanceModel(self: ?*anyopaque, model: i32) void {
        qtc.QSpatialSound_SetDistanceModel(@ptrCast(self), @intCast(model));
    }

    pub fn DistanceModel(self: ?*anyopaque, ) i32 {
        return qtc.QSpatialSound_DistanceModel(@ptrCast(self));
    }

    pub fn SetSize(self: ?*anyopaque, size: f32) void {
        qtc.QSpatialSound_SetSize(@ptrCast(self), size);
    }

    pub fn Size(self: ?*anyopaque, ) f32 {
        return qtc.QSpatialSound_Size(@ptrCast(self));
    }

    pub fn SetDistanceCutoff(self: ?*anyopaque, cutoff: f32) void {
        qtc.QSpatialSound_SetDistanceCutoff(@ptrCast(self), cutoff);
    }

    pub fn DistanceCutoff(self: ?*anyopaque, ) f32 {
        return qtc.QSpatialSound_DistanceCutoff(@ptrCast(self));
    }

    pub fn SetManualAttenuation(self: ?*anyopaque, attenuation: f32) void {
        qtc.QSpatialSound_SetManualAttenuation(@ptrCast(self), attenuation);
    }

    pub fn ManualAttenuation(self: ?*anyopaque, ) f32 {
        return qtc.QSpatialSound_ManualAttenuation(@ptrCast(self));
    }

    pub fn SetOcclusionIntensity(self: ?*anyopaque, occlusion: f32) void {
        qtc.QSpatialSound_SetOcclusionIntensity(@ptrCast(self), occlusion);
    }

    pub fn OcclusionIntensity(self: ?*anyopaque, ) f32 {
        return qtc.QSpatialSound_OcclusionIntensity(@ptrCast(self));
    }

    pub fn SetDirectivity(self: ?*anyopaque, alpha: f32) void {
        qtc.QSpatialSound_SetDirectivity(@ptrCast(self), alpha);
    }

    pub fn Directivity(self: ?*anyopaque, ) f32 {
        return qtc.QSpatialSound_Directivity(@ptrCast(self));
    }

    pub fn SetDirectivityOrder(self: ?*anyopaque, alpha: f32) void {
        qtc.QSpatialSound_SetDirectivityOrder(@ptrCast(self), alpha);
    }

    pub fn DirectivityOrder(self: ?*anyopaque, ) f32 {
        return qtc.QSpatialSound_DirectivityOrder(@ptrCast(self));
    }

    pub fn SetNearFieldGain(self: ?*anyopaque, gain: f32) void {
        qtc.QSpatialSound_SetNearFieldGain(@ptrCast(self), gain);
    }

    pub fn NearFieldGain(self: ?*anyopaque, ) f32 {
        return qtc.QSpatialSound_NearFieldGain(@ptrCast(self));
    }

    pub fn Engine(self: ?*anyopaque, ) QtC.QAudioEngine {
        return qtc.QSpatialSound_Engine(@ptrCast(self));
    }

    pub fn SourceChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_SourceChanged(@ptrCast(self));
    }

    pub fn OnSourceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_SourceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LoopsChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_LoopsChanged(@ptrCast(self));
    }

    pub fn OnLoopsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_LoopsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AutoPlayChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_AutoPlayChanged(@ptrCast(self));
    }

    pub fn OnAutoPlayChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_AutoPlayChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PositionChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_PositionChanged(@ptrCast(self));
    }

    pub fn OnPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_PositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RotationChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_RotationChanged(@ptrCast(self));
    }

    pub fn OnRotationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_RotationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VolumeChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_VolumeChanged(@ptrCast(self));
    }

    pub fn OnVolumeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_VolumeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DistanceModelChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_DistanceModelChanged(@ptrCast(self));
    }

    pub fn OnDistanceModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DistanceModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SizeChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_SizeChanged(@ptrCast(self));
    }

    pub fn OnSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_SizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DistanceCutoffChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_DistanceCutoffChanged(@ptrCast(self));
    }

    pub fn OnDistanceCutoffChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DistanceCutoffChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ManualAttenuationChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_ManualAttenuationChanged(@ptrCast(self));
    }

    pub fn OnManualAttenuationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_ManualAttenuationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OcclusionIntensityChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_OcclusionIntensityChanged(@ptrCast(self));
    }

    pub fn OnOcclusionIntensityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_OcclusionIntensityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DirectivityChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_DirectivityChanged(@ptrCast(self));
    }

    pub fn OnDirectivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DirectivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DirectivityOrderChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_DirectivityOrderChanged(@ptrCast(self));
    }

    pub fn OnDirectivityOrderChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DirectivityOrderChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn NearFieldGainChanged(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_NearFieldGainChanged(@ptrCast(self));
    }

    pub fn OnNearFieldGainChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_NearFieldGainChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Play(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_Play(@ptrCast(self));
    }

    pub fn Pause(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_Pause(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QSpatialSound_Stop(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpatialSound_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpatialSound_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSpatialSound_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/spatialsound.html#types
pub const enums = struct {
    pub const Loops = enum {
        pub const Infinite: i32 = -1;
        pub const Once: i32 = 1;
    };

    pub const DistanceModel = enum {
        pub const Logarithmic: i32 = 0;
        pub const Linear: i32 = 1;
        pub const ManualAttenuation: i32 = 2;
    };

};
