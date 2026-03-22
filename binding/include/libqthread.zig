const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qthread.html
pub const qthread = struct {

    /// New constructs a new QThread object.
    pub fn New() QtC.QThread {
        return qtc.QThread_new();
    }


    /// New2 constructs a new QThread object.
    pub fn New2(parent: ?*anyopaque) QtC.QThread {
        return qtc.QThread_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QThread_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qthread.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CurrentThreadId() ?*anyopaque {
        return qtc.QThread_CurrentThreadId();
    }

    pub fn CurrentThread() QtC.QThread {
        return qtc.QThread_CurrentThread();
    }

    pub fn IsMainThread() bool {
        return qtc.QThread_IsMainThread();
    }

    pub fn IdealThreadCount() i32 {
        return qtc.QThread_IdealThreadCount();
    }

    pub fn YieldCurrentThread() void {
        qtc.QThread_YieldCurrentThread();
    }

    pub fn SetPriority(self: ?*anyopaque, priority: i32) void {
        qtc.QThread_SetPriority(@ptrCast(self), @intCast(priority));
    }

    pub fn Priority(self: ?*anyopaque, ) i32 {
        return qtc.QThread_Priority(@ptrCast(self));
    }

    pub fn IsFinished(self: ?*anyopaque, ) bool {
        return qtc.QThread_IsFinished(@ptrCast(self));
    }

    pub fn IsRunning(self: ?*anyopaque, ) bool {
        return qtc.QThread_IsRunning(@ptrCast(self));
    }

    pub fn RequestInterruption(self: ?*anyopaque, ) void {
        qtc.QThread_RequestInterruption(@ptrCast(self));
    }

    pub fn IsInterruptionRequested(self: ?*anyopaque, ) bool {
        return qtc.QThread_IsInterruptionRequested(@ptrCast(self));
    }

    pub fn SetStackSize(self: ?*anyopaque, stackSize: u32) void {
        qtc.QThread_SetStackSize(@ptrCast(self), stackSize);
    }

    pub fn StackSize(self: ?*anyopaque, ) u32 {
        return qtc.QThread_StackSize(@ptrCast(self));
    }

    pub fn EventDispatcher(self: ?*anyopaque, ) QtC.QAbstractEventDispatcher {
        return qtc.QThread_EventDispatcher(@ptrCast(self));
    }

    pub fn SetEventDispatcher(self: ?*anyopaque, eventDispatcher: ?*anyopaque) void {
        qtc.QThread_SetEventDispatcher(@ptrCast(self), @ptrCast(eventDispatcher));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QThread_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QThread_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QThread_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn LoopLevel(self: ?*anyopaque, ) i32 {
        return qtc.QThread_LoopLevel(@ptrCast(self));
    }

    pub fn IsCurrentThread(self: ?*anyopaque, ) bool {
        return qtc.QThread_IsCurrentThread(@ptrCast(self));
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QThread_Start(@ptrCast(self));
    }

    pub fn Terminate(self: ?*anyopaque, ) void {
        qtc.QThread_Terminate(@ptrCast(self));
    }

    pub fn Exit(self: ?*anyopaque, ) void {
        qtc.QThread_Exit(@ptrCast(self));
    }

    pub fn Quit(self: ?*anyopaque, ) void {
        qtc.QThread_Quit(@ptrCast(self));
    }

    pub fn Wait(self: ?*anyopaque, ) bool {
        return qtc.QThread_Wait(@ptrCast(self));
    }

    pub fn Wait2(self: ?*anyopaque, time: unsigned long) bool {
        return qtc.QThread_Wait2(@ptrCast(self), time);
    }

    pub fn Sleep(param1: unsigned long) void {
        qtc.QThread_Sleep(param1);
    }

    pub fn Msleep(param1: unsigned long) void {
        qtc.QThread_Msleep(param1);
    }

    pub fn Usleep(param1: unsigned long) void {
        qtc.QThread_Usleep(param1);
    }

    pub fn Run(self: ?*anyopaque, ) void {
        qtc.QThread_Run(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRun(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QThread_OnRun(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRun(self: ?*anyopaque, ) void {
        qtc.QThread_QBaseRun(@ptrCast(self));
    }

    pub fn Exec(self: ?*anyopaque, ) i32 {
        return qtc.QThread_Exec(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExec(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QThread_OnExec(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExec(self: ?*anyopaque, ) i32 {
        return qtc.QThread_QBaseExec(@ptrCast(self));
    }

    pub fn SetTerminationEnabled(self: ?*anyopaque, ) void {
        qtc.QThread_SetTerminationEnabled(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSetTerminationEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QThread_OnSetTerminationEnabled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetTerminationEnabled(self: ?*anyopaque, ) void {
        qtc.QThread_QBaseSetTerminationEnabled(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QThread_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qthread.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QThread_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qthread.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Start1(self: ?*anyopaque, param1: i32) void {
        qtc.QThread_Start1(@ptrCast(self), @intCast(param1));
    }

    pub fn Exit1(self: ?*anyopaque, retcode: i32) void {
        qtc.QThread_Exit1(@ptrCast(self), retcode);
    }

    pub fn Wait1(self: ?*anyopaque, deadline: QtC.QDeadlineTimer) bool {
        return qtc.QThread_Wait1(@ptrCast(self), @ptrCast(deadline));
    }

    pub fn SetTerminationEnabled1(self: ?*anyopaque, enabled: bool) void {
        qtc.QThread_SetTerminationEnabled1(@ptrCast(self), enabled);
    }

    /// Allows for overriding the related default method
    pub fn OnSetTerminationEnabled1(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QThread_OnSetTerminationEnabled1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetTerminationEnabled1(self: ?*anyopaque, enabled: bool) void {
        qtc.QThread_QBaseSetTerminationEnabled1(@ptrCast(self), enabled);
    }

    /// Wrapper to allow calling private signal
    pub fn Onstarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QThread_Connect_started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn Onfinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QThread_Connect_finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QThread_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/thread.html#types
pub const enums = struct {
    pub const Priority = enum {
        pub const IdlePriority: i32 = 0;
        pub const LowestPriority: i32 = 1;
        pub const LowPriority: i32 = 2;
        pub const NormalPriority: i32 = 3;
        pub const HighPriority: i32 = 4;
        pub const HighestPriority: i32 = 5;
        pub const TimeCriticalPriority: i32 = 6;
        pub const InheritPriority: i32 = 7;
    };

};
