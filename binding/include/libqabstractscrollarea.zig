const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractscrollarea.html
pub const qabstractscrollarea = struct {

    /// New constructs a new QAbstractScrollArea object.
    pub fn New(parent: ?*anyopaque) QtC.QAbstractScrollArea {
        return qtc.QAbstractScrollArea_new(@ptrCast(parent));
    }


    /// New2 constructs a new QAbstractScrollArea object.
    pub fn New2() QtC.QAbstractScrollArea {
        return qtc.QAbstractScrollArea_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractScrollArea_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractscrollarea.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn VerticalScrollBarPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    pub fn VerticalScrollBar(self: ?*anyopaque, ) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    pub fn HorizontalScrollBar(self: ?*anyopaque, ) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    pub fn CornerWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i32) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i32) []const u8 {
        return qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
    }

    pub fn Viewport(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    pub fn MaximumViewportSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractScrollArea_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAbstractScrollArea_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractScrollArea_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractScrollArea_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAbstractScrollArea_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractScrollArea_QBaseSizeHint(@ptrCast(self));
    }

    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Allows for overriding the related default method
    pub fn OnSetupViewport(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnSetupViewport(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    pub fn SizeAdjustPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QAbstractScrollArea_SetViewportMargins(@ptrCast(self), left, top, right, bottom);
    }

    /// Allows for overriding the related default method
    pub fn OnSetViewportMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnSetViewportMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QAbstractScrollArea_QBaseSetViewportMargins(@ptrCast(self), left, top, right, bottom);
    }

    pub fn SetViewportMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewportMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Allows for overriding the related default method
    pub fn OnSetViewportMargins2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnSetViewportMargins2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetViewportMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseSetViewportMargins2(@ptrCast(self), @ptrCast(margins));
    }

    pub fn ViewportMargins(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QAbstractScrollArea_ViewportMargins(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QMargins) void {
        qtc.QAbstractScrollArea_OnViewportMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportMargins(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QAbstractScrollArea_QBaseViewportMargins(@ptrCast(self));
    }

    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QAbstractScrollArea_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractScrollArea_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QAbstractScrollArea_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QAbstractScrollArea_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractScrollArea_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QAbstractScrollArea_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QAbstractScrollArea_ViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractScrollArea_OnViewportEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QAbstractScrollArea_QBaseViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_DragEnterEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_DragMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_DragLeaveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn DropEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_DropEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseDropEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractScrollArea_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QAbstractScrollArea_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractScrollArea_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QAbstractScrollArea_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn ViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractScrollArea_ViewportSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAbstractScrollArea_OnViewportSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractScrollArea_QBaseViewportSizeHint(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractScrollArea_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractscrollarea.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractScrollArea_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractscrollarea.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractScrollArea_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractscrollarea.html#types
pub const enums = struct {
    pub const SizeAdjustPolicy = enum {
        pub const AdjustIgnored: i32 = 0;
        pub const AdjustToContentsOnFirstShow: i32 = 1;
        pub const AdjustToContents: i32 = 2;
    };

};
