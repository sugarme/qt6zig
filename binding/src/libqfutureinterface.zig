const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfutureinterfacebase.html
pub const qfutureinterfacebase = struct {

    /// New constructs a new QFutureInterfaceBase object.
    pub fn New() QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new();
    }


    /// New2 constructs a new QFutureInterfaceBase object.
    pub fn New2(other: ?*anyopaque) QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new2(@ptrCast(other));
    }


    /// New3 constructs a new QFutureInterfaceBase object.
    pub fn New3(initialState: i32) QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new3(@intCast(initialState));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn ReportStarted(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_ReportStarted(@ptrCast(self));
    }

    pub fn ReportFinished(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_ReportFinished(@ptrCast(self));
    }

    pub fn ReportCanceled(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_ReportCanceled(@ptrCast(self));
    }

    pub fn ReportException(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportException(@ptrCast(self), @ptrCast(e));
    }

    pub fn ReportException2(self: ?*anyopaque, e: std::exception_ptr) void {
        qtc.QFutureInterfaceBase_ReportException2(@ptrCast(self), e);
    }

    pub fn ReportResultsReady(self: ?*anyopaque, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureInterfaceBase_ReportResultsReady(@ptrCast(self), beginIndex, endIndex);
    }

    pub fn SetRunnable(self: ?*anyopaque, runnable: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_SetRunnable(@ptrCast(self), @ptrCast(runnable));
    }

    pub fn SetThreadPool(self: ?*anyopaque, pool: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_SetThreadPool(@ptrCast(self), @ptrCast(pool));
    }

    pub fn ThreadPool(self: ?*anyopaque, ) QtC.QThreadPool {
        return qtc.QFutureInterfaceBase_ThreadPool(@ptrCast(self));
    }

    pub fn SetFilterMode(self: ?*anyopaque, enable: bool) void {
        qtc.QFutureInterfaceBase_SetFilterMode(@ptrCast(self), enable);
    }

    pub fn SetProgressRange(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QFutureInterfaceBase_SetProgressRange(@ptrCast(self), minimum, maximum);
    }

    pub fn ProgressMinimum(self: ?*anyopaque, ) i32 {
        return qtc.QFutureInterfaceBase_ProgressMinimum(@ptrCast(self));
    }

    pub fn ProgressMaximum(self: ?*anyopaque, ) i32 {
        return qtc.QFutureInterfaceBase_ProgressMaximum(@ptrCast(self));
    }

    pub fn IsProgressUpdateNeeded(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsProgressUpdateNeeded(@ptrCast(self));
    }

    pub fn SetProgressValue(self: ?*anyopaque, progressValue: i32) void {
        qtc.QFutureInterfaceBase_SetProgressValue(@ptrCast(self), progressValue);
    }

    pub fn ProgressValue(self: ?*anyopaque, ) i32 {
        return qtc.QFutureInterfaceBase_ProgressValue(@ptrCast(self));
    }

    pub fn SetProgressValueAndText(self: ?*anyopaque, progressValue: i32, progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
    .len = progressText.len,
    .data = progressText.ptr,
};
qtc.QFutureInterfaceBase_SetProgressValueAndText(@ptrCast(self), progressValue, progressText_str);
    }

    pub fn ProgressText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFutureInterfaceBase_ProgressText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfutureinterfacebase.ProgressText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetExpectedResultCount(self: ?*anyopaque, resultCount: i32) void {
        qtc.QFutureInterfaceBase_SetExpectedResultCount(@ptrCast(self), resultCount);
    }

    pub fn ExpectedResultCount(self: ?*anyopaque, ) i32 {
        return qtc.QFutureInterfaceBase_ExpectedResultCount(@ptrCast(self));
    }

    pub fn ResultCount(self: ?*anyopaque, ) i32 {
        return qtc.QFutureInterfaceBase_ResultCount(@ptrCast(self));
    }

    pub fn QueryState(self: ?*anyopaque, state: i32) bool {
        return qtc.QFutureInterfaceBase_QueryState(@ptrCast(self), @intCast(state));
    }

    pub fn IsRunning(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsRunning(@ptrCast(self));
    }

    pub fn IsStarted(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsStarted(@ptrCast(self));
    }

    pub fn IsCanceled(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsCanceled(@ptrCast(self));
    }

    pub fn IsFinished(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsFinished(@ptrCast(self));
    }

    pub fn IsPaused(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsPaused(@ptrCast(self));
    }

    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QFutureInterfaceBase_SetPaused(@ptrCast(self), paused);
    }

    pub fn TogglePaused(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_TogglePaused(@ptrCast(self));
    }

    pub fn IsSuspending(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsSuspending(@ptrCast(self));
    }

    pub fn IsSuspended(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsSuspended(@ptrCast(self));
    }

    pub fn IsThrottled(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsThrottled(@ptrCast(self));
    }

    pub fn IsResultReadyAt(self: ?*anyopaque, index: i32) bool {
        return qtc.QFutureInterfaceBase_IsResultReadyAt(@ptrCast(self), index);
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsValid(@ptrCast(self));
    }

    pub fn LoadState(self: ?*anyopaque, ) i32 {
        return qtc.QFutureInterfaceBase_LoadState(@ptrCast(self));
    }

    pub fn Cancel(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_Cancel(@ptrCast(self));
    }

    pub fn CancelAndFinish(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_CancelAndFinish(@ptrCast(self));
    }

    pub fn SetSuspended(self: ?*anyopaque, suspendVal: bool) void {
        qtc.QFutureInterfaceBase_SetSuspended(@ptrCast(self), suspendVal);
    }

    pub fn ToggleSuspended(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_ToggleSuspended(@ptrCast(self));
    }

    pub fn ReportSuspended(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_ReportSuspended(@ptrCast(self));
    }

    pub fn SetThrottled(self: ?*anyopaque, enable: bool) void {
        qtc.QFutureInterfaceBase_SetThrottled(@ptrCast(self), enable);
    }

    pub fn WaitForFinished(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_WaitForFinished(@ptrCast(self));
    }

    pub fn WaitForNextResult(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_WaitForNextResult(@ptrCast(self));
    }

    pub fn WaitForResult(self: ?*anyopaque, resultIndex: i32) void {
        qtc.QFutureInterfaceBase_WaitForResult(@ptrCast(self), resultIndex);
    }

    pub fn WaitForResume(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_WaitForResume(@ptrCast(self));
    }

    pub fn SuspendIfRequested(self: ?*anyopaque, ) void {
        qtc.QFutureInterfaceBase_SuspendIfRequested(@ptrCast(self));
    }

    pub fn Mutex(self: ?*anyopaque, ) QtC.QMutex {
        return qtc.QFutureInterfaceBase_Mutex(@ptrCast(self));
    }

    pub fn HasException(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_HasException(@ptrCast(self));
    }

    pub fn ExceptionStore(self: ?*anyopaque, ) QtC.QtPrivate__ExceptionStore {
        return qtc.QFutureInterfaceBase_ExceptionStore(@ptrCast(self));
    }

    pub fn ResultStoreBase(self: ?*anyopaque, ) QtC.QtPrivate__ResultStoreBase {
        return qtc.QFutureInterfaceBase_ResultStoreBase(@ptrCast(self));
    }

    pub fn ResultStoreBase2(self: ?*anyopaque, ) QtC.QtPrivate__ResultStoreBase {
        return qtc.QFutureInterfaceBase_ResultStoreBase2(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsChainCanceled(self: ?*anyopaque, ) bool {
        return qtc.QFutureInterfaceBase_IsChainCanceled(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/futureinterface.html#types
pub const enums = struct {
    pub const State = enum {
        pub const NoState: i32 = 0;
        pub const Running: i32 = 1;
        pub const Started: i32 = 2;
        pub const Finished: i32 = 4;
        pub const Canceled: i32 = 8;
        pub const Suspending: i32 = 16;
        pub const Suspended: i32 = 32;
        pub const Throttled: i32 = 64;
        pub const Pending: i32 = 128;
    };

    pub const CancelMode = enum {
        pub const CancelOnly: i32 = 0;
        pub const CancelAndFinish: i32 = 1;
    };

};
