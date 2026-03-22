const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrawfont.html
pub const qrawfont = struct {

    /// New constructs a new QRawFont object.
    pub fn New() QtC.QRawFont {
        return qtc.QRawFont_new();
    }


    /// New2 constructs a new QRawFont object.
    pub fn New2(fileName: []const u8, pixelSize: f64) QtC.QRawFont {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QRawFont_new2(fileName_str, pixelSize);
    }


    /// New3 constructs a new QRawFont object.
    pub fn New3(fontData: []u8, pixelSize: f64) QtC.QRawFont {
        const fontData_str = qtc.libqt_string{
    .len = fontData.len,
    .data = fontData.ptr,
};
return qtc.QRawFont_new3(fontData_str, pixelSize);
    }


    /// New4 constructs a new QRawFont object.
    pub fn New4(other: ?*anyopaque) QtC.QRawFont {
        return qtc.QRawFont_new4(@ptrCast(other));
    }


    /// New5 constructs a new QRawFont object.
    pub fn New5(fileName: []const u8, pixelSize: f64, hintingPreference: i32) QtC.QRawFont {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QRawFont_new5(fileName_str, pixelSize, @intCast(hintingPreference));
    }


    /// New6 constructs a new QRawFont object.
    pub fn New6(fontData: []u8, pixelSize: f64, hintingPreference: i32) QtC.QRawFont {
        const fontData_str = qtc.libqt_string{
    .len = fontData.len,
    .data = fontData.ptr,
};
return qtc.QRawFont_new6(fontData_str, pixelSize, @intCast(hintingPreference));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRawFont_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRawFont_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QRawFont_IsValid(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QRawFont_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QRawFont_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn FamilyName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRawFont_FamilyName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrawfont.FamilyName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StyleName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRawFont_StyleName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrawfont.StyleName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Style(self: ?*anyopaque, ) i32 {
        return qtc.QRawFont_Style(@ptrCast(self));
    }

    pub fn Weight(self: ?*anyopaque, ) i32 {
        return qtc.QRawFont_Weight(@ptrCast(self));
    }

    pub fn GlyphIndexesForString(self: ?*anyopaque, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QRawFont_GlyphIndexesForString(@ptrCast(self), text_str);
    }

    pub fn AdvancesForGlyphIndexes(self: ?*anyopaque, glyphIndexes: []const u8) []const u8 {
        return qtc.QRawFont_AdvancesForGlyphIndexes(@ptrCast(self), @ptrCast(glyphIndexes));
    }

    pub fn AdvancesForGlyphIndexes2(self: ?*anyopaque, glyphIndexes: []const u8, layoutFlags: i32) []const u8 {
        return qtc.QRawFont_AdvancesForGlyphIndexes2(@ptrCast(self), @ptrCast(glyphIndexes), @intCast(layoutFlags));
    }

    pub fn GlyphIndexesForChars(self: ?*anyopaque, chars: ?*anyopaque, numChars: i32, glyphIndexes: *u32, numGlyphs: *i32) bool {
        return qtc.QRawFont_GlyphIndexesForChars(@ptrCast(self), @ptrCast(chars), numChars, @ptrCast(glyphIndexes), @ptrCast(numGlyphs));
    }

    pub fn AdvancesForGlyphIndexes3(self: ?*anyopaque, glyphIndexes: *const u32, advances: ?*anyopaque, numGlyphs: i32) bool {
        return qtc.QRawFont_AdvancesForGlyphIndexes3(@ptrCast(self), @ptrCast(glyphIndexes), @ptrCast(advances), numGlyphs);
    }

    pub fn AdvancesForGlyphIndexes4(self: ?*anyopaque, glyphIndexes: *const u32, advances: ?*anyopaque, numGlyphs: i32, layoutFlags: i32) bool {
        return qtc.QRawFont_AdvancesForGlyphIndexes4(@ptrCast(self), @ptrCast(glyphIndexes), @ptrCast(advances), numGlyphs, @intCast(layoutFlags));
    }

    pub fn AlphaMapForGlyph(self: ?*anyopaque, glyphIndex: u32) QtC.QImage {
        return qtc.QRawFont_AlphaMapForGlyph(@ptrCast(self), glyphIndex);
    }

    pub fn PathForGlyph(self: ?*anyopaque, glyphIndex: u32) QtC.QPainterPath {
        return qtc.QRawFont_PathForGlyph(@ptrCast(self), glyphIndex);
    }

    pub fn BoundingRect(self: ?*anyopaque, glyphIndex: u32) QtC.QRectF {
        return qtc.QRawFont_BoundingRect(@ptrCast(self), glyphIndex);
    }

    pub fn SetPixelSize(self: ?*anyopaque, pixelSize: f64) void {
        qtc.QRawFont_SetPixelSize(@ptrCast(self), pixelSize);
    }

    pub fn PixelSize(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_PixelSize(@ptrCast(self));
    }

    pub fn HintingPreference(self: ?*anyopaque, ) i32 {
        return qtc.QRawFont_HintingPreference(@ptrCast(self));
    }

    pub fn Ascent(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_Ascent(@ptrCast(self));
    }

    pub fn CapHeight(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_CapHeight(@ptrCast(self));
    }

    pub fn Descent(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_Descent(@ptrCast(self));
    }

    pub fn Leading(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_Leading(@ptrCast(self));
    }

    pub fn XHeight(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_XHeight(@ptrCast(self));
    }

    pub fn AverageCharWidth(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_AverageCharWidth(@ptrCast(self));
    }

    pub fn MaxCharWidth(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_MaxCharWidth(@ptrCast(self));
    }

    pub fn LineThickness(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_LineThickness(@ptrCast(self));
    }

    pub fn UnderlinePosition(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_UnderlinePosition(@ptrCast(self));
    }

    pub fn UnitsPerEm(self: ?*anyopaque, ) f64 {
        return qtc.QRawFont_UnitsPerEm(@ptrCast(self));
    }

    pub fn LoadFromFile(self: ?*anyopaque, fileName: []const u8, pixelSize: f64, hintingPreference: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QRawFont_LoadFromFile(@ptrCast(self), fileName_str, pixelSize, @intCast(hintingPreference));
    }

    pub fn LoadFromData(self: ?*anyopaque, fontData: []u8, pixelSize: f64, hintingPreference: i32) void {
        const fontData_str = qtc.libqt_string{
    .len = fontData.len,
    .data = fontData.ptr,
};
qtc.QRawFont_LoadFromData(@ptrCast(self), fontData_str, pixelSize, @intCast(hintingPreference));
    }

    pub fn SupportsCharacter(self: ?*anyopaque, ucs4: u32) bool {
        return qtc.QRawFont_SupportsCharacter(@ptrCast(self), ucs4);
    }

    pub fn SupportsCharacter2(self: ?*anyopaque, character: QtC.QChar) bool {
        return qtc.QRawFont_SupportsCharacter2(@ptrCast(self), @ptrCast(character));
    }

    pub fn SupportedWritingSystems(self: ?*anyopaque, ) []const u8 {
        return qtc.QRawFont_SupportedWritingSystems(@ptrCast(self));
    }

    pub fn FontTable(self: ?*anyopaque, tagName: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QRawFont_FontTable(@ptrCast(self), @ptrCast(tagName));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrawfont.FontTable: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FontTable2(self: ?*anyopaque, tag: QtC.QFont__Tag, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QRawFont_FontTable2(@ptrCast(self), @ptrCast(tag));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrawfont.FontTable2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromFont(font: ?*anyopaque) QtC.QRawFont {
        return qtc.QRawFont_FromFont(@ptrCast(font));
    }

    pub fn AlphaMapForGlyph2(self: ?*anyopaque, glyphIndex: u32, antialiasingType: i32) QtC.QImage {
        return qtc.QRawFont_AlphaMapForGlyph2(@ptrCast(self), glyphIndex, @intCast(antialiasingType));
    }

    pub fn AlphaMapForGlyph3(self: ?*anyopaque, glyphIndex: u32, antialiasingType: i32, transform: ?*anyopaque) QtC.QImage {
        return qtc.QRawFont_AlphaMapForGlyph3(@ptrCast(self), glyphIndex, @intCast(antialiasingType), @ptrCast(transform));
    }

    pub fn FromFont2(font: ?*anyopaque, writingSystem: i32) QtC.QRawFont {
        return qtc.QRawFont_FromFont2(@ptrCast(font), @intCast(writingSystem));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRawFont_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/rawfont.html#types
pub const enums = struct {
    pub const AntialiasingType = enum {
        pub const PixelAntialiasing: i32 = 0;
        pub const SubPixelAntialiasing: i32 = 1;
    };

    pub const LayoutFlag = enum {
        pub const SeparateAdvances: i32 = 0;
        pub const KernedAdvances: i32 = 1;
        pub const UseDesignMetrics: i32 = 2;
    };

};
