const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtabbar.html
pub const qtabbar = struct {

    /// New constructs a new QTabBar object.
    pub fn New(parent: ?*anyopaque) QtC.QTabBar {
        return qtc.QTabBar_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTabBar object.
    pub fn New2() QtC.QTabBar {
        return qtc.QTabBar_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabBar_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabbar.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Shape(self: ?*anyopaque, ) i32 {
        return qtc.QTabBar_Shape(@ptrCast(self));
    }

    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QTabBar_SetShape(@ptrCast(self), @intCast(shape));
    }

    pub fn AddTab(self: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTabBar_AddTab(@ptrCast(self), text_str);
    }

    pub fn AddTab2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTabBar_AddTab2(@ptrCast(self), @ptrCast(icon), text_str);
    }

    pub fn InsertTab(self: ?*anyopaque, index: i32, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTabBar_InsertTab(@ptrCast(self), index, text_str);
    }

    pub fn InsertTab2(self: ?*anyopaque, index: i32, icon: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTabBar_InsertTab2(@ptrCast(self), index, @ptrCast(icon), text_str);
    }

    pub fn RemoveTab(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_RemoveTab(@ptrCast(self), index);
    }

    pub fn MoveTab(self: ?*anyopaque, from: i32, to: i32) void {
        qtc.QTabBar_MoveTab(@ptrCast(self), from, to);
    }

    pub fn IsTabEnabled(self: ?*anyopaque, index: i32) bool {
        return qtc.QTabBar_IsTabEnabled(@ptrCast(self), index);
    }

    pub fn SetTabEnabled(self: ?*anyopaque, index: i32, enabled: bool) void {
        qtc.QTabBar_SetTabEnabled(@ptrCast(self), index, enabled);
    }

    pub fn IsTabVisible(self: ?*anyopaque, index: i32) bool {
        return qtc.QTabBar_IsTabVisible(@ptrCast(self), index);
    }

    pub fn SetTabVisible(self: ?*anyopaque, index: i32, visible: bool) void {
        qtc.QTabBar_SetTabVisible(@ptrCast(self), index, visible);
    }

    pub fn TabText(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabBar_TabText(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabbar.TabText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTabText(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTabBar_SetTabText(@ptrCast(self), index, text_str);
    }

    pub fn TabTextColor(self: ?*anyopaque, index: i32) QtC.QColor {
        return qtc.QTabBar_TabTextColor(@ptrCast(self), index);
    }

    pub fn SetTabTextColor(self: ?*anyopaque, index: i32, color: ?*anyopaque) void {
        qtc.QTabBar_SetTabTextColor(@ptrCast(self), index, @ptrCast(color));
    }

    pub fn TabIcon(self: ?*anyopaque, index: i32) QtC.QIcon {
        return qtc.QTabBar_TabIcon(@ptrCast(self), index);
    }

    pub fn SetTabIcon(self: ?*anyopaque, index: i32, icon: ?*anyopaque) void {
        qtc.QTabBar_SetTabIcon(@ptrCast(self), index, @ptrCast(icon));
    }

    pub fn ElideMode(self: ?*anyopaque, ) i32 {
        return qtc.QTabBar_ElideMode(@ptrCast(self));
    }

    pub fn SetElideMode(self: ?*anyopaque, mode: i32) void {
        qtc.QTabBar_SetElideMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SetTabToolTip(self: ?*anyopaque, index: i32, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
    .len = tip.len,
    .data = tip.ptr,
};
qtc.QTabBar_SetTabToolTip(@ptrCast(self), index, tip_str);
    }

    pub fn TabToolTip(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabBar_TabToolTip(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabbar.TabToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTabWhatsThis(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTabBar_SetTabWhatsThis(@ptrCast(self), index, text_str);
    }

    pub fn TabWhatsThis(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabBar_TabWhatsThis(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabbar.TabWhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTabData(self: ?*anyopaque, index: i32, data: ?*anyopaque) void {
        qtc.QTabBar_SetTabData(@ptrCast(self), index, @ptrCast(data));
    }

    pub fn TabData(self: ?*anyopaque, index: i32) QtC.QVariant {
        return qtc.QTabBar_TabData(@ptrCast(self), index);
    }

    pub fn TabRect(self: ?*anyopaque, index: i32) QtC.QRect {
        return qtc.QTabBar_TabRect(@ptrCast(self), index);
    }

    pub fn TabAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QTabBar_TabAt(@ptrCast(self), @ptrCast(pos));
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTabBar_CurrentIndex(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QTabBar_Count(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabBar_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QTabBar_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabBar_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabBar_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QTabBar_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabBar_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SetDrawBase(self: ?*anyopaque, drawTheBase: bool) void {
        qtc.QTabBar_SetDrawBase(@ptrCast(self), drawTheBase);
    }

    pub fn DrawBase(self: ?*anyopaque, ) bool {
        return qtc.QTabBar_DrawBase(@ptrCast(self));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabBar_IconSize(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QTabBar_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn UsesScrollButtons(self: ?*anyopaque, ) bool {
        return qtc.QTabBar_UsesScrollButtons(@ptrCast(self));
    }

    pub fn SetUsesScrollButtons(self: ?*anyopaque, useButtons: bool) void {
        qtc.QTabBar_SetUsesScrollButtons(@ptrCast(self), useButtons);
    }

    pub fn TabsClosable(self: ?*anyopaque, ) bool {
        return qtc.QTabBar_TabsClosable(@ptrCast(self));
    }

    pub fn SetTabsClosable(self: ?*anyopaque, closable: bool) void {
        qtc.QTabBar_SetTabsClosable(@ptrCast(self), closable);
    }

    pub fn SetTabButton(self: ?*anyopaque, index: i32, position: i32, widget: ?*anyopaque) void {
        qtc.QTabBar_SetTabButton(@ptrCast(self), index, @intCast(position), @ptrCast(widget));
    }

    pub fn TabButton(self: ?*anyopaque, index: i32, position: i32) QtC.QWidget {
        return qtc.QTabBar_TabButton(@ptrCast(self), index, @intCast(position));
    }

    pub fn SelectionBehaviorOnRemove(self: ?*anyopaque, ) i32 {
        return qtc.QTabBar_SelectionBehaviorOnRemove(@ptrCast(self));
    }

    pub fn SetSelectionBehaviorOnRemove(self: ?*anyopaque, behavior: i32) void {
        qtc.QTabBar_SetSelectionBehaviorOnRemove(@ptrCast(self), @intCast(behavior));
    }

    pub fn Expanding(self: ?*anyopaque, ) bool {
        return qtc.QTabBar_Expanding(@ptrCast(self));
    }

    pub fn SetExpanding(self: ?*anyopaque, enabled: bool) void {
        qtc.QTabBar_SetExpanding(@ptrCast(self), enabled);
    }

    pub fn IsMovable(self: ?*anyopaque, ) bool {
        return qtc.QTabBar_IsMovable(@ptrCast(self));
    }

    pub fn SetMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QTabBar_SetMovable(@ptrCast(self), movable);
    }

    pub fn DocumentMode(self: ?*anyopaque, ) bool {
        return qtc.QTabBar_DocumentMode(@ptrCast(self));
    }

    pub fn SetDocumentMode(self: ?*anyopaque, set: bool) void {
        qtc.QTabBar_SetDocumentMode(@ptrCast(self), set);
    }

    pub fn AutoHide(self: ?*anyopaque, ) bool {
        return qtc.QTabBar_AutoHide(@ptrCast(self));
    }

    pub fn SetAutoHide(self: ?*anyopaque, hide: bool) void {
        qtc.QTabBar_SetAutoHide(@ptrCast(self), hide);
    }

    pub fn ChangeCurrentOnDrag(self: ?*anyopaque, ) bool {
        return qtc.QTabBar_ChangeCurrentOnDrag(@ptrCast(self));
    }

    pub fn SetChangeCurrentOnDrag(self: ?*anyopaque, change: bool) void {
        qtc.QTabBar_SetChangeCurrentOnDrag(@ptrCast(self), change);
    }

    pub fn AccessibleTabName(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabBar_AccessibleTabName(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabbar.AccessibleTabName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAccessibleTabName(self: ?*anyopaque, index: i32, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QTabBar_SetAccessibleTabName(@ptrCast(self), index, name_str);
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_SetCurrentIndex(@ptrCast(self), index);
    }

    pub fn CurrentChanged(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_CurrentChanged(@ptrCast(self), index);
    }

    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabBar_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabCloseRequested(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_TabCloseRequested(@ptrCast(self), index);
    }

    pub fn OnTabCloseRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabBar_Connect_TabCloseRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabMoved(self: ?*anyopaque, from: i32, to: i32) void {
        qtc.QTabBar_TabMoved(@ptrCast(self), from, to);
    }

    pub fn OnTabMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTabBar_Connect_TabMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabBarClicked(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_TabBarClicked(@ptrCast(self), index);
    }

    pub fn OnTabBarClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabBar_Connect_TabBarClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabBarDoubleClicked(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_TabBarDoubleClicked(@ptrCast(self), index);
    }

    pub fn OnTabBarDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabBar_Connect_TabBarDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabSizeHint(self: ?*anyopaque, index: i32) QtC.QSize {
        return qtc.QTabBar_TabSizeHint(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnTabSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QSize) void {
        qtc.QTabBar_OnTabSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTabSizeHint(self: ?*anyopaque, index: i32) QtC.QSize {
        return qtc.QTabBar_QBaseTabSizeHint(@ptrCast(self), index);
    }

    pub fn MinimumTabSizeHint(self: ?*anyopaque, index: i32) QtC.QSize {
        return qtc.QTabBar_MinimumTabSizeHint(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumTabSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QSize) void {
        qtc.QTabBar_OnMinimumTabSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumTabSizeHint(self: ?*anyopaque, index: i32) QtC.QSize {
        return qtc.QTabBar_QBaseMinimumTabSizeHint(@ptrCast(self), index);
    }

    pub fn TabInserted(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_TabInserted(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnTabInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabBar_OnTabInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTabInserted(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_QBaseTabInserted(@ptrCast(self), index);
    }

    pub fn TabRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_TabRemoved(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnTabRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabBar_OnTabRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTabRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QTabBar_QBaseTabRemoved(@ptrCast(self), index);
    }

    pub fn TabLayoutChange(self: ?*anyopaque, ) void {
        qtc.QTabBar_TabLayoutChange(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnTabLayoutChange(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnTabLayoutChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTabLayoutChange(self: ?*anyopaque, ) void {
        qtc.QTabBar_QBaseTabLayoutChange(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTabBar_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTabBar_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTabBar_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn HideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_HideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseHideEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTabBar_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTabBar_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabBar_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTabBar_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabBar_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTabBar_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque, tabIndex: i32) void {
        qtc.QTabBar_InitStyleOption(@ptrCast(self), @ptrCast(option), tabIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabBar_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque, tabIndex: i32) void {
        qtc.QTabBar_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option), tabIndex);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabBar_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabbar.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabBar_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabbar.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTabBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/tabbar.html#types
pub const enums = struct {
    pub const Shape = enum {
        pub const RoundedNorth: i32 = 0;
        pub const RoundedSouth: i32 = 1;
        pub const RoundedWest: i32 = 2;
        pub const RoundedEast: i32 = 3;
        pub const TriangularNorth: i32 = 4;
        pub const TriangularSouth: i32 = 5;
        pub const TriangularWest: i32 = 6;
        pub const TriangularEast: i32 = 7;
    };

    pub const ButtonPosition = enum {
        pub const LeftSide: i32 = 0;
        pub const RightSide: i32 = 1;
    };

    pub const SelectionBehavior = enum {
        pub const SelectLeftTab: i32 = 0;
        pub const SelectRightTab: i32 = 1;
        pub const SelectPreviousTab: i32 = 2;
    };

};
