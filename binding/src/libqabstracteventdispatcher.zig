const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstracteventdispatcher.html
pub const qabstracteventdispatcher = struct {

    /// New constructs a new QAbstractEventDispatcher object.
    pub fn New() QtC.QAbstractEventDispatcher {
        return qtc.QAbstractEventDispatcher_new();
    }


    /// New2 constructs a new QAbstractEventDispatcher object.
    pub fn New2(parent: ?*anyopaque) QtC.QAbstractEventDispatcher {
        return qtc.QAbstractEventDispatcher_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractEventDispatcher_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Instance() QtC.QAbstractEventDispatcher {
        return qtc.QAbstractEventDispatcher_Instance();
    }

    pub fn ProcessEvents(self: ?*anyopaque, flags: i32) bool {
        return qtc.QAbstractEventDispatcher_ProcessEvents(@ptrCast(self), @intCast(flags));
    }

    pub fn RegisterSocketNotifier(self: ?*anyopaque, notifier: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RegisterSocketNotifier(@ptrCast(self), @ptrCast(notifier));
    }

    pub fn UnregisterSocketNotifier(self: ?*anyopaque, notifier: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_UnregisterSocketNotifier(@ptrCast(self), @ptrCast(notifier));
    }

    pub fn RegisterTimer2(self: ?*anyopaque, interval: i64, timerType: i32, object: ?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcher_RegisterTimer2(@ptrCast(self), interval, @intCast(timerType), @ptrCast(object));
    }

    pub fn RegisterTimer3(self: ?*anyopaque, timerId: i32, interval: i64, timerType: i32, object: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RegisterTimer3(@ptrCast(self), timerId, interval, @intCast(timerType), @ptrCast(object));
    }

    pub fn UnregisterTimer(self: ?*anyopaque, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer(@ptrCast(self), timerId);
    }

    pub fn UnregisterTimers(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimers(@ptrCast(self), @ptrCast(object));
    }

    pub fn RegisteredTimers(self: ?*anyopaque, object: ?*anyopaque) []const u8 {
        return qtc.QAbstractEventDispatcher_RegisteredTimers(@ptrCast(self), @ptrCast(object));
    }

    pub fn RemainingTime(self: ?*anyopaque, timerId: i32) i32 {
        return qtc.QAbstractEventDispatcher_RemainingTime(@ptrCast(self), timerId);
    }

    pub fn UnregisterTimer2(self: ?*anyopaque, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer2(@ptrCast(self), @intCast(timerId));
    }

    pub fn TimersForObject(self: ?*anyopaque, object: ?*anyopaque) []const u8 {
        return qtc.QAbstractEventDispatcher_TimersForObject(@ptrCast(self), @ptrCast(object));
    }

    pub fn WakeUp(self: ?*anyopaque, ) void {
        qtc.QAbstractEventDispatcher_WakeUp(@ptrCast(self));
    }

    pub fn Interrupt(self: ?*anyopaque, ) void {
        qtc.QAbstractEventDispatcher_Interrupt(@ptrCast(self));
    }

    pub fn StartingUp(self: ?*anyopaque, ) void {
        qtc.QAbstractEventDispatcher_StartingUp(@ptrCast(self));
    }

    pub fn ClosingDown(self: ?*anyopaque, ) void {
        qtc.QAbstractEventDispatcher_ClosingDown(@ptrCast(self));
    }

    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    pub fn FilterNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QAbstractEventDispatcher_FilterNativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    pub fn AboutToBlock(self: ?*anyopaque, ) void {
        qtc.QAbstractEventDispatcher_AboutToBlock(@ptrCast(self));
    }

    pub fn OnAboutToBlock(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_AboutToBlock(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Awake(self: ?*anyopaque, ) void {
        qtc.QAbstractEventDispatcher_Awake(@ptrCast(self));
    }

    pub fn OnAwake(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_Awake(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractEventDispatcher_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractEventDispatcher_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Instance1(thread: ?*anyopaque) QtC.QAbstractEventDispatcher {
        return qtc.QAbstractEventDispatcher_Instance1(@ptrCast(thread));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html
pub const qabstracteventdispatcherv2 = struct {

    /// New constructs a new QAbstractEventDispatcherV2 object.
    pub fn New() QtC.QAbstractEventDispatcherV2 {
        return qtc.QAbstractEventDispatcherV2_new();
    }


    /// New2 constructs a new QAbstractEventDispatcherV2 object.
    pub fn New2(parent: ?*anyopaque) QtC.QAbstractEventDispatcherV2 {
        return qtc.QAbstractEventDispatcherV2_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractEventDispatcherV2_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UnregisterTimer(self: ?*anyopaque, timerId: i32) bool {
        return qtc.QAbstractEventDispatcherV2_UnregisterTimer(@ptrCast(self), @intCast(timerId));
    }

    pub fn TimersForObject(self: ?*anyopaque, object: ?*anyopaque) []const u8 {
        return qtc.QAbstractEventDispatcherV2_TimersForObject(@ptrCast(self), @ptrCast(object));
    }

    pub fn ProcessEventsWithDeadline(self: ?*anyopaque, flags: i32, deadline: QtC.QDeadlineTimer) bool {
        return qtc.QAbstractEventDispatcherV2_ProcessEventsWithDeadline(@ptrCast(self), @intCast(flags), @ptrCast(deadline));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractEventDispatcherV2_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractEventDispatcherV2_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcherV2_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html
pub const qabstracteventdispatcher__timerinfo = struct {

    /// New constructs a new QAbstractEventDispatcher::TimerInfo object.
    pub fn New(other: ?*anyopaque) QtC.QAbstractEventDispatcher__TimerInfo {
        return qtc.QAbstractEventDispatcher__TimerInfo_new(@ptrCast(other));
    }


    /// New2 constructs a new QAbstractEventDispatcher::TimerInfo object.
    pub fn New2(other: ?*anyopaque) QtC.QAbstractEventDispatcher__TimerInfo {
        return qtc.QAbstractEventDispatcher__TimerInfo_new2(@ptrCast(other));
    }


    /// New3 constructs a new QAbstractEventDispatcher::TimerInfo object.
    pub fn New3(id: i32, i: i32, t: i32) QtC.QAbstractEventDispatcher__TimerInfo {
        return qtc.QAbstractEventDispatcher__TimerInfo_new3(id, i, @intCast(t));
    }


    /// New4 constructs a new QAbstractEventDispatcher::TimerInfo object.
    pub fn New4(param1: ?*anyopaque) QtC.QAbstractEventDispatcher__TimerInfo {
        return qtc.QAbstractEventDispatcher__TimerInfo_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfo_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfo_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn TimerId(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_TimerId(@ptrCast(self));
    }

    pub fn SetTimerId(self: ?*anyopaque, timerId: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetTimerId(@ptrCast(self), timerId);
    }

    pub fn Interval(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_Interval(@ptrCast(self));
    }

    pub fn SetInterval(self: ?*anyopaque, interval: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetInterval(@ptrCast(self), interval);
    }

    pub fn TimerType(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_TimerType(@ptrCast(self));
    }

    pub fn SetTimerType(self: ?*anyopaque, timerType: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetTimerType(@ptrCast(self), @intCast(timerType));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html
pub const qabstracteventdispatcher__timerinfov2 = struct {

    /// New constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
    pub fn New() QtC.QAbstractEventDispatcher__TimerInfoV2 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_new();
    }


    /// New2 constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
    pub fn New2(param1: ?*anyopaque) QtC.QAbstractEventDispatcher__TimerInfoV2 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_new2(@ptrCast(param1));
    }


    pub fn TimerId(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_TimerId(@ptrCast(self));
    }

    pub fn SetTimerId(self: ?*anyopaque, timerId: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_SetTimerId(@ptrCast(self), @intCast(timerId));
    }

    pub fn TimerType(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_TimerType(@ptrCast(self));
    }

    pub fn SetTimerType(self: ?*anyopaque, timerType: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_SetTimerType(@ptrCast(self), @intCast(timerType));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_Delete(@ptrCast(self));
    }
};
