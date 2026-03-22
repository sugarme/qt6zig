const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbasicmutex.html
pub const qbasicmutex = struct {

    /// New constructs a new QBasicMutex object.
    pub fn New() QtC.QBasicMutex {
        return qtc.QBasicMutex_new();
    }


    pub fn Lock(self: ?*anyopaque, ) void {
        qtc.QBasicMutex_Lock(@ptrCast(self));
    }

    pub fn Unlock(self: ?*anyopaque, ) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self));
    }

    pub fn TryLock(self: ?*anyopaque, ) bool {
        return qtc.QBasicMutex_TryLock(@ptrCast(self));
    }

    pub fn TryLock2(self: ?*anyopaque, ) bool {
        return qtc.QBasicMutex_TryLock2(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBasicMutex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmutex.html
pub const qmutex = struct {

    /// New constructs a new QMutex object.
    pub fn New() QtC.QMutex {
        return qtc.QMutex_new();
    }


    pub fn TryLock(self: ?*anyopaque, ) bool {
        return qtc.QMutex_TryLock(@ptrCast(self));
    }

    pub fn TryLock2(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QMutex_TryLock2(@ptrCast(self), timeout);
    }

    pub fn TryLock3(self: ?*anyopaque, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QMutex_TryLock3(@ptrCast(self), @ptrCast(timeout));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMutex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qrecursivemutex.html
pub const qrecursivemutex = struct {

    /// New constructs a new QRecursiveMutex object.
    pub fn New() QtC.QRecursiveMutex {
        return qtc.QRecursiveMutex_new();
    }


    pub fn Lock(self: ?*anyopaque, ) void {
        qtc.QRecursiveMutex_Lock(@ptrCast(self));
    }

    pub fn TryLock(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QRecursiveMutex_TryLock(@ptrCast(self), timeout);
    }

    pub fn TryLock2(self: ?*anyopaque, ) bool {
        return qtc.QRecursiveMutex_TryLock2(@ptrCast(self));
    }

    pub fn Unlock(self: ?*anyopaque, ) void {
        qtc.QRecursiveMutex_Unlock(@ptrCast(self));
    }

    pub fn TryLock3(self: ?*anyopaque, ) bool {
        return qtc.QRecursiveMutex_TryLock3(@ptrCast(self));
    }

    pub fn TryLock1(self: ?*anyopaque, timer: QtC.QDeadlineTimer) bool {
        return qtc.QRecursiveMutex_TryLock1(@ptrCast(self), @ptrCast(timer));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRecursiveMutex_Delete(@ptrCast(self));
    }
};
