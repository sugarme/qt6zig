const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qthreadstoragedata.html
pub const qthreadstoragedata = struct {

    /// New constructs a new QThreadStorageData object.
    pub fn New(other: ?*anyopaque) QtC.QThreadStorageData {
        return qtc.QThreadStorageData_new(@ptrCast(other));
    }


    /// New2 constructs a new QThreadStorageData object.
    pub fn New2(param1: ?*anyopaque) QtC.QThreadStorageData {
        return qtc.QThreadStorageData_new2(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QThreadStorageData_CopyAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Get(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QThreadStorageData_Get(@ptrCast(self));
    }

    pub fn Set(self: ?*anyopaque, p: ?*anyopaque) ?*anyopaque {
        return qtc.QThreadStorageData_Set(@ptrCast(self), @ptrCast(p));
    }

    pub fn Finish(param1: ?*anyopaque) void {
        qtc.QThreadStorageData_Finish(@ptrCast(param1));
    }

    pub fn Id(self: ?*anyopaque, ) i32 {
        return qtc.QThreadStorageData_Id(@ptrCast(self));
    }

    pub fn SetId(self: ?*anyopaque, id: i32) void {
        qtc.QThreadStorageData_SetId(@ptrCast(self), id);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QThreadStorageData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QThreadStorageData_Delete(@ptrCast(self));
    }
};
