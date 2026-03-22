const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qareaseries.html
pub const qareaseries = struct {

    /// New constructs a new QAreaSeries object.
    pub fn New() QtC.QAreaSeries {
        return qtc.QAreaSeries_new();
    }


    /// New2 constructs a new QAreaSeries object.
    pub fn New2(upperSeries: ?*anyopaque) QtC.QAreaSeries {
        return qtc.QAreaSeries_new2(@ptrCast(upperSeries));
    }


    /// New3 constructs a new QAreaSeries object.
    pub fn New3(parent: ?*anyopaque) QtC.QAreaSeries {
        return qtc.QAreaSeries_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QAreaSeries object.
    pub fn New4(upperSeries: ?*anyopaque, lowerSeries: ?*anyopaque) QtC.QAreaSeries {
        return qtc.QAreaSeries_new4(@ptrCast(upperSeries), @ptrCast(lowerSeries));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAreaSeries_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QAreaSeries_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAreaSeries_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QAreaSeries_QBaseType(@ptrCast(self));
    }

    pub fn SetUpperSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QAreaSeries_SetUpperSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn UpperSeries(self: ?*anyopaque, ) QtC.QLineSeries {
        return qtc.QAreaSeries_UpperSeries(@ptrCast(self));
    }

    pub fn SetLowerSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QAreaSeries_SetLowerSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn LowerSeries(self: ?*anyopaque, ) QtC.QLineSeries {
        return qtc.QAreaSeries_LowerSeries(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAreaSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QAreaSeries_Pen(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAreaSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QAreaSeries_Brush(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAreaSeries_SetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAreaSeries_Color(@ptrCast(self));
    }

    pub fn SetBorderColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAreaSeries_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn BorderColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAreaSeries_BorderColor(@ptrCast(self));
    }

    pub fn SetPointsVisible(self: ?*anyopaque, ) void {
        qtc.QAreaSeries_SetPointsVisible(@ptrCast(self));
    }

    pub fn PointsVisible(self: ?*anyopaque, ) bool {
        return qtc.QAreaSeries_PointsVisible(@ptrCast(self));
    }

    pub fn SetPointLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QAreaSeries_SetPointLabelsFormat(@ptrCast(self), format_str);
    }

    pub fn PointLabelsFormat(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAreaSeries_PointLabelsFormat(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.PointLabelsFormat: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPointLabelsVisible(self: ?*anyopaque, ) void {
        qtc.QAreaSeries_SetPointLabelsVisible(@ptrCast(self));
    }

    pub fn PointLabelsVisible(self: ?*anyopaque, ) bool {
        return qtc.QAreaSeries_PointLabelsVisible(@ptrCast(self));
    }

    pub fn SetPointLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAreaSeries_SetPointLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn PointLabelsFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QAreaSeries_PointLabelsFont(@ptrCast(self));
    }

    pub fn SetPointLabelsColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAreaSeries_SetPointLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn PointLabelsColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAreaSeries_PointLabelsColor(@ptrCast(self));
    }

    pub fn SetPointLabelsClipping(self: ?*anyopaque, ) void {
        qtc.QAreaSeries_SetPointLabelsClipping(@ptrCast(self));
    }

    pub fn PointLabelsClipping(self: ?*anyopaque, ) bool {
        return qtc.QAreaSeries_PointLabelsClipping(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QAreaSeries_Clicked(@ptrCast(self), @ptrCast(point));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, point: ?*anyopaque, state: bool) void {
        qtc.QAreaSeries_Hovered(@ptrCast(self), @ptrCast(point), state);
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QAreaSeries_Pressed(@ptrCast(self), @ptrCast(point));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QAreaSeries_Released(@ptrCast(self), @ptrCast(point));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QAreaSeries_DoubleClicked(@ptrCast(self), @ptrCast(point));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Selected(self: ?*anyopaque, ) void {
        qtc.QAreaSeries_Selected(@ptrCast(self));
    }

    pub fn OnSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Selected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAreaSeries_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAreaSeries_BorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnBorderColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_BorderColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QAreaSeries_PointLabelsFormatChanged(@ptrCast(self), format_str);
    }

    pub fn OnPointLabelsFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAreaSeries_PointLabelsVisibilityChanged(@ptrCast(self), visible);
    }

    pub fn OnPointLabelsVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAreaSeries_PointLabelsFontChanged(@ptrCast(self), @ptrCast(font));
    }

    pub fn OnPointLabelsFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAreaSeries_PointLabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnPointLabelsColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsClippingChanged(self: ?*anyopaque, clipping: bool) void {
        qtc.QAreaSeries_PointLabelsClippingChanged(@ptrCast(self), clipping);
    }

    pub fn OnPointLabelsClippingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsClippingChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAreaSeries_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAreaSeries_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPointsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAreaSeries_SetPointsVisible1(@ptrCast(self), visible);
    }

    pub fn SetPointLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAreaSeries_SetPointLabelsVisible1(@ptrCast(self), visible);
    }

    pub fn SetPointLabelsClipping1(self: ?*anyopaque, enabled: bool) void {
        qtc.QAreaSeries_SetPointLabelsClipping1(@ptrCast(self), enabled);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAreaSeries_Delete(@ptrCast(self));
    }
};
