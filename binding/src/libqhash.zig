const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhashdummyvalue.html
pub const qhashdummyvalue = struct {

    /// New constructs a new QHashDummyValue object.
    pub fn New(other: ?*anyopaque) QtC.QHashDummyValue {
        return qtc.QHashDummyValue_new(@ptrCast(other));
    }


    /// New2 constructs a new QHashDummyValue object.
    pub fn New2(other: ?*anyopaque) QtC.QHashDummyValue {
        return qtc.QHashDummyValue_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHashDummyValue_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHashDummyValue_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QHashDummyValue_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHashDummyValue_Delete(@ptrCast(self));
    }
};
