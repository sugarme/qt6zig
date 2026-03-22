const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicstransform.html
pub const qgraphicstransform = struct {

    /// New constructs a new QGraphicsTransform object.
    pub fn New() QtC.QGraphicsTransform {
        return qtc.QGraphicsTransform_new();
    }


    /// New2 constructs a new QGraphicsTransform object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsTransform {
        return qtc.QGraphicsTransform_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsTransform_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicstransform.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ApplyTo(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsTransform_ApplyTo(@ptrCast(self), @ptrCast(matrix));
    }

    /// Allows for overriding the related default method
    pub fn OnApplyTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTransform_OnApplyTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseApplyTo(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsTransform_QBaseApplyTo(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn Update(self: ?*anyopaque, ) void {
        qtc.QGraphicsTransform_Update(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTransform_OnUpdate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdate(self: ?*anyopaque, ) void {
        qtc.QGraphicsTransform_QBaseUpdate(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsTransform_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicstransform.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsTransform_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicstransform.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsTransform_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscale.html
pub const qgraphicsscale = struct {

    /// New constructs a new QGraphicsScale object.
    pub fn New() QtC.QGraphicsScale {
        return qtc.QGraphicsScale_new();
    }


    /// New2 constructs a new QGraphicsScale object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsScale {
        return qtc.QGraphicsScale_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsScale_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscale.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Origin(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QGraphicsScale_Origin(@ptrCast(self));
    }

    pub fn SetOrigin(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QGraphicsScale_SetOrigin(@ptrCast(self), @ptrCast(point));
    }

    pub fn XScale(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsScale_XScale(@ptrCast(self));
    }

    pub fn SetXScale(self: ?*anyopaque, xScale: f64) void {
        qtc.QGraphicsScale_SetXScale(@ptrCast(self), xScale);
    }

    pub fn YScale(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsScale_YScale(@ptrCast(self));
    }

    pub fn SetYScale(self: ?*anyopaque, yScale: f64) void {
        qtc.QGraphicsScale_SetYScale(@ptrCast(self), yScale);
    }

    pub fn ZScale(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsScale_ZScale(@ptrCast(self));
    }

    pub fn SetZScale(self: ?*anyopaque, zScale: f64) void {
        qtc.QGraphicsScale_SetZScale(@ptrCast(self), zScale);
    }

    pub fn ApplyTo(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsScale_ApplyTo(@ptrCast(self), @ptrCast(matrix));
    }

    /// Allows for overriding the related default method
    pub fn OnApplyTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScale_OnApplyTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseApplyTo(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsScale_QBaseApplyTo(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn OriginChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsScale_OriginChanged(@ptrCast(self));
    }

    pub fn OnOriginChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScale_Connect_OriginChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn XScaleChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsScale_XScaleChanged(@ptrCast(self));
    }

    pub fn OnXScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScale_Connect_XScaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn YScaleChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsScale_YScaleChanged(@ptrCast(self));
    }

    pub fn OnYScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScale_Connect_YScaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ZScaleChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsScale_ZScaleChanged(@ptrCast(self));
    }

    pub fn OnZScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScale_Connect_ZScaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ScaleChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsScale_ScaleChanged(@ptrCast(self));
    }

    pub fn OnScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScale_Connect_ScaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsScale_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscale.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsScale_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscale.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsScale_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsrotation.html
pub const qgraphicsrotation = struct {

    /// New constructs a new QGraphicsRotation object.
    pub fn New() QtC.QGraphicsRotation {
        return qtc.QGraphicsRotation_new();
    }


    /// New2 constructs a new QGraphicsRotation object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsRotation {
        return qtc.QGraphicsRotation_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsRotation_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsrotation.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Origin(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QGraphicsRotation_Origin(@ptrCast(self));
    }

    pub fn SetOrigin(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QGraphicsRotation_SetOrigin(@ptrCast(self), @ptrCast(point));
    }

    pub fn Angle(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsRotation_Angle(@ptrCast(self));
    }

    pub fn SetAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QGraphicsRotation_SetAngle(@ptrCast(self), angle);
    }

    pub fn Axis(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QGraphicsRotation_Axis(@ptrCast(self));
    }

    pub fn SetAxis(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QGraphicsRotation_SetAxis(@ptrCast(self), @ptrCast(axis));
    }

    pub fn SetAxis2(self: ?*anyopaque, axis: i32) void {
        qtc.QGraphicsRotation_SetAxis2(@ptrCast(self), @intCast(axis));
    }

    pub fn ApplyTo(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsRotation_ApplyTo(@ptrCast(self), @ptrCast(matrix));
    }

    /// Allows for overriding the related default method
    pub fn OnApplyTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsRotation_OnApplyTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseApplyTo(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsRotation_QBaseApplyTo(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn OriginChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsRotation_OriginChanged(@ptrCast(self));
    }

    pub fn OnOriginChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsRotation_Connect_OriginChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AngleChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsRotation_AngleChanged(@ptrCast(self));
    }

    pub fn OnAngleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsRotation_Connect_AngleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AxisChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsRotation_AxisChanged(@ptrCast(self));
    }

    pub fn OnAxisChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsRotation_Connect_AxisChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsRotation_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsrotation.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsRotation_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsrotation.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsRotation_Delete(@ptrCast(self));
    }
};
