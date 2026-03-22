const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpushbutton.html
pub const qpushbutton = struct {

    /// New constructs a new QPushButton object.
    pub fn New(parent: ?*anyopaque) QtC.QPushButton {
        return qtc.QPushButton_new(@ptrCast(parent));
    }


    /// New2 constructs a new QPushButton object.
    pub fn New2() QtC.QPushButton {
        return qtc.QPushButton_new2();
    }


    /// New3 constructs a new QPushButton object.
    pub fn New3(text: []const u8) QtC.QPushButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPushButton_new3(text_str);
    }


    /// New4 constructs a new QPushButton object.
    pub fn New4(icon: ?*anyopaque, text: []const u8) QtC.QPushButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPushButton_new4(@ptrCast(icon), text_str);
    }


    /// New5 constructs a new QPushButton object.
    pub fn New5(text: []const u8, parent: ?*anyopaque) QtC.QPushButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPushButton_new5(text_str, @ptrCast(parent));
    }


    /// New6 constructs a new QPushButton object.
    pub fn New6(icon: ?*anyopaque, text: []const u8, parent: ?*anyopaque) QtC.QPushButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPushButton_new6(@ptrCast(icon), text_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPushButton_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpushbutton.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QPushButton_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QPushButton_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QPushButton_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QPushButton_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QPushButton_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QPushButton_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn AutoDefault(self: ?*anyopaque, ) bool {
        return qtc.QPushButton_AutoDefault(@ptrCast(self));
    }

    pub fn SetAutoDefault(self: ?*anyopaque, autoDefault: bool) void {
        qtc.QPushButton_SetAutoDefault(@ptrCast(self), autoDefault);
    }

    pub fn IsDefault(self: ?*anyopaque, ) bool {
        return qtc.QPushButton_IsDefault(@ptrCast(self));
    }

    pub fn SetDefault(self: ?*anyopaque, defaultVal: bool) void {
        qtc.QPushButton_SetDefault(@ptrCast(self), defaultVal);
    }

    pub fn SetMenu(self: ?*anyopaque, menu: ?*anyopaque) void {
        qtc.QPushButton_SetMenu(@ptrCast(self), @ptrCast(menu));
    }

    pub fn Menu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QPushButton_Menu(@ptrCast(self));
    }

    pub fn SetFlat(self: ?*anyopaque, flat: bool) void {
        qtc.QPushButton_SetFlat(@ptrCast(self), flat);
    }

    pub fn IsFlat(self: ?*anyopaque, ) bool {
        return qtc.QPushButton_IsFlat(@ptrCast(self));
    }

    pub fn ShowMenu(self: ?*anyopaque, ) void {
        qtc.QPushButton_ShowMenu(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPushButton_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPushButton_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPushButton_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPushButton_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPushButton_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPushButton_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPushButton_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPushButton_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPushButton_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QPushButton_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPushButton_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QPushButton_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn HitButton(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QPushButton_HitButton(@ptrCast(self), @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnHitButton(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPushButton_OnHitButton(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitButton(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QPushButton_QBaseHitButton(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPushButton_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpushbutton.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPushButton_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpushbutton.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPushButton_Delete(@ptrCast(self));
    }
};
