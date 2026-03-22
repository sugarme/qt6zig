const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicsitem.html
pub const qgraphicsitem = struct {

    /// New constructs a new QGraphicsItem object.
    pub fn New() QtC.QGraphicsItem {
        return qtc.QGraphicsItem_new();
    }


    /// New2 constructs a new QGraphicsItem object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_new2(@ptrCast(parent));
    }


    pub fn Scene(self: ?*anyopaque, ) QtC.QGraphicsScene {
        return qtc.QGraphicsItem_Scene(@ptrCast(self));
    }

    pub fn ParentItem(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_ParentItem(@ptrCast(self));
    }

    pub fn TopLevelItem(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_TopLevelItem(@ptrCast(self));
    }

    pub fn ParentObject(self: ?*anyopaque, ) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ParentObject(@ptrCast(self));
    }

    pub fn ParentWidget(self: ?*anyopaque, ) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_ParentWidget(@ptrCast(self));
    }

    pub fn TopLevelWidget(self: ?*anyopaque, ) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self));
    }

    pub fn Window(self: ?*anyopaque, ) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_Window(@ptrCast(self));
    }

    pub fn Panel(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_Panel(@ptrCast(self));
    }

    pub fn SetParentItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ChildItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsItem_ChildItems(@ptrCast(self));
    }

    pub fn IsWidget(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self));
    }

    pub fn IsWindow(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self));
    }

    pub fn IsPanel(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self));
    }

    pub fn ToGraphicsObject(self: ?*anyopaque, ) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self));
    }

    pub fn ToGraphicsObject2(self: ?*anyopaque, ) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self));
    }

    pub fn Group(self: ?*anyopaque, ) QtC.QGraphicsItemGroup {
        return qtc.QGraphicsItem_Group(@ptrCast(self));
    }

    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self));
    }

    pub fn SetFlag(self: ?*anyopaque, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self), @intCast(flag));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn CacheMode(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self));
    }

    pub fn SetCacheMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self), @intCast(mode));
    }

    pub fn PanelModality(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self));
    }

    pub fn SetPanelModality(self: ?*anyopaque, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self), @intCast(panelModality));
    }

    pub fn IsBlockedByModalPanel(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self));
    }

    pub fn ToolTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsitem.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
    .len = toolTip.len,
    .data = toolTip.ptr,
};
qtc.QGraphicsItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    pub fn Cursor(self: ?*anyopaque, ) QtC.QCursor {
        return qtc.QGraphicsItem_Cursor(@ptrCast(self));
    }

    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn HasCursor(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self));
    }

    pub fn UnsetCursor(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self));
    }

    pub fn IsVisibleTo(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self), @ptrCast(parent));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self), visible);
    }

    pub fn Hide(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self));
    }

    pub fn Show(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_Show(@ptrCast(self));
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self), enabled);
    }

    pub fn IsSelected(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self));
    }

    pub fn SetSelected(self: ?*anyopaque, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self), selected);
    }

    pub fn AcceptDrops(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self));
    }

    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self), on);
    }

    pub fn Opacity(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self));
    }

    pub fn EffectiveOpacity(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self));
    }

    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self), opacity);
    }

    pub fn GraphicsEffect(self: ?*anyopaque, ) QtC.QGraphicsEffect {
        return qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self));
    }

    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    pub fn AcceptedMouseButtons(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self));
    }

    pub fn SetAcceptedMouseButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self), @intCast(buttons));
    }

    pub fn AcceptHoverEvents(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self));
    }

    pub fn SetAcceptHoverEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self), enabled);
    }

    pub fn AcceptTouchEvents(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self));
    }

    pub fn SetAcceptTouchEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self), enabled);
    }

    pub fn FiltersChildEvents(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self));
    }

    pub fn SetFiltersChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self), enabled);
    }

    pub fn HandlesChildEvents(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self));
    }

    pub fn SetHandlesChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self), enabled);
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self));
    }

    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self), active);
    }

    pub fn HasFocus(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self));
    }

    pub fn SetFocus(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self));
    }

    pub fn ClearFocus(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self));
    }

    pub fn FocusProxy(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusProxy(@ptrCast(self));
    }

    pub fn SetFocusProxy(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self), @ptrCast(item));
    }

    pub fn FocusItem(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusItem(@ptrCast(self));
    }

    pub fn FocusScopeItem(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self));
    }

    pub fn GrabMouse(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self));
    }

    pub fn UngrabMouse(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self));
    }

    pub fn GrabKeyboard(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self));
    }

    pub fn UngrabKeyboard(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self));
    }

    pub fn Pos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsItem_Pos(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self), x);
    }

    pub fn Y(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self));
    }

    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self), y);
    }

    pub fn ScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsItem_ScenePos(@ptrCast(self));
    }

    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsItem_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn SetPos2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self), x, y);
    }

    pub fn MoveBy(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self), dx, dy);
    }

    pub fn EnsureVisible(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self));
    }

    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self), x, y, w, h);
    }

    pub fn Transform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QGraphicsItem_Transform(@ptrCast(self));
    }

    pub fn SceneTransform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QGraphicsItem_SceneTransform(@ptrCast(self));
    }

    pub fn DeviceTransform(self: ?*anyopaque, viewportTransform: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_DeviceTransform(@ptrCast(self), @ptrCast(viewportTransform));
    }

    pub fn ItemTransform(self: ?*anyopaque, other: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn ResetTransform(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self));
    }

    pub fn SetRotation(self: ?*anyopaque, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self), angle);
    }

    pub fn Rotation(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self));
    }

    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self), scale);
    }

    pub fn Scale(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self));
    }

    pub fn Transformations(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsItem_Transformations(@ptrCast(self));
    }

    pub fn SetTransformations(self: ?*anyopaque, transformations: []const u8) void {
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self), @ptrCast(transformations));
    }

    pub fn TransformOriginPoint(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self));
    }

    pub fn SetTransformOriginPoint(self: ?*anyopaque, origin: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self), @ptrCast(origin));
    }

    pub fn SetTransformOriginPoint2(self: ?*anyopaque, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self), ax, ay);
    }

    pub fn Advance(self: ?*anyopaque, phase: i32) void {
        qtc.QGraphicsItem_Advance(@ptrCast(self), phase);
    }

    /// Allows for overriding the related default method
    pub fn OnAdvance(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsItem_OnAdvance(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAdvance(self: ?*anyopaque, phase: i32) void {
        qtc.QGraphicsItem_QBaseAdvance(@ptrCast(self), phase);
    }

    pub fn ZValue(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self));
    }

    pub fn SetZValue(self: ?*anyopaque, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self), z);
    }

    pub fn StackBefore(self: ?*anyopaque, sibling: ?*anyopaque) void {
        qtc.QGraphicsItem_StackBefore(@ptrCast(self), @ptrCast(sibling));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn ChildrenBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self));
    }

    pub fn SceneBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsItem_QBaseShape(@ptrCast(self));
    }

    pub fn IsClipped(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self));
    }

    pub fn ClipPath(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsItem_ClipPath(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn CollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsItem_CollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnCollidesWithItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsItem_OnCollidesWithItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsItem_QBaseCollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    pub fn CollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsItem_CollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnCollidesWithPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsItem_OnCollidesWithPath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsItem_QBaseCollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    pub fn CollidingItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsItem_CollidingItems(@ptrCast(self));
    }

    pub fn IsObscured(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self));
    }

    pub fn IsObscured2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self), x, y, w, h);
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn BoundingRegion(self: ?*anyopaque, itemToDeviceTransform: ?*anyopaque) QtC.QRegion {
        return qtc.QGraphicsItem_BoundingRegion(@ptrCast(self), @ptrCast(itemToDeviceTransform));
    }

    pub fn BoundingRegionGranularity(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self));
    }

    pub fn SetBoundingRegionGranularity(self: ?*anyopaque, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self), granularity);
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn Update(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_Update(@ptrCast(self));
    }

    pub fn Update2(self: ?*anyopaque, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self), x, y, width, height);
    }

    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_Scroll(@ptrCast(self), dx, dy);
    }

    pub fn MapToItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    pub fn MapToParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent(@ptrCast(self), @ptrCast(point));
    }

    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    pub fn MapRectToItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    pub fn MapRectToParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent(@ptrCast(self), @ptrCast(rect));
    }

    pub fn MapRectToScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene(@ptrCast(self), @ptrCast(rect));
    }

    pub fn MapToItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    pub fn MapToParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToParent4(@ptrCast(self), @ptrCast(path));
    }

    pub fn MapToScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToScene4(@ptrCast(self), @ptrCast(path));
    }

    pub fn MapFromItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    pub fn MapFromParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent(@ptrCast(self), @ptrCast(point));
    }

    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    pub fn MapRectFromItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    pub fn MapRectFromParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self), @ptrCast(rect));
    }

    pub fn MapRectFromScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self), @ptrCast(rect));
    }

    pub fn MapFromItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    pub fn MapFromParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromParent4(@ptrCast(self), @ptrCast(path));
    }

    pub fn MapFromScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromScene4(@ptrCast(self), @ptrCast(path));
    }

    pub fn MapToItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem5(@ptrCast(self), @ptrCast(item), x, y);
    }

    pub fn MapToParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent5(@ptrCast(self), x, y);
    }

    pub fn MapToScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene5(@ptrCast(self), x, y);
    }

    pub fn MapRectToItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self), @ptrCast(item), x, y, w, h);
    }

    pub fn MapRectToParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self), x, y, w, h);
    }

    pub fn MapRectToScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self), x, y, w, h);
    }

    pub fn MapFromItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem5(@ptrCast(self), @ptrCast(item), x, y);
    }

    pub fn MapFromParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent5(@ptrCast(self), x, y);
    }

    pub fn MapFromScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene5(@ptrCast(self), x, y);
    }

    pub fn MapRectFromItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self), @ptrCast(item), x, y, w, h);
    }

    pub fn MapRectFromParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self), x, y, w, h);
    }

    pub fn MapRectFromScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self), x, y, w, h);
    }

    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    pub fn CommonAncestorItem(self: ?*anyopaque, other: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsUnderMouse(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QGraphicsItem_Data(@ptrCast(self), key);
    }

    pub fn SetData(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        qtc.QGraphicsItem_SetData(@ptrCast(self), key, @ptrCast(value));
    }

    pub fn InputMethodHints(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self));
    }

    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsItem_QBaseType(@ptrCast(self));
    }

    pub fn InstallSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    pub fn RemoveSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    pub fn UpdateMicroFocus(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_UpdateMicroFocus(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    pub fn SceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsItem_SceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnSceneEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsItem_OnSceneEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsItem_QBaseSceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsItem_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnSceneEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsItem_OnSceneEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsItem_QBaseSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnHoverEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnHoverMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnHoverLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsItem_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsItem_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsItem_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    pub fn ItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsItem_ItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnItemChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsItem_OnItemChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsItem_QBaseItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    pub fn AddToIndex(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_AddToIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAddToIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnAddToIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddToIndex(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_QBaseAddToIndex(@ptrCast(self));
    }

    pub fn RemoveFromIndex(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_RemoveFromIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveFromIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnRemoveFromIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveFromIndex(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_QBaseRemoveFromIndex(@ptrCast(self));
    }

    pub fn PrepareGeometryChange(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_PrepareGeometryChange(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPrepareGeometryChange(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItem_OnPrepareGeometryChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePrepareGeometryChange(self: ?*anyopaque, ) void {
        qtc.QGraphicsItem_QBasePrepareGeometryChange(@ptrCast(self));
    }

    pub fn SetFlag2(self: ?*anyopaque, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    pub fn SetCacheMode2(self: ?*anyopaque, mode: i32, cacheSize: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self), @intCast(mode), @ptrCast(cacheSize));
    }

    pub fn IsBlockedByModalPanel1(self: ?*anyopaque, blockingPanel: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self), @ptrCast(blockingPanel));
    }

    pub fn SetFocus1(self: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    pub fn EnsureVisible1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self), @ptrCast(rect));
    }

    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self), @ptrCast(rect), xmargin);
    }

    pub fn EnsureVisible3(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self), @ptrCast(rect), xmargin, ymargin);
    }

    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self), x, y, w, h, xmargin);
    }

    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self), x, y, w, h, xmargin, ymargin);
    }

    pub fn ItemTransform2(self: ?*anyopaque, other: ?*anyopaque, ok: *bool) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform2(@ptrCast(self), @ptrCast(other), @ptrCast(ok));
    }

    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    pub fn CollidingItems1(self: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QGraphicsItem_CollidingItems1(@ptrCast(self), @intCast(mode));
    }

    pub fn IsObscured1(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Update1(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Scroll3(self: ?*anyopaque, dx: f64, dy: f64, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Scroll3(@ptrCast(self), dx, dy, @ptrCast(rect));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsobject.html
pub const qgraphicsobject = struct {

    /// New constructs a new QGraphicsObject object.
    pub fn New() QtC.QGraphicsObject {
        return qtc.QGraphicsObject_new();
    }


    /// New2 constructs a new QGraphicsObject object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsObject_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsObject_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsobject.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    pub fn UpdateMicroFocus(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_UpdateMicroFocus(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    pub fn ParentChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self));
    }

    pub fn OnParentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OpacityChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self));
    }

    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibleChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self));
    }

    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn EnabledChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self));
    }

    pub fn OnEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn XChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self));
    }

    pub fn OnXChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn YChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self));
    }

    pub fn OnYChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ZChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self));
    }

    pub fn OnZChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RotationChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self));
    }

    pub fn OnRotationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ScaleChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self));
    }

    pub fn OnScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ChildrenChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self));
    }

    pub fn OnChildrenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WidthChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self));
    }

    pub fn OnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HeightChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self));
    }

    pub fn OnHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, ev: ?*anyopaque) bool {
        return qtc.QGraphicsObject_Event(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsObject_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, ev: ?*anyopaque) bool {
        return qtc.QGraphicsObject_QBaseEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsObject_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsobject.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsObject_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsobject.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html
pub const qabstractgraphicsshapeitem = struct {

    /// New constructs a new QAbstractGraphicsShapeItem object.
    pub fn New() QtC.QAbstractGraphicsShapeItem {
        return qtc.QAbstractGraphicsShapeItem_new();
    }


    /// New2 constructs a new QAbstractGraphicsShapeItem object.
    pub fn New2(parent: ?*anyopaque) QtC.QAbstractGraphicsShapeItem {
        return qtc.QAbstractGraphicsShapeItem_new2(@ptrCast(parent));
    }


    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QAbstractGraphicsShapeItem_Pen(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractGraphicsShapeItem_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QAbstractGraphicsShapeItem_Brush(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractGraphicsShapeItem_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QAbstractGraphicsShapeItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractGraphicsShapeItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QAbstractGraphicsShapeItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QAbstractGraphicsShapeItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QAbstractGraphicsShapeItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QAbstractGraphicsShapeItem_QBaseOpaqueArea(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractGraphicsShapeItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicspathitem.html
pub const qgraphicspathitem = struct {

    /// New constructs a new QGraphicsPathItem object.
    pub fn New() QtC.QGraphicsPathItem {
        return qtc.QGraphicsPathItem_new();
    }


    /// New2 constructs a new QGraphicsPathItem object.
    pub fn New2(path: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsPathItem_new2(@ptrCast(path));
    }


    /// New3 constructs a new QGraphicsPathItem object.
    pub fn New3(parent: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsPathItem_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QGraphicsPathItem object.
    pub fn New4(path: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsPathItem_new4(@ptrCast(path), @ptrCast(parent));
    }


    pub fn Path(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPathItem_Path(@ptrCast(self));
    }

    pub fn SetPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QGraphicsPathItem_SetPath(@ptrCast(self), @ptrCast(path));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsPathItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsPathItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsPathItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPathItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsPathItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPathItem_QBaseShape(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsPathItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsPathItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsPathItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsPathItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsPathItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsPathItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsPathItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsPathItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsPathItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPathItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsPathItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPathItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPathItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsPathItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPathItem_QBaseType(@ptrCast(self));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsPathItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsPathItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsPathItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsPathItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsPathItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsPathItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsPathItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsPathItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsPathItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsPathItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsrectitem.html
pub const qgraphicsrectitem = struct {

    /// New constructs a new QGraphicsRectItem object.
    pub fn New() QtC.QGraphicsRectItem {
        return qtc.QGraphicsRectItem_new();
    }


    /// New2 constructs a new QGraphicsRectItem object.
    pub fn New2(rect: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsRectItem_new2(@ptrCast(rect));
    }


    /// New3 constructs a new QGraphicsRectItem object.
    pub fn New3(x: f64, y: f64, w: f64, h: f64) QtC.QGraphicsRectItem {
        return qtc.QGraphicsRectItem_new3(x, y, w, h);
    }


    /// New4 constructs a new QGraphicsRectItem object.
    pub fn New4(parent: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsRectItem_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QGraphicsRectItem object.
    pub fn New5(rect: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsRectItem_new5(@ptrCast(rect), @ptrCast(parent));
    }


    /// New6 constructs a new QGraphicsRectItem object.
    pub fn New6(x: f64, y: f64, w: f64, h: f64, parent: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsRectItem_new6(x, y, w, h, @ptrCast(parent));
    }


    pub fn Rect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsRectItem_Rect(@ptrCast(self));
    }

    pub fn SetRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsRectItem_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SetRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsRectItem_SetRect2(@ptrCast(self), x, y, w, h);
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsRectItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsRectItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsRectItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsRectItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsRectItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsRectItem_QBaseShape(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsRectItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsRectItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsRectItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsRectItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsRectItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsRectItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsRectItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsRectItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsRectItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsRectItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsRectItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsRectItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsRectItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsRectItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsRectItem_QBaseType(@ptrCast(self));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsRectItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsRectItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsRectItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsRectItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsRectItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsRectItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsRectItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsRectItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsRectItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsRectItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsellipseitem.html
pub const qgraphicsellipseitem = struct {

    /// New constructs a new QGraphicsEllipseItem object.
    pub fn New() QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsEllipseItem_new();
    }


    /// New2 constructs a new QGraphicsEllipseItem object.
    pub fn New2(rect: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsEllipseItem_new2(@ptrCast(rect));
    }


    /// New3 constructs a new QGraphicsEllipseItem object.
    pub fn New3(x: f64, y: f64, w: f64, h: f64) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsEllipseItem_new3(x, y, w, h);
    }


    /// New4 constructs a new QGraphicsEllipseItem object.
    pub fn New4(parent: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsEllipseItem_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QGraphicsEllipseItem object.
    pub fn New5(rect: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsEllipseItem_new5(@ptrCast(rect), @ptrCast(parent));
    }


    /// New6 constructs a new QGraphicsEllipseItem object.
    pub fn New6(x: f64, y: f64, w: f64, h: f64, parent: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsEllipseItem_new6(x, y, w, h, @ptrCast(parent));
    }


    pub fn Rect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsEllipseItem_Rect(@ptrCast(self));
    }

    pub fn SetRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsEllipseItem_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SetRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsEllipseItem_SetRect2(@ptrCast(self), x, y, w, h);
    }

    pub fn StartAngle(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsEllipseItem_StartAngle(@ptrCast(self));
    }

    pub fn SetStartAngle(self: ?*anyopaque, angle: i32) void {
        qtc.QGraphicsEllipseItem_SetStartAngle(@ptrCast(self), angle);
    }

    pub fn SpanAngle(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsEllipseItem_SpanAngle(@ptrCast(self));
    }

    pub fn SetSpanAngle(self: ?*anyopaque, angle: i32) void {
        qtc.QGraphicsEllipseItem_SetSpanAngle(@ptrCast(self), angle);
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsEllipseItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsEllipseItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsEllipseItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsEllipseItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsEllipseItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsEllipseItem_QBaseShape(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsEllipseItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsEllipseItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsEllipseItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsEllipseItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEllipseItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsEllipseItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsEllipseItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsEllipseItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsEllipseItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsEllipseItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsEllipseItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsEllipseItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsEllipseItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsEllipseItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsEllipseItem_QBaseType(@ptrCast(self));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsEllipseItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsEllipseItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsEllipseItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsEllipseItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEllipseItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsEllipseItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsEllipseItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsEllipseItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsEllipseItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsEllipseItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicspolygonitem.html
pub const qgraphicspolygonitem = struct {

    /// New constructs a new QGraphicsPolygonItem object.
    pub fn New() QtC.QGraphicsPolygonItem {
        return qtc.QGraphicsPolygonItem_new();
    }


    /// New2 constructs a new QGraphicsPolygonItem object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsPolygonItem {
        return qtc.QGraphicsPolygonItem_new2(@ptrCast(parent));
    }


    pub fn FillRule(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPolygonItem_FillRule(@ptrCast(self));
    }

    pub fn SetFillRule(self: ?*anyopaque, rule: i32) void {
        qtc.QGraphicsPolygonItem_SetFillRule(@ptrCast(self), @intCast(rule));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsPolygonItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsPolygonItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsPolygonItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPolygonItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsPolygonItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPolygonItem_QBaseShape(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsPolygonItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsPolygonItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsPolygonItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsPolygonItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsPolygonItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsPolygonItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsPolygonItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsPolygonItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsPolygonItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPolygonItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsPolygonItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPolygonItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPolygonItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsPolygonItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPolygonItem_QBaseType(@ptrCast(self));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsPolygonItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsPolygonItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsPolygonItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsPolygonItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsPolygonItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsPolygonItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsPolygonItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsPolygonItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsPolygonItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsPolygonItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicslineitem.html
pub const qgraphicslineitem = struct {

    /// New constructs a new QGraphicsLineItem object.
    pub fn New() QtC.QGraphicsLineItem {
        return qtc.QGraphicsLineItem_new();
    }


    /// New2 constructs a new QGraphicsLineItem object.
    pub fn New2(line: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsLineItem_new2(@ptrCast(line));
    }


    /// New3 constructs a new QGraphicsLineItem object.
    pub fn New3(x1: f64, y1: f64, x2: f64, y2: f64) QtC.QGraphicsLineItem {
        return qtc.QGraphicsLineItem_new3(x1, y1, x2, y2);
    }


    /// New4 constructs a new QGraphicsLineItem object.
    pub fn New4(parent: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsLineItem_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QGraphicsLineItem object.
    pub fn New5(line: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsLineItem_new5(@ptrCast(line), @ptrCast(parent));
    }


    /// New6 constructs a new QGraphicsLineItem object.
    pub fn New6(x1: f64, y1: f64, x2: f64, y2: f64, parent: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsLineItem_new6(x1, y1, x2, y2, @ptrCast(parent));
    }


    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QGraphicsLineItem_Pen(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QGraphicsLineItem_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Line(self: ?*anyopaque, ) QtC.QLineF {
        return qtc.QGraphicsLineItem_Line(@ptrCast(self));
    }

    pub fn SetLine(self: ?*anyopaque, line: ?*anyopaque) void {
        qtc.QGraphicsLineItem_SetLine(@ptrCast(self), @ptrCast(line));
    }

    pub fn SetLine2(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QGraphicsLineItem_SetLine2(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsLineItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsLineItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsLineItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsLineItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsLineItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsLineItem_QBaseShape(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsLineItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsLineItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsLineItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsLineItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLineItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsLineItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsLineItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsLineItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsLineItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsLineItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsLineItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsLineItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsLineItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsLineItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsLineItem_QBaseType(@ptrCast(self));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsLineItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsLineItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsLineItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsLineItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLineItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsLineItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsLineItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsLineItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsLineItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsLineItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicspixmapitem.html
pub const qgraphicspixmapitem = struct {

    /// New constructs a new QGraphicsPixmapItem object.
    pub fn New() QtC.QGraphicsPixmapItem {
        return qtc.QGraphicsPixmapItem_new();
    }


    /// New2 constructs a new QGraphicsPixmapItem object.
    pub fn New2(pixmap: ?*anyopaque) QtC.QGraphicsPixmapItem {
        return qtc.QGraphicsPixmapItem_new2(@ptrCast(pixmap));
    }


    /// New3 constructs a new QGraphicsPixmapItem object.
    pub fn New3(parent: ?*anyopaque) QtC.QGraphicsPixmapItem {
        return qtc.QGraphicsPixmapItem_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QGraphicsPixmapItem object.
    pub fn New4(pixmap: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsPixmapItem {
        return qtc.QGraphicsPixmapItem_new4(@ptrCast(pixmap), @ptrCast(parent));
    }


    pub fn Pixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QGraphicsPixmapItem_Pixmap(@ptrCast(self));
    }

    pub fn SetPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QGraphicsPixmapItem_SetPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn TransformationMode(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPixmapItem_TransformationMode(@ptrCast(self));
    }

    pub fn SetTransformationMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsPixmapItem_SetTransformationMode(@ptrCast(self), @intCast(mode));
    }

    pub fn Offset(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsPixmapItem_Offset(@ptrCast(self));
    }

    pub fn SetOffset(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QGraphicsPixmapItem_SetOffset(@ptrCast(self), @ptrCast(offset));
    }

    pub fn SetOffset2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QGraphicsPixmapItem_SetOffset2(@ptrCast(self), x, y);
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsPixmapItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsPixmapItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsPixmapItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPixmapItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsPixmapItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPixmapItem_QBaseShape(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsPixmapItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsPixmapItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsPixmapItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsPixmapItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsPixmapItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsPixmapItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsPixmapItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsPixmapItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsPixmapItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPixmapItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsPixmapItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsPixmapItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPixmapItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsPixmapItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPixmapItem_QBaseType(@ptrCast(self));
    }

    pub fn ShapeMode(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsPixmapItem_ShapeMode(@ptrCast(self));
    }

    pub fn SetShapeMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsPixmapItem_SetShapeMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsPixmapItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsPixmapItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsPixmapItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsPixmapItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsPixmapItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsPixmapItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsPixmapItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsPixmapItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsPixmapItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsPixmapItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicstextitem.html
pub const qgraphicstextitem = struct {

    /// New constructs a new QGraphicsTextItem object.
    pub fn New() QtC.QGraphicsTextItem {
        return qtc.QGraphicsTextItem_new();
    }


    /// New2 constructs a new QGraphicsTextItem object.
    pub fn New2(text: []const u8) QtC.QGraphicsTextItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QGraphicsTextItem_new2(text_str);
    }


    /// New3 constructs a new QGraphicsTextItem object.
    pub fn New3(parent: ?*anyopaque) QtC.QGraphicsTextItem {
        return qtc.QGraphicsTextItem_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QGraphicsTextItem object.
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QGraphicsTextItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QGraphicsTextItem_new4(text_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsTextItem_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicstextitem.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToHtml(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsTextItem_ToHtml(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicstextitem.ToHtml: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.libqt_string{
    .len = html.len,
    .data = html.ptr,
};
qtc.QGraphicsTextItem_SetHtml(@ptrCast(self), html_str);
    }

    pub fn ToPlainText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsTextItem_ToPlainText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicstextitem.ToPlainText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QGraphicsTextItem_SetPlainText(@ptrCast(self), text_str);
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QGraphicsTextItem_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsTextItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn SetDefaultTextColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QGraphicsTextItem_SetDefaultTextColor(@ptrCast(self), @ptrCast(c));
    }

    pub fn DefaultTextColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QGraphicsTextItem_DefaultTextColor(@ptrCast(self));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsTextItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsTextItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsTextItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsTextItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsTextItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsTextItem_QBaseShape(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsTextItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsTextItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsTextItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsTextItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsTextItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsTextItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsTextItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsTextItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsTextItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsTextItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsTextItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsTextItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsTextItem_QBaseType(@ptrCast(self));
    }

    pub fn SetTextWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsTextItem_SetTextWidth(@ptrCast(self), width);
    }

    pub fn TextWidth(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsTextItem_TextWidth(@ptrCast(self));
    }

    pub fn AdjustSize(self: ?*anyopaque, ) void {
        qtc.QGraphicsTextItem_AdjustSize(@ptrCast(self));
    }

    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QGraphicsTextItem_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    pub fn Document(self: ?*anyopaque, ) QtC.QTextDocument {
        return qtc.QGraphicsTextItem_Document(@ptrCast(self));
    }

    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsTextItem_SetTextInteractionFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn TextInteractionFlags(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsTextItem_TextInteractionFlags(@ptrCast(self));
    }

    pub fn SetTabChangesFocus(self: ?*anyopaque, b: bool) void {
        qtc.QGraphicsTextItem_SetTabChangesFocus(@ptrCast(self), b);
    }

    pub fn TabChangesFocus(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsTextItem_TabChangesFocus(@ptrCast(self));
    }

    pub fn SetOpenExternalLinks(self: ?*anyopaque, open: bool) void {
        qtc.QGraphicsTextItem_SetOpenExternalLinks(@ptrCast(self), open);
    }

    pub fn OpenExternalLinks(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsTextItem_OpenExternalLinks(@ptrCast(self));
    }

    pub fn SetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QGraphicsTextItem_SetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn TextCursor(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QGraphicsTextItem_TextCursor(@ptrCast(self));
    }

    pub fn LinkActivated(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QGraphicsTextItem_LinkActivated(@ptrCast(self), param1_str);
    }

    pub fn OnLinkActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QGraphicsTextItem_Connect_LinkActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LinkHovered(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QGraphicsTextItem_LinkHovered(@ptrCast(self), param1_str);
    }

    pub fn OnLinkHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QGraphicsTextItem_Connect_LinkHovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsTextItem_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnSceneEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsTextItem_OnSceneEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsTextItem_QBaseSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnHoverEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnHoverMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnHoverLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsTextItem_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsTextItem_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsTextItem_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsTextItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsTextItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsTextItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsTextItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsTextItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsTextItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsTextItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsTextItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsTextItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsTextItem_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicstextitem.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsTextItem_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicstextitem.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsTextItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicssimpletextitem.html
pub const qgraphicssimpletextitem = struct {

    /// New constructs a new QGraphicsSimpleTextItem object.
    pub fn New() QtC.QGraphicsSimpleTextItem {
        return qtc.QGraphicsSimpleTextItem_new();
    }


    /// New2 constructs a new QGraphicsSimpleTextItem object.
    pub fn New2(text: []const u8) QtC.QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QGraphicsSimpleTextItem_new2(text_str);
    }


    /// New3 constructs a new QGraphicsSimpleTextItem object.
    pub fn New3(parent: ?*anyopaque) QtC.QGraphicsSimpleTextItem {
        return qtc.QGraphicsSimpleTextItem_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QGraphicsSimpleTextItem object.
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QGraphicsSimpleTextItem_new4(text_str, @ptrCast(parent));
    }


    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QGraphicsSimpleTextItem_SetText(@ptrCast(self), text_str);
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsSimpleTextItem_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssimpletextitem.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsSimpleTextItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QGraphicsSimpleTextItem_Font(@ptrCast(self));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsSimpleTextItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsSimpleTextItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsSimpleTextItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsSimpleTextItem_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsSimpleTextItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsSimpleTextItem_QBaseShape(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsSimpleTextItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSimpleTextItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsSimpleTextItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSimpleTextItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSimpleTextItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSimpleTextItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsSimpleTextItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSimpleTextItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsSimpleTextItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsSimpleTextItem_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsSimpleTextItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsSimpleTextItem_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSimpleTextItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsSimpleTextItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSimpleTextItem_QBaseType(@ptrCast(self));
    }

    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsSimpleTextItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsSimpleTextItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsSimpleTextItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsSimpleTextItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSimpleTextItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsSimpleTextItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSimpleTextItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsSimpleTextItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSimpleTextItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSimpleTextItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsitemgroup.html
pub const qgraphicsitemgroup = struct {

    /// New constructs a new QGraphicsItemGroup object.
    pub fn New() QtC.QGraphicsItemGroup {
        return qtc.QGraphicsItemGroup_new();
    }


    /// New2 constructs a new QGraphicsItemGroup object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsItemGroup {
        return qtc.QGraphicsItemGroup_new2(@ptrCast(parent));
    }


    pub fn AddToGroup(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItemGroup_AddToGroup(@ptrCast(self), @ptrCast(item));
    }

    pub fn RemoveFromGroup(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItemGroup_RemoveFromGroup(@ptrCast(self), @ptrCast(item));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsItemGroup_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsItemGroup_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsItemGroup_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsItemGroup_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItemGroup_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsItemGroup_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsItemGroup_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsItemGroup_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsItemGroup_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsItemGroup_OpaqueArea(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsItemGroup_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpaqueArea(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsItemGroup_QBaseOpaqueArea(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsItemGroup_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsItemGroup_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsItemGroup_QBaseType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsItemGroup_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/graphicsitem.html#types
pub const enums = struct {
    pub const GraphicsItemFlag = enum {
        pub const ItemIsMovable: i32 = 1;
        pub const ItemIsSelectable: i32 = 2;
        pub const ItemIsFocusable: i32 = 4;
        pub const ItemClipsToShape: i32 = 8;
        pub const ItemClipsChildrenToShape: i32 = 16;
        pub const ItemIgnoresTransformations: i32 = 32;
        pub const ItemIgnoresParentOpacity: i32 = 64;
        pub const ItemDoesntPropagateOpacityToChildren: i32 = 128;
        pub const ItemStacksBehindParent: i32 = 256;
        pub const ItemUsesExtendedStyleOption: i32 = 512;
        pub const ItemHasNoContents: i32 = 1024;
        pub const ItemSendsGeometryChanges: i32 = 2048;
        pub const ItemAcceptsInputMethod: i32 = 4096;
        pub const ItemNegativeZStacksBehindParent: i32 = 8192;
        pub const ItemIsPanel: i32 = 16384;
        pub const ItemIsFocusScope: i32 = 32768;
        pub const ItemSendsScenePositionChanges: i32 = 65536;
        pub const ItemStopsClickFocusPropagation: i32 = 131072;
        pub const ItemStopsFocusHandling: i32 = 262144;
        pub const ItemContainsChildrenInShape: i32 = 524288;
    };

    pub const GraphicsItemChange = enum {
        pub const ItemPositionChange: i32 = 0;
        pub const ItemVisibleChange: i32 = 2;
        pub const ItemEnabledChange: i32 = 3;
        pub const ItemSelectedChange: i32 = 4;
        pub const ItemParentChange: i32 = 5;
        pub const ItemChildAddedChange: i32 = 6;
        pub const ItemChildRemovedChange: i32 = 7;
        pub const ItemTransformChange: i32 = 8;
        pub const ItemPositionHasChanged: i32 = 9;
        pub const ItemTransformHasChanged: i32 = 10;
        pub const ItemSceneChange: i32 = 11;
        pub const ItemVisibleHasChanged: i32 = 12;
        pub const ItemEnabledHasChanged: i32 = 13;
        pub const ItemSelectedHasChanged: i32 = 14;
        pub const ItemParentHasChanged: i32 = 15;
        pub const ItemSceneHasChanged: i32 = 16;
        pub const ItemCursorChange: i32 = 17;
        pub const ItemCursorHasChanged: i32 = 18;
        pub const ItemToolTipChange: i32 = 19;
        pub const ItemToolTipHasChanged: i32 = 20;
        pub const ItemFlagsChange: i32 = 21;
        pub const ItemFlagsHaveChanged: i32 = 22;
        pub const ItemZValueChange: i32 = 23;
        pub const ItemZValueHasChanged: i32 = 24;
        pub const ItemOpacityChange: i32 = 25;
        pub const ItemOpacityHasChanged: i32 = 26;
        pub const ItemScenePositionHasChanged: i32 = 27;
        pub const ItemRotationChange: i32 = 28;
        pub const ItemRotationHasChanged: i32 = 29;
        pub const ItemScaleChange: i32 = 30;
        pub const ItemScaleHasChanged: i32 = 31;
        pub const ItemTransformOriginPointChange: i32 = 32;
        pub const ItemTransformOriginPointHasChanged: i32 = 33;
    };

    pub const CacheMode = enum {
        pub const NoCache: i32 = 0;
        pub const ItemCoordinateCache: i32 = 1;
        pub const DeviceCoordinateCache: i32 = 2;
    };

    pub const PanelModality = enum {
        pub const NonModal: i32 = 0;
        pub const PanelModal: i32 = 1;
        pub const SceneModal: i32 = 2;
    };

    pub const Extension = enum {
        pub const UserExtension: i64 = 2147483648;
    };

    pub const ShapeMode = enum {
        pub const MaskShape: i32 = 0;
        pub const BoundingRectShape: i32 = 1;
        pub const HeuristicMaskShape: i32 = 2;
    };

};
