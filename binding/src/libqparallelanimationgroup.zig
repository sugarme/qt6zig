const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qparallelanimationgroup.html
pub const qparallelanimationgroup = struct {

    /// New constructs a new QParallelAnimationGroup object.
    pub fn New() QtC.QParallelAnimationGroup {
        return qtc.QParallelAnimationGroup_new();
    }


    /// New2 constructs a new QParallelAnimationGroup object.
    pub fn New2(parent: ?*anyopaque) QtC.QParallelAnimationGroup {
        return qtc.QParallelAnimationGroup_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QParallelAnimationGroup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qparallelanimationgroup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Duration(self: ?*anyopaque, ) i32 {
        return qtc.QParallelAnimationGroup_Duration(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDuration(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QParallelAnimationGroup_OnDuration(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDuration(self: ?*anyopaque, ) i32 {
        return qtc.QParallelAnimationGroup_QBaseDuration(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QParallelAnimationGroup_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QParallelAnimationGroup_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QParallelAnimationGroup_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UpdateCurrentTime(self: ?*anyopaque, currentTime: i32) void {
        qtc.QParallelAnimationGroup_UpdateCurrentTime(@ptrCast(self), currentTime);
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCurrentTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnUpdateCurrentTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCurrentTime(self: ?*anyopaque, currentTime: i32) void {
        qtc.QParallelAnimationGroup_QBaseUpdateCurrentTime(@ptrCast(self), currentTime);
    }

    pub fn UpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QParallelAnimationGroup_UpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnUpdateState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QParallelAnimationGroup_QBaseUpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    pub fn UpdateDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QParallelAnimationGroup_UpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateDirection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnUpdateDirection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QParallelAnimationGroup_QBaseUpdateDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QParallelAnimationGroup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qparallelanimationgroup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QParallelAnimationGroup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qparallelanimationgroup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QParallelAnimationGroup_Delete(@ptrCast(self));
    }
};
