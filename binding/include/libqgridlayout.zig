const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgridlayout.html
pub const qgridlayout = struct {

    /// New constructs a new QGridLayout object.
    pub fn New(parent: ?*anyopaque) QtC.QGridLayout {
        return qtc.QGridLayout_new(@ptrCast(parent));
    }


    /// New2 constructs a new QGridLayout object.
    pub fn New2() QtC.QGridLayout {
        return qtc.QGridLayout_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGridLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGridLayout_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QGridLayout_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGridLayout_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGridLayout_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QGridLayout_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGridLayout_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGridLayout_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QGridLayout_OnMaximumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGridLayout_QBaseMaximumSize(@ptrCast(self));
    }

    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QGridLayout_SetHorizontalSpacing(@ptrCast(self), spacing);
    }

    pub fn HorizontalSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_HorizontalSpacing(@ptrCast(self));
    }

    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QGridLayout_SetVerticalSpacing(@ptrCast(self), spacing);
    }

    pub fn VerticalSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_VerticalSpacing(@ptrCast(self));
    }

    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QGridLayout_SetSpacing(@ptrCast(self), spacing);
    }

    /// Allows for overriding the related default method
    pub fn OnSetSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGridLayout_OnSetSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QGridLayout_QBaseSetSpacing(@ptrCast(self), spacing);
    }

    pub fn Spacing(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_Spacing(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGridLayout_OnSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_QBaseSpacing(@ptrCast(self));
    }

    pub fn SetRowStretch(self: ?*anyopaque, row: i32, stretch: i32) void {
        qtc.QGridLayout_SetRowStretch(@ptrCast(self), row, stretch);
    }

    pub fn SetColumnStretch(self: ?*anyopaque, column: i32, stretch: i32) void {
        qtc.QGridLayout_SetColumnStretch(@ptrCast(self), column, stretch);
    }

    pub fn RowStretch(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGridLayout_RowStretch(@ptrCast(self), row);
    }

    pub fn ColumnStretch(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGridLayout_ColumnStretch(@ptrCast(self), column);
    }

    pub fn SetRowMinimumHeight(self: ?*anyopaque, row: i32, minSize: i32) void {
        qtc.QGridLayout_SetRowMinimumHeight(@ptrCast(self), row, minSize);
    }

    pub fn SetColumnMinimumWidth(self: ?*anyopaque, column: i32, minSize: i32) void {
        qtc.QGridLayout_SetColumnMinimumWidth(@ptrCast(self), column, minSize);
    }

    pub fn RowMinimumHeight(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGridLayout_RowMinimumHeight(@ptrCast(self), row);
    }

    pub fn ColumnMinimumWidth(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGridLayout_ColumnMinimumWidth(@ptrCast(self), column);
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_ColumnCount(@ptrCast(self));
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_RowCount(@ptrCast(self));
    }

    pub fn CellRect(self: ?*anyopaque, row: i32, column: i32) QtC.QRect {
        return qtc.QGridLayout_CellRect(@ptrCast(self), row, column);
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QGridLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QGridLayout_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QGridLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QGridLayout_HeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QGridLayout_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QGridLayout_QBaseHeightForWidth(@ptrCast(self), param1);
    }

    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QGridLayout_MinimumHeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QGridLayout_OnMinimumHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QGridLayout_QBaseMinimumHeightForWidth(@ptrCast(self), param1);
    }

    pub fn ExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGridLayout_OnExpandingDirections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QGridLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QGridLayout_QBaseInvalidate(@ptrCast(self));
    }

    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QGridLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGridLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), row, column);
    }

    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGridLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), row, column, rowSpan, columnSpan);
    }

    pub fn AddLayout(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGridLayout_AddLayout(@ptrCast(self), @ptrCast(param1), row, column);
    }

    pub fn AddLayout2(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGridLayout_AddLayout2(@ptrCast(self), @ptrCast(param1), row, column, rowSpan, columnSpan);
    }

    pub fn SetOriginCorner(self: ?*anyopaque, originCorner: i32) void {
        qtc.QGridLayout_SetOriginCorner(@ptrCast(self), @intCast(originCorner));
    }

    pub fn OriginCorner(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_OriginCorner(@ptrCast(self));
    }

    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_ItemAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QGridLayout_OnItemAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_QBaseItemAt(@ptrCast(self), index);
    }

    pub fn ItemAtPosition(self: ?*anyopaque, row: i32, column: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_ItemAtPosition(@ptrCast(self), row, column);
    }

    pub fn TakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_TakeAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnTakeAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QGridLayout_OnTakeAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_QBaseTakeAt(@ptrCast(self), index);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGridLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QGridLayout_QBaseCount(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QGridLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QGridLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGridLayout_AddItem(@ptrCast(self), @ptrCast(item), row, column);
    }

    pub fn SetDefaultPositioning(self: ?*anyopaque, n: i32, orient: i32) void {
        qtc.QGridLayout_SetDefaultPositioning(@ptrCast(self), n, @intCast(orient));
    }

    pub fn GetItemPosition(self: ?*anyopaque, idx: i32, row: *i32, column: *i32, rowSpan: *i32, columnSpan: *i32) void {
        qtc.QGridLayout_GetItemPosition(@ptrCast(self), idx, @ptrCast(row), @ptrCast(column), @ptrCast(rowSpan), @ptrCast(columnSpan));
    }

    pub fn AddItem2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGridLayout_AddItem2(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnAddItem2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnAddItem2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddItem2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGridLayout_QBaseAddItem2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGridLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGridLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddWidget4(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, param4: i32) void {
        qtc.QGridLayout_AddWidget4(@ptrCast(self), @ptrCast(param1), row, column, @intCast(param4));
    }

    pub fn AddWidget6(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32) void {
        qtc.QGridLayout_AddWidget6(@ptrCast(self), @ptrCast(param1), row, column, rowSpan, columnSpan, @intCast(param6));
    }

    pub fn AddLayout4(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, param4: i32) void {
        qtc.QGridLayout_AddLayout4(@ptrCast(self), @ptrCast(param1), row, column, @intCast(param4));
    }

    pub fn AddLayout6(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32) void {
        qtc.QGridLayout_AddLayout6(@ptrCast(self), @ptrCast(param1), row, column, rowSpan, columnSpan, @intCast(param6));
    }

    pub fn AddItem4(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32) void {
        qtc.QGridLayout_AddItem4(@ptrCast(self), @ptrCast(item), row, column, rowSpan);
    }

    pub fn AddItem5(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGridLayout_AddItem5(@ptrCast(self), @ptrCast(item), row, column, rowSpan, columnSpan);
    }

    pub fn AddItem6(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32) void {
        qtc.QGridLayout_AddItem6(@ptrCast(self), @ptrCast(item), row, column, rowSpan, columnSpan, @intCast(param6));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGridLayout_Delete(@ptrCast(self));
    }
};
