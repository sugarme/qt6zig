const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qreadwritelock.html
pub const qreadwritelock = struct {

    /// New constructs a new QReadWriteLock object.
    pub fn New() QtC.QReadWriteLock {
        return qtc.QReadWriteLock_new();
    }


    /// New2 constructs a new QReadWriteLock object.
    pub fn New2(recursionMode: i32) QtC.QReadWriteLock {
        return qtc.QReadWriteLock_new2(@intCast(recursionMode));
    }


    pub fn LockForRead(self: ?*anyopaque, ) void {
        qtc.QReadWriteLock_LockForRead(@ptrCast(self));
    }

    pub fn TryLockForRead(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QReadWriteLock_TryLockForRead(@ptrCast(self), timeout);
    }

    pub fn TryLockForRead2(self: ?*anyopaque, ) bool {
        return qtc.QReadWriteLock_TryLockForRead2(@ptrCast(self));
    }

    pub fn LockForWrite(self: ?*anyopaque, ) void {
        qtc.QReadWriteLock_LockForWrite(@ptrCast(self));
    }

    pub fn TryLockForWrite(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QReadWriteLock_TryLockForWrite(@ptrCast(self), timeout);
    }

    pub fn TryLockForWrite2(self: ?*anyopaque, ) bool {
        return qtc.QReadWriteLock_TryLockForWrite2(@ptrCast(self));
    }

    pub fn Unlock(self: ?*anyopaque, ) void {
        qtc.QReadWriteLock_Unlock(@ptrCast(self));
    }

    pub fn TryLockForRead1(self: ?*anyopaque, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QReadWriteLock_TryLockForRead1(@ptrCast(self), @ptrCast(timeout));
    }

    pub fn TryLockForWrite1(self: ?*anyopaque, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QReadWriteLock_TryLockForWrite1(@ptrCast(self), @ptrCast(timeout));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QReadWriteLock_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qreadlocker.html
pub const qreadlocker = struct {

    /// New constructs a new QReadLocker object.
    pub fn New(readWriteLock: ?*anyopaque) QtC.QReadLocker {
        return qtc.QReadLocker_new(@ptrCast(readWriteLock));
    }


    pub fn Unlock(self: ?*anyopaque, ) void {
        qtc.QReadLocker_Unlock(@ptrCast(self));
    }

    pub fn Relock(self: ?*anyopaque, ) void {
        qtc.QReadLocker_Relock(@ptrCast(self));
    }

    pub fn ReadWriteLock(self: ?*anyopaque, ) QtC.QReadWriteLock {
        return qtc.QReadLocker_ReadWriteLock(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QReadLocker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwritelocker.html
pub const qwritelocker = struct {

    /// New constructs a new QWriteLocker object.
    pub fn New(readWriteLock: ?*anyopaque) QtC.QWriteLocker {
        return qtc.QWriteLocker_new(@ptrCast(readWriteLock));
    }


    pub fn Unlock(self: ?*anyopaque, ) void {
        qtc.QWriteLocker_Unlock(@ptrCast(self));
    }

    pub fn Relock(self: ?*anyopaque, ) void {
        qtc.QWriteLocker_Relock(@ptrCast(self));
    }

    pub fn ReadWriteLock(self: ?*anyopaque, ) QtC.QReadWriteLock {
        return qtc.QWriteLocker_ReadWriteLock(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWriteLocker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/readwritelock.html#types
pub const enums = struct {
    pub const RecursionMode = enum {
        pub const NonRecursive: i32 = 0;
        pub const Recursive: i32 = 1;
    };

};
