const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvector2d.html
pub const qvector2d = struct {

    /// New constructs a new QVector2D object.
    pub fn New(other: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new(@ptrCast(other));
    }


    /// New2 constructs a new QVector2D object.
    pub fn New2(other: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new2(@ptrCast(other));
    }


    /// New3 constructs a new QVector2D object.
    pub fn New3() QtC.QVector2D {
        return qtc.QVector2D_new3();
    }


    /// New4 constructs a new QVector2D object.
    pub fn New4(param1: i32) QtC.QVector2D {
        return qtc.QVector2D_new4(@intCast(param1));
    }


    /// New5 constructs a new QVector2D object.
    pub fn New5(xpos: f32, ypos: f32) QtC.QVector2D {
        return qtc.QVector2D_new5(xpos, ypos);
    }


    /// New6 constructs a new QVector2D object.
    pub fn New6(point: QtC.QPoint) QtC.QVector2D {
        return qtc.QVector2D_new6(@ptrCast(point));
    }


    /// New7 constructs a new QVector2D object.
    pub fn New7(point: QtC.QPointF) QtC.QVector2D {
        return qtc.QVector2D_new7(@ptrCast(point));
    }


    /// New8 constructs a new QVector2D object.
    pub fn New8(vector: QtC.QVector3D) QtC.QVector2D {
        return qtc.QVector2D_new8(@ptrCast(vector));
    }


    /// New9 constructs a new QVector2D object.
    pub fn New9(vector: QtC.QVector4D) QtC.QVector2D {
        return qtc.QVector2D_new9(@ptrCast(vector));
    }


    /// New10 constructs a new QVector2D object.
    pub fn New10(param1: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new10(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector2D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector2D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QVector2D_IsNull(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) f32 {
        return qtc.QVector2D_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) f32 {
        return qtc.QVector2D_Y(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector2D_SetX(@ptrCast(self), x);
    }

    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector2D_SetY(@ptrCast(self), y);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) f32 {
        return @ptrCast(qtc.QVector2D_OperatorSubscript(@ptrCast(self), i));
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector2D_OperatorSubscript2(@ptrCast(self), i);
    }

    pub fn Length(self: ?*anyopaque, ) f32 {
        return qtc.QVector2D_Length(@ptrCast(self));
    }

    pub fn LengthSquared(self: ?*anyopaque, ) f32 {
        return qtc.QVector2D_LengthSquared(@ptrCast(self));
    }

    pub fn Normalized(self: ?*anyopaque, ) QtC.QVector2D {
        return qtc.QVector2D_Normalized(@ptrCast(self));
    }

    pub fn Normalize(self: ?*anyopaque, ) void {
        qtc.QVector2D_Normalize(@ptrCast(self));
    }

    pub fn DistanceToPoint(self: ?*anyopaque, point: QtC.QVector2D) f32 {
        return qtc.QVector2D_DistanceToPoint(@ptrCast(self), @ptrCast(point));
    }

    pub fn DistanceToLine(self: ?*anyopaque, point: QtC.QVector2D, direction: QtC.QVector2D) f32 {
        return qtc.QVector2D_DistanceToLine(@ptrCast(self), @ptrCast(point), @ptrCast(direction));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector2D {
        return qtc.QVector2D_OperatorMultiplyAssign(@ptrCast(self), factor);
    }

    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector2D {
        return qtc.QVector2D_OperatorDivideAssign(@ptrCast(self), divisor);
    }

    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    pub fn DotProduct(v1: QtC.QVector2D, v2: QtC.QVector2D) f32 {
        return qtc.QVector2D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    pub fn ToVector3D(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QVector2D_ToVector3D(@ptrCast(self));
    }

    pub fn ToVector4D(self: ?*anyopaque, ) QtC.QVector4D {
        return qtc.QVector2D_ToVector4D(@ptrCast(self));
    }

    pub fn ToPoint(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QVector2D_ToPoint(@ptrCast(self));
    }

    pub fn ToPointF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QVector2D_ToPointF(@ptrCast(self));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QVector2D_OperatorQVariant(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVector2D_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvector3d.html
pub const qvector3d = struct {

    /// New constructs a new QVector3D object.
    pub fn New(other: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new(@ptrCast(other));
    }


    /// New2 constructs a new QVector3D object.
    pub fn New2(other: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new2(@ptrCast(other));
    }


    /// New3 constructs a new QVector3D object.
    pub fn New3() QtC.QVector3D {
        return qtc.QVector3D_new3();
    }


    /// New4 constructs a new QVector3D object.
    pub fn New4(param1: i32) QtC.QVector3D {
        return qtc.QVector3D_new4(@intCast(param1));
    }


    /// New5 constructs a new QVector3D object.
    pub fn New5(xpos: f32, ypos: f32, zpos: f32) QtC.QVector3D {
        return qtc.QVector3D_new5(xpos, ypos, zpos);
    }


    /// New6 constructs a new QVector3D object.
    pub fn New6(point: QtC.QPoint) QtC.QVector3D {
        return qtc.QVector3D_new6(@ptrCast(point));
    }


    /// New7 constructs a new QVector3D object.
    pub fn New7(point: QtC.QPointF) QtC.QVector3D {
        return qtc.QVector3D_new7(@ptrCast(point));
    }


    /// New8 constructs a new QVector3D object.
    pub fn New8(vector: QtC.QVector2D) QtC.QVector3D {
        return qtc.QVector3D_new8(@ptrCast(vector));
    }


    /// New9 constructs a new QVector3D object.
    pub fn New9(vector: QtC.QVector2D, zpos: f32) QtC.QVector3D {
        return qtc.QVector3D_new9(@ptrCast(vector), zpos);
    }


    /// New10 constructs a new QVector3D object.
    pub fn New10(vector: QtC.QVector4D) QtC.QVector3D {
        return qtc.QVector3D_new10(@ptrCast(vector));
    }


    /// New11 constructs a new QVector3D object.
    pub fn New11(param1: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new11(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector3D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector3D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QVector3D_IsNull(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) f32 {
        return qtc.QVector3D_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) f32 {
        return qtc.QVector3D_Y(@ptrCast(self));
    }

    pub fn Z(self: ?*anyopaque, ) f32 {
        return qtc.QVector3D_Z(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector3D_SetX(@ptrCast(self), x);
    }

    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector3D_SetY(@ptrCast(self), y);
    }

    pub fn SetZ(self: ?*anyopaque, z: f32) void {
        qtc.QVector3D_SetZ(@ptrCast(self), z);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) f32 {
        return @ptrCast(qtc.QVector3D_OperatorSubscript(@ptrCast(self), i));
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector3D_OperatorSubscript2(@ptrCast(self), i);
    }

    pub fn Length(self: ?*anyopaque, ) f32 {
        return qtc.QVector3D_Length(@ptrCast(self));
    }

    pub fn LengthSquared(self: ?*anyopaque, ) f32 {
        return qtc.QVector3D_LengthSquared(@ptrCast(self));
    }

    pub fn Normalized(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QVector3D_Normalized(@ptrCast(self));
    }

    pub fn Normalize(self: ?*anyopaque, ) void {
        qtc.QVector3D_Normalize(@ptrCast(self));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector3D {
        return qtc.QVector3D_OperatorMultiplyAssign(@ptrCast(self), factor);
    }

    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector3D {
        return qtc.QVector3D_OperatorDivideAssign(@ptrCast(self), divisor);
    }

    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    pub fn DotProduct(v1: QtC.QVector3D, v2: QtC.QVector3D) f32 {
        return qtc.QVector3D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    pub fn CrossProduct(v1: QtC.QVector3D, v2: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_CrossProduct(@ptrCast(v1), @ptrCast(v2));
    }

    pub fn Normal(v1: QtC.QVector3D, v2: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_Normal(@ptrCast(v1), @ptrCast(v2));
    }

    pub fn Normal2(v1: QtC.QVector3D, v2: QtC.QVector3D, v3: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_Normal2(@ptrCast(v1), @ptrCast(v2), @ptrCast(v3));
    }

    pub fn Project(self: ?*anyopaque, modelView: ?*anyopaque, projection: ?*anyopaque, viewport: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_Project(@ptrCast(self), @ptrCast(modelView), @ptrCast(projection), @ptrCast(viewport));
    }

    pub fn Unproject(self: ?*anyopaque, modelView: ?*anyopaque, projection: ?*anyopaque, viewport: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_Unproject(@ptrCast(self), @ptrCast(modelView), @ptrCast(projection), @ptrCast(viewport));
    }

    pub fn DistanceToPoint(self: ?*anyopaque, point: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPoint(@ptrCast(self), @ptrCast(point));
    }

    pub fn DistanceToPlane(self: ?*anyopaque, plane: QtC.QVector3D, normal: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPlane(@ptrCast(self), @ptrCast(plane), @ptrCast(normal));
    }

    pub fn DistanceToPlane2(self: ?*anyopaque, plane1: QtC.QVector3D, plane2: QtC.QVector3D, plane3: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPlane2(@ptrCast(self), @ptrCast(plane1), @ptrCast(plane2), @ptrCast(plane3));
    }

    pub fn DistanceToLine(self: ?*anyopaque, point: QtC.QVector3D, direction: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToLine(@ptrCast(self), @ptrCast(point), @ptrCast(direction));
    }

    pub fn ToVector2D(self: ?*anyopaque, ) QtC.QVector2D {
        return qtc.QVector3D_ToVector2D(@ptrCast(self));
    }

    pub fn ToVector4D(self: ?*anyopaque, ) QtC.QVector4D {
        return qtc.QVector3D_ToVector4D(@ptrCast(self));
    }

    pub fn ToPoint(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QVector3D_ToPoint(@ptrCast(self));
    }

    pub fn ToPointF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QVector3D_ToPointF(@ptrCast(self));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QVector3D_OperatorQVariant(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVector3D_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvector4d.html
pub const qvector4d = struct {

    /// New constructs a new QVector4D object.
    pub fn New(other: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new(@ptrCast(other));
    }


    /// New2 constructs a new QVector4D object.
    pub fn New2(other: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new2(@ptrCast(other));
    }


    /// New3 constructs a new QVector4D object.
    pub fn New3() QtC.QVector4D {
        return qtc.QVector4D_new3();
    }


    /// New4 constructs a new QVector4D object.
    pub fn New4(param1: i32) QtC.QVector4D {
        return qtc.QVector4D_new4(@intCast(param1));
    }


    /// New5 constructs a new QVector4D object.
    pub fn New5(xpos: f32, ypos: f32, zpos: f32, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new5(xpos, ypos, zpos, wpos);
    }


    /// New6 constructs a new QVector4D object.
    pub fn New6(point: QtC.QPoint) QtC.QVector4D {
        return qtc.QVector4D_new6(@ptrCast(point));
    }


    /// New7 constructs a new QVector4D object.
    pub fn New7(point: QtC.QPointF) QtC.QVector4D {
        return qtc.QVector4D_new7(@ptrCast(point));
    }


    /// New8 constructs a new QVector4D object.
    pub fn New8(vector: QtC.QVector2D) QtC.QVector4D {
        return qtc.QVector4D_new8(@ptrCast(vector));
    }


    /// New9 constructs a new QVector4D object.
    pub fn New9(vector: QtC.QVector2D, zpos: f32, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new9(@ptrCast(vector), zpos, wpos);
    }


    /// New10 constructs a new QVector4D object.
    pub fn New10(vector: QtC.QVector3D) QtC.QVector4D {
        return qtc.QVector4D_new10(@ptrCast(vector));
    }


    /// New11 constructs a new QVector4D object.
    pub fn New11(vector: QtC.QVector3D, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new11(@ptrCast(vector), wpos);
    }


    /// New12 constructs a new QVector4D object.
    pub fn New12(param1: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new12(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector4D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector4D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QVector4D_IsNull(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) f32 {
        return qtc.QVector4D_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) f32 {
        return qtc.QVector4D_Y(@ptrCast(self));
    }

    pub fn Z(self: ?*anyopaque, ) f32 {
        return qtc.QVector4D_Z(@ptrCast(self));
    }

    pub fn W(self: ?*anyopaque, ) f32 {
        return qtc.QVector4D_W(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector4D_SetX(@ptrCast(self), x);
    }

    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector4D_SetY(@ptrCast(self), y);
    }

    pub fn SetZ(self: ?*anyopaque, z: f32) void {
        qtc.QVector4D_SetZ(@ptrCast(self), z);
    }

    pub fn SetW(self: ?*anyopaque, w: f32) void {
        qtc.QVector4D_SetW(@ptrCast(self), w);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) f32 {
        return @ptrCast(qtc.QVector4D_OperatorSubscript(@ptrCast(self), i));
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector4D_OperatorSubscript2(@ptrCast(self), i);
    }

    pub fn Length(self: ?*anyopaque, ) f32 {
        return qtc.QVector4D_Length(@ptrCast(self));
    }

    pub fn LengthSquared(self: ?*anyopaque, ) f32 {
        return qtc.QVector4D_LengthSquared(@ptrCast(self));
    }

    pub fn Normalized(self: ?*anyopaque, ) QtC.QVector4D {
        return qtc.QVector4D_Normalized(@ptrCast(self));
    }

    pub fn Normalize(self: ?*anyopaque, ) void {
        qtc.QVector4D_Normalize(@ptrCast(self));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector4D {
        return qtc.QVector4D_OperatorMultiplyAssign(@ptrCast(self), factor);
    }

    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector4D {
        return qtc.QVector4D_OperatorDivideAssign(@ptrCast(self), divisor);
    }

    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    pub fn DotProduct(v1: QtC.QVector4D, v2: QtC.QVector4D) f32 {
        return qtc.QVector4D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    pub fn ToVector2D(self: ?*anyopaque, ) QtC.QVector2D {
        return qtc.QVector4D_ToVector2D(@ptrCast(self));
    }

    pub fn ToVector2DAffine(self: ?*anyopaque, ) QtC.QVector2D {
        return qtc.QVector4D_ToVector2DAffine(@ptrCast(self));
    }

    pub fn ToVector3D(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QVector4D_ToVector3D(@ptrCast(self));
    }

    pub fn ToVector3DAffine(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QVector4D_ToVector3DAffine(@ptrCast(self));
    }

    pub fn ToPoint(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QVector4D_ToPoint(@ptrCast(self));
    }

    pub fn ToPointF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QVector4D_ToPointF(@ptrCast(self));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QVector4D_OperatorQVariant(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVector4D_Delete(@ptrCast(self));
    }
};
