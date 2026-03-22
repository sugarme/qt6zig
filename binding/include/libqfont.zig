const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfont.html
pub const qfont = struct {

    /// New constructs a new QFont object.
    pub fn New() QtC.QFont {
        return qtc.QFont_new();
    }


    /// New2 constructs a new QFont object.
    pub fn New2(family: []const u8) QtC.QFont {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFont_new2(family_str);
    }


    /// New3 constructs a new QFont object.
    pub fn New3(families: []const u8) QtC.QFont {
        return qtc.QFont_new3(@ptrCast(families));
    }


    /// New4 constructs a new QFont object.
    pub fn New4(font: ?*anyopaque, pd: ?*anyopaque) QtC.QFont {
        return qtc.QFont_new4(@ptrCast(font), @ptrCast(pd));
    }


    /// New5 constructs a new QFont object.
    pub fn New5(font: ?*anyopaque) QtC.QFont {
        return qtc.QFont_new5(@ptrCast(font));
    }


    /// New6 constructs a new QFont object.
    pub fn New6(family: []const u8, pointSize: i32) QtC.QFont {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFont_new6(family_str, pointSize);
    }


    /// New7 constructs a new QFont object.
    pub fn New7(family: []const u8, pointSize: i32, weight: i32) QtC.QFont {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFont_new7(family_str, pointSize, weight);
    }


    /// New8 constructs a new QFont object.
    pub fn New8(family: []const u8, pointSize: i32, weight: i32, italic: bool) QtC.QFont {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
return qtc.QFont_new8(family_str, pointSize, weight, italic);
    }


    /// New9 constructs a new QFont object.
    pub fn New9(families: []const u8, pointSize: i32) QtC.QFont {
        return qtc.QFont_new9(@ptrCast(families), pointSize);
    }


    /// New10 constructs a new QFont object.
    pub fn New10(families: []const u8, pointSize: i32, weight: i32) QtC.QFont {
        return qtc.QFont_new10(@ptrCast(families), pointSize, weight);
    }


    /// New11 constructs a new QFont object.
    pub fn New11(families: []const u8, pointSize: i32, weight: i32, italic: bool) QtC.QFont {
        return qtc.QFont_new11(@ptrCast(families), pointSize, weight, italic);
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFont_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Family(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_Family(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Family: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFamily(self: ?*anyopaque, family: []const u8) void {
        const family_str = qtc.libqt_string{
    .len = family.len,
    .data = family.ptr,
};
qtc.QFont_SetFamily(@ptrCast(self), family_str);
    }

    pub fn Families(self: ?*anyopaque, ) []const u8 {
        return qtc.QFont_Families(@ptrCast(self));
    }

    pub fn SetFamilies(self: ?*anyopaque, families: []const u8) void {
        qtc.QFont_SetFamilies(@ptrCast(self), @ptrCast(families));
    }

    pub fn StyleName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_StyleName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.StyleName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetStyleName(self: ?*anyopaque, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
    .len = styleName.len,
    .data = styleName.ptr,
};
qtc.QFont_SetStyleName(@ptrCast(self), styleName_str);
    }

    pub fn PointSize(self: ?*anyopaque, ) i32 {
        return qtc.QFont_PointSize(@ptrCast(self));
    }

    pub fn SetPointSize(self: ?*anyopaque, pointSize: i32) void {
        qtc.QFont_SetPointSize(@ptrCast(self), pointSize);
    }

    pub fn PointSizeF(self: ?*anyopaque, ) f64 {
        return qtc.QFont_PointSizeF(@ptrCast(self));
    }

    pub fn SetPointSizeF(self: ?*anyopaque, pointSizeF: f64) void {
        qtc.QFont_SetPointSizeF(@ptrCast(self), pointSizeF);
    }

    pub fn PixelSize(self: ?*anyopaque, ) i32 {
        return qtc.QFont_PixelSize(@ptrCast(self));
    }

    pub fn SetPixelSize(self: ?*anyopaque, pixelSize: i32) void {
        qtc.QFont_SetPixelSize(@ptrCast(self), pixelSize);
    }

    pub fn Weight(self: ?*anyopaque, ) i32 {
        return qtc.QFont_Weight(@ptrCast(self));
    }

    pub fn SetWeight(self: ?*anyopaque, weight: i32) void {
        qtc.QFont_SetWeight(@ptrCast(self), @intCast(weight));
    }

    pub fn Bold(self: ?*anyopaque, ) bool {
        return qtc.QFont_Bold(@ptrCast(self));
    }

    pub fn SetBold(self: ?*anyopaque, bold: bool) void {
        qtc.QFont_SetBold(@ptrCast(self), bold);
    }

    pub fn SetStyle(self: ?*anyopaque, style: i32) void {
        qtc.QFont_SetStyle(@ptrCast(self), @intCast(style));
    }

    pub fn Style(self: ?*anyopaque, ) i32 {
        return qtc.QFont_Style(@ptrCast(self));
    }

    pub fn Italic(self: ?*anyopaque, ) bool {
        return qtc.QFont_Italic(@ptrCast(self));
    }

    pub fn SetItalic(self: ?*anyopaque, b: bool) void {
        qtc.QFont_SetItalic(@ptrCast(self), b);
    }

    pub fn Underline(self: ?*anyopaque, ) bool {
        return qtc.QFont_Underline(@ptrCast(self));
    }

    pub fn SetUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QFont_SetUnderline(@ptrCast(self), underline);
    }

    pub fn Overline(self: ?*anyopaque, ) bool {
        return qtc.QFont_Overline(@ptrCast(self));
    }

    pub fn SetOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QFont_SetOverline(@ptrCast(self), overline);
    }

    pub fn StrikeOut(self: ?*anyopaque, ) bool {
        return qtc.QFont_StrikeOut(@ptrCast(self));
    }

    pub fn SetStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QFont_SetStrikeOut(@ptrCast(self), strikeOut);
    }

    pub fn FixedPitch(self: ?*anyopaque, ) bool {
        return qtc.QFont_FixedPitch(@ptrCast(self));
    }

    pub fn SetFixedPitch(self: ?*anyopaque, fixedPitch: bool) void {
        qtc.QFont_SetFixedPitch(@ptrCast(self), fixedPitch);
    }

    pub fn Kerning(self: ?*anyopaque, ) bool {
        return qtc.QFont_Kerning(@ptrCast(self));
    }

    pub fn SetKerning(self: ?*anyopaque, kerning: bool) void {
        qtc.QFont_SetKerning(@ptrCast(self), kerning);
    }

    pub fn StyleHint(self: ?*anyopaque, ) i64 {
        return qtc.QFont_StyleHint(@ptrCast(self));
    }

    pub fn StyleStrategy(self: ?*anyopaque, ) i32 {
        return qtc.QFont_StyleStrategy(@ptrCast(self));
    }

    pub fn SetStyleHint(self: ?*anyopaque, param1: i32) void {
        qtc.QFont_SetStyleHint(@ptrCast(self), @intCast(param1));
    }

    pub fn SetStyleStrategy(self: ?*anyopaque, s: i32) void {
        qtc.QFont_SetStyleStrategy(@ptrCast(self), @intCast(s));
    }

    pub fn Stretch(self: ?*anyopaque, ) i32 {
        return qtc.QFont_Stretch(@ptrCast(self));
    }

    pub fn SetStretch(self: ?*anyopaque, stretch: i32) void {
        qtc.QFont_SetStretch(@ptrCast(self), stretch);
    }

    pub fn LetterSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QFont_LetterSpacing(@ptrCast(self));
    }

    pub fn LetterSpacingType(self: ?*anyopaque, ) i32 {
        return qtc.QFont_LetterSpacingType(@ptrCast(self));
    }

    pub fn SetLetterSpacing(self: ?*anyopaque, typeVal: i32, spacing: f64) void {
        qtc.QFont_SetLetterSpacing(@ptrCast(self), @intCast(typeVal), spacing);
    }

    pub fn WordSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QFont_WordSpacing(@ptrCast(self));
    }

    pub fn SetWordSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QFont_SetWordSpacing(@ptrCast(self), spacing);
    }

    pub fn SetCapitalization(self: ?*anyopaque, capitalization: i32) void {
        qtc.QFont_SetCapitalization(@ptrCast(self), @intCast(capitalization));
    }

    pub fn Capitalization(self: ?*anyopaque, ) i32 {
        return qtc.QFont_Capitalization(@ptrCast(self));
    }

    pub fn SetHintingPreference(self: ?*anyopaque, hintingPreference: i32) void {
        qtc.QFont_SetHintingPreference(@ptrCast(self), @intCast(hintingPreference));
    }

    pub fn HintingPreference(self: ?*anyopaque, ) i32 {
        return qtc.QFont_HintingPreference(@ptrCast(self));
    }

    pub fn SetFeature(self: ?*anyopaque, tag: QtC.QFont__Tag, value: u32) void {
        qtc.QFont_SetFeature(@ptrCast(self), @ptrCast(tag), value);
    }

    pub fn UnsetFeature(self: ?*anyopaque, tag: QtC.QFont__Tag) void {
        qtc.QFont_UnsetFeature(@ptrCast(self), @ptrCast(tag));
    }

    pub fn FeatureValue(self: ?*anyopaque, tag: QtC.QFont__Tag) u32 {
        return qtc.QFont_FeatureValue(@ptrCast(self), @ptrCast(tag));
    }

    pub fn IsFeatureSet(self: ?*anyopaque, tag: QtC.QFont__Tag) bool {
        return qtc.QFont_IsFeatureSet(@ptrCast(self), @ptrCast(tag));
    }

    pub fn FeatureTags(self: ?*anyopaque, ) []const u8 {
        return qtc.QFont_FeatureTags(@ptrCast(self));
    }

    pub fn ClearFeatures(self: ?*anyopaque, ) void {
        qtc.QFont_ClearFeatures(@ptrCast(self));
    }

    pub fn SetVariableAxis(self: ?*anyopaque, tag: QtC.QFont__Tag, value: f32) void {
        qtc.QFont_SetVariableAxis(@ptrCast(self), @ptrCast(tag), value);
    }

    pub fn UnsetVariableAxis(self: ?*anyopaque, tag: QtC.QFont__Tag) void {
        qtc.QFont_UnsetVariableAxis(@ptrCast(self), @ptrCast(tag));
    }

    pub fn IsVariableAxisSet(self: ?*anyopaque, tag: QtC.QFont__Tag) bool {
        return qtc.QFont_IsVariableAxisSet(@ptrCast(self), @ptrCast(tag));
    }

    pub fn VariableAxisValue(self: ?*anyopaque, tag: QtC.QFont__Tag) f32 {
        return qtc.QFont_VariableAxisValue(@ptrCast(self), @ptrCast(tag));
    }

    pub fn ClearVariableAxes(self: ?*anyopaque, ) void {
        qtc.QFont_ClearVariableAxes(@ptrCast(self));
    }

    pub fn VariableAxisTags(self: ?*anyopaque, ) []const u8 {
        return qtc.QFont_VariableAxisTags(@ptrCast(self));
    }

    pub fn ExactMatch(self: ?*anyopaque, ) bool {
        return qtc.QFont_ExactMatch(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFont_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorLesser(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorLesser(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QFont_OperatorQVariant(@ptrCast(self));
    }

    pub fn IsCopyOf(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_IsCopyOf(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Key(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_Key(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Key: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromString(self: ?*anyopaque, param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QFont_FromString(@ptrCast(self), param1_str);
    }

    pub fn Substitute(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
const _str = qtc.QFont_Substitute(param1_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Substitute: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Substitutes(param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QFont_Substitutes(param1_str);
    }

    pub fn Substitutions() []const u8 {
        return qtc.QFont_Substitutions();
    }

    pub fn InsertSubstitution(param1: []const u8, param2: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
const param2_str = qtc.libqt_string{
    .len = param2.len,
    .data = param2.ptr,
};
qtc.QFont_InsertSubstitution(param1_str, param2_str);
    }

    pub fn InsertSubstitutions(param1: []const u8, param2: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QFont_InsertSubstitutions(param1_str, @ptrCast(param2));
    }

    pub fn RemoveSubstitutions(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QFont_RemoveSubstitutions(param1_str);
    }

    pub fn Initialize() void {
        qtc.QFont_Initialize();
    }

    pub fn Cleanup() void {
        qtc.QFont_Cleanup();
    }

    pub fn CacheStatistics() void {
        qtc.QFont_CacheStatistics();
    }

    pub fn DefaultFamily(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_DefaultFamily(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.DefaultFamily: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Resolve(self: ?*anyopaque, param1: ?*anyopaque) QtC.QFont {
        return qtc.QFont_Resolve(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResolveMask(self: ?*anyopaque, ) u32 {
        return qtc.QFont_ResolveMask(@ptrCast(self));
    }

    pub fn SetResolveMask(self: ?*anyopaque, mask: u32) void {
        qtc.QFont_SetResolveMask(@ptrCast(self), mask);
    }

    pub fn SetLegacyWeight(self: ?*anyopaque, legacyWeight: i32) void {
        qtc.QFont_SetLegacyWeight(@ptrCast(self), legacyWeight);
    }

    pub fn LegacyWeight(self: ?*anyopaque, ) i32 {
        return qtc.QFont_LegacyWeight(@ptrCast(self));
    }

    pub fn SetStyleHint2(self: ?*anyopaque, param1: i32, param2: i32) void {
        qtc.QFont_SetStyleHint2(@ptrCast(self), @intCast(param1), @intCast(param2));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFont_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfont-tag.html
pub const qfont__tag = struct {

    /// New constructs a new QFont::Tag object.
    pub fn New(other: ?*anyopaque) QtC.QFont__Tag {
        return qtc.QFont__Tag_new(@ptrCast(other));
    }


    /// New2 constructs a new QFont::Tag object.
    pub fn New2(other: ?*anyopaque) QtC.QFont__Tag {
        return qtc.QFont__Tag_new2(@ptrCast(other));
    }


    /// New3 constructs a new QFont::Tag object.
    pub fn New3() QtC.QFont__Tag {
        return qtc.QFont__Tag_new3();
    }


    /// New4 constructs a new QFont::Tag object.
    pub fn New4(param1: ?*anyopaque) QtC.QFont__Tag {
        return qtc.QFont__Tag_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFont__Tag_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFont__Tag_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QFont__Tag_IsValid(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) u32 {
        return qtc.QFont__Tag_Value(@ptrCast(self));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QFont__Tag_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfont::tag.ToString: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFont__Tag_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/font.html#types
pub const enums = struct {
    pub const StyleHint = enum {
        pub const Helvetica: i32 = 0;
        pub const SansSerif: i32 = 0;
        pub const Times: i32 = 1;
        pub const Serif: i32 = 1;
        pub const Courier: i32 = 2;
        pub const TypeWriter: i32 = 2;
        pub const OldEnglish: i32 = 3;
        pub const Decorative: i32 = 3;
        pub const System: i32 = 4;
        pub const AnyStyle: i32 = 5;
        pub const Cursive: i32 = 6;
        pub const Monospace: i32 = 7;
        pub const Fantasy: i32 = 8;
    };

    pub const StyleStrategy = enum {
        pub const PreferDefault: i32 = 1;
        pub const PreferBitmap: i32 = 2;
        pub const PreferDevice: i32 = 4;
        pub const PreferOutline: i32 = 8;
        pub const ForceOutline: i32 = 16;
        pub const PreferMatch: i32 = 32;
        pub const PreferQuality: i32 = 64;
        pub const PreferAntialias: i32 = 128;
        pub const NoAntialias: i32 = 256;
        pub const NoSubpixelAntialias: i32 = 2048;
        pub const PreferNoShaping: i32 = 4096;
        pub const ContextFontMerging: i32 = 8192;
        pub const PreferTypoLineMetrics: i32 = 16384;
        pub const NoFontMerging: i32 = 32768;
    };

    pub const HintingPreference = enum {
        pub const PreferDefaultHinting: i32 = 0;
        pub const PreferNoHinting: i32 = 1;
        pub const PreferVerticalHinting: i32 = 2;
        pub const PreferFullHinting: i32 = 3;
    };

    pub const Weight = enum {
        pub const Thin: i32 = 100;
        pub const ExtraLight: i32 = 200;
        pub const Light: i32 = 300;
        pub const Normal: i32 = 400;
        pub const Medium: i32 = 500;
        pub const DemiBold: i32 = 600;
        pub const Bold: i32 = 700;
        pub const ExtraBold: i32 = 800;
        pub const Black: i32 = 900;
    };

    pub const Style = enum {
        pub const StyleNormal: i32 = 0;
        pub const StyleItalic: i32 = 1;
        pub const StyleOblique: i32 = 2;
    };

    pub const Stretch = enum {
        pub const AnyStretch: i32 = 0;
        pub const UltraCondensed: i32 = 50;
        pub const ExtraCondensed: i32 = 62;
        pub const Condensed: i32 = 75;
        pub const SemiCondensed: i32 = 87;
        pub const Unstretched: i32 = 100;
        pub const SemiExpanded: i32 = 112;
        pub const Expanded: i32 = 125;
        pub const ExtraExpanded: i32 = 150;
        pub const UltraExpanded: i32 = 200;
    };

    pub const Capitalization = enum {
        pub const MixedCase: i32 = 0;
        pub const AllUppercase: i32 = 1;
        pub const AllLowercase: i32 = 2;
        pub const SmallCaps: i32 = 3;
        pub const Capitalize: i32 = 4;
    };

    pub const SpacingType = enum {
        pub const PercentageSpacing: i32 = 0;
        pub const AbsoluteSpacing: i32 = 1;
    };

    pub const ResolveProperties = enum {
        pub const NoPropertiesResolved: i32 = 0;
        pub const FamilyResolved: i32 = 1;
        pub const SizeResolved: i32 = 2;
        pub const StyleHintResolved: i32 = 4;
        pub const StyleStrategyResolved: i32 = 8;
        pub const WeightResolved: i32 = 16;
        pub const StyleResolved: i32 = 32;
        pub const UnderlineResolved: i32 = 64;
        pub const OverlineResolved: i32 = 128;
        pub const StrikeOutResolved: i32 = 256;
        pub const FixedPitchResolved: i32 = 512;
        pub const StretchResolved: i32 = 1024;
        pub const KerningResolved: i32 = 2048;
        pub const CapitalizationResolved: i32 = 4096;
        pub const LetterSpacingResolved: i32 = 8192;
        pub const WordSpacingResolved: i32 = 16384;
        pub const HintingPreferenceResolved: i32 = 32768;
        pub const StyleNameResolved: i32 = 65536;
        pub const FamiliesResolved: i32 = 131072;
        pub const FeaturesResolved: i32 = 262144;
        pub const VariableAxesResolved: i32 = 524288;
        pub const AllPropertiesResolved: i32 = 1048575;
    };

};
