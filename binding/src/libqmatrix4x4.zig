const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmatrix4x4.html
pub const qmatrix4x4 = struct {

    /// New constructs a new QMatrix4x4 object.
    pub fn New(other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new(@ptrCast(other));
    }


    /// New2 constructs a new QMatrix4x4 object.
    pub fn New2(other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMatrix4x4 object.
    pub fn New3() QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new3();
    }


    /// New4 constructs a new QMatrix4x4 object.
    pub fn New4(param1: i32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new4(@intCast(param1));
    }


    /// New5 constructs a new QMatrix4x4 object.
    pub fn New5(values: *const f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new5(@ptrCast(values));
    }


    /// New6 constructs a new QMatrix4x4 object.
    pub fn New6(m11: f32, m12: f32, m13: f32, m14: f32, m21: f32, m22: f32, m23: f32, m24: f32, m31: f32, m32: f32, m33: f32, m34: f32, m41: f32, m42: f32, m43: f32, m44: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new6(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
    }


    /// New7 constructs a new QMatrix4x4 object.
    pub fn New7(values: *const f32, cols: i32, rows: i32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new7(@ptrCast(values), cols, rows);
    }


    /// New8 constructs a new QMatrix4x4 object.
    pub fn New8(transform: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new8(@ptrCast(transform));
    }


    /// New9 constructs a new QMatrix4x4 object.
    pub fn New9(param1: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new9(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMatrix4x4_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMatrix4x4_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorCall(self: ?*anyopaque, row: i32, column: i32) f32 {
        return @ptrCast(qtc.QMatrix4x4_OperatorCall(@ptrCast(self), row, column));
    }

    pub fn OperatorCall2(self: ?*anyopaque, row: i32, column: i32) f32 {
        return @ptrCast(qtc.QMatrix4x4_OperatorCall2(@ptrCast(self), row, column));
    }

    pub fn Column(self: ?*anyopaque, index: i32) QtC.QVector4D {
        return qtc.QMatrix4x4_Column(@ptrCast(self), index);
    }

    pub fn SetColumn(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QMatrix4x4_SetColumn(@ptrCast(self), index, @ptrCast(value));
    }

    pub fn Row(self: ?*anyopaque, index: i32) QtC.QVector4D {
        return qtc.QMatrix4x4_Row(@ptrCast(self), index);
    }

    pub fn SetRow(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QMatrix4x4_SetRow(@ptrCast(self), index, @ptrCast(value));
    }

    pub fn IsAffine(self: ?*anyopaque, ) bool {
        return qtc.QMatrix4x4_IsAffine(@ptrCast(self));
    }

    pub fn IsIdentity(self: ?*anyopaque, ) bool {
        return qtc.QMatrix4x4_IsIdentity(@ptrCast(self));
    }

    pub fn SetToIdentity(self: ?*anyopaque, ) void {
        qtc.QMatrix4x4_SetToIdentity(@ptrCast(self));
    }

    pub fn Fill(self: ?*anyopaque, value: f32) void {
        qtc.QMatrix4x4_Fill(@ptrCast(self), value);
    }

    pub fn Determinant(self: ?*anyopaque, ) f64 {
        return qtc.QMatrix4x4_Determinant(@ptrCast(self));
    }

    pub fn Inverted(self: ?*anyopaque, ) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Inverted(@ptrCast(self));
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Transposed(@ptrCast(self));
    }

    pub fn NormalMatrix(self: ?*anyopaque, ) QGenericMatrix<3, 3, float> {
        return qtc.QMatrix4x4_NormalMatrix(@ptrCast(self));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorPlusAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMinusAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMultiplyAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, factor: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMultiplyAssign2(@ptrCast(self), factor);
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorDivideAssign(@ptrCast(self), divisor);
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMatrix4x4_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMatrix4x4_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn Scale(self: ?*anyopaque, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Scale(@ptrCast(self), @ptrCast(vector));
    }

    pub fn Translate(self: ?*anyopaque, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Translate(@ptrCast(self), @ptrCast(vector));
    }

    pub fn Rotate(self: ?*anyopaque, angle: f32, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Rotate(@ptrCast(self), angle, @ptrCast(vector));
    }

    pub fn Scale2(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QMatrix4x4_Scale2(@ptrCast(self), x, y);
    }

    pub fn Scale3(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Scale3(@ptrCast(self), x, y, z);
    }

    pub fn Scale4(self: ?*anyopaque, factor: f32) void {
        qtc.QMatrix4x4_Scale4(@ptrCast(self), factor);
    }

    pub fn Translate2(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QMatrix4x4_Translate2(@ptrCast(self), x, y);
    }

    pub fn Translate3(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Translate3(@ptrCast(self), x, y, z);
    }

    pub fn Rotate2(self: ?*anyopaque, angle: f32, x: f32, y: f32) void {
        qtc.QMatrix4x4_Rotate2(@ptrCast(self), angle, x, y);
    }

    pub fn Rotate3(self: ?*anyopaque, quaternion: ?*anyopaque) void {
        qtc.QMatrix4x4_Rotate3(@ptrCast(self), @ptrCast(quaternion));
    }

    pub fn Ortho(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Ortho(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Ortho2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Ortho2(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Ortho3(self: ?*anyopaque, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Ortho3(@ptrCast(self), left, right, bottom, top, nearPlane, farPlane);
    }

    pub fn Frustum(self: ?*anyopaque, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Frustum(@ptrCast(self), left, right, bottom, top, nearPlane, farPlane);
    }

    pub fn Perspective(self: ?*anyopaque, verticalAngle: f32, aspectRatio: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Perspective(@ptrCast(self), verticalAngle, aspectRatio, nearPlane, farPlane);
    }

    pub fn LookAt(self: ?*anyopaque, eye: ?*anyopaque, center: ?*anyopaque, up: ?*anyopaque) void {
        qtc.QMatrix4x4_LookAt(@ptrCast(self), @ptrCast(eye), @ptrCast(center), @ptrCast(up));
    }

    pub fn Viewport(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Viewport(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Viewport2(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32) void {
        qtc.QMatrix4x4_Viewport2(@ptrCast(self), left, bottom, width, height);
    }

    pub fn FlipCoordinates(self: ?*anyopaque, ) void {
        qtc.QMatrix4x4_FlipCoordinates(@ptrCast(self));
    }

    pub fn CopyDataTo(self: ?*anyopaque, values: *f32) void {
        qtc.QMatrix4x4_CopyDataTo(@ptrCast(self), @ptrCast(values));
    }

    pub fn ToTransform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QMatrix4x4_ToTransform(@ptrCast(self));
    }

    pub fn ToTransform2(self: ?*anyopaque, distanceToPlane: f32) QtC.QTransform {
        return qtc.QMatrix4x4_ToTransform2(@ptrCast(self), distanceToPlane);
    }

    pub fn Map(self: ?*anyopaque, point: ?*anyopaque) QtC.QPoint {
        return qtc.QMatrix4x4_Map(@ptrCast(self), @ptrCast(point));
    }

    pub fn Map2(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QMatrix4x4_Map2(@ptrCast(self), @ptrCast(point));
    }

    pub fn Map3(self: ?*anyopaque, point: ?*anyopaque) QtC.QVector3D {
        return qtc.QMatrix4x4_Map3(@ptrCast(self), @ptrCast(point));
    }

    pub fn MapVector(self: ?*anyopaque, vector: ?*anyopaque) QtC.QVector3D {
        return qtc.QMatrix4x4_MapVector(@ptrCast(self), @ptrCast(vector));
    }

    pub fn Map4(self: ?*anyopaque, point: ?*anyopaque) QtC.QVector4D {
        return qtc.QMatrix4x4_Map4(@ptrCast(self), @ptrCast(point));
    }

    pub fn MapRect(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRect {
        return qtc.QMatrix4x4_MapRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn MapRect2(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QMatrix4x4_MapRect2(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Data(self: ?*anyopaque, ) f32 {
        return @ptrCast(qtc.QMatrix4x4_Data(@ptrCast(self)));
    }

    pub fn Data2(self: ?*anyopaque, ) f32 {
        return @ptrCast(qtc.QMatrix4x4_Data2(@ptrCast(self)));
    }

    pub fn ConstData(self: ?*anyopaque, ) f32 {
        return @ptrCast(qtc.QMatrix4x4_ConstData(@ptrCast(self)));
    }

    pub fn Optimize(self: ?*anyopaque, ) void {
        qtc.QMatrix4x4_Optimize(@ptrCast(self));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QMatrix4x4_OperatorQVariant(@ptrCast(self));
    }

    pub fn ProjectedRotate(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32, distanceToPlane: f32) void {
        qtc.QMatrix4x4_ProjectedRotate(@ptrCast(self), angle, x, y, z, distanceToPlane);
    }

    pub fn ProjectedRotate2(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_ProjectedRotate2(@ptrCast(self), angle, x, y, z);
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QMatrix4x4_Flags(@ptrCast(self));
    }

    pub fn Inverted1(self: ?*anyopaque, invertible: *bool) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Inverted1(@ptrCast(self), @ptrCast(invertible));
    }

    pub fn Rotate4(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Rotate4(@ptrCast(self), angle, x, y, z);
    }

    pub fn Viewport5(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32) void {
        qtc.QMatrix4x4_Viewport5(@ptrCast(self), left, bottom, width, height, nearPlane);
    }

    pub fn Viewport6(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Viewport6(@ptrCast(self), left, bottom, width, height, nearPlane, farPlane);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMatrix4x4_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/matrix4x4.html#types
pub const enums = struct {
    pub const Flag = enum {
        pub const Identity: i32 = 0;
        pub const Translation: i32 = 1;
        pub const Scale: i32 = 2;
        pub const Rotation2D: i32 = 4;
        pub const Rotation: i32 = 8;
        pub const Perspective: i32 = 16;
        pub const General: i32 = 31;
    };

};
