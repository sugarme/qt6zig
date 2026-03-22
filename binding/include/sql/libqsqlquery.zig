const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqlquery.html
pub const qsqlquery = struct {

    /// New constructs a new QSqlQuery object.
    pub fn New(r: ?*anyopaque) QtC.QSqlQuery {
        return qtc.QSqlQuery_new(@ptrCast(r));
    }


    /// New2 constructs a new QSqlQuery object.
    pub fn New2() QtC.QSqlQuery {
        return qtc.QSqlQuery_new2();
    }


    /// New3 constructs a new QSqlQuery object.
    pub fn New3(db: ?*anyopaque) QtC.QSqlQuery {
        return qtc.QSqlQuery_new3(@ptrCast(db));
    }


    /// New4 constructs a new QSqlQuery object.
    pub fn New4(other: ?*anyopaque) QtC.QSqlQuery {
        return qtc.QSqlQuery_new4(@ptrCast(other));
    }


    /// New5 constructs a new QSqlQuery object.
    pub fn New5(query: []const u8) QtC.QSqlQuery {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
return qtc.QSqlQuery_new5(query_str);
    }


    /// New6 constructs a new QSqlQuery object.
    pub fn New6(query: []const u8, db: ?*anyopaque) QtC.QSqlQuery {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
return qtc.QSqlQuery_new6(query_str, @ptrCast(db));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlQuery_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlQuery_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_IsValid(@ptrCast(self));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_IsActive(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, field: i32) bool {
        return qtc.QSqlQuery_IsNull(@ptrCast(self), field);
    }

    pub fn At(self: ?*anyopaque, ) i32 {
        return qtc.QSqlQuery_At(@ptrCast(self));
    }

    pub fn LastQuery(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlQuery_LastQuery(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.LastQuery: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NumRowsAffected(self: ?*anyopaque, ) i32 {
        return qtc.QSqlQuery_NumRowsAffected(@ptrCast(self));
    }

    pub fn LastError(self: ?*anyopaque, ) QtC.QSqlError {
        return qtc.QSqlQuery_LastError(@ptrCast(self));
    }

    pub fn IsSelect(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_IsSelect(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i32 {
        return qtc.QSqlQuery_Size(@ptrCast(self));
    }

    pub fn Driver(self: ?*anyopaque, ) QtC.QSqlDriver {
        return qtc.QSqlQuery_Driver(@ptrCast(self));
    }

    pub fn Result(self: ?*anyopaque, ) QtC.QSqlResult {
        return qtc.QSqlQuery_Result(@ptrCast(self));
    }

    pub fn IsForwardOnly(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_IsForwardOnly(@ptrCast(self));
    }

    pub fn Record(self: ?*anyopaque, ) QtC.QSqlRecord {
        return qtc.QSqlQuery_Record(@ptrCast(self));
    }

    pub fn SetForwardOnly(self: ?*anyopaque, forward: bool) void {
        qtc.QSqlQuery_SetForwardOnly(@ptrCast(self), forward);
    }

    pub fn Exec(self: ?*anyopaque, query: []const u8) bool {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
return qtc.QSqlQuery_Exec(@ptrCast(self), query_str);
    }

    pub fn Value(self: ?*anyopaque, i: i32) QtC.QVariant {
        return qtc.QSqlQuery_Value(@ptrCast(self), i);
    }

    pub fn SetNumericalPrecisionPolicy(self: ?*anyopaque, precisionPolicy: i32) void {
        qtc.QSqlQuery_SetNumericalPrecisionPolicy(@ptrCast(self), @intCast(precisionPolicy));
    }

    pub fn NumericalPrecisionPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QSqlQuery_NumericalPrecisionPolicy(@ptrCast(self));
    }

    pub fn SetPositionalBindingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSqlQuery_SetPositionalBindingEnabled(@ptrCast(self), enable);
    }

    pub fn IsPositionalBindingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_IsPositionalBindingEnabled(@ptrCast(self));
    }

    pub fn Seek(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlQuery_Seek(@ptrCast(self), i);
    }

    pub fn Next(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_Next(@ptrCast(self));
    }

    pub fn Previous(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_Previous(@ptrCast(self));
    }

    pub fn First(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_First(@ptrCast(self));
    }

    pub fn Last(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_Last(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSqlQuery_Clear(@ptrCast(self));
    }

    pub fn Exec2(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_Exec2(@ptrCast(self));
    }

    pub fn ExecBatch(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_ExecBatch(@ptrCast(self));
    }

    pub fn Prepare(self: ?*anyopaque, query: []const u8) bool {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
return qtc.QSqlQuery_Prepare(@ptrCast(self), query_str);
    }

    pub fn BindValue(self: ?*anyopaque, placeholder: []const u8, val: ?*anyopaque) void {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
qtc.QSqlQuery_BindValue(@ptrCast(self), placeholder_str, @ptrCast(val));
    }

    pub fn BindValue2(self: ?*anyopaque, pos: i32, val: ?*anyopaque) void {
        qtc.QSqlQuery_BindValue2(@ptrCast(self), pos, @ptrCast(val));
    }

    pub fn AddBindValue(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QSqlQuery_AddBindValue(@ptrCast(self), @ptrCast(val));
    }

    pub fn BoundValue(self: ?*anyopaque, placeholder: []const u8) QtC.QVariant {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
return qtc.QSqlQuery_BoundValue(@ptrCast(self), placeholder_str);
    }

    pub fn BoundValue2(self: ?*anyopaque, pos: i32) QtC.QVariant {
        return qtc.QSqlQuery_BoundValue2(@ptrCast(self), pos);
    }

    pub fn BoundValues(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlQuery_BoundValues(@ptrCast(self));
    }

    pub fn BoundValueNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlQuery_BoundValueNames(@ptrCast(self));
    }

    pub fn BoundValueName(self: ?*anyopaque, pos: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlQuery_BoundValueName(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.BoundValueName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ExecutedQuery(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlQuery_ExecutedQuery(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.ExecutedQuery: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LastInsertId(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlQuery_LastInsertId(@ptrCast(self));
    }

    pub fn Finish(self: ?*anyopaque, ) void {
        qtc.QSqlQuery_Finish(@ptrCast(self));
    }

    pub fn NextResult(self: ?*anyopaque, ) bool {
        return qtc.QSqlQuery_NextResult(@ptrCast(self));
    }

    pub fn Seek2(self: ?*anyopaque, i: i32, relative: bool) bool {
        return qtc.QSqlQuery_Seek2(@ptrCast(self), i, relative);
    }

    pub fn ExecBatch1(self: ?*anyopaque, mode: i32) bool {
        return qtc.QSqlQuery_ExecBatch1(@ptrCast(self), @intCast(mode));
    }

    pub fn BindValue3(self: ?*anyopaque, placeholder: []const u8, val: ?*anyopaque, typeVal: i32) void {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
qtc.QSqlQuery_BindValue3(@ptrCast(self), placeholder_str, @ptrCast(val), @intCast(typeVal));
    }

    pub fn BindValue32(self: ?*anyopaque, pos: i32, val: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlQuery_BindValue32(@ptrCast(self), pos, @ptrCast(val), @intCast(typeVal));
    }

    pub fn AddBindValue2(self: ?*anyopaque, val: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlQuery_AddBindValue2(@ptrCast(self), @ptrCast(val), @intCast(typeVal));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlQuery_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sqlquery.html#types
pub const enums = struct {
    pub const BatchExecutionMode = enum {
        pub const ValuesAsRows: i32 = 0;
        pub const ValuesAsColumns: i32 = 1;
    };

};
