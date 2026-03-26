const std = @import("std");
const QtC = @import("qt6zig");
const qtc = @import("qt6c");


/// https://doc.qt.io/qt-6/qscrollbar.html
pub const qscrollbar = struct {

    /// New constructs a new QScrollBar object.
    pub fn New(parent: ?*anyopaque) QtC.QScrollBar {
        return qtc.QScrollBar_new(@ptrCast(parent));
    }


    /// New2 constructs a new QScrollBar object.
    pub fn New2() QtC.QScrollBar {
        return qtc.QScrollBar_new2();
    }


    /// New3 constructs a new QScrollBar object.
    pub fn New3(param1: i32) QtC.QScrollBar {
        return qtc.QScrollBar_new3(@intCast(param1));
    }


    /// New4 constructs a new QScrollBar object.
    pub fn New4(param1: i32, parent: ?*anyopaque) QtC.QScrollBar {
        return qtc.QScrollBar_new4(@intCast(param1), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScrollBar_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscrollbar.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScrollBar_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QScrollBar_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScrollBar_QBaseSizeHint(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QScrollBar_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QScrollBar_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QScrollBar_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollBar_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollBar_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollBar_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollBar_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollBar_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn HideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_HideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollBar_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_QBaseHideEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SliderChange(self: ?*anyopaque, change: i32) void {
        qtc.QScrollBar_SliderChange(@ptrCast(self), @intCast(change));
    }

    /// Allows for overriding the related default method
    pub fn OnSliderChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QScrollBar_OnSliderChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSliderChange(self: ?*anyopaque, change: i32) void {
        qtc.QScrollBar_QBaseSliderChange(@ptrCast(self), @intCast(change));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollBar_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollBar_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QScrollBar_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollBar_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QScrollBar_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScrollBar_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscrollbar.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScrollBar_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscrollbar.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollBar_Delete(@ptrCast(self));
    }
};
