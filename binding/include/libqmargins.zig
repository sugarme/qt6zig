const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmargins.html
pub const qmargins = struct {

    /// New constructs a new QMargins object.
    pub fn New(other: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_new(@ptrCast(other));
    }


    /// New2 constructs a new QMargins object.
    pub fn New2(other: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMargins object.
    pub fn New3() QtC.QMargins {
        return qtc.QMargins_new3();
    }


    /// New4 constructs a new QMargins object.
    pub fn New4(left: i32, top: i32, right: i32, bottom: i32) QtC.QMargins {
        return qtc.QMargins_new4(left, top, right, bottom);
    }


    /// New5 constructs a new QMargins object.
    pub fn New5(param1: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMargins_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMargins_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QMargins_IsNull(@ptrCast(self));
    }

    pub fn Left(self: ?*anyopaque, ) i32 {
        return qtc.QMargins_Left(@ptrCast(self));
    }

    pub fn Top(self: ?*anyopaque, ) i32 {
        return qtc.QMargins_Top(@ptrCast(self));
    }

    pub fn Right(self: ?*anyopaque, ) i32 {
        return qtc.QMargins_Right(@ptrCast(self));
    }

    pub fn Bottom(self: ?*anyopaque, ) i32 {
        return qtc.QMargins_Bottom(@ptrCast(self));
    }

    pub fn SetLeft(self: ?*anyopaque, left: i32) void {
        qtc.QMargins_SetLeft(@ptrCast(self), left);
    }

    pub fn SetTop(self: ?*anyopaque, top: i32) void {
        qtc.QMargins_SetTop(@ptrCast(self), top);
    }

    pub fn SetRight(self: ?*anyopaque, right: i32) void {
        qtc.QMargins_SetRight(@ptrCast(self), right);
    }

    pub fn SetBottom(self: ?*anyopaque, bottom: i32) void {
        qtc.QMargins_SetBottom(@ptrCast(self), bottom);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    pub fn OperatorPlusAssign2(self: ?*anyopaque, param1: i32) QtC.QMargins {
        return qtc.QMargins_OperatorPlusAssign2(@ptrCast(self), param1);
    }

    pub fn OperatorMinusAssign2(self: ?*anyopaque, param1: i32) QtC.QMargins {
        return qtc.QMargins_OperatorMinusAssign2(@ptrCast(self), param1);
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, param1: i32) QtC.QMargins {
        return qtc.QMargins_OperatorMultiplyAssign(@ptrCast(self), param1);
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, param1: i32) QtC.QMargins {
        return qtc.QMargins_OperatorDivideAssign(@ptrCast(self), param1);
    }

    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, param1: f64) QtC.QMargins {
        return qtc.QMargins_OperatorMultiplyAssign2(@ptrCast(self), param1);
    }

    pub fn OperatorDivideAssign2(self: ?*anyopaque, param1: f64) QtC.QMargins {
        return qtc.QMargins_OperatorDivideAssign2(@ptrCast(self), param1);
    }

    pub fn ToMarginsF(self: ?*anyopaque, ) QtC.QMarginsF {
        return qtc.QMargins_ToMarginsF(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMargins_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmarginsf.html
pub const qmarginsf = struct {

    /// New constructs a new QMarginsF object.
    pub fn New(other: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_new(@ptrCast(other));
    }


    /// New2 constructs a new QMarginsF object.
    pub fn New2(other: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMarginsF object.
    pub fn New3() QtC.QMarginsF {
        return qtc.QMarginsF_new3();
    }


    /// New4 constructs a new QMarginsF object.
    pub fn New4(left: f64, top: f64, right: f64, bottom: f64) QtC.QMarginsF {
        return qtc.QMarginsF_new4(left, top, right, bottom);
    }


    /// New5 constructs a new QMarginsF object.
    pub fn New5(margins: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_new5(@ptrCast(margins));
    }


    /// New6 constructs a new QMarginsF object.
    pub fn New6(param1: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMarginsF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMarginsF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QMarginsF_IsNull(@ptrCast(self));
    }

    pub fn Left(self: ?*anyopaque, ) f64 {
        return qtc.QMarginsF_Left(@ptrCast(self));
    }

    pub fn Top(self: ?*anyopaque, ) f64 {
        return qtc.QMarginsF_Top(@ptrCast(self));
    }

    pub fn Right(self: ?*anyopaque, ) f64 {
        return qtc.QMarginsF_Right(@ptrCast(self));
    }

    pub fn Bottom(self: ?*anyopaque, ) f64 {
        return qtc.QMarginsF_Bottom(@ptrCast(self));
    }

    pub fn SetLeft(self: ?*anyopaque, aleft: f64) void {
        qtc.QMarginsF_SetLeft(@ptrCast(self), aleft);
    }

    pub fn SetTop(self: ?*anyopaque, atop: f64) void {
        qtc.QMarginsF_SetTop(@ptrCast(self), atop);
    }

    pub fn SetRight(self: ?*anyopaque, aright: f64) void {
        qtc.QMarginsF_SetRight(@ptrCast(self), aright);
    }

    pub fn SetBottom(self: ?*anyopaque, abottom: f64) void {
        qtc.QMarginsF_SetBottom(@ptrCast(self), abottom);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    pub fn OperatorPlusAssign2(self: ?*anyopaque, addend: f64) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorPlusAssign2(@ptrCast(self), addend);
    }

    pub fn OperatorMinusAssign2(self: ?*anyopaque, subtrahend: f64) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorMinusAssign2(@ptrCast(self), subtrahend);
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f64) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorMultiplyAssign(@ptrCast(self), factor);
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f64) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorDivideAssign(@ptrCast(self), divisor);
    }

    pub fn ToMargins(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QMarginsF_ToMargins(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMarginsF_Delete(@ptrCast(self));
    }
};
