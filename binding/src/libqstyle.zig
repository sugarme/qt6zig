const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstyle.html
pub const qstyle = struct {

    /// New constructs a new QStyle object.
    pub fn New() QtC.QStyle {
        return qtc.QStyle_new();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyle_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyle_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Polish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_Polish(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnPolish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_QBasePolish(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnUnpolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnUnpolish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_QBaseUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Polish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QStyle_Polish2(@ptrCast(self), @ptrCast(application));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnPolish2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QStyle_QBasePolish2(@ptrCast(self), @ptrCast(application));
    }

    pub fn Unpolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QStyle_Unpolish2(@ptrCast(self), @ptrCast(application));
    }

    /// Allows for overriding the related default method
    pub fn OnUnpolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnUnpolish2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnpolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QStyle_QBaseUnpolish2(@ptrCast(self), @ptrCast(application));
    }

    pub fn Polish3(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QStyle_Polish3(@ptrCast(self), @ptrCast(palette));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnPolish3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish3(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QStyle_QBasePolish3(@ptrCast(self), @ptrCast(palette));
    }

    pub fn ItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QStyle_ItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), flags, enabled, text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnItemTextRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, bool, [*:0]const u8) callconv(.c) QtC.QRect) void {
        qtc.QStyle_OnItemTextRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QStyle_QBaseItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), flags, enabled, text_str);
    }

    pub fn ItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_ItemPixmapRect(@ptrCast(self), @ptrCast(r), flags, @ptrCast(pixmap));
    }

    /// Allows for overriding the related default method
    pub fn OnItemPixmapRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QStyle_OnItemPixmapRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_QBaseItemPixmapRect(@ptrCast(self), @ptrCast(r), flags, @ptrCast(pixmap));
    }

    pub fn DrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyle_DrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), flags, @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawItemText(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QStyle_OnDrawItemText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyle_QBaseDrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), flags, @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    pub fn DrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QStyle_DrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), alignment, @ptrCast(pixmap));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawItemPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDrawItemPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QStyle_QBaseDrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), alignment, @ptrCast(pixmap));
    }

    pub fn StandardPalette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QStyle_StandardPalette(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStandardPalette(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPalette) void {
        qtc.QStyle_OnStandardPalette(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStandardPalette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QStyle_QBaseStandardPalette(@ptrCast(self));
    }

    pub fn DrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyle_DrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPrimitive(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDrawPrimitive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyle_QBaseDrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    pub fn DrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyle_DrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDrawControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyle_QBaseDrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    pub fn SubElementRect(self: ?*anyopaque, subElement: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_SubElementRect(@ptrCast(self), @intCast(subElement), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnSubElementRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QStyle_OnSubElementRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubElementRect(self: ?*anyopaque, subElement: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_QBaseSubElementRect(@ptrCast(self), @intCast(subElement), @ptrCast(option), @ptrCast(widget));
    }

    pub fn DrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_DrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDrawComplexControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_QBaseDrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(widget));
    }

    pub fn HitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, widget: ?*anyopaque) i64 {
        return qtc.QStyle_HitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnHitTestComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        qtc.QStyle_OnHitTestComplexControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, widget: ?*anyopaque) i64 {
        return qtc.QStyle_QBaseHitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(widget));
    }

    pub fn SubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_SubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnSubControlRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QStyle_OnSubControlRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_QBaseSubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    pub fn PixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_PixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPixelMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStyle_OnPixelMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_QBasePixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    pub fn SizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, w: ?*anyopaque) QtC.QSize {
        return qtc.QStyle_SizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeFromContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QStyle_OnSizeFromContents(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, w: ?*anyopaque) QtC.QSize {
        return qtc.QStyle_QBaseSizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(w));
    }

    pub fn StyleHint(self: ?*anyopaque, stylehint: i64, opt: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QStyle_StyleHint(@ptrCast(self), @intCast(stylehint), @ptrCast(opt), @ptrCast(widget), @ptrCast(returnData));
    }

    /// Allows for overriding the related default method
    pub fn OnStyleHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStyle_OnStyleHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStyleHint(self: ?*anyopaque, stylehint: i64, opt: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QStyle_QBaseStyleHint(@ptrCast(self), @intCast(stylehint), @ptrCast(opt), @ptrCast(widget), @ptrCast(returnData));
    }

    pub fn StandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QStyle_StandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnStandardPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QStyle_OnStandardPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QStyle_QBaseStandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QStyle_StandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnStandardIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QStyle_OnStandardIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QStyle_QBaseStandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QStyle_GeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// Allows for overriding the related default method
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QStyle_OnGeneratedIconPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QStyle_QBaseGeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    pub fn VisualRect(direction: i32, boundingRect: ?*anyopaque, logicalRect: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_VisualRect(@intCast(direction), @ptrCast(boundingRect), @ptrCast(logicalRect));
    }

    pub fn VisualPos(direction: i32, boundingRect: ?*anyopaque, logicalPos: ?*anyopaque) QtC.QPoint {
        return qtc.QStyle_VisualPos(@intCast(direction), @ptrCast(boundingRect), @ptrCast(logicalPos));
    }

    pub fn SliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return qtc.QStyle_SliderPositionFromValue(min, max, val, space);
    }

    pub fn SliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return qtc.QStyle_SliderValueFromPosition(min, max, pos, space);
    }

    pub fn VisualAlignment(direction: i32, alignment: i32) i32 {
        return qtc.QStyle_VisualAlignment(@intCast(direction), @intCast(alignment));
    }

    pub fn AlignedRect(direction: i32, alignment: i32, size: ?*anyopaque, rectangle: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_AlignedRect(@intCast(direction), @intCast(alignment), @ptrCast(size), @ptrCast(rectangle));
    }

    pub fn LayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_LayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnLayoutSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStyle_OnLayoutSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_QBaseLayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    pub fn CombinedLayoutSpacing(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation));
    }

    pub fn Proxy(self: ?*anyopaque, ) QtC.QStyle {
        return qtc.QStyle_Proxy(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyle_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyle_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderPositionFromValue5(min, max, val, space, upsideDown);
    }

    pub fn SliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderValueFromPosition5(min, max, pos, space, upsideDown);
    }

    pub fn CombinedLayoutSpacing4(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32, option: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option));
    }

    pub fn CombinedLayoutSpacing5(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyle_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/style.html#types
pub const enums = struct {
    pub const StateFlag = enum {
        pub const State_None: i32 = 0;
        pub const State_Enabled: i32 = 1;
        pub const State_Raised: i32 = 2;
        pub const State_Sunken: i32 = 4;
        pub const State_Off: i32 = 8;
        pub const State_NoChange: i32 = 16;
        pub const State_On: i32 = 32;
        pub const State_DownArrow: i32 = 64;
        pub const State_Horizontal: i32 = 128;
        pub const State_HasFocus: i32 = 256;
        pub const State_Top: i32 = 512;
        pub const State_Bottom: i32 = 1024;
        pub const State_FocusAtBorder: i32 = 2048;
        pub const State_AutoRaise: i32 = 4096;
        pub const State_MouseOver: i32 = 8192;
        pub const State_UpArrow: i32 = 16384;
        pub const State_Selected: i32 = 32768;
        pub const State_Active: i32 = 65536;
        pub const State_Window: i32 = 131072;
        pub const State_Open: i32 = 262144;
        pub const State_Children: i32 = 524288;
        pub const State_Item: i32 = 1048576;
        pub const State_Sibling: i32 = 2097152;
        pub const State_Editing: i32 = 4194304;
        pub const State_KeyboardFocusChange: i32 = 8388608;
        pub const State_ReadOnly: i32 = 33554432;
        pub const State_Small: i32 = 67108864;
        pub const State_Mini: i32 = 134217728;
    };

    pub const PrimitiveElement = enum {
        pub const PE_Frame: i32 = 0;
        pub const PE_FrameDefaultButton: i32 = 1;
        pub const PE_FrameDockWidget: i32 = 2;
        pub const PE_FrameFocusRect: i32 = 3;
        pub const PE_FrameGroupBox: i32 = 4;
        pub const PE_FrameLineEdit: i32 = 5;
        pub const PE_FrameMenu: i32 = 6;
        pub const PE_FrameStatusBarItem: i32 = 7;
        pub const PE_FrameTabWidget: i32 = 8;
        pub const PE_FrameWindow: i32 = 9;
        pub const PE_FrameButtonBevel: i32 = 10;
        pub const PE_FrameButtonTool: i32 = 11;
        pub const PE_FrameTabBarBase: i32 = 12;
        pub const PE_PanelButtonCommand: i32 = 13;
        pub const PE_PanelButtonBevel: i32 = 14;
        pub const PE_PanelButtonTool: i32 = 15;
        pub const PE_PanelMenuBar: i32 = 16;
        pub const PE_PanelToolBar: i32 = 17;
        pub const PE_PanelLineEdit: i32 = 18;
        pub const PE_IndicatorArrowDown: i32 = 19;
        pub const PE_IndicatorArrowLeft: i32 = 20;
        pub const PE_IndicatorArrowRight: i32 = 21;
        pub const PE_IndicatorArrowUp: i32 = 22;
        pub const PE_IndicatorBranch: i32 = 23;
        pub const PE_IndicatorButtonDropDown: i32 = 24;
        pub const PE_IndicatorItemViewItemCheck: i32 = 25;
        pub const PE_IndicatorCheckBox: i32 = 26;
        pub const PE_IndicatorDockWidgetResizeHandle: i32 = 27;
        pub const PE_IndicatorHeaderArrow: i32 = 28;
        pub const PE_IndicatorMenuCheckMark: i32 = 29;
        pub const PE_IndicatorProgressChunk: i32 = 30;
        pub const PE_IndicatorRadioButton: i32 = 31;
        pub const PE_IndicatorSpinDown: i32 = 32;
        pub const PE_IndicatorSpinMinus: i32 = 33;
        pub const PE_IndicatorSpinPlus: i32 = 34;
        pub const PE_IndicatorSpinUp: i32 = 35;
        pub const PE_IndicatorToolBarHandle: i32 = 36;
        pub const PE_IndicatorToolBarSeparator: i32 = 37;
        pub const PE_PanelTipLabel: i32 = 38;
        pub const PE_IndicatorTabTear: i32 = 39;
        pub const PE_IndicatorTabTearLeft: i32 = 39;
        pub const PE_PanelScrollAreaCorner: i32 = 40;
        pub const PE_Widget: i32 = 41;
        pub const PE_IndicatorColumnViewArrow: i32 = 42;
        pub const PE_IndicatorItemViewItemDrop: i32 = 43;
        pub const PE_PanelItemViewItem: i32 = 44;
        pub const PE_PanelItemViewRow: i32 = 45;
        pub const PE_PanelStatusBar: i32 = 46;
        pub const PE_IndicatorTabClose: i32 = 47;
        pub const PE_PanelMenu: i32 = 48;
        pub const PE_IndicatorTabTearRight: i32 = 49;
        pub const PE_CustomBase: i32 = 251658240;
    };

    pub const ControlElement = enum {
        pub const CE_PushButton: i64 = 0;
        pub const CE_PushButtonBevel: i64 = 1;
        pub const CE_PushButtonLabel: i64 = 2;
        pub const CE_CheckBox: i64 = 3;
        pub const CE_CheckBoxLabel: i64 = 4;
        pub const CE_RadioButton: i64 = 5;
        pub const CE_RadioButtonLabel: i64 = 6;
        pub const CE_TabBarTab: i64 = 7;
        pub const CE_TabBarTabShape: i64 = 8;
        pub const CE_TabBarTabLabel: i64 = 9;
        pub const CE_ProgressBar: i64 = 10;
        pub const CE_ProgressBarGroove: i64 = 11;
        pub const CE_ProgressBarContents: i64 = 12;
        pub const CE_ProgressBarLabel: i64 = 13;
        pub const CE_MenuItem: i64 = 14;
        pub const CE_MenuScroller: i64 = 15;
        pub const CE_MenuVMargin: i64 = 16;
        pub const CE_MenuHMargin: i64 = 17;
        pub const CE_MenuTearoff: i64 = 18;
        pub const CE_MenuEmptyArea: i64 = 19;
        pub const CE_MenuBarItem: i64 = 20;
        pub const CE_MenuBarEmptyArea: i64 = 21;
        pub const CE_ToolButtonLabel: i64 = 22;
        pub const CE_Header: i64 = 23;
        pub const CE_HeaderSection: i64 = 24;
        pub const CE_HeaderLabel: i64 = 25;
        pub const CE_ToolBoxTab: i64 = 26;
        pub const CE_SizeGrip: i64 = 27;
        pub const CE_Splitter: i64 = 28;
        pub const CE_RubberBand: i64 = 29;
        pub const CE_DockWidgetTitle: i64 = 30;
        pub const CE_ScrollBarAddLine: i64 = 31;
        pub const CE_ScrollBarSubLine: i64 = 32;
        pub const CE_ScrollBarAddPage: i64 = 33;
        pub const CE_ScrollBarSubPage: i64 = 34;
        pub const CE_ScrollBarSlider: i64 = 35;
        pub const CE_ScrollBarFirst: i64 = 36;
        pub const CE_ScrollBarLast: i64 = 37;
        pub const CE_FocusFrame: i64 = 38;
        pub const CE_ComboBoxLabel: i64 = 39;
        pub const CE_ToolBar: i64 = 40;
        pub const CE_ToolBoxTabShape: i64 = 41;
        pub const CE_ToolBoxTabLabel: i64 = 42;
        pub const CE_HeaderEmptyArea: i64 = 43;
        pub const CE_ColumnViewGrip: i64 = 44;
        pub const CE_ItemViewItem: i64 = 45;
        pub const CE_ShapedFrame: i64 = 46;
        pub const CE_CustomBase: i64 = 4026531840;
    };

    pub const SubElement = enum {
        pub const SE_PushButtonContents: i64 = 0;
        pub const SE_PushButtonFocusRect: i64 = 1;
        pub const SE_CheckBoxIndicator: i64 = 2;
        pub const SE_CheckBoxContents: i64 = 3;
        pub const SE_CheckBoxFocusRect: i64 = 4;
        pub const SE_CheckBoxClickRect: i64 = 5;
        pub const SE_RadioButtonIndicator: i64 = 6;
        pub const SE_RadioButtonContents: i64 = 7;
        pub const SE_RadioButtonFocusRect: i64 = 8;
        pub const SE_RadioButtonClickRect: i64 = 9;
        pub const SE_ComboBoxFocusRect: i64 = 10;
        pub const SE_SliderFocusRect: i64 = 11;
        pub const SE_ProgressBarGroove: i64 = 12;
        pub const SE_ProgressBarContents: i64 = 13;
        pub const SE_ProgressBarLabel: i64 = 14;
        pub const SE_ToolBoxTabContents: i64 = 15;
        pub const SE_HeaderLabel: i64 = 16;
        pub const SE_HeaderArrow: i64 = 17;
        pub const SE_TabWidgetTabBar: i64 = 18;
        pub const SE_TabWidgetTabPane: i64 = 19;
        pub const SE_TabWidgetTabContents: i64 = 20;
        pub const SE_TabWidgetLeftCorner: i64 = 21;
        pub const SE_TabWidgetRightCorner: i64 = 22;
        pub const SE_ItemViewItemCheckIndicator: i64 = 23;
        pub const SE_TabBarTearIndicator: i64 = 24;
        pub const SE_TabBarTearIndicatorLeft: i64 = 24;
        pub const SE_TreeViewDisclosureItem: i64 = 25;
        pub const SE_LineEditContents: i64 = 26;
        pub const SE_FrameContents: i64 = 27;
        pub const SE_DockWidgetCloseButton: i64 = 28;
        pub const SE_DockWidgetFloatButton: i64 = 29;
        pub const SE_DockWidgetTitleBarText: i64 = 30;
        pub const SE_DockWidgetIcon: i64 = 31;
        pub const SE_CheckBoxLayoutItem: i64 = 32;
        pub const SE_ComboBoxLayoutItem: i64 = 33;
        pub const SE_DateTimeEditLayoutItem: i64 = 34;
        pub const SE_LabelLayoutItem: i64 = 35;
        pub const SE_ProgressBarLayoutItem: i64 = 36;
        pub const SE_PushButtonLayoutItem: i64 = 37;
        pub const SE_RadioButtonLayoutItem: i64 = 38;
        pub const SE_SliderLayoutItem: i64 = 39;
        pub const SE_SpinBoxLayoutItem: i64 = 40;
        pub const SE_ToolButtonLayoutItem: i64 = 41;
        pub const SE_FrameLayoutItem: i64 = 42;
        pub const SE_GroupBoxLayoutItem: i64 = 43;
        pub const SE_TabWidgetLayoutItem: i64 = 44;
        pub const SE_ItemViewItemDecoration: i64 = 45;
        pub const SE_ItemViewItemText: i64 = 46;
        pub const SE_ItemViewItemFocusRect: i64 = 47;
        pub const SE_TabBarTabLeftButton: i64 = 48;
        pub const SE_TabBarTabRightButton: i64 = 49;
        pub const SE_TabBarTabText: i64 = 50;
        pub const SE_ShapedFrameContents: i64 = 51;
        pub const SE_ToolBarHandle: i64 = 52;
        pub const SE_TabBarScrollLeftButton: i64 = 53;
        pub const SE_TabBarScrollRightButton: i64 = 54;
        pub const SE_TabBarTearIndicatorRight: i64 = 55;
        pub const SE_PushButtonBevel: i64 = 56;
        pub const SE_CustomBase: i64 = 4026531840;
    };

    pub const ComplexControl = enum {
        pub const CC_SpinBox: i64 = 0;
        pub const CC_ComboBox: i64 = 1;
        pub const CC_ScrollBar: i64 = 2;
        pub const CC_Slider: i64 = 3;
        pub const CC_ToolButton: i64 = 4;
        pub const CC_TitleBar: i64 = 5;
        pub const CC_Dial: i64 = 6;
        pub const CC_GroupBox: i64 = 7;
        pub const CC_MdiControls: i64 = 8;
        pub const CC_CustomBase: i64 = 4026531840;
    };

    pub const SubControl = enum {
        pub const SC_None: i64 = 0;
        pub const SC_ScrollBarAddLine: i64 = 1;
        pub const SC_ScrollBarSubLine: i64 = 2;
        pub const SC_ScrollBarAddPage: i64 = 4;
        pub const SC_ScrollBarSubPage: i64 = 8;
        pub const SC_ScrollBarFirst: i64 = 16;
        pub const SC_ScrollBarLast: i64 = 32;
        pub const SC_ScrollBarSlider: i64 = 64;
        pub const SC_ScrollBarGroove: i64 = 128;
        pub const SC_SpinBoxUp: i64 = 1;
        pub const SC_SpinBoxDown: i64 = 2;
        pub const SC_SpinBoxFrame: i64 = 4;
        pub const SC_SpinBoxEditField: i64 = 8;
        pub const SC_ComboBoxFrame: i64 = 1;
        pub const SC_ComboBoxEditField: i64 = 2;
        pub const SC_ComboBoxArrow: i64 = 4;
        pub const SC_ComboBoxListBoxPopup: i64 = 8;
        pub const SC_SliderGroove: i64 = 1;
        pub const SC_SliderHandle: i64 = 2;
        pub const SC_SliderTickmarks: i64 = 4;
        pub const SC_ToolButton: i64 = 1;
        pub const SC_ToolButtonMenu: i64 = 2;
        pub const SC_TitleBarSysMenu: i64 = 1;
        pub const SC_TitleBarMinButton: i64 = 2;
        pub const SC_TitleBarMaxButton: i64 = 4;
        pub const SC_TitleBarCloseButton: i64 = 8;
        pub const SC_TitleBarNormalButton: i64 = 16;
        pub const SC_TitleBarShadeButton: i64 = 32;
        pub const SC_TitleBarUnshadeButton: i64 = 64;
        pub const SC_TitleBarContextHelpButton: i64 = 128;
        pub const SC_TitleBarLabel: i64 = 256;
        pub const SC_DialGroove: i64 = 1;
        pub const SC_DialHandle: i64 = 2;
        pub const SC_DialTickmarks: i64 = 4;
        pub const SC_GroupBoxCheckBox: i64 = 1;
        pub const SC_GroupBoxLabel: i64 = 2;
        pub const SC_GroupBoxContents: i64 = 4;
        pub const SC_GroupBoxFrame: i64 = 8;
        pub const SC_MdiMinButton: i64 = 1;
        pub const SC_MdiNormalButton: i64 = 2;
        pub const SC_MdiCloseButton: i64 = 4;
        pub const SC_CustomBase: i64 = 4026531840;
        pub const SC_All: i64 = 4294967295;
    };

    pub const PixelMetric = enum {
        pub const PM_ButtonMargin: i64 = 0;
        pub const PM_ButtonDefaultIndicator: i64 = 1;
        pub const PM_MenuButtonIndicator: i64 = 2;
        pub const PM_ButtonShiftHorizontal: i64 = 3;
        pub const PM_ButtonShiftVertical: i64 = 4;
        pub const PM_DefaultFrameWidth: i64 = 5;
        pub const PM_SpinBoxFrameWidth: i64 = 6;
        pub const PM_ComboBoxFrameWidth: i64 = 7;
        pub const PM_MaximumDragDistance: i64 = 8;
        pub const PM_ScrollBarExtent: i64 = 9;
        pub const PM_ScrollBarSliderMin: i64 = 10;
        pub const PM_SliderThickness: i64 = 11;
        pub const PM_SliderControlThickness: i64 = 12;
        pub const PM_SliderLength: i64 = 13;
        pub const PM_SliderTickmarkOffset: i64 = 14;
        pub const PM_SliderSpaceAvailable: i64 = 15;
        pub const PM_DockWidgetSeparatorExtent: i64 = 16;
        pub const PM_DockWidgetHandleExtent: i64 = 17;
        pub const PM_DockWidgetFrameWidth: i64 = 18;
        pub const PM_TabBarTabOverlap: i64 = 19;
        pub const PM_TabBarTabHSpace: i64 = 20;
        pub const PM_TabBarTabVSpace: i64 = 21;
        pub const PM_TabBarBaseHeight: i64 = 22;
        pub const PM_TabBarBaseOverlap: i64 = 23;
        pub const PM_ProgressBarChunkWidth: i64 = 24;
        pub const PM_SplitterWidth: i64 = 25;
        pub const PM_TitleBarHeight: i64 = 26;
        pub const PM_MenuScrollerHeight: i64 = 27;
        pub const PM_MenuHMargin: i64 = 28;
        pub const PM_MenuVMargin: i64 = 29;
        pub const PM_MenuPanelWidth: i64 = 30;
        pub const PM_MenuTearoffHeight: i64 = 31;
        pub const PM_MenuDesktopFrameWidth: i64 = 32;
        pub const PM_MenuBarPanelWidth: i64 = 33;
        pub const PM_MenuBarItemSpacing: i64 = 34;
        pub const PM_MenuBarVMargin: i64 = 35;
        pub const PM_MenuBarHMargin: i64 = 36;
        pub const PM_IndicatorWidth: i64 = 37;
        pub const PM_IndicatorHeight: i64 = 38;
        pub const PM_ExclusiveIndicatorWidth: i64 = 39;
        pub const PM_ExclusiveIndicatorHeight: i64 = 40;
        pub const PM_MdiSubWindowFrameWidth: i64 = 44;
        pub const PM_MdiSubWindowMinimizedWidth: i64 = 45;
        pub const PM_HeaderMargin: i64 = 46;
        pub const PM_HeaderMarkSize: i64 = 47;
        pub const PM_HeaderGripMargin: i64 = 48;
        pub const PM_TabBarTabShiftHorizontal: i64 = 49;
        pub const PM_TabBarTabShiftVertical: i64 = 50;
        pub const PM_TabBarScrollButtonWidth: i64 = 51;
        pub const PM_ToolBarFrameWidth: i64 = 52;
        pub const PM_ToolBarHandleExtent: i64 = 53;
        pub const PM_ToolBarItemSpacing: i64 = 54;
        pub const PM_ToolBarItemMargin: i64 = 55;
        pub const PM_ToolBarSeparatorExtent: i64 = 56;
        pub const PM_ToolBarExtensionExtent: i64 = 57;
        pub const PM_SpinBoxSliderHeight: i64 = 58;
        pub const PM_ToolBarIconSize: i64 = 59;
        pub const PM_ListViewIconSize: i64 = 60;
        pub const PM_IconViewIconSize: i64 = 61;
        pub const PM_SmallIconSize: i64 = 62;
        pub const PM_LargeIconSize: i64 = 63;
        pub const PM_FocusFrameVMargin: i64 = 64;
        pub const PM_FocusFrameHMargin: i64 = 65;
        pub const PM_ToolTipLabelFrameWidth: i64 = 66;
        pub const PM_CheckBoxLabelSpacing: i64 = 67;
        pub const PM_TabBarIconSize: i64 = 68;
        pub const PM_SizeGripSize: i64 = 69;
        pub const PM_DockWidgetTitleMargin: i64 = 70;
        pub const PM_MessageBoxIconSize: i64 = 71;
        pub const PM_ButtonIconSize: i64 = 72;
        pub const PM_DockWidgetTitleBarButtonMargin: i64 = 73;
        pub const PM_RadioButtonLabelSpacing: i64 = 74;
        pub const PM_LayoutLeftMargin: i64 = 75;
        pub const PM_LayoutTopMargin: i64 = 76;
        pub const PM_LayoutRightMargin: i64 = 77;
        pub const PM_LayoutBottomMargin: i64 = 78;
        pub const PM_LayoutHorizontalSpacing: i64 = 79;
        pub const PM_LayoutVerticalSpacing: i64 = 80;
        pub const PM_TabBar_ScrollButtonOverlap: i64 = 81;
        pub const PM_TextCursorWidth: i64 = 82;
        pub const PM_TabCloseIndicatorWidth: i64 = 83;
        pub const PM_TabCloseIndicatorHeight: i64 = 84;
        pub const PM_ScrollView_ScrollBarSpacing: i64 = 85;
        pub const PM_ScrollView_ScrollBarOverlap: i64 = 86;
        pub const PM_SubMenuOverlap: i64 = 87;
        pub const PM_TreeViewIndentation: i64 = 88;
        pub const PM_HeaderDefaultSectionSizeHorizontal: i64 = 89;
        pub const PM_HeaderDefaultSectionSizeVertical: i64 = 90;
        pub const PM_TitleBarButtonIconSize: i64 = 91;
        pub const PM_TitleBarButtonSize: i64 = 92;
        pub const PM_LineEditIconSize: i64 = 93;
        pub const PM_LineEditIconMargin: i64 = 94;
        pub const PM_CustomBase: i64 = 4026531840;
    };

    pub const ContentsType = enum {
        pub const CT_PushButton: i64 = 0;
        pub const CT_CheckBox: i64 = 1;
        pub const CT_RadioButton: i64 = 2;
        pub const CT_ToolButton: i64 = 3;
        pub const CT_ComboBox: i64 = 4;
        pub const CT_Splitter: i64 = 5;
        pub const CT_ProgressBar: i64 = 6;
        pub const CT_MenuItem: i64 = 7;
        pub const CT_MenuBarItem: i64 = 8;
        pub const CT_MenuBar: i64 = 9;
        pub const CT_Menu: i64 = 10;
        pub const CT_TabBarTab: i64 = 11;
        pub const CT_Slider: i64 = 12;
        pub const CT_ScrollBar: i64 = 13;
        pub const CT_LineEdit: i64 = 14;
        pub const CT_SpinBox: i64 = 15;
        pub const CT_SizeGrip: i64 = 16;
        pub const CT_TabWidget: i64 = 17;
        pub const CT_DialogButtons: i64 = 18;
        pub const CT_HeaderSection: i64 = 19;
        pub const CT_GroupBox: i64 = 20;
        pub const CT_MdiControls: i64 = 21;
        pub const CT_ItemViewItem: i64 = 22;
        pub const CT_CustomBase: i64 = 4026531840;
    };

    pub const RequestSoftwareInputPanel = enum {
        pub const RSIP_OnMouseClickAndAlreadyFocused: i32 = 0;
        pub const RSIP_OnMouseClick: i32 = 1;
    };

    pub const StyleHint = enum {
        pub const SH_EtchDisabledText: i64 = 0;
        pub const SH_DitherDisabledText: i64 = 1;
        pub const SH_ScrollBar_MiddleClickAbsolutePosition: i64 = 2;
        pub const SH_ScrollBar_ScrollWhenPointerLeavesControl: i64 = 3;
        pub const SH_TabBar_SelectMouseType: i64 = 4;
        pub const SH_TabBar_Alignment: i64 = 5;
        pub const SH_Header_ArrowAlignment: i64 = 6;
        pub const SH_Slider_SnapToValue: i64 = 7;
        pub const SH_Slider_SloppyKeyEvents: i64 = 8;
        pub const SH_ProgressDialog_CenterCancelButton: i64 = 9;
        pub const SH_ProgressDialog_TextLabelAlignment: i64 = 10;
        pub const SH_PrintDialog_RightAlignButtons: i64 = 11;
        pub const SH_MainWindow_SpaceBelowMenuBar: i64 = 12;
        pub const SH_FontDialog_SelectAssociatedText: i64 = 13;
        pub const SH_Menu_AllowActiveAndDisabled: i64 = 14;
        pub const SH_Menu_SpaceActivatesItem: i64 = 15;
        pub const SH_Menu_SubMenuPopupDelay: i64 = 16;
        pub const SH_ScrollView_FrameOnlyAroundContents: i64 = 17;
        pub const SH_MenuBar_AltKeyNavigation: i64 = 18;
        pub const SH_ComboBox_ListMouseTracking: i64 = 19;
        pub const SH_Menu_MouseTracking: i64 = 20;
        pub const SH_MenuBar_MouseTracking: i64 = 21;
        pub const SH_ItemView_ChangeHighlightOnFocus: i64 = 22;
        pub const SH_Widget_ShareActivation: i64 = 23;
        pub const SH_Workspace_FillSpaceOnMaximize: i64 = 24;
        pub const SH_ComboBox_Popup: i64 = 25;
        pub const SH_TitleBar_NoBorder: i64 = 26;
        pub const SH_Slider_StopMouseOverSlider: i64 = 27;
        pub const SH_BlinkCursorWhenTextSelected: i64 = 28;
        pub const SH_RichText_FullWidthSelection: i64 = 29;
        pub const SH_Menu_Scrollable: i64 = 30;
        pub const SH_GroupBox_TextLabelVerticalAlignment: i64 = 31;
        pub const SH_GroupBox_TextLabelColor: i64 = 32;
        pub const SH_Menu_SloppySubMenus: i64 = 33;
        pub const SH_Table_GridLineColor: i64 = 34;
        pub const SH_LineEdit_PasswordCharacter: i64 = 35;
        pub const SH_DialogButtons_DefaultButton: i64 = 36;
        pub const SH_ToolBox_SelectedPageTitleBold: i64 = 37;
        pub const SH_TabBar_PreferNoArrows: i64 = 38;
        pub const SH_ScrollBar_LeftClickAbsolutePosition: i64 = 39;
        pub const SH_ListViewExpand_SelectMouseType: i64 = 40;
        pub const SH_UnderlineShortcut: i64 = 41;
        pub const SH_SpinBox_AnimateButton: i64 = 42;
        pub const SH_SpinBox_KeyPressAutoRepeatRate: i64 = 43;
        pub const SH_SpinBox_ClickAutoRepeatRate: i64 = 44;
        pub const SH_Menu_FillScreenWithScroll: i64 = 45;
        pub const SH_ToolTipLabel_Opacity: i64 = 46;
        pub const SH_DrawMenuBarSeparator: i64 = 47;
        pub const SH_TitleBar_ModifyNotification: i64 = 48;
        pub const SH_Button_FocusPolicy: i64 = 49;
        pub const SH_MessageBox_UseBorderForButtonSpacing: i64 = 50;
        pub const SH_TitleBar_AutoRaise: i64 = 51;
        pub const SH_ToolButton_PopupDelay: i64 = 52;
        pub const SH_FocusFrame_Mask: i64 = 53;
        pub const SH_RubberBand_Mask: i64 = 54;
        pub const SH_WindowFrame_Mask: i64 = 55;
        pub const SH_SpinControls_DisableOnBounds: i64 = 56;
        pub const SH_Dial_BackgroundRole: i64 = 57;
        pub const SH_ComboBox_LayoutDirection: i64 = 58;
        pub const SH_ItemView_EllipsisLocation: i64 = 59;
        pub const SH_ItemView_ShowDecorationSelected: i64 = 60;
        pub const SH_ItemView_ActivateItemOnSingleClick: i64 = 61;
        pub const SH_ScrollBar_ContextMenu: i64 = 62;
        pub const SH_ScrollBar_RollBetweenButtons: i64 = 63;
        pub const SH_Slider_AbsoluteSetButtons: i64 = 64;
        pub const SH_Slider_PageSetButtons: i64 = 65;
        pub const SH_Menu_KeyboardSearch: i64 = 66;
        pub const SH_TabBar_ElideMode: i64 = 67;
        pub const SH_DialogButtonLayout: i64 = 68;
        pub const SH_ComboBox_PopupFrameStyle: i64 = 69;
        pub const SH_MessageBox_TextInteractionFlags: i64 = 70;
        pub const SH_DialogButtonBox_ButtonsHaveIcons: i64 = 71;
        pub const SH_MessageBox_CenterButtons: i64 = 72;
        pub const SH_Menu_SelectionWrap: i64 = 73;
        pub const SH_ItemView_MovementWithoutUpdatingSelection: i64 = 74;
        pub const SH_ToolTip_Mask: i64 = 75;
        pub const SH_FocusFrame_AboveWidget: i64 = 76;
        pub const SH_TextControl_FocusIndicatorTextCharFormat: i64 = 77;
        pub const SH_WizardStyle: i64 = 78;
        pub const SH_ItemView_ArrowKeysNavigateIntoChildren: i64 = 79;
        pub const SH_Menu_Mask: i64 = 80;
        pub const SH_Menu_FlashTriggeredItem: i64 = 81;
        pub const SH_Menu_FadeOutOnHide: i64 = 82;
        pub const SH_SpinBox_ClickAutoRepeatThreshold: i64 = 83;
        pub const SH_ItemView_PaintAlternatingRowColorsForEmptyArea: i64 = 84;
        pub const SH_FormLayoutWrapPolicy: i64 = 85;
        pub const SH_TabWidget_DefaultTabPosition: i64 = 86;
        pub const SH_ToolBar_Movable: i64 = 87;
        pub const SH_FormLayoutFieldGrowthPolicy: i64 = 88;
        pub const SH_FormLayoutFormAlignment: i64 = 89;
        pub const SH_FormLayoutLabelAlignment: i64 = 90;
        pub const SH_ItemView_DrawDelegateFrame: i64 = 91;
        pub const SH_TabBar_CloseButtonPosition: i64 = 92;
        pub const SH_DockWidget_ButtonsHaveFrame: i64 = 93;
        pub const SH_ToolButtonStyle: i64 = 94;
        pub const SH_RequestSoftwareInputPanel: i64 = 95;
        pub const SH_ScrollBar_Transient: i64 = 96;
        pub const SH_Menu_SupportsSections: i64 = 97;
        pub const SH_ToolTip_WakeUpDelay: i64 = 98;
        pub const SH_ToolTip_FallAsleepDelay: i64 = 99;
        pub const SH_Widget_Animate: i64 = 100;
        pub const SH_Splitter_OpaqueResize: i64 = 101;
        pub const SH_ComboBox_UseNativePopup: i64 = 102;
        pub const SH_LineEdit_PasswordMaskDelay: i64 = 103;
        pub const SH_TabBar_ChangeCurrentDelay: i64 = 104;
        pub const SH_Menu_SubMenuUniDirection: i64 = 105;
        pub const SH_Menu_SubMenuUniDirectionFailCount: i64 = 106;
        pub const SH_Menu_SubMenuSloppySelectOtherActions: i64 = 107;
        pub const SH_Menu_SubMenuSloppyCloseTimeout: i64 = 108;
        pub const SH_Menu_SubMenuResetWhenReenteringParent: i64 = 109;
        pub const SH_Menu_SubMenuDontStartSloppyOnLeave: i64 = 110;
        pub const SH_ItemView_ScrollMode: i64 = 111;
        pub const SH_TitleBar_ShowToolTipsOnButtons: i64 = 112;
        pub const SH_Widget_Animation_Duration: i64 = 113;
        pub const SH_ComboBox_AllowWheelScrolling: i64 = 114;
        pub const SH_SpinBox_ButtonsInsideFrame: i64 = 115;
        pub const SH_SpinBox_StepModifier: i64 = 116;
        pub const SH_TabBar_AllowWheelScrolling: i64 = 117;
        pub const SH_Table_AlwaysDrawLeftTopGridLines: i64 = 118;
        pub const SH_SpinBox_SelectOnStep: i64 = 119;
        pub const SH_CustomBase: i64 = 4026531840;
    };

    pub const StandardPixmap = enum {
        pub const SP_TitleBarMenuButton: i64 = 0;
        pub const SP_TitleBarMinButton: i64 = 1;
        pub const SP_TitleBarMaxButton: i64 = 2;
        pub const SP_TitleBarCloseButton: i64 = 3;
        pub const SP_TitleBarNormalButton: i64 = 4;
        pub const SP_TitleBarShadeButton: i64 = 5;
        pub const SP_TitleBarUnshadeButton: i64 = 6;
        pub const SP_TitleBarContextHelpButton: i64 = 7;
        pub const SP_DockWidgetCloseButton: i64 = 8;
        pub const SP_MessageBoxInformation: i64 = 9;
        pub const SP_MessageBoxWarning: i64 = 10;
        pub const SP_MessageBoxCritical: i64 = 11;
        pub const SP_MessageBoxQuestion: i64 = 12;
        pub const SP_DesktopIcon: i64 = 13;
        pub const SP_TrashIcon: i64 = 14;
        pub const SP_ComputerIcon: i64 = 15;
        pub const SP_DriveFDIcon: i64 = 16;
        pub const SP_DriveHDIcon: i64 = 17;
        pub const SP_DriveCDIcon: i64 = 18;
        pub const SP_DriveDVDIcon: i64 = 19;
        pub const SP_DriveNetIcon: i64 = 20;
        pub const SP_DirOpenIcon: i64 = 21;
        pub const SP_DirClosedIcon: i64 = 22;
        pub const SP_DirLinkIcon: i64 = 23;
        pub const SP_DirLinkOpenIcon: i64 = 24;
        pub const SP_FileIcon: i64 = 25;
        pub const SP_FileLinkIcon: i64 = 26;
        pub const SP_ToolBarHorizontalExtensionButton: i64 = 27;
        pub const SP_ToolBarVerticalExtensionButton: i64 = 28;
        pub const SP_FileDialogStart: i64 = 29;
        pub const SP_FileDialogEnd: i64 = 30;
        pub const SP_FileDialogToParent: i64 = 31;
        pub const SP_FileDialogNewFolder: i64 = 32;
        pub const SP_FileDialogDetailedView: i64 = 33;
        pub const SP_FileDialogInfoView: i64 = 34;
        pub const SP_FileDialogContentsView: i64 = 35;
        pub const SP_FileDialogListView: i64 = 36;
        pub const SP_FileDialogBack: i64 = 37;
        pub const SP_DirIcon: i64 = 38;
        pub const SP_DialogOkButton: i64 = 39;
        pub const SP_DialogCancelButton: i64 = 40;
        pub const SP_DialogHelpButton: i64 = 41;
        pub const SP_DialogOpenButton: i64 = 42;
        pub const SP_DialogSaveButton: i64 = 43;
        pub const SP_DialogCloseButton: i64 = 44;
        pub const SP_DialogApplyButton: i64 = 45;
        pub const SP_DialogResetButton: i64 = 46;
        pub const SP_DialogDiscardButton: i64 = 47;
        pub const SP_DialogYesButton: i64 = 48;
        pub const SP_DialogNoButton: i64 = 49;
        pub const SP_ArrowUp: i64 = 50;
        pub const SP_ArrowDown: i64 = 51;
        pub const SP_ArrowLeft: i64 = 52;
        pub const SP_ArrowRight: i64 = 53;
        pub const SP_ArrowBack: i64 = 54;
        pub const SP_ArrowForward: i64 = 55;
        pub const SP_DirHomeIcon: i64 = 56;
        pub const SP_CommandLink: i64 = 57;
        pub const SP_VistaShield: i64 = 58;
        pub const SP_BrowserReload: i64 = 59;
        pub const SP_BrowserStop: i64 = 60;
        pub const SP_MediaPlay: i64 = 61;
        pub const SP_MediaStop: i64 = 62;
        pub const SP_MediaPause: i64 = 63;
        pub const SP_MediaSkipForward: i64 = 64;
        pub const SP_MediaSkipBackward: i64 = 65;
        pub const SP_MediaSeekForward: i64 = 66;
        pub const SP_MediaSeekBackward: i64 = 67;
        pub const SP_MediaVolume: i64 = 68;
        pub const SP_MediaVolumeMuted: i64 = 69;
        pub const SP_LineEditClearButton: i64 = 70;
        pub const SP_DialogYesToAllButton: i64 = 71;
        pub const SP_DialogNoToAllButton: i64 = 72;
        pub const SP_DialogSaveAllButton: i64 = 73;
        pub const SP_DialogAbortButton: i64 = 74;
        pub const SP_DialogRetryButton: i64 = 75;
        pub const SP_DialogIgnoreButton: i64 = 76;
        pub const SP_RestoreDefaultsButton: i64 = 77;
        pub const SP_TabCloseButton: i64 = 78;
        pub const NStandardPixmap: i64 = 79;
        pub const SP_CustomBase: i64 = 4026531840;
    };

};
