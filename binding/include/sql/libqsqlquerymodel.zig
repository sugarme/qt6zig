const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqlquerymodel.html
pub const qsqlquerymodel = struct {

    /// New constructs a new QSqlQueryModel object.
    pub fn New() QtC.QSqlQueryModel {
        return qtc.QSqlQueryModel_new();
    }


    /// New2 constructs a new QSqlQueryModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QSqlQueryModel {
        return qtc.QSqlQueryModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlQueryModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquerymodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlQueryModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlQueryModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlQueryModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlQueryModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlQueryModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlQueryModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Record(self: ?*anyopaque, row: i32) QtC.QSqlRecord {
        return qtc.QSqlQueryModel_Record(@ptrCast(self), row);
    }

    pub fn Record2(self: ?*anyopaque, ) QtC.QSqlRecord {
        return qtc.QSqlQueryModel_Record2(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, item: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSqlQueryModel_Data(@ptrCast(self), @ptrCast(item), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlQueryModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, item: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSqlQueryModel_QBaseData(@ptrCast(self), @ptrCast(item), role);
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSqlQueryModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlQueryModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSqlQueryModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlQueryModel_SetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlQueryModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlQueryModel_QBaseSetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlQueryModel_InsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlQueryModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlQueryModel_QBaseInsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlQueryModel_RemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlQueryModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlQueryModel_QBaseRemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn SetQuery(self: ?*anyopaque, query: ?*anyopaque) void {
        qtc.QSqlQueryModel_SetQuery(@ptrCast(self), @ptrCast(query));
    }

    pub fn SetQuery2(self: ?*anyopaque, query: []const u8) void {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
qtc.QSqlQueryModel_SetQuery2(@ptrCast(self), query_str);
    }

    pub fn Query(self: ?*anyopaque, ) QtC.QSqlQuery {
        return qtc.QSqlQueryModel_Query(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QBaseClear(@ptrCast(self));
    }

    pub fn LastError(self: ?*anyopaque, ) QtC.QSqlError {
        return qtc.QSqlQueryModel_LastError(@ptrCast(self));
    }

    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QSqlQueryModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QSqlQueryModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSqlQueryModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlQueryModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSqlQueryModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn RoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QSqlQueryModel_RoleNames(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QHash<int, QByteArray>) void {
        qtc.QSqlQueryModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QSqlQueryModel_QBaseRoleNames(@ptrCast(self));
    }

    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlQueryModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnBeginInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlQueryModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn EndInsertRows(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_EndInsertRows(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnEndInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndInsertRows(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QBaseEndInsertRows(@ptrCast(self));
    }

    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlQueryModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnBeginRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlQueryModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn EndRemoveRows(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_EndRemoveRows(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnEndRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndRemoveRows(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlQueryModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnBeginInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlQueryModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn EndInsertColumns(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_EndInsertColumns(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnEndInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndInsertColumns(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlQueryModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnBeginRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlQueryModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn EndRemoveColumns(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnEndRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    pub fn BeginResetModel(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_BeginResetModel(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnBeginResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginResetModel(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QBaseBeginResetModel(@ptrCast(self));
    }

    pub fn EndResetModel(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_EndResetModel(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnEndResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndResetModel(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QBaseEndResetModel(@ptrCast(self));
    }

    pub fn QueryChange(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QueryChange(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnQueryChange(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnQueryChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseQueryChange(self: ?*anyopaque, ) void {
        qtc.QSqlQueryModel_QBaseQueryChange(@ptrCast(self));
    }

    pub fn IndexInQuery(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlQueryModel_IndexInQuery(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexInQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSqlQueryModel_OnIndexInQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexInQuery(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlQueryModel_QBaseIndexInQuery(@ptrCast(self), @ptrCast(item));
    }

    pub fn SetLastError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSqlQueryModel_SetLastError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// Allows for overriding the related default method
    pub fn OnSetLastError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlQueryModel_OnSetLastError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetLastError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSqlQueryModel_QBaseSetLastError(@ptrCast(self), @ptrCast(errorVal));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlQueryModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquerymodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlQueryModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquerymodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetQuery22(self: ?*anyopaque, query: []const u8, db: ?*anyopaque) void {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
qtc.QSqlQueryModel_SetQuery22(@ptrCast(self), query_str, @ptrCast(db));
    }

    pub fn Query1(self: ?*anyopaque, param1: QtC.Disambiguated_t) QtC.QSqlQuery {
        return qtc.QSqlQueryModel_Query1(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlQueryModel_Delete(@ptrCast(self));
    }
};
