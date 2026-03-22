const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpaintdevicewindow.html
pub const qpaintdevicewindow = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPaintDeviceWindow_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpaintdevicewindow.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Update(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_Update(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Update2(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_Update2(@ptrCast(self), @ptrCast(region));
    }

    pub fn Update3(self: ?*anyopaque, ) void {
        qtc.QPaintDeviceWindow_Update3(@ptrCast(self));
    }

    pub fn ExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_ExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnExposeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintDeviceWindow_OnExposeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_QBaseExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintDeviceWindow_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QPaintDeviceWindow_Metric(@ptrCast(self), @intCast(metric));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPaintDeviceWindow_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QPaintDeviceWindow_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPaintDeviceWindow_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPaintDeviceWindow_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPaintDeviceWindow_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPaintDeviceWindow_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpaintdevicewindow.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPaintDeviceWindow_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpaintdevicewindow.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_Delete(@ptrCast(self));
    }
};
