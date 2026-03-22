const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpoint.html
pub const qpoint = struct {

    /// New constructs a new QPoint object.
    pub fn New(other: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_new(@ptrCast(other));
    }


    /// New2 constructs a new QPoint object.
    pub fn New2(other: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPoint object.
    pub fn New3() QtC.QPoint {
        return qtc.QPoint_new3();
    }


    /// New4 constructs a new QPoint object.
    pub fn New4(xpos: i32, ypos: i32) QtC.QPoint {
        return qtc.QPoint_new4(xpos, ypos);
    }


    /// New5 constructs a new QPoint object.
    pub fn New5(param1: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPoint_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPoint_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QPoint_IsNull(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QPoint_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QPoint_Y(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: i32) void {
        qtc.QPoint_SetX(@ptrCast(self), x);
    }

    pub fn SetY(self: ?*anyopaque, y: i32) void {
        qtc.QPoint_SetY(@ptrCast(self), y);
    }

    pub fn ManhattanLength(self: ?*anyopaque, ) i32 {
        return qtc.QPoint_ManhattanLength(@ptrCast(self));
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QPoint_Transposed(@ptrCast(self));
    }

    pub fn Rx(self: ?*anyopaque, ) i32 {
        return @ptrCast(qtc.QPoint_Rx(@ptrCast(self)));
    }

    pub fn Ry(self: ?*anyopaque, ) i32 {
        return @ptrCast(qtc.QPoint_Ry(@ptrCast(self)));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, p: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_OperatorPlusAssign(@ptrCast(self), @ptrCast(p));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, p: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_OperatorMinusAssign(@ptrCast(self), @ptrCast(p));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QPoint {
        return qtc.QPoint_OperatorMultiplyAssign(@ptrCast(self), factor);
    }

    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, factor: f64) QtC.QPoint {
        return qtc.QPoint_OperatorMultiplyAssign2(@ptrCast(self), factor);
    }

    pub fn OperatorMultiplyAssign3(self: ?*anyopaque, factor: i32) QtC.QPoint {
        return qtc.QPoint_OperatorMultiplyAssign3(@ptrCast(self), factor);
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f64) QtC.QPoint {
        return qtc.QPoint_OperatorDivideAssign(@ptrCast(self), divisor);
    }

    pub fn DotProduct(p1: ?*anyopaque, p2: ?*anyopaque) i32 {
        return qtc.QPoint_DotProduct(@ptrCast(p1), @ptrCast(p2));
    }

    pub fn ToPointF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPoint_ToPointF(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPoint_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpointf.html
pub const qpointf = struct {

    /// New constructs a new QPointF object.
    pub fn New(other: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_new(@ptrCast(other));
    }


    /// New2 constructs a new QPointF object.
    pub fn New2(other: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPointF object.
    pub fn New3() QtC.QPointF {
        return qtc.QPointF_new3();
    }


    /// New4 constructs a new QPointF object.
    pub fn New4(p: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_new4(@ptrCast(p));
    }


    /// New5 constructs a new QPointF object.
    pub fn New5(xpos: f64, ypos: f64) QtC.QPointF {
        return qtc.QPointF_new5(xpos, ypos);
    }


    /// New6 constructs a new QPointF object.
    pub fn New6(param1: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ManhattanLength(self: ?*anyopaque, ) f64 {
        return qtc.QPointF_ManhattanLength(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QPointF_IsNull(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) f64 {
        return qtc.QPointF_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) f64 {
        return qtc.QPointF_Y(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QPointF_SetX(@ptrCast(self), x);
    }

    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QPointF_SetY(@ptrCast(self), y);
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPointF_Transposed(@ptrCast(self));
    }

    pub fn Rx(self: ?*anyopaque, ) f64 {
        return @ptrCast(qtc.QPointF_Rx(@ptrCast(self)));
    }

    pub fn Ry(self: ?*anyopaque, ) f64 {
        return @ptrCast(qtc.QPointF_Ry(@ptrCast(self)));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, p: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_OperatorPlusAssign(@ptrCast(self), @ptrCast(p));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, p: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_OperatorMinusAssign(@ptrCast(self), @ptrCast(p));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, c: f64) QtC.QPointF {
        return qtc.QPointF_OperatorMultiplyAssign(@ptrCast(self), c);
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, c: f64) QtC.QPointF {
        return qtc.QPointF_OperatorDivideAssign(@ptrCast(self), c);
    }

    pub fn DotProduct(p1: ?*anyopaque, p2: ?*anyopaque) f64 {
        return qtc.QPointF_DotProduct(@ptrCast(p1), @ptrCast(p2));
    }

    pub fn ToPoint(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QPointF_ToPoint(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointF_Delete(@ptrCast(self));
    }
};
