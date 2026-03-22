const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicsview.html
pub const qgraphicsview = struct {

    /// New constructs a new QGraphicsView object.
    pub fn New(parent: ?*anyopaque) QtC.QGraphicsView {
        return qtc.QGraphicsView_new(@ptrCast(parent));
    }


    /// New2 constructs a new QGraphicsView object.
    pub fn New2() QtC.QGraphicsView {
        return qtc.QGraphicsView_new2();
    }


    /// New3 constructs a new QGraphicsView object.
    pub fn New3(scene: ?*anyopaque) QtC.QGraphicsView {
        return qtc.QGraphicsView_new3(@ptrCast(scene));
    }


    /// New4 constructs a new QGraphicsView object.
    pub fn New4(scene: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsView {
        return qtc.QGraphicsView_new4(@ptrCast(scene), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGraphicsView_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QGraphicsView_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGraphicsView_QBaseSizeHint(@ptrCast(self));
    }

    pub fn RenderHints(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_RenderHints(@ptrCast(self));
    }

    pub fn SetRenderHint(self: ?*anyopaque, hint: i32) void {
        qtc.QGraphicsView_SetRenderHint(@ptrCast(self), @intCast(hint));
    }

    pub fn SetRenderHints(self: ?*anyopaque, hints: i32) void {
        qtc.QGraphicsView_SetRenderHints(@ptrCast(self), @intCast(hints));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_Alignment(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QGraphicsView_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn TransformationAnchor(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_TransformationAnchor(@ptrCast(self));
    }

    pub fn SetTransformationAnchor(self: ?*anyopaque, anchor: i32) void {
        qtc.QGraphicsView_SetTransformationAnchor(@ptrCast(self), @intCast(anchor));
    }

    pub fn ResizeAnchor(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_ResizeAnchor(@ptrCast(self));
    }

    pub fn SetResizeAnchor(self: ?*anyopaque, anchor: i32) void {
        qtc.QGraphicsView_SetResizeAnchor(@ptrCast(self), @intCast(anchor));
    }

    pub fn ViewportUpdateMode(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_ViewportUpdateMode(@ptrCast(self));
    }

    pub fn SetViewportUpdateMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsView_SetViewportUpdateMode(@ptrCast(self), @intCast(mode));
    }

    pub fn OptimizationFlags(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_OptimizationFlags(@ptrCast(self));
    }

    pub fn SetOptimizationFlag(self: ?*anyopaque, flag: i32) void {
        qtc.QGraphicsView_SetOptimizationFlag(@ptrCast(self), @intCast(flag));
    }

    pub fn SetOptimizationFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsView_SetOptimizationFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn DragMode(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_DragMode(@ptrCast(self));
    }

    pub fn SetDragMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsView_SetDragMode(@ptrCast(self), @intCast(mode));
    }

    pub fn RubberBandSelectionMode(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_RubberBandSelectionMode(@ptrCast(self));
    }

    pub fn SetRubberBandSelectionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsView_SetRubberBandSelectionMode(@ptrCast(self), @intCast(mode));
    }

    pub fn RubberBandRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QGraphicsView_RubberBandRect(@ptrCast(self));
    }

    pub fn CacheMode(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsView_CacheMode(@ptrCast(self));
    }

    pub fn SetCacheMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsView_SetCacheMode(@ptrCast(self), @intCast(mode));
    }

    pub fn ResetCachedContent(self: ?*anyopaque, ) void {
        qtc.QGraphicsView_ResetCachedContent(@ptrCast(self));
    }

    pub fn IsInteractive(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsView_IsInteractive(@ptrCast(self));
    }

    pub fn SetInteractive(self: ?*anyopaque, allowed: bool) void {
        qtc.QGraphicsView_SetInteractive(@ptrCast(self), allowed);
    }

    pub fn Scene(self: ?*anyopaque, ) QtC.QGraphicsScene {
        return qtc.QGraphicsView_Scene(@ptrCast(self));
    }

    pub fn SetScene(self: ?*anyopaque, scene: ?*anyopaque) void {
        qtc.QGraphicsView_SetScene(@ptrCast(self), @ptrCast(scene));
    }

    pub fn SceneRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsView_SceneRect(@ptrCast(self));
    }

    pub fn SetSceneRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_SetSceneRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SetSceneRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_SetSceneRect2(@ptrCast(self), x, y, w, h);
    }

    pub fn Transform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QGraphicsView_Transform(@ptrCast(self));
    }

    pub fn ViewportTransform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QGraphicsView_ViewportTransform(@ptrCast(self));
    }

    pub fn IsTransformed(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsView_IsTransformed(@ptrCast(self));
    }

    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsView_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn ResetTransform(self: ?*anyopaque, ) void {
        qtc.QGraphicsView_ResetTransform(@ptrCast(self));
    }

    pub fn Rotate(self: ?*anyopaque, angle: f64) void {
        qtc.QGraphicsView_Rotate(@ptrCast(self), angle);
    }

    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) void {
        qtc.QGraphicsView_Scale(@ptrCast(self), sx, sy);
    }

    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) void {
        qtc.QGraphicsView_Shear(@ptrCast(self), sh, sv);
    }

    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsView_Translate(@ptrCast(self), dx, dy);
    }

    pub fn CenterOn(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsView_CenterOn(@ptrCast(self), @ptrCast(pos));
    }

    pub fn CenterOn2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QGraphicsView_CenterOn2(@ptrCast(self), x, y);
    }

    pub fn CenterOn3(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsView_CenterOn3(@ptrCast(self), @ptrCast(item));
    }

    pub fn EnsureVisible(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_EnsureVisible(@ptrCast(self), @ptrCast(rect));
    }

    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_EnsureVisible2(@ptrCast(self), x, y, w, h);
    }

    pub fn EnsureVisible3(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsView_EnsureVisible3(@ptrCast(self), @ptrCast(item));
    }

    pub fn FitInView(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_FitInView(@ptrCast(self), @ptrCast(rect));
    }

    pub fn FitInView2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_FitInView2(@ptrCast(self), x, y, w, h);
    }

    pub fn FitInView3(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsView_FitInView3(@ptrCast(self), @ptrCast(item));
    }

    pub fn Render(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsView_Render(@ptrCast(self), @ptrCast(painter));
    }

    pub fn Items(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsView_Items(@ptrCast(self));
    }

    pub fn Items2(self: ?*anyopaque, pos: ?*anyopaque) []const u8 {
        return qtc.QGraphicsView_Items2(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Items3(self: ?*anyopaque, x: i32, y: i32) []const u8 {
        return qtc.QGraphicsView_Items3(@ptrCast(self), x, y);
    }

    pub fn Items4(self: ?*anyopaque, rect: ?*anyopaque) []const u8 {
        return qtc.QGraphicsView_Items4(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Items5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) []const u8 {
        return qtc.QGraphicsView_Items5(@ptrCast(self), x, y, w, h);
    }

    pub fn Items6(self: ?*anyopaque, polygon: ?*anyopaque) []const u8 {
        return qtc.QGraphicsView_Items6(@ptrCast(self), @ptrCast(polygon));
    }

    pub fn Items7(self: ?*anyopaque, path: ?*anyopaque) []const u8 {
        return qtc.QGraphicsView_Items7(@ptrCast(self), @ptrCast(path));
    }

    pub fn ItemAt(self: ?*anyopaque, pos: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsView_ItemAt(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ItemAt2(self: ?*anyopaque, x: i32, y: i32) QtC.QGraphicsItem {
        return qtc.QGraphicsView_ItemAt2(@ptrCast(self), x, y);
    }

    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsView_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    pub fn MapToScene2(self: ?*anyopaque, rect: ?*anyopaque) QtC.QPolygonF {
        return qtc.QGraphicsView_MapToScene2(@ptrCast(self), @ptrCast(rect));
    }

    pub fn MapToScene3(self: ?*anyopaque, polygon: ?*anyopaque) QtC.QPolygonF {
        return qtc.QGraphicsView_MapToScene3(@ptrCast(self), @ptrCast(polygon));
    }

    pub fn MapToScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsView_MapToScene4(@ptrCast(self), @ptrCast(path));
    }

    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsView_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    pub fn MapFromScene2(self: ?*anyopaque, rect: ?*anyopaque) QtC.QPolygon {
        return qtc.QGraphicsView_MapFromScene2(@ptrCast(self), @ptrCast(rect));
    }

    pub fn MapFromScene3(self: ?*anyopaque, polygon: ?*anyopaque) QtC.QPolygon {
        return qtc.QGraphicsView_MapFromScene3(@ptrCast(self), @ptrCast(polygon));
    }

    pub fn MapFromScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsView_MapFromScene4(@ptrCast(self), @ptrCast(path));
    }

    pub fn MapToScene5(self: ?*anyopaque, x: i32, y: i32) QtC.QPointF {
        return qtc.QGraphicsView_MapToScene5(@ptrCast(self), x, y);
    }

    pub fn MapToScene6(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) QtC.QPolygonF {
        return qtc.QGraphicsView_MapToScene6(@ptrCast(self), x, y, w, h);
    }

    pub fn MapFromScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPoint {
        return qtc.QGraphicsView_MapFromScene5(@ptrCast(self), x, y);
    }

    pub fn MapFromScene6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QPolygon {
        return qtc.QGraphicsView_MapFromScene6(@ptrCast(self), x, y, w, h);
    }

    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsView_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsView_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsView_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    pub fn BackgroundBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QGraphicsView_BackgroundBrush(@ptrCast(self));
    }

    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QGraphicsView_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn ForegroundBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QGraphicsView_ForegroundBrush(@ptrCast(self));
    }

    pub fn SetForegroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QGraphicsView_SetForegroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn UpdateScene(self: ?*anyopaque, rects: []const u8) void {
        qtc.QGraphicsView_UpdateScene(@ptrCast(self), @ptrCast(rects));
    }

    pub fn InvalidateScene(self: ?*anyopaque, ) void {
        qtc.QGraphicsView_InvalidateScene(@ptrCast(self));
    }

    pub fn UpdateSceneRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_UpdateSceneRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn RubberBandChanged(self: ?*anyopaque, viewportRect: QtC.QRect, fromScenePoint: QtC.QPointF, toScenePoint: QtC.QPointF) void {
        qtc.QGraphicsView_RubberBandChanged(@ptrCast(self), @ptrCast(viewportRect), @ptrCast(fromScenePoint), @ptrCast(toScenePoint));
    }

    pub fn OnRubberBandChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QRect, QtC.QPointF, QtC.QPointF) callconv(.c) void) void {
        qtc.QGraphicsView_Connect_RubberBandChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SetupViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsView_SetupViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnSetupViewport(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnSetupViewport(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetupViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseSetupViewport(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsView_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsView_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsView_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsView_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsView_OnViewportEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsView_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsView_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QGraphicsView_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsView_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QGraphicsView_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QGraphicsView_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QGraphicsView_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_DrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawBackground(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnDrawBackground(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseDrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    pub fn DrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_DrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawForeground(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnDrawForeground(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseDrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    pub fn DrawItems(self: ?*anyopaque, painter: ?*anyopaque, numItems: i32, items: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QGraphicsView_DrawItems(@ptrCast(self), @ptrCast(painter), numItems, @ptrCast(items), @ptrCast(options));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawItems(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsView_OnDrawItems(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawItems(self: ?*anyopaque, painter: ?*anyopaque, numItems: i32, items: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QGraphicsView_QBaseDrawItems(@ptrCast(self), @ptrCast(painter), numItems, @ptrCast(items), @ptrCast(options));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetRenderHint2(self: ?*anyopaque, hint: i32, enabled: bool) void {
        qtc.QGraphicsView_SetRenderHint2(@ptrCast(self), @intCast(hint), enabled);
    }

    pub fn SetOptimizationFlag2(self: ?*anyopaque, flag: i32, enabled: bool) void {
        qtc.QGraphicsView_SetOptimizationFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QGraphicsView_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        qtc.QGraphicsView_EnsureVisible22(@ptrCast(self), @ptrCast(rect), xmargin);
    }

    pub fn EnsureVisible32(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsView_EnsureVisible32(@ptrCast(self), @ptrCast(rect), xmargin, ymargin);
    }

    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsView_EnsureVisible5(@ptrCast(self), x, y, w, h, xmargin);
    }

    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsView_EnsureVisible6(@ptrCast(self), x, y, w, h, xmargin, ymargin);
    }

    pub fn EnsureVisible23(self: ?*anyopaque, item: ?*anyopaque, xmargin: i32) void {
        qtc.QGraphicsView_EnsureVisible23(@ptrCast(self), @ptrCast(item), xmargin);
    }

    pub fn EnsureVisible33(self: ?*anyopaque, item: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsView_EnsureVisible33(@ptrCast(self), @ptrCast(item), xmargin, ymargin);
    }

    pub fn FitInView22(self: ?*anyopaque, rect: ?*anyopaque, aspectRadioMode: i32) void {
        qtc.QGraphicsView_FitInView22(@ptrCast(self), @ptrCast(rect), @intCast(aspectRadioMode));
    }

    pub fn FitInView5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, aspectRadioMode: i32) void {
        qtc.QGraphicsView_FitInView5(@ptrCast(self), x, y, w, h, @intCast(aspectRadioMode));
    }

    pub fn FitInView23(self: ?*anyopaque, item: ?*anyopaque, aspectRadioMode: i32) void {
        qtc.QGraphicsView_FitInView23(@ptrCast(self), @ptrCast(item), @intCast(aspectRadioMode));
    }

    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QGraphicsView_Render2(@ptrCast(self), @ptrCast(painter), @ptrCast(target));
    }

    pub fn Render3(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QGraphicsView_Render3(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source));
    }

    pub fn Render4(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque, aspectRatioMode: i32) void {
        qtc.QGraphicsView_Render4(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source), @intCast(aspectRatioMode));
    }

    pub fn Items22(self: ?*anyopaque, rect: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QGraphicsView_Items22(@ptrCast(self), @ptrCast(rect), @intCast(mode));
    }

    pub fn Items52(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, mode: i32) []const u8 {
        return qtc.QGraphicsView_Items52(@ptrCast(self), x, y, w, h, @intCast(mode));
    }

    pub fn Items23(self: ?*anyopaque, polygon: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QGraphicsView_Items23(@ptrCast(self), @ptrCast(polygon), @intCast(mode));
    }

    pub fn Items24(self: ?*anyopaque, path: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QGraphicsView_Items24(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    pub fn InvalidateScene1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsView_InvalidateScene1(@ptrCast(self), @ptrCast(rect));
    }

    pub fn InvalidateScene2(self: ?*anyopaque, rect: ?*anyopaque, layers: i32) void {
        qtc.QGraphicsView_InvalidateScene2(@ptrCast(self), @ptrCast(rect), @intCast(layers));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsView_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/graphicsview.html#types
pub const enums = struct {
    pub const ViewportAnchor = enum {
        pub const NoAnchor: i32 = 0;
        pub const AnchorViewCenter: i32 = 1;
        pub const AnchorUnderMouse: i32 = 2;
    };

    pub const CacheModeFlag = enum {
        pub const CacheNone: i32 = 0;
        pub const CacheBackground: i32 = 1;
    };

    pub const DragMode = enum {
        pub const NoDrag: i32 = 0;
        pub const ScrollHandDrag: i32 = 1;
        pub const RubberBandDrag: i32 = 2;
    };

    pub const ViewportUpdateMode = enum {
        pub const FullViewportUpdate: i32 = 0;
        pub const MinimalViewportUpdate: i32 = 1;
        pub const SmartViewportUpdate: i32 = 2;
        pub const NoViewportUpdate: i32 = 3;
        pub const BoundingRectViewportUpdate: i32 = 4;
    };

    pub const OptimizationFlag = enum {
        pub const DontSavePainterState: i32 = 1;
        pub const DontAdjustForAntialiasing: i32 = 2;
        pub const IndirectPainting: i32 = 4;
    };

};
