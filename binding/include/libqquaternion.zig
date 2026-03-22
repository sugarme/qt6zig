const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qquaternion.html
pub const qquaternion = struct {

    /// New constructs a new QQuaternion object.
    pub fn New(other: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new(@ptrCast(other));
    }


    /// New2 constructs a new QQuaternion object.
    pub fn New2(other: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new2(@ptrCast(other));
    }


    /// New3 constructs a new QQuaternion object.
    pub fn New3() QtC.QQuaternion {
        return qtc.QQuaternion_new3();
    }


    /// New4 constructs a new QQuaternion object.
    pub fn New4(param1: i32) QtC.QQuaternion {
        return qtc.QQuaternion_new4(@intCast(param1));
    }


    /// New5 constructs a new QQuaternion object.
    pub fn New5(scalar: f32, xpos: f32, ypos: f32, zpos: f32) QtC.QQuaternion {
        return qtc.QQuaternion_new5(scalar, xpos, ypos, zpos);
    }


    /// New6 constructs a new QQuaternion object.
    pub fn New6(scalar: f32, vector: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new6(scalar, @ptrCast(vector));
    }


    /// New7 constructs a new QQuaternion object.
    pub fn New7(vector: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new7(@ptrCast(vector));
    }


    /// New8 constructs a new QQuaternion object.
    pub fn New8(param1: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new8(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QQuaternion_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QQuaternion_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QQuaternion_IsNull(@ptrCast(self));
    }

    pub fn IsIdentity(self: ?*anyopaque, ) bool {
        return qtc.QQuaternion_IsIdentity(@ptrCast(self));
    }

    pub fn Vector(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QQuaternion_Vector(@ptrCast(self));
    }

    pub fn SetVector(self: ?*anyopaque, vector: ?*anyopaque) void {
        qtc.QQuaternion_SetVector(@ptrCast(self), @ptrCast(vector));
    }

    pub fn SetVector2(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QQuaternion_SetVector2(@ptrCast(self), x, y, z);
    }

    pub fn X(self: ?*anyopaque, ) f32 {
        return qtc.QQuaternion_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) f32 {
        return qtc.QQuaternion_Y(@ptrCast(self));
    }

    pub fn Z(self: ?*anyopaque, ) f32 {
        return qtc.QQuaternion_Z(@ptrCast(self));
    }

    pub fn Scalar(self: ?*anyopaque, ) f32 {
        return qtc.QQuaternion_Scalar(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QQuaternion_SetX(@ptrCast(self), x);
    }

    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QQuaternion_SetY(@ptrCast(self), y);
    }

    pub fn SetZ(self: ?*anyopaque, z: f32) void {
        qtc.QQuaternion_SetZ(@ptrCast(self), z);
    }

    pub fn SetScalar(self: ?*anyopaque, scalar: f32) void {
        qtc.QQuaternion_SetScalar(@ptrCast(self), scalar);
    }

    pub fn DotProduct(q1: ?*anyopaque, q2: ?*anyopaque) f32 {
        return qtc.QQuaternion_DotProduct(@ptrCast(q1), @ptrCast(q2));
    }

    pub fn Length(self: ?*anyopaque, ) f32 {
        return qtc.QQuaternion_Length(@ptrCast(self));
    }

    pub fn LengthSquared(self: ?*anyopaque, ) f32 {
        return qtc.QQuaternion_LengthSquared(@ptrCast(self));
    }

    pub fn Normalized(self: ?*anyopaque, ) QtC.QQuaternion {
        return qtc.QQuaternion_Normalized(@ptrCast(self));
    }

    pub fn Normalize(self: ?*anyopaque, ) void {
        qtc.QQuaternion_Normalize(@ptrCast(self));
    }

    pub fn Inverted(self: ?*anyopaque, ) QtC.QQuaternion {
        return qtc.QQuaternion_Inverted(@ptrCast(self));
    }

    pub fn Conjugated(self: ?*anyopaque, ) QtC.QQuaternion {
        return qtc.QQuaternion_Conjugated(@ptrCast(self));
    }

    pub fn RotatedVector(self: ?*anyopaque, vector: ?*anyopaque) QtC.QVector3D {
        return qtc.QQuaternion_RotatedVector(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, quaternion: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorPlusAssign(@ptrCast(self), @ptrCast(quaternion));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, quaternion: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorMinusAssign(@ptrCast(self), @ptrCast(quaternion));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorMultiplyAssign(@ptrCast(self), factor);
    }

    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, quaternion: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(quaternion));
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorDivideAssign(@ptrCast(self), divisor);
    }

    pub fn ToVector4D(self: ?*anyopaque, ) QtC.QVector4D {
        return qtc.QQuaternion_ToVector4D(@ptrCast(self));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QQuaternion_OperatorQVariant(@ptrCast(self));
    }

    pub fn GetAxisAndAngle(self: ?*anyopaque, axis: ?*anyopaque, angle: *f32) void {
        qtc.QQuaternion_GetAxisAndAngle(@ptrCast(self), @ptrCast(axis), @ptrCast(angle));
    }

    pub fn FromAxisAndAngle(axis: ?*anyopaque, angle: f32) QtC.QQuaternion {
        return qtc.QQuaternion_FromAxisAndAngle(@ptrCast(axis), angle);
    }

    pub fn GetAxisAndAngle2(self: ?*anyopaque, x: *f32, y: *f32, z: *f32, angle: *f32) void {
        qtc.QQuaternion_GetAxisAndAngle2(@ptrCast(self), @ptrCast(x), @ptrCast(y), @ptrCast(z), @ptrCast(angle));
    }

    pub fn FromAxisAndAngle2(x: f32, y: f32, z: f32, angle: f32) QtC.QQuaternion {
        return qtc.QQuaternion_FromAxisAndAngle2(x, y, z, angle);
    }

    pub fn ToEulerAngles(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QQuaternion_ToEulerAngles(@ptrCast(self));
    }

    pub fn FromEulerAngles(eulerAngles: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_FromEulerAngles(@ptrCast(eulerAngles));
    }

    pub fn GetEulerAngles(self: ?*anyopaque, pitch: *f32, yaw: *f32, roll: *f32) void {
        qtc.QQuaternion_GetEulerAngles(@ptrCast(self), @ptrCast(pitch), @ptrCast(yaw), @ptrCast(roll));
    }

    pub fn FromEulerAngles2(pitch: f32, yaw: f32, roll: f32) QtC.QQuaternion {
        return qtc.QQuaternion_FromEulerAngles2(pitch, yaw, roll);
    }

    pub fn GetAxes(self: ?*anyopaque, xAxis: ?*anyopaque, yAxis: ?*anyopaque, zAxis: ?*anyopaque) void {
        qtc.QQuaternion_GetAxes(@ptrCast(self), @ptrCast(xAxis), @ptrCast(yAxis), @ptrCast(zAxis));
    }

    pub fn FromAxes(xAxis: ?*anyopaque, yAxis: ?*anyopaque, zAxis: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_FromAxes(@ptrCast(xAxis), @ptrCast(yAxis), @ptrCast(zAxis));
    }

    pub fn FromDirection(direction: ?*anyopaque, up: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_FromDirection(@ptrCast(direction), @ptrCast(up));
    }

    pub fn RotationTo(from: ?*anyopaque, to: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_RotationTo(@ptrCast(from), @ptrCast(to));
    }

    pub fn Slerp(q1: ?*anyopaque, q2: ?*anyopaque, t: f32) QtC.QQuaternion {
        return qtc.QQuaternion_Slerp(@ptrCast(q1), @ptrCast(q2), t);
    }

    pub fn Nlerp(q1: ?*anyopaque, q2: ?*anyopaque, t: f32) QtC.QQuaternion {
        return qtc.QQuaternion_Nlerp(@ptrCast(q1), @ptrCast(q2), t);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QQuaternion_Delete(@ptrCast(self));
    }
};
