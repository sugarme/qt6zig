const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qidentityproxymodel.html
pub const qidentityproxymodel = struct {

    /// New constructs a new QIdentityProxyModel object.
    pub fn New() QtC.QIdentityProxyModel {
        return qtc.QIdentityProxyModel_new();
    }


    /// New2 constructs a new QIdentityProxyModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QIdentityProxyModel {
        return qtc.QIdentityProxyModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIdentityProxyModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qidentityproxymodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QIdentityProxyModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QIdentityProxyModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QIdentityProxyModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QIdentityProxyModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnMapFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QIdentityProxyModel_OnMapFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_QBaseMapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnMapToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QIdentityProxyModel_OnMapToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_QBaseMapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QIdentityProxyModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QIdentityProxyModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QIdentityProxyModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QIdentityProxyModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QIdentityProxyModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QIdentityProxyModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QIdentityProxyModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIdentityProxyModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_Sibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QIdentityProxyModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QIdentityProxyModel_QBaseSibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    pub fn MapSelectionFromSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QIdentityProxyModel_MapSelectionFromSource(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnMapSelectionFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.QIdentityProxyModel_OnMapSelectionFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapSelectionFromSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QIdentityProxyModel_QBaseMapSelectionFromSource(@ptrCast(self), @ptrCast(selection));
    }

    pub fn MapSelectionToSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QIdentityProxyModel_MapSelectionToSource(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnMapSelectionToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.QIdentityProxyModel_OnMapSelectionToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapSelectionToSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QIdentityProxyModel_QBaseMapSelectionToSource(@ptrCast(self), @ptrCast(selection));
    }

    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32) []const u8 {
        return qtc.QIdentityProxyModel_Match(@ptrCast(self), @ptrCast(start), role, @ptrCast(value), hits, @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) [*:0]const u8) void {
        qtc.QIdentityProxyModel_OnMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32) []const u8 {
        return qtc.QIdentityProxyModel_QBaseMatch(@ptrCast(self), @ptrCast(start), role, @ptrCast(value), hits, @intCast(flags));
    }

    pub fn SetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QIdentityProxyModel_SetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSourceModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QIdentityProxyModel_OnSetSourceModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QIdentityProxyModel_QBaseSetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_InsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIdentityProxyModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_QBaseInsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_InsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIdentityProxyModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_QBaseInsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_RemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIdentityProxyModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_QBaseRemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_RemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIdentityProxyModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_QBaseRemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QIdentityProxyModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceRow, count, @ptrCast(destinationParent), destinationChild);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QIdentityProxyModel_OnMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QIdentityProxyModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceRow, count, @ptrCast(destinationParent), destinationChild);
    }

    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QIdentityProxyModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), sourceColumn, count, @ptrCast(destinationParent), destinationChild);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QIdentityProxyModel_OnMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QIdentityProxyModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), sourceColumn, count, @ptrCast(destinationParent), destinationChild);
    }

    pub fn HandleSourceLayoutChanges(self: ?*anyopaque, ) bool {
        return qtc.QIdentityProxyModel_HandleSourceLayoutChanges(@ptrCast(self));
    }

    pub fn HandleSourceDataChanges(self: ?*anyopaque, ) bool {
        return qtc.QIdentityProxyModel_HandleSourceDataChanges(@ptrCast(self));
    }

    pub fn SetHandleSourceLayoutChanges(self: ?*anyopaque, handleSourceLayoutChanges: bool) void {
        qtc.QIdentityProxyModel_SetHandleSourceLayoutChanges(@ptrCast(self), handleSourceLayoutChanges);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHandleSourceLayoutChanges(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QIdentityProxyModel_OnSetHandleSourceLayoutChanges(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHandleSourceLayoutChanges(self: ?*anyopaque, handleSourceLayoutChanges: bool) void {
        qtc.QIdentityProxyModel_QBaseSetHandleSourceLayoutChanges(@ptrCast(self), handleSourceLayoutChanges);
    }

    pub fn SetHandleSourceDataChanges(self: ?*anyopaque, handleSourceDataChanges: bool) void {
        qtc.QIdentityProxyModel_SetHandleSourceDataChanges(@ptrCast(self), handleSourceDataChanges);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHandleSourceDataChanges(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QIdentityProxyModel_OnSetHandleSourceDataChanges(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHandleSourceDataChanges(self: ?*anyopaque, handleSourceDataChanges: bool) void {
        qtc.QIdentityProxyModel_QBaseSetHandleSourceDataChanges(@ptrCast(self), handleSourceDataChanges);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIdentityProxyModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qidentityproxymodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIdentityProxyModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qidentityproxymodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIdentityProxyModel_Delete(@ptrCast(self));
    }
};
