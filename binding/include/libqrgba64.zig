const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrgba64.html
pub const qrgba64 = struct {

    /// New constructs a new QRgba64 object.
    pub fn New() QtC.QRgba64 {
        return qtc.QRgba64_new();
    }


    /// New2 constructs a new QRgba64 object.
    pub fn New2(param1: ?*anyopaque) QtC.QRgba64 {
        return qtc.QRgba64_new2(@ptrCast(param1));
    }


    pub fn FromRgba64(c: u64) QtC.QRgba64 {
        return qtc.QRgba64_FromRgba64(c);
    }

    pub fn FromRgba642(red: u16, green: u16, blue: u16, alpha: u16) QtC.QRgba64 {
        return qtc.QRgba64_FromRgba642(red, green, blue, alpha);
    }

    pub fn FromRgba(red: u8, green: u8, blue: u8, alpha: u8) QtC.QRgba64 {
        return qtc.QRgba64_FromRgba(red, green, blue, alpha);
    }

    pub fn FromArgb32(rgb: u32) QtC.QRgba64 {
        return qtc.QRgba64_FromArgb32(rgb);
    }

    pub fn IsOpaque(self: ?*anyopaque, ) bool {
        return qtc.QRgba64_IsOpaque(@ptrCast(self));
    }

    pub fn IsTransparent(self: ?*anyopaque, ) bool {
        return qtc.QRgba64_IsTransparent(@ptrCast(self));
    }

    pub fn Red(self: ?*anyopaque, ) u16 {
        return qtc.QRgba64_Red(@ptrCast(self));
    }

    pub fn Green(self: ?*anyopaque, ) u16 {
        return qtc.QRgba64_Green(@ptrCast(self));
    }

    pub fn Blue(self: ?*anyopaque, ) u16 {
        return qtc.QRgba64_Blue(@ptrCast(self));
    }

    pub fn Alpha(self: ?*anyopaque, ) u16 {
        return qtc.QRgba64_Alpha(@ptrCast(self));
    }

    pub fn SetRed(self: ?*anyopaque, _red: u16) void {
        qtc.QRgba64_SetRed(@ptrCast(self), _red);
    }

    pub fn SetGreen(self: ?*anyopaque, _green: u16) void {
        qtc.QRgba64_SetGreen(@ptrCast(self), _green);
    }

    pub fn SetBlue(self: ?*anyopaque, _blue: u16) void {
        qtc.QRgba64_SetBlue(@ptrCast(self), _blue);
    }

    pub fn SetAlpha(self: ?*anyopaque, _alpha: u16) void {
        qtc.QRgba64_SetAlpha(@ptrCast(self), _alpha);
    }

    pub fn Red8(self: ?*anyopaque, ) u8 {
        return qtc.QRgba64_Red8(@ptrCast(self));
    }

    pub fn Green8(self: ?*anyopaque, ) u8 {
        return qtc.QRgba64_Green8(@ptrCast(self));
    }

    pub fn Blue8(self: ?*anyopaque, ) u8 {
        return qtc.QRgba64_Blue8(@ptrCast(self));
    }

    pub fn Alpha8(self: ?*anyopaque, ) u8 {
        return qtc.QRgba64_Alpha8(@ptrCast(self));
    }

    pub fn ToArgb32(self: ?*anyopaque, ) u32 {
        return qtc.QRgba64_ToArgb32(@ptrCast(self));
    }

    pub fn ToRgb16(self: ?*anyopaque, ) u16 {
        return qtc.QRgba64_ToRgb16(@ptrCast(self));
    }

    pub fn Premultiplied(self: ?*anyopaque, ) QtC.QRgba64 {
        return qtc.QRgba64_Premultiplied(@ptrCast(self));
    }

    pub fn Unpremultiplied(self: ?*anyopaque, ) QtC.QRgba64 {
        return qtc.QRgba64_Unpremultiplied(@ptrCast(self));
    }

    pub fn OperatorunsignedLongLong(self: ?*anyopaque, ) u64 {
        return qtc.QRgba64_OperatorunsignedLongLong(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, _rgba: u64) void {
        qtc.QRgba64_OperatorAssign(@ptrCast(self), _rgba);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRgba64_Delete(@ptrCast(self));
    }
};
