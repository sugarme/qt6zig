const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtreeview.html
pub const qtreeview = struct {

    /// New constructs a new QTreeView object.
    pub fn New(parent: ?*anyopaque) QtC.QTreeView {
        return qtc.QTreeView_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTreeView object.
    pub fn New2() QtC.QTreeView {
        return qtc.QTreeView_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreeview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QTreeView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Allows for overriding the related default method
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QTreeView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRootIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnSetRootIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QTreeView_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnSetSelectionModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QTreeView_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    pub fn Header(self: ?*anyopaque, ) QtC.QHeaderView {
        return qtc.QTreeView_Header(@ptrCast(self));
    }

    pub fn SetHeader(self: ?*anyopaque, header: ?*anyopaque) void {
        qtc.QTreeView_SetHeader(@ptrCast(self), @ptrCast(header));
    }

    pub fn AutoExpandDelay(self: ?*anyopaque, ) i32 {
        return qtc.QTreeView_AutoExpandDelay(@ptrCast(self));
    }

    pub fn SetAutoExpandDelay(self: ?*anyopaque, delay: i32) void {
        qtc.QTreeView_SetAutoExpandDelay(@ptrCast(self), delay);
    }

    pub fn Indentation(self: ?*anyopaque, ) i32 {
        return qtc.QTreeView_Indentation(@ptrCast(self));
    }

    pub fn SetIndentation(self: ?*anyopaque, i: i32) void {
        qtc.QTreeView_SetIndentation(@ptrCast(self), i);
    }

    pub fn ResetIndentation(self: ?*anyopaque, ) void {
        qtc.QTreeView_ResetIndentation(@ptrCast(self));
    }

    pub fn RootIsDecorated(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_RootIsDecorated(@ptrCast(self));
    }

    pub fn SetRootIsDecorated(self: ?*anyopaque, show: bool) void {
        qtc.QTreeView_SetRootIsDecorated(@ptrCast(self), show);
    }

    pub fn UniformRowHeights(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_UniformRowHeights(@ptrCast(self));
    }

    pub fn SetUniformRowHeights(self: ?*anyopaque, uniform: bool) void {
        qtc.QTreeView_SetUniformRowHeights(@ptrCast(self), uniform);
    }

    pub fn ItemsExpandable(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_ItemsExpandable(@ptrCast(self));
    }

    pub fn SetItemsExpandable(self: ?*anyopaque, enable: bool) void {
        qtc.QTreeView_SetItemsExpandable(@ptrCast(self), enable);
    }

    pub fn ExpandsOnDoubleClick(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_ExpandsOnDoubleClick(@ptrCast(self));
    }

    pub fn SetExpandsOnDoubleClick(self: ?*anyopaque, enable: bool) void {
        qtc.QTreeView_SetExpandsOnDoubleClick(@ptrCast(self), enable);
    }

    pub fn ColumnViewportPosition(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTreeView_ColumnViewportPosition(@ptrCast(self), column);
    }

    pub fn ColumnWidth(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTreeView_ColumnWidth(@ptrCast(self), column);
    }

    pub fn SetColumnWidth(self: ?*anyopaque, column: i32, width: i32) void {
        qtc.QTreeView_SetColumnWidth(@ptrCast(self), column, width);
    }

    pub fn ColumnAt(self: ?*anyopaque, x: i32) i32 {
        return qtc.QTreeView_ColumnAt(@ptrCast(self), x);
    }

    pub fn IsColumnHidden(self: ?*anyopaque, column: i32) bool {
        return qtc.QTreeView_IsColumnHidden(@ptrCast(self), column);
    }

    pub fn SetColumnHidden(self: ?*anyopaque, column: i32, hide: bool) void {
        qtc.QTreeView_SetColumnHidden(@ptrCast(self), column, hide);
    }

    pub fn IsHeaderHidden(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_IsHeaderHidden(@ptrCast(self));
    }

    pub fn SetHeaderHidden(self: ?*anyopaque, hide: bool) void {
        qtc.QTreeView_SetHeaderHidden(@ptrCast(self), hide);
    }

    pub fn IsRowHidden(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QTreeView_IsRowHidden(@ptrCast(self), row, @ptrCast(parent));
    }

    pub fn SetRowHidden(self: ?*anyopaque, row: i32, parent: ?*anyopaque, hide: bool) void {
        qtc.QTreeView_SetRowHidden(@ptrCast(self), row, @ptrCast(parent), hide);
    }

    pub fn IsFirstColumnSpanned(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QTreeView_IsFirstColumnSpanned(@ptrCast(self), row, @ptrCast(parent));
    }

    pub fn SetFirstColumnSpanned(self: ?*anyopaque, row: i32, parent: ?*anyopaque, span: bool) void {
        qtc.QTreeView_SetFirstColumnSpanned(@ptrCast(self), row, @ptrCast(parent), span);
    }

    pub fn IsExpanded(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QTreeView_IsExpanded(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetExpanded(self: ?*anyopaque, index: ?*anyopaque, expand: bool) void {
        qtc.QTreeView_SetExpanded(@ptrCast(self), @ptrCast(index), expand);
    }

    pub fn SetSortingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTreeView_SetSortingEnabled(@ptrCast(self), enable);
    }

    pub fn IsSortingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_IsSortingEnabled(@ptrCast(self));
    }

    pub fn SetAnimated(self: ?*anyopaque, enable: bool) void {
        qtc.QTreeView_SetAnimated(@ptrCast(self), enable);
    }

    pub fn IsAnimated(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_IsAnimated(@ptrCast(self));
    }

    pub fn SetAllColumnsShowFocus(self: ?*anyopaque, enable: bool) void {
        qtc.QTreeView_SetAllColumnsShowFocus(@ptrCast(self), enable);
    }

    pub fn AllColumnsShowFocus(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_AllColumnsShowFocus(@ptrCast(self));
    }

    pub fn SetWordWrap(self: ?*anyopaque, on: bool) void {
        qtc.QTreeView_SetWordWrap(@ptrCast(self), on);
    }

    pub fn WordWrap(self: ?*anyopaque, ) bool {
        return qtc.QTreeView_WordWrap(@ptrCast(self));
    }

    pub fn SetTreePosition(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QTreeView_SetTreePosition(@ptrCast(self), logicalIndex);
    }

    pub fn TreePosition(self: ?*anyopaque, ) i32 {
        return qtc.QTreeView_TreePosition(@ptrCast(self));
    }

    pub fn KeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
    .len = search.len,
    .data = search.ptr,
};
qtc.QTreeView_KeyboardSearch(@ptrCast(self), search_str);
    }

    /// Allows for overriding the related default method
    pub fn OnKeyboardSearch(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QTreeView_OnKeyboardSearch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
    .len = search.len,
    .data = search.ptr,
};
qtc.QTreeView_QBaseKeyboardSearch(@ptrCast(self), search_str);
    }

    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QTreeView_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QTreeView_OnVisualRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QTreeView_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QTreeView_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Allows for overriding the related default method
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeView_OnScrollTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QTreeView_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    pub fn IndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTreeView_IndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QTreeView_OnIndexAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTreeView_QBaseIndexAt(@ptrCast(self), @ptrCast(p));
    }

    pub fn IndexAbove(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTreeView_IndexAbove(@ptrCast(self), @ptrCast(index));
    }

    pub fn IndexBelow(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTreeView_IndexBelow(@ptrCast(self), @ptrCast(index));
    }

    pub fn DoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QTreeView_DoItemsLayout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDoItemsLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnDoItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QTreeView_QBaseDoItemsLayout(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QTreeView_Reset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReset(self: ?*anyopaque, ) void {
        qtc.QTreeView_QBaseReset(@ptrCast(self));
    }

    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QTreeView_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QTreeView_OnDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QTreeView_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    pub fn SelectAll(self: ?*anyopaque, ) void {
        qtc.QTreeView_SelectAll(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectAll(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnSelectAll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectAll(self: ?*anyopaque, ) void {
        qtc.QTreeView_QBaseSelectAll(@ptrCast(self));
    }

    pub fn Expanded(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_Expanded(@ptrCast(self), @ptrCast(index));
    }

    pub fn OnExpanded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_Connect_Expanded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Collapsed(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_Collapsed(@ptrCast(self), @ptrCast(index));
    }

    pub fn OnCollapsed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_Connect_Collapsed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HideColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTreeView_HideColumn(@ptrCast(self), column);
    }

    pub fn ShowColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTreeView_ShowColumn(@ptrCast(self), column);
    }

    pub fn Expand(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_Expand(@ptrCast(self), @ptrCast(index));
    }

    pub fn Collapse(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_Collapse(@ptrCast(self), @ptrCast(index));
    }

    pub fn ResizeColumnToContents(self: ?*anyopaque, column: i32) void {
        qtc.QTreeView_ResizeColumnToContents(@ptrCast(self), column);
    }

    pub fn SortByColumn(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTreeView_SortByColumn(@ptrCast(self), column, @intCast(order));
    }

    pub fn ExpandAll(self: ?*anyopaque, ) void {
        qtc.QTreeView_ExpandAll(@ptrCast(self));
    }

    pub fn ExpandRecursively(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_ExpandRecursively(@ptrCast(self), @ptrCast(index));
    }

    pub fn CollapseAll(self: ?*anyopaque, ) void {
        qtc.QTreeView_CollapseAll(@ptrCast(self));
    }

    pub fn ExpandToDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QTreeView_ExpandToDepth(@ptrCast(self), depth);
    }

    pub fn ColumnResized(self: ?*anyopaque, column: i32, oldSize: i32, newSize: i32) void {
        qtc.QTreeView_ColumnResized(@ptrCast(self), column, oldSize, newSize);
    }

    /// Allows for overriding the related default method
    pub fn OnColumnResized(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTreeView_OnColumnResized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnResized(self: ?*anyopaque, column: i32, oldSize: i32, newSize: i32) void {
        qtc.QTreeView_QBaseColumnResized(@ptrCast(self), column, oldSize, newSize);
    }

    pub fn ColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTreeView_ColumnCountChanged(@ptrCast(self), oldCount, newCount);
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTreeView_OnColumnCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTreeView_QBaseColumnCountChanged(@ptrCast(self), oldCount, newCount);
    }

    pub fn ColumnMoved(self: ?*anyopaque, ) void {
        qtc.QTreeView_ColumnMoved(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnColumnMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnMoved(self: ?*anyopaque, ) void {
        qtc.QTreeView_QBaseColumnMoved(@ptrCast(self));
    }

    pub fn Reexpand(self: ?*anyopaque, ) void {
        qtc.QTreeView_Reexpand(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReexpand(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnReexpand(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReexpand(self: ?*anyopaque, ) void {
        qtc.QTreeView_QBaseReexpand(@ptrCast(self));
    }

    pub fn RowsRemoved(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QTreeView_RowsRemoved(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTreeView_OnRowsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsRemoved(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QTreeView_QBaseRowsRemoved(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn VerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QTreeView_VerticalScrollbarValueChanged(@ptrCast(self), value);
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeView_OnVerticalScrollbarValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QTreeView_QBaseVerticalScrollbarValueChanged(@ptrCast(self), value);
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTreeView_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTreeView_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTreeView_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QTreeView_RowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTreeView_OnRowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QTreeView_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QTreeView_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTreeView_OnRowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QTreeView_QBaseRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), start, end);
    }

    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QTreeView_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QTreeView_OnMoveCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QTreeView_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    pub fn HorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTreeView_HorizontalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QTreeView_OnHorizontalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTreeView_QBaseHorizontalOffset(@ptrCast(self));
    }

    pub fn VerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTreeView_VerticalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QTreeView_OnVerticalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTreeView_QBaseVerticalOffset(@ptrCast(self));
    }

    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QTreeView_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeView_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QTreeView_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QTreeView_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QTreeView_OnVisualRegionForSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QTreeView_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    pub fn SelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QTreeView_SelectedIndexes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedIndexes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QTreeView_OnSelectedIndexes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QTreeView_QBaseSelectedIndexes(@ptrCast(self));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DrawTree(self: ?*anyopaque, painter: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QTreeView_DrawTree(@ptrCast(self), @ptrCast(painter), @ptrCast(region));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawTree(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnDrawTree(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawTree(self: ?*anyopaque, painter: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QTreeView_QBaseDrawTree(@ptrCast(self), @ptrCast(painter), @ptrCast(region));
    }

    pub fn DrawRow(self: ?*anyopaque, painter: ?*anyopaque, options: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_DrawRow(@ptrCast(self), @ptrCast(painter), @ptrCast(options), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnDrawRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawRow(self: ?*anyopaque, painter: ?*anyopaque, options: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_QBaseDrawRow(@ptrCast(self), @ptrCast(painter), @ptrCast(options), @ptrCast(index));
    }

    pub fn DrawBranches(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_DrawBranches(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawBranches(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnDrawBranches(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawBranches(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTreeView_QBaseDrawBranches(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(index));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeView_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTreeView_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTreeView_OnViewportEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTreeView_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QTreeView_UpdateGeometries(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateGeometries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnUpdateGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QTreeView_QBaseUpdateGeometries(@ptrCast(self));
    }

    pub fn ViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTreeView_ViewportSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QTreeView_OnViewportSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTreeView_QBaseViewportSizeHint(@ptrCast(self));
    }

    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTreeView_SizeHintForColumn(@ptrCast(self), column);
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHintForColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QTreeView_OnSizeHintForColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTreeView_QBaseSizeHintForColumn(@ptrCast(self), column);
    }

    pub fn IndexRowSizeHint(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QTreeView_IndexRowSizeHint(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexRowSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QTreeView_OnIndexRowSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexRowSizeHint(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QTreeView_QBaseIndexRowSizeHint(@ptrCast(self), @ptrCast(index));
    }

    pub fn RowHeight(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QTreeView_RowHeight(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnRowHeight(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QTreeView_OnRowHeight(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowHeight(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QTreeView_QBaseRowHeight(@ptrCast(self), @ptrCast(index));
    }

    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTreeView_HorizontalScrollbarAction(@ptrCast(self), action);
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeView_OnHorizontalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTreeView_QBaseHorizontalScrollbarAction(@ptrCast(self), action);
    }

    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QTreeView_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTreeView_OnIsIndexHidden(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QTreeView_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QTreeView_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QTreeView_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTreeView_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeView_OnCurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTreeView_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreeview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreeview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ExpandRecursively2(self: ?*anyopaque, index: ?*anyopaque, depth: i32) void {
        qtc.QTreeView_ExpandRecursively2(@ptrCast(self), @ptrCast(index), depth);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTreeView_Delete(@ptrCast(self));
    }
};
