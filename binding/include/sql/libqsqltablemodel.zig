const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqltablemodel.html
pub const qsqltablemodel = struct {

    /// New constructs a new QSqlTableModel object.
    pub fn New() QtC.QSqlTableModel {
        return qtc.QSqlTableModel_new();
    }


    /// New2 constructs a new QSqlTableModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QSqlTableModel {
        return qtc.QSqlTableModel_new2(@ptrCast(parent));
    }


    /// New3 constructs a new QSqlTableModel object.
    pub fn New3(parent: ?*anyopaque, db: ?*anyopaque) QtC.QSqlTableModel {
        return qtc.QSqlTableModel_new3(@ptrCast(parent), @ptrCast(db));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTable(self: ?*anyopaque, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
qtc.QSqlTableModel_SetTable(@ptrCast(self), tableName_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSqlTableModel_OnSetTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetTable(self: ?*anyopaque, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
qtc.QSqlTableModel_QBaseSetTable(@ptrCast(self), tableName_str);
    }

    pub fn TableName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_TableName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.TableName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QSqlTableModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlTableModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QSqlTableModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn Record(self: ?*anyopaque, ) QtC.QSqlRecord {
        return qtc.QSqlTableModel_Record(@ptrCast(self));
    }

    pub fn Record2(self: ?*anyopaque, row: i32) QtC.QSqlRecord {
        return qtc.QSqlTableModel_Record2(@ptrCast(self), row);
    }

    pub fn Data(self: ?*anyopaque, idx: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSqlTableModel_Data(@ptrCast(self), @ptrCast(idx), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlTableModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, idx: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSqlTableModel_QBaseData(@ptrCast(self), @ptrCast(idx), role);
    }

    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlTableModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlTableModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QSqlTableModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QSqlTableModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSqlTableModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlTableModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSqlTableModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn IsDirty(self: ?*anyopaque, ) bool {
        return qtc.QSqlTableModel_IsDirty(@ptrCast(self));
    }

    pub fn IsDirty2(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QSqlTableModel_IsDirty2(@ptrCast(self), @ptrCast(index));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSqlTableModel_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QSqlTableModel_QBaseClear(@ptrCast(self));
    }

    pub fn SetEditStrategy(self: ?*anyopaque, strategy: i32) void {
        qtc.QSqlTableModel_SetEditStrategy(@ptrCast(self), @intCast(strategy));
    }

    /// Allows for overriding the related default method
    pub fn OnSetEditStrategy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlTableModel_OnSetEditStrategy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetEditStrategy(self: ?*anyopaque, strategy: i32) void {
        qtc.QSqlTableModel_QBaseSetEditStrategy(@ptrCast(self), @intCast(strategy));
    }

    pub fn EditStrategy(self: ?*anyopaque, ) i32 {
        return qtc.QSqlTableModel_EditStrategy(@ptrCast(self));
    }

    pub fn PrimaryKey(self: ?*anyopaque, ) QtC.QSqlIndex {
        return qtc.QSqlTableModel_PrimaryKey(@ptrCast(self));
    }

    pub fn Database(self: ?*anyopaque, ) QtC.QSqlDatabase {
        return qtc.QSqlTableModel_Database(@ptrCast(self));
    }

    pub fn FieldIndex(self: ?*anyopaque, fieldName: []const u8) i32 {
        const fieldName_str = qtc.libqt_string{
    .len = fieldName.len,
    .data = fieldName.ptr,
};
return qtc.QSqlTableModel_FieldIndex(@ptrCast(self), fieldName_str);
    }

    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSqlTableModel_Sort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlTableModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSqlTableModel_QBaseSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn SetSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSqlTableModel_SetSort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlTableModel_OnSetSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSqlTableModel_QBaseSetSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn Filter(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_Filter(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.Filter: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
qtc.QSqlTableModel_SetFilter(@ptrCast(self), filter_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSqlTableModel_OnSetFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
qtc.QSqlTableModel_QBaseSetFilter(@ptrCast(self), filter_str);
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlTableModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlTableModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlTableModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlTableModel_RemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlTableModel_QBaseRemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlTableModel_RemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlTableModel_QBaseRemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlTableModel_InsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlTableModel_QBaseInsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn InsertRecord(self: ?*anyopaque, row: i32, record: ?*anyopaque) bool {
        return qtc.QSqlTableModel_InsertRecord(@ptrCast(self), row, @ptrCast(record));
    }

    pub fn SetRecord(self: ?*anyopaque, row: i32, record: ?*anyopaque) bool {
        return qtc.QSqlTableModel_SetRecord(@ptrCast(self), row, @ptrCast(record));
    }

    pub fn RevertRow(self: ?*anyopaque, row: i32) void {
        qtc.QSqlTableModel_RevertRow(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnRevertRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlTableModel_OnRevertRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRevertRow(self: ?*anyopaque, row: i32) void {
        qtc.QSqlTableModel_QBaseRevertRow(@ptrCast(self), row);
    }

    pub fn Select(self: ?*anyopaque, ) bool {
        return qtc.QSqlTableModel_Select(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelect(self: ?*anyopaque, ) bool {
        return qtc.QSqlTableModel_QBaseSelect(@ptrCast(self));
    }

    pub fn SelectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QSqlTableModel_SelectRow(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnSelectRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnSelectRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QSqlTableModel_QBaseSelectRow(@ptrCast(self), row);
    }

    pub fn Submit(self: ?*anyopaque, ) bool {
        return qtc.QSqlTableModel_Submit(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnSubmit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubmit(self: ?*anyopaque, ) bool {
        return qtc.QSqlTableModel_QBaseSubmit(@ptrCast(self));
    }

    pub fn Revert(self: ?*anyopaque, ) void {
        qtc.QSqlTableModel_Revert(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_OnRevert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRevert(self: ?*anyopaque, ) void {
        qtc.QSqlTableModel_QBaseRevert(@ptrCast(self));
    }

    pub fn SubmitAll(self: ?*anyopaque, ) bool {
        return qtc.QSqlTableModel_SubmitAll(@ptrCast(self));
    }

    pub fn RevertAll(self: ?*anyopaque, ) void {
        qtc.QSqlTableModel_RevertAll(@ptrCast(self));
    }

    pub fn PrimeInsert(self: ?*anyopaque, row: i32, record: ?*anyopaque) void {
        qtc.QSqlTableModel_PrimeInsert(@ptrCast(self), row, @ptrCast(record));
    }

    pub fn OnPrimeInsert(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_PrimeInsert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BeforeInsert(self: ?*anyopaque, record: ?*anyopaque) void {
        qtc.QSqlTableModel_BeforeInsert(@ptrCast(self), @ptrCast(record));
    }

    pub fn OnBeforeInsert(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeInsert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BeforeUpdate(self: ?*anyopaque, row: i32, record: ?*anyopaque) void {
        qtc.QSqlTableModel_BeforeUpdate(@ptrCast(self), row, @ptrCast(record));
    }

    pub fn OnBeforeUpdate(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeUpdate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BeforeDelete(self: ?*anyopaque, row: i32) void {
        qtc.QSqlTableModel_BeforeDelete(@ptrCast(self), row);
    }

    pub fn OnBeforeDelete(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeDelete(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UpdateRowInTable(self: ?*anyopaque, row: i32, values: ?*anyopaque) bool {
        return qtc.QSqlTableModel_UpdateRowInTable(@ptrCast(self), row, @ptrCast(values));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateRowInTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnUpdateRowInTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateRowInTable(self: ?*anyopaque, row: i32, values: ?*anyopaque) bool {
        return qtc.QSqlTableModel_QBaseUpdateRowInTable(@ptrCast(self), row, @ptrCast(values));
    }

    pub fn InsertRowIntoTable(self: ?*anyopaque, values: ?*anyopaque) bool {
        return qtc.QSqlTableModel_InsertRowIntoTable(@ptrCast(self), @ptrCast(values));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRowIntoTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnInsertRowIntoTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRowIntoTable(self: ?*anyopaque, values: ?*anyopaque) bool {
        return qtc.QSqlTableModel_QBaseInsertRowIntoTable(@ptrCast(self), @ptrCast(values));
    }

    pub fn DeleteRowFromTable(self: ?*anyopaque, row: i32) bool {
        return qtc.QSqlTableModel_DeleteRowFromTable(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnDeleteRowFromTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlTableModel_OnDeleteRowFromTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDeleteRowFromTable(self: ?*anyopaque, row: i32) bool {
        return qtc.QSqlTableModel_QBaseDeleteRowFromTable(@ptrCast(self), row);
    }

    pub fn OrderByClause(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_OrderByClause(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.OrderByClause: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnOrderByClause(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlTableModel_OnOrderByClause(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOrderByClause(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_QBaseOrderByClause(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.OrderByClause: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SelectStatement(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_SelectStatement(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.SelectStatement: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnSelectStatement(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlTableModel_OnSelectStatement(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectStatement(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_QBaseSelectStatement(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.SelectStatement: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPrimaryKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSqlTableModel_SetPrimaryKey(@ptrCast(self), @ptrCast(key));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPrimaryKey(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_OnSetPrimaryKey(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPrimaryKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSqlTableModel_QBaseSetPrimaryKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn IndexInQuery(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlTableModel_IndexInQuery(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexInQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSqlTableModel_OnIndexInQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexInQuery(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlTableModel_QBaseIndexInQuery(@ptrCast(self), @ptrCast(item));
    }

    pub fn PrimaryValues(self: ?*anyopaque, row: i32) QtC.QSqlRecord {
        return qtc.QSqlTableModel_PrimaryValues(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnPrimaryValues(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QSqlRecord) void {
        qtc.QSqlTableModel_OnPrimaryValues(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePrimaryValues(self: ?*anyopaque, row: i32) QtC.QSqlRecord {
        return qtc.QSqlTableModel_QBasePrimaryValues(@ptrCast(self), row);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqltablemodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlTableModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sqltablemodel.html#types
pub const enums = struct {
    pub const EditStrategy = enum {
        pub const OnFieldChange: i32 = 0;
        pub const OnRowChange: i32 = 1;
        pub const OnManualSubmit: i32 = 2;
    };

};
