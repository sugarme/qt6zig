const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicslayout.html
pub const qgraphicslayout = struct {

    /// New constructs a new QGraphicsLayout object.
    pub fn New() QtC.QGraphicsLayout {
        return qtc.QGraphicsLayout_new();
    }


    /// New2 constructs a new QGraphicsLayout object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsLayout {
        return qtc.QGraphicsLayout_new2(@ptrCast(parent));
    }


    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self), left, top, right, bottom);
    }

    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Allows for overriding the related default method
    pub fn OnGetContentsMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnGetContentsMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLayout_QBaseGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    pub fn Activate(self: ?*anyopaque, ) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self));
    }

    pub fn IsActivated(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsLayout_IsActivated(@ptrCast(self));
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QGraphicsLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QGraphicsLayout_QBaseInvalidate(@ptrCast(self));
    }

    pub fn UpdateGeometry(self: ?*anyopaque, ) void {
        qtc.QGraphicsLayout_UpdateGeometry(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnUpdateGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateGeometry(self: ?*anyopaque, ) void {
        qtc.QGraphicsLayout_QBaseUpdateGeometry(@ptrCast(self));
    }

    pub fn WidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsLayout_WidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnWidgetEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnWidgetEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsLayout_QBaseCount(@ptrCast(self));
    }

    pub fn ItemAt(self: ?*anyopaque, i: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayout_ItemAt(@ptrCast(self), i);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsLayout_OnItemAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt(self: ?*anyopaque, i: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayout_QBaseItemAt(@ptrCast(self), i);
    }

    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLayout_RemoveAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnRemoveAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLayout_QBaseRemoveAt(@ptrCast(self), index);
    }

    pub fn SetInstantInvalidatePropagation(enable: bool) void {
        qtc.QGraphicsLayout_SetInstantInvalidatePropagation(enable);
    }

    pub fn InstantInvalidatePropagation() bool {
        return qtc.QGraphicsLayout_InstantInvalidatePropagation();
    }

    pub fn AddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsLayout_AddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Allows for overriding the related default method
    pub fn OnAddChildLayoutItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnAddChildLayoutItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsLayout_QBaseAddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_Delete(@ptrCast(self));
    }
};
