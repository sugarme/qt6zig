const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtabwidget.html
pub const qtabwidget = struct {

    /// New constructs a new QTabWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QTabWidget {
        return qtc.QTabWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTabWidget object.
    pub fn New2() QtC.QTabWidget {
        return qtc.QTabWidget_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddTab(self: ?*anyopaque, widget: ?*anyopaque, param2: []const u8) i32 {
        const param2_str = qtc.libqt_string{
    .len = param2.len,
    .data = param2.ptr,
};
return qtc.QTabWidget_AddTab(@ptrCast(self), @ptrCast(widget), param2_str);
    }

    pub fn AddTab2(self: ?*anyopaque, widget: ?*anyopaque, icon: ?*anyopaque, label: []const u8) i32 {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QTabWidget_AddTab2(@ptrCast(self), @ptrCast(widget), @ptrCast(icon), label_str);
    }

    pub fn InsertTab(self: ?*anyopaque, index: i32, widget: ?*anyopaque, param3: []const u8) i32 {
        const param3_str = qtc.libqt_string{
    .len = param3.len,
    .data = param3.ptr,
};
return qtc.QTabWidget_InsertTab(@ptrCast(self), index, @ptrCast(widget), param3_str);
    }

    pub fn InsertTab2(self: ?*anyopaque, index: i32, widget: ?*anyopaque, icon: ?*anyopaque, label: []const u8) i32 {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QTabWidget_InsertTab2(@ptrCast(self), index, @ptrCast(widget), @ptrCast(icon), label_str);
    }

    pub fn RemoveTab(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_RemoveTab(@ptrCast(self), index);
    }

    pub fn IsTabEnabled(self: ?*anyopaque, index: i32) bool {
        return qtc.QTabWidget_IsTabEnabled(@ptrCast(self), index);
    }

    pub fn SetTabEnabled(self: ?*anyopaque, index: i32, enabled: bool) void {
        qtc.QTabWidget_SetTabEnabled(@ptrCast(self), index, enabled);
    }

    pub fn IsTabVisible(self: ?*anyopaque, index: i32) bool {
        return qtc.QTabWidget_IsTabVisible(@ptrCast(self), index);
    }

    pub fn SetTabVisible(self: ?*anyopaque, index: i32, visible: bool) void {
        qtc.QTabWidget_SetTabVisible(@ptrCast(self), index, visible);
    }

    pub fn TabText(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabWidget_TabText(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabwidget.TabText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTabText(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTabWidget_SetTabText(@ptrCast(self), index, text_str);
    }

    pub fn TabIcon(self: ?*anyopaque, index: i32) QtC.QIcon {
        return qtc.QTabWidget_TabIcon(@ptrCast(self), index);
    }

    pub fn SetTabIcon(self: ?*anyopaque, index: i32, icon: ?*anyopaque) void {
        qtc.QTabWidget_SetTabIcon(@ptrCast(self), index, @ptrCast(icon));
    }

    pub fn SetTabToolTip(self: ?*anyopaque, index: i32, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
    .len = tip.len,
    .data = tip.ptr,
};
qtc.QTabWidget_SetTabToolTip(@ptrCast(self), index, tip_str);
    }

    pub fn TabToolTip(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabWidget_TabToolTip(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabwidget.TabToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTabWhatsThis(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTabWidget_SetTabWhatsThis(@ptrCast(self), index, text_str);
    }

    pub fn TabWhatsThis(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabWidget_TabWhatsThis(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabwidget.TabWhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTabWidget_CurrentIndex(@ptrCast(self));
    }

    pub fn CurrentWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QTabWidget_CurrentWidget(@ptrCast(self));
    }

    pub fn Widget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QTabWidget_Widget(@ptrCast(self), index);
    }

    pub fn IndexOf(self: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QTabWidget_IndexOf(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QTabWidget_Count(@ptrCast(self));
    }

    pub fn TabPosition(self: ?*anyopaque, ) i32 {
        return qtc.QTabWidget_TabPosition(@ptrCast(self));
    }

    pub fn SetTabPosition(self: ?*anyopaque, position: i32) void {
        qtc.QTabWidget_SetTabPosition(@ptrCast(self), @intCast(position));
    }

    pub fn TabsClosable(self: ?*anyopaque, ) bool {
        return qtc.QTabWidget_TabsClosable(@ptrCast(self));
    }

    pub fn SetTabsClosable(self: ?*anyopaque, closeable: bool) void {
        qtc.QTabWidget_SetTabsClosable(@ptrCast(self), closeable);
    }

    pub fn IsMovable(self: ?*anyopaque, ) bool {
        return qtc.QTabWidget_IsMovable(@ptrCast(self));
    }

    pub fn SetMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QTabWidget_SetMovable(@ptrCast(self), movable);
    }

    pub fn TabShape(self: ?*anyopaque, ) i32 {
        return qtc.QTabWidget_TabShape(@ptrCast(self));
    }

    pub fn SetTabShape(self: ?*anyopaque, s: i32) void {
        qtc.QTabWidget_SetTabShape(@ptrCast(self), @intCast(s));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabWidget_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QTabWidget_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabWidget_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabWidget_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QTabWidget_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabWidget_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QTabWidget_HeightForWidth(@ptrCast(self), width);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QTabWidget_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QTabWidget_QBaseHeightForWidth(@ptrCast(self), width);
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QTabWidget_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QTabWidget_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QTabWidget_QBaseHasHeightForWidth(@ptrCast(self));
    }

    pub fn SetCornerWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QTabWidget_SetCornerWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn CornerWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QTabWidget_CornerWidget(@ptrCast(self));
    }

    pub fn ElideMode(self: ?*anyopaque, ) i32 {
        return qtc.QTabWidget_ElideMode(@ptrCast(self));
    }

    pub fn SetElideMode(self: ?*anyopaque, mode: i32) void {
        qtc.QTabWidget_SetElideMode(@ptrCast(self), @intCast(mode));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTabWidget_IconSize(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QTabWidget_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn UsesScrollButtons(self: ?*anyopaque, ) bool {
        return qtc.QTabWidget_UsesScrollButtons(@ptrCast(self));
    }

    pub fn SetUsesScrollButtons(self: ?*anyopaque, useButtons: bool) void {
        qtc.QTabWidget_SetUsesScrollButtons(@ptrCast(self), useButtons);
    }

    pub fn DocumentMode(self: ?*anyopaque, ) bool {
        return qtc.QTabWidget_DocumentMode(@ptrCast(self));
    }

    pub fn SetDocumentMode(self: ?*anyopaque, set: bool) void {
        qtc.QTabWidget_SetDocumentMode(@ptrCast(self), set);
    }

    pub fn TabBarAutoHide(self: ?*anyopaque, ) bool {
        return qtc.QTabWidget_TabBarAutoHide(@ptrCast(self));
    }

    pub fn SetTabBarAutoHide(self: ?*anyopaque, enabled: bool) void {
        qtc.QTabWidget_SetTabBarAutoHide(@ptrCast(self), enabled);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QTabWidget_Clear(@ptrCast(self));
    }

    pub fn TabBar(self: ?*anyopaque, ) QtC.QTabBar {
        return qtc.QTabWidget_TabBar(@ptrCast(self));
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_SetCurrentIndex(@ptrCast(self), index);
    }

    pub fn SetCurrentWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QTabWidget_SetCurrentWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn CurrentChanged(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_CurrentChanged(@ptrCast(self), index);
    }

    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabWidget_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabCloseRequested(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_TabCloseRequested(@ptrCast(self), index);
    }

    pub fn OnTabCloseRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabWidget_Connect_TabCloseRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabBarClicked(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_TabBarClicked(@ptrCast(self), index);
    }

    pub fn OnTabBarClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabWidget_Connect_TabBarClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabBarDoubleClicked(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_TabBarDoubleClicked(@ptrCast(self), index);
    }

    pub fn OnTabBarDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabWidget_Connect_TabBarDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabInserted(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_TabInserted(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnTabInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabWidget_OnTabInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTabInserted(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_QBaseTabInserted(@ptrCast(self), index);
    }

    pub fn TabRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_TabRemoved(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnTabRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTabWidget_OnTabRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTabRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QTabWidget_QBaseTabRemoved(@ptrCast(self), index);
    }

    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabWidget_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabWidget_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabWidget_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabWidget_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetTabBar(self: ?*anyopaque, tabBar: ?*anyopaque) void {
        qtc.QTabWidget_SetTabBar(@ptrCast(self), @ptrCast(tabBar));
    }

    /// Allows for overriding the related default method
    pub fn OnSetTabBar(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabWidget_OnSetTabBar(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetTabBar(self: ?*anyopaque, tabBar: ?*anyopaque) void {
        qtc.QTabWidget_QBaseSetTabBar(@ptrCast(self), @ptrCast(tabBar));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabWidget_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTabWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTabWidget_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTabWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTabWidget_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTabWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTabWidget_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTabWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTabWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtabwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCornerWidget2(self: ?*anyopaque, w: ?*anyopaque, corner: i32) void {
        qtc.QTabWidget_SetCornerWidget2(@ptrCast(self), @ptrCast(w), @intCast(corner));
    }

    pub fn CornerWidget1(self: ?*anyopaque, corner: i32) QtC.QWidget {
        return qtc.QTabWidget_CornerWidget1(@ptrCast(self), @intCast(corner));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTabWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/tabwidget.html#types
pub const enums = struct {
    pub const TabPosition = enum {
        pub const North: i32 = 0;
        pub const South: i32 = 1;
        pub const West: i32 = 2;
        pub const East: i32 = 3;
    };

    pub const TabShape = enum {
        pub const Rounded: i32 = 0;
        pub const Triangular: i32 = 1;
    };

};
