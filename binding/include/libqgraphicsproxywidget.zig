const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicsproxywidget.html
pub const qgraphicsproxywidget = struct {

    /// New constructs a new QGraphicsProxyWidget object.
    pub fn New() QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsProxyWidget_new();
    }


    /// New2 constructs a new QGraphicsProxyWidget object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsProxyWidget_new2(@ptrCast(parent));
    }


    /// New3 constructs a new QGraphicsProxyWidget object.
    pub fn New3(parent: ?*anyopaque, wFlags: i64) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsProxyWidget_new3(@ptrCast(parent), @intCast(wFlags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsProxyWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsproxywidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QGraphicsProxyWidget_Widget(@ptrCast(self));
    }

    pub fn SubWidgetRect(self: ?*anyopaque, widget: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsProxyWidget_SubWidgetRect(@ptrCast(self), @ptrCast(widget));
    }

    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsProxyWidget_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsProxyWidget_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsProxyWidget_QBaseType(@ptrCast(self));
    }

    pub fn CreateProxyForChildWidget(self: ?*anyopaque, child: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsProxyWidget_CreateProxyForChildWidget(@ptrCast(self), @ptrCast(child));
    }

    pub fn ItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsProxyWidget_ItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnItemChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsProxyWidget_OnItemChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsProxyWidget_QBaseItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsProxyWidget_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsProxyWidget_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsProxyWidget_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsProxyWidget_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnHoverEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnHoverLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnHoverMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn GrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_GrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnGrabMouseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnGrabMouseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseGrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_UngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnUngrabMouseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnUngrabMouseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseUngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsProxyWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsProxyWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsProxyWidget_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsProxyWidget_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsProxyWidget_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsProxyWidget_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsProxyWidget_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsProxyWidget_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn NewProxyWidget(self: ?*anyopaque, param1: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsProxyWidget_NewProxyWidget(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnNewProxyWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_OnNewProxyWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNewProxyWidget(self: ?*anyopaque, param1: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsProxyWidget_QBaseNewProxyWidget(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsProxyWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsproxywidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsProxyWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsproxywidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/graphicsproxywidget.html#types
pub const enums = struct {
};
