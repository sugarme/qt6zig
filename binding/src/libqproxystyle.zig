const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qproxystyle.html
pub const qproxystyle = struct {

    /// New constructs a new QProxyStyle object.
    pub fn New() QtC.QProxyStyle {
        return qtc.QProxyStyle_new();
    }


    /// New2 constructs a new QProxyStyle object.
    pub fn New2(key: []const u8) QtC.QProxyStyle {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QProxyStyle_new2(key_str);
    }


    /// New3 constructs a new QProxyStyle object.
    pub fn New3(style: ?*anyopaque) QtC.QProxyStyle {
        return qtc.QProxyStyle_new3(@ptrCast(style));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProxyStyle_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BaseStyle(self: ?*anyopaque, ) QtC.QStyle {
        return qtc.QProxyStyle_BaseStyle(@ptrCast(self));
    }

    pub fn SetBaseStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QProxyStyle_SetBaseStyle(@ptrCast(self), @ptrCast(style));
    }

    pub fn DrawPrimitive(self: ?*anyopaque, element: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawPrimitive(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPrimitive(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawPrimitive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPrimitive(self: ?*anyopaque, element: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDrawPrimitive(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    pub fn DrawControl(self: ?*anyopaque, element: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawControl(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawControl(self: ?*anyopaque, element: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDrawControl(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    pub fn DrawComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawComplexControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDrawComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    pub fn DrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QProxyStyle_DrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), flags, @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawItemText(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QProxyStyle_QBaseDrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), flags, @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    pub fn DrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QProxyStyle_DrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), alignment, @ptrCast(pixmap));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawItemPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), alignment, @ptrCast(pixmap));
    }

    pub fn SizeFromContents(self: ?*anyopaque, typeVal: i64, option: ?*anyopaque, size: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QProxyStyle_SizeFromContents(@ptrCast(self), @intCast(typeVal), @ptrCast(option), @ptrCast(size), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeFromContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QProxyStyle_OnSizeFromContents(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeFromContents(self: ?*anyopaque, typeVal: i64, option: ?*anyopaque, size: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QProxyStyle_QBaseSizeFromContents(@ptrCast(self), @intCast(typeVal), @ptrCast(option), @ptrCast(size), @ptrCast(widget));
    }

    pub fn SubElementRect(self: ?*anyopaque, element: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SubElementRect(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnSubElementRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnSubElementRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubElementRect(self: ?*anyopaque, element: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_QBaseSubElementRect(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(widget));
    }

    pub fn SubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnSubControlRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnSubControlRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_QBaseSubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    pub fn ItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QProxyStyle_ItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), flags, enabled, text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnItemTextRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, bool, [*:0]const u8) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnItemTextRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QProxyStyle_QBaseItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), flags, enabled, text_str);
    }

    pub fn ItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_ItemPixmapRect(@ptrCast(self), @ptrCast(r), flags, @ptrCast(pixmap));
    }

    /// Allows for overriding the related default method
    pub fn OnItemPixmapRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnItemPixmapRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_QBaseItemPixmapRect(@ptrCast(self), @ptrCast(r), flags, @ptrCast(pixmap));
    }

    pub fn HitTestComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, pos: ?*anyopaque, widget: ?*anyopaque) i64 {
        return qtc.QProxyStyle_HitTestComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(pos), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnHitTestComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        qtc.QProxyStyle_OnHitTestComplexControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitTestComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, pos: ?*anyopaque, widget: ?*anyopaque) i64 {
        return qtc.QProxyStyle_QBaseHitTestComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(pos), @ptrCast(widget));
    }

    pub fn StyleHint(self: ?*anyopaque, hint: i64, option: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QProxyStyle_StyleHint(@ptrCast(self), @intCast(hint), @ptrCast(option), @ptrCast(widget), @ptrCast(returnData));
    }

    /// Allows for overriding the related default method
    pub fn OnStyleHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnStyleHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStyleHint(self: ?*anyopaque, hint: i64, option: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QProxyStyle_QBaseStyleHint(@ptrCast(self), @intCast(hint), @ptrCast(option), @ptrCast(widget), @ptrCast(returnData));
    }

    pub fn PixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_PixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPixelMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnPixelMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_QBasePixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    pub fn LayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_LayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnLayoutSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnLayoutSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_QBaseLayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QProxyStyle_StandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnStandardIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QProxyStyle_OnStandardIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QProxyStyle_QBaseStandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    pub fn StandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_StandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnStandardPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QProxyStyle_OnStandardPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_QBaseStandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_GeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// Allows for overriding the related default method
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QProxyStyle_OnGeneratedIconPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_QBaseGeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    pub fn StandardPalette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QProxyStyle_StandardPalette(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStandardPalette(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPalette) void {
        qtc.QProxyStyle_OnStandardPalette(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStandardPalette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QProxyStyle_QBaseStandardPalette(@ptrCast(self));
    }

    pub fn Polish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_Polish(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBasePolish(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Polish2(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QProxyStyle_Polish2(@ptrCast(self), @ptrCast(pal));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish2(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QProxyStyle_QBasePolish2(@ptrCast(self), @ptrCast(pal));
    }

    pub fn Polish3(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_Polish3(@ptrCast(self), @ptrCast(app));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish3(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_QBasePolish3(@ptrCast(self), @ptrCast(app));
    }

    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnUnpolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Unpolish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_Unpolish2(@ptrCast(self), @ptrCast(app));
    }

    /// Allows for overriding the related default method
    pub fn OnUnpolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnpolish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseUnpolish2(@ptrCast(self), @ptrCast(app));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QProxyStyle_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QProxyStyle_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProxyStyle_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProxyStyle_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProxyStyle_Delete(@ptrCast(self));
    }
};
