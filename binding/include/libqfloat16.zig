const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfloat16.html
pub const qfloat16 = struct {

    /// New constructs a new qfloat16 object.
    pub fn New() QtC.qfloat16 {
        return qtc.qfloat16_new();
    }


    /// New2 constructs a new qfloat16 object.
    pub fn New2(param1: i32) QtC.qfloat16 {
        return qtc.qfloat16_new2(@intCast(param1));
    }


    /// New3 constructs a new qfloat16 object.
    pub fn New3(f: f32) QtC.qfloat16 {
        return qtc.qfloat16_new3(f);
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

    pub fn IsNormal(self: ?*anyopaque, ) bool {
        return qtc.qfloat16_IsNormal(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.qfloat16_Delete(@ptrCast(self));
    }
};
