const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlocalserver.html
pub const qlocalserver = struct {

    /// New constructs a new QLocalServer object.
    pub fn New() QtC.QLocalServer {
        return qtc.QLocalServer_new();
    }


    /// New2 constructs a new QLocalServer object.
    pub fn New2(parent: ?*anyopaque) QtC.QLocalServer {
        return qtc.QLocalServer_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalServer_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NewConnection(self: ?*anyopaque, ) void {
        qtc.QLocalServer_NewConnection(@ptrCast(self));
    }

    pub fn OnNewConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLocalServer_Connect_NewConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QLocalServer_Close(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalServer_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HasPendingConnections(self: ?*anyopaque, ) bool {
        return qtc.QLocalServer_HasPendingConnections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasPendingConnections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QLocalServer_OnHasPendingConnections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasPendingConnections(self: ?*anyopaque, ) bool {
        return qtc.QLocalServer_QBaseHasPendingConnections(@ptrCast(self));
    }

    pub fn IsListening(self: ?*anyopaque, ) bool {
        return qtc.QLocalServer_IsListening(@ptrCast(self));
    }

    pub fn Listen(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QLocalServer_Listen(@ptrCast(self), name_str);
    }

    pub fn Listen2(self: ?*anyopaque, socketDescriptor: isize) bool {
        return qtc.QLocalServer_Listen2(@ptrCast(self), socketDescriptor);
    }

    pub fn MaxPendingConnections(self: ?*anyopaque, ) i32 {
        return qtc.QLocalServer_MaxPendingConnections(@ptrCast(self));
    }

    pub fn NextPendingConnection(self: ?*anyopaque, ) QtC.QLocalSocket {
        return qtc.QLocalServer_NextPendingConnection(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextPendingConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QLocalSocket) void {
        qtc.QLocalServer_OnNextPendingConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextPendingConnection(self: ?*anyopaque, ) QtC.QLocalSocket {
        return qtc.QLocalServer_QBaseNextPendingConnection(@ptrCast(self));
    }

    pub fn ServerName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalServer_ServerName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.ServerName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FullServerName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalServer_FullServerName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.FullServerName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RemoveServer(name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QLocalServer_RemoveServer(name_str);
    }

    pub fn ServerError(self: ?*anyopaque, ) i32 {
        return qtc.QLocalServer_ServerError(@ptrCast(self));
    }

    pub fn SetMaxPendingConnections(self: ?*anyopaque, numConnections: i32) void {
        qtc.QLocalServer_SetMaxPendingConnections(@ptrCast(self), numConnections);
    }

    pub fn WaitForNewConnection(self: ?*anyopaque, ) bool {
        return qtc.QLocalServer_WaitForNewConnection(@ptrCast(self));
    }

    pub fn SetListenBacklogSize(self: ?*anyopaque, size: i32) void {
        qtc.QLocalServer_SetListenBacklogSize(@ptrCast(self), size);
    }

    pub fn ListenBacklogSize(self: ?*anyopaque, ) i32 {
        return qtc.QLocalServer_ListenBacklogSize(@ptrCast(self));
    }

    pub fn SetSocketOptions(self: ?*anyopaque, options: i32) void {
        qtc.QLocalServer_SetSocketOptions(@ptrCast(self), @intCast(options));
    }

    pub fn SocketOptions(self: ?*anyopaque, ) i32 {
        return qtc.QLocalServer_SocketOptions(@ptrCast(self));
    }

    pub fn BindableSocketOptions(self: ?*anyopaque, ) QBindable<SocketOptions> {
        return qtc.QLocalServer_BindableSocketOptions(@ptrCast(self));
    }

    pub fn SocketDescriptor(self: ?*anyopaque, ) isize {
        return qtc.QLocalServer_SocketDescriptor(@ptrCast(self));
    }

    pub fn IncomingConnection(self: ?*anyopaque, socketDescriptor: usize) void {
        qtc.QLocalServer_IncomingConnection(@ptrCast(self), socketDescriptor);
    }

    /// Allows for overriding the related default method
    pub fn OnIncomingConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque, usize) callconv(.c) void) void {
        qtc.QLocalServer_OnIncomingConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIncomingConnection(self: ?*anyopaque, socketDescriptor: usize) void {
        qtc.QLocalServer_QBaseIncomingConnection(@ptrCast(self), socketDescriptor);
    }

    pub fn AddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QLocalServer_AddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Allows for overriding the related default method
    pub fn OnAddPendingConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLocalServer_OnAddPendingConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QLocalServer_QBaseAddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalServer_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalServer_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn WaitForNewConnection1(self: ?*anyopaque, msec: i32) bool {
        return qtc.QLocalServer_WaitForNewConnection1(@ptrCast(self), msec);
    }

    pub fn WaitForNewConnection2(self: ?*anyopaque, msec: i32, timedOut: *bool) bool {
        return qtc.QLocalServer_WaitForNewConnection2(@ptrCast(self), msec, @ptrCast(timedOut));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLocalServer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/localserver.html#types
pub const enums = struct {
    pub const SocketOption = enum {
        pub const NoOptions: i32 = 0;
        pub const UserAccessOption: i32 = 1;
        pub const GroupAccessOption: i32 = 2;
        pub const OtherAccessOption: i32 = 4;
        pub const WorldAccessOption: i32 = 7;
        pub const AbstractNamespaceOption: i32 = 8;
    };

};
