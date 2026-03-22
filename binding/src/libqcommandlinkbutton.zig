const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcommandlinkbutton.html
pub const qcommandlinkbutton = struct {

    /// New constructs a new QCommandLinkButton object.
    pub fn New(parent: ?*anyopaque) QtC.QCommandLinkButton {
        return qtc.QCommandLinkButton_new(@ptrCast(parent));
    }


    /// New2 constructs a new QCommandLinkButton object.
    pub fn New2() QtC.QCommandLinkButton {
        return qtc.QCommandLinkButton_new2();
    }


    /// New3 constructs a new QCommandLinkButton object.
    pub fn New3(text: []const u8) QtC.QCommandLinkButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QCommandLinkButton_new3(text_str);
    }


    /// New4 constructs a new QCommandLinkButton object.
    pub fn New4(text: []const u8, description: []const u8) QtC.QCommandLinkButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
return qtc.QCommandLinkButton_new4(text_str, description_str);
    }


    /// New5 constructs a new QCommandLinkButton object.
    pub fn New5(text: []const u8, parent: ?*anyopaque) QtC.QCommandLinkButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QCommandLinkButton_new5(text_str, @ptrCast(parent));
    }


    /// New6 constructs a new QCommandLinkButton object.
    pub fn New6(text: []const u8, description: []const u8, parent: ?*anyopaque) QtC.QCommandLinkButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
return qtc.QCommandLinkButton_new6(text_str, description_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLinkButton_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlinkbutton.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLinkButton_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlinkbutton.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QCommandLinkButton_SetDescription(@ptrCast(self), description_str);
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCommandLinkButton_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QCommandLinkButton_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCommandLinkButton_QBaseSizeHint(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QCommandLinkButton_HeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QCommandLinkButton_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QCommandLinkButton_QBaseHeightForWidth(@ptrCast(self), param1);
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCommandLinkButton_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QCommandLinkButton_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCommandLinkButton_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QCommandLinkButton_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommandLinkButton_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QCommandLinkButton_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QCommandLinkButton_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCommandLinkButton_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QCommandLinkButton_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCommandLinkButton_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommandLinkButton_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCommandLinkButton_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLinkButton_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlinkbutton.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLinkButton_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlinkbutton.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCommandLinkButton_Delete(@ptrCast(self));
    }
};
