const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqldriver.html
pub const qsqldriver = struct {

    /// New constructs a new QSqlDriver object.
    pub fn New() QtC.QSqlDriver {
        return qtc.QSqlDriver_new();
    }


    /// New2 constructs a new QSqlDriver object.
    pub fn New2(parent: ?*anyopaque) QtC.QSqlDriver {
        return qtc.QSqlDriver_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDriver_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsOpen(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_IsOpen(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsOpen(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_QBaseIsOpen(@ptrCast(self));
    }

    pub fn IsOpenError(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_IsOpenError(@ptrCast(self));
    }

    pub fn BeginTransaction(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_BeginTransaction(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBeginTransaction(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnBeginTransaction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginTransaction(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_QBaseBeginTransaction(@ptrCast(self));
    }

    pub fn CommitTransaction(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_CommitTransaction(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCommitTransaction(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnCommitTransaction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCommitTransaction(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_QBaseCommitTransaction(@ptrCast(self));
    }

    pub fn RollbackTransaction(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_RollbackTransaction(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRollbackTransaction(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnRollbackTransaction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRollbackTransaction(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_QBaseRollbackTransaction(@ptrCast(self));
    }

    pub fn Tables(self: ?*anyopaque, tableType: i32) []const u8 {
        return qtc.QSqlDriver_Tables(@ptrCast(self), @intCast(tableType));
    }

    /// Allows for overriding the related default method
    pub fn OnTables(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnTables(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTables(self: ?*anyopaque, tableType: i32) []const u8 {
        return qtc.QSqlDriver_QBaseTables(@ptrCast(self), @intCast(tableType));
    }

    pub fn PrimaryIndex(self: ?*anyopaque, tableName: []const u8) QtC.QSqlIndex {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
return qtc.QSqlDriver_PrimaryIndex(@ptrCast(self), tableName_str);
    }

    /// Allows for overriding the related default method
    pub fn OnPrimaryIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QSqlIndex) void {
        qtc.QSqlDriver_OnPrimaryIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePrimaryIndex(self: ?*anyopaque, tableName: []const u8) QtC.QSqlIndex {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
return qtc.QSqlDriver_QBasePrimaryIndex(@ptrCast(self), tableName_str);
    }

    pub fn Record(self: ?*anyopaque, tableName: []const u8) QtC.QSqlRecord {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
return qtc.QSqlDriver_Record(@ptrCast(self), tableName_str);
    }

    /// Allows for overriding the related default method
    pub fn OnRecord(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QSqlRecord) void {
        qtc.QSqlDriver_OnRecord(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRecord(self: ?*anyopaque, tableName: []const u8) QtC.QSqlRecord {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
return qtc.QSqlDriver_QBaseRecord(@ptrCast(self), tableName_str);
    }

    pub fn FormatValue(self: ?*anyopaque, field: ?*anyopaque, trimStrings: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDriver_FormatValue(@ptrCast(self), @ptrCast(field), trimStrings);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.FormatValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnFormatValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnFormatValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormatValue(self: ?*anyopaque, field: ?*anyopaque, trimStrings: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDriver_QBaseFormatValue(@ptrCast(self), @ptrCast(field), trimStrings);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.FormatValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn EscapeIdentifier(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
    .len = identifier.len,
    .data = identifier.ptr,
};
const _str = qtc.QSqlDriver_EscapeIdentifier(@ptrCast(self), identifier_str, @intCast(typeVal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.EscapeIdentifier: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnEscapeIdentifier(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnEscapeIdentifier(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEscapeIdentifier(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
    .len = identifier.len,
    .data = identifier.ptr,
};
const _str = qtc.QSqlDriver_QBaseEscapeIdentifier(@ptrCast(self), identifier_str, @intCast(typeVal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.EscapeIdentifier: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SqlStatement(self: ?*anyopaque, typeVal: i32, tableName: []const u8, rec: ?*anyopaque, preparedStatement: bool, allocator: std.mem.Allocator) []const u8 {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
const _str = qtc.QSqlDriver_SqlStatement(@ptrCast(self), @intCast(typeVal), tableName_str, @ptrCast(rec), preparedStatement);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.SqlStatement: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnSqlStatement(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, ?*anyopaque, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnSqlStatement(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSqlStatement(self: ?*anyopaque, typeVal: i32, tableName: []const u8, rec: ?*anyopaque, preparedStatement: bool, allocator: std.mem.Allocator) []const u8 {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
const _str = qtc.QSqlDriver_QBaseSqlStatement(@ptrCast(self), @intCast(typeVal), tableName_str, @ptrCast(rec), preparedStatement);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.SqlStatement: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LastError(self: ?*anyopaque, ) QtC.QSqlError {
        return qtc.QSqlDriver_LastError(@ptrCast(self));
    }

    pub fn Handle(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlDriver_Handle(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHandle(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QSqlDriver_OnHandle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHandle(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlDriver_QBaseHandle(@ptrCast(self));
    }

    pub fn HasFeature(self: ?*anyopaque, f: i32) bool {
        return qtc.QSqlDriver_HasFeature(@ptrCast(self), @intCast(f));
    }

    /// Allows for overriding the related default method
    pub fn OnHasFeature(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnHasFeature(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasFeature(self: ?*anyopaque, f: i32) bool {
        return qtc.QSqlDriver_QBaseHasFeature(@ptrCast(self), @intCast(f));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QSqlDriver_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QSqlDriver_QBaseClose(@ptrCast(self));
    }

    pub fn CreateResult(self: ?*anyopaque, ) QtC.QSqlResult {
        return qtc.QSqlDriver_CreateResult(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateResult(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSqlResult) void {
        qtc.QSqlDriver_OnCreateResult(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateResult(self: ?*anyopaque, ) QtC.QSqlResult {
        return qtc.QSqlDriver_QBaseCreateResult(@ptrCast(self));
    }

    pub fn Open(self: ?*anyopaque, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
        const db_str = qtc.libqt_string{
    .len = db.len,
    .data = db.ptr,
};
const user_str = qtc.libqt_string{
    .len = user.len,
    .data = user.ptr,
};
const password_str = qtc.libqt_string{
    .len = password.len,
    .data = password.ptr,
};
const host_str = qtc.libqt_string{
    .len = host.len,
    .data = host.ptr,
};
const connOpts_str = qtc.libqt_string{
    .len = connOpts.len,
    .data = connOpts.ptr,
};
return qtc.QSqlDriver_Open(@ptrCast(self), db_str, user_str, password_str, host_str, port, connOpts_str);
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
        const db_str = qtc.libqt_string{
    .len = db.len,
    .data = db.ptr,
};
const user_str = qtc.libqt_string{
    .len = user.len,
    .data = user.ptr,
};
const password_str = qtc.libqt_string{
    .len = password.len,
    .data = password.ptr,
};
const host_str = qtc.libqt_string{
    .len = host.len,
    .data = host.ptr,
};
const connOpts_str = qtc.libqt_string{
    .len = connOpts.len,
    .data = connOpts.ptr,
};
return qtc.QSqlDriver_QBaseOpen(@ptrCast(self), db_str, user_str, password_str, host_str, port, connOpts_str);
    }

    pub fn SubscribeToNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSqlDriver_SubscribeToNotification(@ptrCast(self), name_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSubscribeToNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnSubscribeToNotification(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubscribeToNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSqlDriver_QBaseSubscribeToNotification(@ptrCast(self), name_str);
    }

    pub fn UnsubscribeFromNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSqlDriver_UnsubscribeFromNotification(@ptrCast(self), name_str);
    }

    /// Allows for overriding the related default method
    pub fn OnUnsubscribeFromNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnUnsubscribeFromNotification(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnsubscribeFromNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSqlDriver_QBaseUnsubscribeFromNotification(@ptrCast(self), name_str);
    }

    pub fn SubscribedToNotifications(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlDriver_SubscribedToNotifications(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSubscribedToNotifications(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnSubscribedToNotifications(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubscribedToNotifications(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlDriver_QBaseSubscribedToNotifications(@ptrCast(self));
    }

    pub fn IsIdentifierEscaped(self: ?*anyopaque, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
    .len = identifier.len,
    .data = identifier.ptr,
};
return qtc.QSqlDriver_IsIdentifierEscaped(@ptrCast(self), identifier_str, @intCast(typeVal));
    }

    /// Allows for overriding the related default method
    pub fn OnIsIdentifierEscaped(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsIdentifierEscaped(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsIdentifierEscaped(self: ?*anyopaque, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
    .len = identifier.len,
    .data = identifier.ptr,
};
return qtc.QSqlDriver_QBaseIsIdentifierEscaped(@ptrCast(self), identifier_str, @intCast(typeVal));
    }

    pub fn StripDelimiters(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
    .len = identifier.len,
    .data = identifier.ptr,
};
const _str = qtc.QSqlDriver_StripDelimiters(@ptrCast(self), identifier_str, @intCast(typeVal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.StripDelimiters: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnStripDelimiters(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnStripDelimiters(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStripDelimiters(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
    .len = identifier.len,
    .data = identifier.ptr,
};
const _str = qtc.QSqlDriver_QBaseStripDelimiters(@ptrCast(self), identifier_str, @intCast(typeVal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.StripDelimiters: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNumericalPrecisionPolicy(self: ?*anyopaque, precisionPolicy: i32) void {
        qtc.QSqlDriver_SetNumericalPrecisionPolicy(@ptrCast(self), @intCast(precisionPolicy));
    }

    pub fn NumericalPrecisionPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QSqlDriver_NumericalPrecisionPolicy(@ptrCast(self));
    }

    pub fn DbmsType(self: ?*anyopaque, ) i32 {
        return qtc.QSqlDriver_DbmsType(@ptrCast(self));
    }

    pub fn MaximumIdentifierLength(self: ?*anyopaque, typeVal: i32) i32 {
        return qtc.QSqlDriver_MaximumIdentifierLength(@ptrCast(self), @intCast(typeVal));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumIdentifierLength(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMaximumIdentifierLength(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumIdentifierLength(self: ?*anyopaque, typeVal: i32) i32 {
        return qtc.QSqlDriver_QBaseMaximumIdentifierLength(@ptrCast(self), @intCast(typeVal));
    }

    pub fn CancelQuery(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_CancelQuery(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCancelQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnCancelQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCancelQuery(self: ?*anyopaque, ) bool {
        return qtc.QSqlDriver_QBaseCancelQuery(@ptrCast(self));
    }

    pub fn Notification(self: ?*anyopaque, name: []const u8, source: i32, payload: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSqlDriver_Notification(@ptrCast(self), name_str, @intCast(source), @ptrCast(payload));
    }

    pub fn OnNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_Connect_Notification(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SetOpen(self: ?*anyopaque, o: bool) void {
        qtc.QSqlDriver_SetOpen(@ptrCast(self), o);
    }

    /// Allows for overriding the related default method
    pub fn OnSetOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOpen(self: ?*anyopaque, o: bool) void {
        qtc.QSqlDriver_QBaseSetOpen(@ptrCast(self), o);
    }

    pub fn SetOpenError(self: ?*anyopaque, e: bool) void {
        qtc.QSqlDriver_SetOpenError(@ptrCast(self), e);
    }

    /// Allows for overriding the related default method
    pub fn OnSetOpenError(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpenError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOpenError(self: ?*anyopaque, e: bool) void {
        qtc.QSqlDriver_QBaseSetOpenError(@ptrCast(self), e);
    }

    pub fn SetLastError(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QSqlDriver_SetLastError(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnSetLastError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetLastError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetLastError(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QSqlDriver_QBaseSetLastError(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDriver_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDriver_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlDriver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sqldriver.html#types
pub const enums = struct {
    pub const DriverFeature = enum {
        pub const Transactions: i32 = 0;
        pub const QuerySize: i32 = 1;
        pub const BLOB: i32 = 2;
        pub const Unicode: i32 = 3;
        pub const PreparedQueries: i32 = 4;
        pub const NamedPlaceholders: i32 = 5;
        pub const PositionalPlaceholders: i32 = 6;
        pub const LastInsertId: i32 = 7;
        pub const BatchOperations: i32 = 8;
        pub const SimpleLocking: i32 = 9;
        pub const LowPrecisionNumbers: i32 = 10;
        pub const EventNotifications: i32 = 11;
        pub const FinishQuery: i32 = 12;
        pub const MultipleResultSets: i32 = 13;
        pub const CancelQuery: i32 = 14;
    };

    pub const StatementType = enum {
        pub const WhereStatement: i32 = 0;
        pub const SelectStatement: i32 = 1;
        pub const UpdateStatement: i32 = 2;
        pub const InsertStatement: i32 = 3;
        pub const DeleteStatement: i32 = 4;
    };

    pub const IdentifierType = enum {
        pub const FieldName: i32 = 0;
        pub const TableName: i32 = 1;
    };

    pub const NotificationSource = enum {
        pub const UnknownSource: i32 = 0;
        pub const SelfSource: i32 = 1;
        pub const OtherSource: i32 = 2;
    };

    pub const DbmsType = enum {
        pub const UnknownDbms: i32 = 0;
        pub const MSSqlServer: i32 = 1;
        pub const MySqlServer: i32 = 2;
        pub const PostgreSQL: i32 = 3;
        pub const Oracle: i32 = 4;
        pub const Sybase: i32 = 5;
        pub const SQLite: i32 = 6;
        pub const Interbase: i32 = 7;
        pub const DB2: i32 = 8;
        pub const MimerSQL: i32 = 9;
    };

};
