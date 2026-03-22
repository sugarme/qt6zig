const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtimeline.html
pub const qtimeline = struct {

    /// New constructs a new QTimeLine object.
    pub fn New() QtC.QTimeLine {
        return qtc.QTimeLine_new();
    }


    /// New2 constructs a new QTimeLine object.
    pub fn New2(duration: i32) QtC.QTimeLine {
        return qtc.QTimeLine_new2(duration);
    }


    /// New3 constructs a new QTimeLine object.
    pub fn New3(duration: i32, parent: ?*anyopaque) QtC.QTimeLine {
        return qtc.QTimeLine_new3(duration, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeLine_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeline.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_State(@ptrCast(self));
    }

    pub fn LoopCount(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_LoopCount(@ptrCast(self));
    }

    pub fn SetLoopCount(self: ?*anyopaque, count: i32) void {
        qtc.QTimeLine_SetLoopCount(@ptrCast(self), count);
    }

    pub fn BindableLoopCount(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QTimeLine_BindableLoopCount(@ptrCast(self));
    }

    pub fn Direction(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_Direction(@ptrCast(self));
    }

    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QTimeLine_SetDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn BindableDirection(self: ?*anyopaque, ) QBindable<Direction> {
        return qtc.QTimeLine_BindableDirection(@ptrCast(self));
    }

    pub fn Duration(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_Duration(@ptrCast(self));
    }

    pub fn SetDuration(self: ?*anyopaque, duration: i32) void {
        qtc.QTimeLine_SetDuration(@ptrCast(self), duration);
    }

    pub fn BindableDuration(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QTimeLine_BindableDuration(@ptrCast(self));
    }

    pub fn StartFrame(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_StartFrame(@ptrCast(self));
    }

    pub fn SetStartFrame(self: ?*anyopaque, frame: i32) void {
        qtc.QTimeLine_SetStartFrame(@ptrCast(self), frame);
    }

    pub fn EndFrame(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_EndFrame(@ptrCast(self));
    }

    pub fn SetEndFrame(self: ?*anyopaque, frame: i32) void {
        qtc.QTimeLine_SetEndFrame(@ptrCast(self), frame);
    }

    pub fn SetFrameRange(self: ?*anyopaque, startFrame: i32, endFrame: i32) void {
        qtc.QTimeLine_SetFrameRange(@ptrCast(self), startFrame, endFrame);
    }

    pub fn UpdateInterval(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_UpdateInterval(@ptrCast(self));
    }

    pub fn SetUpdateInterval(self: ?*anyopaque, interval: i32) void {
        qtc.QTimeLine_SetUpdateInterval(@ptrCast(self), interval);
    }

    pub fn BindableUpdateInterval(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QTimeLine_BindableUpdateInterval(@ptrCast(self));
    }

    pub fn EasingCurve(self: ?*anyopaque, ) QtC.QEasingCurve {
        return qtc.QTimeLine_EasingCurve(@ptrCast(self));
    }

    pub fn SetEasingCurve(self: ?*anyopaque, curve: ?*anyopaque) void {
        qtc.QTimeLine_SetEasingCurve(@ptrCast(self), @ptrCast(curve));
    }

    pub fn BindableEasingCurve(self: ?*anyopaque, ) QBindable<QEasingCurve> {
        return qtc.QTimeLine_BindableEasingCurve(@ptrCast(self));
    }

    pub fn CurrentTime(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_CurrentTime(@ptrCast(self));
    }

    pub fn BindableCurrentTime(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QTimeLine_BindableCurrentTime(@ptrCast(self));
    }

    pub fn CurrentFrame(self: ?*anyopaque, ) i32 {
        return qtc.QTimeLine_CurrentFrame(@ptrCast(self));
    }

    pub fn CurrentValue(self: ?*anyopaque, ) f64 {
        return qtc.QTimeLine_CurrentValue(@ptrCast(self));
    }

    pub fn FrameForTime(self: ?*anyopaque, msec: i32) i32 {
        return qtc.QTimeLine_FrameForTime(@ptrCast(self), msec);
    }

    pub fn ValueForTime(self: ?*anyopaque, msec: i32) f64 {
        return qtc.QTimeLine_ValueForTime(@ptrCast(self), msec);
    }

    /// Allows for overriding the related default method
    pub fn OnValueForTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) f64) void {
        qtc.QTimeLine_OnValueForTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValueForTime(self: ?*anyopaque, msec: i32) f64 {
        return qtc.QTimeLine_QBaseValueForTime(@ptrCast(self), msec);
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QTimeLine_Start(@ptrCast(self));
    }

    pub fn Resume(self: ?*anyopaque, ) void {
        qtc.QTimeLine_Resume(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QTimeLine_Stop(@ptrCast(self));
    }

    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QTimeLine_SetPaused(@ptrCast(self), paused);
    }

    pub fn SetCurrentTime(self: ?*anyopaque, msec: i32) void {
        qtc.QTimeLine_SetCurrentTime(@ptrCast(self), msec);
    }

    pub fn ToggleDirection(self: ?*anyopaque, ) void {
        qtc.QTimeLine_ToggleDirection(@ptrCast(self));
    }

    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTimeLine_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTimeLine_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTimeLine_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeLine_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeline.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeLine_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeline.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Wrapper to allow calling private signal
    pub fn OnvalueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QTimeLine_Connect_valueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnframeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTimeLine_Connect_frameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnstateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTimeLine_Connect_stateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn Onfinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTimeLine_Connect_finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTimeLine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/timeline.html#types
pub const enums = struct {
    pub const State = enum {
        pub const NotRunning: i32 = 0;
        pub const Paused: i32 = 1;
        pub const Running: i32 = 2;
    };

    pub const Direction = enum {
        pub const Forward: i32 = 0;
        pub const Backward: i32 = 1;
    };

};
