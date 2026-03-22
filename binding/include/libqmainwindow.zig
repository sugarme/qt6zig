const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmainwindow.html
pub const qmainwindow = struct {

    /// New constructs a new QMainWindow object.
    pub fn New(parent: ?*anyopaque) QtC.QMainWindow {
        return qtc.QMainWindow_new(@ptrCast(parent));
    }


    /// New2 constructs a new QMainWindow object.
    pub fn New2() QtC.QMainWindow {
        return qtc.QMainWindow_new2();
    }


    /// New3 constructs a new QMainWindow object.
    pub fn New3(parent: ?*anyopaque, flags: i64) QtC.QMainWindow {
        return qtc.QMainWindow_new3(@ptrCast(parent), @intCast(flags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMainWindow_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmainwindow.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMainWindow_IconSize(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, iconSize: ?*anyopaque) void {
        qtc.QMainWindow_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    pub fn ToolButtonStyle(self: ?*anyopaque, ) i32 {
        return qtc.QMainWindow_ToolButtonStyle(@ptrCast(self));
    }

    pub fn SetToolButtonStyle(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QMainWindow_SetToolButtonStyle(@ptrCast(self), @intCast(toolButtonStyle));
    }

    pub fn IsAnimated(self: ?*anyopaque, ) bool {
        return qtc.QMainWindow_IsAnimated(@ptrCast(self));
    }

    pub fn IsDockNestingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QMainWindow_IsDockNestingEnabled(@ptrCast(self));
    }

    pub fn DocumentMode(self: ?*anyopaque, ) bool {
        return qtc.QMainWindow_DocumentMode(@ptrCast(self));
    }

    pub fn SetDocumentMode(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetDocumentMode(@ptrCast(self), enabled);
    }

    pub fn TabShape(self: ?*anyopaque, ) i32 {
        return qtc.QMainWindow_TabShape(@ptrCast(self));
    }

    pub fn SetTabShape(self: ?*anyopaque, tabShape: i32) void {
        qtc.QMainWindow_SetTabShape(@ptrCast(self), @intCast(tabShape));
    }

    pub fn TabPosition(self: ?*anyopaque, area: i32) i32 {
        return qtc.QMainWindow_TabPosition(@ptrCast(self), @intCast(area));
    }

    pub fn SetTabPosition(self: ?*anyopaque, areas: i32, tabPosition: i32) void {
        qtc.QMainWindow_SetTabPosition(@ptrCast(self), @intCast(areas), @intCast(tabPosition));
    }

    pub fn SetDockOptions(self: ?*anyopaque, options: i32) void {
        qtc.QMainWindow_SetDockOptions(@ptrCast(self), @intCast(options));
    }

    pub fn DockOptions(self: ?*anyopaque, ) i32 {
        return qtc.QMainWindow_DockOptions(@ptrCast(self));
    }

    pub fn IsSeparator(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QMainWindow_IsSeparator(@ptrCast(self), @ptrCast(pos));
    }

    pub fn MenuBar(self: ?*anyopaque, ) QtC.QMenuBar {
        return qtc.QMainWindow_MenuBar(@ptrCast(self));
    }

    pub fn SetMenuBar(self: ?*anyopaque, menubar: ?*anyopaque) void {
        qtc.QMainWindow_SetMenuBar(@ptrCast(self), @ptrCast(menubar));
    }

    pub fn MenuWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QMainWindow_MenuWidget(@ptrCast(self));
    }

    pub fn SetMenuWidget(self: ?*anyopaque, menubar: ?*anyopaque) void {
        qtc.QMainWindow_SetMenuWidget(@ptrCast(self), @ptrCast(menubar));
    }

    pub fn StatusBar(self: ?*anyopaque, ) QtC.QStatusBar {
        return qtc.QMainWindow_StatusBar(@ptrCast(self));
    }

    pub fn SetStatusBar(self: ?*anyopaque, statusbar: ?*anyopaque) void {
        qtc.QMainWindow_SetStatusBar(@ptrCast(self), @ptrCast(statusbar));
    }

    pub fn CentralWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QMainWindow_CentralWidget(@ptrCast(self));
    }

    pub fn SetCentralWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QMainWindow_SetCentralWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn TakeCentralWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QMainWindow_TakeCentralWidget(@ptrCast(self));
    }

    pub fn SetCorner(self: ?*anyopaque, corner: i32, area: i32) void {
        qtc.QMainWindow_SetCorner(@ptrCast(self), @intCast(corner), @intCast(area));
    }

    pub fn Corner(self: ?*anyopaque, corner: i32) i32 {
        return qtc.QMainWindow_Corner(@ptrCast(self), @intCast(corner));
    }

    pub fn AddToolBarBreak(self: ?*anyopaque, ) void {
        qtc.QMainWindow_AddToolBarBreak(@ptrCast(self));
    }

    pub fn InsertToolBarBreak(self: ?*anyopaque, before: ?*anyopaque) void {
        qtc.QMainWindow_InsertToolBarBreak(@ptrCast(self), @ptrCast(before));
    }

    pub fn AddToolBar(self: ?*anyopaque, area: i32, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_AddToolBar(@ptrCast(self), @intCast(area), @ptrCast(toolbar));
    }

    pub fn AddToolBar2(self: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_AddToolBar2(@ptrCast(self), @ptrCast(toolbar));
    }

    pub fn AddToolBar3(self: ?*anyopaque, title: []const u8) QtC.QToolBar {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QMainWindow_AddToolBar3(@ptrCast(self), title_str);
    }

    pub fn InsertToolBar(self: ?*anyopaque, before: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_InsertToolBar(@ptrCast(self), @ptrCast(before), @ptrCast(toolbar));
    }

    pub fn RemoveToolBar(self: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_RemoveToolBar(@ptrCast(self), @ptrCast(toolbar));
    }

    pub fn RemoveToolBarBreak(self: ?*anyopaque, before: ?*anyopaque) void {
        qtc.QMainWindow_RemoveToolBarBreak(@ptrCast(self), @ptrCast(before));
    }

    pub fn UnifiedTitleAndToolBarOnMac(self: ?*anyopaque, ) bool {
        return qtc.QMainWindow_UnifiedTitleAndToolBarOnMac(@ptrCast(self));
    }

    pub fn ToolBarArea(self: ?*anyopaque, toolbar: ?*anyopaque) i32 {
        return qtc.QMainWindow_ToolBarArea(@ptrCast(self), @ptrCast(toolbar));
    }

    pub fn ToolBarBreak(self: ?*anyopaque, toolbar: ?*anyopaque) bool {
        return qtc.QMainWindow_ToolBarBreak(@ptrCast(self), @ptrCast(toolbar));
    }

    pub fn AddDockWidget(self: ?*anyopaque, area: i32, dockwidget: ?*anyopaque) void {
        qtc.QMainWindow_AddDockWidget(@ptrCast(self), @intCast(area), @ptrCast(dockwidget));
    }

    pub fn AddDockWidget2(self: ?*anyopaque, area: i32, dockwidget: ?*anyopaque, orientation: i32) void {
        qtc.QMainWindow_AddDockWidget2(@ptrCast(self), @intCast(area), @ptrCast(dockwidget), @intCast(orientation));
    }

    pub fn SplitDockWidget(self: ?*anyopaque, after: ?*anyopaque, dockwidget: ?*anyopaque, orientation: i32) void {
        qtc.QMainWindow_SplitDockWidget(@ptrCast(self), @ptrCast(after), @ptrCast(dockwidget), @intCast(orientation));
    }

    pub fn TabifyDockWidget(self: ?*anyopaque, first: ?*anyopaque, second: ?*anyopaque) void {
        qtc.QMainWindow_TabifyDockWidget(@ptrCast(self), @ptrCast(first), @ptrCast(second));
    }

    pub fn TabifiedDockWidgets(self: ?*anyopaque, dockwidget: ?*anyopaque) []const u8 {
        return qtc.QMainWindow_TabifiedDockWidgets(@ptrCast(self), @ptrCast(dockwidget));
    }

    pub fn RemoveDockWidget(self: ?*anyopaque, dockwidget: ?*anyopaque) void {
        qtc.QMainWindow_RemoveDockWidget(@ptrCast(self), @ptrCast(dockwidget));
    }

    pub fn RestoreDockWidget(self: ?*anyopaque, dockwidget: ?*anyopaque) bool {
        return qtc.QMainWindow_RestoreDockWidget(@ptrCast(self), @ptrCast(dockwidget));
    }

    pub fn DockWidgetArea(self: ?*anyopaque, dockwidget: ?*anyopaque) i32 {
        return qtc.QMainWindow_DockWidgetArea(@ptrCast(self), @ptrCast(dockwidget));
    }

    pub fn ResizeDocks(self: ?*anyopaque, docks: []const u8, sizes: []const u8, orientation: i32) void {
        qtc.QMainWindow_ResizeDocks(@ptrCast(self), @ptrCast(docks), @ptrCast(sizes), @intCast(orientation));
    }

    pub fn SaveState(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmainwindow.SaveState: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RestoreState(self: ?*anyopaque, state: []u8) bool {
        const state_str = qtc.libqt_string{
    .len = state.len,
    .data = state.ptr,
};
return qtc.QMainWindow_RestoreState(@ptrCast(self), state_str);
    }

    pub fn CreatePopupMenu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QMainWindow_CreatePopupMenu(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCreatePopupMenu(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QMenu) void {
        qtc.QMainWindow_OnCreatePopupMenu(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreatePopupMenu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QMainWindow_QBaseCreatePopupMenu(@ptrCast(self));
    }

    pub fn SetAnimated(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetAnimated(@ptrCast(self), enabled);
    }

    pub fn SetDockNestingEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetDockNestingEnabled(@ptrCast(self), enabled);
    }

    pub fn SetUnifiedTitleAndToolBarOnMac(self: ?*anyopaque, set: bool) void {
        qtc.QMainWindow_SetUnifiedTitleAndToolBarOnMac(@ptrCast(self), set);
    }

    pub fn IconSizeChanged(self: ?*anyopaque, iconSize: ?*anyopaque) void {
        qtc.QMainWindow_IconSizeChanged(@ptrCast(self), @ptrCast(iconSize));
    }

    pub fn OnIconSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMainWindow_Connect_IconSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ToolButtonStyleChanged(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QMainWindow_ToolButtonStyleChanged(@ptrCast(self), @intCast(toolButtonStyle));
    }

    pub fn OnToolButtonStyleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMainWindow_Connect_ToolButtonStyleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabifiedDockWidgetActivated(self: ?*anyopaque, dockWidget: ?*anyopaque) void {
        qtc.QMainWindow_TabifiedDockWidgetActivated(@ptrCast(self), @ptrCast(dockWidget));
    }

    pub fn OnTabifiedDockWidgetActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMainWindow_Connect_TabifiedDockWidgetActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMainWindow_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMainWindow_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMainWindow_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMainWindow_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMainWindow_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMainWindow_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMainWindow_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmainwindow.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMainWindow_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmainwindow.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddToolBarBreak1(self: ?*anyopaque, area: i32) void {
        qtc.QMainWindow_AddToolBarBreak1(@ptrCast(self), @intCast(area));
    }

    pub fn SaveState1(self: ?*anyopaque, version: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState1(@ptrCast(self), version);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmainwindow.SaveState1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RestoreState2(self: ?*anyopaque, state: []u8, version: i32) bool {
        const state_str = qtc.libqt_string{
    .len = state.len,
    .data = state.ptr,
};
return qtc.QMainWindow_RestoreState2(@ptrCast(self), state_str, version);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMainWindow_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/mainwindow.html#types
pub const enums = struct {
    pub const DockOption = enum {
        pub const AnimatedDocks: i32 = 1;
        pub const AllowNestedDocks: i32 = 2;
        pub const AllowTabbedDocks: i32 = 4;
        pub const ForceTabbedDocks: i32 = 8;
        pub const VerticalTabs: i32 = 16;
        pub const GroupedDragging: i32 = 32;
    };

};
