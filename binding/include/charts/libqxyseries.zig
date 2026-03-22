const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qxyseries.html
pub const qxyseries = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXYSeries_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self), x, y);
    }

    pub fn Append2(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Append2(@ptrCast(self), @ptrCast(point));
    }

    pub fn Append3(self: ?*anyopaque, points: []const u8) void {
        qtc.QXYSeries_Append3(@ptrCast(self), @ptrCast(points));
    }

    pub fn Replace(self: ?*anyopaque, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self), oldX, oldY, newX, newY);
    }

    pub fn Replace2(self: ?*anyopaque, oldPoint: ?*anyopaque, newPoint: ?*anyopaque) void {
        qtc.QXYSeries_Replace2(@ptrCast(self), @ptrCast(oldPoint), @ptrCast(newPoint));
    }

    pub fn Replace3(self: ?*anyopaque, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self), index, newX, newY);
    }

    pub fn Replace4(self: ?*anyopaque, index: i32, newPoint: ?*anyopaque) void {
        qtc.QXYSeries_Replace4(@ptrCast(self), index, @ptrCast(newPoint));
    }

    pub fn Remove(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self), x, y);
    }

    pub fn Remove2(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Remove2(@ptrCast(self), @ptrCast(point));
    }

    pub fn Remove3(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self), index);
    }

    pub fn RemovePoints(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self), index, count);
    }

    pub fn Insert(self: ?*anyopaque, index: i32, point: ?*anyopaque) void {
        qtc.QXYSeries_Insert(@ptrCast(self), index, @ptrCast(point));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QXYSeries_Clear(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self));
    }

    pub fn Points(self: ?*anyopaque, ) []const u8 {
        return qtc.QXYSeries_Points(@ptrCast(self));
    }

    pub fn PointsVector(self: ?*anyopaque, ) []const u8 {
        return qtc.QXYSeries_PointsVector(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, index: i32) QtC.QPointF {
        return qtc.QXYSeries_At(@ptrCast(self), index);
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, point: ?*anyopaque) QtC.QXYSeries {
        return qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self), @ptrCast(point));
    }

    pub fn OperatorShiftLeft2(self: ?*anyopaque, points: []const u8) QtC.QXYSeries {
        return qtc.QXYSeries_OperatorShiftLeft2(@ptrCast(self), @ptrCast(points));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPen(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_OnSetPen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_QBaseSetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QXYSeries_Pen(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QXYSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Allows for overriding the related default method
    pub fn OnSetBrush(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_OnSetBrush(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QXYSeries_QBaseSetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QXYSeries_Brush(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// Allows for overriding the related default method
    pub fn OnSetColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_OnSetColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_QBaseSetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QXYSeries_Color(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnColor(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QColor) void {
        qtc.QXYSeries_OnColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QXYSeries_QBaseColor(@ptrCast(self));
    }

    pub fn SetSelectedColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn SelectedColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QXYSeries_SelectedColor(@ptrCast(self));
    }

    pub fn SetPointsVisible(self: ?*anyopaque, ) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self));
    }

    pub fn PointsVisible(self: ?*anyopaque, ) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self));
    }

    pub fn SetPointLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QXYSeries_SetPointLabelsFormat(@ptrCast(self), format_str);
    }

    pub fn PointLabelsFormat(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.PointLabelsFormat: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPointLabelsVisible(self: ?*anyopaque, ) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self));
    }

    pub fn PointLabelsVisible(self: ?*anyopaque, ) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self));
    }

    pub fn SetPointLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn PointLabelsFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QXYSeries_PointLabelsFont(@ptrCast(self));
    }

    pub fn SetPointLabelsColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn PointLabelsColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QXYSeries_PointLabelsColor(@ptrCast(self));
    }

    pub fn SetPointLabelsClipping(self: ?*anyopaque, ) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self));
    }

    pub fn PointLabelsClipping(self: ?*anyopaque, ) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self));
    }

    pub fn Replace5(self: ?*anyopaque, points: []const u8) void {
        qtc.QXYSeries_Replace5(@ptrCast(self), @ptrCast(points));
    }

    pub fn IsPointSelected(self: ?*anyopaque, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self), index);
    }

    pub fn SelectPoint(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self), index);
    }

    pub fn DeselectPoint(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self), index);
    }

    pub fn SetPointSelected(self: ?*anyopaque, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self), index, selected);
    }

    pub fn SelectAllPoints(self: ?*anyopaque, ) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self));
    }

    pub fn DeselectAllPoints(self: ?*anyopaque, ) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self));
    }

    pub fn SelectPoints(self: ?*anyopaque, indexes: []const u8) void {
        qtc.QXYSeries_SelectPoints(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn DeselectPoints(self: ?*anyopaque, indexes: []const u8) void {
        qtc.QXYSeries_DeselectPoints(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn ToggleSelection(self: ?*anyopaque, indexes: []const u8) void {
        qtc.QXYSeries_ToggleSelection(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn SelectedPoints(self: ?*anyopaque, ) []const u8 {
        return qtc.QXYSeries_SelectedPoints(@ptrCast(self));
    }

    pub fn SetLightMarker(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SetLightMarker(@ptrCast(self), @ptrCast(lightMarker));
    }

    pub fn LightMarker(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QXYSeries_LightMarker(@ptrCast(self));
    }

    pub fn SetSelectedLightMarker(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    pub fn SelectedLightMarker(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QXYSeries_SelectedLightMarker(@ptrCast(self));
    }

    pub fn SetMarkerSize(self: ?*anyopaque, size: f64) void {
        qtc.QXYSeries_SetMarkerSize(@ptrCast(self), size);
    }

    pub fn MarkerSize(self: ?*anyopaque, ) f64 {
        return qtc.QXYSeries_MarkerSize(@ptrCast(self));
    }

    pub fn SetBestFitLineVisible(self: ?*anyopaque, ) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self));
    }

    pub fn BestFitLineVisible(self: ?*anyopaque, ) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self));
    }

    pub fn BestFitLineEquation(self: ?*anyopaque, ok: *bool) QPair<double, double> {
        return qtc.QXYSeries_BestFitLineEquation(@ptrCast(self), @ptrCast(ok));
    }

    pub fn SetBestFitLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn BestFitLinePen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QXYSeries_BestFitLinePen(@ptrCast(self));
    }

    pub fn SetBestFitLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn BestFitLineColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QXYSeries_BestFitLineColor(@ptrCast(self));
    }

    pub fn ClearPointConfiguration(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self), index);
    }

    pub fn ClearPointConfiguration2(self: ?*anyopaque, index: i32, key: i32) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self), index, @intCast(key));
    }

    pub fn ClearPointsConfiguration(self: ?*anyopaque, ) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self));
    }

    pub fn ClearPointsConfiguration2(self: ?*anyopaque, key: i32) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self), @intCast(key));
    }

    pub fn SetPointConfiguration(self: ?*anyopaque, index: i32, configuration: *const QHash<PointConfiguration, QVariant>) void {
        qtc.QXYSeries_SetPointConfiguration(@ptrCast(self), index, @ptrCast(configuration));
    }

    pub fn SetPointConfiguration2(self: ?*anyopaque, index: i32, key: i32, value: ?*anyopaque) void {
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self), index, @intCast(key), @ptrCast(value));
    }

    pub fn SetPointsConfiguration(self: ?*anyopaque, pointsConfiguration: *const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>) void {
        qtc.QXYSeries_SetPointsConfiguration(@ptrCast(self), @ptrCast(pointsConfiguration));
    }

    pub fn PointConfiguration(self: ?*anyopaque, index: i32) QHash<PointConfiguration, QVariant> {
        return qtc.QXYSeries_PointConfiguration(@ptrCast(self), index);
    }

    pub fn PointsConfiguration(self: ?*anyopaque, ) QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>> {
        return qtc.QXYSeries_PointsConfiguration(@ptrCast(self));
    }

    pub fn SizeBy(self: ?*anyopaque, sourceData: []const u8, minSize: f64, maxSize: f64) void {
        qtc.QXYSeries_SizeBy(@ptrCast(self), @ptrCast(sourceData), minSize, maxSize);
    }

    pub fn ColorBy(self: ?*anyopaque, sourceData: []const u8) void {
        qtc.QXYSeries_ColorBy(@ptrCast(self), @ptrCast(sourceData));
    }

    pub fn Clicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Clicked(@ptrCast(self), @ptrCast(point));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, point: ?*anyopaque, state: bool) void {
        qtc.QXYSeries_Hovered(@ptrCast(self), @ptrCast(point), state);
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Pressed(@ptrCast(self), @ptrCast(point));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Released(@ptrCast(self), @ptrCast(point));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_DoubleClicked(@ptrCast(self), @ptrCast(point));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointReplaced(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self), index);
    }

    pub fn OnPointReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self), index);
    }

    pub fn OnPointRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointAdded(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self), index);
    }

    pub fn OnPointAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QXYSeries_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectedColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnSelectedColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointsReplaced(self: ?*anyopaque, ) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self));
    }

    pub fn OnPointsReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QXYSeries_PointLabelsFormatChanged(@ptrCast(self), format_str);
    }

    pub fn OnPointLabelsFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self), visible);
    }

    pub fn OnPointLabelsVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self), @ptrCast(font));
    }

    pub fn OnPointLabelsFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnPointLabelsColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointLabelsClippingChanged(self: ?*anyopaque, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self), clipping);
    }

    pub fn OnPointLabelsClippingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointsRemoved(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self), index, count);
    }

    pub fn OnPointsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_PenChanged(@ptrCast(self), @ptrCast(pen));
    }

    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectedPointsChanged(self: ?*anyopaque, ) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self));
    }

    pub fn OnSelectedPointsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LightMarkerChanged(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self), @ptrCast(lightMarker));
    }

    pub fn OnLightMarkerChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectedLightMarkerChanged(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    pub fn OnSelectedLightMarkerChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BestFitLineVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self), visible);
    }

    pub fn OnBestFitLineVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BestFitLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    pub fn OnBestFitLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BestFitLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnBestFitLineColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PointsConfigurationChanged(self: ?*anyopaque, configuration: *const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>) void {
        qtc.QXYSeries_PointsConfigurationChanged(@ptrCast(self), @ptrCast(configuration));
    }

    pub fn OnPointsConfigurationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, *const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MarkerSizeChanged(self: ?*anyopaque, size: f64) void {
        qtc.QXYSeries_MarkerSizeChanged(@ptrCast(self), size);
    }

    pub fn OnMarkerSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXYSeries_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXYSeries_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPointsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self), visible);
    }

    pub fn SetPointLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self), visible);
    }

    pub fn SetPointLabelsClipping1(self: ?*anyopaque, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self), enabled);
    }

    pub fn SetBestFitLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self), visible);
    }

    pub fn ColorBy2(self: ?*anyopaque, sourceData: []const u8, gradient: ?*anyopaque) void {
        qtc.QXYSeries_ColorBy2(@ptrCast(self), @ptrCast(sourceData), @ptrCast(gradient));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXYSeries_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/xyseries.html#types
pub const enums = struct {
    pub const PointConfiguration = enum {
        pub const Color: i32 = 0;
        pub const Size: i32 = 1;
        pub const Visibility: i32 = 2;
        pub const LabelVisibility: i32 = 3;
        pub const LabelFormat: i32 = 4;
    };

};
