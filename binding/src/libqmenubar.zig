const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmenubar.html
pub const qmenubar = struct {

    /// New constructs a new QMenuBar object.
    pub fn New(parent: ?*anyopaque) QtC.QMenuBar {
        return qtc.QMenuBar_new(@ptrCast(parent));
    }


    /// New2 constructs a new QMenuBar object.
    pub fn New2() QtC.QMenuBar {
        return qtc.QMenuBar_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMenuBar_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmenubar.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddMenu(self: ?*anyopaque, menu: ?*anyopaque) QtC.QAction {
        return qtc.QMenuBar_AddMenu(@ptrCast(self), @ptrCast(menu));
    }

    pub fn AddMenu2(self: ?*anyopaque, title: []const u8) QtC.QMenu {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QMenuBar_AddMenu2(@ptrCast(self), title_str);
    }

    pub fn AddMenu3(self: ?*anyopaque, icon: ?*anyopaque, title: []const u8) QtC.QMenu {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QMenuBar_AddMenu3(@ptrCast(self), @ptrCast(icon), title_str);
    }

    pub fn AddSeparator(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QMenuBar_AddSeparator(@ptrCast(self));
    }

    pub fn InsertSeparator(self: ?*anyopaque, before: ?*anyopaque) QtC.QAction {
        return qtc.QMenuBar_InsertSeparator(@ptrCast(self), @ptrCast(before));
    }

    pub fn InsertMenu(self: ?*anyopaque, before: ?*anyopaque, menu: ?*anyopaque) QtC.QAction {
        return qtc.QMenuBar_InsertMenu(@ptrCast(self), @ptrCast(before), @ptrCast(menu));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QMenuBar_Clear(@ptrCast(self));
    }

    pub fn ActiveAction(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QMenuBar_ActiveAction(@ptrCast(self));
    }

    pub fn SetActiveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenuBar_SetActiveAction(@ptrCast(self), @ptrCast(action));
    }

    pub fn SetDefaultUp(self: ?*anyopaque, defaultUp: bool) void {
        qtc.QMenuBar_SetDefaultUp(@ptrCast(self), defaultUp);
    }

    pub fn IsDefaultUp(self: ?*anyopaque, ) bool {
        return qtc.QMenuBar_IsDefaultUp(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMenuBar_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QMenuBar_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMenuBar_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMenuBar_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QMenuBar_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMenuBar_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QMenuBar_HeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QMenuBar_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QMenuBar_QBaseHeightForWidth(@ptrCast(self), param1);
    }

    pub fn ActionGeometry(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QMenuBar_ActionGeometry(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ActionAt(self: ?*anyopaque, param1: ?*anyopaque) QtC.QAction {
        return qtc.QMenuBar_ActionAt(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetCornerWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QMenuBar_SetCornerWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn CornerWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QMenuBar_CornerWidget(@ptrCast(self));
    }

    pub fn IsNativeMenuBar(self: ?*anyopaque, ) bool {
        return qtc.QMenuBar_IsNativeMenuBar(@ptrCast(self));
    }

    pub fn SetNativeMenuBar(self: ?*anyopaque, nativeMenuBar: bool) void {
        qtc.QMenuBar_SetNativeMenuBar(@ptrCast(self), nativeMenuBar);
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QMenuBar_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMenuBar_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QMenuBar_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn Triggered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenuBar_Triggered(@ptrCast(self), @ptrCast(action));
    }

    pub fn OnTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_Connect_Triggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenuBar_Hovered(@ptrCast(self), @ptrCast(action));
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn LeaveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_LeaveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLeaveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseLeaveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ActionEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_ActionEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseActionEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseActionEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenuBar_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QMenuBar_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMenuBar_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QMenuBar_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QMenuBar_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMenuBar_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QMenuBar_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenuBar_InitStyleOption(@ptrCast(self), @ptrCast(option), @ptrCast(action));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenuBar_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenuBar_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option), @ptrCast(action));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMenuBar_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmenubar.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMenuBar_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmenubar.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCornerWidget2(self: ?*anyopaque, w: ?*anyopaque, corner: i32) void {
        qtc.QMenuBar_SetCornerWidget2(@ptrCast(self), @ptrCast(w), @intCast(corner));
    }

    pub fn CornerWidget1(self: ?*anyopaque, corner: i32) QtC.QWidget {
        return qtc.QMenuBar_CornerWidget1(@ptrCast(self), @intCast(corner));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMenuBar_Delete(@ptrCast(self));
    }
};
