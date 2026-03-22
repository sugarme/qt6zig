const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qatomicint.html
pub const qatomicint = struct {

    /// New constructs a new QAtomicInt object.
    pub fn New() QtC.QAtomicInt {
        return qtc.QAtomicInt_new();
    }


    /// New2 constructs a new QAtomicInt object.
    pub fn New2(param1: ?*anyopaque) QtC.QAtomicInt {
        return qtc.QAtomicInt_new2(@ptrCast(param1));
    }


    /// New3 constructs a new QAtomicInt object.
    pub fn New3(value: i32) QtC.QAtomicInt {
        return qtc.QAtomicInt_new3(value);
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAtomicInt_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAtomicInt_Delete(@ptrCast(self));
    }
};
