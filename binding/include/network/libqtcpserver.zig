const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtcpserver.html
pub const qtcpserver = struct {

    /// New constructs a new QTcpServer object.
    pub fn New() QtC.QTcpServer {
        return qtc.QTcpServer_new();
    }


    /// New2 constructs a new QTcpServer object.
    pub fn New2(parent: ?*anyopaque) QtC.QTcpServer {
        return qtc.QTcpServer_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpServer_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpserver.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Listen(self: ?*anyopaque, ) bool {
        return qtc.QTcpServer_Listen(@ptrCast(self));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QTcpServer_Close(@ptrCast(self));
    }

    pub fn IsListening(self: ?*anyopaque, ) bool {
        return qtc.QTcpServer_IsListening(@ptrCast(self));
    }

    pub fn SetMaxPendingConnections(self: ?*anyopaque, numConnections: i32) void {
        qtc.QTcpServer_SetMaxPendingConnections(@ptrCast(self), numConnections);
    }

    pub fn MaxPendingConnections(self: ?*anyopaque, ) i32 {
        return qtc.QTcpServer_MaxPendingConnections(@ptrCast(self));
    }

    pub fn SetListenBacklogSize(self: ?*anyopaque, size: i32) void {
        qtc.QTcpServer_SetListenBacklogSize(@ptrCast(self), size);
    }

    pub fn ListenBacklogSize(self: ?*anyopaque, ) i32 {
        return qtc.QTcpServer_ListenBacklogSize(@ptrCast(self));
    }

    pub fn ServerPort(self: ?*anyopaque, ) u16 {
        return qtc.QTcpServer_ServerPort(@ptrCast(self));
    }

    pub fn ServerAddress(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QTcpServer_ServerAddress(@ptrCast(self));
    }

    pub fn SocketDescriptor(self: ?*anyopaque, ) isize {
        return qtc.QTcpServer_SocketDescriptor(@ptrCast(self));
    }

    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize) bool {
        return qtc.QTcpServer_SetSocketDescriptor(@ptrCast(self), socketDescriptor);
    }

    pub fn WaitForNewConnection(self: ?*anyopaque, ) bool {
        return qtc.QTcpServer_WaitForNewConnection(@ptrCast(self));
    }

    pub fn HasPendingConnections(self: ?*anyopaque, ) bool {
        return qtc.QTcpServer_HasPendingConnections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasPendingConnections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QTcpServer_OnHasPendingConnections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasPendingConnections(self: ?*anyopaque, ) bool {
        return qtc.QTcpServer_QBaseHasPendingConnections(@ptrCast(self));
    }

    pub fn NextPendingConnection(self: ?*anyopaque, ) QtC.QTcpSocket {
        return qtc.QTcpServer_NextPendingConnection(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextPendingConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QTcpSocket) void {
        qtc.QTcpServer_OnNextPendingConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextPendingConnection(self: ?*anyopaque, ) QtC.QTcpSocket {
        return qtc.QTcpServer_QBaseNextPendingConnection(@ptrCast(self));
    }

    pub fn ServerError(self: ?*anyopaque, ) i32 {
        return qtc.QTcpServer_ServerError(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpServer_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpserver.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PauseAccepting(self: ?*anyopaque, ) void {
        qtc.QTcpServer_PauseAccepting(@ptrCast(self));
    }

    pub fn ResumeAccepting(self: ?*anyopaque, ) void {
        qtc.QTcpServer_ResumeAccepting(@ptrCast(self));
    }

    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QTcpServer_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    pub fn Proxy(self: ?*anyopaque, ) QtC.QNetworkProxy {
        return qtc.QTcpServer_Proxy(@ptrCast(self));
    }

    pub fn IncomingConnection(self: ?*anyopaque, handle: isize) void {
        qtc.QTcpServer_IncomingConnection(@ptrCast(self), handle);
    }

    /// Allows for overriding the related default method
    pub fn OnIncomingConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque, isize) callconv(.c) void) void {
        qtc.QTcpServer_OnIncomingConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIncomingConnection(self: ?*anyopaque, handle: isize) void {
        qtc.QTcpServer_QBaseIncomingConnection(@ptrCast(self), handle);
    }

    pub fn AddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QTcpServer_AddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Allows for overriding the related default method
    pub fn OnAddPendingConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTcpServer_OnAddPendingConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QTcpServer_QBaseAddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    pub fn NewConnection(self: ?*anyopaque, ) void {
        qtc.QTcpServer_NewConnection(@ptrCast(self));
    }

    pub fn OnNewConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTcpServer_Connect_NewConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AcceptError(self: ?*anyopaque, socketError: i32) void {
        qtc.QTcpServer_AcceptError(@ptrCast(self), @intCast(socketError));
    }

    pub fn OnAcceptError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTcpServer_Connect_AcceptError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpServer_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpserver.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpServer_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpserver.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Listen1(self: ?*anyopaque, address: ?*anyopaque) bool {
        return qtc.QTcpServer_Listen1(@ptrCast(self), @ptrCast(address));
    }

    pub fn Listen2(self: ?*anyopaque, address: ?*anyopaque, port: u16) bool {
        return qtc.QTcpServer_Listen2(@ptrCast(self), @ptrCast(address), port);
    }

    pub fn WaitForNewConnection1(self: ?*anyopaque, msec: i32) bool {
        return qtc.QTcpServer_WaitForNewConnection1(@ptrCast(self), msec);
    }

    pub fn WaitForNewConnection2(self: ?*anyopaque, msec: i32, timedOut: *bool) bool {
        return qtc.QTcpServer_WaitForNewConnection2(@ptrCast(self), msec, @ptrCast(timedOut));
    }

    /// Wrapper to allow calling private signal
    pub fn OnpendingConnectionAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTcpServer_Connect_pendingConnectionAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTcpServer_Delete(@ptrCast(self));
    }
};
