const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtconcurrent-threadenginebarrier.html
pub const qtconcurrent__threadenginebarrier = struct {

    /// New constructs a new QtConcurrent::ThreadEngineBarrier object.
    pub fn New() QtC.QtConcurrent__ThreadEngineBarrier {
        return qtc.QtConcurrent__ThreadEngineBarrier_new();
    }


    pub fn Acquire(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBarrier_Acquire(@ptrCast(self));
    }

    pub fn Release(self: ?*anyopaque, ) i32 {
        return qtc.QtConcurrent__ThreadEngineBarrier_Release(@ptrCast(self));
    }

    pub fn Wait(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBarrier_Wait(@ptrCast(self));
    }

    pub fn CurrentCount(self: ?*anyopaque, ) i32 {
        return qtc.QtConcurrent__ThreadEngineBarrier_CurrentCount(@ptrCast(self));
    }

    pub fn ReleaseUnlessLast(self: ?*anyopaque, ) bool {
        return qtc.QtConcurrent__ThreadEngineBarrier_ReleaseUnlessLast(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QtConcurrent__ThreadEngineBarrier_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtconcurrent-threadenginebase.html
pub const qtconcurrent__threadenginebase = struct {

    /// New constructs a new QtConcurrent::ThreadEngineBase object.
    pub fn New(pool: ?*anyopaque) QtC.QtConcurrent__ThreadEngineBase {
        return qtc.QtConcurrent__ThreadEngineBase_new(@ptrCast(pool));
    }


    pub fn StartSingleThreaded(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_StartSingleThreaded(@ptrCast(self));
    }

    pub fn StartThread(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_StartThread(@ptrCast(self));
    }

    pub fn IsCanceled(self: ?*anyopaque, ) bool {
        return qtc.QtConcurrent__ThreadEngineBase_IsCanceled(@ptrCast(self));
    }

    pub fn WaitForResume(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_WaitForResume(@ptrCast(self));
    }

    pub fn IsProgressReportingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QtConcurrent__ThreadEngineBase_IsProgressReportingEnabled(@ptrCast(self));
    }

    pub fn SetProgressValue(self: ?*anyopaque, progress: i32) void {
        qtc.QtConcurrent__ThreadEngineBase_SetProgressValue(@ptrCast(self), progress);
    }

    pub fn SetProgressRange(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QtConcurrent__ThreadEngineBase_SetProgressRange(@ptrCast(self), minimum, maximum);
    }

    pub fn AcquireBarrierSemaphore(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_AcquireBarrierSemaphore(@ptrCast(self));
    }

    pub fn ReportIfSuspensionDone(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_ReportIfSuspensionDone(@ptrCast(self));
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_Start(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStart(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QtConcurrent__ThreadEngineBase_OnStart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStart(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_QBaseStart(@ptrCast(self));
    }

    pub fn Finish(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_Finish(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFinish(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QtConcurrent__ThreadEngineBase_OnFinish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFinish(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__ThreadEngineBase_QBaseFinish(@ptrCast(self));
    }

    pub fn ThreadFunction(self: ?*anyopaque, ) i32 {
        return qtc.QtConcurrent__ThreadEngineBase_ThreadFunction(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnThreadFunction(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QtConcurrent__ThreadEngineBase_OnThreadFunction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseThreadFunction(self: ?*anyopaque, ) i32 {
        return qtc.QtConcurrent__ThreadEngineBase_QBaseThreadFunction(@ptrCast(self));
    }

    pub fn ShouldStartThread(self: ?*anyopaque, ) bool {
        return qtc.QtConcurrent__ThreadEngineBase_ShouldStartThread(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShouldStartThread(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QtConcurrent__ThreadEngineBase_OnShouldStartThread(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShouldStartThread(self: ?*anyopaque, ) bool {
        return qtc.QtConcurrent__ThreadEngineBase_QBaseShouldStartThread(@ptrCast(self));
    }

    pub fn ShouldThrottleThread(self: ?*anyopaque, ) bool {
        return qtc.QtConcurrent__ThreadEngineBase_ShouldThrottleThread(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShouldThrottleThread(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QtConcurrent__ThreadEngineBase_OnShouldThrottleThread(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShouldThrottleThread(self: ?*anyopaque, ) bool {
        return qtc.QtConcurrent__ThreadEngineBase_QBaseShouldThrottleThread(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QtConcurrent__ThreadEngineBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/tconcurrentthreadengine.html#types
pub const enums = struct {
    pub const ThreadFunctionResult = enum {
        pub const ThrottleThread: i32 = 0;
        pub const ThreadFinished: i32 = 1;
    };

};
