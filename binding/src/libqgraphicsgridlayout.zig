const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicsgridlayout.html
pub const qgraphicsgridlayout = struct {

    /// New constructs a new QGraphicsGridLayout object.
    pub fn New() QtC.QGraphicsGridLayout {
        return qtc.QGraphicsGridLayout_new();
    }


    /// New2 constructs a new QGraphicsGridLayout object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsGridLayout {
        return qtc.QGraphicsGridLayout_new2(@ptrCast(parent));
    }


    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGraphicsGridLayout_AddItem(@ptrCast(self), @ptrCast(item), row, column, rowSpan, columnSpan);
    }

    pub fn AddItem2(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGraphicsGridLayout_AddItem2(@ptrCast(self), @ptrCast(item), row, column);
    }

    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetHorizontalSpacing(@ptrCast(self), spacing);
    }

    pub fn HorizontalSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsGridLayout_HorizontalSpacing(@ptrCast(self));
    }

    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetVerticalSpacing(@ptrCast(self), spacing);
    }

    pub fn VerticalSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsGridLayout_VerticalSpacing(@ptrCast(self));
    }

    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetSpacing(@ptrCast(self), spacing);
    }

    pub fn SetRowSpacing(self: ?*anyopaque, row: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetRowSpacing(@ptrCast(self), row, spacing);
    }

    pub fn RowSpacing(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowSpacing(@ptrCast(self), row);
    }

    pub fn SetColumnSpacing(self: ?*anyopaque, column: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetColumnSpacing(@ptrCast(self), column, spacing);
    }

    pub fn ColumnSpacing(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnSpacing(@ptrCast(self), column);
    }

    pub fn SetRowStretchFactor(self: ?*anyopaque, row: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetRowStretchFactor(@ptrCast(self), row, stretch);
    }

    pub fn RowStretchFactor(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowStretchFactor(@ptrCast(self), row);
    }

    pub fn SetColumnStretchFactor(self: ?*anyopaque, column: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetColumnStretchFactor(@ptrCast(self), column, stretch);
    }

    pub fn ColumnStretchFactor(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnStretchFactor(@ptrCast(self), column);
    }

    pub fn SetRowMinimumHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMinimumHeight(@ptrCast(self), row, height);
    }

    pub fn RowMinimumHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMinimumHeight(@ptrCast(self), row);
    }

    pub fn SetRowPreferredHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowPreferredHeight(@ptrCast(self), row, height);
    }

    pub fn RowPreferredHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowPreferredHeight(@ptrCast(self), row);
    }

    pub fn SetRowMaximumHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMaximumHeight(@ptrCast(self), row, height);
    }

    pub fn RowMaximumHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMaximumHeight(@ptrCast(self), row);
    }

    pub fn SetRowFixedHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowFixedHeight(@ptrCast(self), row, height);
    }

    pub fn SetColumnMinimumWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMinimumWidth(@ptrCast(self), column, width);
    }

    pub fn ColumnMinimumWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMinimumWidth(@ptrCast(self), column);
    }

    pub fn SetColumnPreferredWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnPreferredWidth(@ptrCast(self), column, width);
    }

    pub fn ColumnPreferredWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnPreferredWidth(@ptrCast(self), column);
    }

    pub fn SetColumnMaximumWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMaximumWidth(@ptrCast(self), column, width);
    }

    pub fn ColumnMaximumWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMaximumWidth(@ptrCast(self), column);
    }

    pub fn SetColumnFixedWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnFixedWidth(@ptrCast(self), column, width);
    }

    pub fn SetRowAlignment(self: ?*anyopaque, row: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_SetRowAlignment(@ptrCast(self), row, @intCast(alignment));
    }

    pub fn RowAlignment(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowAlignment(@ptrCast(self), row);
    }

    pub fn SetColumnAlignment(self: ?*anyopaque, column: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_SetColumnAlignment(@ptrCast(self), column, @intCast(alignment));
    }

    pub fn ColumnAlignment(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnAlignment(@ptrCast(self), column);
    }

    pub fn SetAlignment(self: ?*anyopaque, item: ?*anyopaque, alignment: i32) void {
        qtc.QGraphicsGridLayout_SetAlignment(@ptrCast(self), @ptrCast(item), @intCast(alignment));
    }

    pub fn Alignment(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_Alignment(@ptrCast(self), @ptrCast(item));
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsGridLayout_RowCount(@ptrCast(self));
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsGridLayout_ColumnCount(@ptrCast(self));
    }

    pub fn ItemAt(self: ?*anyopaque, row: i32, column: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_ItemAt(@ptrCast(self), row, column);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsGridLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsGridLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsGridLayout_QBaseCount(@ptrCast(self));
    }

    pub fn ItemAt2(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_ItemAt2(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsGridLayout_OnItemAt2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt2(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_QBaseItemAt2(@ptrCast(self), index);
    }

    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsGridLayout_RemoveAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnRemoveAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsGridLayout_QBaseRemoveAt(@ptrCast(self), index);
    }

    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QGraphicsGridLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QGraphicsGridLayout_QBaseInvalidate(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsGridLayout_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsGridLayout_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsGridLayout_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    pub fn AddItem6(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_AddItem6(@ptrCast(self), @ptrCast(item), row, column, rowSpan, columnSpan, @intCast(alignment));
    }

    pub fn AddItem4(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_AddItem4(@ptrCast(self), @ptrCast(item), row, column, @intCast(alignment));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_Delete(@ptrCast(self));
    }
};
