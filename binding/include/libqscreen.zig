const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qscreen.html
pub const qscreen = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Manufacturer(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Manufacturer(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Manufacturer: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Model(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Model(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Model: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SerialNumber(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_SerialNumber(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.SerialNumber: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Depth(self: ?*anyopaque, ) i32 {
        return qtc.QScreen_Depth(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScreen_Size(@ptrCast(self));
    }

    pub fn Geometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QScreen_Geometry(@ptrCast(self));
    }

    pub fn PhysicalSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QScreen_PhysicalSize(@ptrCast(self));
    }

    pub fn PhysicalDotsPerInchX(self: ?*anyopaque, ) f64 {
        return qtc.QScreen_PhysicalDotsPerInchX(@ptrCast(self));
    }

    pub fn PhysicalDotsPerInchY(self: ?*anyopaque, ) f64 {
        return qtc.QScreen_PhysicalDotsPerInchY(@ptrCast(self));
    }

    pub fn PhysicalDotsPerInch(self: ?*anyopaque, ) f64 {
        return qtc.QScreen_PhysicalDotsPerInch(@ptrCast(self));
    }

    pub fn LogicalDotsPerInchX(self: ?*anyopaque, ) f64 {
        return qtc.QScreen_LogicalDotsPerInchX(@ptrCast(self));
    }

    pub fn LogicalDotsPerInchY(self: ?*anyopaque, ) f64 {
        return qtc.QScreen_LogicalDotsPerInchY(@ptrCast(self));
    }

    pub fn LogicalDotsPerInch(self: ?*anyopaque, ) f64 {
        return qtc.QScreen_LogicalDotsPerInch(@ptrCast(self));
    }

    pub fn DevicePixelRatio(self: ?*anyopaque, ) f64 {
        return qtc.QScreen_DevicePixelRatio(@ptrCast(self));
    }

    pub fn AvailableSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScreen_AvailableSize(@ptrCast(self));
    }

    pub fn AvailableGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QScreen_AvailableGeometry(@ptrCast(self));
    }

    pub fn VirtualSiblings(self: ?*anyopaque, ) []const u8 {
        return qtc.QScreen_VirtualSiblings(@ptrCast(self));
    }

    pub fn VirtualSiblingAt(self: ?*anyopaque, point: QtC.QPoint) QtC.QScreen {
        return qtc.QScreen_VirtualSiblingAt(@ptrCast(self), @ptrCast(point));
    }

    pub fn VirtualSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScreen_VirtualSize(@ptrCast(self));
    }

    pub fn VirtualGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QScreen_VirtualGeometry(@ptrCast(self));
    }

    pub fn AvailableVirtualSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScreen_AvailableVirtualSize(@ptrCast(self));
    }

    pub fn AvailableVirtualGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QScreen_AvailableVirtualGeometry(@ptrCast(self));
    }

    pub fn PrimaryOrientation(self: ?*anyopaque, ) i32 {
        return qtc.QScreen_PrimaryOrientation(@ptrCast(self));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QScreen_Orientation(@ptrCast(self));
    }

    pub fn NativeOrientation(self: ?*anyopaque, ) i32 {
        return qtc.QScreen_NativeOrientation(@ptrCast(self));
    }

    pub fn AngleBetween(self: ?*anyopaque, a: i32, b: i32) i32 {
        return qtc.QScreen_AngleBetween(@ptrCast(self), @intCast(a), @intCast(b));
    }

    pub fn TransformBetween(self: ?*anyopaque, a: i32, b: i32, target: ?*anyopaque) QtC.QTransform {
        return qtc.QScreen_TransformBetween(@ptrCast(self), @intCast(a), @intCast(b), @ptrCast(target));
    }

    pub fn MapBetween(self: ?*anyopaque, a: i32, b: i32, rect: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_MapBetween(@ptrCast(self), @intCast(a), @intCast(b), @ptrCast(rect));
    }

    pub fn IsPortrait(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QScreen_IsPortrait(@ptrCast(self), @intCast(orientation));
    }

    pub fn IsLandscape(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QScreen_IsLandscape(@ptrCast(self), @intCast(orientation));
    }

    pub fn GrabWindow(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QScreen_GrabWindow(@ptrCast(self));
    }

    pub fn RefreshRate(self: ?*anyopaque, ) f64 {
        return qtc.QScreen_RefreshRate(@ptrCast(self));
    }

    pub fn GeometryChanged(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QScreen_GeometryChanged(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn OnGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_GeometryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AvailableGeometryChanged(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QScreen_AvailableGeometryChanged(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn OnAvailableGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_AvailableGeometryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PhysicalSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QScreen_PhysicalSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    pub fn OnPhysicalSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_PhysicalSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PhysicalDotsPerInchChanged(self: ?*anyopaque, dpi: f64) void {
        qtc.QScreen_PhysicalDotsPerInchChanged(@ptrCast(self), dpi);
    }

    pub fn OnPhysicalDotsPerInchChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_PhysicalDotsPerInchChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LogicalDotsPerInchChanged(self: ?*anyopaque, dpi: f64) void {
        qtc.QScreen_LogicalDotsPerInchChanged(@ptrCast(self), dpi);
    }

    pub fn OnLogicalDotsPerInchChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_LogicalDotsPerInchChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VirtualGeometryChanged(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QScreen_VirtualGeometryChanged(@ptrCast(self), @ptrCast(rect));
    }

    pub fn OnVirtualGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_VirtualGeometryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PrimaryOrientationChanged(self: ?*anyopaque, orientation: i32) void {
        qtc.QScreen_PrimaryOrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    pub fn OnPrimaryOrientationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QScreen_Connect_PrimaryOrientationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OrientationChanged(self: ?*anyopaque, orientation: i32) void {
        qtc.QScreen_OrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    pub fn OnOrientationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QScreen_Connect_OrientationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RefreshRateChanged(self: ?*anyopaque, refreshRate: f64) void {
        qtc.QScreen_RefreshRateChanged(@ptrCast(self), refreshRate);
    }

    pub fn OnRefreshRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_RefreshRateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GrabWindow1(self: ?*anyopaque, window: usize) QtC.QPixmap {
        return qtc.QScreen_GrabWindow1(@ptrCast(self), window);
    }

    pub fn GrabWindow2(self: ?*anyopaque, window: usize, x: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow2(@ptrCast(self), window, x);
    }

    pub fn GrabWindow3(self: ?*anyopaque, window: usize, x: i32, y: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow3(@ptrCast(self), window, x, y);
    }

    pub fn GrabWindow4(self: ?*anyopaque, window: usize, x: i32, y: i32, w: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow4(@ptrCast(self), window, x, y, w);
    }

    pub fn GrabWindow5(self: ?*anyopaque, window: usize, x: i32, y: i32, w: i32, h: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow5(@ptrCast(self), window, x, y, w, h);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScreen_Delete(@ptrCast(self));
    }
};
