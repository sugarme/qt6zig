const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextlength.html
pub const qtextlength = struct {

    /// New constructs a new QTextLength object.
    pub fn New(other: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextLength_new(@ptrCast(other));
    }


    /// New2 constructs a new QTextLength object.
    pub fn New2(other: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextLength_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextLength object.
    pub fn New3() QtC.QTextLength {
        return qtc.QTextLength_new3();
    }


    /// New4 constructs a new QTextLength object.
    pub fn New4(typeVal: i32, value: f64) QtC.QTextLength {
        return qtc.QTextLength_new4(@intCast(typeVal), value);
    }


    /// New5 constructs a new QTextLength object.
    pub fn New5(param1: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextLength_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextLength_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextLength_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QTextLength_Type(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, maximumLength: f64) f64 {
        return qtc.QTextLength_Value(@ptrCast(self), maximumLength);
    }

    pub fn RawValue(self: ?*anyopaque, ) f64 {
        return qtc.QTextLength_RawValue(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextLength_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextLength_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QTextLength_OperatorQVariant(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextLength_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextformat.html
pub const qtextformat = struct {

    /// New constructs a new QTextFormat object.
    pub fn New() QtC.QTextFormat {
        return qtc.QTextFormat_new();
    }


    /// New2 constructs a new QTextFormat object.
    pub fn New2(typeVal: i32) QtC.QTextFormat {
        return qtc.QTextFormat_new2(typeVal);
    }


    /// New3 constructs a new QTextFormat object.
    pub fn New3(rhs: ?*anyopaque) QtC.QTextFormat {
        return qtc.QTextFormat_new3(@ptrCast(rhs));
    }


    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsValid(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    pub fn ObjectIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), object);
    }

    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), propertyId);
    }

    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), propertyId, @ptrCast(value));
    }

    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), propertyId);
    }

    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), propertyId);
    }

    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), propertyId);
    }

    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), propertyId);
    }

    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), propertyId);
    }

    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), propertyId);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextformat.StringProperty: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), propertyId);
    }

    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), propertyId);
    }

    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), propertyId);
    }

    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), propertyId);
    }

    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32) []const u8 {
        return qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), propertyId);
    }

    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []const u8) void {
        qtc.QTextFormat_SetProperty2(@ptrCast(self), propertyId, @ptrCast(lengths));
    }

    pub fn Properties(self: ?*anyopaque, ) QMap<int, QVariant> {
        return qtc.QTextFormat_Properties(@ptrCast(self));
    }

    pub fn PropertyCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), typeVal);
    }

    pub fn ObjectType(self: ?*anyopaque, ) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    pub fn IsCharFormat(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    pub fn IsBlockFormat(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    pub fn IsListFormat(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    pub fn IsFrameFormat(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    pub fn IsImageFormat(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    pub fn IsTableFormat(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    pub fn IsTableCellFormat(self: ?*anyopaque, ) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    pub fn ToBlockFormat(self: ?*anyopaque, ) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    pub fn ToCharFormat(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    pub fn ToListFormat(self: ?*anyopaque, ) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    pub fn ToTableFormat(self: ?*anyopaque, ) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    pub fn ToFrameFormat(self: ?*anyopaque, ) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    pub fn ToImageFormat(self: ?*anyopaque, ) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    pub fn ToTableCellFormat(self: ?*anyopaque, ) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QTextFormat_OperatorQVariant(@ptrCast(self));
    }

    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn LayoutDirection(self: ?*anyopaque, ) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Background(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    pub fn ClearBackground(self: ?*anyopaque, ) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Foreground(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    pub fn ClearForeground(self: ?*anyopaque, ) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextcharformat.html
pub const qtextcharformat = struct {

    /// New constructs a new QTextCharFormat object.
    pub fn New() QtC.QTextCharFormat {
        return qtc.QTextCharFormat_new();
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextCharFormat_IsValid(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTextCharFormat_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QTextCharFormat_Font(@ptrCast(self));
    }

    pub fn SetFontFamily(self: ?*anyopaque, family: []const u8) void {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
qtc.QTextCharFormat_SetFontFamily(@ptrCast(self), family_str);
    }

    pub fn FontFamily(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.FontFamily: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFontFamilies(self: ?*anyopaque, families: []const u8) void {
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self), @ptrCast(families));
    }

    pub fn FontFamilies(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QTextCharFormat_FontFamilies(@ptrCast(self));
    }

    pub fn SetFontStyleName(self: ?*anyopaque, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
    .len = styleName.len,
    .data = styleName.ptr,
};
qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self), styleName_str);
    }

    pub fn FontStyleName(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QTextCharFormat_FontStyleName(@ptrCast(self));
    }

    pub fn SetFontPointSize(self: ?*anyopaque, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self), size);
    }

    pub fn FontPointSize(self: ?*anyopaque, ) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self));
    }

    pub fn SetFontWeight(self: ?*anyopaque, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self), weight);
    }

    pub fn FontWeight(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self));
    }

    pub fn SetFontItalic(self: ?*anyopaque, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self), italic);
    }

    pub fn FontItalic(self: ?*anyopaque, ) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self));
    }

    pub fn SetFontCapitalization(self: ?*anyopaque, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self), @intCast(capitalization));
    }

    pub fn FontCapitalization(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self));
    }

    pub fn SetFontLetterSpacingType(self: ?*anyopaque, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self), @intCast(letterSpacingType));
    }

    pub fn FontLetterSpacingType(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self));
    }

    pub fn SetFontLetterSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self), spacing);
    }

    pub fn FontLetterSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self));
    }

    pub fn SetFontWordSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self), spacing);
    }

    pub fn FontWordSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self));
    }

    pub fn SetFontUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self), underline);
    }

    pub fn FontUnderline(self: ?*anyopaque, ) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self));
    }

    pub fn SetFontOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self), overline);
    }

    pub fn FontOverline(self: ?*anyopaque, ) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self));
    }

    pub fn SetFontStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self), strikeOut);
    }

    pub fn FontStrikeOut(self: ?*anyopaque, ) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self));
    }

    pub fn SetUnderlineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn UnderlineColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QTextCharFormat_UnderlineColor(@ptrCast(self));
    }

    pub fn SetFontFixedPitch(self: ?*anyopaque, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self), fixedPitch);
    }

    pub fn FontFixedPitch(self: ?*anyopaque, ) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self));
    }

    pub fn SetFontStretch(self: ?*anyopaque, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self), factor);
    }

    pub fn FontStretch(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self));
    }

    pub fn SetFontStyleHint(self: ?*anyopaque, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self), @intCast(hint));
    }

    pub fn SetFontStyleStrategy(self: ?*anyopaque, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self), @intCast(strategy));
    }

    pub fn FontStyleHint(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self));
    }

    pub fn FontStyleStrategy(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self));
    }

    pub fn SetFontHintingPreference(self: ?*anyopaque, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self), @intCast(hintingPreference));
    }

    pub fn FontHintingPreference(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self));
    }

    pub fn SetFontKerning(self: ?*anyopaque, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self), enable);
    }

    pub fn FontKerning(self: ?*anyopaque, ) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self));
    }

    pub fn SetUnderlineStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self), @intCast(style));
    }

    pub fn UnderlineStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self));
    }

    pub fn SetVerticalAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn VerticalAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self));
    }

    pub fn SetTextOutline(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self), @ptrCast(pen));
    }

    pub fn TextOutline(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QTextCharFormat_TextOutline(@ptrCast(self));
    }

    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
    .len = tip.len,
    .data = tip.ptr,
};
qtc.QTextCharFormat_SetToolTip(@ptrCast(self), tip_str);
    }

    pub fn ToolTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSuperScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self), baseline);
    }

    pub fn SuperScriptBaseline(self: ?*anyopaque, ) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self));
    }

    pub fn SetSubScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self), baseline);
    }

    pub fn SubScriptBaseline(self: ?*anyopaque, ) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self));
    }

    pub fn SetBaselineOffset(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self), baseline);
    }

    pub fn BaselineOffset(self: ?*anyopaque, ) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self));
    }

    pub fn SetAnchor(self: ?*anyopaque, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self), anchor);
    }

    pub fn IsAnchor(self: ?*anyopaque, ) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self));
    }

    pub fn SetAnchorHref(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self), value_str);
    }

    pub fn AnchorHref(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.AnchorHref: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAnchorNames(self: ?*anyopaque, names: []const u8) void {
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self), @ptrCast(names));
    }

    pub fn AnchorNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextCharFormat_AnchorNames(@ptrCast(self));
    }

    pub fn SetTableCellRowSpan(self: ?*anyopaque, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self), tableCellRowSpan);
    }

    pub fn TableCellRowSpan(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self));
    }

    pub fn SetTableCellColumnSpan(self: ?*anyopaque, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self), tableCellColumnSpan);
    }

    pub fn TableCellColumnSpan(self: ?*anyopaque, ) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self));
    }

    pub fn SetFont2(self: ?*anyopaque, font: ?*anyopaque, behavior: i32) void {
        qtc.QTextCharFormat_SetFont2(@ptrCast(self), @ptrCast(font), @intCast(behavior));
    }

    pub fn SetFontStyleHint2(self: ?*anyopaque, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self), @intCast(hint), @intCast(strategy));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextCharFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextblockformat.html
pub const qtextblockformat = struct {

    /// New constructs a new QTextBlockFormat object.
    pub fn New() QtC.QTextBlockFormat {
        return qtc.QTextBlockFormat_new();
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextBlockFormat_IsValid(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTextBlockFormat_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlockFormat_Alignment(@ptrCast(self));
    }

    pub fn SetTopMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextBlockFormat_SetTopMargin(@ptrCast(self), margin);
    }

    pub fn TopMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextBlockFormat_TopMargin(@ptrCast(self));
    }

    pub fn SetBottomMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextBlockFormat_SetBottomMargin(@ptrCast(self), margin);
    }

    pub fn BottomMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextBlockFormat_BottomMargin(@ptrCast(self));
    }

    pub fn SetLeftMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextBlockFormat_SetLeftMargin(@ptrCast(self), margin);
    }

    pub fn LeftMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextBlockFormat_LeftMargin(@ptrCast(self));
    }

    pub fn SetRightMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextBlockFormat_SetRightMargin(@ptrCast(self), margin);
    }

    pub fn RightMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextBlockFormat_RightMargin(@ptrCast(self));
    }

    pub fn SetTextIndent(self: ?*anyopaque, aindent: f64) void {
        qtc.QTextBlockFormat_SetTextIndent(@ptrCast(self), aindent);
    }

    pub fn TextIndent(self: ?*anyopaque, ) f64 {
        return qtc.QTextBlockFormat_TextIndent(@ptrCast(self));
    }

    pub fn SetIndent(self: ?*anyopaque, indent: i32) void {
        qtc.QTextBlockFormat_SetIndent(@ptrCast(self), indent);
    }

    pub fn Indent(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlockFormat_Indent(@ptrCast(self));
    }

    pub fn SetHeadingLevel(self: ?*anyopaque, alevel: i32) void {
        qtc.QTextBlockFormat_SetHeadingLevel(@ptrCast(self), alevel);
    }

    pub fn HeadingLevel(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlockFormat_HeadingLevel(@ptrCast(self));
    }

    pub fn SetLineHeight(self: ?*anyopaque, height: f64, heightType: i32) void {
        qtc.QTextBlockFormat_SetLineHeight(@ptrCast(self), height, heightType);
    }

    pub fn LineHeight(self: ?*anyopaque, scriptLineHeight: f64, scaling: f64) f64 {
        return qtc.QTextBlockFormat_LineHeight(@ptrCast(self), scriptLineHeight, scaling);
    }

    pub fn LineHeight2(self: ?*anyopaque, ) f64 {
        return qtc.QTextBlockFormat_LineHeight2(@ptrCast(self));
    }

    pub fn LineHeightType(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlockFormat_LineHeightType(@ptrCast(self));
    }

    pub fn SetNonBreakableLines(self: ?*anyopaque, b: bool) void {
        qtc.QTextBlockFormat_SetNonBreakableLines(@ptrCast(self), b);
    }

    pub fn NonBreakableLines(self: ?*anyopaque, ) bool {
        return qtc.QTextBlockFormat_NonBreakableLines(@ptrCast(self));
    }

    pub fn SetPageBreakPolicy(self: ?*anyopaque, flags: i32) void {
        qtc.QTextBlockFormat_SetPageBreakPolicy(@ptrCast(self), @intCast(flags));
    }

    pub fn PageBreakPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlockFormat_PageBreakPolicy(@ptrCast(self));
    }

    pub fn SetTabPositions(self: ?*anyopaque, tabs: []const u8) void {
        qtc.QTextBlockFormat_SetTabPositions(@ptrCast(self), @ptrCast(tabs));
    }

    pub fn TabPositions(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextBlockFormat_TabPositions(@ptrCast(self));
    }

    pub fn SetMarker(self: ?*anyopaque, marker: i32) void {
        qtc.QTextBlockFormat_SetMarker(@ptrCast(self), @intCast(marker));
    }

    pub fn Marker(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlockFormat_Marker(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextBlockFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextlistformat.html
pub const qtextlistformat = struct {

    /// New constructs a new QTextListFormat object.
    pub fn New() QtC.QTextListFormat {
        return qtc.QTextListFormat_new();
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextListFormat_IsValid(@ptrCast(self));
    }

    pub fn SetStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextListFormat_SetStyle(@ptrCast(self), @intCast(style));
    }

    pub fn Style(self: ?*anyopaque, ) i32 {
        return qtc.QTextListFormat_Style(@ptrCast(self));
    }

    pub fn SetIndent(self: ?*anyopaque, indent: i32) void {
        qtc.QTextListFormat_SetIndent(@ptrCast(self), indent);
    }

    pub fn Indent(self: ?*anyopaque, ) i32 {
        return qtc.QTextListFormat_Indent(@ptrCast(self));
    }

    pub fn SetNumberPrefix(self: ?*anyopaque, numberPrefix: []const u8) void {
        const numberPrefix_str = qtc.libqt_string{
    .len = numberPrefix.len,
    .data = numberPrefix.ptr,
};
qtc.QTextListFormat_SetNumberPrefix(@ptrCast(self), numberPrefix_str);
    }

    pub fn NumberPrefix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextListFormat_NumberPrefix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlistformat.NumberPrefix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNumberSuffix(self: ?*anyopaque, numberSuffix: []const u8) void {
        const numberSuffix_str = qtc.libqt_string{
    .len = numberSuffix.len,
    .data = numberSuffix.ptr,
};
qtc.QTextListFormat_SetNumberSuffix(@ptrCast(self), numberSuffix_str);
    }

    pub fn NumberSuffix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextListFormat_NumberSuffix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlistformat.NumberSuffix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetStart(self: ?*anyopaque, indent: i32) void {
        qtc.QTextListFormat_SetStart(@ptrCast(self), indent);
    }

    pub fn Start(self: ?*anyopaque, ) i32 {
        return qtc.QTextListFormat_Start(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextListFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextimageformat.html
pub const qtextimageformat = struct {

    /// New constructs a new QTextImageFormat object.
    pub fn New() QtC.QTextImageFormat {
        return qtc.QTextImageFormat_new();
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextImageFormat_IsValid(@ptrCast(self));
    }

    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QTextImageFormat_SetName(@ptrCast(self), name_str);
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextImageFormat_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextImageFormat_SetWidth(@ptrCast(self), width);
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QTextImageFormat_Width(@ptrCast(self));
    }

    pub fn SetMaximumWidth(self: ?*anyopaque, maxWidth: QtC.QTextLength) void {
        qtc.QTextImageFormat_SetMaximumWidth(@ptrCast(self), @ptrCast(maxWidth));
    }

    pub fn MaximumWidth(self: ?*anyopaque, ) QtC.QTextLength {
        return qtc.QTextImageFormat_MaximumWidth(@ptrCast(self));
    }

    pub fn SetHeight(self: ?*anyopaque, height: f64) void {
        qtc.QTextImageFormat_SetHeight(@ptrCast(self), height);
    }

    pub fn Height(self: ?*anyopaque, ) f64 {
        return qtc.QTextImageFormat_Height(@ptrCast(self));
    }

    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QTextImageFormat_SetQuality(@ptrCast(self), quality);
    }

    pub fn SetQuality2(self: ?*anyopaque, ) void {
        qtc.QTextImageFormat_SetQuality2(@ptrCast(self));
    }

    pub fn Quality(self: ?*anyopaque, ) i32 {
        return qtc.QTextImageFormat_Quality(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextImageFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextframeformat.html
pub const qtextframeformat = struct {

    /// New constructs a new QTextFrameFormat object.
    pub fn New() QtC.QTextFrameFormat {
        return qtc.QTextFrameFormat_new();
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextFrameFormat_IsValid(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, f: i32) void {
        qtc.QTextFrameFormat_SetPosition(@ptrCast(self), @intCast(f));
    }

    pub fn Position(self: ?*anyopaque, ) i32 {
        return qtc.QTextFrameFormat_Position(@ptrCast(self));
    }

    pub fn SetBorder(self: ?*anyopaque, border: f64) void {
        qtc.QTextFrameFormat_SetBorder(@ptrCast(self), border);
    }

    pub fn Border(self: ?*anyopaque, ) f64 {
        return qtc.QTextFrameFormat_Border(@ptrCast(self));
    }

    pub fn SetBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn BorderBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTextFrameFormat_BorderBrush(@ptrCast(self));
    }

    pub fn SetBorderStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextFrameFormat_SetBorderStyle(@ptrCast(self), @intCast(style));
    }

    pub fn BorderStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTextFrameFormat_BorderStyle(@ptrCast(self));
    }

    pub fn SetMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetMargin(@ptrCast(self), margin);
    }

    pub fn Margin(self: ?*anyopaque, ) f64 {
        return qtc.QTextFrameFormat_Margin(@ptrCast(self));
    }

    pub fn SetTopMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetTopMargin(@ptrCast(self), margin);
    }

    pub fn TopMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextFrameFormat_TopMargin(@ptrCast(self));
    }

    pub fn SetBottomMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetBottomMargin(@ptrCast(self), margin);
    }

    pub fn BottomMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextFrameFormat_BottomMargin(@ptrCast(self));
    }

    pub fn SetLeftMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetLeftMargin(@ptrCast(self), margin);
    }

    pub fn LeftMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextFrameFormat_LeftMargin(@ptrCast(self));
    }

    pub fn SetRightMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetRightMargin(@ptrCast(self), margin);
    }

    pub fn RightMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextFrameFormat_RightMargin(@ptrCast(self));
    }

    pub fn SetPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextFrameFormat_SetPadding(@ptrCast(self), padding);
    }

    pub fn Padding(self: ?*anyopaque, ) f64 {
        return qtc.QTextFrameFormat_Padding(@ptrCast(self));
    }

    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextFrameFormat_SetWidth(@ptrCast(self), width);
    }

    pub fn SetWidth2(self: ?*anyopaque, length: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetWidth2(@ptrCast(self), @ptrCast(length));
    }

    pub fn Width(self: ?*anyopaque, ) QtC.QTextLength {
        return qtc.QTextFrameFormat_Width(@ptrCast(self));
    }

    pub fn SetHeight(self: ?*anyopaque, height: f64) void {
        qtc.QTextFrameFormat_SetHeight(@ptrCast(self), height);
    }

    pub fn SetHeight2(self: ?*anyopaque, height: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetHeight2(@ptrCast(self), @ptrCast(height));
    }

    pub fn Height(self: ?*anyopaque, ) QtC.QTextLength {
        return qtc.QTextFrameFormat_Height(@ptrCast(self));
    }

    pub fn SetPageBreakPolicy(self: ?*anyopaque, flags: i32) void {
        qtc.QTextFrameFormat_SetPageBreakPolicy(@ptrCast(self), @intCast(flags));
    }

    pub fn PageBreakPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QTextFrameFormat_PageBreakPolicy(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextFrameFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtexttableformat.html
pub const qtexttableformat = struct {

    /// New constructs a new QTextTableFormat object.
    pub fn New() QtC.QTextTableFormat {
        return qtc.QTextTableFormat_new();
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextTableFormat_IsValid(@ptrCast(self));
    }

    pub fn Columns(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableFormat_Columns(@ptrCast(self));
    }

    pub fn SetColumns(self: ?*anyopaque, columns: i32) void {
        qtc.QTextTableFormat_SetColumns(@ptrCast(self), columns);
    }

    pub fn SetColumnWidthConstraints(self: ?*anyopaque, constraints: []const u8) void {
        qtc.QTextTableFormat_SetColumnWidthConstraints(@ptrCast(self), @ptrCast(constraints));
    }

    pub fn ColumnWidthConstraints(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextTableFormat_ColumnWidthConstraints(@ptrCast(self));
    }

    pub fn ClearColumnWidthConstraints(self: ?*anyopaque, ) void {
        qtc.QTextTableFormat_ClearColumnWidthConstraints(@ptrCast(self));
    }

    pub fn CellSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableFormat_CellSpacing(@ptrCast(self));
    }

    pub fn SetCellSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextTableFormat_SetCellSpacing(@ptrCast(self), spacing);
    }

    pub fn CellPadding(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableFormat_CellPadding(@ptrCast(self));
    }

    pub fn SetCellPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableFormat_SetCellPadding(@ptrCast(self), padding);
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTextTableFormat_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableFormat_Alignment(@ptrCast(self));
    }

    pub fn SetHeaderRowCount(self: ?*anyopaque, count: i32) void {
        qtc.QTextTableFormat_SetHeaderRowCount(@ptrCast(self), count);
    }

    pub fn HeaderRowCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableFormat_HeaderRowCount(@ptrCast(self));
    }

    pub fn SetBorderCollapse(self: ?*anyopaque, borderCollapse: bool) void {
        qtc.QTextTableFormat_SetBorderCollapse(@ptrCast(self), borderCollapse);
    }

    pub fn BorderCollapse(self: ?*anyopaque, ) bool {
        return qtc.QTextTableFormat_BorderCollapse(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextTableFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtexttablecellformat.html
pub const qtexttablecellformat = struct {

    /// New constructs a new QTextTableCellFormat object.
    pub fn New() QtC.QTextTableCellFormat {
        return qtc.QTextTableCellFormat_new();
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextTableCellFormat_IsValid(@ptrCast(self));
    }

    pub fn SetTopPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetTopPadding(@ptrCast(self), padding);
    }

    pub fn TopPadding(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableCellFormat_TopPadding(@ptrCast(self));
    }

    pub fn SetBottomPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetBottomPadding(@ptrCast(self), padding);
    }

    pub fn BottomPadding(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableCellFormat_BottomPadding(@ptrCast(self));
    }

    pub fn SetLeftPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetLeftPadding(@ptrCast(self), padding);
    }

    pub fn LeftPadding(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableCellFormat_LeftPadding(@ptrCast(self));
    }

    pub fn SetRightPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetRightPadding(@ptrCast(self), padding);
    }

    pub fn RightPadding(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableCellFormat_RightPadding(@ptrCast(self));
    }

    pub fn SetPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetPadding(@ptrCast(self), padding);
    }

    pub fn SetTopBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetTopBorder(@ptrCast(self), width);
    }

    pub fn TopBorder(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableCellFormat_TopBorder(@ptrCast(self));
    }

    pub fn SetBottomBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetBottomBorder(@ptrCast(self), width);
    }

    pub fn BottomBorder(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableCellFormat_BottomBorder(@ptrCast(self));
    }

    pub fn SetLeftBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetLeftBorder(@ptrCast(self), width);
    }

    pub fn LeftBorder(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableCellFormat_LeftBorder(@ptrCast(self));
    }

    pub fn SetRightBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetRightBorder(@ptrCast(self), width);
    }

    pub fn RightBorder(self: ?*anyopaque, ) f64 {
        return qtc.QTextTableCellFormat_RightBorder(@ptrCast(self));
    }

    pub fn SetBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetBorder(@ptrCast(self), width);
    }

    pub fn SetTopBorderStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextTableCellFormat_SetTopBorderStyle(@ptrCast(self), @intCast(style));
    }

    pub fn TopBorderStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCellFormat_TopBorderStyle(@ptrCast(self));
    }

    pub fn SetBottomBorderStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextTableCellFormat_SetBottomBorderStyle(@ptrCast(self), @intCast(style));
    }

    pub fn BottomBorderStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCellFormat_BottomBorderStyle(@ptrCast(self));
    }

    pub fn SetLeftBorderStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextTableCellFormat_SetLeftBorderStyle(@ptrCast(self), @intCast(style));
    }

    pub fn LeftBorderStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCellFormat_LeftBorderStyle(@ptrCast(self));
    }

    pub fn SetRightBorderStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextTableCellFormat_SetRightBorderStyle(@ptrCast(self), @intCast(style));
    }

    pub fn RightBorderStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCellFormat_RightBorderStyle(@ptrCast(self));
    }

    pub fn SetBorderStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextTableCellFormat_SetBorderStyle(@ptrCast(self), @intCast(style));
    }

    pub fn SetTopBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetTopBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn TopBorderBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTextTableCellFormat_TopBorderBrush(@ptrCast(self));
    }

    pub fn SetBottomBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetBottomBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn BottomBorderBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTextTableCellFormat_BottomBorderBrush(@ptrCast(self));
    }

    pub fn SetLeftBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetLeftBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn LeftBorderBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTextTableCellFormat_LeftBorderBrush(@ptrCast(self));
    }

    pub fn SetRightBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetRightBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn RightBorderBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTextTableCellFormat_RightBorderBrush(@ptrCast(self));
    }

    pub fn SetBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextTableCellFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/textformat.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const VariableLength: i32 = 0;
        pub const FixedLength: i32 = 1;
        pub const PercentageLength: i32 = 2;
    };

    pub const FormatType = enum {
        pub const InvalidFormat: i32 = -1;
        pub const BlockFormat: i32 = 1;
        pub const CharFormat: i32 = 2;
        pub const ListFormat: i32 = 3;
        pub const FrameFormat: i32 = 5;
        pub const UserFormat: i32 = 100;
    };

    pub const Property = enum {
        pub const ObjectIndex: i32 = 0;
        pub const CssFloat: i32 = 2048;
        pub const LayoutDirection: i32 = 2049;
        pub const OutlinePen: i32 = 2064;
        pub const BackgroundBrush: i32 = 2080;
        pub const ForegroundBrush: i32 = 2081;
        pub const BackgroundImageUrl: i32 = 2083;
        pub const BlockAlignment: i32 = 4112;
        pub const BlockTopMargin: i32 = 4144;
        pub const BlockBottomMargin: i32 = 4145;
        pub const BlockLeftMargin: i32 = 4146;
        pub const BlockRightMargin: i32 = 4147;
        pub const TextIndent: i32 = 4148;
        pub const TabPositions: i32 = 4149;
        pub const BlockIndent: i32 = 4160;
        pub const LineHeight: i32 = 4168;
        pub const LineHeightType: i32 = 4169;
        pub const BlockNonBreakableLines: i32 = 4176;
        pub const BlockTrailingHorizontalRulerWidth: i32 = 4192;
        pub const HeadingLevel: i32 = 4208;
        pub const BlockQuoteLevel: i32 = 4224;
        pub const BlockCodeLanguage: i32 = 4240;
        pub const BlockCodeFence: i32 = 4241;
        pub const BlockMarker: i32 = 4256;
        pub const FirstFontProperty: i32 = 8160;
        pub const FontCapitalization: i32 = 8160;
        pub const FontLetterSpacing: i32 = 8161;
        pub const FontWordSpacing: i32 = 8162;
        pub const FontStyleHint: i32 = 8163;
        pub const FontStyleStrategy: i32 = 8164;
        pub const FontKerning: i32 = 8165;
        pub const FontHintingPreference: i32 = 8166;
        pub const FontFamilies: i32 = 8167;
        pub const FontStyleName: i32 = 8168;
        pub const FontLetterSpacingType: i32 = 8169;
        pub const FontStretch: i32 = 8170;
        pub const FontFamily: i32 = 8192;
        pub const FontPointSize: i32 = 8193;
        pub const FontSizeAdjustment: i32 = 8194;
        pub const FontSizeIncrement: i32 = 8194;
        pub const FontWeight: i32 = 8195;
        pub const FontItalic: i32 = 8196;
        pub const FontUnderline: i32 = 8197;
        pub const FontOverline: i32 = 8198;
        pub const FontStrikeOut: i32 = 8199;
        pub const FontFixedPitch: i32 = 8200;
        pub const FontPixelSize: i32 = 8201;
        pub const LastFontProperty: i32 = 8201;
        pub const TextUnderlineColor: i32 = 8224;
        pub const TextVerticalAlignment: i32 = 8225;
        pub const TextOutline: i32 = 8226;
        pub const TextUnderlineStyle: i32 = 8227;
        pub const TextToolTip: i32 = 8228;
        pub const TextSuperScriptBaseline: i32 = 8229;
        pub const TextSubScriptBaseline: i32 = 8230;
        pub const TextBaselineOffset: i32 = 8231;
        pub const IsAnchor: i32 = 8240;
        pub const AnchorHref: i32 = 8241;
        pub const AnchorName: i32 = 8242;
        pub const OldFontLetterSpacingType: i32 = 8243;
        pub const OldFontStretch: i32 = 8244;
        pub const OldTextUnderlineColor: i32 = 8208;
        pub const OldFontFamily: i32 = 8192;
        pub const ObjectType: i32 = 12032;
        pub const ListStyle: i32 = 12288;
        pub const ListIndent: i32 = 12289;
        pub const ListNumberPrefix: i32 = 12290;
        pub const ListNumberSuffix: i32 = 12291;
        pub const ListStart: i32 = 12292;
        pub const FrameBorder: i32 = 16384;
        pub const FrameMargin: i32 = 16385;
        pub const FramePadding: i32 = 16386;
        pub const FrameWidth: i32 = 16387;
        pub const FrameHeight: i32 = 16388;
        pub const FrameTopMargin: i32 = 16389;
        pub const FrameBottomMargin: i32 = 16390;
        pub const FrameLeftMargin: i32 = 16391;
        pub const FrameRightMargin: i32 = 16392;
        pub const FrameBorderBrush: i32 = 16393;
        pub const FrameBorderStyle: i32 = 16400;
        pub const TableColumns: i32 = 16640;
        pub const TableColumnWidthConstraints: i32 = 16641;
        pub const TableCellSpacing: i32 = 16642;
        pub const TableCellPadding: i32 = 16643;
        pub const TableHeaderRowCount: i32 = 16644;
        pub const TableBorderCollapse: i32 = 16645;
        pub const TableCellRowSpan: i32 = 18448;
        pub const TableCellColumnSpan: i32 = 18449;
        pub const TableCellTopPadding: i32 = 18450;
        pub const TableCellBottomPadding: i32 = 18451;
        pub const TableCellLeftPadding: i32 = 18452;
        pub const TableCellRightPadding: i32 = 18453;
        pub const TableCellTopBorder: i32 = 18454;
        pub const TableCellBottomBorder: i32 = 18455;
        pub const TableCellLeftBorder: i32 = 18456;
        pub const TableCellRightBorder: i32 = 18457;
        pub const TableCellTopBorderStyle: i32 = 18458;
        pub const TableCellBottomBorderStyle: i32 = 18459;
        pub const TableCellLeftBorderStyle: i32 = 18460;
        pub const TableCellRightBorderStyle: i32 = 18461;
        pub const TableCellTopBorderBrush: i32 = 18462;
        pub const TableCellBottomBorderBrush: i32 = 18463;
        pub const TableCellLeftBorderBrush: i32 = 18464;
        pub const TableCellRightBorderBrush: i32 = 18465;
        pub const ImageName: i32 = 20480;
        pub const ImageTitle: i32 = 20481;
        pub const ImageAltText: i32 = 20482;
        pub const ImageWidth: i32 = 20496;
        pub const ImageHeight: i32 = 20497;
        pub const ImageQuality: i32 = 20500;
        pub const ImageMaxWidth: i32 = 20501;
        pub const FullWidthSelection: i32 = 24576;
        pub const PageBreakPolicy: i32 = 28672;
        pub const UserProperty: i32 = 1048576;
    };

    pub const ObjectTypes = enum {
        pub const NoObject: i32 = 0;
        pub const ImageObject: i32 = 1;
        pub const TableObject: i32 = 2;
        pub const TableCellObject: i32 = 3;
        pub const UserObject: i32 = 4096;
    };

    pub const PageBreakFlag = enum {
        pub const PageBreak_Auto: i32 = 0;
        pub const PageBreak_AlwaysBefore: i32 = 1;
        pub const PageBreak_AlwaysAfter: i32 = 16;
    };

    pub const VerticalAlignment = enum {
        pub const AlignNormal: i32 = 0;
        pub const AlignSuperScript: i32 = 1;
        pub const AlignSubScript: i32 = 2;
        pub const AlignMiddle: i32 = 3;
        pub const AlignTop: i32 = 4;
        pub const AlignBottom: i32 = 5;
        pub const AlignBaseline: i32 = 6;
    };

    pub const UnderlineStyle = enum {
        pub const NoUnderline: i32 = 0;
        pub const SingleUnderline: i32 = 1;
        pub const DashUnderline: i32 = 2;
        pub const DotLine: i32 = 3;
        pub const DashDotLine: i32 = 4;
        pub const DashDotDotLine: i32 = 5;
        pub const WaveUnderline: i32 = 6;
        pub const SpellCheckUnderline: i32 = 7;
    };

    pub const FontPropertiesInheritanceBehavior = enum {
        pub const FontPropertiesSpecifiedOnly: i32 = 0;
        pub const FontPropertiesAll: i32 = 1;
    };

    pub const LineHeightTypes = enum {
        pub const SingleHeight: i32 = 0;
        pub const ProportionalHeight: i32 = 1;
        pub const FixedHeight: i32 = 2;
        pub const MinimumHeight: i32 = 3;
        pub const LineDistanceHeight: i32 = 4;
    };

    pub const MarkerType = enum {
        pub const NoMarker: i32 = 0;
        pub const Unchecked: i32 = 1;
        pub const Checked: i32 = 2;
    };

    pub const Style = enum {
        pub const ListDisc: i32 = -1;
        pub const ListCircle: i32 = -2;
        pub const ListSquare: i32 = -3;
        pub const ListDecimal: i32 = -4;
        pub const ListLowerAlpha: i32 = -5;
        pub const ListUpperAlpha: i32 = -6;
        pub const ListLowerRoman: i32 = -7;
        pub const ListUpperRoman: i32 = -8;
        pub const ListStyleUndefined: i32 = 0;
    };

    pub const Position = enum {
        pub const InFlow: i32 = 0;
        pub const FloatLeft: i32 = 1;
        pub const FloatRight: i32 = 2;
    };

    pub const BorderStyle = enum {
        pub const BorderStyle_None: i32 = 0;
        pub const BorderStyle_Dotted: i32 = 1;
        pub const BorderStyle_Dashed: i32 = 2;
        pub const BorderStyle_Solid: i32 = 3;
        pub const BorderStyle_Double: i32 = 4;
        pub const BorderStyle_DotDash: i32 = 5;
        pub const BorderStyle_DotDotDash: i32 = 6;
        pub const BorderStyle_Groove: i32 = 7;
        pub const BorderStyle_Ridge: i32 = 8;
        pub const BorderStyle_Inset: i32 = 9;
        pub const BorderStyle_Outset: i32 = 10;
    };

};
