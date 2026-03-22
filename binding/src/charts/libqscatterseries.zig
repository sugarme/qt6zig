const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qscatterseries.html
pub const qscatterseries = struct {

    /// New constructs a new QScatterSeries object.
    pub fn New() QtC.QScatterSeries {
        return qtc.QScatterSeries_new();
    }


    /// New2 constructs a new QScatterSeries object.
    pub fn New2(parent: ?*anyopaque) QtC.QScatterSeries {
        return qtc.QScatterSeries_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScatterSeries_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QScatterSeries_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QScatterSeries_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QScatterSeries_QBaseType(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QScatterSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPen(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScatterSeries_OnSetPen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QScatterSeries_QBaseSetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QScatterSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Allows for overriding the related default method
    pub fn OnSetBrush(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScatterSeries_OnSetBrush(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QScatterSeries_QBaseSetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QScatterSeries_Brush(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QScatterSeries_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// Allows for overriding the related default method
    pub fn OnSetColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScatterSeries_OnSetColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QScatterSeries_QBaseSetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QScatterSeries_Color(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnColor(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QColor) void {
        qtc.QScatterSeries_OnColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QScatterSeries_QBaseColor(@ptrCast(self));
    }

    pub fn SetBorderColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QScatterSeries_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn BorderColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QScatterSeries_BorderColor(@ptrCast(self));
    }

    pub fn MarkerShape(self: ?*anyopaque, ) i32 {
        return qtc.QScatterSeries_MarkerShape(@ptrCast(self));
    }

    pub fn SetMarkerShape(self: ?*anyopaque, shape: i32) void {
        qtc.QScatterSeries_SetMarkerShape(@ptrCast(self), @intCast(shape));
    }

    pub fn MarkerSize(self: ?*anyopaque, ) f64 {
        return qtc.QScatterSeries_MarkerSize(@ptrCast(self));
    }

    pub fn SetMarkerSize(self: ?*anyopaque, size: f64) void {
        qtc.QScatterSeries_SetMarkerSize(@ptrCast(self), size);
    }

    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QScatterSeries_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QScatterSeries_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QScatterSeries_BorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnBorderColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QScatterSeries_Connect_BorderColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MarkerShapeChanged(self: ?*anyopaque, shape: i32) void {
        qtc.QScatterSeries_MarkerShapeChanged(@ptrCast(self), @intCast(shape));
    }

    pub fn OnMarkerShapeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QScatterSeries_Connect_MarkerShapeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MarkerSizeChanged(self: ?*anyopaque, size: f64) void {
        qtc.QScatterSeries_MarkerSizeChanged(@ptrCast(self), size);
    }

    pub fn OnMarkerSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScatterSeries_Connect_MarkerSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScatterSeries_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScatterSeries_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScatterSeries_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/scatterseries.html#types
pub const enums = struct {
    pub const MarkerShape = enum {
        pub const MarkerShapeCircle: i32 = 0;
        pub const MarkerShapeRectangle: i32 = 1;
        pub const MarkerShapeRotatedRectangle: i32 = 2;
        pub const MarkerShapeTriangle: i32 = 3;
        pub const MarkerShapeStar: i32 = 4;
        pub const MarkerShapePentagon: i32 = 5;
    };

};
