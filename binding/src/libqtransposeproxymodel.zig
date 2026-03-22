const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtransposeproxymodel.html
pub const qtransposeproxymodel = struct {

    /// New constructs a new QTransposeProxyModel object.
    pub fn New() QtC.QTransposeProxyModel {
        return qtc.QTransposeProxyModel_new();
    }


    /// New2 constructs a new QTransposeProxyModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QTransposeProxyModel {
        return qtc.QTransposeProxyModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTransposeProxyModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtransposeproxymodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSourceModel(self: ?*anyopaque, newSourceModel: ?*anyopaque) void {
        qtc.QTransposeProxyModel_SetSourceModel(@ptrCast(self), @ptrCast(newSourceModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSourceModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTransposeProxyModel_OnSetSourceModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSourceModel(self: ?*anyopaque, newSourceModel: ?*anyopaque) void {
        qtc.QTransposeProxyModel_QBaseSetSourceModel(@ptrCast(self), @ptrCast(newSourceModel));
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QTransposeProxyModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QTransposeProxyModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QTransposeProxyModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QTransposeProxyModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QTransposeProxyModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QTransposeProxyModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QTransposeProxyModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QTransposeProxyModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QTransposeProxyModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QTransposeProxyModel_SetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QTransposeProxyModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QTransposeProxyModel_QBaseSetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QTransposeProxyModel_SetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<int, QVariant>) callconv(.c) bool) void {
        qtc.QTransposeProxyModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QTransposeProxyModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QTransposeProxyModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QTransposeProxyModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QTransposeProxyModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QTransposeProxyModel_ItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QMap<int, QVariant>) void {
        qtc.QTransposeProxyModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QTransposeProxyModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTransposeProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnMapFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QTransposeProxyModel_OnMapFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTransposeProxyModel_QBaseMapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTransposeProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnMapToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QTransposeProxyModel_OnMapToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTransposeProxyModel_QBaseMapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    pub fn Parent(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTransposeProxyModel_Parent(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QTransposeProxyModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTransposeProxyModel_QBaseParent(@ptrCast(self), @ptrCast(index));
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTransposeProxyModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QTransposeProxyModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTransposeProxyModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QTransposeProxyModel_InsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTransposeProxyModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QTransposeProxyModel_QBaseInsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QTransposeProxyModel_RemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTransposeProxyModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QTransposeProxyModel_QBaseRemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QTransposeProxyModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceRow, count, @ptrCast(destinationParent), destinationChild);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QTransposeProxyModel_OnMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QTransposeProxyModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceRow, count, @ptrCast(destinationParent), destinationChild);
    }

    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QTransposeProxyModel_InsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTransposeProxyModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QTransposeProxyModel_QBaseInsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QTransposeProxyModel_RemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTransposeProxyModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QTransposeProxyModel_QBaseRemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QTransposeProxyModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), sourceColumn, count, @ptrCast(destinationParent), destinationChild);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QTransposeProxyModel_OnMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QTransposeProxyModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), sourceColumn, count, @ptrCast(destinationParent), destinationChild);
    }

    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTransposeProxyModel_Sort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTransposeProxyModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTransposeProxyModel_QBaseSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTransposeProxyModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtransposeproxymodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTransposeProxyModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtransposeproxymodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTransposeProxyModel_Delete(@ptrCast(self));
    }
};
