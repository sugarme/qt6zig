const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpauseanimation.html
pub const qpauseanimation = struct {

    /// New constructs a new QPauseAnimation object.
    pub fn New() QtC.QPauseAnimation {
        return qtc.QPauseAnimation_new();
    }


    /// New2 constructs a new QPauseAnimation object.
    pub fn New2(msecs: i32) QtC.QPauseAnimation {
        return qtc.QPauseAnimation_new2(msecs);
    }


    /// New3 constructs a new QPauseAnimation object.
    pub fn New3(parent: ?*anyopaque) QtC.QPauseAnimation {
        return qtc.QPauseAnimation_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QPauseAnimation object.
    pub fn New4(msecs: i32, parent: ?*anyopaque) QtC.QPauseAnimation {
        return qtc.QPauseAnimation_new4(msecs, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPauseAnimation_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpauseanimation.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Duration(self: ?*anyopaque, ) i32 {
        return qtc.QPauseAnimation_Duration(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDuration(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPauseAnimation_OnDuration(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDuration(self: ?*anyopaque, ) i32 {
        return qtc.QPauseAnimation_QBaseDuration(@ptrCast(self));
    }

    pub fn SetDuration(self: ?*anyopaque, msecs: i32) void {
        qtc.QPauseAnimation_SetDuration(@ptrCast(self), msecs);
    }

    pub fn BindableDuration(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QPauseAnimation_BindableDuration(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPauseAnimation_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPauseAnimation_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPauseAnimation_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn UpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        qtc.QPauseAnimation_UpdateCurrentTime(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCurrentTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPauseAnimation_OnUpdateCurrentTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        qtc.QPauseAnimation_QBaseUpdateCurrentTime(@ptrCast(self), param1);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPauseAnimation_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpauseanimation.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPauseAnimation_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpauseanimation.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPauseAnimation_Delete(@ptrCast(self));
    }
};
