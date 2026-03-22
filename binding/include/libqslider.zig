const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qslider.html
pub const qslider = struct {

    /// New constructs a new QSlider object.
    pub fn New(parent: ?*anyopaque) QtC.QSlider {
        return qtc.QSlider_new(@ptrCast(parent));
    }


    /// New2 constructs a new QSlider object.
    pub fn New2() QtC.QSlider {
        return qtc.QSlider_new2();
    }


    /// New3 constructs a new QSlider object.
    pub fn New3(orientation: i32) QtC.QSlider {
        return qtc.QSlider_new3(@intCast(orientation));
    }


    /// New4 constructs a new QSlider object.
    pub fn New4(orientation: i32, parent: ?*anyopaque) QtC.QSlider {
        return qtc.QSlider_new4(@intCast(orientation), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSlider_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qslider.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSlider_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSlider_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSlider_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSlider_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSlider_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSlider_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SetTickPosition(self: ?*anyopaque, position: i32) void {
        qtc.QSlider_SetTickPosition(@ptrCast(self), @intCast(position));
    }

    pub fn TickPosition(self: ?*anyopaque, ) i32 {
        return qtc.QSlider_TickPosition(@ptrCast(self));
    }

    pub fn SetTickInterval(self: ?*anyopaque, ti: i32) void {
        qtc.QSlider_SetTickInterval(@ptrCast(self), ti);
    }

    pub fn TickInterval(self: ?*anyopaque, ) i32 {
        return qtc.QSlider_TickInterval(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSlider_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSlider_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSlider_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QSlider_PaintEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSlider_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QSlider_QBasePaintEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn MousePressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QSlider_MousePressEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSlider_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QSlider_QBaseMousePressEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QSlider_MouseReleaseEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSlider_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QSlider_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QSlider_MouseMoveEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSlider_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QSlider_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QSlider_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSlider_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QSlider_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSlider_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qslider.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSlider_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qslider.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSlider_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/slider.html#types
pub const enums = struct {
    pub const TickPosition = enum {
        pub const NoTicks: i32 = 0;
        pub const TicksAbove: i32 = 1;
        pub const TicksLeft: i32 = 1;
        pub const TicksBelow: i32 = 2;
        pub const TicksRight: i32 = 2;
        pub const TicksBothSides: i32 = 3;
    };

};
