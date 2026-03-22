const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdockwidget.html
pub const qdockwidget = struct {

    /// New constructs a new QDockWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QDockWidget {
        return qtc.QDockWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QDockWidget object.
    pub fn New2(title: []const u8) QtC.QDockWidget {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QDockWidget_new2(title_str);
    }


    /// New3 constructs a new QDockWidget object.
    pub fn New3() QtC.QDockWidget {
        return qtc.QDockWidget_new3();
    }


    /// New4 constructs a new QDockWidget object.
    pub fn New4(title: []const u8, parent: ?*anyopaque) QtC.QDockWidget {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QDockWidget_new4(title_str, @ptrCast(parent));
    }


    /// New5 constructs a new QDockWidget object.
    pub fn New5(title: []const u8, parent: ?*anyopaque, flags: i64) QtC.QDockWidget {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QDockWidget_new5(title_str, @ptrCast(parent), @intCast(flags));
    }


    /// New6 constructs a new QDockWidget object.
    pub fn New6(parent: ?*anyopaque, flags: i64) QtC.QDockWidget {
        return qtc.QDockWidget_new6(@ptrCast(parent), @intCast(flags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDockWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdockwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QDockWidget_Widget(@ptrCast(self));
    }

    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QDockWidget_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QDockWidget_SetFeatures(@ptrCast(self), @intCast(features));
    }

    pub fn Features(self: ?*anyopaque, ) i32 {
        return qtc.QDockWidget_Features(@ptrCast(self));
    }

    pub fn SetFloating(self: ?*anyopaque, floating: bool) void {
        qtc.QDockWidget_SetFloating(@ptrCast(self), floating);
    }

    pub fn IsFloating(self: ?*anyopaque, ) bool {
        return qtc.QDockWidget_IsFloating(@ptrCast(self));
    }

    pub fn SetAllowedAreas(self: ?*anyopaque, areas: i32) void {
        qtc.QDockWidget_SetAllowedAreas(@ptrCast(self), @intCast(areas));
    }

    pub fn AllowedAreas(self: ?*anyopaque, ) i32 {
        return qtc.QDockWidget_AllowedAreas(@ptrCast(self));
    }

    pub fn SetTitleBarWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QDockWidget_SetTitleBarWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn TitleBarWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QDockWidget_TitleBarWidget(@ptrCast(self));
    }

    pub fn IsAreaAllowed(self: ?*anyopaque, area: i32) bool {
        return qtc.QDockWidget_IsAreaAllowed(@ptrCast(self), @intCast(area));
    }

    pub fn ToggleViewAction(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QDockWidget_ToggleViewAction(@ptrCast(self));
    }

    pub fn FeaturesChanged(self: ?*anyopaque, features: i32) void {
        qtc.QDockWidget_FeaturesChanged(@ptrCast(self), @intCast(features));
    }

    pub fn OnFeaturesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDockWidget_Connect_FeaturesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TopLevelChanged(self: ?*anyopaque, topLevel: bool) void {
        qtc.QDockWidget_TopLevelChanged(@ptrCast(self), topLevel);
    }

    pub fn OnTopLevelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDockWidget_Connect_TopLevelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AllowedAreasChanged(self: ?*anyopaque, allowedAreas: i32) void {
        qtc.QDockWidget_AllowedAreasChanged(@ptrCast(self), @intCast(allowedAreas));
    }

    pub fn OnAllowedAreasChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDockWidget_Connect_AllowedAreasChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QDockWidget_VisibilityChanged(@ptrCast(self), visible);
    }

    pub fn OnVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDockWidget_Connect_VisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DockLocationChanged(self: ?*anyopaque, area: i32) void {
        qtc.QDockWidget_DockLocationChanged(@ptrCast(self), @intCast(area));
    }

    pub fn OnDockLocationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDockWidget_Connect_DockLocationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDockWidget_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDockWidget_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDockWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDockWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDockWidget_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDockWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDockWidget_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDockWidget_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDockWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDockWidget_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDockWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDockWidget_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QDockWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDockWidget_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QDockWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDockWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdockwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDockWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdockwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDockWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/dockwidget.html#types
pub const enums = struct {
    pub const DockWidgetFeature = enum {
        pub const DockWidgetClosable: i32 = 1;
        pub const DockWidgetMovable: i32 = 2;
        pub const DockWidgetFloatable: i32 = 4;
        pub const DockWidgetVerticalTitleBar: i32 = 8;
        pub const DockWidgetFeatureMask: i32 = 15;
        pub const NoDockWidgetFeatures: i32 = 0;
        pub const Reserved: i32 = 255;
    };

};
