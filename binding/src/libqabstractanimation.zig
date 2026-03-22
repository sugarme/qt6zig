const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractanimation.html
pub const qabstractanimation = struct {

    /// New constructs a new QAbstractAnimation object.
    pub fn New() QtC.QAbstractAnimation {
        return qtc.QAbstractAnimation_new();
    }


    /// New2 constructs a new QAbstractAnimation object.
    pub fn New2(parent: ?*anyopaque) QtC.QAbstractAnimation {
        return qtc.QAbstractAnimation_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAnimation_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractanimation.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_State(@ptrCast(self));
    }

    pub fn BindableState(self: ?*anyopaque, ) QBindable<QAbstractAnimation::State> {
        return qtc.QAbstractAnimation_BindableState(@ptrCast(self));
    }

    pub fn Group(self: ?*anyopaque, ) QtC.QAnimationGroup {
        return qtc.QAbstractAnimation_Group(@ptrCast(self));
    }

    pub fn Direction(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_Direction(@ptrCast(self));
    }

    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QAbstractAnimation_SetDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn BindableDirection(self: ?*anyopaque, ) QBindable<Direction> {
        return qtc.QAbstractAnimation_BindableDirection(@ptrCast(self));
    }

    pub fn CurrentTime(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_CurrentTime(@ptrCast(self));
    }

    pub fn BindableCurrentTime(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QAbstractAnimation_BindableCurrentTime(@ptrCast(self));
    }

    pub fn CurrentLoopTime(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_CurrentLoopTime(@ptrCast(self));
    }

    pub fn LoopCount(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_LoopCount(@ptrCast(self));
    }

    pub fn SetLoopCount(self: ?*anyopaque, loopCount: i32) void {
        qtc.QAbstractAnimation_SetLoopCount(@ptrCast(self), loopCount);
    }

    pub fn BindableLoopCount(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QAbstractAnimation_BindableLoopCount(@ptrCast(self));
    }

    pub fn CurrentLoop(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_CurrentLoop(@ptrCast(self));
    }

    pub fn BindableCurrentLoop(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QAbstractAnimation_BindableCurrentLoop(@ptrCast(self));
    }

    pub fn Duration(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_Duration(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDuration(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractAnimation_OnDuration(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDuration(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_QBaseDuration(@ptrCast(self));
    }

    pub fn TotalDuration(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAnimation_TotalDuration(@ptrCast(self));
    }

    pub fn Finished(self: ?*anyopaque, ) void {
        qtc.QAbstractAnimation_Finished(@ptrCast(self));
    }

    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StateChanged(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_StateChanged(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentLoopChanged(self: ?*anyopaque, currentLoop: i32) void {
        qtc.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self), currentLoop);
    }

    pub fn OnCurrentLoopChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DirectionChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractAnimation_DirectionChanged(@ptrCast(self), @intCast(param1));
    }

    pub fn OnDirectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QAbstractAnimation_Start(@ptrCast(self));
    }

    pub fn Pause(self: ?*anyopaque, ) void {
        qtc.QAbstractAnimation_Pause(@ptrCast(self));
    }

    pub fn Resume(self: ?*anyopaque, ) void {
        qtc.QAbstractAnimation_Resume(@ptrCast(self));
    }

    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QAbstractAnimation_SetPaused(@ptrCast(self), paused);
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QAbstractAnimation_Stop(@ptrCast(self));
    }

    pub fn SetCurrentTime(self: ?*anyopaque, msecs: i32) void {
        qtc.QAbstractAnimation_SetCurrentTime(@ptrCast(self), msecs);
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractAnimation_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractAnimation_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractAnimation_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UpdateCurrentTime(self: ?*anyopaque, currentTime: i32) void {
        qtc.QAbstractAnimation_UpdateCurrentTime(@ptrCast(self), currentTime);
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCurrentTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_OnUpdateCurrentTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCurrentTime(self: ?*anyopaque, currentTime: i32) void {
        qtc.QAbstractAnimation_QBaseUpdateCurrentTime(@ptrCast(self), currentTime);
    }

    pub fn UpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_UpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_OnUpdateState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_QBaseUpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    pub fn UpdateDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QAbstractAnimation_UpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateDirection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_OnUpdateDirection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QAbstractAnimation_QBaseUpdateDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAnimation_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractanimation.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAnimation_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractanimation.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Start1(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractAnimation_Start1(@ptrCast(self), @intCast(policy));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractAnimation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qanimationdriver.html
pub const qanimationdriver = struct {

    /// New constructs a new QAnimationDriver object.
    pub fn New() QtC.QAnimationDriver {
        return qtc.QAnimationDriver_new();
    }


    /// New2 constructs a new QAnimationDriver object.
    pub fn New2(parent: ?*anyopaque) QtC.QAnimationDriver {
        return qtc.QAnimationDriver_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnimationDriver_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanimationdriver.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Advance(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_Advance(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAdvance(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAnimationDriver_OnAdvance(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAdvance(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_QBaseAdvance(@ptrCast(self));
    }

    pub fn Install(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_Install(@ptrCast(self));
    }

    pub fn Uninstall(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_Uninstall(@ptrCast(self));
    }

    pub fn IsRunning(self: ?*anyopaque, ) bool {
        return qtc.QAnimationDriver_IsRunning(@ptrCast(self));
    }

    pub fn Elapsed(self: ?*anyopaque, ) i64 {
        return qtc.QAnimationDriver_Elapsed(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnElapsed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QAnimationDriver_OnElapsed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseElapsed(self: ?*anyopaque, ) i64 {
        return qtc.QAnimationDriver_QBaseElapsed(@ptrCast(self));
    }

    pub fn Started(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_Started(@ptrCast(self));
    }

    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAnimationDriver_Connect_Started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Stopped(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_Stopped(@ptrCast(self));
    }

    pub fn OnStopped(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAnimationDriver_Connect_Stopped(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AdvanceAnimation(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_AdvanceAnimation(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAdvanceAnimation(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAnimationDriver_OnAdvanceAnimation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAdvanceAnimation(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_QBaseAdvanceAnimation(@ptrCast(self));
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_Start(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStart(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAnimationDriver_OnStart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStart(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_QBaseStart(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_Stop(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStop(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAnimationDriver_OnStop(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStop(self: ?*anyopaque, ) void {
        qtc.QAnimationDriver_QBaseStop(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnimationDriver_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanimationdriver.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnimationDriver_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanimationdriver.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAnimationDriver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractanimation.html#types
pub const enums = struct {
    pub const Direction = enum {
        pub const Forward: i32 = 0;
        pub const Backward: i32 = 1;
    };

    pub const State = enum {
        pub const Stopped: i32 = 0;
        pub const Paused: i32 = 1;
        pub const Running: i32 = 2;
    };

    pub const DeletionPolicy = enum {
        pub const KeepWhenStopped: i32 = 0;
        pub const DeleteWhenStopped: i32 = 1;
    };

};
