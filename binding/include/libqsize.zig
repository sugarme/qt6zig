const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsize.html
pub const qsize = struct {

    /// New constructs a new QSize object.
    pub fn New(other: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new(@ptrCast(other));
    }


    /// New2 constructs a new QSize object.
    pub fn New2(other: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new2(@ptrCast(other));
    }


    /// New3 constructs a new QSize object.
    pub fn New3() QtC.QSize {
        return qtc.QSize_new3();
    }


    /// New4 constructs a new QSize object.
    pub fn New4(w: i32, h: i32) QtC.QSize {
        return qtc.QSize_new4(w, h);
    }


    /// New5 constructs a new QSize object.
    pub fn New5(param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSize_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSize_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QSize_IsNull(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QSize_IsEmpty(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSize_IsValid(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QSize_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QSize_Height(@ptrCast(self));
    }

    pub fn SetWidth(self: ?*anyopaque, w: i32) void {
        qtc.QSize_SetWidth(@ptrCast(self), w);
    }

    pub fn SetHeight(self: ?*anyopaque, h: i32) void {
        qtc.QSize_SetHeight(@ptrCast(self), h);
    }

    pub fn Transpose(self: ?*anyopaque, ) void {
        qtc.QSize_Transpose(@ptrCast(self));
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSize_Transposed(@ptrCast(self));
    }

    pub fn Scale(self: ?*anyopaque, w: i32, h: i32, mode: i32) void {
        qtc.QSize_Scale(@ptrCast(self), w, h, @intCast(mode));
    }

    pub fn Scale2(self: ?*anyopaque, s: ?*anyopaque, mode: i32) void {
        qtc.QSize_Scale2(@ptrCast(self), @ptrCast(s), @intCast(mode));
    }

    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32, mode: i32) QtC.QSize {
        return qtc.QSize_Scaled(@ptrCast(self), w, h, @intCast(mode));
    }

    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque, mode: i32) QtC.QSize {
        return qtc.QSize_Scaled2(@ptrCast(self), @ptrCast(s), @intCast(mode));
    }

    pub fn ExpandedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_ExpandedTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn BoundedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_BoundedTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn GrownBy(self: ?*anyopaque, m: QtC.QMargins) QtC.QSize {
        return qtc.QSize_GrownBy(@ptrCast(self), @ptrCast(m));
    }

    pub fn ShrunkBy(self: ?*anyopaque, m: QtC.QMargins) QtC.QSize {
        return qtc.QSize_ShrunkBy(@ptrCast(self), @ptrCast(m));
    }

    pub fn Rwidth(self: ?*anyopaque, ) i32 {
        return @ptrCast(qtc.QSize_Rwidth(@ptrCast(self)));
    }

    pub fn Rheight(self: ?*anyopaque, ) i32 {
        return @ptrCast(qtc.QSize_Rheight(@ptrCast(self)));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_OperatorPlusAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_OperatorMinusAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, c: f64) QtC.QSize {
        return qtc.QSize_OperatorMultiplyAssign(@ptrCast(self), c);
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, c: f64) QtC.QSize {
        return qtc.QSize_OperatorDivideAssign(@ptrCast(self), c);
    }

    pub fn ToSizeF(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QSize_ToSizeF(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSize_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsizef.html
pub const qsizef = struct {

    /// New constructs a new QSizeF object.
    pub fn New(other: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new(@ptrCast(other));
    }


    /// New2 constructs a new QSizeF object.
    pub fn New2(other: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new2(@ptrCast(other));
    }


    /// New3 constructs a new QSizeF object.
    pub fn New3() QtC.QSizeF {
        return qtc.QSizeF_new3();
    }


    /// New4 constructs a new QSizeF object.
    pub fn New4(sz: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new4(@ptrCast(sz));
    }


    /// New5 constructs a new QSizeF object.
    pub fn New5(w: f64, h: f64) QtC.QSizeF {
        return qtc.QSizeF_new5(w, h);
    }


    /// New6 constructs a new QSizeF object.
    pub fn New6(param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizeF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizeF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QSizeF_IsNull(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QSizeF_IsEmpty(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSizeF_IsValid(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QSizeF_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) f64 {
        return qtc.QSizeF_Height(@ptrCast(self));
    }

    pub fn SetWidth(self: ?*anyopaque, w: f64) void {
        qtc.QSizeF_SetWidth(@ptrCast(self), w);
    }

    pub fn SetHeight(self: ?*anyopaque, h: f64) void {
        qtc.QSizeF_SetHeight(@ptrCast(self), h);
    }

    pub fn Transpose(self: ?*anyopaque, ) void {
        qtc.QSizeF_Transpose(@ptrCast(self));
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QSizeF_Transposed(@ptrCast(self));
    }

    pub fn Scale(self: ?*anyopaque, w: f64, h: f64, mode: i32) void {
        qtc.QSizeF_Scale(@ptrCast(self), w, h, @intCast(mode));
    }

    pub fn Scale2(self: ?*anyopaque, s: ?*anyopaque, mode: i32) void {
        qtc.QSizeF_Scale2(@ptrCast(self), @ptrCast(s), @intCast(mode));
    }

    pub fn Scaled(self: ?*anyopaque, w: f64, h: f64, mode: i32) QtC.QSizeF {
        return qtc.QSizeF_Scaled(@ptrCast(self), w, h, @intCast(mode));
    }

    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque, mode: i32) QtC.QSizeF {
        return qtc.QSizeF_Scaled2(@ptrCast(self), @ptrCast(s), @intCast(mode));
    }

    pub fn ExpandedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_ExpandedTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn BoundedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_BoundedTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn GrownBy(self: ?*anyopaque, m: QtC.QMarginsF) QtC.QSizeF {
        return qtc.QSizeF_GrownBy(@ptrCast(self), @ptrCast(m));
    }

    pub fn ShrunkBy(self: ?*anyopaque, m: QtC.QMarginsF) QtC.QSizeF {
        return qtc.QSizeF_ShrunkBy(@ptrCast(self), @ptrCast(m));
    }

    pub fn Rwidth(self: ?*anyopaque, ) f64 {
        return @ptrCast(qtc.QSizeF_Rwidth(@ptrCast(self)));
    }

    pub fn Rheight(self: ?*anyopaque, ) f64 {
        return @ptrCast(qtc.QSizeF_Rheight(@ptrCast(self)));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_OperatorPlusAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_OperatorMinusAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorMultiplyAssign(self: ?*anyopaque, c: f64) QtC.QSizeF {
        return qtc.QSizeF_OperatorMultiplyAssign(@ptrCast(self), c);
    }

    pub fn OperatorDivideAssign(self: ?*anyopaque, c: f64) QtC.QSizeF {
        return qtc.QSizeF_OperatorDivideAssign(@ptrCast(self), c);
    }

    pub fn ToSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSizeF_ToSize(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSizeF_Delete(@ptrCast(self));
    }
};
