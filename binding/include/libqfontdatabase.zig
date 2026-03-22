const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfontdatabase.html
pub const qfontdatabase = struct {

    /// New constructs a new QFontDatabase object.
    pub fn New(other: ?*anyopaque) QtC.QFontDatabase {
        return qtc.QFontDatabase_new(@ptrCast(other));
    }


    /// New2 constructs a new QFontDatabase object.
    pub fn New2(other: ?*anyopaque) QtC.QFontDatabase {
        return qtc.QFontDatabase_new2(@ptrCast(other));
    }


    /// New3 constructs a new QFontDatabase object.
    pub fn New3() QtC.QFontDatabase {
        return qtc.QFontDatabase_new3();
    }


    /// New4 constructs a new QFontDatabase object.
    pub fn New4(param1: ?*anyopaque) QtC.QFontDatabase {
        return qtc.QFontDatabase_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontDatabase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontDatabase_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn StandardSizes() []const u8 {
        return qtc.QFontDatabase_StandardSizes();
    }

    pub fn WritingSystems() []const u8 {
        return qtc.QFontDatabase_WritingSystems();
    }

    pub fn WritingSystems2(family: []const u8) []const u8 {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_WritingSystems2(family_str);
    }

    pub fn Families() []const u8 {
        return qtc.QFontDatabase_Families();
    }

    pub fn Styles(family: []const u8) []const u8 {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_Styles(family_str);
    }

    pub fn PointSizes(family: []const u8) []const u8 {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_PointSizes(family_str);
    }

    pub fn SmoothSizes(family: []const u8, style: []const u8) []const u8 {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_SmoothSizes(family_str, style_str);
    }

    pub fn StyleString(font: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDatabase_StyleString(@ptrCast(font));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdatabase.StyleString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StyleString2(fontInfo: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDatabase_StyleString2(@ptrCast(fontInfo));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdatabase.StyleString2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Font(family: []const u8, style: []const u8, pointSize: i32) QtC.QFont {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_Font(family_str, style_str, pointSize);
    }

    pub fn IsBitmapScalable(family: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_IsBitmapScalable(family_str);
    }

    pub fn IsSmoothlyScalable(family: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_IsSmoothlyScalable(family_str);
    }

    pub fn IsScalable(family: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_IsScalable(family_str);
    }

    pub fn IsFixedPitch(family: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_IsFixedPitch(family_str);
    }

    pub fn Italic(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_Italic(family_str, style_str);
    }

    pub fn Bold(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_Bold(family_str, style_str);
    }

    pub fn Weight(family: []const u8, style: []const u8) i32 {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_Weight(family_str, style_str);
    }

    pub fn HasFamily(family: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_HasFamily(family_str);
    }

    pub fn IsPrivateFamily(family: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFontDatabase_IsPrivateFamily(family_str);
    }

    pub fn WritingSystemName(writingSystem: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDatabase_WritingSystemName(@intCast(writingSystem));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdatabase.WritingSystemName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn WritingSystemSample(writingSystem: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDatabase_WritingSystemSample(@intCast(writingSystem));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdatabase.WritingSystemSample: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddApplicationFont(fileName: []const u8) i32 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QFontDatabase_AddApplicationFont(fileName_str);
    }

    pub fn AddApplicationFontFromData(fontData: []u8) i32 {
        const fontData_str = qtc.libqt_string{
    .len = fontData.len,
    .data = fontData.ptr,
};
return qtc.QFontDatabase_AddApplicationFontFromData(fontData_str);
    }

    pub fn ApplicationFontFamilies(id: i32) []const u8 {
        return qtc.QFontDatabase_ApplicationFontFamilies(id);
    }

    pub fn RemoveApplicationFont(id: i32) bool {
        return qtc.QFontDatabase_RemoveApplicationFont(id);
    }

    pub fn RemoveAllApplicationFonts() bool {
        return qtc.QFontDatabase_RemoveAllApplicationFonts();
    }

    pub fn AddApplicationFallbackFontFamily(script: i32, familyName: []const u8) void {
        const familyName_str = qtc.libqt_string{
    .len = familyName.len,
    .data = familyName.ptr,
};
qtc.QFontDatabase_AddApplicationFallbackFontFamily(@intCast(script), familyName_str);
    }

    pub fn RemoveApplicationFallbackFontFamily(script: i32, familyName: []const u8) bool {
        const familyName_str = qtc.libqt_string{
    .len = familyName.len,
    .data = familyName.ptr,
};
return qtc.QFontDatabase_RemoveApplicationFallbackFontFamily(@intCast(script), familyName_str);
    }

    pub fn SetApplicationFallbackFontFamilies(param1: i32, familyNames: []const u8) void {
        qtc.QFontDatabase_SetApplicationFallbackFontFamilies(@intCast(param1), @ptrCast(familyNames));
    }

    pub fn ApplicationFallbackFontFamilies(script: i32) []const u8 {
        return qtc.QFontDatabase_ApplicationFallbackFontFamilies(@intCast(script));
    }

    pub fn SystemFont(typeVal: i32) QtC.QFont {
        return qtc.QFontDatabase_SystemFont(@intCast(typeVal));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontDatabase_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Families1(writingSystem: i32) []const u8 {
        return qtc.QFontDatabase_Families1(@intCast(writingSystem));
    }

    pub fn PointSizes2(family: []const u8, style: []const u8) []const u8 {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_PointSizes2(family_str, style_str);
    }

    pub fn IsBitmapScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_IsBitmapScalable2(family_str, style_str);
    }

    pub fn IsSmoothlyScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_IsSmoothlyScalable2(family_str, style_str);
    }

    pub fn IsScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_IsScalable2(family_str, style_str);
    }

    pub fn IsFixedPitch2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QFontDatabase_IsFixedPitch2(family_str, style_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontDatabase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/fontdatabase.html#types
pub const enums = struct {
    pub const WritingSystem = enum {
        pub const Any: i32 = 0;
        pub const Latin: i32 = 1;
        pub const Greek: i32 = 2;
        pub const Cyrillic: i32 = 3;
        pub const Armenian: i32 = 4;
        pub const Hebrew: i32 = 5;
        pub const Arabic: i32 = 6;
        pub const Syriac: i32 = 7;
        pub const Thaana: i32 = 8;
        pub const Devanagari: i32 = 9;
        pub const Bengali: i32 = 10;
        pub const Gurmukhi: i32 = 11;
        pub const Gujarati: i32 = 12;
        pub const Oriya: i32 = 13;
        pub const Tamil: i32 = 14;
        pub const Telugu: i32 = 15;
        pub const Kannada: i32 = 16;
        pub const Malayalam: i32 = 17;
        pub const Sinhala: i32 = 18;
        pub const Thai: i32 = 19;
        pub const Lao: i32 = 20;
        pub const Tibetan: i32 = 21;
        pub const Myanmar: i32 = 22;
        pub const Georgian: i32 = 23;
        pub const Khmer: i32 = 24;
        pub const SimplifiedChinese: i32 = 25;
        pub const TraditionalChinese: i32 = 26;
        pub const Japanese: i32 = 27;
        pub const Korean: i32 = 28;
        pub const Vietnamese: i32 = 29;
        pub const Symbol: i32 = 30;
        pub const Other: i32 = 30;
        pub const Ogham: i32 = 31;
        pub const Runic: i32 = 32;
        pub const Nko: i32 = 33;
        pub const WritingSystemsCount: i32 = 34;
    };

    pub const SystemFont = enum {
        pub const GeneralFont: i32 = 0;
        pub const FixedFont: i32 = 1;
        pub const TitleFont: i32 = 2;
        pub const SmallestReadableFont: i32 = 3;
    };

};
