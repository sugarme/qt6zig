const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractitemview.html
pub const qabstractitemview = struct {

    /// New constructs a new QAbstractItemView object.
    pub fn New(parent: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QAbstractItemView_new(@ptrCast(parent));
    }


    /// New2 constructs a new QAbstractItemView object.
    pub fn New2() QtC.QAbstractItemView {
        return qtc.QAbstractItemView_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractItemView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QAbstractItemView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Allows for overriding the related default method
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QAbstractItemView_Model(@ptrCast(self));
    }

    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QAbstractItemView_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetSelectionModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    pub fn SelectionModel(self: ?*anyopaque, ) QtC.QItemSelectionModel {
        return qtc.QAbstractItemView_SelectionModel(@ptrCast(self));
    }

    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    pub fn ItemDelegate(self: ?*anyopaque, ) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate(@ptrCast(self));
    }

    pub fn SetSelectionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SelectionMode(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self));
    }

    pub fn SetSelectionBehavior(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self), @intCast(behavior));
    }

    pub fn SelectionBehavior(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self));
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QAbstractItemView_CurrentIndex(@ptrCast(self));
    }

    pub fn RootIndex(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QAbstractItemView_RootIndex(@ptrCast(self));
    }

    pub fn SetEditTriggers(self: ?*anyopaque, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self), @intCast(triggers));
    }

    pub fn EditTriggers(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self));
    }

    pub fn SetVerticalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self), @intCast(mode));
    }

    pub fn VerticalScrollMode(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self));
    }

    pub fn ResetVerticalScrollMode(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self));
    }

    pub fn SetHorizontalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self), @intCast(mode));
    }

    pub fn HorizontalScrollMode(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self));
    }

    pub fn ResetHorizontalScrollMode(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self));
    }

    pub fn SetAutoScroll(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self), enable);
    }

    pub fn HasAutoScroll(self: ?*anyopaque, ) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self));
    }

    pub fn SetAutoScrollMargin(self: ?*anyopaque, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self), margin);
    }

    pub fn AutoScrollMargin(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self));
    }

    pub fn SetTabKeyNavigation(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self), enable);
    }

    pub fn TabKeyNavigation(self: ?*anyopaque, ) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self));
    }

    pub fn SetDropIndicatorShown(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self), enable);
    }

    pub fn ShowDropIndicator(self: ?*anyopaque, ) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self));
    }

    pub fn SetDragEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self), enable);
    }

    pub fn DragEnabled(self: ?*anyopaque, ) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self));
    }

    pub fn SetDragDropOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self), overwrite);
    }

    pub fn DragDropOverwriteMode(self: ?*anyopaque, ) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self));
    }

    pub fn SetDragDropMode(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self), @intCast(behavior));
    }

    pub fn DragDropMode(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self));
    }

    pub fn SetDefaultDropAction(self: ?*anyopaque, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self), @intCast(dropAction));
    }

    pub fn DefaultDropAction(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self));
    }

    pub fn SetAlternatingRowColors(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self), enable);
    }

    pub fn AlternatingRowColors(self: ?*anyopaque, ) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractItemView_IconSize(@ptrCast(self));
    }

    pub fn SetTextElideMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self), @intCast(mode));
    }

    pub fn TextElideMode(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self));
    }

    pub fn KeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
    .len = search.len,
    .data = search.ptr,
};
qtc.QAbstractItemView_KeyboardSearch(@ptrCast(self), search_str);
    }

    /// Allows for overriding the related default method
    pub fn OnKeyboardSearch(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractItemView_OnKeyboardSearch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
    .len = search.len,
    .data = search.ptr,
};
qtc.QAbstractItemView_QBaseKeyboardSearch(@ptrCast(self), search_str);
    }

    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QAbstractItemView_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QAbstractItemView_OnVisualRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QAbstractItemView_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemView_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Allows for overriding the related default method
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnScrollTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemView_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    pub fn IndexAt(self: ?*anyopaque, point: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_IndexAt(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemView_OnIndexAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexAt(self: ?*anyopaque, point: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_QBaseIndexAt(@ptrCast(self), @ptrCast(point));
    }

    pub fn SizeHintForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn SizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QAbstractItemView_SizeHintForRow(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHintForRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnSizeHintForRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QAbstractItemView_QBaseSizeHintForRow(@ptrCast(self), row);
    }

    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QAbstractItemView_SizeHintForColumn(@ptrCast(self), column);
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHintForColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnSizeHintForColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QAbstractItemView_QBaseSizeHintForColumn(@ptrCast(self), column);
    }

    pub fn OpenPersistentEditor(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_OpenPersistentEditor(@ptrCast(self), @ptrCast(index));
    }

    pub fn ClosePersistentEditor(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_ClosePersistentEditor(@ptrCast(self), @ptrCast(index));
    }

    pub fn IsPersistentEditorOpen(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemView_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetIndexWidget(self: ?*anyopaque, index: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self), @ptrCast(index), @ptrCast(widget));
    }

    pub fn IndexWidget(self: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractItemView_IndexWidget(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetItemDelegateForRow(self: ?*anyopaque, row: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self), row, @ptrCast(delegate));
    }

    pub fn ItemDelegateForRow(self: ?*anyopaque, row: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self), row);
    }

    pub fn SetItemDelegateForColumn(self: ?*anyopaque, column: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self), column, @ptrCast(delegate));
    }

    pub fn ItemDelegateForColumn(self: ?*anyopaque, column: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self), column);
    }

    pub fn ItemDelegate2(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self), @ptrCast(index));
    }

    pub fn ItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnItemDelegateForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAbstractItemDelegate) void {
        qtc.QAbstractItemView_OnItemDelegateForIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_QBaseItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QAbstractItemView_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QAbstractItemView_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QAbstractItemView_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_Reset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReset(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseReset(@ptrCast(self));
    }

    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRootIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetRootIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn DoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_DoItemsLayout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDoItemsLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDoItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseDoItemsLayout(@ptrCast(self));
    }

    pub fn SelectAll(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_SelectAll(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectAll(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSelectAll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectAll(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseSelectAll(@ptrCast(self));
    }

    pub fn Edit(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Edit(@ptrCast(self), @ptrCast(index));
    }

    pub fn ClearSelection(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self));
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn ScrollToTop(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self));
    }

    pub fn ScrollToBottom(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self));
    }

    pub fn Update(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Update(@ptrCast(self), @ptrCast(index));
    }

    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QAbstractItemView_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QAbstractItemView_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAbstractItemView_RowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnRowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAbstractItemView_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAbstractItemView_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnRowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAbstractItemView_QBaseRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), start, end);
    }

    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QAbstractItemView_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QAbstractItemView_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnCurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn UpdateEditorData(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_UpdateEditorData(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateEditorData(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnUpdateEditorData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateEditorData(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseUpdateEditorData(@ptrCast(self));
    }

    pub fn UpdateEditorGeometries(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_UpdateEditorGeometries(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateEditorGeometries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnUpdateEditorGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateEditorGeometries(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseUpdateEditorGeometries(@ptrCast(self));
    }

    pub fn UpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_UpdateGeometries(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateGeometries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnUpdateGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseUpdateGeometries(@ptrCast(self));
    }

    pub fn VerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractItemView_VerticalScrollbarAction(@ptrCast(self), action);
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnVerticalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractItemView_QBaseVerticalScrollbarAction(@ptrCast(self), action);
    }

    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractItemView_HorizontalScrollbarAction(@ptrCast(self), action);
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnHorizontalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractItemView_QBaseHorizontalScrollbarAction(@ptrCast(self), action);
    }

    pub fn VerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractItemView_VerticalScrollbarValueChanged(@ptrCast(self), value);
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnVerticalScrollbarValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractItemView_QBaseVerticalScrollbarValueChanged(@ptrCast(self), value);
    }

    pub fn HorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractItemView_HorizontalScrollbarValueChanged(@ptrCast(self), value);
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnHorizontalScrollbarValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractItemView_QBaseHorizontalScrollbarValueChanged(@ptrCast(self), value);
    }

    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemView_CloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnCloseEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemView_QBaseCloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemView_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Allows for overriding the related default method
    pub fn OnCommitData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnCommitData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseCommitData(@ptrCast(self), @ptrCast(editor));
    }

    pub fn EditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemView_EditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Allows for overriding the related default method
    pub fn OnEditorDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnEditorDestroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseEditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    pub fn Pressed(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Pressed(@ptrCast(self), @ptrCast(index));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Clicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Clicked(@ptrCast(self), @ptrCast(index));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self), @ptrCast(index));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Activated(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Activated(@ptrCast(self), @ptrCast(index));
    }

    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Entered(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Entered(@ptrCast(self), @ptrCast(index));
    }

    pub fn OnEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ViewportEntered(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self));
    }

    pub fn OnViewportEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IconSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    pub fn OnIconSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QAbstractItemView_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemView_OnMoveCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QAbstractItemView_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    pub fn HorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_HorizontalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnHorizontalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_QBaseHorizontalOffset(@ptrCast(self));
    }

    pub fn VerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_VerticalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnVerticalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_QBaseVerticalOffset(@ptrCast(self));
    }

    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemView_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnIsIndexHidden(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QAbstractItemView_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QAbstractItemView_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QAbstractItemView_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QAbstractItemView_OnVisualRegionForSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QAbstractItemView_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    pub fn SelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractItemView_SelectedIndexes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedIndexes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAbstractItemView_OnSelectedIndexes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractItemView_QBaseSelectedIndexes(@ptrCast(self));
    }

    pub fn Edit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_Edit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEdit2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnEdit2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEdit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseEdit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    pub fn SelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectionCommand(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnSelectionCommand(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseSelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    pub fn StartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QAbstractItemView_StartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Allows for overriding the related default method
    pub fn OnStartDrag(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnStartDrag(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QAbstractItemView_QBaseStartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QAbstractItemView_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitViewItemOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnInitViewItemOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_State(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseState(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_QBaseState(@ptrCast(self));
    }

    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QAbstractItemView_SetState(@ptrCast(self), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnSetState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetState(self: ?*anyopaque, state: i32) void {
        qtc.QAbstractItemView_QBaseSetState(@ptrCast(self), @intCast(state));
    }

    pub fn ScheduleDelayedItemsLayout(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_ScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnScheduleDelayedItemsLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnScheduleDelayedItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScheduleDelayedItemsLayout(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseScheduleDelayedItemsLayout(@ptrCast(self));
    }

    pub fn ExecuteDelayedItemsLayout(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_ExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExecuteDelayedItemsLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnExecuteDelayedItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExecuteDelayedItemsLayout(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseExecuteDelayedItemsLayout(@ptrCast(self));
    }

    pub fn SetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QAbstractItemView_SetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Allows for overriding the related default method
    pub fn OnSetDirtyRegion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetDirtyRegion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    pub fn ScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QAbstractItemView_ScrollDirtyRegion(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollDirtyRegion(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnScrollDirtyRegion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QAbstractItemView_QBaseScrollDirtyRegion(@ptrCast(self), dx, dy);
    }

    pub fn DirtyRegionOffset(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QAbstractItemView_DirtyRegionOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDirtyRegionOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPoint) void {
        qtc.QAbstractItemView_OnDirtyRegionOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDirtyRegionOffset(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QAbstractItemView_QBaseDirtyRegionOffset(@ptrCast(self));
    }

    pub fn StartAutoScroll(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_StartAutoScroll(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStartAutoScroll(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnStartAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStartAutoScroll(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseStartAutoScroll(@ptrCast(self));
    }

    pub fn StopAutoScroll(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_StopAutoScroll(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStopAutoScroll(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnStopAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStopAutoScroll(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseStopAutoScroll(@ptrCast(self));
    }

    pub fn DoAutoScroll(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_DoAutoScroll(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDoAutoScroll(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDoAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoAutoScroll(self: ?*anyopaque, ) void {
        qtc.QAbstractItemView_QBaseDoAutoScroll(@ptrCast(self));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QAbstractItemView_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QAbstractItemView_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnViewportEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    pub fn DropIndicatorPosition(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_DropIndicatorPosition(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDropIndicatorPosition(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnDropIndicatorPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropIndicatorPosition(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemView_QBaseDropIndicatorPosition(@ptrCast(self));
    }

    pub fn ViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractItemView_ViewportSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAbstractItemView_OnViewportSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractItemView_QBaseViewportSizeHint(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractItemView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractItemView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractItemView_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractitemview.html#types
pub const enums = struct {
    pub const SelectionMode = enum {
        pub const NoSelection: i32 = 0;
        pub const SingleSelection: i32 = 1;
        pub const MultiSelection: i32 = 2;
        pub const ExtendedSelection: i32 = 3;
        pub const ContiguousSelection: i32 = 4;
    };

    pub const SelectionBehavior = enum {
        pub const SelectItems: i32 = 0;
        pub const SelectRows: i32 = 1;
        pub const SelectColumns: i32 = 2;
    };

    pub const ScrollHint = enum {
        pub const EnsureVisible: i32 = 0;
        pub const PositionAtTop: i32 = 1;
        pub const PositionAtBottom: i32 = 2;
        pub const PositionAtCenter: i32 = 3;
    };

    pub const EditTrigger = enum {
        pub const NoEditTriggers: i32 = 0;
        pub const CurrentChanged: i32 = 1;
        pub const DoubleClicked: i32 = 2;
        pub const SelectedClicked: i32 = 4;
        pub const EditKeyPressed: i32 = 8;
        pub const AnyKeyPressed: i32 = 16;
        pub const AllEditTriggers: i32 = 31;
    };

    pub const ScrollMode = enum {
        pub const ScrollPerItem: i32 = 0;
        pub const ScrollPerPixel: i32 = 1;
    };

    pub const DragDropMode = enum {
        pub const NoDragDrop: i32 = 0;
        pub const DragOnly: i32 = 1;
        pub const DropOnly: i32 = 2;
        pub const DragDrop: i32 = 3;
        pub const InternalMove: i32 = 4;
    };

    pub const CursorAction = enum {
        pub const MoveUp: i32 = 0;
        pub const MoveDown: i32 = 1;
        pub const MoveLeft: i32 = 2;
        pub const MoveRight: i32 = 3;
        pub const MoveHome: i32 = 4;
        pub const MoveEnd: i32 = 5;
        pub const MovePageUp: i32 = 6;
        pub const MovePageDown: i32 = 7;
        pub const MoveNext: i32 = 8;
        pub const MovePrevious: i32 = 9;
    };

    pub const State = enum {
        pub const NoState: i32 = 0;
        pub const DraggingState: i32 = 1;
        pub const DragSelectingState: i32 = 2;
        pub const EditingState: i32 = 3;
        pub const ExpandingState: i32 = 4;
        pub const CollapsingState: i32 = 5;
        pub const AnimatingState: i32 = 6;
    };

    pub const DropIndicatorPosition = enum {
        pub const OnItem: i32 = 0;
        pub const AboveItem: i32 = 1;
        pub const BelowItem: i32 = 2;
        pub const OnViewport: i32 = 3;
    };

};
