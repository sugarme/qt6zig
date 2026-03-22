const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qthreadpool.html
pub const qthreadpool = struct {

    /// New constructs a new QThreadPool object.
    pub fn New() QtC.QThreadPool {
        return qtc.QThreadPool_new();
    }


    /// New2 constructs a new QThreadPool object.
    pub fn New2(parent: ?*anyopaque) QtC.QThreadPool {
        return qtc.QThreadPool_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QThreadPool_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qthreadpool.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GlobalInstance() QtC.QThreadPool {
        return qtc.QThreadPool_GlobalInstance();
    }

    pub fn Start(self: ?*anyopaque, runnable: ?*anyopaque) void {
        qtc.QThreadPool_Start(@ptrCast(self), @ptrCast(runnable));
    }

    pub fn TryStart(self: ?*anyopaque, runnable: ?*anyopaque) bool {
        return qtc.QThreadPool_TryStart(@ptrCast(self), @ptrCast(runnable));
    }

    pub fn StartOnReservedThread(self: ?*anyopaque, runnable: ?*anyopaque) void {
        qtc.QThreadPool_StartOnReservedThread(@ptrCast(self), @ptrCast(runnable));
    }

    pub fn ExpiryTimeout(self: ?*anyopaque, ) i32 {
        return qtc.QThreadPool_ExpiryTimeout(@ptrCast(self));
    }

    pub fn SetExpiryTimeout(self: ?*anyopaque, expiryTimeout: i32) void {
        qtc.QThreadPool_SetExpiryTimeout(@ptrCast(self), expiryTimeout);
    }

    pub fn MaxThreadCount(self: ?*anyopaque, ) i32 {
        return qtc.QThreadPool_MaxThreadCount(@ptrCast(self));
    }

    pub fn SetMaxThreadCount(self: ?*anyopaque, maxThreadCount: i32) void {
        qtc.QThreadPool_SetMaxThreadCount(@ptrCast(self), maxThreadCount);
    }

    pub fn ActiveThreadCount(self: ?*anyopaque, ) i32 {
        return qtc.QThreadPool_ActiveThreadCount(@ptrCast(self));
    }

    pub fn SetStackSize(self: ?*anyopaque, stackSize: u32) void {
        qtc.QThreadPool_SetStackSize(@ptrCast(self), stackSize);
    }

    pub fn StackSize(self: ?*anyopaque, ) u32 {
        return qtc.QThreadPool_StackSize(@ptrCast(self));
    }

    pub fn SetThreadPriority(self: ?*anyopaque, priority: i32) void {
        qtc.QThreadPool_SetThreadPriority(@ptrCast(self), @intCast(priority));
    }

    pub fn ThreadPriority(self: ?*anyopaque, ) i32 {
        return qtc.QThreadPool_ThreadPriority(@ptrCast(self));
    }

    pub fn ReserveThread(self: ?*anyopaque, ) void {
        qtc.QThreadPool_ReserveThread(@ptrCast(self));
    }

    pub fn ReleaseThread(self: ?*anyopaque, ) void {
        qtc.QThreadPool_ReleaseThread(@ptrCast(self));
    }

    pub fn WaitForDone(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QThreadPool_WaitForDone(@ptrCast(self), msecs);
    }

    pub fn WaitForDone2(self: ?*anyopaque, ) bool {
        return qtc.QThreadPool_WaitForDone2(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QThreadPool_Clear(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QThreadPool_Contains(@ptrCast(self), @ptrCast(thread));
    }

    pub fn TryTake(self: ?*anyopaque, runnable: ?*anyopaque) bool {
        return qtc.QThreadPool_TryTake(@ptrCast(self), @ptrCast(runnable));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QThreadPool_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qthreadpool.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QThreadPool_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qthreadpool.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Start2(self: ?*anyopaque, runnable: ?*anyopaque, priority: i32) void {
        qtc.QThreadPool_Start2(@ptrCast(self), @ptrCast(runnable), priority);
    }

    pub fn WaitForDone1(self: ?*anyopaque, deadline: QtC.QDeadlineTimer) bool {
        return qtc.QThreadPool_WaitForDone1(@ptrCast(self), @ptrCast(deadline));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QThreadPool_Delete(@ptrCast(self));
    }
};
