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
    pub fn New2(value: i32) QtC.QAtomicInt {
        return qtc.QAtomicInt_new2(value);
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAtomicInt_Delete(@ptrCast(self));
    }
};
