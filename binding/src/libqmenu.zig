const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmenu.html
pub const qmenu = struct {

    /// New constructs a new QMenu object.
    pub fn New(parent: ?*anyopaque) QtC.QMenu {
        return qtc.QMenu_new(@ptrCast(parent));
    }


    /// New2 constructs a new QMenu object.
    pub fn New2() QtC.QMenu {
        return qtc.QMenu_new2();
    }


    /// New3 constructs a new QMenu object.
    pub fn New3(title: []const u8) QtC.QMenu {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QMenu_new3(title_str);
    }


    /// New4 constructs a new QMenu object.
    pub fn New4(title: []const u8, parent: ?*anyopaque) QtC.QMenu {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QMenu_new4(title_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMenu_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmenu.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddAction(self: ?*anyopaque, text: []const u8, receiver: ?*anyopaque, member: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMenu_AddAction(@ptrCast(self), text_str, @ptrCast(receiver), @ptrCast(member), @ptrCast(shortcut));
    }

    pub fn AddAction2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, receiver: ?*anyopaque, member: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMenu_AddAction2(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(receiver), @ptrCast(member), @ptrCast(shortcut));
    }

    pub fn AddMenu(self: ?*anyopaque, menu: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_AddMenu(@ptrCast(self), @ptrCast(menu));
    }

    pub fn AddMenu2(self: ?*anyopaque, title: []const u8) QtC.QMenu {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QMenu_AddMenu2(@ptrCast(self), title_str);
    }

    pub fn AddMenu3(self: ?*anyopaque, icon: ?*anyopaque, title: []const u8) QtC.QMenu {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QMenu_AddMenu3(@ptrCast(self), @ptrCast(icon), title_str);
    }

    pub fn AddSeparator(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QMenu_AddSeparator(@ptrCast(self));
    }

    pub fn AddSection(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMenu_AddSection(@ptrCast(self), text_str);
    }

    pub fn AddSection2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMenu_AddSection2(@ptrCast(self), @ptrCast(icon), text_str);
    }

    pub fn InsertMenu(self: ?*anyopaque, before: ?*anyopaque, menu: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_InsertMenu(@ptrCast(self), @ptrCast(before), @ptrCast(menu));
    }

    pub fn InsertSeparator(self: ?*anyopaque, before: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_InsertSeparator(@ptrCast(self), @ptrCast(before));
    }

    pub fn InsertSection(self: ?*anyopaque, before: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMenu_InsertSection(@ptrCast(self), @ptrCast(before), text_str);
    }

    pub fn InsertSection2(self: ?*anyopaque, before: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMenu_InsertSection2(@ptrCast(self), @ptrCast(before), @ptrCast(icon), text_str);
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QMenu_IsEmpty(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QMenu_Clear(@ptrCast(self));
    }

    pub fn SetTearOffEnabled(self: ?*anyopaque, tearOffEnabled: bool) void {
        qtc.QMenu_SetTearOffEnabled(@ptrCast(self), tearOffEnabled);
    }

    pub fn IsTearOffEnabled(self: ?*anyopaque, ) bool {
        return qtc.QMenu_IsTearOffEnabled(@ptrCast(self));
    }

    pub fn IsTearOffMenuVisible(self: ?*anyopaque, ) bool {
        return qtc.QMenu_IsTearOffMenuVisible(@ptrCast(self));
    }

    pub fn ShowTearOffMenu(self: ?*anyopaque, ) void {
        qtc.QMenu_ShowTearOffMenu(@ptrCast(self));
    }

    pub fn ShowTearOffMenu2(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QMenu_ShowTearOffMenu2(@ptrCast(self), @ptrCast(pos));
    }

    pub fn HideTearOffMenu(self: ?*anyopaque, ) void {
        qtc.QMenu_HideTearOffMenu(@ptrCast(self));
    }

    pub fn SetDefaultAction(self: ?*anyopaque, defaultAction: ?*anyopaque) void {
        qtc.QMenu_SetDefaultAction(@ptrCast(self), @ptrCast(defaultAction));
    }

    pub fn DefaultAction(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QMenu_DefaultAction(@ptrCast(self));
    }

    pub fn SetActiveAction(self: ?*anyopaque, act: ?*anyopaque) void {
        qtc.QMenu_SetActiveAction(@ptrCast(self), @ptrCast(act));
    }

    pub fn ActiveAction(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QMenu_ActiveAction(@ptrCast(self));
    }

    pub fn Popup(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QMenu_Popup(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Exec(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QMenu_Exec(@ptrCast(self));
    }

    pub fn Exec2(self: ?*anyopaque, pos: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_Exec2(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Exec3(actions: []const u8, pos: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_Exec3(@ptrCast(actions), @ptrCast(pos));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMenu_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QMenu_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMenu_QBaseSizeHint(@ptrCast(self));
    }

    pub fn ActionGeometry(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QMenu_ActionGeometry(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ActionAt(self: ?*anyopaque, param1: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_ActionAt(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MenuAction(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QMenu_MenuAction(@ptrCast(self));
    }

    pub fn MenuInAction(action: ?*anyopaque) QtC.QMenu {
        return qtc.QMenu_MenuInAction(@ptrCast(action));
    }

    pub fn Title(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMenu_Title(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmenu.Title: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QMenu_SetTitle(@ptrCast(self), title_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QMenu_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QMenu_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn SetNoReplayFor(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QMenu_SetNoReplayFor(@ptrCast(self), @ptrCast(widget));
    }

    pub fn SeparatorsCollapsible(self: ?*anyopaque, ) bool {
        return qtc.QMenu_SeparatorsCollapsible(@ptrCast(self));
    }

    pub fn SetSeparatorsCollapsible(self: ?*anyopaque, collapse: bool) void {
        qtc.QMenu_SetSeparatorsCollapsible(@ptrCast(self), collapse);
    }

    pub fn ToolTipsVisible(self: ?*anyopaque, ) bool {
        return qtc.QMenu_ToolTipsVisible(@ptrCast(self));
    }

    pub fn SetToolTipsVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QMenu_SetToolTipsVisible(@ptrCast(self), visible);
    }

    pub fn AboutToShow(self: ?*anyopaque, ) void {
        qtc.QMenu_AboutToShow(@ptrCast(self));
    }

    pub fn OnAboutToShow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_Connect_AboutToShow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AboutToHide(self: ?*anyopaque, ) void {
        qtc.QMenu_AboutToHide(@ptrCast(self));
    }

    pub fn OnAboutToHide(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_Connect_AboutToHide(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Triggered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenu_Triggered(@ptrCast(self), @ptrCast(action));
    }

    pub fn OnTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_Connect_Triggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenu_Hovered(@ptrCast(self), @ptrCast(action));
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QMenu_ColumnCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QMenu_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QMenu_QBaseColumnCount(@ptrCast(self));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EnterEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_EnterEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEnterEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseEnterEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn LeaveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_LeaveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLeaveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseLeaveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn HideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_HideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseHideEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ActionEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_ActionEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseActionEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseActionEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMenu_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QMenu_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMenu_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QMenu_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QMenu_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QMenu_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QMenu_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenu_InitStyleOption(@ptrCast(self), @ptrCast(option), @ptrCast(action));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMenu_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QMenu_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option), @ptrCast(action));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMenu_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmenu.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMenu_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmenu.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Popup2(self: ?*anyopaque, pos: ?*anyopaque, at: ?*anyopaque) void {
        qtc.QMenu_Popup2(@ptrCast(self), @ptrCast(pos), @ptrCast(at));
    }

    pub fn Exec22(self: ?*anyopaque, pos: ?*anyopaque, at: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_Exec22(@ptrCast(self), @ptrCast(pos), @ptrCast(at));
    }

    pub fn Exec32(actions: []const u8, pos: ?*anyopaque, at: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_Exec32(@ptrCast(actions), @ptrCast(pos), @ptrCast(at));
    }

    pub fn Exec4(actions: []const u8, pos: ?*anyopaque, at: ?*anyopaque, parent: ?*anyopaque) QtC.QAction {
        return qtc.QMenu_Exec4(@ptrCast(actions), @ptrCast(pos), @ptrCast(at), @ptrCast(parent));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMenu_Delete(@ptrCast(self));
    }
};
