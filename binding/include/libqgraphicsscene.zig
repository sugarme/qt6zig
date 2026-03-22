const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicsscene.html
pub const qgraphicsscene = struct {

    /// New constructs a new QGraphicsScene object.
    pub fn New() QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new();
    }


    /// New2 constructs a new QGraphicsScene object.
    pub fn New2(sceneRect: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new2(@ptrCast(sceneRect));
    }


    /// New3 constructs a new QGraphicsScene object.
    pub fn New3(x: f64, y: f64, width: f64, height: f64) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new3(x, y, width, height);
    }


    /// New4 constructs a new QGraphicsScene object.
    pub fn New4(parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QGraphicsScene object.
    pub fn New5(sceneRect: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new5(@ptrCast(sceneRect), @ptrCast(parent));
    }


    /// New6 constructs a new QGraphicsScene object.
    pub fn New6(x: f64, y: f64, width: f64, height: f64, parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new6(x, y, width, height, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsScene_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SceneRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsScene_SceneRect(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsScene_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsScene_Height(@ptrCast(self));
    }

    pub fn SetSceneRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSceneRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SetSceneRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_SetSceneRect2(@ptrCast(self), x, y, w, h);
    }

    pub fn Render(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsScene_Render(@ptrCast(self), @ptrCast(painter));
    }

    pub fn ItemIndexMethod(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsScene_ItemIndexMethod(@ptrCast(self));
    }

    pub fn SetItemIndexMethod(self: ?*anyopaque, method: i32) void {
        qtc.QGraphicsScene_SetItemIndexMethod(@ptrCast(self), @intCast(method));
    }

    pub fn BspTreeDepth(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsScene_BspTreeDepth(@ptrCast(self));
    }

    pub fn SetBspTreeDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QGraphicsScene_SetBspTreeDepth(@ptrCast(self), depth);
    }

    pub fn ItemsBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsScene_ItemsBoundingRect(@ptrCast(self));
    }

    pub fn Items(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsScene_Items(@ptrCast(self));
    }

    pub fn Items2(self: ?*anyopaque, pos: ?*anyopaque) []const u8 {
        return qtc.QGraphicsScene_Items2(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Items3(self: ?*anyopaque, rect: ?*anyopaque) []const u8 {
        return qtc.QGraphicsScene_Items3(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Items5(self: ?*anyopaque, path: ?*anyopaque) []const u8 {
        return qtc.QGraphicsScene_Items5(@ptrCast(self), @ptrCast(path));
    }

    pub fn Items6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, mode: i32, order: i32) []const u8 {
        return qtc.QGraphicsScene_Items6(@ptrCast(self), x, y, w, h, @intCast(mode), @intCast(order));
    }

    pub fn CollidingItems(self: ?*anyopaque, item: ?*anyopaque) []const u8 {
        return qtc.QGraphicsScene_CollidingItems(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemAt(self: ?*anyopaque, pos: ?*anyopaque, deviceTransform: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ItemAt(@ptrCast(self), @ptrCast(pos), @ptrCast(deviceTransform));
    }

    pub fn ItemAt2(self: ?*anyopaque, x: f64, y: f64, deviceTransform: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ItemAt2(@ptrCast(self), x, y, @ptrCast(deviceTransform));
    }

    pub fn SelectedItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsScene_SelectedItems(@ptrCast(self));
    }

    pub fn SelectionArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsScene_SelectionArea(@ptrCast(self));
    }

    pub fn SetSelectionArea(self: ?*anyopaque, path: ?*anyopaque, deviceTransform: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea(@ptrCast(self), @ptrCast(path), @ptrCast(deviceTransform));
    }

    pub fn SetSelectionArea2(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea2(@ptrCast(self), @ptrCast(path));
    }

    pub fn CreateItemGroup(self: ?*anyopaque, items: []const u8) QtC.QGraphicsItemGroup {
        return qtc.QGraphicsScene_CreateItemGroup(@ptrCast(self), @ptrCast(items));
    }

    pub fn DestroyItemGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsScene_DestroyItemGroup(@ptrCast(self), @ptrCast(group));
    }

    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_AddItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn AddEllipse(self: ?*anyopaque, rect: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse(@ptrCast(self), @ptrCast(rect));
    }

    pub fn AddLine(self: ?*anyopaque, line: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine(@ptrCast(self), @ptrCast(line));
    }

    pub fn AddPath(self: ?*anyopaque, path: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath(@ptrCast(self), @ptrCast(path));
    }

    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) QtC.QGraphicsPixmapItem {
        return qtc.QGraphicsScene_AddPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn AddRect(self: ?*anyopaque, rect: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn AddText(self: ?*anyopaque, text: []const u8) QtC.QGraphicsTextItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QGraphicsScene_AddText(@ptrCast(self), text_str);
    }

    pub fn AddSimpleText(self: ?*anyopaque, text: []const u8) QtC.QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QGraphicsScene_AddSimpleText(@ptrCast(self), text_str);
    }

    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsScene_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn AddEllipse2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse2(@ptrCast(self), x, y, w, h);
    }

    pub fn AddLine2(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine2(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn AddRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect2(@ptrCast(self), x, y, w, h);
    }

    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn FocusItem(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_FocusItem(@ptrCast(self));
    }

    pub fn SetFocusItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_SetFocusItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn HasFocus(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsScene_HasFocus(@ptrCast(self));
    }

    pub fn SetFocus(self: ?*anyopaque, ) void {
        qtc.QGraphicsScene_SetFocus(@ptrCast(self));
    }

    pub fn ClearFocus(self: ?*anyopaque, ) void {
        qtc.QGraphicsScene_ClearFocus(@ptrCast(self));
    }

    pub fn SetStickyFocus(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsScene_SetStickyFocus(@ptrCast(self), enabled);
    }

    pub fn StickyFocus(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsScene_StickyFocus(@ptrCast(self));
    }

    pub fn MouseGrabberItem(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_MouseGrabberItem(@ptrCast(self));
    }

    pub fn BackgroundBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QGraphicsScene_BackgroundBrush(@ptrCast(self));
    }

    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QGraphicsScene_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn ForegroundBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QGraphicsScene_ForegroundBrush(@ptrCast(self));
    }

    pub fn SetForegroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QGraphicsScene_SetForegroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsScene_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsScene_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsScene_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    pub fn Views(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsScene_Views(@ptrCast(self));
    }

    pub fn Update(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Update(@ptrCast(self), x, y, w, h);
    }

    pub fn Invalidate(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Invalidate(@ptrCast(self), x, y, w, h);
    }

    pub fn Style(self: ?*anyopaque, ) QtC.QStyle {
        return qtc.QGraphicsScene_Style(@ptrCast(self));
    }

    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QGraphicsScene_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QGraphicsScene_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsScene_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn Palette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QGraphicsScene_Palette(@ptrCast(self));
    }

    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QGraphicsScene_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsScene_IsActive(@ptrCast(self));
    }

    pub fn ActivePanel(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ActivePanel(@ptrCast(self));
    }

    pub fn SetActivePanel(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_SetActivePanel(@ptrCast(self), @ptrCast(item));
    }

    pub fn ActiveWindow(self: ?*anyopaque, ) QtC.QGraphicsWidget {
        return qtc.QGraphicsScene_ActiveWindow(@ptrCast(self));
    }

    pub fn SetActiveWindow(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsScene_SetActiveWindow(@ptrCast(self), @ptrCast(widget));
    }

    pub fn SendEvent(self: ?*anyopaque, item: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_SendEvent(@ptrCast(self), @ptrCast(item), @ptrCast(event));
    }

    pub fn MinimumRenderSize(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsScene_MinimumRenderSize(@ptrCast(self));
    }

    pub fn SetMinimumRenderSize(self: ?*anyopaque, minSize: f64) void {
        qtc.QGraphicsScene_SetMinimumRenderSize(@ptrCast(self), minSize);
    }

    pub fn FocusOnTouch(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsScene_FocusOnTouch(@ptrCast(self));
    }

    pub fn SetFocusOnTouch(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsScene_SetFocusOnTouch(@ptrCast(self), enabled);
    }

    pub fn Update2(self: ?*anyopaque, ) void {
        qtc.QGraphicsScene_Update2(@ptrCast(self));
    }

    pub fn Invalidate2(self: ?*anyopaque, ) void {
        qtc.QGraphicsScene_Invalidate2(@ptrCast(self));
    }

    pub fn Advance(self: ?*anyopaque, ) void {
        qtc.QGraphicsScene_Advance(@ptrCast(self));
    }

    pub fn ClearSelection(self: ?*anyopaque, ) void {
        qtc.QGraphicsScene_ClearSelection(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QGraphicsScene_Clear(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_HelpEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHelpEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnHelpEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHelpEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseHelpEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_DrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawBackground(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawBackground(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    pub fn DrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_DrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawForeground(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawForeground(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    pub fn DrawItems(self: ?*anyopaque, painter: ?*anyopaque, numItems: i32, items: ?*anyopaque, options: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsScene_DrawItems(@ptrCast(self), @ptrCast(painter), numItems, @ptrCast(items), @ptrCast(options), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawItems(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawItems(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawItems(self: ?*anyopaque, painter: ?*anyopaque, numItems: i32, items: ?*anyopaque, options: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDrawItems(@ptrCast(self), @ptrCast(painter), numItems, @ptrCast(items), @ptrCast(options), @ptrCast(widget));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsScene_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsScene_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn Changed(self: ?*anyopaque, region: []const u8) void {
        qtc.QGraphicsScene_Changed(@ptrCast(self), @ptrCast(region));
    }

    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_Changed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SceneRectChanged(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_SceneRectChanged(@ptrCast(self), @ptrCast(rect));
    }

    pub fn OnSceneRectChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SceneRectChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectionChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsScene_SelectionChanged(@ptrCast(self));
    }

    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FocusItemChanged(self: ?*anyopaque, newFocus: ?*anyopaque, oldFocus: ?*anyopaque, reason: i32) void {
        qtc.QGraphicsScene_FocusItemChanged(@ptrCast(self), @ptrCast(newFocus), @ptrCast(oldFocus), @intCast(reason));
    }

    pub fn OnFocusItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_FocusItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsScene_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsScene_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QGraphicsScene_Render2(@ptrCast(self), @ptrCast(painter), @ptrCast(target));
    }

    pub fn Render3(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QGraphicsScene_Render3(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source));
    }

    pub fn Render4(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque, aspectRatioMode: i32) void {
        qtc.QGraphicsScene_Render4(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source), @intCast(aspectRatioMode));
    }

    pub fn Items1(self: ?*anyopaque, order: i32) []const u8 {
        return qtc.QGraphicsScene_Items1(@ptrCast(self), @intCast(order));
    }

    pub fn Items22(self: ?*anyopaque, pos: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QGraphicsScene_Items22(@ptrCast(self), @ptrCast(pos), @intCast(mode));
    }

    pub fn Items32(self: ?*anyopaque, pos: ?*anyopaque, mode: i32, order: i32) []const u8 {
        return qtc.QGraphicsScene_Items32(@ptrCast(self), @ptrCast(pos), @intCast(mode), @intCast(order));
    }

    pub fn Items42(self: ?*anyopaque, pos: ?*anyopaque, mode: i32, order: i32, deviceTransform: ?*anyopaque) []const u8 {
        return qtc.QGraphicsScene_Items42(@ptrCast(self), @ptrCast(pos), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
    }

    pub fn Items23(self: ?*anyopaque, rect: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QGraphicsScene_Items23(@ptrCast(self), @ptrCast(rect), @intCast(mode));
    }

    pub fn Items33(self: ?*anyopaque, rect: ?*anyopaque, mode: i32, order: i32) []const u8 {
        return qtc.QGraphicsScene_Items33(@ptrCast(self), @ptrCast(rect), @intCast(mode), @intCast(order));
    }

    pub fn Items43(self: ?*anyopaque, rect: ?*anyopaque, mode: i32, order: i32, deviceTransform: ?*anyopaque) []const u8 {
        return qtc.QGraphicsScene_Items43(@ptrCast(self), @ptrCast(rect), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
    }

    pub fn Items25(self: ?*anyopaque, path: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QGraphicsScene_Items25(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    pub fn Items35(self: ?*anyopaque, path: ?*anyopaque, mode: i32, order: i32) []const u8 {
        return qtc.QGraphicsScene_Items35(@ptrCast(self), @ptrCast(path), @intCast(mode), @intCast(order));
    }

    pub fn Items45(self: ?*anyopaque, path: ?*anyopaque, mode: i32, order: i32, deviceTransform: ?*anyopaque) []const u8 {
        return qtc.QGraphicsScene_Items45(@ptrCast(self), @ptrCast(path), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
    }

    pub fn Items7(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, mode: i32, order: i32, deviceTransform: ?*anyopaque) []const u8 {
        return qtc.QGraphicsScene_Items7(@ptrCast(self), x, y, w, h, @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
    }

    pub fn CollidingItems2(self: ?*anyopaque, item: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QGraphicsScene_CollidingItems2(@ptrCast(self), @ptrCast(item), @intCast(mode));
    }

    pub fn SetSelectionArea22(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i32) void {
        qtc.QGraphicsScene_SetSelectionArea22(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation));
    }

    pub fn SetSelectionArea3(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i32, mode: i32) void {
        qtc.QGraphicsScene_SetSelectionArea3(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation), @intCast(mode));
    }

    pub fn SetSelectionArea4(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i32, mode: i32, deviceTransform: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea4(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation), @intCast(mode), @ptrCast(deviceTransform));
    }

    pub fn AddEllipse22(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse22(@ptrCast(self), @ptrCast(rect), @ptrCast(pen));
    }

    pub fn AddEllipse3(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse3(@ptrCast(self), @ptrCast(rect), @ptrCast(pen), @ptrCast(brush));
    }

    pub fn AddLine22(self: ?*anyopaque, line: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine22(@ptrCast(self), @ptrCast(line), @ptrCast(pen));
    }

    pub fn AddPath2(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath2(@ptrCast(self), @ptrCast(path), @ptrCast(pen));
    }

    pub fn AddPath3(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath3(@ptrCast(self), @ptrCast(path), @ptrCast(pen), @ptrCast(brush));
    }

    pub fn AddRect22(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect22(@ptrCast(self), @ptrCast(rect), @ptrCast(pen));
    }

    pub fn AddRect3(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect3(@ptrCast(self), @ptrCast(rect), @ptrCast(pen), @ptrCast(brush));
    }

    pub fn AddText2(self: ?*anyopaque, text: []const u8, font: ?*anyopaque) QtC.QGraphicsTextItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QGraphicsScene_AddText2(@ptrCast(self), text_str, @ptrCast(font));
    }

    pub fn AddSimpleText2(self: ?*anyopaque, text: []const u8, font: ?*anyopaque) QtC.QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QGraphicsScene_AddSimpleText2(@ptrCast(self), text_str, @ptrCast(font));
    }

    pub fn AddWidget2(self: ?*anyopaque, widget: ?*anyopaque, wFlags: i64) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsScene_AddWidget2(@ptrCast(self), @ptrCast(widget), @intCast(wFlags));
    }

    pub fn AddEllipse5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse5(@ptrCast(self), x, y, w, h, @ptrCast(pen));
    }

    pub fn AddEllipse6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse6(@ptrCast(self), x, y, w, h, @ptrCast(pen), @ptrCast(brush));
    }

    pub fn AddLine5(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64, pen: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine5(@ptrCast(self), x1, y1, x2, y2, @ptrCast(pen));
    }

    pub fn AddRect5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect5(@ptrCast(self), x, y, w, h, @ptrCast(pen));
    }

    pub fn AddRect6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect6(@ptrCast(self), x, y, w, h, @ptrCast(pen), @ptrCast(brush));
    }

    pub fn SetFocusItem2(self: ?*anyopaque, item: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsScene_SetFocusItem2(@ptrCast(self), @ptrCast(item), @intCast(focusReason));
    }

    pub fn SetFocus1(self: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsScene_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    pub fn Invalidate5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, layers: i32) void {
        qtc.QGraphicsScene_Invalidate5(@ptrCast(self), x, y, w, h, @intCast(layers));
    }

    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_Update1(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Invalidate1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_Invalidate1(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Invalidate22(self: ?*anyopaque, rect: ?*anyopaque, layers: i32) void {
        qtc.QGraphicsScene_Invalidate22(@ptrCast(self), @ptrCast(rect), @intCast(layers));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/graphicsscene.html#types
pub const enums = struct {
    pub const ItemIndexMethod = enum {
        pub const BspTreeIndex: i32 = 0;
        pub const NoIndex: i32 = -1;
    };

    pub const SceneLayer = enum {
        pub const ItemLayer: i32 = 1;
        pub const BackgroundLayer: i32 = 2;
        pub const ForegroundLayer: i32 = 4;
        pub const AllLayers: i32 = 65535;
    };

};
