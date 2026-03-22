const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qchronotimer.html
pub const qchronotimer = struct {

    /// New constructs a new QChronoTimer object.
    pub fn New() QtC.QChronoTimer {
        return qtc.QChronoTimer_new();
    }


    /// New2 constructs a new QChronoTimer object.
    pub fn New2(parent: ?*anyopaque) QtC.QChronoTimer {
        return qtc.QChronoTimer_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChronoTimer_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchronotimer.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QChronoTimer_IsActive(@ptrCast(self));
    }

    pub fn BindableActive(self: ?*anyopaque, ) QBindable<bool> {
        return qtc.QChronoTimer_BindableActive(@ptrCast(self));
    }

    pub fn Id(self: ?*anyopaque, ) i32 {
        return qtc.QChronoTimer_Id(@ptrCast(self));
    }

    pub fn SetTimerType(self: ?*anyopaque, atype: i32) void {
        qtc.QChronoTimer_SetTimerType(@ptrCast(self), @intCast(atype));
    }

    pub fn TimerType(self: ?*anyopaque, ) i32 {
        return qtc.QChronoTimer_TimerType(@ptrCast(self));
    }

    pub fn BindableTimerType(self: ?*anyopaque, ) QBindable<Qt::TimerType> {
        return qtc.QChronoTimer_BindableTimerType(@ptrCast(self));
    }

    pub fn SetSingleShot(self: ?*anyopaque, singleShot: bool) void {
        qtc.QChronoTimer_SetSingleShot(@ptrCast(self), singleShot);
    }

    pub fn IsSingleShot(self: ?*anyopaque, ) bool {
        return qtc.QChronoTimer_IsSingleShot(@ptrCast(self));
    }

    pub fn BindableSingleShot(self: ?*anyopaque, ) QBindable<bool> {
        return qtc.QChronoTimer_BindableSingleShot(@ptrCast(self));
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QChronoTimer_Start(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QChronoTimer_Stop(@ptrCast(self));
    }

    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QChronoTimer_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QChronoTimer_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QChronoTimer_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChronoTimer_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchronotimer.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChronoTimer_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchronotimer.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Wrapper to allow calling private signal
    pub fn Ontimeout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QChronoTimer_Connect_timeout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QChronoTimer_Delete(@ptrCast(self));
    }
};
