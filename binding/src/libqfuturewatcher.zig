const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfuturewatcherbase.html
pub const qfuturewatcherbase = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFutureWatcherBase_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ProgressValue(self: ?*anyopaque, ) i32 {
        return qtc.QFutureWatcherBase_ProgressValue(@ptrCast(self));
    }

    pub fn ProgressMinimum(self: ?*anyopaque, ) i32 {
        return qtc.QFutureWatcherBase_ProgressMinimum(@ptrCast(self));
    }

    pub fn ProgressMaximum(self: ?*anyopaque, ) i32 {
        return qtc.QFutureWatcherBase_ProgressMaximum(@ptrCast(self));
    }

    pub fn ProgressText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFutureWatcherBase_ProgressText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.ProgressText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsStarted(self: ?*anyopaque, ) bool {
        return qtc.QFutureWatcherBase_IsStarted(@ptrCast(self));
    }

    pub fn IsFinished(self: ?*anyopaque, ) bool {
        return qtc.QFutureWatcherBase_IsFinished(@ptrCast(self));
    }

    pub fn IsRunning(self: ?*anyopaque, ) bool {
        return qtc.QFutureWatcherBase_IsRunning(@ptrCast(self));
    }

    pub fn IsCanceled(self: ?*anyopaque, ) bool {
        return qtc.QFutureWatcherBase_IsCanceled(@ptrCast(self));
    }

    pub fn IsPaused(self: ?*anyopaque, ) bool {
        return qtc.QFutureWatcherBase_IsPaused(@ptrCast(self));
    }

    pub fn IsSuspending(self: ?*anyopaque, ) bool {
        return qtc.QFutureWatcherBase_IsSuspending(@ptrCast(self));
    }

    pub fn IsSuspended(self: ?*anyopaque, ) bool {
        return qtc.QFutureWatcherBase_IsSuspended(@ptrCast(self));
    }

    pub fn WaitForFinished(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_WaitForFinished(@ptrCast(self));
    }

    pub fn SetPendingResultsLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QFutureWatcherBase_SetPendingResultsLimit(@ptrCast(self), limit);
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_Event(@ptrCast(self), @ptrCast(event));
    }

    pub fn Started(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Started(@ptrCast(self));
    }

    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Finished(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Finished(@ptrCast(self));
    }

    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Canceled(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Canceled(@ptrCast(self));
    }

    pub fn OnCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Canceled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Paused(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Paused(@ptrCast(self));
    }

    pub fn OnPaused(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Paused(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Suspending(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Suspending(@ptrCast(self));
    }

    pub fn OnSuspending(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspending(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Suspended(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Suspended(@ptrCast(self));
    }

    pub fn OnSuspended(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspended(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Resumed(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Resumed(@ptrCast(self));
    }

    pub fn OnResumed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Resumed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ResultReadyAt(self: ?*anyopaque, resultIndex: i32) void {
        qtc.QFutureWatcherBase_ResultReadyAt(@ptrCast(self), resultIndex);
    }

    pub fn OnResultReadyAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultReadyAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ResultsReadyAt(self: ?*anyopaque, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureWatcherBase_ResultsReadyAt(@ptrCast(self), beginIndex, endIndex);
    }

    pub fn OnResultsReadyAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultsReadyAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ProgressRangeChanged(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QFutureWatcherBase_ProgressRangeChanged(@ptrCast(self), minimum, maximum);
    }

    pub fn OnProgressRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressRangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ProgressValueChanged(self: ?*anyopaque, progressValue: i32) void {
        qtc.QFutureWatcherBase_ProgressValueChanged(@ptrCast(self), progressValue);
    }

    pub fn OnProgressValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ProgressTextChanged(self: ?*anyopaque, progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
    .len = progressText.len,
    .data = progressText.ptr,
};
qtc.QFutureWatcherBase_ProgressTextChanged(@ptrCast(self), progressText_str);
    }

    pub fn OnProgressTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Cancel(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Cancel(@ptrCast(self));
    }

    pub fn SetSuspended(self: ?*anyopaque, suspendVal: bool) void {
        qtc.QFutureWatcherBase_SetSuspended(@ptrCast(self), suspendVal);
    }

    pub fn Suspend(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Suspend(@ptrCast(self));
    }

    pub fn Resume(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Resume(@ptrCast(self));
    }

    pub fn ToggleSuspended(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_ToggleSuspended(@ptrCast(self));
    }

    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QFutureWatcherBase_SetPaused(@ptrCast(self), paused);
    }

    pub fn Pause(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_Pause(@ptrCast(self));
    }

    pub fn TogglePaused(self: ?*anyopaque, ) void {
        qtc.QFutureWatcherBase_TogglePaused(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFutureWatcherBase_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFutureWatcherBase_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Delete(@ptrCast(self));
    }
};
