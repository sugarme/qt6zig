const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwaitcondition.html
pub const qwaitcondition = struct {

    /// New constructs a new QWaitCondition object.
    pub fn New() QtC.QWaitCondition {
        return qtc.QWaitCondition_new();
    }


    pub fn Wait(self: ?*anyopaque, lockedMutex: ?*anyopaque) bool {
        return qtc.QWaitCondition_Wait(@ptrCast(self), @ptrCast(lockedMutex));
    }

    pub fn Wait2(self: ?*anyopaque, lockedMutex: ?*anyopaque, time: unsigned long) bool {
        return qtc.QWaitCondition_Wait2(@ptrCast(self), @ptrCast(lockedMutex), time);
    }

    pub fn Wait3(self: ?*anyopaque, lockedReadWriteLock: ?*anyopaque) bool {
        return qtc.QWaitCondition_Wait3(@ptrCast(self), @ptrCast(lockedReadWriteLock));
    }

    pub fn Wait4(self: ?*anyopaque, lockedReadWriteLock: ?*anyopaque, time: unsigned long) bool {
        return qtc.QWaitCondition_Wait4(@ptrCast(self), @ptrCast(lockedReadWriteLock), time);
    }

    pub fn WakeOne(self: ?*anyopaque, ) void {
        qtc.QWaitCondition_WakeOne(@ptrCast(self));
    }

    pub fn WakeAll(self: ?*anyopaque, ) void {
        qtc.QWaitCondition_WakeAll(@ptrCast(self));
    }

    pub fn NotifyOne(self: ?*anyopaque, ) void {
        qtc.QWaitCondition_NotifyOne(@ptrCast(self));
    }

    pub fn NotifyAll(self: ?*anyopaque, ) void {
        qtc.QWaitCondition_NotifyAll(@ptrCast(self));
    }

    pub fn Wait22(self: ?*anyopaque, lockedMutex: ?*anyopaque, deadline: QtC.QDeadlineTimer) bool {
        return qtc.QWaitCondition_Wait22(@ptrCast(self), @ptrCast(lockedMutex), @ptrCast(deadline));
    }

    pub fn Wait23(self: ?*anyopaque, lockedReadWriteLock: ?*anyopaque, deadline: QtC.QDeadlineTimer) bool {
        return qtc.QWaitCondition_Wait23(@ptrCast(self), @ptrCast(lockedReadWriteLock), @ptrCast(deadline));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWaitCondition_Delete(@ptrCast(self));
    }
};
