const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcolor.html
pub const qcolor = struct {

    /// New constructs a new QColor object.
    pub fn New(other: ?*anyopaque) QtC.QColor {
        return qtc.QColor_new(@ptrCast(other));
    }


    /// New2 constructs a new QColor object.
    pub fn New2(other: ?*anyopaque) QtC.QColor {
        return qtc.QColor_new2(@ptrCast(other));
    }


    /// New3 constructs a new QColor object.
    pub fn New3() QtC.QColor {
        return qtc.QColor_new3();
    }


    /// New4 constructs a new QColor object.
    pub fn New4(color: i32) QtC.QColor {
        return qtc.QColor_new4(@intCast(color));
    }


    /// New5 constructs a new QColor object.
    pub fn New5(r: i32, g: i32, b: i32) QtC.QColor {
        return qtc.QColor_new5(r, g, b);
    }


    /// New6 constructs a new QColor object.
    pub fn New6(rgb: u32) QtC.QColor {
        return qtc.QColor_new6(rgb);
    }


    /// New7 constructs a new QColor object.
    pub fn New7(rgba64: QtC.QRgba64) QtC.QColor {
        return qtc.QColor_new7(@ptrCast(rgba64));
    }


    /// New8 constructs a new QColor object.
    pub fn New8(name: []const u8) QtC.QColor {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QColor_new8(name_str);
    }


    /// New9 constructs a new QColor object.
    pub fn New9(aname: []const u8) QtC.QColor {
        return qtc.QColor_new9(@ptrCast(aname));
    }


    /// New10 constructs a new QColor object.
    pub fn New10(spec: i32) QtC.QColor {
        return qtc.QColor_new10(@intCast(spec));
    }


    /// New11 constructs a new QColor object.
    pub fn New11(spec: i32, a1: u16, a2: u16, a3: u16, a4: u16) QtC.QColor {
        return qtc.QColor_new11(@intCast(spec), a1, a2, a3, a4);
    }


    /// New12 constructs a new QColor object.
    pub fn New12(param1: ?*anyopaque) QtC.QColor {
        return qtc.QColor_new12(@ptrCast(param1));
    }


    /// New13 constructs a new QColor object.
    pub fn New13(r: i32, g: i32, b: i32, a: i32) QtC.QColor {
        return qtc.QColor_new13(r, g, b, a);
    }


    /// New14 constructs a new QColor object.
    pub fn New14(spec: i32, a1: u16, a2: u16, a3: u16, a4: u16, a5: u16) QtC.QColor {
        return qtc.QColor_new14(@intCast(spec), a1, a2, a3, a4, a5);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QColor_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QColor_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, color: i32) void {
        qtc.QColor_OperatorAssign(@ptrCast(self), @intCast(color));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QColor_IsValid(@ptrCast(self));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColor_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolor.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNamedColor(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QColor_SetNamedColor(@ptrCast(self), name_str);
    }

    pub fn ColorNames() []const u8 {
        return qtc.QColor_ColorNames();
    }

    pub fn Spec(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Spec(@ptrCast(self));
    }

    pub fn Alpha(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Alpha(@ptrCast(self));
    }

    pub fn SetAlpha(self: ?*anyopaque, alpha: i32) void {
        qtc.QColor_SetAlpha(@ptrCast(self), alpha);
    }

    pub fn AlphaF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_AlphaF(@ptrCast(self));
    }

    pub fn SetAlphaF(self: ?*anyopaque, alpha: f32) void {
        qtc.QColor_SetAlphaF(@ptrCast(self), alpha);
    }

    pub fn Red(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Red(@ptrCast(self));
    }

    pub fn Green(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Green(@ptrCast(self));
    }

    pub fn Blue(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Blue(@ptrCast(self));
    }

    pub fn SetRed(self: ?*anyopaque, red: i32) void {
        qtc.QColor_SetRed(@ptrCast(self), red);
    }

    pub fn SetGreen(self: ?*anyopaque, green: i32) void {
        qtc.QColor_SetGreen(@ptrCast(self), green);
    }

    pub fn SetBlue(self: ?*anyopaque, blue: i32) void {
        qtc.QColor_SetBlue(@ptrCast(self), blue);
    }

    pub fn RedF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_RedF(@ptrCast(self));
    }

    pub fn GreenF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_GreenF(@ptrCast(self));
    }

    pub fn BlueF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_BlueF(@ptrCast(self));
    }

    pub fn SetRedF(self: ?*anyopaque, red: f32) void {
        qtc.QColor_SetRedF(@ptrCast(self), red);
    }

    pub fn SetGreenF(self: ?*anyopaque, green: f32) void {
        qtc.QColor_SetGreenF(@ptrCast(self), green);
    }

    pub fn SetBlueF(self: ?*anyopaque, blue: f32) void {
        qtc.QColor_SetBlueF(@ptrCast(self), blue);
    }

    pub fn GetRgb(self: ?*anyopaque, r: *i32, g: *i32, b: *i32) void {
        qtc.QColor_GetRgb(@ptrCast(self), @ptrCast(r), @ptrCast(g), @ptrCast(b));
    }

    pub fn SetRgb(self: ?*anyopaque, r: i32, g: i32, b: i32) void {
        qtc.QColor_SetRgb(@ptrCast(self), r, g, b);
    }

    pub fn GetRgbF(self: ?*anyopaque, r: *f32, g: *f32, b: *f32) void {
        qtc.QColor_GetRgbF(@ptrCast(self), @ptrCast(r), @ptrCast(g), @ptrCast(b));
    }

    pub fn SetRgbF(self: ?*anyopaque, r: f32, g: f32, b: f32) void {
        qtc.QColor_SetRgbF(@ptrCast(self), r, g, b);
    }

    pub fn Rgba64(self: ?*anyopaque, ) QtC.QRgba64 {
        return qtc.QColor_Rgba64(@ptrCast(self));
    }

    pub fn SetRgba64(self: ?*anyopaque, rgba: QtC.QRgba64) void {
        qtc.QColor_SetRgba64(@ptrCast(self), @ptrCast(rgba));
    }

    pub fn Rgba(self: ?*anyopaque, ) u32 {
        return qtc.QColor_Rgba(@ptrCast(self));
    }

    pub fn SetRgba(self: ?*anyopaque, rgba: u32) void {
        qtc.QColor_SetRgba(@ptrCast(self), rgba);
    }

    pub fn Rgb(self: ?*anyopaque, ) u32 {
        return qtc.QColor_Rgb(@ptrCast(self));
    }

    pub fn SetRgb2(self: ?*anyopaque, rgb: u32) void {
        qtc.QColor_SetRgb2(@ptrCast(self), rgb);
    }

    pub fn Hue(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Hue(@ptrCast(self));
    }

    pub fn Saturation(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Saturation(@ptrCast(self));
    }

    pub fn HsvHue(self: ?*anyopaque, ) i32 {
        return qtc.QColor_HsvHue(@ptrCast(self));
    }

    pub fn HsvSaturation(self: ?*anyopaque, ) i32 {
        return qtc.QColor_HsvSaturation(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Value(@ptrCast(self));
    }

    pub fn HueF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_HueF(@ptrCast(self));
    }

    pub fn SaturationF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_SaturationF(@ptrCast(self));
    }

    pub fn HsvHueF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_HsvHueF(@ptrCast(self));
    }

    pub fn HsvSaturationF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_HsvSaturationF(@ptrCast(self));
    }

    pub fn ValueF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_ValueF(@ptrCast(self));
    }

    pub fn GetHsv(self: ?*anyopaque, h: *i32, s: *i32, v: *i32) void {
        qtc.QColor_GetHsv(@ptrCast(self), @ptrCast(h), @ptrCast(s), @ptrCast(v));
    }

    pub fn SetHsv(self: ?*anyopaque, h: i32, s: i32, v: i32) void {
        qtc.QColor_SetHsv(@ptrCast(self), h, s, v);
    }

    pub fn GetHsvF(self: ?*anyopaque, h: *f32, s: *f32, v: *f32) void {
        qtc.QColor_GetHsvF(@ptrCast(self), @ptrCast(h), @ptrCast(s), @ptrCast(v));
    }

    pub fn SetHsvF(self: ?*anyopaque, h: f32, s: f32, v: f32) void {
        qtc.QColor_SetHsvF(@ptrCast(self), h, s, v);
    }

    pub fn Cyan(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Cyan(@ptrCast(self));
    }

    pub fn Magenta(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Magenta(@ptrCast(self));
    }

    pub fn Yellow(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Yellow(@ptrCast(self));
    }

    pub fn Black(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Black(@ptrCast(self));
    }

    pub fn CyanF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_CyanF(@ptrCast(self));
    }

    pub fn MagentaF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_MagentaF(@ptrCast(self));
    }

    pub fn YellowF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_YellowF(@ptrCast(self));
    }

    pub fn BlackF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_BlackF(@ptrCast(self));
    }

    pub fn GetCmyk(self: ?*anyopaque, c: *i32, m: *i32, y: *i32, k: *i32) void {
        qtc.QColor_GetCmyk(@ptrCast(self), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k));
    }

    pub fn SetCmyk(self: ?*anyopaque, c: i32, m: i32, y: i32, k: i32) void {
        qtc.QColor_SetCmyk(@ptrCast(self), c, m, y, k);
    }

    pub fn GetCmykF(self: ?*anyopaque, c: *f32, m: *f32, y: *f32, k: *f32) void {
        qtc.QColor_GetCmykF(@ptrCast(self), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k));
    }

    pub fn SetCmykF(self: ?*anyopaque, c: f32, m: f32, y: f32, k: f32) void {
        qtc.QColor_SetCmykF(@ptrCast(self), c, m, y, k);
    }

    pub fn HslHue(self: ?*anyopaque, ) i32 {
        return qtc.QColor_HslHue(@ptrCast(self));
    }

    pub fn HslSaturation(self: ?*anyopaque, ) i32 {
        return qtc.QColor_HslSaturation(@ptrCast(self));
    }

    pub fn Lightness(self: ?*anyopaque, ) i32 {
        return qtc.QColor_Lightness(@ptrCast(self));
    }

    pub fn HslHueF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_HslHueF(@ptrCast(self));
    }

    pub fn HslSaturationF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_HslSaturationF(@ptrCast(self));
    }

    pub fn LightnessF(self: ?*anyopaque, ) f32 {
        return qtc.QColor_LightnessF(@ptrCast(self));
    }

    pub fn GetHsl(self: ?*anyopaque, h: *i32, s: *i32, l: *i32) void {
        qtc.QColor_GetHsl(@ptrCast(self), @ptrCast(h), @ptrCast(s), @ptrCast(l));
    }

    pub fn SetHsl(self: ?*anyopaque, h: i32, s: i32, l: i32) void {
        qtc.QColor_SetHsl(@ptrCast(self), h, s, l);
    }

    pub fn GetHslF(self: ?*anyopaque, h: *f32, s: *f32, l: *f32) void {
        qtc.QColor_GetHslF(@ptrCast(self), @ptrCast(h), @ptrCast(s), @ptrCast(l));
    }

    pub fn SetHslF(self: ?*anyopaque, h: f32, s: f32, l: f32) void {
        qtc.QColor_SetHslF(@ptrCast(self), h, s, l);
    }

    pub fn ToRgb(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColor_ToRgb(@ptrCast(self));
    }

    pub fn ToHsv(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColor_ToHsv(@ptrCast(self));
    }

    pub fn ToCmyk(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColor_ToCmyk(@ptrCast(self));
    }

    pub fn ToHsl(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColor_ToHsl(@ptrCast(self));
    }

    pub fn ToExtendedRgb(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColor_ToExtendedRgb(@ptrCast(self));
    }

    pub fn ConvertTo(self: ?*anyopaque, colorSpec: i32) QtC.QColor {
        return qtc.QColor_ConvertTo(@ptrCast(self), @intCast(colorSpec));
    }

    pub fn FromRgb(rgb: u32) QtC.QColor {
        return qtc.QColor_FromRgb(rgb);
    }

    pub fn FromRgba(rgba: u32) QtC.QColor {
        return qtc.QColor_FromRgba(rgba);
    }

    pub fn FromRgb2(r: i32, g: i32, b: i32) QtC.QColor {
        return qtc.QColor_FromRgb2(r, g, b);
    }

    pub fn FromRgbF(r: f32, g: f32, b: f32) QtC.QColor {
        return qtc.QColor_FromRgbF(r, g, b);
    }

    pub fn FromRgba64(r: u16, g: u16, b: u16) QtC.QColor {
        return qtc.QColor_FromRgba64(r, g, b);
    }

    pub fn FromRgba642(rgba: QtC.QRgba64) QtC.QColor {
        return qtc.QColor_FromRgba642(@ptrCast(rgba));
    }

    pub fn FromHsv(h: i32, s: i32, v: i32) QtC.QColor {
        return qtc.QColor_FromHsv(h, s, v);
    }

    pub fn FromHsvF(h: f32, s: f32, v: f32) QtC.QColor {
        return qtc.QColor_FromHsvF(h, s, v);
    }

    pub fn FromCmyk(c: i32, m: i32, y: i32, k: i32) QtC.QColor {
        return qtc.QColor_FromCmyk(c, m, y, k);
    }

    pub fn FromCmykF(c: f32, m: f32, y: f32, k: f32) QtC.QColor {
        return qtc.QColor_FromCmykF(c, m, y, k);
    }

    pub fn FromHsl(h: i32, s: i32, l: i32) QtC.QColor {
        return qtc.QColor_FromHsl(h, s, l);
    }

    pub fn FromHslF(h: f32, s: f32, l: f32) QtC.QColor {
        return qtc.QColor_FromHslF(h, s, l);
    }

    pub fn Lighter(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColor_Lighter(@ptrCast(self));
    }

    pub fn Darker(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColor_Darker(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, c: ?*anyopaque) bool {
        return qtc.QColor_OperatorEqual(@ptrCast(self), @ptrCast(c));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, c: ?*anyopaque) bool {
        return qtc.QColor_OperatorNotEqual(@ptrCast(self), @ptrCast(c));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QColor_OperatorQVariant(@ptrCast(self));
    }

    pub fn IsValidColor(name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QColor_IsValidColor(name_str);
    }

    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColor_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Name1(self: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColor_Name1(@ptrCast(self), @intCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolor.Name1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetRgb4(self: ?*anyopaque, r: *i32, g: *i32, b: *i32, a: *i32) void {
        qtc.QColor_GetRgb4(@ptrCast(self), @ptrCast(r), @ptrCast(g), @ptrCast(b), @ptrCast(a));
    }

    pub fn SetRgb4(self: ?*anyopaque, r: i32, g: i32, b: i32, a: i32) void {
        qtc.QColor_SetRgb4(@ptrCast(self), r, g, b, a);
    }

    pub fn GetRgbF4(self: ?*anyopaque, r: *f32, g: *f32, b: *f32, a: *f32) void {
        qtc.QColor_GetRgbF4(@ptrCast(self), @ptrCast(r), @ptrCast(g), @ptrCast(b), @ptrCast(a));
    }

    pub fn SetRgbF4(self: ?*anyopaque, r: f32, g: f32, b: f32, a: f32) void {
        qtc.QColor_SetRgbF4(@ptrCast(self), r, g, b, a);
    }

    pub fn GetHsv4(self: ?*anyopaque, h: *i32, s: *i32, v: *i32, a: *i32) void {
        qtc.QColor_GetHsv4(@ptrCast(self), @ptrCast(h), @ptrCast(s), @ptrCast(v), @ptrCast(a));
    }

    pub fn SetHsv4(self: ?*anyopaque, h: i32, s: i32, v: i32, a: i32) void {
        qtc.QColor_SetHsv4(@ptrCast(self), h, s, v, a);
    }

    pub fn GetHsvF4(self: ?*anyopaque, h: *f32, s: *f32, v: *f32, a: *f32) void {
        qtc.QColor_GetHsvF4(@ptrCast(self), @ptrCast(h), @ptrCast(s), @ptrCast(v), @ptrCast(a));
    }

    pub fn SetHsvF4(self: ?*anyopaque, h: f32, s: f32, v: f32, a: f32) void {
        qtc.QColor_SetHsvF4(@ptrCast(self), h, s, v, a);
    }

    pub fn GetCmyk5(self: ?*anyopaque, c: *i32, m: *i32, y: *i32, k: *i32, a: *i32) void {
        qtc.QColor_GetCmyk5(@ptrCast(self), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k), @ptrCast(a));
    }

    pub fn SetCmyk5(self: ?*anyopaque, c: i32, m: i32, y: i32, k: i32, a: i32) void {
        qtc.QColor_SetCmyk5(@ptrCast(self), c, m, y, k, a);
    }

    pub fn GetCmykF5(self: ?*anyopaque, c: *f32, m: *f32, y: *f32, k: *f32, a: *f32) void {
        qtc.QColor_GetCmykF5(@ptrCast(self), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k), @ptrCast(a));
    }

    pub fn SetCmykF5(self: ?*anyopaque, c: f32, m: f32, y: f32, k: f32, a: f32) void {
        qtc.QColor_SetCmykF5(@ptrCast(self), c, m, y, k, a);
    }

    pub fn GetHsl4(self: ?*anyopaque, h: *i32, s: *i32, l: *i32, a: *i32) void {
        qtc.QColor_GetHsl4(@ptrCast(self), @ptrCast(h), @ptrCast(s), @ptrCast(l), @ptrCast(a));
    }

    pub fn SetHsl4(self: ?*anyopaque, h: i32, s: i32, l: i32, a: i32) void {
        qtc.QColor_SetHsl4(@ptrCast(self), h, s, l, a);
    }

    pub fn GetHslF4(self: ?*anyopaque, h: *f32, s: *f32, l: *f32, a: *f32) void {
        qtc.QColor_GetHslF4(@ptrCast(self), @ptrCast(h), @ptrCast(s), @ptrCast(l), @ptrCast(a));
    }

    pub fn SetHslF4(self: ?*anyopaque, h: f32, s: f32, l: f32, a: f32) void {
        qtc.QColor_SetHslF4(@ptrCast(self), h, s, l, a);
    }

    pub fn FromRgb4(r: i32, g: i32, b: i32, a: i32) QtC.QColor {
        return qtc.QColor_FromRgb4(r, g, b, a);
    }

    pub fn FromRgbF4(r: f32, g: f32, b: f32, a: f32) QtC.QColor {
        return qtc.QColor_FromRgbF4(r, g, b, a);
    }

    pub fn FromRgba644(r: u16, g: u16, b: u16, a: u16) QtC.QColor {
        return qtc.QColor_FromRgba644(r, g, b, a);
    }

    pub fn FromHsv4(h: i32, s: i32, v: i32, a: i32) QtC.QColor {
        return qtc.QColor_FromHsv4(h, s, v, a);
    }

    pub fn FromHsvF4(h: f32, s: f32, v: f32, a: f32) QtC.QColor {
        return qtc.QColor_FromHsvF4(h, s, v, a);
    }

    pub fn FromCmyk5(c: i32, m: i32, y: i32, k: i32, a: i32) QtC.QColor {
        return qtc.QColor_FromCmyk5(c, m, y, k, a);
    }

    pub fn FromCmykF5(c: f32, m: f32, y: f32, k: f32, a: f32) QtC.QColor {
        return qtc.QColor_FromCmykF5(c, m, y, k, a);
    }

    pub fn FromHsl4(h: i32, s: i32, l: i32, a: i32) QtC.QColor {
        return qtc.QColor_FromHsl4(h, s, l, a);
    }

    pub fn FromHslF4(h: f32, s: f32, l: f32, a: f32) QtC.QColor {
        return qtc.QColor_FromHslF4(h, s, l, a);
    }

    pub fn Lighter1(self: ?*anyopaque, f: i32) QtC.QColor {
        return qtc.QColor_Lighter1(@ptrCast(self), f);
    }

    pub fn Darker1(self: ?*anyopaque, f: i32) QtC.QColor {
        return qtc.QColor_Darker1(@ptrCast(self), f);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColor_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/color.html#types
pub const enums = struct {
    pub const Spec = enum {
        pub const Invalid: i32 = 0;
        pub const Rgb: i32 = 1;
        pub const Hsv: i32 = 2;
        pub const Cmyk: i32 = 3;
        pub const Hsl: i32 = 4;
        pub const ExtendedRgb: i32 = 5;
    };

    pub const NameFormat = enum {
        pub const HexRgb: i32 = 0;
        pub const HexArgb: i32 = 1;
    };

};
