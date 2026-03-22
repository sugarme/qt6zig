const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qeventloop.html
pub const qeventloop = struct {

    /// New constructs a new QEventLoop object.
    pub fn New() QtC.QEventLoop {
        return qtc.QEventLoop_new();
    }


    /// New2 constructs a new QEventLoop object.
    pub fn New2(parent: ?*anyopaque) QtC.QEventLoop {
        return qtc.QEventLoop_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QEventLoop_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qeventloop.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ProcessEvents(self: ?*anyopaque, ) bool {
        return qtc.QEventLoop_ProcessEvents(@ptrCast(self));
    }

    pub fn ProcessEvents2(self: ?*anyopaque, flags: i32, maximumTime: i32) void {
        qtc.QEventLoop_ProcessEvents2(@ptrCast(self), @intCast(flags), maximumTime);
    }

    pub fn ProcessEvents3(self: ?*anyopaque, flags: i32, deadline: QtC.QDeadlineTimer) void {
        qtc.QEventLoop_ProcessEvents3(@ptrCast(self), @intCast(flags), @ptrCast(deadline));
    }

    pub fn Exec(self: ?*anyopaque, ) i32 {
        return qtc.QEventLoop_Exec(@ptrCast(self));
    }

    pub fn IsRunning(self: ?*anyopaque, ) bool {
        return qtc.QEventLoop_IsRunning(@ptrCast(self));
    }

    pub fn WakeUp(self: ?*anyopaque, ) void {
        qtc.QEventLoop_WakeUp(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QEventLoop_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QEventLoop_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QEventLoop_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Exit(self: ?*anyopaque, ) void {
        qtc.QEventLoop_Exit(@ptrCast(self));
    }

    pub fn Quit(self: ?*anyopaque, ) void {
        qtc.QEventLoop_Quit(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QEventLoop_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qeventloop.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QEventLoop_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qeventloop.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ProcessEvents1(self: ?*anyopaque, flags: i32) bool {
        return qtc.QEventLoop_ProcessEvents1(@ptrCast(self), @intCast(flags));
    }

    pub fn Exec1(self: ?*anyopaque, flags: i32) i32 {
        return qtc.QEventLoop_Exec1(@ptrCast(self), @intCast(flags));
    }

    pub fn Exit1(self: ?*anyopaque, returnCode: i32) void {
        qtc.QEventLoop_Exit1(@ptrCast(self), returnCode);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEventLoop_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qeventlooplocker.html
pub const qeventlooplocker = struct {

    /// New constructs a new QEventLoopLocker object.
    pub fn New() QtC.QEventLoopLocker {
        return qtc.QEventLoopLocker_new();
    }


    /// New2 constructs a new QEventLoopLocker object.
    pub fn New2(loop: ?*anyopaque) QtC.QEventLoopLocker {
        return qtc.QEventLoopLocker_new2(@ptrCast(loop));
    }


    /// New3 constructs a new QEventLoopLocker object.
    pub fn New3(thread: ?*anyopaque) QtC.QEventLoopLocker {
        return qtc.QEventLoopLocker_new3(@ptrCast(thread));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QEventLoopLocker_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEventLoopLocker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/eventloop.html#types
pub const enums = struct {
    pub const ProcessEventsFlag = enum {
        pub const AllEvents: i32 = 0;
        pub const ExcludeUserInputEvents: i32 = 1;
        pub const ExcludeSocketNotifiers: i32 = 2;
        pub const WaitForMoreEvents: i32 = 4;
        pub const X11ExcludeTimers: i32 = 8;
        pub const EventLoopExec: i32 = 32;
        pub const DialogExec: i32 = 64;
        pub const ApplicationExec: i32 = 128;
    };

};
