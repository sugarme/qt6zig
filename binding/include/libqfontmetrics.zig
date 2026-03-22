const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfontmetrics.html
pub const qfontmetrics = struct {

    /// New constructs a new QFontMetrics object.
    pub fn New(param1: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QFontMetrics_new(@ptrCast(param1));
    }


    /// New2 constructs a new QFontMetrics object.
    pub fn New2(font: ?*anyopaque, pd: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QFontMetrics_new2(@ptrCast(font), @ptrCast(pd));
    }


    /// New3 constructs a new QFontMetrics object.
    pub fn New3(param1: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QFontMetrics_new3(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontMetrics_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontMetrics_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Ascent(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_Ascent(@ptrCast(self));
    }

    pub fn CapHeight(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_CapHeight(@ptrCast(self));
    }

    pub fn Descent(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_Descent(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_Height(@ptrCast(self));
    }

    pub fn Leading(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_Leading(@ptrCast(self));
    }

    pub fn LineSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_LineSpacing(@ptrCast(self));
    }

    pub fn MinLeftBearing(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_MinLeftBearing(@ptrCast(self));
    }

    pub fn MinRightBearing(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_MinRightBearing(@ptrCast(self));
    }

    pub fn MaxWidth(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_MaxWidth(@ptrCast(self));
    }

    pub fn XHeight(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_XHeight(@ptrCast(self));
    }

    pub fn AverageCharWidth(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_AverageCharWidth(@ptrCast(self));
    }

    pub fn InFont(self: ?*anyopaque, param1: QtC.QChar) bool {
        return qtc.QFontMetrics_InFont(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InFontUcs4(self: ?*anyopaque, ucs4: u32) bool {
        return qtc.QFontMetrics_InFontUcs4(@ptrCast(self), ucs4);
    }

    pub fn LeftBearing(self: ?*anyopaque, param1: QtC.QChar) i32 {
        return qtc.QFontMetrics_LeftBearing(@ptrCast(self), @ptrCast(param1));
    }

    pub fn RightBearing(self: ?*anyopaque, param1: QtC.QChar) i32 {
        return qtc.QFontMetrics_RightBearing(@ptrCast(self), @ptrCast(param1));
    }

    pub fn HorizontalAdvance(self: ?*anyopaque, param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QFontMetrics_HorizontalAdvance(@ptrCast(self), param1_str);
    }

    pub fn HorizontalAdvance2(self: ?*anyopaque, param1: []const u8, textOption: ?*anyopaque) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QFontMetrics_HorizontalAdvance2(@ptrCast(self), param1_str, @ptrCast(textOption));
    }

    pub fn HorizontalAdvance3(self: ?*anyopaque, param1: QtC.QChar) i32 {
        return qtc.QFontMetrics_HorizontalAdvance3(@ptrCast(self), @ptrCast(param1));
    }

    pub fn BoundingRect(self: ?*anyopaque, param1: QtC.QChar) QtC.QRect {
        return qtc.QFontMetrics_BoundingRect(@ptrCast(self), @ptrCast(param1));
    }

    pub fn BoundingRect2(self: ?*anyopaque, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_BoundingRect2(@ptrCast(self), text_str);
    }

    pub fn BoundingRect3(self: ?*anyopaque, text: []const u8, textOption: ?*anyopaque) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_BoundingRect3(@ptrCast(self), text_str, @ptrCast(textOption));
    }

    pub fn BoundingRect4(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_BoundingRect4(@ptrCast(self), @ptrCast(r), flags, text_str);
    }

    pub fn BoundingRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_BoundingRect5(@ptrCast(self), x, y, w, h, flags, text_str);
    }

    pub fn Size(self: ?*anyopaque, flags: i32, str: []const u8) QtC.QSize {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QFontMetrics_Size(@ptrCast(self), flags, str_str);
    }

    pub fn TightBoundingRect(self: ?*anyopaque, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_TightBoundingRect(@ptrCast(self), text_str);
    }

    pub fn TightBoundingRect2(self: ?*anyopaque, text: []const u8, textOption: ?*anyopaque) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_TightBoundingRect2(@ptrCast(self), text_str, @ptrCast(textOption));
    }

    pub fn ElidedText(self: ?*anyopaque, text: []const u8, mode: i32, width: i32, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QFontMetrics_ElidedText(@ptrCast(self), text_str, @intCast(mode), width);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetrics.ElidedText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UnderlinePos(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_UnderlinePos(@ptrCast(self));
    }

    pub fn OverlinePos(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_OverlinePos(@ptrCast(self));
    }

    pub fn StrikeOutPos(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_StrikeOutPos(@ptrCast(self));
    }

    pub fn LineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QFontMetrics_LineWidth(@ptrCast(self));
    }

    pub fn FontDpi(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetrics_FontDpi(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFontMetrics_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFontMetrics_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn HorizontalAdvance22(self: ?*anyopaque, param1: []const u8, lenVal: i32) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QFontMetrics_HorizontalAdvance22(@ptrCast(self), param1_str, lenVal);
    }

    pub fn BoundingRect42(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, tabstops: i32) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_BoundingRect42(@ptrCast(self), @ptrCast(r), flags, text_str, tabstops);
    }

    pub fn BoundingRect52(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, tabstops: i32, tabarray: *i32) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_BoundingRect52(@ptrCast(self), @ptrCast(r), flags, text_str, tabstops, @ptrCast(tabarray));
    }

    pub fn BoundingRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, tabstops: i32) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_BoundingRect7(@ptrCast(self), x, y, w, h, flags, text_str, tabstops);
    }

    pub fn BoundingRect8(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, tabstops: i32, tabarray: *i32) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetrics_BoundingRect8(@ptrCast(self), x, y, w, h, flags, text_str, tabstops, @ptrCast(tabarray));
    }

    pub fn Size3(self: ?*anyopaque, flags: i32, str: []const u8, tabstops: i32) QtC.QSize {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QFontMetrics_Size3(@ptrCast(self), flags, str_str, tabstops);
    }

    pub fn Size4(self: ?*anyopaque, flags: i32, str: []const u8, tabstops: i32, tabarray: *i32) QtC.QSize {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QFontMetrics_Size4(@ptrCast(self), flags, str_str, tabstops, @ptrCast(tabarray));
    }

    pub fn ElidedText4(self: ?*anyopaque, text: []const u8, mode: i32, width: i32, flags: i32, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QFontMetrics_ElidedText4(@ptrCast(self), text_str, @intCast(mode), width, flags);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetrics.ElidedText4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontMetrics_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfontmetricsf.html
pub const qfontmetricsf = struct {

    /// New constructs a new QFontMetricsF object.
    pub fn New(font: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.QFontMetricsF_new(@ptrCast(font));
    }


    /// New2 constructs a new QFontMetricsF object.
    pub fn New2(font: ?*anyopaque, pd: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.QFontMetricsF_new2(@ptrCast(font), @ptrCast(pd));
    }


    /// New3 constructs a new QFontMetricsF object.
    pub fn New3(param1: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.QFontMetricsF_new3(@ptrCast(param1));
    }


    /// New4 constructs a new QFontMetricsF object.
    pub fn New4(param1: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.QFontMetricsF_new4(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontMetricsF_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontMetricsF_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontMetricsF_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Ascent(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_Ascent(@ptrCast(self));
    }

    pub fn CapHeight(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_CapHeight(@ptrCast(self));
    }

    pub fn Descent(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_Descent(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_Height(@ptrCast(self));
    }

    pub fn Leading(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_Leading(@ptrCast(self));
    }

    pub fn LineSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_LineSpacing(@ptrCast(self));
    }

    pub fn MinLeftBearing(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_MinLeftBearing(@ptrCast(self));
    }

    pub fn MinRightBearing(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_MinRightBearing(@ptrCast(self));
    }

    pub fn MaxWidth(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_MaxWidth(@ptrCast(self));
    }

    pub fn XHeight(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_XHeight(@ptrCast(self));
    }

    pub fn AverageCharWidth(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_AverageCharWidth(@ptrCast(self));
    }

    pub fn InFont(self: ?*anyopaque, param1: QtC.QChar) bool {
        return qtc.QFontMetricsF_InFont(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InFontUcs4(self: ?*anyopaque, ucs4: u32) bool {
        return qtc.QFontMetricsF_InFontUcs4(@ptrCast(self), ucs4);
    }

    pub fn LeftBearing(self: ?*anyopaque, param1: QtC.QChar) f64 {
        return qtc.QFontMetricsF_LeftBearing(@ptrCast(self), @ptrCast(param1));
    }

    pub fn RightBearing(self: ?*anyopaque, param1: QtC.QChar) f64 {
        return qtc.QFontMetricsF_RightBearing(@ptrCast(self), @ptrCast(param1));
    }

    pub fn HorizontalAdvance(self: ?*anyopaque, stringVal: []const u8) f64 {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QFontMetricsF_HorizontalAdvance(@ptrCast(self), stringVal_str);
    }

    pub fn HorizontalAdvance2(self: ?*anyopaque, param1: QtC.QChar) f64 {
        return qtc.QFontMetricsF_HorizontalAdvance2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn HorizontalAdvance3(self: ?*anyopaque, stringVal: []const u8, textOption: ?*anyopaque) f64 {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QFontMetricsF_HorizontalAdvance3(@ptrCast(self), stringVal_str, @ptrCast(textOption));
    }

    pub fn BoundingRect(self: ?*anyopaque, stringVal: []const u8) QtC.QRectF {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QFontMetricsF_BoundingRect(@ptrCast(self), stringVal_str);
    }

    pub fn BoundingRect2(self: ?*anyopaque, text: []const u8, textOption: ?*anyopaque) QtC.QRectF {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetricsF_BoundingRect2(@ptrCast(self), text_str, @ptrCast(textOption));
    }

    pub fn BoundingRect3(self: ?*anyopaque, param1: QtC.QChar) QtC.QRectF {
        return qtc.QFontMetricsF_BoundingRect3(@ptrCast(self), @ptrCast(param1));
    }

    pub fn BoundingRect4(self: ?*anyopaque, r: ?*anyopaque, flags: i32, stringVal: []const u8) QtC.QRectF {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QFontMetricsF_BoundingRect4(@ptrCast(self), @ptrCast(r), flags, stringVal_str);
    }

    pub fn Size(self: ?*anyopaque, flags: i32, str: []const u8) QtC.QSizeF {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QFontMetricsF_Size(@ptrCast(self), flags, str_str);
    }

    pub fn TightBoundingRect(self: ?*anyopaque, text: []const u8) QtC.QRectF {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetricsF_TightBoundingRect(@ptrCast(self), text_str);
    }

    pub fn TightBoundingRect2(self: ?*anyopaque, text: []const u8, textOption: ?*anyopaque) QtC.QRectF {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QFontMetricsF_TightBoundingRect2(@ptrCast(self), text_str, @ptrCast(textOption));
    }

    pub fn ElidedText(self: ?*anyopaque, text: []const u8, mode: i32, width: f64, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QFontMetricsF_ElidedText(@ptrCast(self), text_str, @intCast(mode), width);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetricsf.ElidedText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UnderlinePos(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_UnderlinePos(@ptrCast(self));
    }

    pub fn OverlinePos(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_OverlinePos(@ptrCast(self));
    }

    pub fn StrikeOutPos(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_StrikeOutPos(@ptrCast(self));
    }

    pub fn LineWidth(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_LineWidth(@ptrCast(self));
    }

    pub fn FontDpi(self: ?*anyopaque, ) f64 {
        return qtc.QFontMetricsF_FontDpi(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFontMetricsF_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFontMetricsF_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn HorizontalAdvance22(self: ?*anyopaque, stringVal: []const u8, length: i32) f64 {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QFontMetricsF_HorizontalAdvance22(@ptrCast(self), stringVal_str, length);
    }

    pub fn BoundingRect42(self: ?*anyopaque, r: ?*anyopaque, flags: i32, stringVal: []const u8, tabstops: i32) QtC.QRectF {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QFontMetricsF_BoundingRect42(@ptrCast(self), @ptrCast(r), flags, stringVal_str, tabstops);
    }

    pub fn BoundingRect5(self: ?*anyopaque, r: ?*anyopaque, flags: i32, stringVal: []const u8, tabstops: i32, tabarray: *i32) QtC.QRectF {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QFontMetricsF_BoundingRect5(@ptrCast(self), @ptrCast(r), flags, stringVal_str, tabstops, @ptrCast(tabarray));
    }

    pub fn Size3(self: ?*anyopaque, flags: i32, str: []const u8, tabstops: i32) QtC.QSizeF {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QFontMetricsF_Size3(@ptrCast(self), flags, str_str, tabstops);
    }

    pub fn Size4(self: ?*anyopaque, flags: i32, str: []const u8, tabstops: i32, tabarray: *i32) QtC.QSizeF {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QFontMetricsF_Size4(@ptrCast(self), flags, str_str, tabstops, @ptrCast(tabarray));
    }

    pub fn ElidedText4(self: ?*anyopaque, text: []const u8, mode: i32, width: f64, flags: i32, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QFontMetricsF_ElidedText4(@ptrCast(self), text_str, @intCast(mode), width, flags);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetricsf.ElidedText4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontMetricsF_Delete(@ptrCast(self));
    }
};
