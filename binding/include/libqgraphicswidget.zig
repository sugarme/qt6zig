const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicswidget.html
pub const qgraphicswidget = struct {

    /// New constructs a new QGraphicsWidget object.
    pub fn New() QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_new();
    }


    /// New2 constructs a new QGraphicsWidget object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_new2(@ptrCast(parent));
    }


    /// New3 constructs a new QGraphicsWidget object.
    pub fn New3(parent: ?*anyopaque, wFlags: i64) QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_new3(@ptrCast(parent), @intCast(wFlags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Layout(self: ?*anyopaque, ) QtC.QGraphicsLayout {
        return qtc.QGraphicsWidget_Layout(@ptrCast(self));
    }

    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    pub fn AdjustSize(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self));
    }

    pub fn LayoutDirection(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self));
    }

    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn UnsetLayoutDirection(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    pub fn Style(self: ?*anyopaque, ) QtC.QStyle {
        return qtc.QGraphicsWidget_Style(@ptrCast(self));
    }

    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QGraphicsWidget_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn Palette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QGraphicsWidget_Palette(@ptrCast(self));
    }

    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    pub fn AutoFillBackground(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self));
    }

    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsWidget_Resize(@ptrCast(self), @ptrCast(size));
    }

    pub fn Resize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self), w, h);
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QGraphicsWidget_Size(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SetGeometry2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self), x, y, w, h);
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsWidget_Rect(@ptrCast(self));
    }

    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self), left, top, right, bottom);
    }

    pub fn SetContentsMargins2(self: ?*anyopaque, margins: QtC.QMarginsF) void {
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Allows for overriding the related default method
    pub fn OnGetContentsMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnGetContentsMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_QBaseGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    pub fn SetWindowFrameMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self), left, top, right, bottom);
    }

    pub fn SetWindowFrameMargins2(self: ?*anyopaque, margins: QtC.QMarginsF) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self), @ptrCast(margins));
    }

    pub fn GetWindowFrameMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    pub fn UnsetWindowFrameMargins(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self));
    }

    pub fn WindowFrameGeometry(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self));
    }

    pub fn WindowFrameRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self));
    }

    pub fn WindowFlags(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self));
    }

    pub fn WindowType(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self));
    }

    pub fn SetWindowFlags(self: ?*anyopaque, wFlags: i64) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self), @intCast(wFlags));
    }

    pub fn IsActiveWindow(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self));
    }

    pub fn SetWindowTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QGraphicsWidget_SetWindowTitle(@ptrCast(self), title_str);
    }

    pub fn WindowTitle(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.WindowTitle: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FocusPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self));
    }

    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QGraphicsWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn SetTabOrder(first: ?*anyopaque, second: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetTabOrder(@ptrCast(first), @ptrCast(second));
    }

    pub fn FocusWidget(self: ?*anyopaque, ) QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_FocusWidget(@ptrCast(self));
    }

    pub fn GrabShortcut(self: ?*anyopaque, sequence: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self), @ptrCast(sequence));
    }

    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self), id);
    }

    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self), id);
    }

    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self), id);
    }

    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    pub fn AddActions(self: ?*anyopaque, actions: []const u8) void {
        qtc.QGraphicsWidget_AddActions(@ptrCast(self), @ptrCast(actions));
    }

    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []const u8) void {
        qtc.QGraphicsWidget_InsertActions(@ptrCast(self), @ptrCast(before), @ptrCast(actions));
    }

    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    pub fn Actions(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsWidget_Actions(@ptrCast(self));
    }

    pub fn SetAttribute(self: ?*anyopaque, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self), @intCast(attribute));
    }

    pub fn TestAttribute(self: ?*anyopaque, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self), @intCast(attribute));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsWidget_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsWidget_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsWidget_QBaseType(@ptrCast(self));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsWidget_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn PaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsWidget_PaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintWindowFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnPaintWindowFrame(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBasePaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsWidget_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsWidget_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsWidget_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsWidget_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShape(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsWidget_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShape(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QGraphicsWidget_QBaseShape(@ptrCast(self));
    }

    pub fn GeometryChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self));
    }

    pub fn OnGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LayoutChanged(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self));
    }

    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Close(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QGraphicsWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsWidget_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsWidget_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsWidget_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    pub fn UpdateGeometry(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnUpdateGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateGeometry(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_QBaseUpdateGeometry(@ptrCast(self));
    }

    pub fn ItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsWidget_ItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnItemChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsWidget_OnItemChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsWidget_QBaseItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    pub fn PropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
    .len = propertyName.len,
    .data = propertyName.ptr,
};
return qtc.QGraphicsWidget_PropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnPropertyChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsWidget_OnPropertyChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
    .len = propertyName.len,
    .data = propertyName.ptr,
};
return qtc.QGraphicsWidget_QBasePropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnSceneEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnSceneEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_WindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnWindowFrameEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnWindowFrameEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseWindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn WindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_WindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnWindowFrameSectionAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsWidget_OnWindowFrameSectionAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_QBaseWindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PolishEvent(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_PolishEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPolishEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnPolishEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePolishEvent(self: ?*anyopaque, ) void {
        qtc.QGraphicsWidget_QBasePolishEvent(@ptrCast(self));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnHoverMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnHoverLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn GrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_GrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnGrabMouseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnGrabMouseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseGrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_UngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnUngrabMouseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnUngrabMouseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseUngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn GrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_GrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnGrabKeyboardEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnGrabKeyboardEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseGrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_UngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnUngrabKeyboardEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnUngrabKeyboardEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseUngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GrabShortcut2(self: ?*anyopaque, sequence: ?*anyopaque, context: i32) i32 {
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self), @ptrCast(sequence), @intCast(context));
    }

    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self), id, enabled);
    }

    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self), id, enabled);
    }

    pub fn SetAttribute2(self: ?*anyopaque, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self), @intCast(attribute), on);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/graphicswidget.html#types
pub const enums = struct {
};
