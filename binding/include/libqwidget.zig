const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwidgetdata.html
pub const qwidgetdata = struct {

    /// New constructs a new QWidgetData object.
    pub fn New(param1: ?*anyopaque) QtC.QWidgetData {
        return qtc.QWidgetData_new(@ptrCast(param1));
    }


    pub fn Winid(self: ?*anyopaque, ) u64 {
        return qtc.QWidgetData_Winid(@ptrCast(self));
    }

    pub fn SetWinid(self: ?*anyopaque, winid: u64) void {
        qtc.QWidgetData_SetWinid(@ptrCast(self), winid);
    }

    pub fn WidgetAttributes(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_WidgetAttributes(@ptrCast(self));
    }

    pub fn SetWidgetAttributes(self: ?*anyopaque, widget_attributes: u32) void {
        qtc.QWidgetData_SetWidgetAttributes(@ptrCast(self), widget_attributes);
    }

    pub fn WindowFlags(self: ?*anyopaque, ) i64 {
        return qtc.QWidgetData_WindowFlags(@ptrCast(self));
    }

    pub fn SetWindowFlags(self: ?*anyopaque, window_flags: i64) void {
        qtc.QWidgetData_SetWindowFlags(@ptrCast(self), @intCast(window_flags));
    }

    pub fn WindowState(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_WindowState(@ptrCast(self));
    }

    pub fn SetWindowState(self: ?*anyopaque, window_state: u32) void {
        qtc.QWidgetData_SetWindowState(@ptrCast(self), window_state);
    }

    pub fn FocusPolicy(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_FocusPolicy(@ptrCast(self));
    }

    pub fn SetFocusPolicy(self: ?*anyopaque, focus_policy: u32) void {
        qtc.QWidgetData_SetFocusPolicy(@ptrCast(self), focus_policy);
    }

    pub fn SizehintForced(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_SizehintForced(@ptrCast(self));
    }

    pub fn SetSizehintForced(self: ?*anyopaque, sizehint_forced: u32) void {
        qtc.QWidgetData_SetSizehintForced(@ptrCast(self), sizehint_forced);
    }

    pub fn IsClosing(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_IsClosing(@ptrCast(self));
    }

    pub fn SetIsClosing(self: ?*anyopaque, is_closing: u32) void {
        qtc.QWidgetData_SetIsClosing(@ptrCast(self), is_closing);
    }

    pub fn InShow(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_InShow(@ptrCast(self));
    }

    pub fn SetInShow(self: ?*anyopaque, in_show: u32) void {
        qtc.QWidgetData_SetInShow(@ptrCast(self), in_show);
    }

    pub fn InSetWindowState(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_InSetWindowState(@ptrCast(self));
    }

    pub fn SetInSetWindowState(self: ?*anyopaque, in_set_window_state: u32) void {
        qtc.QWidgetData_SetInSetWindowState(@ptrCast(self), in_set_window_state);
    }

    pub fn FstrutDirty(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_FstrutDirty(@ptrCast(self));
    }

    pub fn SetFstrutDirty(self: ?*anyopaque, fstrut_dirty: u32) void {
        qtc.QWidgetData_SetFstrutDirty(@ptrCast(self), fstrut_dirty);
    }

    pub fn ContextMenuPolicy(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_ContextMenuPolicy(@ptrCast(self));
    }

    pub fn SetContextMenuPolicy(self: ?*anyopaque, context_menu_policy: u32) void {
        qtc.QWidgetData_SetContextMenuPolicy(@ptrCast(self), context_menu_policy);
    }

    pub fn WindowModality(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_WindowModality(@ptrCast(self));
    }

    pub fn SetWindowModality(self: ?*anyopaque, window_modality: u32) void {
        qtc.QWidgetData_SetWindowModality(@ptrCast(self), window_modality);
    }

    pub fn InDestructor(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_InDestructor(@ptrCast(self));
    }

    pub fn SetInDestructor(self: ?*anyopaque, in_destructor: u32) void {
        qtc.QWidgetData_SetInDestructor(@ptrCast(self), in_destructor);
    }

    pub fn Unused(self: ?*anyopaque, ) u32 {
        return qtc.QWidgetData_Unused(@ptrCast(self));
    }

    pub fn SetUnused(self: ?*anyopaque, unused: u32) void {
        qtc.QWidgetData_SetUnused(@ptrCast(self), unused);
    }

    pub fn Crect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidgetData_Crect(@ptrCast(self));
    }

    pub fn SetCrect(self: ?*anyopaque, crect: QtC.QRect) void {
        qtc.QWidgetData_SetCrect(@ptrCast(self), @ptrCast(crect));
    }

    pub fn Pal(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QWidgetData_Pal(@ptrCast(self));
    }

    pub fn SetPal(self: ?*anyopaque, pal: QtC.QPalette) void {
        qtc.QWidgetData_SetPal(@ptrCast(self), @ptrCast(pal));
    }

    pub fn Fnt(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QWidgetData_Fnt(@ptrCast(self));
    }

    pub fn SetFnt(self: ?*anyopaque, fnt: QtC.QFont) void {
        qtc.QWidgetData_SetFnt(@ptrCast(self), @ptrCast(fnt));
    }

    pub fn Wrect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidgetData_Wrect(@ptrCast(self));
    }

    pub fn SetWrect(self: ?*anyopaque, wrect: QtC.QRect) void {
        qtc.QWidgetData_SetWrect(@ptrCast(self), @ptrCast(wrect));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidgetData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWidgetData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwidget.html
pub const qwidget = struct {

    /// New constructs a new QWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QWidget object.
    pub fn New2() QtC.QWidget {
        return qtc.QWidget_new2();
    }


    /// New3 constructs a new QWidget object.
    pub fn New3(parent: ?*anyopaque, f: i64) QtC.QWidget {
        return qtc.QWidget_new3(@ptrCast(parent), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DevType(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_DevType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QWidget_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDevType(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_QBaseDevType(@ptrCast(self));
    }

    pub fn WinId(self: ?*anyopaque, ) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    pub fn CreateWinId(self: ?*anyopaque, ) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    pub fn InternalWinId(self: ?*anyopaque, ) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    pub fn EffectiveWinId(self: ?*anyopaque, ) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    pub fn Style(self: ?*anyopaque, ) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    pub fn IsTopLevel(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    pub fn IsWindow(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    pub fn IsModal(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    pub fn WindowModality(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    pub fn FrameGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    pub fn Geometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    pub fn NormalGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    pub fn FrameSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    pub fn ChildrenRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    pub fn ChildrenRegion(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    pub fn MinimumWidth(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    pub fn MinimumHeight(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    pub fn MaximumWidth(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    pub fn MaximumHeight(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), minw, minh);
    }

    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), maxw, maxh);
    }

    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), minw);
    }

    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), minh);
    }

    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), maxw);
    }

    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), maxh);
    }

    pub fn SizeIncrement(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), w, h);
    }

    pub fn BaseSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), basew, baseh);
    }

    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), w, h);
    }

    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), w);
    }

    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), h);
    }

    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn Window(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    pub fn NativeParentWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    pub fn TopLevelWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    pub fn Palette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    pub fn BackgroundRole(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    pub fn ForegroundRole(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn FontMetrics(self: ?*anyopaque, ) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    pub fn FontInfo(self: ?*anyopaque, ) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    pub fn Cursor(self: ?*anyopaque, ) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn UnsetCursor(self: ?*anyopaque, ) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    pub fn HasMouseTracking(self: ?*anyopaque, ) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    pub fn UnderMouse(self: ?*anyopaque, ) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    pub fn HasTabletTracking(self: ?*anyopaque, ) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    pub fn Mask(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    pub fn ClearMask(self: ?*anyopaque, ) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    pub fn Grab(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    pub fn GraphicsEffect(self: ?*anyopaque, ) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
    .len = windowTitle.len,
    .data = windowTitle.ptr,
};
qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
    .len = styleSheet.len,
    .data = styleSheet.ptr,
};
qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    pub fn StyleSheet(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.StyleSheet: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn WindowTitle(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.WindowTitle: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn WindowIcon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
    .len = windowIconText.len,
    .data = windowIconText.ptr,
};
qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    pub fn WindowIconText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.WindowIconText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
    .len = windowRole.len,
    .data = windowRole.ptr,
};
qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    pub fn WindowRole(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.WindowRole: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
    .len = filePath.len,
    .data = filePath.ptr,
};
qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    pub fn WindowFilePath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.WindowFilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), level);
    }

    pub fn WindowOpacity(self: ?*anyopaque, ) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    pub fn IsWindowModified(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
    .len = toolTip.len,
    .data = toolTip.ptr,
};
qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    pub fn ToolTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), msec);
    }

    pub fn ToolTipDuration(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
    .len = statusTip.len,
    .data = statusTip.ptr,
};
qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    pub fn StatusTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.StatusTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
    .len = whatsThis.len,
    .data = whatsThis.ptr,
};
qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    pub fn WhatsThis(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.WhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AccessibleName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.AccessibleName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    pub fn AccessibleDescription(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.AccessibleDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn LayoutDirection(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    pub fn UnsetLayoutDirection(self: ?*anyopaque, ) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    pub fn Locale(self: ?*anyopaque, ) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    pub fn UnsetLocale(self: ?*anyopaque, ) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    pub fn IsRightToLeft(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    pub fn IsLeftToRight(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    pub fn SetFocus(self: ?*anyopaque, ) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    pub fn IsActiveWindow(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    pub fn ActivateWindow(self: ?*anyopaque, ) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    pub fn ClearFocus(self: ?*anyopaque, ) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    pub fn FocusPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn HasFocus(self: ?*anyopaque, ) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    pub fn FocusProxy(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    pub fn ContextMenuPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn GrabMouse(self: ?*anyopaque, ) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ReleaseMouse(self: ?*anyopaque, ) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    pub fn GrabKeyboard(self: ?*anyopaque, ) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    pub fn ReleaseKeyboard(self: ?*anyopaque, ) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), id);
    }

    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), id);
    }

    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), id);
    }

    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    pub fn UpdatesEnabled(self: ?*anyopaque, ) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    pub fn GraphicsProxyWidget(self: ?*anyopaque, ) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    pub fn Update(self: ?*anyopaque, ) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    pub fn Repaint(self: ?*anyopaque, ) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), x, y, w, h);
    }

    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), x, y, w, h);
    }

    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWidget_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWidget_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWidget_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    pub fn Show(self: ?*anyopaque, ) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    pub fn Hide(self: ?*anyopaque, ) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    pub fn ShowMinimized(self: ?*anyopaque, ) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    pub fn ShowMaximized(self: ?*anyopaque, ) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    pub fn ShowFullScreen(self: ?*anyopaque, ) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    pub fn ShowNormal(self: ?*anyopaque, ) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    pub fn Close(self: ?*anyopaque, ) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    pub fn Raise(self: ?*anyopaque, ) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    pub fn Lower(self: ?*anyopaque, ) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), x, y);
    }

    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), w, h);
    }

    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), x, y, w, h);
    }

    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn SaveGeometry(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwidget.SaveGeometry: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
    .len = geometry.len,
    .data = geometry.ptr,
};
return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    pub fn AdjustSize(self: ?*anyopaque, ) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn IsHidden(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    pub fn IsMinimized(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    pub fn IsMaximized(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    pub fn IsFullScreen(self: ?*anyopaque, ) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    pub fn WindowState(self: ?*anyopaque, ) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWidget_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWidget_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidget_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SizePolicy(self: ?*anyopaque, ) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidget_HeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidget_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidget_QBaseHeightForWidth(@ptrCast(self), param1);
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QWidget_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWidget_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QWidget_QBaseHasHeightForWidth(@ptrCast(self));
    }

    pub fn VisibleRegion(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), left, top, right, bottom);
    }

    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    pub fn ContentsMargins(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    pub fn ContentsRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    pub fn Layout(self: ?*anyopaque, ) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    pub fn UpdateGeometry(self: ?*anyopaque, ) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), dx, dy);
    }

    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), dx, dy, @ptrCast(param3));
    }

    pub fn FocusWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    pub fn NextInFocusChain(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    pub fn PreviousInFocusChain(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    pub fn AcceptDrops(self: ?*anyopaque, ) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    pub fn AddActions(self: ?*anyopaque, actions: []const u8) void {
        qtc.QWidget_AddActions(@ptrCast(self), @ptrCast(actions));
    }

    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []const u8) void {
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), @ptrCast(actions));
    }

    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    pub fn Actions(self: ?*anyopaque, ) []const u8 {
        return qtc.QWidget_Actions(@ptrCast(self));
    }

    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    pub fn AddAction4(self: ?*anyopaque, text: []const u8, receiver: ?*anyopaque, member: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(receiver), @ptrCast(member));
    }

    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, receiver: ?*anyopaque, member: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(receiver), @ptrCast(member));
    }

    pub fn AddAction6(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction6(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    pub fn AddAction7(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction7(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    pub fn AddAction8(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction8(@ptrCast(self), text_str, @ptrCast(shortcut), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn AddAction9(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction9(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn ParentWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    pub fn WindowFlags(self: ?*anyopaque, ) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    pub fn WindowType(self: ?*anyopaque, ) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    pub fn Find(param1: u64) QtC.QWidget {
        return qtc.QWidget_Find(param1);
    }

    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), x, y);
    }

    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QWidget_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QWidget_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QWidget_QBasePaintEngine(@ptrCast(self));
    }

    pub fn EnsurePolished(self: ?*anyopaque, ) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    pub fn AutoFillBackground(self: ?*anyopaque, ) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    pub fn BackingStore(self: ?*anyopaque, ) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    pub fn WindowHandle(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    pub fn Screen(self: ?*anyopaque, ) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
    .len = iconText.len,
    .data = iconText.ptr,
};
qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWidget_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWidget_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnTabletEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QWidget_NativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Allows for overriding the related default method
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QWidget_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QWidget_QBaseNativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidget_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidget_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidget_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QWidget_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Allows for overriding the related default method
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QWidget_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QWidget_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    pub fn SharedPainter(self: ?*anyopaque, ) QtC.QPainter {
        return qtc.QWidget_SharedPainter(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainter) void {
        qtc.QWidget_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSharedPainter(self: ?*anyopaque, ) QtC.QPainter {
        return qtc.QWidget_QBaseSharedPainter(@ptrCast(self));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QWidget_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QWidget_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QWidget_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    pub fn InputMethodHints(self: ?*anyopaque, ) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    pub fn UpdateMicroFocus(self: ?*anyopaque, ) void {
        qtc.QWidget_UpdateMicroFocus(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque, ) void {
        qtc.QWidget_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    pub fn Create(self: ?*anyopaque, ) void {
        qtc.QWidget_Create(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate(self: ?*anyopaque, ) void {
        qtc.QWidget_QBaseCreate(@ptrCast(self));
    }

    pub fn Destroy(self: ?*anyopaque, ) void {
        qtc.QWidget_Destroy(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_OnDestroy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDestroy(self: ?*anyopaque, ) void {
        qtc.QWidget_QBaseDestroy(@ptrCast(self));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QWidget_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn FocusNextChild(self: ?*anyopaque, ) bool {
        return qtc.QWidget_FocusNextChild(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWidget_OnFocusNextChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextChild(self: ?*anyopaque, ) bool {
        return qtc.QWidget_QBaseFocusNextChild(@ptrCast(self));
    }

    pub fn FocusPreviousChild(self: ?*anyopaque, ) bool {
        return qtc.QWidget_FocusPreviousChild(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWidget_OnFocusPreviousChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque, ) bool {
        return qtc.QWidget_QBaseFocusPreviousChild(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), id, enable);
    }

    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), id, enable);
    }

    pub fn AddAction42(self: ?*anyopaque, text: []const u8, receiver: ?*anyopaque, member: []const u8, typeVal: i32) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction42(@ptrCast(self), text_str, @ptrCast(receiver), @ptrCast(member), @intCast(typeVal));
    }

    pub fn AddAction52(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, receiver: ?*anyopaque, member: []const u8, typeVal: i32) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction52(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(receiver), @ptrCast(member), @intCast(typeVal));
    }

    pub fn AddAction53(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque, receiver: ?*anyopaque, member: []const u8, typeVal: i32) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction53(@ptrCast(self), text_str, @ptrCast(shortcut), @ptrCast(receiver), @ptrCast(member), @intCast(typeVal));
    }

    pub fn AddAction62(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque, receiver: ?*anyopaque, member: []const u8, typeVal: i32) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QWidget_AddAction62(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut), @ptrCast(receiver), @ptrCast(member), @intCast(typeVal));
    }

    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    pub fn UpdateMicroFocus1(self: ?*anyopaque, query: i64) void {
        qtc.QWidget_UpdateMicroFocus1(@ptrCast(self), @intCast(query));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateMicroFocus1(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWidget_OnUpdateMicroFocus1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateMicroFocus1(self: ?*anyopaque, query: i64) void {
        qtc.QWidget_QBaseUpdateMicroFocus1(@ptrCast(self), @intCast(query));
    }

    pub fn Create1(self: ?*anyopaque, param1: u64) void {
        qtc.QWidget_Create1(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnCreate1(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QWidget_OnCreate1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate1(self: ?*anyopaque, param1: u64) void {
        qtc.QWidget_QBaseCreate1(@ptrCast(self), param1);
    }

    pub fn Create2(self: ?*anyopaque, param1: u64, initializeWindow: bool) void {
        qtc.QWidget_Create2(@ptrCast(self), param1, initializeWindow);
    }

    /// Allows for overriding the related default method
    pub fn OnCreate2(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64, bool) callconv(.c) void) void {
        qtc.QWidget_OnCreate2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate2(self: ?*anyopaque, param1: u64, initializeWindow: bool) void {
        qtc.QWidget_QBaseCreate2(@ptrCast(self), param1, initializeWindow);
    }

    pub fn Create3(self: ?*anyopaque, param1: u64, initializeWindow: bool, destroyOldWindow: bool) void {
        qtc.QWidget_Create3(@ptrCast(self), param1, initializeWindow, destroyOldWindow);
    }

    /// Allows for overriding the related default method
    pub fn OnCreate3(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64, bool, bool) callconv(.c) void) void {
        qtc.QWidget_OnCreate3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate3(self: ?*anyopaque, param1: u64, initializeWindow: bool, destroyOldWindow: bool) void {
        qtc.QWidget_QBaseCreate3(@ptrCast(self), param1, initializeWindow, destroyOldWindow);
    }

    pub fn Destroy1(self: ?*anyopaque, destroyWindow: bool) void {
        qtc.QWidget_Destroy1(@ptrCast(self), destroyWindow);
    }

    /// Allows for overriding the related default method
    pub fn OnDestroy1(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWidget_OnDestroy1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDestroy1(self: ?*anyopaque, destroyWindow: bool) void {
        qtc.QWidget_QBaseDestroy1(@ptrCast(self), destroyWindow);
    }

    pub fn Destroy2(self: ?*anyopaque, destroyWindow: bool, destroySubWindows: bool) void {
        qtc.QWidget_Destroy2(@ptrCast(self), destroyWindow, destroySubWindows);
    }

    /// Allows for overriding the related default method
    pub fn OnDestroy2(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, bool) callconv(.c) void) void {
        qtc.QWidget_OnDestroy2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDestroy2(self: ?*anyopaque, destroyWindow: bool, destroySubWindows: bool) void {
        qtc.QWidget_QBaseDestroy2(@ptrCast(self), destroyWindow, destroySubWindows);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/widget.html#types
pub const enums = struct {
    pub const RenderFlag = enum {
        pub const DrawWindowBackground: i32 = 1;
        pub const DrawChildren: i32 = 2;
        pub const IgnoreMask: i32 = 4;
    };

};
