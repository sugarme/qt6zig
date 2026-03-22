const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsemaphore.html
pub const qsemaphore = struct {

    /// New constructs a new QSemaphore object.
    pub fn New() QtC.QSemaphore {
        return qtc.QSemaphore_new();
    }


    /// New2 constructs a new QSemaphore object.
    pub fn New2(n: i32) QtC.QSemaphore {
        return qtc.QSemaphore_new2(n);
    }


    pub fn Acquire(self: ?*anyopaque, ) void {
        qtc.QSemaphore_Acquire(@ptrCast(self));
    }

    pub fn TryAcquire(self: ?*anyopaque, ) bool {
        return qtc.QSemaphore_TryAcquire(@ptrCast(self));
    }

    pub fn TryAcquire2(self: ?*anyopaque, n: i32, timeout: i32) bool {
        return qtc.QSemaphore_TryAcquire2(@ptrCast(self), n, timeout);
    }

    pub fn TryAcquire3(self: ?*anyopaque, n: i32, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QSemaphore_TryAcquire3(@ptrCast(self), n, @ptrCast(timeout));
    }

    pub fn Release(self: ?*anyopaque, ) void {
        qtc.QSemaphore_Release(@ptrCast(self));
    }

    pub fn Available(self: ?*anyopaque, ) i32 {
        return qtc.QSemaphore_Available(@ptrCast(self));
    }

    pub fn TryAcquire4(self: ?*anyopaque, ) bool {
        return qtc.QSemaphore_TryAcquire4(@ptrCast(self));
    }

    pub fn Acquire1(self: ?*anyopaque, n: i32) void {
        qtc.QSemaphore_Acquire1(@ptrCast(self), n);
    }

    pub fn TryAcquire1(self: ?*anyopaque, n: i32) bool {
        return qtc.QSemaphore_TryAcquire1(@ptrCast(self), n);
    }

    pub fn Release1(self: ?*anyopaque, n: i32) void {
        qtc.QSemaphore_Release1(@ptrCast(self), n);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSemaphore_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsemaphorereleaser.html
pub const qsemaphorereleaser = struct {

    /// New constructs a new QSemaphoreReleaser object.
    pub fn New() QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new();
    }


    /// New2 constructs a new QSemaphoreReleaser object.
    pub fn New2(sem: ?*anyopaque) QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new2(@ptrCast(sem));
    }


    /// New3 constructs a new QSemaphoreReleaser object.
    pub fn New3(sem: ?*anyopaque) QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new3(@ptrCast(sem));
    }


    /// New4 constructs a new QSemaphoreReleaser object.
    pub fn New4(sem: ?*anyopaque, n: i32) QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new4(@ptrCast(sem), n);
    }


    /// New5 constructs a new QSemaphoreReleaser object.
    pub fn New5(sem: ?*anyopaque, n: i32) QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new5(@ptrCast(sem), n);
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSemaphoreReleaser_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Semaphore(self: ?*anyopaque, ) QtC.QSemaphore {
        return qtc.QSemaphoreReleaser_Semaphore(@ptrCast(self));
    }

    pub fn Cancel(self: ?*anyopaque, ) QtC.QSemaphore {
        return qtc.QSemaphoreReleaser_Cancel(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSemaphoreReleaser_Delete(@ptrCast(self));
    }
};
