const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwindow.html
pub const qwindow = struct {

    /// New constructs a new QWindow object.
    pub fn New() QtC.QWindow {
        return qtc.QWindow_new();
    }


    /// New2 constructs a new QWindow object.
    pub fn New2(parent: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_new2(@ptrCast(parent));
    }


    /// New3 constructs a new QWindow object.
    pub fn New3(screen: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_new3(@ptrCast(screen));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSurfaceType(self: ?*anyopaque, surfaceType: i32) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self), @intCast(surfaceType));
    }

    pub fn SurfaceType(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_SurfaceType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSurfaceType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QWindow_OnSurfaceType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSurfaceType(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_QBaseSurfaceType(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self));
    }

    pub fn Visibility(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_Visibility(@ptrCast(self));
    }

    pub fn SetVisibility(self: ?*anyopaque, v: i32) void {
        qtc.QWindow_SetVisibility(@ptrCast(self), @intCast(v));
    }

    pub fn Create(self: ?*anyopaque, ) void {
        qtc.QWindow_Create(@ptrCast(self));
    }

    pub fn WinId(self: ?*anyopaque, ) usize {
        return qtc.QWindow_WinId(@ptrCast(self));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QWindow_Parent(@ptrCast(self));
    }

    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWindow_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    pub fn IsTopLevel(self: ?*anyopaque, ) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self));
    }

    pub fn IsModal(self: ?*anyopaque, ) bool {
        return qtc.QWindow_IsModal(@ptrCast(self));
    }

    pub fn Modality(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_Modality(@ptrCast(self));
    }

    pub fn SetModality(self: ?*anyopaque, modality: i32) void {
        qtc.QWindow_SetModality(@ptrCast(self), @intCast(modality));
    }

    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QWindow_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QWindow_Format(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSurfaceFormat) void {
        qtc.QWindow_OnFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormat(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QWindow_QBaseFormat(@ptrCast(self));
    }

    pub fn RequestedFormat(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QWindow_RequestedFormat(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        qtc.QWindow_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn Flags(self: ?*anyopaque, ) i64 {
        return qtc.QWindow_Flags(@ptrCast(self));
    }

    pub fn SetFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWindow_SetFlag(@ptrCast(self), @intCast(param1));
    }

    pub fn Type(self: ?*anyopaque, ) i64 {
        return qtc.QWindow_Type(@ptrCast(self));
    }

    pub fn Title(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_Title(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Title: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self), level);
    }

    pub fn Opacity(self: ?*anyopaque, ) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self));
    }

    pub fn SetMask(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QWindow_SetMask(@ptrCast(self), @ptrCast(region));
    }

    pub fn Mask(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QWindow_Mask(@ptrCast(self));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QWindow_IsActive(@ptrCast(self));
    }

    pub fn ReportContentOrientationChange(self: ?*anyopaque, orientation: i32) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self), @intCast(orientation));
    }

    pub fn ContentOrientation(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self));
    }

    pub fn DevicePixelRatio(self: ?*anyopaque, ) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self));
    }

    pub fn WindowState(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_WindowState(@ptrCast(self));
    }

    pub fn WindowStates(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_WindowStates(@ptrCast(self));
    }

    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWindow_SetWindowState(@ptrCast(self), @intCast(state));
    }

    pub fn SetWindowStates(self: ?*anyopaque, states: i32) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self), @intCast(states));
    }

    pub fn SetTransientParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWindow_SetTransientParent(@ptrCast(self), @ptrCast(parent));
    }

    pub fn TransientParent(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QWindow_TransientParent(@ptrCast(self));
    }

    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWindow_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    pub fn IsExposed(self: ?*anyopaque, ) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self));
    }

    pub fn MinimumWidth(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self));
    }

    pub fn MinimumHeight(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self));
    }

    pub fn MaximumWidth(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self));
    }

    pub fn MaximumHeight(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWindow_MinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWindow_MaximumSize(@ptrCast(self));
    }

    pub fn BaseSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWindow_BaseSize(@ptrCast(self));
    }

    pub fn SizeIncrement(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWindow_SizeIncrement(@ptrCast(self));
    }

    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn SetBaseSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetBaseSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn SetSizeIncrement(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetSizeIncrement(@ptrCast(self), @ptrCast(size));
    }

    pub fn Geometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWindow_Geometry(@ptrCast(self));
    }

    pub fn FrameMargins(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QWindow_FrameMargins(@ptrCast(self));
    }

    pub fn FrameGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWindow_FrameGeometry(@ptrCast(self));
    }

    pub fn FramePosition(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QWindow_FramePosition(@ptrCast(self));
    }

    pub fn SetFramePosition(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QWindow_SetFramePosition(@ptrCast(self), @ptrCast(point));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_Height(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QWindow_Y(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWindow_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWindow_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWindow_QBaseSize(@ptrCast(self));
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QWindow_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, pt: ?*anyopaque) void {
        qtc.QWindow_SetPosition(@ptrCast(self), @ptrCast(pt));
    }

    pub fn SetPosition2(self: ?*anyopaque, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self), posx, posy);
    }

    pub fn Resize(self: ?*anyopaque, newSize: ?*anyopaque) void {
        qtc.QWindow_Resize(@ptrCast(self), @ptrCast(newSize));
    }

    pub fn Resize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self), w, h);
    }

    pub fn SetFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
    .len = filePath.len,
    .data = filePath.ptr,
};
qtc.QWindow_SetFilePath(@ptrCast(self), filePath_str);
    }

    pub fn FilePath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_FilePath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.FilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWindow_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QWindow_Icon(@ptrCast(self));
    }

    pub fn Destroy(self: ?*anyopaque, ) void {
        qtc.QWindow_Destroy(@ptrCast(self));
    }

    pub fn Handle(self: ?*anyopaque, ) QPlatformWindow {
        return @ptrCast(qtc.QWindow_Handle(@ptrCast(self)));
    }

    pub fn SetKeyboardGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self), grab);
    }

    pub fn SetMouseGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self), grab);
    }

    pub fn Screen(self: ?*anyopaque, ) QtC.QScreen {
        return qtc.QWindow_Screen(@ptrCast(self));
    }

    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWindow_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    pub fn AccessibleRoot(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QWindow_AccessibleRoot(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAccessibleRoot(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QWindow_OnAccessibleRoot(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAccessibleRoot(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QWindow_QBaseAccessibleRoot(@ptrCast(self));
    }

    pub fn FocusObject(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QWindow_FocusObject(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusObject(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QObject) void {
        qtc.QWindow_OnFocusObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusObject(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QWindow_QBaseFocusObject(@ptrCast(self));
    }

    pub fn MapToGlobal(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPointF {
        return qtc.QWindow_MapToGlobal(@ptrCast(self), @ptrCast(pos));
    }

    pub fn MapFromGlobal(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPointF {
        return qtc.QWindow_MapFromGlobal(@ptrCast(self), @ptrCast(pos));
    }

    pub fn MapToGlobal2(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_MapToGlobal2(@ptrCast(self), @ptrCast(pos));
    }

    pub fn MapFromGlobal2(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_MapFromGlobal2(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Cursor(self: ?*anyopaque, ) QtC.QCursor {
        return qtc.QWindow_Cursor(@ptrCast(self));
    }

    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWindow_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn UnsetCursor(self: ?*anyopaque, ) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self));
    }

    pub fn FromWinId(id: usize) QtC.QWindow {
        return qtc.QWindow_FromWinId(id);
    }

    pub fn SetVulkanInstance(self: ?*anyopaque, instance: *QVulkanInstance) void {
        qtc.QWindow_SetVulkanInstance(@ptrCast(self), @ptrCast(instance));
    }

    pub fn VulkanInstance(self: ?*anyopaque, ) QVulkanInstance {
        return @ptrCast(qtc.QWindow_VulkanInstance(@ptrCast(self)));
    }

    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QWindow_ResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QWindow_OnResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QWindow_QBaseResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn RequestActivate(self: ?*anyopaque, ) void {
        qtc.QWindow_RequestActivate(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self), visible);
    }

    pub fn Show(self: ?*anyopaque, ) void {
        qtc.QWindow_Show(@ptrCast(self));
    }

    pub fn Hide(self: ?*anyopaque, ) void {
        qtc.QWindow_Hide(@ptrCast(self));
    }

    pub fn ShowMinimized(self: ?*anyopaque, ) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self));
    }

    pub fn ShowMaximized(self: ?*anyopaque, ) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self));
    }

    pub fn ShowFullScreen(self: ?*anyopaque, ) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self));
    }

    pub fn ShowNormal(self: ?*anyopaque, ) void {
        qtc.QWindow_ShowNormal(@ptrCast(self));
    }

    pub fn Close(self: ?*anyopaque, ) bool {
        return qtc.QWindow_Close(@ptrCast(self));
    }

    pub fn Raise(self: ?*anyopaque, ) void {
        qtc.QWindow_Raise(@ptrCast(self));
    }

    pub fn Lower(self: ?*anyopaque, ) void {
        qtc.QWindow_Lower(@ptrCast(self));
    }

    pub fn StartSystemResize(self: ?*anyopaque, edges: i32) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self), @intCast(edges));
    }

    pub fn StartSystemMove(self: ?*anyopaque, ) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self));
    }

    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QWindow_SetTitle(@ptrCast(self), title_str);
    }

    pub fn SetX(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self), arg);
    }

    pub fn SetY(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self), arg);
    }

    pub fn SetWidth(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self), arg);
    }

    pub fn SetHeight(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self), arg);
    }

    pub fn SetGeometry(self: ?*anyopaque, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self), posx, posy, w, h);
    }

    pub fn SetGeometry2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QWindow_SetGeometry2(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SetMinimumWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self), w);
    }

    pub fn SetMinimumHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self), h);
    }

    pub fn SetMaximumWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self), w);
    }

    pub fn SetMaximumHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self), h);
    }

    pub fn Alert(self: ?*anyopaque, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self), msec);
    }

    pub fn RequestUpdate(self: ?*anyopaque, ) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self));
    }

    pub fn ScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWindow_ScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    pub fn OnScreenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModalityChanged(self: ?*anyopaque, modality: i32) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self), @intCast(modality));
    }

    pub fn OnModalityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WindowStateChanged(self: ?*anyopaque, windowState: i32) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self), @intCast(windowState));
    }

    pub fn OnWindowStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QWindow_WindowTitleChanged(@ptrCast(self), title_str);
    }

    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn XChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self), arg);
    }

    pub fn OnXChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn YChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self), arg);
    }

    pub fn OnYChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self), arg);
    }

    pub fn OnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self), arg);
    }

    pub fn OnHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinimumWidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self), arg);
    }

    pub fn OnMinimumWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinimumHeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self), arg);
    }

    pub fn OnMinimumHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaximumWidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self), arg);
    }

    pub fn OnMaximumWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaximumHeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self), arg);
    }

    pub fn OnMaximumHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibleChanged(self: ?*anyopaque, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self), arg);
    }

    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibilityChanged(self: ?*anyopaque, visibility: i32) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self), @intCast(visibility));
    }

    pub fn OnVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ActiveChanged(self: ?*anyopaque, ) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self));
    }

    pub fn OnActiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ContentOrientationChanged(self: ?*anyopaque, orientation: i32) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    pub fn OnContentOrientationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FocusObjectChanged(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QWindow_FocusObjectChanged(@ptrCast(self), @ptrCast(object));
    }

    pub fn OnFocusObjectChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OpacityChanged(self: ?*anyopaque, opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self), opacity);
    }

    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TransientParentChanged(self: ?*anyopaque, transientParent: ?*anyopaque) void {
        qtc.QWindow_TransientParentChanged(@ptrCast(self), @ptrCast(transientParent));
    }

    pub fn OnTransientParentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnExposeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnExposeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn HideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_HideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseHideEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn CloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_CloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseCloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWindow_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindow_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWindow_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_KeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn TouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_TouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTouchEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnTouchEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseTouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn TabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_TabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnTabletEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseTabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QWindow_NativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Allows for overriding the related default method
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QWindow_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QWindow_QBaseNativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Parent1(self: ?*anyopaque, mode: i32) QtC.QWindow {
        return qtc.QWindow_Parent1(@ptrCast(self), @intCast(mode));
    }

    pub fn SetFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self), @intCast(param1), on);
    }

    pub fn IsAncestorOf2(self: ?*anyopaque, child: ?*anyopaque, mode: i32) bool {
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self), @ptrCast(child), @intCast(mode));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWindow_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/window.html#types
pub const enums = struct {
    pub const Visibility = enum {
        pub const Hidden: i32 = 0;
        pub const AutomaticVisibility: i32 = 1;
        pub const Windowed: i32 = 2;
        pub const Minimized: i32 = 3;
        pub const Maximized: i32 = 4;
        pub const FullScreen: i32 = 5;
    };

    pub const AncestorMode = enum {
        pub const ExcludeTransients: i32 = 0;
        pub const IncludeTransients: i32 = 1;
    };

};
