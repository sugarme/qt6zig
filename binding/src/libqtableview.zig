const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtableview.html
pub const qtableview = struct {

    /// New constructs a new QTableView object.
    pub fn New(parent: ?*anyopaque) QtC.QTableView {
        return qtc.QTableView_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTableView object.
    pub fn New2() QtC.QTableView {
        return qtc.QTableView_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtableview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QTableView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Allows for overriding the related default method
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QTableView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTableView_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRootIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnSetRootIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTableView_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QTableView_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnSetSelectionModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QTableView_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    pub fn DoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QTableView_DoItemsLayout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDoItemsLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnDoItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QTableView_QBaseDoItemsLayout(@ptrCast(self));
    }

    pub fn HorizontalHeader(self: ?*anyopaque, ) QtC.QHeaderView {
        return qtc.QTableView_HorizontalHeader(@ptrCast(self));
    }

    pub fn VerticalHeader(self: ?*anyopaque, ) QtC.QHeaderView {
        return qtc.QTableView_VerticalHeader(@ptrCast(self));
    }

    pub fn SetHorizontalHeader(self: ?*anyopaque, header: ?*anyopaque) void {
        qtc.QTableView_SetHorizontalHeader(@ptrCast(self), @ptrCast(header));
    }

    pub fn SetVerticalHeader(self: ?*anyopaque, header: ?*anyopaque) void {
        qtc.QTableView_SetVerticalHeader(@ptrCast(self), @ptrCast(header));
    }

    pub fn RowViewportPosition(self: ?*anyopaque, row: i32) i32 {
        return qtc.QTableView_RowViewportPosition(@ptrCast(self), row);
    }

    pub fn RowAt(self: ?*anyopaque, y: i32) i32 {
        return qtc.QTableView_RowAt(@ptrCast(self), y);
    }

    pub fn SetRowHeight(self: ?*anyopaque, row: i32, height: i32) void {
        qtc.QTableView_SetRowHeight(@ptrCast(self), row, height);
    }

    pub fn RowHeight(self: ?*anyopaque, row: i32) i32 {
        return qtc.QTableView_RowHeight(@ptrCast(self), row);
    }

    pub fn ColumnViewportPosition(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTableView_ColumnViewportPosition(@ptrCast(self), column);
    }

    pub fn ColumnAt(self: ?*anyopaque, x: i32) i32 {
        return qtc.QTableView_ColumnAt(@ptrCast(self), x);
    }

    pub fn SetColumnWidth(self: ?*anyopaque, column: i32, width: i32) void {
        qtc.QTableView_SetColumnWidth(@ptrCast(self), column, width);
    }

    pub fn ColumnWidth(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTableView_ColumnWidth(@ptrCast(self), column);
    }

    pub fn IsRowHidden(self: ?*anyopaque, row: i32) bool {
        return qtc.QTableView_IsRowHidden(@ptrCast(self), row);
    }

    pub fn SetRowHidden(self: ?*anyopaque, row: i32, hide: bool) void {
        qtc.QTableView_SetRowHidden(@ptrCast(self), row, hide);
    }

    pub fn IsColumnHidden(self: ?*anyopaque, column: i32) bool {
        return qtc.QTableView_IsColumnHidden(@ptrCast(self), column);
    }

    pub fn SetColumnHidden(self: ?*anyopaque, column: i32, hide: bool) void {
        qtc.QTableView_SetColumnHidden(@ptrCast(self), column, hide);
    }

    pub fn SetSortingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTableView_SetSortingEnabled(@ptrCast(self), enable);
    }

    pub fn IsSortingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QTableView_IsSortingEnabled(@ptrCast(self));
    }

    pub fn ShowGrid(self: ?*anyopaque, ) bool {
        return qtc.QTableView_ShowGrid(@ptrCast(self));
    }

    pub fn GridStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTableView_GridStyle(@ptrCast(self));
    }

    pub fn SetGridStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTableView_SetGridStyle(@ptrCast(self), @intCast(style));
    }

    pub fn SetWordWrap(self: ?*anyopaque, on: bool) void {
        qtc.QTableView_SetWordWrap(@ptrCast(self), on);
    }

    pub fn WordWrap(self: ?*anyopaque, ) bool {
        return qtc.QTableView_WordWrap(@ptrCast(self));
    }

    pub fn SetCornerButtonEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTableView_SetCornerButtonEnabled(@ptrCast(self), enable);
    }

    pub fn IsCornerButtonEnabled(self: ?*anyopaque, ) bool {
        return qtc.QTableView_IsCornerButtonEnabled(@ptrCast(self));
    }

    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QTableView_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QTableView_OnVisualRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QTableView_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QTableView_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Allows for overriding the related default method
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableView_OnScrollTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QTableView_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    pub fn IndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTableView_IndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QTableView_OnIndexAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTableView_QBaseIndexAt(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetSpan(self: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QTableView_SetSpan(@ptrCast(self), row, column, rowSpan, columnSpan);
    }

    pub fn RowSpan(self: ?*anyopaque, row: i32, column: i32) i32 {
        return qtc.QTableView_RowSpan(@ptrCast(self), row, column);
    }

    pub fn ColumnSpan(self: ?*anyopaque, row: i32, column: i32) i32 {
        return qtc.QTableView_ColumnSpan(@ptrCast(self), row, column);
    }

    pub fn ClearSpans(self: ?*anyopaque, ) void {
        qtc.QTableView_ClearSpans(@ptrCast(self));
    }

    pub fn SelectRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableView_SelectRow(@ptrCast(self), row);
    }

    pub fn SelectColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableView_SelectColumn(@ptrCast(self), column);
    }

    pub fn HideRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableView_HideRow(@ptrCast(self), row);
    }

    pub fn HideColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableView_HideColumn(@ptrCast(self), column);
    }

    pub fn ShowRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableView_ShowRow(@ptrCast(self), row);
    }

    pub fn ShowColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableView_ShowColumn(@ptrCast(self), column);
    }

    pub fn ResizeRowToContents(self: ?*anyopaque, row: i32) void {
        qtc.QTableView_ResizeRowToContents(@ptrCast(self), row);
    }

    pub fn ResizeRowsToContents(self: ?*anyopaque, ) void {
        qtc.QTableView_ResizeRowsToContents(@ptrCast(self));
    }

    pub fn ResizeColumnToContents(self: ?*anyopaque, column: i32) void {
        qtc.QTableView_ResizeColumnToContents(@ptrCast(self), column);
    }

    pub fn ResizeColumnsToContents(self: ?*anyopaque, ) void {
        qtc.QTableView_ResizeColumnsToContents(@ptrCast(self));
    }

    pub fn SortByColumn(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTableView_SortByColumn(@ptrCast(self), column, @intCast(order));
    }

    pub fn SetShowGrid(self: ?*anyopaque, show: bool) void {
        qtc.QTableView_SetShowGrid(@ptrCast(self), show);
    }

    pub fn RowMoved(self: ?*anyopaque, row: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableView_RowMoved(@ptrCast(self), row, oldIndex, newIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnRowMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableView_OnRowMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowMoved(self: ?*anyopaque, row: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableView_QBaseRowMoved(@ptrCast(self), row, oldIndex, newIndex);
    }

    pub fn ColumnMoved(self: ?*anyopaque, column: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableView_ColumnMoved(@ptrCast(self), column, oldIndex, newIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnColumnMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableView_OnColumnMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnMoved(self: ?*anyopaque, column: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableView_QBaseColumnMoved(@ptrCast(self), column, oldIndex, newIndex);
    }

    pub fn RowResized(self: ?*anyopaque, row: i32, oldHeight: i32, newHeight: i32) void {
        qtc.QTableView_RowResized(@ptrCast(self), row, oldHeight, newHeight);
    }

    /// Allows for overriding the related default method
    pub fn OnRowResized(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableView_OnRowResized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowResized(self: ?*anyopaque, row: i32, oldHeight: i32, newHeight: i32) void {
        qtc.QTableView_QBaseRowResized(@ptrCast(self), row, oldHeight, newHeight);
    }

    pub fn ColumnResized(self: ?*anyopaque, column: i32, oldWidth: i32, newWidth: i32) void {
        qtc.QTableView_ColumnResized(@ptrCast(self), column, oldWidth, newWidth);
    }

    /// Allows for overriding the related default method
    pub fn OnColumnResized(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableView_OnColumnResized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnResized(self: ?*anyopaque, column: i32, oldWidth: i32, newWidth: i32) void {
        qtc.QTableView_QBaseColumnResized(@ptrCast(self), column, oldWidth, newWidth);
    }

    pub fn RowCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTableView_RowCountChanged(@ptrCast(self), oldCount, newCount);
    }

    /// Allows for overriding the related default method
    pub fn OnRowCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableView_OnRowCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTableView_QBaseRowCountChanged(@ptrCast(self), oldCount, newCount);
    }

    pub fn ColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTableView_ColumnCountChanged(@ptrCast(self), oldCount, newCount);
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableView_OnColumnCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTableView_QBaseColumnCountChanged(@ptrCast(self), oldCount, newCount);
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTableView_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableView_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTableView_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTableView_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitViewItemOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnInitViewItemOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTableView_QBaseInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTableView_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTableView_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableView_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableView_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableView_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableView_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTableView_HorizontalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QTableView_OnHorizontalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTableView_QBaseHorizontalOffset(@ptrCast(self));
    }

    pub fn VerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTableView_VerticalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QTableView_OnVerticalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTableView_QBaseVerticalOffset(@ptrCast(self));
    }

    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QTableView_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QTableView_OnMoveCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QTableView_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QTableView_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableView_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QTableView_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QTableView_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QTableView_OnVisualRegionForSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QTableView_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    pub fn SelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QTableView_SelectedIndexes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedIndexes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QTableView_OnSelectedIndexes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QTableView_QBaseSelectedIndexes(@ptrCast(self));
    }

    pub fn UpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QTableView_UpdateGeometries(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateGeometries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnUpdateGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QTableView_QBaseUpdateGeometries(@ptrCast(self));
    }

    pub fn ViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTableView_ViewportSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QTableView_OnViewportSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTableView_QBaseViewportSizeHint(@ptrCast(self));
    }

    pub fn SizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QTableView_SizeHintForRow(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHintForRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QTableView_OnSizeHintForRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QTableView_QBaseSizeHintForRow(@ptrCast(self), row);
    }

    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTableView_SizeHintForColumn(@ptrCast(self), column);
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHintForColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QTableView_OnSizeHintForColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTableView_QBaseSizeHintForColumn(@ptrCast(self), column);
    }

    pub fn VerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTableView_VerticalScrollbarAction(@ptrCast(self), action);
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableView_OnVerticalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTableView_QBaseVerticalScrollbarAction(@ptrCast(self), action);
    }

    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTableView_HorizontalScrollbarAction(@ptrCast(self), action);
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableView_OnHorizontalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTableView_QBaseHorizontalScrollbarAction(@ptrCast(self), action);
    }

    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QTableView_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableView_OnIsIndexHidden(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QTableView_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QTableView_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QTableView_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTableView_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnCurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTableView_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtableview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtableview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTableView_Delete(@ptrCast(self));
    }
};
