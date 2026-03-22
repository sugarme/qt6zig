const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmdisubwindow.html
pub const qmdisubwindow = struct {

    /// New constructs a new QMdiSubWindow object.
    pub fn New(parent: ?*anyopaque) QtC.QMdiSubWindow {
        return qtc.QMdiSubWindow_new(@ptrCast(parent));
    }


    /// New2 constructs a new QMdiSubWindow object.
    pub fn New2() QtC.QMdiSubWindow {
        return qtc.QMdiSubWindow_new2();
    }


    /// New3 constructs a new QMdiSubWindow object.
    pub fn New3(parent: ?*anyopaque, flags: i64) QtC.QMdiSubWindow {
        return qtc.QMdiSubWindow_new3(@ptrCast(parent), @intCast(flags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMdiSubWindow_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmdisubwindow.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMdiSubWindow_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QMdiSubWindow_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMdiSubWindow_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMdiSubWindow_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QMdiSubWindow_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMdiSubWindow_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QMdiSubWindow_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QMdiSubWindow_Widget(@ptrCast(self));
    }

    pub fn MaximizedButtonsWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QMdiSubWindow_MaximizedButtonsWidget(@ptrCast(self));
    }

    pub fn MaximizedSystemMenuIconWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QMdiSubWindow_MaximizedSystemMenuIconWidget(@ptrCast(self));
    }

    pub fn IsShaded(self: ?*anyopaque, ) bool {
        return qtc.QMdiSubWindow_IsShaded(@ptrCast(self));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QMdiSubWindow_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, param1: i32) bool {
        return qtc.QMdiSubWindow_TestOption(@ptrCast(self), @intCast(param1));
    }

    pub fn SetKeyboardSingleStep(self: ?*anyopaque, step: i32) void {
        qtc.QMdiSubWindow_SetKeyboardSingleStep(@ptrCast(self), step);
    }

    pub fn KeyboardSingleStep(self: ?*anyopaque, ) i32 {
        return qtc.QMdiSubWindow_KeyboardSingleStep(@ptrCast(self));
    }

    pub fn SetKeyboardPageStep(self: ?*anyopaque, step: i32) void {
        qtc.QMdiSubWindow_SetKeyboardPageStep(@ptrCast(self), step);
    }

    pub fn KeyboardPageStep(self: ?*anyopaque, ) i32 {
        return qtc.QMdiSubWindow_KeyboardPageStep(@ptrCast(self));
    }

    pub fn SetSystemMenu(self: ?*anyopaque, systemMenu: ?*anyopaque) void {
        qtc.QMdiSubWindow_SetSystemMenu(@ptrCast(self), @ptrCast(systemMenu));
    }

    pub fn SystemMenu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QMdiSubWindow_SystemMenu(@ptrCast(self));
    }

    pub fn MdiArea(self: ?*anyopaque, ) QtC.QMdiArea {
        return qtc.QMdiSubWindow_MdiArea(@ptrCast(self));
    }

    pub fn WindowStateChanged(self: ?*anyopaque, oldState: i32, newState: i32) void {
        qtc.QMdiSubWindow_WindowStateChanged(@ptrCast(self), @intCast(oldState), @intCast(newState));
    }

    pub fn OnWindowStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QMdiSubWindow_Connect_WindowStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AboutToActivate(self: ?*anyopaque, ) void {
        qtc.QMdiSubWindow_AboutToActivate(@ptrCast(self));
    }

    pub fn OnAboutToActivate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_Connect_AboutToActivate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShowSystemMenu(self: ?*anyopaque, ) void {
        qtc.QMdiSubWindow_ShowSystemMenu(@ptrCast(self));
    }

    pub fn ShowShaded(self: ?*anyopaque, ) void {
        qtc.QMdiSubWindow_ShowShaded(@ptrCast(self));
    }

    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiSubWindow_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMdiSubWindow_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiSubWindow_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiSubWindow_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMdiSubWindow_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiSubWindow_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ShowEvent(self: ?*anyopaque, showEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_ShowEvent(@ptrCast(self), @ptrCast(showEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, showEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseShowEvent(@ptrCast(self), @ptrCast(showEvent));
    }

    pub fn HideEvent(self: ?*anyopaque, hideEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_HideEvent(@ptrCast(self), @ptrCast(hideEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, hideEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseHideEvent(@ptrCast(self), @ptrCast(hideEvent));
    }

    pub fn ChangeEvent(self: ?*anyopaque, changeEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_ChangeEvent(@ptrCast(self), @ptrCast(changeEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, changeEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseChangeEvent(@ptrCast(self), @ptrCast(changeEvent));
    }

    pub fn CloseEvent(self: ?*anyopaque, closeEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_CloseEvent(@ptrCast(self), @ptrCast(closeEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, closeEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseCloseEvent(@ptrCast(self), @ptrCast(closeEvent));
    }

    pub fn LeaveEvent(self: ?*anyopaque, leaveEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_LeaveEvent(@ptrCast(self), @ptrCast(leaveEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLeaveEvent(self: ?*anyopaque, leaveEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseLeaveEvent(@ptrCast(self), @ptrCast(leaveEvent));
    }

    pub fn ResizeEvent(self: ?*anyopaque, resizeEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_ResizeEvent(@ptrCast(self), @ptrCast(resizeEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, resizeEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(resizeEvent));
    }

    pub fn TimerEvent(self: ?*anyopaque, timerEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_TimerEvent(@ptrCast(self), @ptrCast(timerEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, timerEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseTimerEvent(@ptrCast(self), @ptrCast(timerEvent));
    }

    pub fn MoveEvent(self: ?*anyopaque, moveEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_MoveEvent(@ptrCast(self), @ptrCast(moveEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveEvent(self: ?*anyopaque, moveEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseMoveEvent(@ptrCast(self), @ptrCast(moveEvent));
    }

    pub fn PaintEvent(self: ?*anyopaque, paintEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_PaintEvent(@ptrCast(self), @ptrCast(paintEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, paintEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(paintEvent));
    }

    pub fn MousePressEvent(self: ?*anyopaque, mouseEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_MousePressEvent(@ptrCast(self), @ptrCast(mouseEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, mouseEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseMousePressEvent(@ptrCast(self), @ptrCast(mouseEvent));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, mouseEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(mouseEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, mouseEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(mouseEvent));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, mouseEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_MouseReleaseEvent(@ptrCast(self), @ptrCast(mouseEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, mouseEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(mouseEvent));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, mouseEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_MouseMoveEvent(@ptrCast(self), @ptrCast(mouseEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, mouseEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(mouseEvent));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, keyEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_KeyPressEvent(@ptrCast(self), @ptrCast(keyEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, keyEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(keyEvent));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, contextMenuEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_ContextMenuEvent(@ptrCast(self), @ptrCast(contextMenuEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, contextMenuEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(contextMenuEvent));
    }

    pub fn FocusInEvent(self: ?*anyopaque, focusInEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_FocusInEvent(@ptrCast(self), @ptrCast(focusInEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, focusInEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseFocusInEvent(@ptrCast(self), @ptrCast(focusInEvent));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, focusOutEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_FocusOutEvent(@ptrCast(self), @ptrCast(focusOutEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, focusOutEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(focusOutEvent));
    }

    pub fn ChildEvent(self: ?*anyopaque, childEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_ChildEvent(@ptrCast(self), @ptrCast(childEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiSubWindow_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildEvent(self: ?*anyopaque, childEvent: ?*anyopaque) void {
        qtc.QMdiSubWindow_QBaseChildEvent(@ptrCast(self), @ptrCast(childEvent));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMdiSubWindow_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmdisubwindow.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMdiSubWindow_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmdisubwindow.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QMdiSubWindow_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMdiSubWindow_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/mdisubwindow.html#types
pub const enums = struct {
    pub const SubWindowOption = enum {
        pub const AllowOutsideAreaHorizontally: i32 = 1;
        pub const AllowOutsideAreaVertically: i32 = 2;
        pub const RubberBandResize: i32 = 4;
        pub const RubberBandMove: i32 = 8;
    };

};
