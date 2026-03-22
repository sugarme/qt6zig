const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlayoutitem.html
pub const qlayoutitem = struct {

    /// New constructs a new QLayoutItem object.
    pub fn New() QtC.QLayoutItem {
        return qtc.QLayoutItem_new();
    }


    /// New2 constructs a new QLayoutItem object.
    pub fn New2(param1: ?*anyopaque) QtC.QLayoutItem {
        return qtc.QLayoutItem_new2(@ptrCast(param1));
    }


    /// New3 constructs a new QLayoutItem object.
    pub fn New3(alignment: i32) QtC.QLayoutItem {
        return qtc.QLayoutItem_new3(@intCast(alignment));
    }


    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayoutItem_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayoutItem_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayoutItem_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnMaximumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayoutItem_QBaseMaximumSize(@ptrCast(self));
    }

    pub fn ExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QLayoutItem_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QLayoutItem_OnExpandingDirections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QLayoutItem_QBaseExpandingDirections(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayoutItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayoutItem_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayoutItem_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn Geometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QLayoutItem_Geometry(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QLayoutItem_OnGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QLayoutItem_QBaseGeometry(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QLayoutItem_IsEmpty(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QLayoutItem_OnIsEmpty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QLayoutItem_QBaseIsEmpty(@ptrCast(self));
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QLayoutItem_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QLayoutItem_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QLayoutItem_QBaseHasHeightForWidth(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_HeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_QBaseHeightForWidth(@ptrCast(self), param1);
    }

    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_MinimumHeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnMinimumHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_QBaseMinimumHeightForWidth(@ptrCast(self), param1);
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QLayoutItem_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLayoutItem_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QLayoutItem_QBaseInvalidate(@ptrCast(self));
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QLayoutItem_Widget(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QLayoutItem_OnWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QLayoutItem_QBaseWidget(@ptrCast(self));
    }

    pub fn Layout(self: ?*anyopaque, ) QtC.QLayout {
        return qtc.QLayoutItem_Layout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QLayout) void {
        qtc.QLayoutItem_OnLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLayout(self: ?*anyopaque, ) QtC.QLayout {
        return qtc.QLayoutItem_QBaseLayout(@ptrCast(self));
    }

    pub fn SpacerItem(self: ?*anyopaque, ) QtC.QSpacerItem {
        return qtc.QLayoutItem_SpacerItem(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSpacerItem(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSpacerItem) void {
        qtc.QLayoutItem_OnSpacerItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpacerItem(self: ?*anyopaque, ) QtC.QSpacerItem {
        return qtc.QLayoutItem_QBaseSpacerItem(@ptrCast(self));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @intCast(a));
    }

    pub fn ControlTypes(self: ?*anyopaque, ) i32 {
        return qtc.QLayoutItem_ControlTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QLayoutItem_OnControlTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseControlTypes(self: ?*anyopaque, ) i32 {
        return qtc.QLayoutItem_QBaseControlTypes(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayoutItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayoutItem_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayoutItem_QBaseOperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLayoutItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qspaceritem.html
pub const qspaceritem = struct {

    /// New constructs a new QSpacerItem object.
    pub fn New(w: i32, h: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new(w, h);
    }


    /// New2 constructs a new QSpacerItem object.
    pub fn New2(param1: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QSpacerItem_new2(@ptrCast(param1));
    }


    /// New3 constructs a new QSpacerItem object.
    pub fn New3(w: i32, h: i32, hData: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new3(w, h, @intCast(hData));
    }


    /// New4 constructs a new QSpacerItem object.
    pub fn New4(w: i32, h: i32, hData: i32, vData: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new4(w, h, @intCast(hData), @intCast(vData));
    }


    pub fn ChangeSize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QSpacerItem_ChangeSize(@ptrCast(self), w, h);
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSpacerItem_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSpacerItem_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSpacerItem_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSpacerItem_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSpacerItem_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnMaximumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSpacerItem_QBaseMaximumSize(@ptrCast(self));
    }

    pub fn ExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QSpacerItem_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSpacerItem_OnExpandingDirections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QSpacerItem_QBaseExpandingDirections(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QSpacerItem_IsEmpty(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSpacerItem_OnIsEmpty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QSpacerItem_QBaseIsEmpty(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QSpacerItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSpacerItem_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QSpacerItem_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn Geometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QSpacerItem_Geometry(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QSpacerItem_OnGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QSpacerItem_QBaseGeometry(@ptrCast(self));
    }

    pub fn SpacerItem(self: ?*anyopaque, ) QtC.QSpacerItem {
        return qtc.QSpacerItem_SpacerItem(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSpacerItem(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSpacerItem) void {
        qtc.QSpacerItem_OnSpacerItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpacerItem(self: ?*anyopaque, ) QtC.QSpacerItem {
        return qtc.QSpacerItem_QBaseSpacerItem(@ptrCast(self));
    }

    pub fn SizePolicy(self: ?*anyopaque, ) QtC.QSizePolicy {
        return qtc.QSpacerItem_SizePolicy(@ptrCast(self));
    }

    pub fn ChangeSize3(self: ?*anyopaque, w: i32, h: i32, hData: i32) void {
        qtc.QSpacerItem_ChangeSize3(@ptrCast(self), w, h, @intCast(hData));
    }

    pub fn ChangeSize4(self: ?*anyopaque, w: i32, h: i32, hData: i32, vData: i32) void {
        qtc.QSpacerItem_ChangeSize4(@ptrCast(self), w, h, @intCast(hData), @intCast(vData));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSpacerItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwidgetitem.html
pub const qwidgetitem = struct {

    /// New constructs a new QWidgetItem object.
    pub fn New(w: ?*anyopaque) QtC.QWidgetItem {
        return qtc.QWidgetItem_new(@ptrCast(w));
    }


    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItem_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItem_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItem_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItem_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItem_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnMaximumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItem_QBaseMaximumSize(@ptrCast(self));
    }

    pub fn ExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QWidgetItem_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QWidgetItem_OnExpandingDirections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QWidgetItem_QBaseExpandingDirections(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QWidgetItem_IsEmpty(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWidgetItem_OnIsEmpty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QWidgetItem_QBaseIsEmpty(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidgetItem_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItem_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn Geometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidgetItem_Geometry(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QWidgetItem_OnGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QWidgetItem_QBaseGeometry(@ptrCast(self));
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidgetItem_Widget(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QWidgetItem_OnWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidgetItem_QBaseWidget(@ptrCast(self));
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QWidgetItem_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWidgetItem_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QWidgetItem_QBaseHasHeightForWidth(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_HeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_QBaseHeightForWidth(@ptrCast(self), param1);
    }

    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_MinimumHeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnMinimumHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_QBaseMinimumHeightForWidth(@ptrCast(self), param1);
    }

    pub fn ControlTypes(self: ?*anyopaque, ) i32 {
        return qtc.QWidgetItem_ControlTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QWidgetItem_OnControlTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseControlTypes(self: ?*anyopaque, ) i32 {
        return qtc.QWidgetItem_QBaseControlTypes(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwidgetitemv2.html
pub const qwidgetitemv2 = struct {

    /// New constructs a new QWidgetItemV2 object.
    pub fn New(widget: ?*anyopaque) QtC.QWidgetItemV2 {
        return qtc.QWidgetItemV2_new(@ptrCast(widget));
    }


    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItemV2_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItemV2_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItemV2_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItemV2_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItemV2_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnMaximumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWidgetItemV2_QBaseMaximumSize(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QWidgetItemV2_HeightForWidth(@ptrCast(self), width);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QWidgetItemV2_QBaseHeightForWidth(@ptrCast(self), width);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWidgetItemV2_Delete(@ptrCast(self));
    }
};
