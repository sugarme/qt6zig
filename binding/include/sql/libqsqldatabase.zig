const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqldrivercreatorbase.html
pub const qsqldrivercreatorbase = struct {

    /// New constructs a new QSqlDriverCreatorBase object.
    pub fn New() QtC.QSqlDriverCreatorBase {
        return qtc.QSqlDriverCreatorBase_new();
    }


    /// New2 constructs a new QSqlDriverCreatorBase object.
    pub fn New2(param1: ?*anyopaque) QtC.QSqlDriverCreatorBase {
        return qtc.QSqlDriverCreatorBase_new2(@ptrCast(param1));
    }


    pub fn CreateObject(self: ?*anyopaque, ) QtC.QSqlDriver {
        return qtc.QSqlDriverCreatorBase_CreateObject(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateObject(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSqlDriver) void {
        qtc.QSqlDriverCreatorBase_OnCreateObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateObject(self: ?*anyopaque, ) QtC.QSqlDriver {
        return qtc.QSqlDriverCreatorBase_QBaseCreateObject(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSqlDriverCreatorBase_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlDriverCreatorBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsqldatabase.html
pub const qsqldatabase = struct {

    /// New constructs a new QSqlDatabase object.
    pub fn New() QtC.QSqlDatabase {
        return qtc.QSqlDatabase_new();
    }


    /// New2 constructs a new QSqlDatabase object.
    pub fn New2(other: ?*anyopaque) QtC.QSqlDatabase {
        return qtc.QSqlDatabase_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlDatabase_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Open(self: ?*anyopaque, ) bool {
        return qtc.QSqlDatabase_Open(@ptrCast(self));
    }

    pub fn Open2(self: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
    .len = user.len,
    .data = user.ptr,
};
const password_str = qtc.libqt_string{
    .len = password.len,
    .data = password.ptr,
};
return qtc.QSqlDatabase_Open2(@ptrCast(self), user_str, password_str);
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QSqlDatabase_Close(@ptrCast(self));
    }

    pub fn IsOpen(self: ?*anyopaque, ) bool {
        return qtc.QSqlDatabase_IsOpen(@ptrCast(self));
    }

    pub fn IsOpenError(self: ?*anyopaque, ) bool {
        return qtc.QSqlDatabase_IsOpenError(@ptrCast(self));
    }

    pub fn Tables(self: ?*anyopaque, ) []const u8 {
        return qtc.QSqlDatabase_Tables(@ptrCast(self));
    }

    pub fn PrimaryIndex(self: ?*anyopaque, tablename: []const u8) QtC.QSqlIndex {
        const tablename_str = qtc.libqt_string{
    .len = tablename.len,
    .data = tablename.ptr,
};
return qtc.QSqlDatabase_PrimaryIndex(@ptrCast(self), tablename_str);
    }

    pub fn Record(self: ?*anyopaque, tablename: []const u8) QtC.QSqlRecord {
        const tablename_str = qtc.libqt_string{
    .len = tablename.len,
    .data = tablename.ptr,
};
return qtc.QSqlDatabase_Record(@ptrCast(self), tablename_str);
    }

    pub fn Exec(self: ?*anyopaque, ) QtC.QSqlQuery {
        return qtc.QSqlDatabase_Exec(@ptrCast(self));
    }

    pub fn LastError(self: ?*anyopaque, ) QtC.QSqlError {
        return qtc.QSqlDatabase_LastError(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSqlDatabase_IsValid(@ptrCast(self));
    }

    pub fn Transaction(self: ?*anyopaque, ) bool {
        return qtc.QSqlDatabase_Transaction(@ptrCast(self));
    }

    pub fn Commit(self: ?*anyopaque, ) bool {
        return qtc.QSqlDatabase_Commit(@ptrCast(self));
    }

    pub fn Rollback(self: ?*anyopaque, ) bool {
        return qtc.QSqlDatabase_Rollback(@ptrCast(self));
    }

    pub fn SetDatabaseName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSqlDatabase_SetDatabaseName(@ptrCast(self), name_str);
    }

    pub fn SetUserName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSqlDatabase_SetUserName(@ptrCast(self), name_str);
    }

    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
    .len = password.len,
    .data = password.ptr,
};
qtc.QSqlDatabase_SetPassword(@ptrCast(self), password_str);
    }

    pub fn SetHostName(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.libqt_string{
    .len = host.len,
    .data = host.ptr,
};
qtc.QSqlDatabase_SetHostName(@ptrCast(self), host_str);
    }

    pub fn SetPort(self: ?*anyopaque, p: i32) void {
        qtc.QSqlDatabase_SetPort(@ptrCast(self), p);
    }

    pub fn SetConnectOptions(self: ?*anyopaque, ) void {
        qtc.QSqlDatabase_SetConnectOptions(@ptrCast(self));
    }

    pub fn DatabaseName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_DatabaseName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.DatabaseName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UserName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_UserName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.UserName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Password(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_Password(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.Password: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HostName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_HostName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.HostName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DriverName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_DriverName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.DriverName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Port(self: ?*anyopaque, ) i32 {
        return qtc.QSqlDatabase_Port(@ptrCast(self));
    }

    pub fn ConnectOptions(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_ConnectOptions(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.ConnectOptions: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ConnectionName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_ConnectionName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.ConnectionName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNumericalPrecisionPolicy(self: ?*anyopaque, precisionPolicy: i32) void {
        qtc.QSqlDatabase_SetNumericalPrecisionPolicy(@ptrCast(self), @intCast(precisionPolicy));
    }

    pub fn NumericalPrecisionPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QSqlDatabase_NumericalPrecisionPolicy(@ptrCast(self));
    }

    pub fn MoveToThread(self: ?*anyopaque, targetThread: ?*anyopaque) bool {
        return qtc.QSqlDatabase_MoveToThread(@ptrCast(self), @ptrCast(targetThread));
    }

    pub fn Thread(self: ?*anyopaque, ) QtC.QThread {
        return qtc.QSqlDatabase_Thread(@ptrCast(self));
    }

    pub fn Driver(self: ?*anyopaque, ) QtC.QSqlDriver {
        return qtc.QSqlDatabase_Driver(@ptrCast(self));
    }

    pub fn AddDatabase(typeVal: []const u8) QtC.QSqlDatabase {
        const typeVal_str = qtc.libqt_string{
    .len = typeVal.len,
    .data = typeVal.ptr,
};
return qtc.QSqlDatabase_AddDatabase(typeVal_str);
    }

    pub fn AddDatabase2(driver: ?*anyopaque) QtC.QSqlDatabase {
        return qtc.QSqlDatabase_AddDatabase2(@ptrCast(driver));
    }

    pub fn CloneDatabase(other: ?*anyopaque, connectionName: []const u8) QtC.QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
    .len = connectionName.len,
    .data = connectionName.ptr,
};
return qtc.QSqlDatabase_CloneDatabase(@ptrCast(other), connectionName_str);
    }

    pub fn CloneDatabase2(other: []const u8, connectionName: []const u8) QtC.QSqlDatabase {
        const other_str = qtc.libqt_string{
    .len = other.len,
    .data = other.ptr,
};
const connectionName_str = qtc.libqt_string{
    .len = connectionName.len,
    .data = connectionName.ptr,
};
return qtc.QSqlDatabase_CloneDatabase2(other_str, connectionName_str);
    }

    pub fn Database() QtC.QSqlDatabase {
        return qtc.QSqlDatabase_Database();
    }

    pub fn RemoveDatabase(connectionName: []const u8) void {
        const connectionName_str = qtc.libqt_string{
    .len = connectionName.len,
    .data = connectionName.ptr,
};
qtc.QSqlDatabase_RemoveDatabase(connectionName_str);
    }

    pub fn Contains() bool {
        return qtc.QSqlDatabase_Contains();
    }

    pub fn Drivers() []const u8 {
        return qtc.QSqlDatabase_Drivers();
    }

    pub fn ConnectionNames() []const u8 {
        return qtc.QSqlDatabase_ConnectionNames();
    }

    pub fn RegisterSqlDriver(name: []const u8, creator: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSqlDatabase_RegisterSqlDriver(name_str, @ptrCast(creator));
    }

    pub fn IsDriverAvailable(name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSqlDatabase_IsDriverAvailable(name_str);
    }

    pub fn Tables1(self: ?*anyopaque, typeVal: i32) []const u8 {
        return qtc.QSqlDatabase_Tables1(@ptrCast(self), @intCast(typeVal));
    }

    pub fn Exec1(self: ?*anyopaque, query: []const u8) QtC.QSqlQuery {
        const query_str = qtc.libqt_string{
    .len = query.len,
    .data = query.ptr,
};
return qtc.QSqlDatabase_Exec1(@ptrCast(self), query_str);
    }

    pub fn SetConnectOptions1(self: ?*anyopaque, options: []const u8) void {
        const options_str = qtc.libqt_string{
    .len = options.len,
    .data = options.ptr,
};
qtc.QSqlDatabase_SetConnectOptions1(@ptrCast(self), options_str);
    }

    pub fn AddDatabase22(typeVal: []const u8, connectionName: []const u8) QtC.QSqlDatabase {
        const typeVal_str = qtc.libqt_string{
    .len = typeVal.len,
    .data = typeVal.ptr,
};
const connectionName_str = qtc.libqt_string{
    .len = connectionName.len,
    .data = connectionName.ptr,
};
return qtc.QSqlDatabase_AddDatabase22(typeVal_str, connectionName_str);
    }

    pub fn AddDatabase23(driver: ?*anyopaque, connectionName: []const u8) QtC.QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
    .len = connectionName.len,
    .data = connectionName.ptr,
};
return qtc.QSqlDatabase_AddDatabase23(@ptrCast(driver), connectionName_str);
    }

    pub fn Database1(connectionName: []const u8) QtC.QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
    .len = connectionName.len,
    .data = connectionName.ptr,
};
return qtc.QSqlDatabase_Database1(connectionName_str);
    }

    pub fn Database2(connectionName: []const u8, open: bool) QtC.QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
    .len = connectionName.len,
    .data = connectionName.ptr,
};
return qtc.QSqlDatabase_Database2(connectionName_str, open);
    }

    pub fn Contains1(connectionName: []const u8) bool {
        const connectionName_str = qtc.libqt_string{
    .len = connectionName.len,
    .data = connectionName.ptr,
};
return qtc.QSqlDatabase_Contains1(connectionName_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlDatabase_Delete(@ptrCast(self));
    }
};
