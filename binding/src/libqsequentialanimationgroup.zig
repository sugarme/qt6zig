const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsequentialanimationgroup.html
pub const qsequentialanimationgroup = struct {

    /// New constructs a new QSequentialAnimationGroup object.
    pub fn New() QtC.QSequentialAnimationGroup {
        return qtc.QSequentialAnimationGroup_new();
    }


    /// New2 constructs a new QSequentialAnimationGroup object.
    pub fn New2(parent: ?*anyopaque) QtC.QSequentialAnimationGroup {
        return qtc.QSequentialAnimationGroup_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSequentialAnimationGroup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsequentialanimationgroup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddPause(self: ?*anyopaque, msecs: i32) QtC.QPauseAnimation {
        return qtc.QSequentialAnimationGroup_AddPause(@ptrCast(self), msecs);
    }

    pub fn InsertPause(self: ?*anyopaque, index: i32, msecs: i32) QtC.QPauseAnimation {
        return qtc.QSequentialAnimationGroup_InsertPause(@ptrCast(self), index, msecs);
    }

    pub fn CurrentAnimation(self: ?*anyopaque, ) QtC.QAbstractAnimation {
        return qtc.QSequentialAnimationGroup_CurrentAnimation(@ptrCast(self));
    }

    pub fn BindableCurrentAnimation(self: ?*anyopaque, ) QBindable<QAbstractAnimation *> {
        return qtc.QSequentialAnimationGroup_BindableCurrentAnimation(@ptrCast(self));
    }

    pub fn Duration(self: ?*anyopaque, ) i32 {
        return qtc.QSequentialAnimationGroup_Duration(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDuration(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnDuration(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDuration(self: ?*anyopaque, ) i32 {
        return qtc.QSequentialAnimationGroup_QBaseDuration(@ptrCast(self));
    }

    pub fn CurrentAnimationChanged(self: ?*anyopaque, current: ?*anyopaque) void {
        qtc.QSequentialAnimationGroup_CurrentAnimationChanged(@ptrCast(self), @ptrCast(current));
    }

    pub fn OnCurrentAnimationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_Connect_CurrentAnimationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSequentialAnimationGroup_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSequentialAnimationGroup_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSequentialAnimationGroup_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        qtc.QSequentialAnimationGroup_UpdateCurrentTime(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCurrentTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateCurrentTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        qtc.QSequentialAnimationGroup_QBaseUpdateCurrentTime(@ptrCast(self), param1);
    }

    pub fn UpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QSequentialAnimationGroup_UpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QSequentialAnimationGroup_QBaseUpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    pub fn UpdateDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QSequentialAnimationGroup_UpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateDirection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateDirection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QSequentialAnimationGroup_QBaseUpdateDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSequentialAnimationGroup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsequentialanimationgroup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSequentialAnimationGroup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsequentialanimationgroup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSequentialAnimationGroup_Delete(@ptrCast(self));
    }
};
