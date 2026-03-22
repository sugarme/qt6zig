const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqlrelation.html
pub const qsqlrelation = struct {

    /// New constructs a new QSqlRelation object.
    pub fn New() QtC.QSqlRelation {
        return qtc.QSqlRelation_new();
    }


    /// New2 constructs a new QSqlRelation object.
    pub fn New2(aTableName: []const u8, indexCol: []const u8, displayCol: []const u8) QtC.QSqlRelation {
        const aTableName_str = qtc.libqt_string{
    .len = aTableName.len,
    .data = aTableName.ptr,
};
const indexCol_str = qtc.libqt_string{
    .len = indexCol.len,
    .data = indexCol.ptr,
};
const displayCol_str = qtc.libqt_string{
    .len = displayCol.len,
    .data = displayCol.ptr,
};
return qtc.QSqlRelation_new2(aTableName_str, indexCol_str, displayCol_str);
    }


    /// New3 constructs a new QSqlRelation object.
    pub fn New3(param1: ?*anyopaque) QtC.QSqlRelation {
        return qtc.QSqlRelation_new3(@ptrCast(param1));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlRelation_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn TableName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelation_TableName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.TableName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IndexColumn(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelation_IndexColumn(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.IndexColumn: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayColumn(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelation_DisplayColumn(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.DisplayColumn: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSqlRelation_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlRelation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html
pub const qsqlrelationaltablemodel = struct {

    /// New constructs a new QSqlRelationalTableModel object.
    pub fn New() QtC.QSqlRelationalTableModel {
        return qtc.QSqlRelationalTableModel_new();
    }


    /// New2 constructs a new QSqlRelationalTableModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QSqlRelationalTableModel {
        return qtc.QSqlRelationalTableModel_new2(@ptrCast(parent));
    }


    /// New3 constructs a new QSqlRelationalTableModel object.
    pub fn New3(parent: ?*anyopaque, db: ?*anyopaque) QtC.QSqlRelationalTableModel {
        return qtc.QSqlRelationalTableModel_new3(@ptrCast(parent), @ptrCast(db));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Data(self: ?*anyopaque, item: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSqlRelationalTableModel_Data(@ptrCast(self), @ptrCast(item), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlRelationalTableModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, item: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSqlRelationalTableModel_QBaseData(@ptrCast(self), @ptrCast(item), role);
    }

    pub fn SetData(self: ?*anyopaque, item: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlRelationalTableModel_SetData(@ptrCast(self), @ptrCast(item), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, item: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseSetData(@ptrCast(self), @ptrCast(item), @ptrCast(value), role);
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_RemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseRemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSqlRelationalTableModel_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QSqlRelationalTableModel_QBaseClear(@ptrCast(self));
    }

    pub fn Select(self: ?*anyopaque, ) bool {
        return qtc.QSqlRelationalTableModel_Select(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelect(self: ?*anyopaque, ) bool {
        return qtc.QSqlRelationalTableModel_QBaseSelect(@ptrCast(self));
    }

    pub fn SetTable(self: ?*anyopaque, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
qtc.QSqlRelationalTableModel_SetTable(@ptrCast(self), tableName_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetTable(self: ?*anyopaque, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
qtc.QSqlRelationalTableModel_QBaseSetTable(@ptrCast(self), tableName_str);
    }

    pub fn SetRelation(self: ?*anyopaque, column: i32, relation: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_SetRelation(@ptrCast(self), column, @ptrCast(relation));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRelation(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetRelation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRelation(self: ?*anyopaque, column: i32, relation: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseSetRelation(@ptrCast(self), column, @ptrCast(relation));
    }

    pub fn Relation(self: ?*anyopaque, column: i32) QtC.QSqlRelation {
        return qtc.QSqlRelationalTableModel_Relation(@ptrCast(self), column);
    }

    pub fn RelationModel(self: ?*anyopaque, column: i32) QtC.QSqlTableModel {
        return qtc.QSqlRelationalTableModel_RelationModel(@ptrCast(self), column);
    }

    /// Allows for overriding the related default method
    pub fn OnRelationModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QSqlTableModel) void {
        qtc.QSqlRelationalTableModel_OnRelationModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRelationModel(self: ?*anyopaque, column: i32) QtC.QSqlTableModel {
        return qtc.QSqlRelationalTableModel_QBaseRelationModel(@ptrCast(self), column);
    }

    pub fn SetJoinMode(self: ?*anyopaque, joinMode: i32) void {
        qtc.QSqlRelationalTableModel_SetJoinMode(@ptrCast(self), @intCast(joinMode));
    }

    pub fn RevertRow(self: ?*anyopaque, row: i32) void {
        qtc.QSqlRelationalTableModel_RevertRow(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnRevertRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnRevertRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRevertRow(self: ?*anyopaque, row: i32) void {
        qtc.QSqlRelationalTableModel_QBaseRevertRow(@ptrCast(self), row);
    }

    pub fn SelectStatement(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_SelectStatement(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.SelectStatement: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnSelectStatement(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlRelationalTableModel_OnSelectStatement(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectStatement(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_QBaseSelectStatement(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.SelectStatement: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UpdateRowInTable(self: ?*anyopaque, row: i32, values: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_UpdateRowInTable(@ptrCast(self), row, @ptrCast(values));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateRowInTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnUpdateRowInTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateRowInTable(self: ?*anyopaque, row: i32, values: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseUpdateRowInTable(@ptrCast(self), row, @ptrCast(values));
    }

    pub fn InsertRowIntoTable(self: ?*anyopaque, values: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_InsertRowIntoTable(@ptrCast(self), @ptrCast(values));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRowIntoTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnInsertRowIntoTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRowIntoTable(self: ?*anyopaque, values: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseInsertRowIntoTable(@ptrCast(self), @ptrCast(values));
    }

    pub fn OrderByClause(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_OrderByClause(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.OrderByClause: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnOrderByClause(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlRelationalTableModel_OnOrderByClause(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOrderByClause(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_QBaseOrderByClause(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.OrderByClause: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sqlrelationaltablemodel.html#types
pub const enums = struct {
    pub const JoinMode = enum {
        pub const InnerJoin: i32 = 0;
        pub const LeftJoin: i32 = 1;
    };

};
