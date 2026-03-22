const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicslinearlayout.html
pub const qgraphicslinearlayout = struct {

    /// New constructs a new QGraphicsLinearLayout object.
    pub fn New() QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new();
    }


    /// New2 constructs a new QGraphicsLinearLayout object.
    pub fn New2(orientation: i32) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new2(@intCast(orientation));
    }


    /// New3 constructs a new QGraphicsLinearLayout object.
    pub fn New3(parent: ?*anyopaque) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QGraphicsLinearLayout object.
    pub fn New4(orientation: i32, parent: ?*anyopaque) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new4(@intCast(orientation), @ptrCast(parent));
    }


    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QGraphicsLinearLayout_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsLinearLayout_Orientation(@ptrCast(self));
    }

    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_AddItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn AddStretch(self: ?*anyopaque, ) void {
        qtc.QGraphicsLinearLayout_AddStretch(@ptrCast(self));
    }

    pub fn InsertItem(self: ?*anyopaque, index: i32, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_InsertItem(@ptrCast(self), index, @ptrCast(item));
    }

    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch(@ptrCast(self), index);
    }

    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_RemoveAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnRemoveAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_QBaseRemoveAt(@ptrCast(self), index);
    }

    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetSpacing(@ptrCast(self), spacing);
    }

    pub fn Spacing(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsLinearLayout_Spacing(@ptrCast(self));
    }

    pub fn SetItemSpacing(self: ?*anyopaque, index: i32, spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetItemSpacing(@ptrCast(self), index, spacing);
    }

    pub fn ItemSpacing(self: ?*anyopaque, index: i32) f64 {
        return qtc.QGraphicsLinearLayout_ItemSpacing(@ptrCast(self), index);
    }

    pub fn SetStretchFactor(self: ?*anyopaque, item: ?*anyopaque, stretch: i32) void {
        qtc.QGraphicsLinearLayout_SetStretchFactor(@ptrCast(self), @ptrCast(item), stretch);
    }

    pub fn StretchFactor(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_StretchFactor(@ptrCast(self), @ptrCast(item));
    }

    pub fn SetAlignment(self: ?*anyopaque, item: ?*anyopaque, alignment: i32) void {
        qtc.QGraphicsLinearLayout_SetAlignment(@ptrCast(self), @ptrCast(item), @intCast(alignment));
    }

    pub fn Alignment(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_Alignment(@ptrCast(self), @ptrCast(item));
    }

    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsLinearLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsLinearLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsLinearLayout_QBaseCount(@ptrCast(self));
    }

    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLinearLayout_ItemAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsLinearLayout_OnItemAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLinearLayout_QBaseItemAt(@ptrCast(self), index);
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QGraphicsLinearLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QGraphicsLinearLayout_QBaseInvalidate(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLinearLayout_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsLinearLayout_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLinearLayout_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    pub fn Dump(self: ?*anyopaque, ) void {
        qtc.QGraphicsLinearLayout_Dump(@ptrCast(self));
    }

    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        qtc.QGraphicsLinearLayout_AddStretch1(@ptrCast(self), stretch);
    }

    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch2(@ptrCast(self), index, stretch);
    }

    pub fn Dump1(self: ?*anyopaque, indent: i32) void {
        qtc.QGraphicsLinearLayout_Dump1(@ptrCast(self), indent);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_Delete(@ptrCast(self));
    }
};
