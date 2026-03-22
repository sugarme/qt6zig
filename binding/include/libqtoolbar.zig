const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtoolbar.html
pub const qtoolbar = struct {

    /// New constructs a new QToolBar object.
    pub fn New(parent: ?*anyopaque) QtC.QToolBar {
        return qtc.QToolBar_new(@ptrCast(parent));
    }


    /// New2 constructs a new QToolBar object.
    pub fn New2(title: []const u8) QtC.QToolBar {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QToolBar_new2(title_str);
    }


    /// New3 constructs a new QToolBar object.
    pub fn New3() QtC.QToolBar {
        return qtc.QToolBar_new3();
    }


    /// New4 constructs a new QToolBar object.
    pub fn New4(title: []const u8, parent: ?*anyopaque) QtC.QToolBar {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QToolBar_new4(title_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolBar_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbar.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QToolBar_SetMovable(@ptrCast(self), movable);
    }

    pub fn IsMovable(self: ?*anyopaque, ) bool {
        return qtc.QToolBar_IsMovable(@ptrCast(self));
    }

    pub fn SetAllowedAreas(self: ?*anyopaque, areas: i32) void {
        qtc.QToolBar_SetAllowedAreas(@ptrCast(self), @intCast(areas));
    }

    pub fn AllowedAreas(self: ?*anyopaque, ) i32 {
        return qtc.QToolBar_AllowedAreas(@ptrCast(self));
    }

    pub fn IsAreaAllowed(self: ?*anyopaque, area: i32) bool {
        return qtc.QToolBar_IsAreaAllowed(@ptrCast(self), @intCast(area));
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QToolBar_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QToolBar_Orientation(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QToolBar_Clear(@ptrCast(self));
    }

    pub fn AddSeparator(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QToolBar_AddSeparator(@ptrCast(self));
    }

    pub fn InsertSeparator(self: ?*anyopaque, before: ?*anyopaque) QtC.QAction {
        return qtc.QToolBar_InsertSeparator(@ptrCast(self), @ptrCast(before));
    }

    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) QtC.QAction {
        return qtc.QToolBar_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn InsertWidget(self: ?*anyopaque, before: ?*anyopaque, widget: ?*anyopaque) QtC.QAction {
        return qtc.QToolBar_InsertWidget(@ptrCast(self), @ptrCast(before), @ptrCast(widget));
    }

    pub fn ActionGeometry(self: ?*anyopaque, action: ?*anyopaque) QtC.QRect {
        return qtc.QToolBar_ActionGeometry(@ptrCast(self), @ptrCast(action));
    }

    pub fn ActionAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QAction {
        return qtc.QToolBar_ActionAt(@ptrCast(self), @ptrCast(p));
    }

    pub fn ActionAt2(self: ?*anyopaque, x: i32, y: i32) QtC.QAction {
        return qtc.QToolBar_ActionAt2(@ptrCast(self), x, y);
    }

    pub fn ToggleViewAction(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QToolBar_ToggleViewAction(@ptrCast(self));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QToolBar_IconSize(@ptrCast(self));
    }

    pub fn ToolButtonStyle(self: ?*anyopaque, ) i32 {
        return qtc.QToolBar_ToolButtonStyle(@ptrCast(self));
    }

    pub fn WidgetForAction(self: ?*anyopaque, action: ?*anyopaque) QtC.QWidget {
        return qtc.QToolBar_WidgetForAction(@ptrCast(self), @ptrCast(action));
    }

    pub fn IsFloatable(self: ?*anyopaque, ) bool {
        return qtc.QToolBar_IsFloatable(@ptrCast(self));
    }

    pub fn SetFloatable(self: ?*anyopaque, floatable: bool) void {
        qtc.QToolBar_SetFloatable(@ptrCast(self), floatable);
    }

    pub fn IsFloating(self: ?*anyopaque, ) bool {
        return qtc.QToolBar_IsFloating(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, iconSize: ?*anyopaque) void {
        qtc.QToolBar_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    pub fn SetToolButtonStyle(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QToolBar_SetToolButtonStyle(@ptrCast(self), @intCast(toolButtonStyle));
    }

    pub fn ActionTriggered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QToolBar_ActionTriggered(@ptrCast(self), @ptrCast(action));
    }

    pub fn OnActionTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolBar_Connect_ActionTriggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MovableChanged(self: ?*anyopaque, movable: bool) void {
        qtc.QToolBar_MovableChanged(@ptrCast(self), movable);
    }

    pub fn OnMovableChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QToolBar_Connect_MovableChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AllowedAreasChanged(self: ?*anyopaque, allowedAreas: i32) void {
        qtc.QToolBar_AllowedAreasChanged(@ptrCast(self), @intCast(allowedAreas));
    }

    pub fn OnAllowedAreasChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QToolBar_Connect_AllowedAreasChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OrientationChanged(self: ?*anyopaque, orientation: i32) void {
        qtc.QToolBar_OrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    pub fn OnOrientationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QToolBar_Connect_OrientationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IconSizeChanged(self: ?*anyopaque, iconSize: ?*anyopaque) void {
        qtc.QToolBar_IconSizeChanged(@ptrCast(self), @ptrCast(iconSize));
    }

    pub fn OnIconSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolBar_Connect_IconSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ToolButtonStyleChanged(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QToolBar_ToolButtonStyleChanged(@ptrCast(self), @intCast(toolButtonStyle));
    }

    pub fn OnToolButtonStyleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QToolBar_Connect_ToolButtonStyleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TopLevelChanged(self: ?*anyopaque, topLevel: bool) void {
        qtc.QToolBar_TopLevelChanged(@ptrCast(self), topLevel);
    }

    pub fn OnTopLevelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QToolBar_Connect_TopLevelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QToolBar_VisibilityChanged(@ptrCast(self), visible);
    }

    pub fn OnVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QToolBar_Connect_VisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QToolBar_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolBar_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QToolBar_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QToolBar_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolBar_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QToolBar_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QToolBar_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolBar_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QToolBar_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QToolBar_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QToolBar_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QToolBar_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QToolBar_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolBar_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QToolBar_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolBar_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbar.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolBar_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbar.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QToolBar_Delete(@ptrCast(self));
    }
};
