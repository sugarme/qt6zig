const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html
pub const qconcatenatetablesproxymodel = struct {

    /// New constructs a new QConcatenateTablesProxyModel object.
    pub fn New() QtC.QConcatenateTablesProxyModel {
        return qtc.QConcatenateTablesProxyModel_new();
    }


    /// New2 constructs a new QConcatenateTablesProxyModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QConcatenateTablesProxyModel {
        return qtc.QConcatenateTablesProxyModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QConcatenateTablesProxyModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qconcatenatetablesproxymodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SourceModels(self: ?*anyopaque, ) []const u8 {
        return qtc.QConcatenateTablesProxyModel_SourceModels(@ptrCast(self));
    }

    pub fn AddSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QConcatenateTablesProxyModel_AddSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    pub fn RemoveSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QConcatenateTablesProxyModel_RemoveSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QConcatenateTablesProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QConcatenateTablesProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QConcatenateTablesProxyModel_Data(@ptrCast(self), @ptrCast(index), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QConcatenateTablesProxyModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QConcatenateTablesProxyModel_QBaseData(@ptrCast(self), @ptrCast(index), role);
    }

    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QConcatenateTablesProxyModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QConcatenateTablesProxyModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QConcatenateTablesProxyModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    pub fn ItemData(self: ?*anyopaque, proxyIndex: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QConcatenateTablesProxyModel_ItemData(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QMap<int, QVariant>) void {
        qtc.QConcatenateTablesProxyModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemData(self: ?*anyopaque, proxyIndex: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QConcatenateTablesProxyModel_QBaseItemData(@ptrCast(self), @ptrCast(proxyIndex));
    }

    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QConcatenateTablesProxyModel_SetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<int, QVariant>) callconv(.c) bool) void {
        qtc.QConcatenateTablesProxyModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QConcatenateTablesProxyModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QConcatenateTablesProxyModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QConcatenateTablesProxyModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QConcatenateTablesProxyModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QConcatenateTablesProxyModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QConcatenateTablesProxyModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QConcatenateTablesProxyModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn Parent(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QConcatenateTablesProxyModel_Parent(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QConcatenateTablesProxyModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QConcatenateTablesProxyModel_QBaseParent(@ptrCast(self), @ptrCast(index));
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QConcatenateTablesProxyModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QConcatenateTablesProxyModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QConcatenateTablesProxyModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QConcatenateTablesProxyModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QConcatenateTablesProxyModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QConcatenateTablesProxyModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QConcatenateTablesProxyModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QConcatenateTablesProxyModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QConcatenateTablesProxyModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QConcatenateTablesProxyModel_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QConcatenateTablesProxyModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QConcatenateTablesProxyModel_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn MimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QConcatenateTablesProxyModel_MimeData(@ptrCast(self), @ptrCast(indexes));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QConcatenateTablesProxyModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QConcatenateTablesProxyModel_QBaseMimeData(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QConcatenateTablesProxyModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QConcatenateTablesProxyModel_OnCanDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QConcatenateTablesProxyModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QConcatenateTablesProxyModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QConcatenateTablesProxyModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QConcatenateTablesProxyModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QConcatenateTablesProxyModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QConcatenateTablesProxyModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QConcatenateTablesProxyModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QConcatenateTablesProxyModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qconcatenatetablesproxymodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QConcatenateTablesProxyModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qconcatenatetablesproxymodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QConcatenateTablesProxyModel_Delete(@ptrCast(self));
    }
};
