const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtimer.html
pub const qtimer = struct {

    /// New constructs a new QTimer object.
    pub fn New() QtC.QTimer {
        return qtc.QTimer_new();
    }


    /// New2 constructs a new QTimer object.
    pub fn New2(parent: ?*anyopaque) QtC.QTimer {
        return qtc.QTimer_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimer_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimer.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QTimer_IsActive(@ptrCast(self));
    }

    pub fn TimerId(self: ?*anyopaque, ) i32 {
        return qtc.QTimer_TimerId(@ptrCast(self));
    }

    pub fn SetInterval(self: ?*anyopaque, msec: i32) void {
        qtc.QTimer_SetInterval(@ptrCast(self), msec);
    }

    pub fn Interval(self: ?*anyopaque, ) i32 {
        return qtc.QTimer_Interval(@ptrCast(self));
    }

    pub fn RemainingTime(self: ?*anyopaque, ) i32 {
        return qtc.QTimer_RemainingTime(@ptrCast(self));
    }

    pub fn SetTimerType(self: ?*anyopaque, atype: i32) void {
        qtc.QTimer_SetTimerType(@ptrCast(self), @intCast(atype));
    }

    pub fn TimerType(self: ?*anyopaque, ) i32 {
        return qtc.QTimer_TimerType(@ptrCast(self));
    }

    pub fn SetSingleShot(self: ?*anyopaque, singleShot: bool) void {
        qtc.QTimer_SetSingleShot(@ptrCast(self), singleShot);
    }

    pub fn IsSingleShot(self: ?*anyopaque, ) bool {
        return qtc.QTimer_IsSingleShot(@ptrCast(self));
    }

    pub fn SingleShot(msec: i32, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QTimer_SingleShot(msec, @ptrCast(receiver), @ptrCast(member));
    }

    pub fn SingleShot2(msec: i32, timerType: i32, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QTimer_SingleShot2(msec, @intCast(timerType), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Start(self: ?*anyopaque, msec: i32) void {
        qtc.QTimer_Start(@ptrCast(self), msec);
    }

    pub fn Start2(self: ?*anyopaque, ) void {
        qtc.QTimer_Start2(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QTimer_Stop(@ptrCast(self));
    }

    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTimer_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTimer_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTimer_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimer_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimer.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimer_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimer.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Wrapper to allow calling private signal
    pub fn Ontimeout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTimer_Connect_timeout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTimer_Delete(@ptrCast(self));
    }
};
