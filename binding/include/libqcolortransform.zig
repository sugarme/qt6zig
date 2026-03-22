const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcolortransform.html
pub const qcolortransform = struct {

    /// New constructs a new QColorTransform object.
    pub fn New() QtC.QColorTransform {
        return qtc.QColorTransform_new();
    }


    /// New2 constructs a new QColorTransform object.
    pub fn New2(colorTransform: ?*anyopaque) QtC.QColorTransform {
        return qtc.QColorTransform_new2(@ptrCast(colorTransform));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QColorTransform_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QColorTransform_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsIdentity(self: ?*anyopaque, ) bool {
        return qtc.QColorTransform_IsIdentity(@ptrCast(self));
    }

    pub fn Map(self: ?*anyopaque, argb: u32) u32 {
        return qtc.QColorTransform_Map(@ptrCast(self), argb);
    }

    pub fn Map2(self: ?*anyopaque, rgba64: QtC.QRgba64) QtC.QRgba64 {
        return qtc.QColorTransform_Map2(@ptrCast(self), @ptrCast(rgba64));
    }

    pub fn Map5(self: ?*anyopaque, color: ?*anyopaque) QtC.QColor {
        return qtc.QColorTransform_Map5(@ptrCast(self), @ptrCast(color));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColorTransform_Delete(@ptrCast(self));
    }
};
