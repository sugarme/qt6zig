const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdial.html
pub const qdial = struct {

    /// New constructs a new QDial object.
    pub fn New(parent: ?*anyopaque) QtC.QDial {
        return qtc.QDial_new(@ptrCast(parent));
    }


    /// New2 constructs a new QDial object.
    pub fn New2() QtC.QDial {
        return qtc.QDial_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDial_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdial.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Wrapping(self: ?*anyopaque, ) bool {
        return qtc.QDial_Wrapping(@ptrCast(self));
    }

    pub fn NotchSize(self: ?*anyopaque, ) i32 {
        return qtc.QDial_NotchSize(@ptrCast(self));
    }

    pub fn SetNotchTarget(self: ?*anyopaque, target: f64) void {
        qtc.QDial_SetNotchTarget(@ptrCast(self), target);
    }

    pub fn NotchTarget(self: ?*anyopaque, ) f64 {
        return qtc.QDial_NotchTarget(@ptrCast(self));
    }

    pub fn NotchesVisible(self: ?*anyopaque, ) bool {
        return qtc.QDial_NotchesVisible(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDial_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QDial_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDial_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDial_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QDial_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDial_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SetNotchesVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QDial_SetNotchesVisible(@ptrCast(self), visible);
    }

    pub fn SetWrapping(self: ?*anyopaque, on: bool) void {
        qtc.QDial_SetWrapping(@ptrCast(self), on);
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QDial_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDial_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QDial_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ResizeEvent(self: ?*anyopaque, re: ?*anyopaque) void {
        qtc.QDial_ResizeEvent(@ptrCast(self), @ptrCast(re));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDial_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, re: ?*anyopaque) void {
        qtc.QDial_QBaseResizeEvent(@ptrCast(self), @ptrCast(re));
    }

    pub fn PaintEvent(self: ?*anyopaque, pe: ?*anyopaque) void {
        qtc.QDial_PaintEvent(@ptrCast(self), @ptrCast(pe));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDial_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, pe: ?*anyopaque) void {
        qtc.QDial_QBasePaintEvent(@ptrCast(self), @ptrCast(pe));
    }

    pub fn MousePressEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        qtc.QDial_MousePressEvent(@ptrCast(self), @ptrCast(me));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDial_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        qtc.QDial_QBaseMousePressEvent(@ptrCast(self), @ptrCast(me));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        qtc.QDial_MouseReleaseEvent(@ptrCast(self), @ptrCast(me));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDial_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        qtc.QDial_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(me));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        qtc.QDial_MouseMoveEvent(@ptrCast(self), @ptrCast(me));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDial_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        qtc.QDial_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(me));
    }

    pub fn SliderChange(self: ?*anyopaque, change: i32) void {
        qtc.QDial_SliderChange(@ptrCast(self), @intCast(change));
    }

    /// Allows for overriding the related default method
    pub fn OnSliderChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDial_OnSliderChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSliderChange(self: ?*anyopaque, change: i32) void {
        qtc.QDial_QBaseSliderChange(@ptrCast(self), @intCast(change));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QDial_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDial_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QDial_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDial_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdial.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDial_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdial.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDial_Delete(@ptrCast(self));
    }
};
