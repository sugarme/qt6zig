const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmdiarea.html
pub const qmdiarea = struct {

    /// New constructs a new QMdiArea object.
    pub fn New(parent: ?*anyopaque) QtC.QMdiArea {
        return qtc.QMdiArea_new(@ptrCast(parent));
    }


    /// New2 constructs a new QMdiArea object.
    pub fn New2() QtC.QMdiArea {
        return qtc.QMdiArea_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMdiArea_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmdiarea.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMdiArea_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QMdiArea_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMdiArea_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMdiArea_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QMdiArea_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMdiArea_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn CurrentSubWindow(self: ?*anyopaque, ) QtC.QMdiSubWindow {
        return qtc.QMdiArea_CurrentSubWindow(@ptrCast(self));
    }

    pub fn ActiveSubWindow(self: ?*anyopaque, ) QtC.QMdiSubWindow {
        return qtc.QMdiArea_ActiveSubWindow(@ptrCast(self));
    }

    pub fn SubWindowList(self: ?*anyopaque, ) []const u8 {
        return qtc.QMdiArea_SubWindowList(@ptrCast(self));
    }

    pub fn AddSubWindow(self: ?*anyopaque, widget: ?*anyopaque) QtC.QMdiSubWindow {
        return qtc.QMdiArea_AddSubWindow(@ptrCast(self), @ptrCast(widget));
    }

    pub fn RemoveSubWindow(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QMdiArea_RemoveSubWindow(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Background(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QMdiArea_Background(@ptrCast(self));
    }

    pub fn SetBackground(self: ?*anyopaque, background: ?*anyopaque) void {
        qtc.QMdiArea_SetBackground(@ptrCast(self), @ptrCast(background));
    }

    pub fn ActivationOrder(self: ?*anyopaque, ) i32 {
        return qtc.QMdiArea_ActivationOrder(@ptrCast(self));
    }

    pub fn SetActivationOrder(self: ?*anyopaque, order: i32) void {
        qtc.QMdiArea_SetActivationOrder(@ptrCast(self), @intCast(order));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QMdiArea_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, opton: i32) bool {
        return qtc.QMdiArea_TestOption(@ptrCast(self), @intCast(opton));
    }

    pub fn SetViewMode(self: ?*anyopaque, mode: i32) void {
        qtc.QMdiArea_SetViewMode(@ptrCast(self), @intCast(mode));
    }

    pub fn ViewMode(self: ?*anyopaque, ) i32 {
        return qtc.QMdiArea_ViewMode(@ptrCast(self));
    }

    pub fn DocumentMode(self: ?*anyopaque, ) bool {
        return qtc.QMdiArea_DocumentMode(@ptrCast(self));
    }

    pub fn SetDocumentMode(self: ?*anyopaque, enabled: bool) void {
        qtc.QMdiArea_SetDocumentMode(@ptrCast(self), enabled);
    }

    pub fn SetTabsClosable(self: ?*anyopaque, closable: bool) void {
        qtc.QMdiArea_SetTabsClosable(@ptrCast(self), closable);
    }

    pub fn TabsClosable(self: ?*anyopaque, ) bool {
        return qtc.QMdiArea_TabsClosable(@ptrCast(self));
    }

    pub fn SetTabsMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QMdiArea_SetTabsMovable(@ptrCast(self), movable);
    }

    pub fn TabsMovable(self: ?*anyopaque, ) bool {
        return qtc.QMdiArea_TabsMovable(@ptrCast(self));
    }

    pub fn SetTabShape(self: ?*anyopaque, shape: i32) void {
        qtc.QMdiArea_SetTabShape(@ptrCast(self), @intCast(shape));
    }

    pub fn TabShape(self: ?*anyopaque, ) i32 {
        return qtc.QMdiArea_TabShape(@ptrCast(self));
    }

    pub fn SetTabPosition(self: ?*anyopaque, position: i32) void {
        qtc.QMdiArea_SetTabPosition(@ptrCast(self), @intCast(position));
    }

    pub fn TabPosition(self: ?*anyopaque, ) i32 {
        return qtc.QMdiArea_TabPosition(@ptrCast(self));
    }

    pub fn SubWindowActivated(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMdiArea_SubWindowActivated(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnSubWindowActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiArea_Connect_SubWindowActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SetActiveSubWindow(self: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QMdiArea_SetActiveSubWindow(@ptrCast(self), @ptrCast(window));
    }

    pub fn TileSubWindows(self: ?*anyopaque, ) void {
        qtc.QMdiArea_TileSubWindows(@ptrCast(self));
    }

    pub fn CascadeSubWindows(self: ?*anyopaque, ) void {
        qtc.QMdiArea_CascadeSubWindows(@ptrCast(self));
    }

    pub fn CloseActiveSubWindow(self: ?*anyopaque, ) void {
        qtc.QMdiArea_CloseActiveSubWindow(@ptrCast(self));
    }

    pub fn CloseAllSubWindows(self: ?*anyopaque, ) void {
        qtc.QMdiArea_CloseAllSubWindows(@ptrCast(self));
    }

    pub fn ActivateNextSubWindow(self: ?*anyopaque, ) void {
        qtc.QMdiArea_ActivateNextSubWindow(@ptrCast(self));
    }

    pub fn ActivatePreviousSubWindow(self: ?*anyopaque, ) void {
        qtc.QMdiArea_ActivatePreviousSubWindow(@ptrCast(self));
    }

    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QMdiArea_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Allows for overriding the related default method
    pub fn OnSetupViewport(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiArea_OnSetupViewport(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QMdiArea_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiArea_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMdiArea_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiArea_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiArea_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMdiArea_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiArea_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, paintEvent: ?*anyopaque) void {
        qtc.QMdiArea_PaintEvent(@ptrCast(self), @ptrCast(paintEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiArea_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, paintEvent: ?*anyopaque) void {
        qtc.QMdiArea_QBasePaintEvent(@ptrCast(self), @ptrCast(paintEvent));
    }

    pub fn ChildEvent(self: ?*anyopaque, childEvent: ?*anyopaque) void {
        qtc.QMdiArea_ChildEvent(@ptrCast(self), @ptrCast(childEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiArea_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildEvent(self: ?*anyopaque, childEvent: ?*anyopaque) void {
        qtc.QMdiArea_QBaseChildEvent(@ptrCast(self), @ptrCast(childEvent));
    }

    pub fn ResizeEvent(self: ?*anyopaque, resizeEvent: ?*anyopaque) void {
        qtc.QMdiArea_ResizeEvent(@ptrCast(self), @ptrCast(resizeEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiArea_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, resizeEvent: ?*anyopaque) void {
        qtc.QMdiArea_QBaseResizeEvent(@ptrCast(self), @ptrCast(resizeEvent));
    }

    pub fn TimerEvent(self: ?*anyopaque, timerEvent: ?*anyopaque) void {
        qtc.QMdiArea_TimerEvent(@ptrCast(self), @ptrCast(timerEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiArea_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, timerEvent: ?*anyopaque) void {
        qtc.QMdiArea_QBaseTimerEvent(@ptrCast(self), @ptrCast(timerEvent));
    }

    pub fn ShowEvent(self: ?*anyopaque, showEvent: ?*anyopaque) void {
        qtc.QMdiArea_ShowEvent(@ptrCast(self), @ptrCast(showEvent));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMdiArea_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, showEvent: ?*anyopaque) void {
        qtc.QMdiArea_QBaseShowEvent(@ptrCast(self), @ptrCast(showEvent));
    }

    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiArea_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMdiArea_OnViewportEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMdiArea_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QMdiArea_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QMdiArea_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QMdiArea_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMdiArea_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmdiarea.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMdiArea_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmdiarea.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SubWindowList1(self: ?*anyopaque, order: i32) []const u8 {
        return qtc.QMdiArea_SubWindowList1(@ptrCast(self), @intCast(order));
    }

    pub fn AddSubWindow2(self: ?*anyopaque, widget: ?*anyopaque, flags: i64) QtC.QMdiSubWindow {
        return qtc.QMdiArea_AddSubWindow2(@ptrCast(self), @ptrCast(widget), @intCast(flags));
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QMdiArea_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMdiArea_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/mdiarea.html#types
pub const enums = struct {
    pub const AreaOption = enum {
        pub const DontMaximizeSubWindowOnActivation: i32 = 1;
    };

    pub const WindowOrder = enum {
        pub const CreationOrder: i32 = 0;
        pub const StackingOrder: i32 = 1;
        pub const ActivationHistoryOrder: i32 = 2;
    };

    pub const ViewMode = enum {
        pub const SubWindowView: i32 = 0;
        pub const TabbedView: i32 = 1;
    };

};
