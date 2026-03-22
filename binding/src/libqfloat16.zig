const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfloat16.html
pub const qfloat16 = struct {

    /// New constructs a new qfloat16 object.
    pub fn New(other: ?*anyopaque) QtC.qfloat16 {
        return qtc.qfloat16_new(@ptrCast(other));
    }


    /// New2 constructs a new qfloat16 object.
    pub fn New2(other: ?*anyopaque) QtC.qfloat16 {
        return qtc.qfloat16_new2(@ptrCast(other));
    }


    /// New3 constructs a new qfloat16 object.
    pub fn New3() QtC.qfloat16 {
        return qtc.qfloat16_new3();
    }


    /// New4 constructs a new qfloat16 object.
    pub fn New4(param1: i32) QtC.qfloat16 {
        return qtc.qfloat16_new4(@intCast(param1));
    }


    /// New5 constructs a new qfloat16 object.
    pub fn New5(f: f32) QtC.qfloat16 {
        return qtc.qfloat16_new5(f);
    }


    /// New6 constructs a new qfloat16 object.
    pub fn New6(param1: ?*anyopaque) QtC.qfloat16 {
        return qtc.qfloat16_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.qfloat16_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.qfloat16_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Operatorfloat(self: ?*anyopaque, ) f32 {
        return qtc.qfloat16_Operatorfloat(@ptrCast(self));
    }

    pub fn IsInf(self: ?*anyopaque, ) bool {
        return qtc.qfloat16_IsInf(@ptrCast(self));
    }

    pub fn IsNaN(self: ?*anyopaque, ) bool {
        return qtc.qfloat16_IsNaN(@ptrCast(self));
    }

    pub fn IsFinite(self: ?*anyopaque, ) bool {
        return qtc.qfloat16_IsFinite(@ptrCast(self));
    }

    pub fn FpClassify(self: ?*anyopaque, ) i32 {
        return qtc.qfloat16_FpClassify(@ptrCast(self));
    }

    pub fn CopySign(self: ?*anyopaque, sign: QtC.qfloat16) QtC.qfloat16 {
        return qtc.qfloat16_CopySign(@ptrCast(self), @ptrCast(sign));
    }

    pub fn LimitEpsilon() QtC.qfloat16 {
        return qtc.qfloat16_LimitEpsilon();
    }

    pub fn LimitMin() QtC.qfloat16 {
        return qtc.qfloat16_LimitMin();
    }

    pub fn LimitDenormMin() QtC.qfloat16 {
        return qtc.qfloat16_LimitDenormMin();
    }

    pub fn LimitMax() QtC.qfloat16 {
        return qtc.qfloat16_LimitMax();
    }

    pub fn LimitLowest() QtC.qfloat16 {
        return qtc.qfloat16_LimitLowest();
    }

    pub fn LimitInfinity() QtC.qfloat16 {
        return qtc.qfloat16_LimitInfinity();
    }

    pub fn LimitQuiet_NaN() QtC.qfloat16 {
        return qtc.qfloat16_LimitQuiet_NaN();
    }

    pub fn LimitSignaling_NaN() QtC.qfloat16 {
        return qtc.qfloat16_LimitSignaling_NaN();
    }

    pub fn IsNormal(self: ?*anyopaque, ) bool {
        return qtc.qfloat16_IsNormal(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.qfloat16_Delete(@ptrCast(self));
    }
};
