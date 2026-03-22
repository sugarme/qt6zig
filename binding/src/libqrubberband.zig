const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrubberband.html
pub const qrubberband = struct {

    /// New constructs a new QRubberBand object.
    pub fn New(param1: i32) QtC.QRubberBand {
        return qtc.QRubberBand_new(@intCast(param1));
    }


    /// New2 constructs a new QRubberBand object.
    pub fn New2(param1: i32, param2: ?*anyopaque) QtC.QRubberBand {
        return qtc.QRubberBand_new2(@intCast(param1), @ptrCast(param2));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRubberBand_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrubberband.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Shape(self: ?*anyopaque, ) i32 {
        return qtc.QRubberBand_Shape(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRubberBand_SetGeometry(@ptrCast(self), @ptrCast(r));
    }

    pub fn SetGeometry2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QRubberBand_SetGeometry2(@ptrCast(self), x, y, w, h);
    }

    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QRubberBand_Move(@ptrCast(self), x, y);
    }

    pub fn Move2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRubberBand_Move2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QRubberBand_Resize(@ptrCast(self), w, h);
    }

    pub fn Resize2(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QRubberBand_Resize2(@ptrCast(self), @ptrCast(s));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QRubberBand_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QRubberBand_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QRubberBand_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRubberBand_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRubberBand_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRubberBand_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRubberBand_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_MoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRubberBand_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRubberBand_QBaseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QRubberBand_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRubberBand_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QRubberBand_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRubberBand_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrubberband.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRubberBand_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrubberband.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRubberBand_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/rubberband.html#types
pub const enums = struct {
    pub const Shape = enum {
        pub const Line: i32 = 0;
        pub const Rectangle: i32 = 1;
    };

};
