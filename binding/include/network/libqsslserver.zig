const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsslserver.html
pub const qsslserver = struct {

    /// New constructs a new QSslServer object.
    pub fn New() QtC.QSslServer {
        return qtc.QSslServer_new();
    }


    /// New2 constructs a new QSslServer object.
    pub fn New2(parent: ?*anyopaque) QtC.QSslServer {
        return qtc.QSslServer_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslServer_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSslConfiguration(self: ?*anyopaque, sslConfiguration: ?*anyopaque) void {
        qtc.QSslServer_SetSslConfiguration(@ptrCast(self), @ptrCast(sslConfiguration));
    }

    pub fn SslConfiguration(self: ?*anyopaque, ) QtC.QSslConfiguration {
        return qtc.QSslServer_SslConfiguration(@ptrCast(self));
    }

    pub fn SetHandshakeTimeout(self: ?*anyopaque, timeout: i32) void {
        qtc.QSslServer_SetHandshakeTimeout(@ptrCast(self), timeout);
    }

    pub fn HandshakeTimeout(self: ?*anyopaque, ) i32 {
        return qtc.QSslServer_HandshakeTimeout(@ptrCast(self));
    }

    pub fn SslErrors(self: ?*anyopaque, socket: ?*anyopaque, errors: []const u8) void {
        qtc.QSslServer_SslErrors(@ptrCast(self), @ptrCast(socket), @ptrCast(errors));
    }

    pub fn OnSslErrors(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslServer_Connect_SslErrors(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PeerVerifyError(self: ?*anyopaque, socket: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslServer_PeerVerifyError(@ptrCast(self), @ptrCast(socket), @ptrCast(errorVal));
    }

    pub fn OnPeerVerifyError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_Connect_PeerVerifyError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, socket: ?*anyopaque, errorVal: i32) void {
        qtc.QSslServer_ErrorOccurred(@ptrCast(self), @ptrCast(socket), @intCast(errorVal));
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslServer_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, socket: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QSslServer_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(socket), @ptrCast(authenticator));
    }

    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AlertSent(self: ?*anyopaque, socket: ?*anyopaque, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QSslServer_AlertSent(@ptrCast(self), @ptrCast(socket), @intCast(level), @intCast(typeVal), description_str);
    }

    pub fn OnAlertSent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslServer_Connect_AlertSent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AlertReceived(self: ?*anyopaque, socket: ?*anyopaque, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QSslServer_AlertReceived(@ptrCast(self), @ptrCast(socket), @intCast(level), @intCast(typeVal), description_str);
    }

    pub fn OnAlertReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslServer_Connect_AlertReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, socket: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslServer_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(socket), @ptrCast(errorVal));
    }

    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_Connect_HandshakeInterruptedOnError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StartedEncryptionHandshake(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QSslServer_StartedEncryptionHandshake(@ptrCast(self), @ptrCast(socket));
    }

    pub fn OnStartedEncryptionHandshake(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_Connect_StartedEncryptionHandshake(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IncomingConnection(self: ?*anyopaque, socket: isize) void {
        qtc.QSslServer_IncomingConnection(@ptrCast(self), socket);
    }

    /// Allows for overriding the related default method
    pub fn OnIncomingConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque, isize) callconv(.c) void) void {
        qtc.QSslServer_OnIncomingConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIncomingConnection(self: ?*anyopaque, socket: isize) void {
        qtc.QSslServer_QBaseIncomingConnection(@ptrCast(self), socket);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslServer_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslServer_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslServer_Delete(@ptrCast(self));
    }
};
