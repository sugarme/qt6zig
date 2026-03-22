const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qframe.html
pub const qframe = struct {

    /// New constructs a new QFrame object.
    pub fn New(parent: ?*anyopaque) QtC.QFrame {
        return qtc.QFrame_new(@ptrCast(parent));
    }


    /// New2 constructs a new QFrame object.
    pub fn New2() QtC.QFrame {
        return qtc.QFrame_new2();
    }


    /// New3 constructs a new QFrame object.
    pub fn New3(parent: ?*anyopaque, f: i64) QtC.QFrame {
        return qtc.QFrame_new3(@ptrCast(parent), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFrame_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qframe.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FrameStyle(self: ?*anyopaque, ) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), frameStyle);
    }

    pub fn FrameWidth(self: ?*anyopaque, ) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QFrame_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QFrame_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QFrame_QBaseSizeHint(@ptrCast(self));
    }

    pub fn FrameShape(self: ?*anyopaque, ) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    pub fn FrameShadow(self: ?*anyopaque, ) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    pub fn LineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), lineWidth);
    }

    pub fn MidLineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), midLineWidth);
    }

    pub fn FrameRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QFrame_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFrame_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QFrame_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFrame_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFrame_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFrame_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFrame_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFrame_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFrame_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFrame_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFrame_OnDrawFrame(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFrame_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QFrame_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFrame_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QFrame_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFrame_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qframe.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFrame_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qframe.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/frame.html#types
pub const enums = struct {
    pub const Shape = enum {
        pub const NoFrame: i32 = 0;
        pub const Box: i32 = 1;
        pub const Panel: i32 = 2;
        pub const WinPanel: i32 = 3;
        pub const HLine: i32 = 4;
        pub const VLine: i32 = 5;
        pub const StyledPanel: i32 = 6;
    };

    pub const Shadow = enum {
        pub const Plain: i32 = 16;
        pub const Raised: i32 = 32;
        pub const Sunken: i32 = 48;
    };

    pub const StyleMask = enum {
        pub const Shadow_Mask: i32 = 240;
        pub const Shape_Mask: i32 = 15;
    };

};
