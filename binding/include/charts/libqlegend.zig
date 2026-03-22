const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlegend.html
pub const qlegend = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLegend_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlegend.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QLegend_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLegend_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QLegend_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLegend_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QLegend_Brush(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QLegend_SetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QLegend_Color(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QLegend_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QLegend_Pen(@ptrCast(self));
    }

    pub fn SetBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QLegend_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn BorderColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QLegend_BorderColor(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QLegend_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QLegend_Font(@ptrCast(self));
    }

    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLegend_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn LabelBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QLegend_LabelBrush(@ptrCast(self));
    }

    pub fn SetLabelColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QLegend_SetLabelColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn LabelColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QLegend_LabelColor(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QLegend_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QLegend_Alignment(@ptrCast(self));
    }

    pub fn DetachFromChart(self: ?*anyopaque, ) void {
        qtc.QLegend_DetachFromChart(@ptrCast(self));
    }

    pub fn AttachToChart(self: ?*anyopaque, ) void {
        qtc.QLegend_AttachToChart(@ptrCast(self));
    }

    pub fn IsAttachedToChart(self: ?*anyopaque, ) bool {
        return qtc.QLegend_IsAttachedToChart(@ptrCast(self));
    }

    pub fn SetBackgroundVisible(self: ?*anyopaque, ) void {
        qtc.QLegend_SetBackgroundVisible(@ptrCast(self));
    }

    pub fn IsBackgroundVisible(self: ?*anyopaque, ) bool {
        return qtc.QLegend_IsBackgroundVisible(@ptrCast(self));
    }

    pub fn Markers(self: ?*anyopaque, ) []const u8 {
        return qtc.QLegend_Markers(@ptrCast(self));
    }

    pub fn ReverseMarkers(self: ?*anyopaque, ) bool {
        return qtc.QLegend_ReverseMarkers(@ptrCast(self));
    }

    pub fn SetReverseMarkers(self: ?*anyopaque, ) void {
        qtc.QLegend_SetReverseMarkers(@ptrCast(self));
    }

    pub fn ShowToolTips(self: ?*anyopaque, ) bool {
        return qtc.QLegend_ShowToolTips(@ptrCast(self));
    }

    pub fn SetShowToolTips(self: ?*anyopaque, show: bool) void {
        qtc.QLegend_SetShowToolTips(@ptrCast(self), show);
    }

    pub fn IsInteractive(self: ?*anyopaque, ) bool {
        return qtc.QLegend_IsInteractive(@ptrCast(self));
    }

    pub fn SetInteractive(self: ?*anyopaque, interactive: bool) void {
        qtc.QLegend_SetInteractive(@ptrCast(self), interactive);
    }

    pub fn MarkerShape(self: ?*anyopaque, ) i32 {
        return qtc.QLegend_MarkerShape(@ptrCast(self));
    }

    pub fn SetMarkerShape(self: ?*anyopaque, shape: i32) void {
        qtc.QLegend_SetMarkerShape(@ptrCast(self), @intCast(shape));
    }

    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLegend_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLegend_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLegend_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLegend_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLegend_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLegend_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn BackgroundVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QLegend_BackgroundVisibleChanged(@ptrCast(self), visible);
    }

    pub fn OnBackgroundVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_BackgroundVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QLegend_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QLegend_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QLegend_BorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnBorderColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QLegend_Connect_BorderColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FontChanged(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QLegend_FontChanged(@ptrCast(self), @ptrCast(font));
    }

    pub fn OnFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QFont) callconv(.c) void) void {
        qtc.QLegend_Connect_FontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QLegend_LabelColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnLabelColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QLegend_Connect_LabelColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReverseMarkersChanged(self: ?*anyopaque, reverseMarkers: bool) void {
        qtc.QLegend_ReverseMarkersChanged(@ptrCast(self), reverseMarkers);
    }

    pub fn OnReverseMarkersChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_ReverseMarkersChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShowToolTipsChanged(self: ?*anyopaque, showToolTips: bool) void {
        qtc.QLegend_ShowToolTipsChanged(@ptrCast(self), showToolTips);
    }

    pub fn OnShowToolTipsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_ShowToolTipsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MarkerShapeChanged(self: ?*anyopaque, shape: i32) void {
        qtc.QLegend_MarkerShapeChanged(@ptrCast(self), @intCast(shape));
    }

    pub fn OnMarkerShapeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLegend_Connect_MarkerShapeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AttachedToChartChanged(self: ?*anyopaque, attachedToChart: bool) void {
        qtc.QLegend_AttachedToChartChanged(@ptrCast(self), attachedToChart);
    }

    pub fn OnAttachedToChartChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_AttachedToChartChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn InteractiveChanged(self: ?*anyopaque, interactive: bool) void {
        qtc.QLegend_InteractiveChanged(@ptrCast(self), interactive);
    }

    pub fn OnInteractiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_InteractiveChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLegend_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlegend.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLegend_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlegend.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QLegend_SetBackgroundVisible1(@ptrCast(self), visible);
    }

    pub fn Markers1(self: ?*anyopaque, series: ?*anyopaque) []const u8 {
        return qtc.QLegend_Markers1(@ptrCast(self), @ptrCast(series));
    }

    pub fn SetReverseMarkers1(self: ?*anyopaque, reverseMarkers: bool) void {
        qtc.QLegend_SetReverseMarkers1(@ptrCast(self), reverseMarkers);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLegend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/legend.html#types
pub const enums = struct {
    pub const MarkerShape = enum {
        pub const MarkerShapeDefault: i32 = 0;
        pub const MarkerShapeRectangle: i32 = 1;
        pub const MarkerShapeCircle: i32 = 2;
        pub const MarkerShapeFromSeries: i32 = 3;
        pub const MarkerShapeRotatedRectangle: i32 = 4;
        pub const MarkerShapeTriangle: i32 = 5;
        pub const MarkerShapeStar: i32 = 6;
        pub const MarkerShapePentagon: i32 = 7;
    };

};
