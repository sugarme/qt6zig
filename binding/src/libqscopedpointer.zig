const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html
pub const qscopedpointerpoddeleter = struct {

    /// New constructs a new QScopedPointerPodDeleter object.
    pub fn New(other: ?*anyopaque) QtC.QScopedPointerPodDeleter {
        return qtc.QScopedPointerPodDeleter_new(@ptrCast(other));
    }


    /// New2 constructs a new QScopedPointerPodDeleter object.
    pub fn New2(other: ?*anyopaque) QtC.QScopedPointerPodDeleter {
        return qtc.QScopedPointerPodDeleter_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Cleanup(pointer: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_Cleanup(@ptrCast(pointer));
    }

    pub fn OperatorCall(self: ?*anyopaque, pointer: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_OperatorCall(@ptrCast(self), @ptrCast(pointer));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_Delete(@ptrCast(self));
    }
};
