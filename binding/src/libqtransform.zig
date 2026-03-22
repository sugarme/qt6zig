const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtransform.html
pub const qtransform = struct {

    /// New constructs a new QTransform object.
    pub fn New(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new(@ptrCast(other));
    }


    /// New2 constructs a new QTransform object.
    pub fn New2(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTransform object.
    pub fn New3(param1: i32) QtC.QTransform {
        return qtc.QTransform_new3(@intCast(param1));
    }


    /// New4 constructs a new QTransform object.
    pub fn New4() QtC.QTransform {
        return qtc.QTransform_new4();
    }


    /// New5 constructs a new QTransform object.
    pub fn New5(h11: f64, h12: f64, h13: f64, h21: f64, h22: f64, h23: f64, h31: f64, h32: f64, h33: f64) QtC.QTransform {
        return qtc.QTransform_new5(h11, h12, h13, h21, h22, h23, h31, h32, h33);
    }


    /// New6 constructs a new QTransform object.
    pub fn New6(h11: f64, h12: f64, h21: f64, h22: f64, dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_new6(h11, h12, h21, h22, dx, dy);
    }


    /// New7 constructs a new QTransform object.
    pub fn New7(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new7(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTransform_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTransform_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTransform_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn IsAffine(self: ?*anyopaque, ) bool {
        return qtc.QTransform_IsAffine(@ptrCast(self));
    }

    pub fn IsIdentity(self: ?*anyopaque, ) bool {
        return qtc.QTransform_IsIdentity(@ptrCast(self));
    }

    pub fn IsInvertible(self: ?*anyopaque, ) bool {
        return qtc.QTransform_IsInvertible(@ptrCast(self));
    }

    pub fn IsScaling(self: ?*anyopaque, ) bool {
        return qtc.QTransform_IsScaling(@ptrCast(self));
    }

    pub fn IsRotating(self: ?*anyopaque, ) bool {
        return qtc.QTransform_IsRotating(@ptrCast(self));
    }

    pub fn IsTranslating(self: ?*anyopaque, ) bool {
        return qtc.QTransform_IsTranslating(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QTransform_Type(@ptrCast(self));
    }

    pub fn Determinant(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_Determinant(@ptrCast(self));
    }

    pub fn M11(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M11(@ptrCast(self));
    }

    pub fn M12(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M12(@ptrCast(self));
    }

    pub fn M13(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M13(@ptrCast(self));
    }

    pub fn M21(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M21(@ptrCast(self));
    }

    pub fn M22(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M22(@ptrCast(self));
    }

    pub fn M23(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M23(@ptrCast(self));
    }

    pub fn M31(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M31(@ptrCast(self));
    }

    pub fn M32(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M32(@ptrCast(self));
    }

    pub fn M33(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_M33(@ptrCast(self));
    }

    pub fn Dx(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_Dx(@ptrCast(self));
    }

    pub fn Dy(self: ?*anyopaque, ) f64 {
        return qtc.QTransform_Dy(@ptrCast(self));
    }

    pub fn SetMatrix(self: ?*anyopaque, m11: f64, m12: f64, m13: f64, m21: f64, m22: f64, m23: f64, m31: f64, m32: f64, m33: f64) void {
        qtc.QTransform_SetMatrix(@ptrCast(self), m11, m12, m13, m21, m22, m23, m31, m32, m33);
    }

    pub fn Inverted(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QTransform_Inverted(@ptrCast(self));
    }

    pub fn Adjoint(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QTransform_Adjoint(@ptrCast(self));
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QTransform_Transposed(@ptrCast(self));
    }

    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_Translate(@ptrCast(self), dx, dy);
    }

    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) QtC.QTransform {
        return qtc.QTransform_Scale(@ptrCast(self), sx, sy);
    }

    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) QtC.QTransform {
        return qtc.QTransform_Shear(@ptrCast(self), sh, sv);
    }

    pub fn Rotate(self: ?*anyopaque, a: f64, axis: i32, distanceToPlane: f64) QtC.QTransform {
        return qtc.QTransform_Rotate(@ptrCast(self), a, @intCast(axis), distanceToPlane);
    }

    pub fn Rotate2(self: ?*anyopaque, a: f64) QtC.QTransform {
        return qtc.QTransform_Rotate2(@ptrCast(self), a);
    }

    pub fn RotateRadians(self: ?*anyopaque, a: f64, axis: i32, distanceToPlane: f64) QtC.QTransform {
        return qtc.QTransform_RotateRadians(@ptrCast(self), a, @intCast(axis), distanceToPlane);
    }

    pub fn RotateRadians2(self: ?*anyopaque, a: f64) QtC.QTransform {
        return qtc.QTransform_RotateRadians2(@ptrCast(self), a);
    }

    pub fn SquareToQuad(square: ?*anyopaque, result: ?*anyopaque) bool {
        return qtc.QTransform_SquareToQuad(@ptrCast(square), @ptrCast(result));
    }

    pub fn QuadToSquare(quad: ?*anyopaque, result: ?*anyopaque) bool {
        return qtc.QTransform_QuadToSquare(@ptrCast(quad), @ptrCast(result));
    }

    pub fn QuadToQuad(one: ?*anyopaque, two: ?*anyopaque, result: ?*anyopaque) bool {
        return qtc.QTransform_QuadToQuad(@ptrCast(one), @ptrCast(two), @ptrCast(result));
    }

    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTransform_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTransform_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_OperatorMultiplyAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorMultiply(self: ?*anyopaque, o: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_OperatorMultiply(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QTransform_OperatorQVariant(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QTransform_Reset(@ptrCast(self));
    }

    pub fn Map(self: ?*anyopaque, p: ?*anyopaque) QtC.QPoint {
        return qtc.QTransform_Map(@ptrCast(self), @ptrCast(p));
    }

    pub fn Map2(self: ?*anyopaque, p: ?*anyopaque) QtC.QPointF {
        return qtc.QTransform_Map2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Map3(self: ?*anyopaque, l: ?*anyopaque) QtC.QLine {
        return qtc.QTransform_Map3(@ptrCast(self), @ptrCast(l));
    }

    pub fn Map4(self: ?*anyopaque, l: ?*anyopaque) QtC.QLineF {
        return qtc.QTransform_Map4(@ptrCast(self), @ptrCast(l));
    }

    pub fn Map5(self: ?*anyopaque, a: ?*anyopaque) QtC.QPolygonF {
        return qtc.QTransform_Map5(@ptrCast(self), @ptrCast(a));
    }

    pub fn Map6(self: ?*anyopaque, a: ?*anyopaque) QtC.QPolygon {
        return qtc.QTransform_Map6(@ptrCast(self), @ptrCast(a));
    }

    pub fn Map7(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QTransform_Map7(@ptrCast(self), @ptrCast(r));
    }

    pub fn Map8(self: ?*anyopaque, p: ?*anyopaque) QtC.QPainterPath {
        return qtc.QTransform_Map8(@ptrCast(self), @ptrCast(p));
    }

    pub fn MapToPolygon(self: ?*anyopaque, r: ?*anyopaque) QtC.QPolygon {
        return qtc.QTransform_MapToPolygon(@ptrCast(self), @ptrCast(r));
    }

    pub fn MapRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QTransform_MapRect(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapRect2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRectF {
        return qtc.QTransform_MapRect2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Map9(self: ?*anyopaque, x: i32, y: i32, tx: *i32, ty: *i32) void {
        qtc.QTransform_Map9(@ptrCast(self), x, y, @ptrCast(tx), @ptrCast(ty));
    }

    pub fn Map10(self: ?*anyopaque, x: f64, y: f64, tx: *f64, ty: *f64) void {
        qtc.QTransform_Map10(@ptrCast(self), x, y, @ptrCast(tx), @ptrCast(ty));
    }

    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorMultiplyAssign2(@ptrCast(self), div);
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorDivideAssign(@ptrCast(self), div);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorPlusAssign(@ptrCast(self), div);
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorMinusAssign(@ptrCast(self), div);
    }

    pub fn FromTranslate(dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_FromTranslate(dx, dy);
    }

    pub fn FromScale(dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_FromScale(dx, dy);
    }

    pub fn AsAffineMatrix(self: ?*anyopaque, ) Affine {
        return qtc.QTransform_AsAffineMatrix(@ptrCast(self));
    }

    pub fn Inverted1(self: ?*anyopaque, invertible: *bool) QtC.QTransform {
        return qtc.QTransform_Inverted1(@ptrCast(self), @ptrCast(invertible));
    }

    pub fn Rotate22(self: ?*anyopaque, a: f64, axis: i32) QtC.QTransform {
        return qtc.QTransform_Rotate22(@ptrCast(self), a, @intCast(axis));
    }

    pub fn RotateRadians22(self: ?*anyopaque, a: f64, axis: i32) QtC.QTransform {
        return qtc.QTransform_RotateRadians22(@ptrCast(self), a, @intCast(axis));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTransform_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/transform.html#types
pub const enums = struct {
    pub const TransformationType = enum {
        pub const TxNone: i32 = 0;
        pub const TxTranslate: i32 = 1;
        pub const TxScale: i32 = 2;
        pub const TxRotate: i32 = 4;
        pub const TxShear: i32 = 8;
        pub const TxProject: i32 = 16;
    };

};
