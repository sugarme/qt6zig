const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlegendmarker.html
pub const qlegendmarker = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLegendMarker_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlegendmarker.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QLegendMarker_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QLegendMarker_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QLegendMarker_QBaseType(@ptrCast(self));
    }

    pub fn Label(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLegendMarker_Label(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlegendmarker.Label: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QLegendMarker_SetLabel(@ptrCast(self), label_str);
    }

    pub fn LabelBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QLegendMarker_LabelBrush(@ptrCast(self));
    }

    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLegendMarker_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QLegendMarker_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QLegendMarker_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QLegendMarker_Pen(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QLegendMarker_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QLegendMarker_Brush(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLegendMarker_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QLegendMarker_IsVisible(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QLegendMarker_SetVisible(@ptrCast(self), visible);
    }

    pub fn Shape(self: ?*anyopaque, ) i32 {
        return qtc.QLegendMarker_Shape(@ptrCast(self));
    }

    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QLegendMarker_SetShape(@ptrCast(self), @intCast(shape));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QAbstractSeries {
        return qtc.QLegendMarker_Series(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSeries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAbstractSeries) void {
        qtc.QLegendMarker_OnSeries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeries(self: ?*anyopaque, ) QtC.QAbstractSeries {
        return qtc.QLegendMarker_QBaseSeries(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, ) void {
        qtc.QLegendMarker_Clicked(@ptrCast(self));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, status: bool) void {
        qtc.QLegendMarker_Hovered(@ptrCast(self), status);
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelChanged(self: ?*anyopaque, ) void {
        qtc.QLegendMarker_LabelChanged(@ptrCast(self));
    }

    pub fn OnLabelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_LabelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelBrushChanged(self: ?*anyopaque, ) void {
        qtc.QLegendMarker_LabelBrushChanged(@ptrCast(self));
    }

    pub fn OnLabelBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_LabelBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FontChanged(self: ?*anyopaque, ) void {
        qtc.QLegendMarker_FontChanged(@ptrCast(self));
    }

    pub fn OnFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_FontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PenChanged(self: ?*anyopaque, ) void {
        qtc.QLegendMarker_PenChanged(@ptrCast(self));
    }

    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BrushChanged(self: ?*anyopaque, ) void {
        qtc.QLegendMarker_BrushChanged(@ptrCast(self));
    }

    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibleChanged(self: ?*anyopaque, ) void {
        qtc.QLegendMarker_VisibleChanged(@ptrCast(self));
    }

    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShapeChanged(self: ?*anyopaque, ) void {
        qtc.QLegendMarker_ShapeChanged(@ptrCast(self));
    }

    pub fn OnShapeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_ShapeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLegendMarker_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlegendmarker.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLegendMarker_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlegendmarker.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLegendMarker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/legendmarker.html#types
pub const enums = struct {
    pub const LegendMarkerType = enum {
        pub const LegendMarkerTypeArea: i32 = 0;
        pub const LegendMarkerTypeBar: i32 = 1;
        pub const LegendMarkerTypePie: i32 = 2;
        pub const LegendMarkerTypeXY: i32 = 3;
        pub const LegendMarkerTypeBoxPlot: i32 = 4;
        pub const LegendMarkerTypeCandlestick: i32 = 5;
    };

};
