const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrasterwindow.html
pub const qrasterwindow = struct {

    /// New constructs a new QRasterWindow object.
    pub fn New() QtC.QRasterWindow {
        return qtc.QRasterWindow_new();
    }


    /// New2 constructs a new QRasterWindow object.
    pub fn New2(parent: ?*anyopaque) QtC.QRasterWindow {
        return qtc.QRasterWindow_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRasterWindow_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QRasterWindow_Metric(@ptrCast(self), @intCast(metric));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QRasterWindow_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QRasterWindow_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    pub fn Redirected(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QRasterWindow_Redirected(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QRasterWindow_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRedirected(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QRasterWindow_QBaseRedirected(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRasterWindow_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRasterWindow_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRasterWindow_Delete(@ptrCast(self));
    }
};
