const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qchart.html
pub const qchart = struct {

    /// New constructs a new QChart object.
    pub fn New() QtC.QChart {
        return qtc.QChart_new();
    }


    /// New2 constructs a new QChart object.
    pub fn New2(parent: ?*anyopaque) QtC.QChart {
        return qtc.QChart_new2(@ptrCast(parent));
    }


    /// New3 constructs a new QChart object.
    pub fn New3(parent: ?*anyopaque, wFlags: i64) QtC.QChart {
        return qtc.QChart_new3(@ptrCast(parent), @intCast(wFlags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChart_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_AddSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn RemoveSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_RemoveSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn RemoveAllSeries(self: ?*anyopaque, ) void {
        qtc.QChart_RemoveAllSeries(@ptrCast(self));
    }

    pub fn Series(self: ?*anyopaque, ) []const u8 {
        return qtc.QChart_Series(@ptrCast(self));
    }

    pub fn SetAxisX(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_SetAxisX(@ptrCast(self), @ptrCast(axis));
    }

    pub fn SetAxisY(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_SetAxisY(@ptrCast(self), @ptrCast(axis));
    }

    pub fn AxisX(self: ?*anyopaque, ) QtC.QAbstractAxis {
        return qtc.QChart_AxisX(@ptrCast(self));
    }

    pub fn AxisY(self: ?*anyopaque, ) QtC.QAbstractAxis {
        return qtc.QChart_AxisY(@ptrCast(self));
    }

    pub fn AddAxis(self: ?*anyopaque, axis: ?*anyopaque, alignment: i32) void {
        qtc.QChart_AddAxis(@ptrCast(self), @ptrCast(axis), @intCast(alignment));
    }

    pub fn RemoveAxis(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_RemoveAxis(@ptrCast(self), @ptrCast(axis));
    }

    pub fn Axes(self: ?*anyopaque, ) []const u8 {
        return qtc.QChart_Axes(@ptrCast(self));
    }

    pub fn CreateDefaultAxes(self: ?*anyopaque, ) void {
        qtc.QChart_CreateDefaultAxes(@ptrCast(self));
    }

    pub fn SetTheme(self: ?*anyopaque, theme: i32) void {
        qtc.QChart_SetTheme(@ptrCast(self), @intCast(theme));
    }

    pub fn Theme(self: ?*anyopaque, ) i32 {
        return qtc.QChart_Theme(@ptrCast(self));
    }

    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QChart_SetTitle(@ptrCast(self), title_str);
    }

    pub fn Title(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChart_Title(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.Title: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QChart_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn TitleFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QChart_TitleFont(@ptrCast(self));
    }

    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn TitleBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QChart_TitleBrush(@ptrCast(self));
    }

    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn BackgroundBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QChart_BackgroundBrush(@ptrCast(self));
    }

    pub fn SetBackgroundPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QChart_SetBackgroundPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn BackgroundPen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QChart_BackgroundPen(@ptrCast(self));
    }

    pub fn SetBackgroundVisible(self: ?*anyopaque, ) void {
        qtc.QChart_SetBackgroundVisible(@ptrCast(self));
    }

    pub fn IsBackgroundVisible(self: ?*anyopaque, ) bool {
        return qtc.QChart_IsBackgroundVisible(@ptrCast(self));
    }

    pub fn SetDropShadowEnabled(self: ?*anyopaque, ) void {
        qtc.QChart_SetDropShadowEnabled(@ptrCast(self));
    }

    pub fn IsDropShadowEnabled(self: ?*anyopaque, ) bool {
        return qtc.QChart_IsDropShadowEnabled(@ptrCast(self));
    }

    pub fn SetBackgroundRoundness(self: ?*anyopaque, diameter: f64) void {
        qtc.QChart_SetBackgroundRoundness(@ptrCast(self), diameter);
    }

    pub fn BackgroundRoundness(self: ?*anyopaque, ) f64 {
        return qtc.QChart_BackgroundRoundness(@ptrCast(self));
    }

    pub fn SetAnimationOptions(self: ?*anyopaque, options: i32) void {
        qtc.QChart_SetAnimationOptions(@ptrCast(self), @intCast(options));
    }

    pub fn AnimationOptions(self: ?*anyopaque, ) i32 {
        return qtc.QChart_AnimationOptions(@ptrCast(self));
    }

    pub fn SetAnimationDuration(self: ?*anyopaque, msecs: i32) void {
        qtc.QChart_SetAnimationDuration(@ptrCast(self), msecs);
    }

    pub fn AnimationDuration(self: ?*anyopaque, ) i32 {
        return qtc.QChart_AnimationDuration(@ptrCast(self));
    }

    pub fn SetAnimationEasingCurve(self: ?*anyopaque, curve: ?*anyopaque) void {
        qtc.QChart_SetAnimationEasingCurve(@ptrCast(self), @ptrCast(curve));
    }

    pub fn AnimationEasingCurve(self: ?*anyopaque, ) QtC.QEasingCurve {
        return qtc.QChart_AnimationEasingCurve(@ptrCast(self));
    }

    pub fn ZoomIn(self: ?*anyopaque, ) void {
        qtc.QChart_ZoomIn(@ptrCast(self));
    }

    pub fn ZoomOut(self: ?*anyopaque, ) void {
        qtc.QChart_ZoomOut(@ptrCast(self));
    }

    pub fn ZoomIn2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QChart_ZoomIn2(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Zoom(self: ?*anyopaque, factor: f64) void {
        qtc.QChart_Zoom(@ptrCast(self), factor);
    }

    pub fn ZoomReset(self: ?*anyopaque, ) void {
        qtc.QChart_ZoomReset(@ptrCast(self));
    }

    pub fn IsZoomed(self: ?*anyopaque, ) bool {
        return qtc.QChart_IsZoomed(@ptrCast(self));
    }

    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QChart_Scroll(@ptrCast(self), dx, dy);
    }

    pub fn Legend(self: ?*anyopaque, ) QtC.QLegend {
        return qtc.QChart_Legend(@ptrCast(self));
    }

    pub fn SetMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QChart_SetMargins(@ptrCast(self), @ptrCast(margins));
    }

    pub fn Margins(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QChart_Margins(@ptrCast(self));
    }

    pub fn PlotArea(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QChart_PlotArea(@ptrCast(self));
    }

    pub fn SetPlotArea(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QChart_SetPlotArea(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SetPlotAreaBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetPlotAreaBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn PlotAreaBackgroundBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QChart_PlotAreaBackgroundBrush(@ptrCast(self));
    }

    pub fn SetPlotAreaBackgroundPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QChart_SetPlotAreaBackgroundPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn PlotAreaBackgroundPen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QChart_PlotAreaBackgroundPen(@ptrCast(self));
    }

    pub fn SetPlotAreaBackgroundVisible(self: ?*anyopaque, ) void {
        qtc.QChart_SetPlotAreaBackgroundVisible(@ptrCast(self));
    }

    pub fn IsPlotAreaBackgroundVisible(self: ?*anyopaque, ) bool {
        return qtc.QChart_IsPlotAreaBackgroundVisible(@ptrCast(self));
    }

    pub fn SetLocalizeNumbers(self: ?*anyopaque, localize: bool) void {
        qtc.QChart_SetLocalizeNumbers(@ptrCast(self), localize);
    }

    pub fn LocalizeNumbers(self: ?*anyopaque, ) bool {
        return qtc.QChart_LocalizeNumbers(@ptrCast(self));
    }

    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QChart_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    pub fn Locale(self: ?*anyopaque, ) QtC.QLocale {
        return qtc.QChart_Locale(@ptrCast(self));
    }

    pub fn MapToValue(self: ?*anyopaque, position: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToValue(@ptrCast(self), @ptrCast(position));
    }

    pub fn MapToPosition(self: ?*anyopaque, value: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToPosition(@ptrCast(self), @ptrCast(value));
    }

    pub fn ChartType(self: ?*anyopaque, ) i32 {
        return qtc.QChart_ChartType(@ptrCast(self));
    }

    pub fn PlotAreaChanged(self: ?*anyopaque, plotArea: ?*anyopaque) void {
        qtc.QChart_PlotAreaChanged(@ptrCast(self), @ptrCast(plotArea));
    }

    pub fn OnPlotAreaChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QChart_Connect_PlotAreaChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChart_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChart_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAxisX2(self: ?*anyopaque, axis: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_SetAxisX2(@ptrCast(self), @ptrCast(axis), @ptrCast(series));
    }

    pub fn SetAxisY2(self: ?*anyopaque, axis: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_SetAxisY2(@ptrCast(self), @ptrCast(axis), @ptrCast(series));
    }

    pub fn AxisX1(self: ?*anyopaque, series: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisX1(@ptrCast(self), @ptrCast(series));
    }

    pub fn AxisY1(self: ?*anyopaque, series: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisY1(@ptrCast(self), @ptrCast(series));
    }

    pub fn Axes1(self: ?*anyopaque, orientation: i32) []const u8 {
        return qtc.QChart_Axes1(@ptrCast(self), @intCast(orientation));
    }

    pub fn Axes2(self: ?*anyopaque, orientation: i32, series: ?*anyopaque) []const u8 {
        return qtc.QChart_Axes2(@ptrCast(self), @intCast(orientation), @ptrCast(series));
    }

    pub fn SetBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QChart_SetBackgroundVisible1(@ptrCast(self), visible);
    }

    pub fn SetDropShadowEnabled1(self: ?*anyopaque, enabled: bool) void {
        qtc.QChart_SetDropShadowEnabled1(@ptrCast(self), enabled);
    }

    pub fn SetPlotAreaBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QChart_SetPlotAreaBackgroundVisible1(@ptrCast(self), visible);
    }

    pub fn MapToValue2(self: ?*anyopaque, position: ?*anyopaque, series: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToValue2(@ptrCast(self), @ptrCast(position), @ptrCast(series));
    }

    pub fn MapToPosition2(self: ?*anyopaque, value: ?*anyopaque, series: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToPosition2(@ptrCast(self), @ptrCast(value), @ptrCast(series));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QChart_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/chart.html#types
pub const enums = struct {
    pub const ChartType = enum {
        pub const ChartTypeUndefined: i32 = 0;
        pub const ChartTypeCartesian: i32 = 1;
        pub const ChartTypePolar: i32 = 2;
    };

    pub const ChartTheme = enum {
        pub const ChartThemeLight: i32 = 0;
        pub const ChartThemeBlueCerulean: i32 = 1;
        pub const ChartThemeDark: i32 = 2;
        pub const ChartThemeBrownSand: i32 = 3;
        pub const ChartThemeBlueNcs: i32 = 4;
        pub const ChartThemeHighContrast: i32 = 5;
        pub const ChartThemeBlueIcy: i32 = 6;
        pub const ChartThemeQt: i32 = 7;
    };

    pub const AnimationOption = enum {
        pub const NoAnimation: i32 = 0;
        pub const GridAxisAnimations: i32 = 1;
        pub const SeriesAnimations: i32 = 2;
        pub const AllAnimations: i32 = 3;
    };

};
