const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbindingstatus.html
pub const qbindingstatus = struct {

    /// New constructs a new QBindingStatus object.
    pub fn New(other: ?*anyopaque) QtC.QBindingStatus {
        return qtc.QBindingStatus_new(@ptrCast(other));
    }


    /// New2 constructs a new QBindingStatus object.
    pub fn New2(other: ?*anyopaque) QtC.QBindingStatus {
        return qtc.QBindingStatus_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBindingStatus_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBindingStatus_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBindingStatus_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qbindingstorage.html
pub const qbindingstorage = struct {

    /// New constructs a new QBindingStorage object.
    pub fn New() QtC.QBindingStorage {
        return qtc.QBindingStorage_new();
    }


    /// New2 constructs a new QBindingStorage object.
    pub fn New2(param1: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QBindingStorage_new2(@ptrCast(param1));
    }


    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QBindingStorage_IsEmpty(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QBindingStorage_IsValid(@ptrCast(self));
    }

    pub fn RegisterDependency(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QBindingStorage_RegisterDependency(@ptrCast(self), @ptrCast(data));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBindingStorage_Delete(@ptrCast(self));
    }
};
