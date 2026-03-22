const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsortfilterproxymodel.html
pub const qsortfilterproxymodel = struct {

    /// New constructs a new QSortFilterProxyModel object.
    pub fn New() QtC.QSortFilterProxyModel {
        return qtc.QSortFilterProxyModel_new();
    }


    /// New2 constructs a new QSortFilterProxyModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QSortFilterProxyModel {
        return qtc.QSortFilterProxyModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSortFilterProxyModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsortfilterproxymodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_SetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSourceModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnSetSourceModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseSetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnMapToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnMapToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseMapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnMapFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnMapFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseMapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    pub fn MapSelectionToSource(self: ?*anyopaque, proxySelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QSortFilterProxyModel_MapSelectionToSource(@ptrCast(self), @ptrCast(proxySelection));
    }

    /// Allows for overriding the related default method
    pub fn OnMapSelectionToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.QSortFilterProxyModel_OnMapSelectionToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapSelectionToSource(self: ?*anyopaque, proxySelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QSortFilterProxyModel_QBaseMapSelectionToSource(@ptrCast(self), @ptrCast(proxySelection));
    }

    pub fn MapSelectionFromSource(self: ?*anyopaque, sourceSelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QSortFilterProxyModel_MapSelectionFromSource(@ptrCast(self), @ptrCast(sourceSelection));
    }

    /// Allows for overriding the related default method
    pub fn OnMapSelectionFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.QSortFilterProxyModel_OnMapSelectionFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapSelectionFromSource(self: ?*anyopaque, sourceSelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QSortFilterProxyModel_QBaseMapSelectionFromSource(@ptrCast(self), @ptrCast(sourceSelection));
    }

    pub fn FilterRegularExpression(self: ?*anyopaque, ) QtC.QRegularExpression {
        return qtc.QSortFilterProxyModel_FilterRegularExpression(@ptrCast(self));
    }

    pub fn BindableFilterRegularExpression(self: ?*anyopaque, ) QBindable<QRegularExpression> {
        return qtc.QSortFilterProxyModel_BindableFilterRegularExpression(@ptrCast(self));
    }

    pub fn FilterKeyColumn(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_FilterKeyColumn(@ptrCast(self));
    }

    pub fn SetFilterKeyColumn(self: ?*anyopaque, column: i32) void {
        qtc.QSortFilterProxyModel_SetFilterKeyColumn(@ptrCast(self), column);
    }

    pub fn BindableFilterKeyColumn(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QSortFilterProxyModel_BindableFilterKeyColumn(@ptrCast(self));
    }

    pub fn FilterCaseSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_FilterCaseSensitivity(@ptrCast(self));
    }

    pub fn SetFilterCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QSortFilterProxyModel_SetFilterCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    pub fn BindableFilterCaseSensitivity(self: ?*anyopaque, ) QBindable<Qt::CaseSensitivity> {
        return qtc.QSortFilterProxyModel_BindableFilterCaseSensitivity(@ptrCast(self));
    }

    pub fn SortCaseSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_SortCaseSensitivity(@ptrCast(self));
    }

    pub fn SetSortCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QSortFilterProxyModel_SetSortCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    pub fn BindableSortCaseSensitivity(self: ?*anyopaque, ) QBindable<Qt::CaseSensitivity> {
        return qtc.QSortFilterProxyModel_BindableSortCaseSensitivity(@ptrCast(self));
    }

    pub fn IsSortLocaleAware(self: ?*anyopaque, ) bool {
        return qtc.QSortFilterProxyModel_IsSortLocaleAware(@ptrCast(self));
    }

    pub fn SetSortLocaleAware(self: ?*anyopaque, on: bool) void {
        qtc.QSortFilterProxyModel_SetSortLocaleAware(@ptrCast(self), on);
    }

    pub fn BindableIsSortLocaleAware(self: ?*anyopaque, ) QBindable<bool> {
        return qtc.QSortFilterProxyModel_BindableIsSortLocaleAware(@ptrCast(self));
    }

    pub fn SortColumn(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_SortColumn(@ptrCast(self));
    }

    pub fn SortOrder(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_SortOrder(@ptrCast(self));
    }

    pub fn DynamicSortFilter(self: ?*anyopaque, ) bool {
        return qtc.QSortFilterProxyModel_DynamicSortFilter(@ptrCast(self));
    }

    pub fn SetDynamicSortFilter(self: ?*anyopaque, enable: bool) void {
        qtc.QSortFilterProxyModel_SetDynamicSortFilter(@ptrCast(self), enable);
    }

    pub fn BindableDynamicSortFilter(self: ?*anyopaque, ) QBindable<bool> {
        return qtc.QSortFilterProxyModel_BindableDynamicSortFilter(@ptrCast(self));
    }

    pub fn SortRole(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_SortRole(@ptrCast(self));
    }

    pub fn SetSortRole(self: ?*anyopaque, role: i32) void {
        qtc.QSortFilterProxyModel_SetSortRole(@ptrCast(self), role);
    }

    pub fn BindableSortRole(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QSortFilterProxyModel_BindableSortRole(@ptrCast(self));
    }

    pub fn FilterRole(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_FilterRole(@ptrCast(self));
    }

    pub fn SetFilterRole(self: ?*anyopaque, role: i32) void {
        qtc.QSortFilterProxyModel_SetFilterRole(@ptrCast(self), role);
    }

    pub fn BindableFilterRole(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QSortFilterProxyModel_BindableFilterRole(@ptrCast(self));
    }

    pub fn IsRecursiveFilteringEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSortFilterProxyModel_IsRecursiveFilteringEnabled(@ptrCast(self));
    }

    pub fn SetRecursiveFilteringEnabled(self: ?*anyopaque, recursive: bool) void {
        qtc.QSortFilterProxyModel_SetRecursiveFilteringEnabled(@ptrCast(self), recursive);
    }

    pub fn BindableRecursiveFilteringEnabled(self: ?*anyopaque, ) QBindable<bool> {
        return qtc.QSortFilterProxyModel_BindableRecursiveFilteringEnabled(@ptrCast(self));
    }

    pub fn AutoAcceptChildRows(self: ?*anyopaque, ) bool {
        return qtc.QSortFilterProxyModel_AutoAcceptChildRows(@ptrCast(self));
    }

    pub fn SetAutoAcceptChildRows(self: ?*anyopaque, accept: bool) void {
        qtc.QSortFilterProxyModel_SetAutoAcceptChildRows(@ptrCast(self), accept);
    }

    pub fn BindableAutoAcceptChildRows(self: ?*anyopaque, ) QBindable<bool> {
        return qtc.QSortFilterProxyModel_BindableAutoAcceptChildRows(@ptrCast(self));
    }

    pub fn SetFilterRegularExpression(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
qtc.QSortFilterProxyModel_SetFilterRegularExpression(@ptrCast(self), pattern_str);
    }

    pub fn SetFilterRegularExpression2(self: ?*anyopaque, regularExpression: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_SetFilterRegularExpression2(@ptrCast(self), @ptrCast(regularExpression));
    }

    pub fn SetFilterWildcard(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
qtc.QSortFilterProxyModel_SetFilterWildcard(@ptrCast(self), pattern_str);
    }

    pub fn SetFilterFixedString(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
qtc.QSortFilterProxyModel_SetFilterFixedString(@ptrCast(self), pattern_str);
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QSortFilterProxyModel_Invalidate(@ptrCast(self));
    }

    pub fn FilterAcceptsRow(self: ?*anyopaque, source_row: i32, source_parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_FilterAcceptsRow(@ptrCast(self), source_row, @ptrCast(source_parent));
    }

    /// Allows for overriding the related default method
    pub fn OnFilterAcceptsRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnFilterAcceptsRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFilterAcceptsRow(self: ?*anyopaque, source_row: i32, source_parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseFilterAcceptsRow(@ptrCast(self), source_row, @ptrCast(source_parent));
    }

    pub fn FilterAcceptsColumn(self: ?*anyopaque, source_column: i32, source_parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_FilterAcceptsColumn(@ptrCast(self), source_column, @ptrCast(source_parent));
    }

    /// Allows for overriding the related default method
    pub fn OnFilterAcceptsColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnFilterAcceptsColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFilterAcceptsColumn(self: ?*anyopaque, source_column: i32, source_parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseFilterAcceptsColumn(@ptrCast(self), source_column, @ptrCast(source_parent));
    }

    pub fn LessThan(self: ?*anyopaque, source_left: ?*anyopaque, source_right: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_LessThan(@ptrCast(self), @ptrCast(source_left), @ptrCast(source_right));
    }

    /// Allows for overriding the related default method
    pub fn OnLessThan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnLessThan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLessThan(self: ?*anyopaque, source_left: ?*anyopaque, source_right: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseLessThan(@ptrCast(self), @ptrCast(source_left), @ptrCast(source_right));
    }

    pub fn InvalidateFilter(self: ?*anyopaque, ) void {
        qtc.QSortFilterProxyModel_InvalidateFilter(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidateFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidateFilter(self: ?*anyopaque, ) void {
        qtc.QSortFilterProxyModel_QBaseInvalidateFilter(@ptrCast(self));
    }

    pub fn InvalidateRowsFilter(self: ?*anyopaque, ) void {
        qtc.QSortFilterProxyModel_InvalidateRowsFilter(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidateRowsFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateRowsFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidateRowsFilter(self: ?*anyopaque, ) void {
        qtc.QSortFilterProxyModel_QBaseInvalidateRowsFilter(@ptrCast(self));
    }

    pub fn InvalidateColumnsFilter(self: ?*anyopaque, ) void {
        qtc.QSortFilterProxyModel_InvalidateColumnsFilter(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidateColumnsFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateColumnsFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidateColumnsFilter(self: ?*anyopaque, ) void {
        qtc.QSortFilterProxyModel_QBaseInvalidateColumnsFilter(@ptrCast(self));
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_Sibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseSibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSortFilterProxyModel_Data(@ptrCast(self), @ptrCast(index), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSortFilterProxyModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSortFilterProxyModel_QBaseData(@ptrCast(self), @ptrCast(index), role);
    }

    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSortFilterProxyModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSortFilterProxyModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSortFilterProxyModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSortFilterProxyModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSortFilterProxyModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QSortFilterProxyModel_SetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QSortFilterProxyModel_QBaseSetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    pub fn MimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QSortFilterProxyModel_MimeData(@ptrCast(self), @ptrCast(indexes));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QSortFilterProxyModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QSortFilterProxyModel_QBaseMimeData(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_InsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseInsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_InsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseInsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_RemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseRemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_RemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseRemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnBuddy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32) []const u8 {
        return qtc.QSortFilterProxyModel_Match(@ptrCast(self), @ptrCast(start), role, @ptrCast(value), hits, @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSortFilterProxyModel_OnMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32) []const u8 {
        return qtc.QSortFilterProxyModel_QBaseMatch(@ptrCast(self), @ptrCast(start), role, @ptrCast(value), hits, @intCast(flags));
    }

    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QSortFilterProxyModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSortFilterProxyModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QSortFilterProxyModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSortFilterProxyModel_Sort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSortFilterProxyModel_QBaseSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QSortFilterProxyModel_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSortFilterProxyModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QSortFilterProxyModel_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QSortFilterProxyModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn DynamicSortFilterChanged(self: ?*anyopaque, dynamicSortFilter: bool) void {
        qtc.QSortFilterProxyModel_DynamicSortFilterChanged(@ptrCast(self), dynamicSortFilter);
    }

    pub fn OnDynamicSortFilterChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_DynamicSortFilterChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FilterCaseSensitivityChanged(self: ?*anyopaque, filterCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_FilterCaseSensitivityChanged(@ptrCast(self), @intCast(filterCaseSensitivity));
    }

    pub fn OnFilterCaseSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SortCaseSensitivityChanged(self: ?*anyopaque, sortCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_SortCaseSensitivityChanged(@ptrCast(self), @intCast(sortCaseSensitivity));
    }

    pub fn OnSortCaseSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SortLocaleAwareChanged(self: ?*anyopaque, sortLocaleAware: bool) void {
        qtc.QSortFilterProxyModel_SortLocaleAwareChanged(@ptrCast(self), sortLocaleAware);
    }

    pub fn OnSortLocaleAwareChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortLocaleAwareChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SortRoleChanged(self: ?*anyopaque, sortRole: i32) void {
        qtc.QSortFilterProxyModel_SortRoleChanged(@ptrCast(self), sortRole);
    }

    pub fn OnSortRoleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortRoleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FilterRoleChanged(self: ?*anyopaque, filterRole: i32) void {
        qtc.QSortFilterProxyModel_FilterRoleChanged(@ptrCast(self), filterRole);
    }

    pub fn OnFilterRoleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterRoleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RecursiveFilteringEnabledChanged(self: ?*anyopaque, recursiveFilteringEnabled: bool) void {
        qtc.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(@ptrCast(self), recursiveFilteringEnabled);
    }

    pub fn OnRecursiveFilteringEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AutoAcceptChildRowsChanged(self: ?*anyopaque, autoAcceptChildRows: bool) void {
        qtc.QSortFilterProxyModel_AutoAcceptChildRowsChanged(@ptrCast(self), autoAcceptChildRows);
    }

    pub fn OnAutoAcceptChildRowsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSortFilterProxyModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsortfilterproxymodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSortFilterProxyModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsortfilterproxymodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_Delete(@ptrCast(self));
    }
};
