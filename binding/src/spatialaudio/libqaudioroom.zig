const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudioroom.html
pub const qaudioroom = struct {

    /// New constructs a new QAudioRoom object.
    pub fn New(engine: ?*anyopaque) QtC.QAudioRoom {
        return qtc.QAudioRoom_new(@ptrCast(engine));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioRoom_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudioroom.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPosition(self: ?*anyopaque, pos: QtC.QVector3D) void {
        qtc.QAudioRoom_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QAudioRoom_Position(@ptrCast(self));
    }

    pub fn SetDimensions(self: ?*anyopaque, dim: QtC.QVector3D) void {
        qtc.QAudioRoom_SetDimensions(@ptrCast(self), @ptrCast(dim));
    }

    pub fn Dimensions(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QAudioRoom_Dimensions(@ptrCast(self));
    }

    pub fn SetRotation(self: ?*anyopaque, q: ?*anyopaque) void {
        qtc.QAudioRoom_SetRotation(@ptrCast(self), @ptrCast(q));
    }

    pub fn Rotation(self: ?*anyopaque, ) QtC.QQuaternion {
        return qtc.QAudioRoom_Rotation(@ptrCast(self));
    }

    pub fn SetWallMaterial(self: ?*anyopaque, wall: i32, material: i32) void {
        qtc.QAudioRoom_SetWallMaterial(@ptrCast(self), @intCast(wall), @intCast(material));
    }

    pub fn WallMaterial(self: ?*anyopaque, wall: i32) i32 {
        return qtc.QAudioRoom_WallMaterial(@ptrCast(self), @intCast(wall));
    }

    pub fn SetReflectionGain(self: ?*anyopaque, factor: f32) void {
        qtc.QAudioRoom_SetReflectionGain(@ptrCast(self), factor);
    }

    pub fn ReflectionGain(self: ?*anyopaque, ) f32 {
        return qtc.QAudioRoom_ReflectionGain(@ptrCast(self));
    }

    pub fn SetReverbGain(self: ?*anyopaque, factor: f32) void {
        qtc.QAudioRoom_SetReverbGain(@ptrCast(self), factor);
    }

    pub fn ReverbGain(self: ?*anyopaque, ) f32 {
        return qtc.QAudioRoom_ReverbGain(@ptrCast(self));
    }

    pub fn SetReverbTime(self: ?*anyopaque, factor: f32) void {
        qtc.QAudioRoom_SetReverbTime(@ptrCast(self), factor);
    }

    pub fn ReverbTime(self: ?*anyopaque, ) f32 {
        return qtc.QAudioRoom_ReverbTime(@ptrCast(self));
    }

    pub fn SetReverbBrightness(self: ?*anyopaque, factor: f32) void {
        qtc.QAudioRoom_SetReverbBrightness(@ptrCast(self), factor);
    }

    pub fn ReverbBrightness(self: ?*anyopaque, ) f32 {
        return qtc.QAudioRoom_ReverbBrightness(@ptrCast(self));
    }

    pub fn PositionChanged(self: ?*anyopaque, ) void {
        qtc.QAudioRoom_PositionChanged(@ptrCast(self));
    }

    pub fn OnPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_PositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DimensionsChanged(self: ?*anyopaque, ) void {
        qtc.QAudioRoom_DimensionsChanged(@ptrCast(self));
    }

    pub fn OnDimensionsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_DimensionsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RotationChanged(self: ?*anyopaque, ) void {
        qtc.QAudioRoom_RotationChanged(@ptrCast(self));
    }

    pub fn OnRotationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_RotationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WallsChanged(self: ?*anyopaque, ) void {
        qtc.QAudioRoom_WallsChanged(@ptrCast(self));
    }

    pub fn OnWallsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_WallsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReflectionGainChanged(self: ?*anyopaque, ) void {
        qtc.QAudioRoom_ReflectionGainChanged(@ptrCast(self));
    }

    pub fn OnReflectionGainChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_ReflectionGainChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReverbGainChanged(self: ?*anyopaque, ) void {
        qtc.QAudioRoom_ReverbGainChanged(@ptrCast(self));
    }

    pub fn OnReverbGainChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_ReverbGainChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReverbTimeChanged(self: ?*anyopaque, ) void {
        qtc.QAudioRoom_ReverbTimeChanged(@ptrCast(self));
    }

    pub fn OnReverbTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_ReverbTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReverbBrightnessChanged(self: ?*anyopaque, ) void {
        qtc.QAudioRoom_ReverbBrightnessChanged(@ptrCast(self));
    }

    pub fn OnReverbBrightnessChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_ReverbBrightnessChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioRoom_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudioroom.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioRoom_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudioroom.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioRoom_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/audioroom.html#types
pub const enums = struct {
    pub const Material = enum {
        pub const Transparent: i32 = 0;
        pub const AcousticCeilingTiles: i32 = 1;
        pub const BrickBare: i32 = 2;
        pub const BrickPainted: i32 = 3;
        pub const ConcreteBlockCoarse: i32 = 4;
        pub const ConcreteBlockPainted: i32 = 5;
        pub const CurtainHeavy: i32 = 6;
        pub const FiberGlassInsulation: i32 = 7;
        pub const GlassThin: i32 = 8;
        pub const GlassThick: i32 = 9;
        pub const Grass: i32 = 10;
        pub const LinoleumOnConcrete: i32 = 11;
        pub const Marble: i32 = 12;
        pub const Metal: i32 = 13;
        pub const ParquetOnConcrete: i32 = 14;
        pub const PlasterRough: i32 = 15;
        pub const PlasterSmooth: i32 = 16;
        pub const PlywoodPanel: i32 = 17;
        pub const PolishedConcreteOrTile: i32 = 18;
        pub const Sheetrock: i32 = 19;
        pub const WaterOrIceSurface: i32 = 20;
        pub const WoodCeiling: i32 = 21;
        pub const WoodPanel: i32 = 22;
        pub const UniformMaterial: i32 = 23;
    };

    pub const Wall = enum {
        pub const LeftWall: i32 = 0;
        pub const RightWall: i32 = 1;
        pub const Floor: i32 = 2;
        pub const Ceiling: i32 = 3;
        pub const FrontWall: i32 = 4;
        pub const BackWall: i32 = 5;
    };

};
