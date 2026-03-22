const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractproxymodel.html
pub const qabstractproxymodel = struct {

    /// New constructs a new QAbstractProxyModel object.
    pub fn New() QtC.QAbstractProxyModel {
        return qtc.QAbstractProxyModel_new();
    }


    /// New2 constructs a new QAbstractProxyModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QAbstractProxyModel {
        return qtc.QAbstractProxyModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractProxyModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractproxymodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QAbstractProxyModel_SetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSourceModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnSetSourceModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QAbstractProxyModel_QBaseSetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    pub fn SourceModel(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QAbstractProxyModel_SourceModel(@ptrCast(self));
    }

    pub fn BindableSourceModel(self: ?*anyopaque, ) QBindable<QAbstractItemModel *> {
        return qtc.QAbstractProxyModel_BindableSourceModel(@ptrCast(self));
    }

    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnMapToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractProxyModel_OnMapToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_QBaseMapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnMapFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractProxyModel_OnMapFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_QBaseMapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    pub fn MapSelectionToSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QAbstractProxyModel_MapSelectionToSource(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnMapSelectionToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.QAbstractProxyModel_OnMapSelectionToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapSelectionToSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QAbstractProxyModel_QBaseMapSelectionToSource(@ptrCast(self), @ptrCast(selection));
    }

    pub fn MapSelectionFromSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QAbstractProxyModel_MapSelectionFromSource(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnMapSelectionFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.QAbstractProxyModel_OnMapSelectionFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapSelectionFromSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QAbstractProxyModel_QBaseMapSelectionFromSource(@ptrCast(self), @ptrCast(selection));
    }

    pub fn Submit(self: ?*anyopaque, ) bool {
        return qtc.QAbstractProxyModel_Submit(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnSubmit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubmit(self: ?*anyopaque, ) bool {
        return qtc.QAbstractProxyModel_QBaseSubmit(@ptrCast(self));
    }

    pub fn Revert(self: ?*anyopaque, ) void {
        qtc.QAbstractProxyModel_Revert(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnRevert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRevert(self: ?*anyopaque, ) void {
        qtc.QAbstractProxyModel_QBaseRevert(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, proxyIndex: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QAbstractProxyModel_Data(@ptrCast(self), @ptrCast(proxyIndex), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QAbstractProxyModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, proxyIndex: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QAbstractProxyModel_QBaseData(@ptrCast(self), @ptrCast(proxyIndex), role);
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QAbstractProxyModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QAbstractProxyModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QAbstractProxyModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QAbstractProxyModel_ItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QMap<int, QVariant>) void {
        qtc.QAbstractProxyModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QAbstractProxyModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QAbstractProxyModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QAbstractProxyModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QAbstractProxyModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QAbstractProxyModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QAbstractProxyModel_SetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<int, QVariant>) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QAbstractProxyModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QAbstractProxyModel_SetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QAbstractProxyModel_QBaseSetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractProxyModel_OnBuddy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QAbstractProxyModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QAbstractProxyModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QAbstractProxyModel_Sort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QAbstractProxyModel_QBaseSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractProxyModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAbstractProxyModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractProxyModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_Sibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractProxyModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_QBaseSibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    pub fn MimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QAbstractProxyModel_MimeData(@ptrCast(self), @ptrCast(indexes));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QAbstractProxyModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QAbstractProxyModel_QBaseMimeData(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnCanDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractProxyModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractProxyModel_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAbstractProxyModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractProxyModel_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn SupportedDragActions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractProxyModel_SupportedDragActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnSupportedDragActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDragActions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractProxyModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractProxyModel_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractProxyModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn RoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QAbstractProxyModel_RoleNames(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QHash<int, QByteArray>) void {
        qtc.QAbstractProxyModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QAbstractProxyModel_QBaseRoleNames(@ptrCast(self));
    }

    pub fn CreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_CreateSourceIndex(@ptrCast(self), row, col, @ptrCast(internalPtr));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateSourceIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractProxyModel_OnCreateSourceIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractProxyModel_QBaseCreateSourceIndex(@ptrCast(self), row, col, @ptrCast(internalPtr));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractProxyModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractproxymodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractProxyModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractproxymodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Wrapper to allow calling private signal
    pub fn OnsourceModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractProxyModel_Connect_sourceModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractProxyModel_Delete(@ptrCast(self));
    }
};
