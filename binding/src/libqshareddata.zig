const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qshareddata.html
pub const qshareddata = struct {

    /// New constructs a new QSharedData object.
    pub fn New() QtC.QSharedData {
        return qtc.QSharedData_new();
    }


    /// New2 constructs a new QSharedData object.
    pub fn New2(param1: ?*anyopaque) QtC.QSharedData {
        return qtc.QSharedData_new2(@ptrCast(param1));
    }


    pub fn Ref(self: ?*anyopaque, ) QtC.QAtomicInt {
        return qtc.QSharedData_Ref(@ptrCast(self));
    }

    pub fn SetRef(self: ?*anyopaque, ref: QtC.QAtomicInt) void {
        qtc.QSharedData_SetRef(@ptrCast(self), @ptrCast(ref));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSharedData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qadoptshareddatatag.html
pub const qadoptshareddatatag = struct {

    /// New constructs a new QAdoptSharedDataTag object.
    pub fn New(other: ?*anyopaque) QtC.QAdoptSharedDataTag {
        return qtc.QAdoptSharedDataTag_new(@ptrCast(other));
    }


    /// New2 constructs a new QAdoptSharedDataTag object.
    pub fn New2(other: ?*anyopaque) QtC.QAdoptSharedDataTag {
        return qtc.QAdoptSharedDataTag_new2(@ptrCast(other));
    }


    /// New3 constructs a new QAdoptSharedDataTag object.
    pub fn New3() QtC.QAdoptSharedDataTag {
        return qtc.QAdoptSharedDataTag_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAdoptSharedDataTag_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAdoptSharedDataTag_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAdoptSharedDataTag_Delete(@ptrCast(self));
    }
};
