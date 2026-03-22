const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtoolbutton.html
pub const qtoolbutton = struct {

    /// New constructs a new QToolButton object.
    pub fn New(parent: ?*anyopaque) QtC.QToolButton {
        return qtc.QToolButton_new(@ptrCast(parent));
    }


    /// New2 constructs a new QToolButton object.
    pub fn New2() QtC.QToolButton {
        return qtc.QToolButton_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolButton_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbutton.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QToolButton_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QToolButton_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QToolButton_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QToolButton_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QToolButton_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QToolButton_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn ToolButtonStyle(self: ?*anyopaque, ) i32 {
        return qtc.QToolButton_ToolButtonStyle(@ptrCast(self));
    }

    pub fn ArrowType(self: ?*anyopaque, ) i32 {
        return qtc.QToolButton_ArrowType(@ptrCast(self));
    }

    pub fn SetArrowType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QToolButton_SetArrowType(@ptrCast(self), @intCast(typeVal));
    }

    pub fn SetMenu(self: ?*anyopaque, menu: ?*anyopaque) void {
        qtc.QToolButton_SetMenu(@ptrCast(self), @ptrCast(menu));
    }

    pub fn Menu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QToolButton_Menu(@ptrCast(self));
    }

    pub fn SetPopupMode(self: ?*anyopaque, mode: i32) void {
        qtc.QToolButton_SetPopupMode(@ptrCast(self), @intCast(mode));
    }

    pub fn PopupMode(self: ?*anyopaque, ) i32 {
        return qtc.QToolButton_PopupMode(@ptrCast(self));
    }

    pub fn DefaultAction(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QToolButton_DefaultAction(@ptrCast(self));
    }

    pub fn SetAutoRaise(self: ?*anyopaque, enable: bool) void {
        qtc.QToolButton_SetAutoRaise(@ptrCast(self), enable);
    }

    pub fn AutoRaise(self: ?*anyopaque, ) bool {
        return qtc.QToolButton_AutoRaise(@ptrCast(self));
    }

    pub fn ShowMenu(self: ?*anyopaque, ) void {
        qtc.QToolButton_ShowMenu(@ptrCast(self));
    }

    pub fn SetToolButtonStyle(self: ?*anyopaque, style: i32) void {
        qtc.QToolButton_SetToolButtonStyle(@ptrCast(self), @intCast(style));
    }

    pub fn SetDefaultAction(self: ?*anyopaque, defaultAction: ?*anyopaque) void {
        qtc.QToolButton_SetDefaultAction(@ptrCast(self), @ptrCast(defaultAction));
    }

    pub fn Triggered(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_Triggered(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_Connect_Triggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QToolButton_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QToolButton_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QToolButton_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ActionEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_ActionEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseActionEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_QBaseActionEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EnterEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_EnterEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEnterEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_QBaseEnterEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn LeaveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_LeaveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLeaveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_QBaseLeaveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolButton_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn HitButton(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QToolButton_HitButton(@ptrCast(self), @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnHitButton(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QToolButton_OnHitButton(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitButton(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QToolButton_QBaseHitButton(@ptrCast(self), @ptrCast(pos));
    }

    pub fn CheckStateSet(self: ?*anyopaque, ) void {
        qtc.QToolButton_CheckStateSet(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCheckStateSet(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnCheckStateSet(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCheckStateSet(self: ?*anyopaque, ) void {
        qtc.QToolButton_QBaseCheckStateSet(@ptrCast(self));
    }

    pub fn NextCheckState(self: ?*anyopaque, ) void {
        qtc.QToolButton_NextCheckState(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextCheckState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnNextCheckState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextCheckState(self: ?*anyopaque, ) void {
        qtc.QToolButton_QBaseNextCheckState(@ptrCast(self));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QToolButton_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolButton_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QToolButton_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolButton_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbutton.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolButton_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbutton.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QToolButton_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/toolbutton.html#types
pub const enums = struct {
    pub const ToolButtonPopupMode = enum {
        pub const DelayedPopup: i32 = 0;
        pub const MenuButtonPopup: i32 = 1;
        pub const InstantPopup: i32 = 2;
    };

};
