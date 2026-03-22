const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcommonstyle.html
pub const qcommonstyle = struct {

    /// New constructs a new QCommonStyle object.
    pub fn New() QtC.QCommonStyle {
        return qtc.QCommonStyle_new();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommonStyle_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_DrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPrimitive(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawPrimitive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseDrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    pub fn DrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_DrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseDrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    pub fn SubElementRect(self: ?*anyopaque, r: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_SubElementRect(@ptrCast(self), @intCast(r), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnSubElementRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QCommonStyle_OnSubElementRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubElementRect(self: ?*anyopaque, r: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_QBaseSubElementRect(@ptrCast(self), @intCast(r), @ptrCast(opt), @ptrCast(widget));
    }

    pub fn DrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_DrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawComplexControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseDrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    pub fn HitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, w: ?*anyopaque) i64 {
        return qtc.QCommonStyle_HitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnHitTestComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        qtc.QCommonStyle_OnHitTestComplexControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, w: ?*anyopaque) i64 {
        return qtc.QCommonStyle_QBaseHitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(w));
    }

    pub fn SubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, w: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_SubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnSubControlRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QCommonStyle_OnSubControlRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, w: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_QBaseSubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(w));
    }

    pub fn SizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QCommonStyle_SizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeFromContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QCommonStyle_OnSizeFromContents(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QCommonStyle_QBaseSizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(widget));
    }

    pub fn PixelMetric(self: ?*anyopaque, m: i64, opt: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QCommonStyle_PixelMetric(@ptrCast(self), @intCast(m), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPixelMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnPixelMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePixelMetric(self: ?*anyopaque, m: i64, opt: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QCommonStyle_QBasePixelMetric(@ptrCast(self), @intCast(m), @ptrCast(opt), @ptrCast(widget));
    }

    pub fn StyleHint(self: ?*anyopaque, sh: i64, opt: ?*anyopaque, w: ?*anyopaque, shret: ?*anyopaque) i32 {
        return qtc.QCommonStyle_StyleHint(@ptrCast(self), @intCast(sh), @ptrCast(opt), @ptrCast(w), @ptrCast(shret));
    }

    /// Allows for overriding the related default method
    pub fn OnStyleHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnStyleHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStyleHint(self: ?*anyopaque, sh: i64, opt: ?*anyopaque, w: ?*anyopaque, shret: ?*anyopaque) i32 {
        return qtc.QCommonStyle_QBaseStyleHint(@ptrCast(self), @intCast(sh), @ptrCast(opt), @ptrCast(w), @ptrCast(shret));
    }

    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QCommonStyle_StandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnStandardIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QCommonStyle_OnStandardIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStandardIcon(self: ?*anyopaque, standardIcon: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QCommonStyle_QBaseStandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(opt), @ptrCast(widget));
    }

    pub fn StandardPixmap(self: ?*anyopaque, sp: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QCommonStyle_StandardPixmap(@ptrCast(self), @intCast(sp), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnStandardPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QCommonStyle_OnStandardPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStandardPixmap(self: ?*anyopaque, sp: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QCommonStyle_QBaseStandardPixmap(@ptrCast(self), @intCast(sp), @ptrCast(opt), @ptrCast(widget));
    }

    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QCommonStyle_GeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// Allows for overriding the related default method
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QCommonStyle_OnGeneratedIconPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QCommonStyle_QBaseGeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    pub fn LayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QCommonStyle_LayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnLayoutSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnLayoutSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QCommonStyle_QBaseLayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    pub fn Polish(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCommonStyle_Polish(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCommonStyle_QBasePolish(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Polish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QCommonStyle_Polish2(@ptrCast(self), @ptrCast(app));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QCommonStyle_QBasePolish2(@ptrCast(self), @ptrCast(app));
    }

    pub fn Polish3(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCommonStyle_Polish3(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPolish3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolish3(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCommonStyle_QBasePolish3(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCommonStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnUnpolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnUnpolish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Unpolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QCommonStyle_Unpolish2(@ptrCast(self), @ptrCast(application));
    }

    /// Allows for overriding the related default method
    pub fn OnUnpolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnUnpolish2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnpolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseUnpolish2(@ptrCast(self), @ptrCast(application));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommonStyle_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommonStyle_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCommonStyle_Delete(@ptrCast(self));
    }
};
