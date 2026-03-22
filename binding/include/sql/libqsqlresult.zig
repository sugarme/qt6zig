const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqlresult.html
pub const qsqlresult = struct {

    pub fn Handle(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlResult_Handle(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHandle(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QSqlResult_OnHandle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHandle(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlResult_QBaseHandle(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_At(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAt(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlResult_OnAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAt(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_QBaseAt(@ptrCast(self));
    }

    pub fn LastQuery(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlResult_LastQuery(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlresult.LastQuery: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnLastQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlResult_OnLastQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLastQuery(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlResult_QBaseLastQuery(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlresult.LastQuery: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LastError(self: ?*anyopaque, ) QtC.QSqlError {
        return qtc.QSqlResult_LastError(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLastError(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSqlError) void {
        qtc.QSqlResult_OnLastError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLastError(self: ?*anyopaque, ) QtC.QSqlError {
        return qtc.QSqlResult_QBaseLastError(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_IsValid(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsValid(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnIsValid(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsValid(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseIsValid(@ptrCast(self));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_IsActive(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsActive(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnIsActive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsActive(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseIsActive(@ptrCast(self));
    }

    pub fn IsSelect(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_IsSelect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSelect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnIsSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSelect(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseIsSelect(@ptrCast(self));
    }

    pub fn IsForwardOnly(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_IsForwardOnly(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsForwardOnly(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnIsForwardOnly(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsForwardOnly(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseIsForwardOnly(@ptrCast(self));
    }

    pub fn Driver(self: ?*anyopaque, ) QtC.QSqlDriver {
        return qtc.QSqlResult_Driver(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDriver(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSqlDriver) void {
        qtc.QSqlResult_OnDriver(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDriver(self: ?*anyopaque, ) QtC.QSqlDriver {
        return qtc.QSqlResult_QBaseDriver(@ptrCast(self));
    }

    pub fn SetAt(self: ?*anyopaque, at: i32) void {
        qtc.QSqlResult_SetAt(@ptrCast(self), at);
    }

    /// Allows for overriding the related default method
    pub fn OnSetAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlResult_OnSetAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetAt(self: ?*anyopaque, at: i32) void {
        qtc.QSqlResult_QBaseSetAt(@ptrCast(self), at);
    }

    pub fn SetActive(self: ?*anyopaque, a: bool) void {
        qtc.QSqlResult_SetActive(@ptrCast(self), a);
    }

    /// Allows for overriding the related default method
    pub fn OnSetActive(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlResult_OnSetActive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetActive(self: ?*anyopaque, a: bool) void {
        qtc.QSqlResult_QBaseSetActive(@ptrCast(self), a);
    }

    pub fn SetLastError(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QSqlResult_SetLastError(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnSetLastError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlResult_OnSetLastError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetLastError(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QSqlResult_QBaseSetLastError(@ptrCast(self), @ptrCast(e));
    }

    pub fn SetQuery(self: ?*anyopaque, query: []const u8) void {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
qtc.QSqlResult_SetQuery(@ptrCast(self), query_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSqlResult_OnSetQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetQuery(self: ?*anyopaque, query: []const u8) void {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
qtc.QSqlResult_QBaseSetQuery(@ptrCast(self), query_str);
    }

    pub fn SetSelect(self: ?*anyopaque, s: bool) void {
        qtc.QSqlResult_SetSelect(@ptrCast(self), s);
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelect(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlResult_OnSetSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelect(self: ?*anyopaque, s: bool) void {
        qtc.QSqlResult_QBaseSetSelect(@ptrCast(self), s);
    }

    pub fn SetForwardOnly(self: ?*anyopaque, forward: bool) void {
        qtc.QSqlResult_SetForwardOnly(@ptrCast(self), forward);
    }

    /// Allows for overriding the related default method
    pub fn OnSetForwardOnly(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlResult_OnSetForwardOnly(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetForwardOnly(self: ?*anyopaque, forward: bool) void {
        qtc.QSqlResult_QBaseSetForwardOnly(@ptrCast(self), forward);
    }

    pub fn Exec(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_Exec(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExec(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnExec(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExec(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseExec(@ptrCast(self));
    }

    pub fn Prepare(self: ?*anyopaque, query: []const u8) bool {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
return qtc.QSqlResult_Prepare(@ptrCast(self), query_str);
    }

    /// Allows for overriding the related default method
    pub fn OnPrepare(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlResult_OnPrepare(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePrepare(self: ?*anyopaque, query: []const u8) bool {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
return qtc.QSqlResult_QBasePrepare(@ptrCast(self), query_str);
    }

    pub fn SavePrepare(self: ?*anyopaque, sqlquery: []const u8) bool {
        const sqlquery_str = qtc.libqt_string{
    .len = sqlquery.len,
    .data = sqlquery.ptr,
};
return qtc.QSqlResult_SavePrepare(@ptrCast(self), sqlquery_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSavePrepare(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlResult_OnSavePrepare(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSavePrepare(self: ?*anyopaque, sqlquery: []const u8) bool {
        const sqlquery_str = qtc.libqt_string{
    .len = sqlquery.len,
    .data = sqlquery.ptr,
};
return qtc.QSqlResult_QBaseSavePrepare(@ptrCast(self), sqlquery_str);
    }

    pub fn BindValue(self: ?*anyopaque, pos: i32, val: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlResult_BindValue(@ptrCast(self), pos, @ptrCast(val), @intCast(typeVal));
    }

    /// Allows for overriding the related default method
    pub fn OnBindValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlResult_OnBindValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBindValue(self: ?*anyopaque, pos: i32, val: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlResult_QBaseBindValue(@ptrCast(self), pos, @ptrCast(val), @intCast(typeVal));
    }

    pub fn BindValue2(self: ?*anyopaque, placeholder: []const u8, val: ?*anyopaque, typeVal: i32) void {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
qtc.QSqlResult_BindValue2(@ptrCast(self), placeholder_str, @ptrCast(val), @intCast(typeVal));
    }

    /// Allows for overriding the related default method
    pub fn OnBindValue2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlResult_OnBindValue2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBindValue2(self: ?*anyopaque, placeholder: []const u8, val: ?*anyopaque, typeVal: i32) void {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
qtc.QSqlResult_QBaseBindValue2(@ptrCast(self), placeholder_str, @ptrCast(val), @intCast(typeVal));
    }

    pub fn AddBindValue(self: ?*anyopaque, val: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlResult_AddBindValue(@ptrCast(self), @ptrCast(val), @intCast(typeVal));
    }

    /// Allows for overriding the related default method
    pub fn OnAddBindValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlResult_OnAddBindValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddBindValue(self: ?*anyopaque, val: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlResult_QBaseAddBindValue(@ptrCast(self), @ptrCast(val), @intCast(typeVal));
    }

    pub fn BoundValue(self: ?*anyopaque, placeholder: []const u8) QtC.QVariant {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
return qtc.QSqlResult_BoundValue(@ptrCast(self), placeholder_str);
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QVariant) void {
        qtc.QSqlResult_OnBoundValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValue(self: ?*anyopaque, placeholder: []const u8) QtC.QVariant {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
return qtc.QSqlResult_QBaseBoundValue(@ptrCast(self), placeholder_str);
    }

    pub fn BoundValue2(self: ?*anyopaque, pos: i32) QtC.QVariant {
        return qtc.QSqlResult_BoundValue2(@ptrCast(self), pos);
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValue2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlResult_OnBoundValue2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValue2(self: ?*anyopaque, pos: i32) QtC.QVariant {
        return qtc.QSqlResult_QBaseBoundValue2(@ptrCast(self), pos);
    }

    pub fn BindValueType(self: ?*anyopaque, placeholder: []const u8) i32 {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
return qtc.QSqlResult_BindValueType(@ptrCast(self), placeholder_str);
    }

    /// Allows for overriding the related default method
    pub fn OnBindValueType(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSqlResult_OnBindValueType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBindValueType(self: ?*anyopaque, placeholder: []const u8) i32 {
        const placeholder_str = qtc.libqt_string{
    .len = placeholder.len,
    .data = placeholder.ptr,
};
return qtc.QSqlResult_QBaseBindValueType(@ptrCast(self), placeholder_str);
    }

    pub fn BindValueType2(self: ?*anyopaque, pos: i32) i32 {
        return qtc.QSqlResult_BindValueType2(@ptrCast(self), pos);
    }

    /// Allows for overriding the related default method
    pub fn OnBindValueType2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSqlResult_OnBindValueType2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBindValueType2(self: ?*anyopaque, pos: i32) i32 {
        return qtc.QSqlResult_QBaseBindValueType2(@ptrCast(self), pos);
    }

    pub fn BoundValueCount(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_BoundValueCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValueCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlResult_OnBoundValueCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValueCount(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_QBaseBoundValueCount(@ptrCast(self));
    }

    pub fn BoundValues(self: ?*anyopaque, ) []const u8 {
        return @ptrCast(qtc.QSqlResult_BoundValues(@ptrCast(self)));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValues(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlResult_OnBoundValues(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValues(self: ?*anyopaque, ) []const u8 {
        return @ptrCast(qtc.QSqlResult_QBaseBoundValues(@ptrCast(self)));
    }

    pub fn BoundValues2(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlResult_BoundValues2(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValues2(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlResult_OnBoundValues2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValues2(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlResult_QBaseBoundValues2(@ptrCast(self));
    }

    pub fn ExecutedQuery(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlResult_ExecutedQuery(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlresult.ExecutedQuery: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnExecutedQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlResult_OnExecutedQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExecutedQuery(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlResult_QBaseExecutedQuery(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlresult.ExecutedQuery: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BoundValueNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlResult_BoundValueNames(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValueNames(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlResult_OnBoundValueNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValueNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlResult_QBaseBoundValueNames(@ptrCast(self));
    }

    pub fn BoundValueName(self: ?*anyopaque, pos: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlResult_BoundValueName(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlresult.BoundValueName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValueName(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlResult_OnBoundValueName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValueName(self: ?*anyopaque, pos: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlResult_QBaseBoundValueName(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlresult.BoundValueName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSqlResult_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlResult_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QSqlResult_QBaseClear(@ptrCast(self));
    }

    pub fn HasOutValues(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_HasOutValues(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasOutValues(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnHasOutValues(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasOutValues(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseHasOutValues(@ptrCast(self));
    }

    pub fn BindingSyntax(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_BindingSyntax(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBindingSyntax(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlResult_OnBindingSyntax(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBindingSyntax(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_QBaseBindingSyntax(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, i: i32) QtC.QVariant {
        return qtc.QSqlResult_Data(@ptrCast(self), i);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlResult_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, i: i32) QtC.QVariant {
        return qtc.QSqlResult_QBaseData(@ptrCast(self), i);
    }

    pub fn IsNull(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlResult_IsNull(@ptrCast(self), i);
    }

    /// Allows for overriding the related default method
    pub fn OnIsNull(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlResult_OnIsNull(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsNull(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlResult_QBaseIsNull(@ptrCast(self), i);
    }

    pub fn Reset(self: ?*anyopaque, sqlquery: []const u8) bool {
        const sqlquery_str = qtc.libqt_string{
    .len = sqlquery.len,
    .data = sqlquery.ptr,
};
return qtc.QSqlResult_Reset(@ptrCast(self), sqlquery_str);
    }

    /// Allows for overriding the related default method
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlResult_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReset(self: ?*anyopaque, sqlquery: []const u8) bool {
        const sqlquery_str = qtc.libqt_string{
    .len = sqlquery.len,
    .data = sqlquery.ptr,
};
return qtc.QSqlResult_QBaseReset(@ptrCast(self), sqlquery_str);
    }

    pub fn Fetch(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlResult_Fetch(@ptrCast(self), i);
    }

    /// Allows for overriding the related default method
    pub fn OnFetch(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlResult_OnFetch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetch(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlResult_QBaseFetch(@ptrCast(self), i);
    }

    pub fn FetchNext(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_FetchNext(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchNext(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnFetchNext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchNext(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseFetchNext(@ptrCast(self));
    }

    pub fn FetchPrevious(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_FetchPrevious(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchPrevious(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnFetchPrevious(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchPrevious(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseFetchPrevious(@ptrCast(self));
    }

    pub fn FetchFirst(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_FetchFirst(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchFirst(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnFetchFirst(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchFirst(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseFetchFirst(@ptrCast(self));
    }

    pub fn FetchLast(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_FetchLast(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchLast(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnFetchLast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchLast(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseFetchLast(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlResult_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_QBaseSize(@ptrCast(self));
    }

    pub fn NumRowsAffected(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_NumRowsAffected(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNumRowsAffected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlResult_OnNumRowsAffected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNumRowsAffected(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_QBaseNumRowsAffected(@ptrCast(self));
    }

    pub fn Record(self: ?*anyopaque, ) QtC.QSqlRecord {
        return qtc.QSqlResult_Record(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRecord(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSqlRecord) void {
        qtc.QSqlResult_OnRecord(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRecord(self: ?*anyopaque, ) QtC.QSqlRecord {
        return qtc.QSqlResult_QBaseRecord(@ptrCast(self));
    }

    pub fn LastInsertId(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlResult_LastInsertId(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLastInsertId(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QSqlResult_OnLastInsertId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLastInsertId(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlResult_QBaseLastInsertId(@ptrCast(self));
    }

    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QSqlResult_VirtualHook(@ptrCast(self), id, @ptrCast(data));
    }

    /// Allows for overriding the related default method
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlResult_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QSqlResult_QBaseVirtualHook(@ptrCast(self), id, @ptrCast(data));
    }

    pub fn ExecBatch(self: ?*anyopaque, arrayBind: bool) bool {
        return qtc.QSqlResult_ExecBatch(@ptrCast(self), arrayBind);
    }

    /// Allows for overriding the related default method
    pub fn OnExecBatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QSqlResult_OnExecBatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExecBatch(self: ?*anyopaque, arrayBind: bool) bool {
        return qtc.QSqlResult_QBaseExecBatch(@ptrCast(self), arrayBind);
    }

    pub fn DetachFromResultSet(self: ?*anyopaque, ) void {
        qtc.QSqlResult_DetachFromResultSet(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDetachFromResultSet(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlResult_OnDetachFromResultSet(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDetachFromResultSet(self: ?*anyopaque, ) void {
        qtc.QSqlResult_QBaseDetachFromResultSet(@ptrCast(self));
    }

    pub fn SetNumericalPrecisionPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QSqlResult_SetNumericalPrecisionPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Allows for overriding the related default method
    pub fn OnSetNumericalPrecisionPolicy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlResult_OnSetNumericalPrecisionPolicy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetNumericalPrecisionPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QSqlResult_QBaseSetNumericalPrecisionPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn NumericalPrecisionPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_NumericalPrecisionPolicy(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNumericalPrecisionPolicy(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlResult_OnNumericalPrecisionPolicy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNumericalPrecisionPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QSqlResult_QBaseNumericalPrecisionPolicy(@ptrCast(self));
    }

    pub fn SetPositionalBindingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSqlResult_SetPositionalBindingEnabled(@ptrCast(self), enable);
    }

    /// Allows for overriding the related default method
    pub fn OnSetPositionalBindingEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlResult_OnSetPositionalBindingEnabled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPositionalBindingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSqlResult_QBaseSetPositionalBindingEnabled(@ptrCast(self), enable);
    }

    pub fn IsPositionalBindingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_IsPositionalBindingEnabled(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsPositionalBindingEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnIsPositionalBindingEnabled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsPositionalBindingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseIsPositionalBindingEnabled(@ptrCast(self));
    }

    pub fn NextResult(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_NextResult(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextResult(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlResult_OnNextResult(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextResult(self: ?*anyopaque, ) bool {
        return qtc.QSqlResult_QBaseNextResult(@ptrCast(self));
    }

    pub fn ResetBindCount(self: ?*anyopaque, ) void {
        qtc.QSqlResult_ResetBindCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnResetBindCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlResult_OnResetBindCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResetBindCount(self: ?*anyopaque, ) void {
        qtc.QSqlResult_QBaseResetBindCount(@ptrCast(self));
    }

    pub fn BoundValues1(self: ?*anyopaque, param1: QtC.Disambiguated_t) []const u8 {
        return @ptrCast(qtc.QSqlResult_BoundValues1(@ptrCast(self), @ptrCast(param1)));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValues1(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.Disambiguated_t) callconv(.c) [*:0]const u8) void {
        qtc.QSqlResult_OnBoundValues1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValues1(self: ?*anyopaque, param1: QtC.Disambiguated_t) []const u8 {
        return @ptrCast(qtc.QSqlResult_QBaseBoundValues1(@ptrCast(self), @ptrCast(param1)));
    }

    pub fn BoundValues12(self: ?*anyopaque, param1: QtC.Disambiguated_t) []const u8 {
        return qtc.QSqlResult_BoundValues12(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundValues12(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.Disambiguated_t) callconv(.c) [*:0]const u8) void {
        qtc.QSqlResult_OnBoundValues12(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundValues12(self: ?*anyopaque, param1: QtC.Disambiguated_t) []const u8 {
        return qtc.QSqlResult_QBaseBoundValues12(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlResult_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sqlresult.html#types
pub const enums = struct {
    pub const BindingSyntax = enum {
        pub const PositionalBinding: i32 = 0;
        pub const NamedBinding: i32 = 1;
    };

};
