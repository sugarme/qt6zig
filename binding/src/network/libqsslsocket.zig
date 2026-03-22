const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsslsocket.html
pub const qsslsocket = struct {

    /// New constructs a new QSslSocket object.
    pub fn New() QtC.QSslSocket {
        return qtc.QSslSocket_new();
    }


    /// New2 constructs a new QSslSocket object.
    pub fn New2(parent: ?*anyopaque) QtC.QSslSocket {
        return qtc.QSslSocket_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Resume(self: ?*anyopaque, ) void {
        qtc.QSslSocket_Resume(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnResume(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnResume(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResume(self: ?*anyopaque, ) void {
        qtc.QSslSocket_QBaseResume(@ptrCast(self));
    }

    pub fn ConnectToHostEncrypted(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QSslSocket_ConnectToHostEncrypted(@ptrCast(self), hostName_str, port);
    }

    pub fn ConnectToHostEncrypted2(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
const sslPeerName_str = qtc.libqt_string{
    .len = sslPeerName.len,
    .data = sslPeerName.ptr,
};
qtc.QSslSocket_ConnectToHostEncrypted2(@ptrCast(self), hostName_str, port, sslPeerName_str);
    }

    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QSslSocket_SetSocketDescriptor(@ptrCast(self), socketDescriptor, @intCast(state), @intCast(openMode));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSocketDescriptor(self: ?*anyopaque, callback: *const fn (?*anyopaque, isize, i32, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnSetSocketDescriptor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QSslSocket_QBaseSetSocketDescriptor(@ptrCast(self), socketDescriptor, @intCast(state), @intCast(openMode));
    }

    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, openMode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QSslSocket_ConnectToHost(@ptrCast(self), hostName_str, port, @intCast(openMode), @intCast(protocol));
    }

    /// Allows for overriding the related default method
    pub fn OnConnectToHost(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectToHost(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, openMode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QSslSocket_QBaseConnectToHost(@ptrCast(self), hostName_str, port, @intCast(openMode), @intCast(protocol));
    }

    pub fn DisconnectFromHost(self: ?*anyopaque, ) void {
        qtc.QSslSocket_DisconnectFromHost(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDisconnectFromHost(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectFromHost(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDisconnectFromHost(self: ?*anyopaque, ) void {
        qtc.QSslSocket_QBaseDisconnectFromHost(@ptrCast(self));
    }

    pub fn SetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QSslSocket_SetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSocketOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QSslSocket_QBaseSetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    pub fn SocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QSslSocket_SocketOption(@ptrCast(self), @intCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnSocketOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSslSocket_OnSocketOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QSslSocket_QBaseSocketOption(@ptrCast(self), @intCast(option));
    }

    pub fn Mode(self: ?*anyopaque, ) i32 {
        return qtc.QSslSocket_Mode(@ptrCast(self));
    }

    pub fn IsEncrypted(self: ?*anyopaque, ) bool {
        return qtc.QSslSocket_IsEncrypted(@ptrCast(self));
    }

    pub fn Protocol(self: ?*anyopaque, ) i32 {
        return qtc.QSslSocket_Protocol(@ptrCast(self));
    }

    pub fn SetProtocol(self: ?*anyopaque, protocol: i32) void {
        qtc.QSslSocket_SetProtocol(@ptrCast(self), @intCast(protocol));
    }

    pub fn PeerVerifyMode(self: ?*anyopaque, ) i32 {
        return qtc.QSslSocket_PeerVerifyMode(@ptrCast(self));
    }

    pub fn SetPeerVerifyMode(self: ?*anyopaque, mode: i32) void {
        qtc.QSslSocket_SetPeerVerifyMode(@ptrCast(self), @intCast(mode));
    }

    pub fn PeerVerifyDepth(self: ?*anyopaque, ) i32 {
        return qtc.QSslSocket_PeerVerifyDepth(@ptrCast(self));
    }

    pub fn SetPeerVerifyDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QSslSocket_SetPeerVerifyDepth(@ptrCast(self), depth);
    }

    pub fn PeerVerifyName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_PeerVerifyName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.PeerVerifyName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPeerVerifyName(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QSslSocket_SetPeerVerifyName(@ptrCast(self), hostName_str);
    }

    pub fn BytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QSslSocket_BytesAvailable(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QSslSocket_QBaseBytesAvailable(@ptrCast(self));
    }

    pub fn BytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QSslSocket_BytesToWrite(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesToWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QSslSocket_QBaseBytesToWrite(@ptrCast(self));
    }

    pub fn CanReadLine(self: ?*anyopaque, ) bool {
        return qtc.QSslSocket_CanReadLine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSslSocket_OnCanReadLine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanReadLine(self: ?*anyopaque, ) bool {
        return qtc.QSslSocket_QBaseCanReadLine(@ptrCast(self));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QSslSocket_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QSslSocket_QBaseClose(@ptrCast(self));
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QSslSocket_AtEnd(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSslSocket_OnAtEnd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAtEnd(self: ?*anyopaque, ) bool {
        return qtc.QSslSocket_QBaseAtEnd(@ptrCast(self));
    }

    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QSslSocket_SetReadBufferSize(@ptrCast(self), size);
    }

    /// Allows for overriding the related default method
    pub fn OnSetReadBufferSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSslSocket_OnSetReadBufferSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QSslSocket_QBaseSetReadBufferSize(@ptrCast(self), size);
    }

    pub fn EncryptedBytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QSslSocket_EncryptedBytesAvailable(@ptrCast(self));
    }

    pub fn EncryptedBytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QSslSocket_EncryptedBytesToWrite(@ptrCast(self));
    }

    pub fn SslConfiguration(self: ?*anyopaque, ) QtC.QSslConfiguration {
        return qtc.QSslSocket_SslConfiguration(@ptrCast(self));
    }

    pub fn SetSslConfiguration(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.QSslSocket_SetSslConfiguration(@ptrCast(self), @ptrCast(config));
    }

    pub fn SetLocalCertificateChain(self: ?*anyopaque, localChain: []const u8) void {
        qtc.QSslSocket_SetLocalCertificateChain(@ptrCast(self), @ptrCast(localChain));
    }

    pub fn LocalCertificateChain(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslSocket_LocalCertificateChain(@ptrCast(self));
    }

    pub fn SetLocalCertificate(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QSslSocket_SetLocalCertificate(@ptrCast(self), @ptrCast(certificate));
    }

    pub fn SetLocalCertificate2(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QSslSocket_SetLocalCertificate2(@ptrCast(self), fileName_str);
    }

    pub fn LocalCertificate(self: ?*anyopaque, ) QtC.QSslCertificate {
        return qtc.QSslSocket_LocalCertificate(@ptrCast(self));
    }

    pub fn PeerCertificate(self: ?*anyopaque, ) QtC.QSslCertificate {
        return qtc.QSslSocket_PeerCertificate(@ptrCast(self));
    }

    pub fn PeerCertificateChain(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslSocket_PeerCertificateChain(@ptrCast(self));
    }

    pub fn SessionCipher(self: ?*anyopaque, ) QtC.QSslCipher {
        return qtc.QSslSocket_SessionCipher(@ptrCast(self));
    }

    pub fn SessionProtocol(self: ?*anyopaque, ) i32 {
        return qtc.QSslSocket_SessionProtocol(@ptrCast(self));
    }

    pub fn OcspResponses(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslSocket_OcspResponses(@ptrCast(self));
    }

    pub fn SetPrivateKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSslSocket_SetPrivateKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn SetPrivateKey2(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QSslSocket_SetPrivateKey2(@ptrCast(self), fileName_str);
    }

    pub fn PrivateKey(self: ?*anyopaque, ) QtC.QSslKey {
        return qtc.QSslSocket_PrivateKey(@ptrCast(self));
    }

    pub fn WaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForConnected(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_QBaseWaitForConnected(@ptrCast(self), msecs);
    }

    pub fn WaitForEncrypted(self: ?*anyopaque, ) bool {
        return qtc.QSslSocket_WaitForEncrypted(@ptrCast(self));
    }

    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForReadyRead(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_QBaseWaitForReadyRead(@ptrCast(self), msecs);
    }

    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForBytesWritten(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_QBaseWaitForBytesWritten(@ptrCast(self), msecs);
    }

    pub fn WaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForDisconnected(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForDisconnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_QBaseWaitForDisconnected(@ptrCast(self), msecs);
    }

    pub fn SslHandshakeErrors(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslSocket_SslHandshakeErrors(@ptrCast(self));
    }

    pub fn SupportsSsl() bool {
        return qtc.QSslSocket_SupportsSsl();
    }

    pub fn SslLibraryVersionNumber() long {
        return qtc.QSslSocket_SslLibraryVersionNumber();
    }

    pub fn SslLibraryVersionString(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_SslLibraryVersionString();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.SslLibraryVersionString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SslLibraryBuildVersionNumber() long {
        return qtc.QSslSocket_SslLibraryBuildVersionNumber();
    }

    pub fn SslLibraryBuildVersionString(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_SslLibraryBuildVersionString();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.SslLibraryBuildVersionString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AvailableBackends() []const u8 {
        return qtc.QSslSocket_AvailableBackends();
    }

    pub fn ActiveBackend(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_ActiveBackend();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ActiveBackend: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetActiveBackend(backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
    .len = backendName.len,
    .data = backendName.ptr,
};
return qtc.QSslSocket_SetActiveBackend(backendName_str);
    }

    pub fn SupportedProtocols() []const u8 {
        return qtc.QSslSocket_SupportedProtocols();
    }

    pub fn IsProtocolSupported(protocol: i32) bool {
        return qtc.QSslSocket_IsProtocolSupported(@intCast(protocol));
    }

    pub fn ImplementedClasses() []const u8 {
        return qtc.QSslSocket_ImplementedClasses();
    }

    pub fn IsClassImplemented(cl: i32) bool {
        return qtc.QSslSocket_IsClassImplemented(@intCast(cl));
    }

    pub fn SupportedFeatures() []const u8 {
        return qtc.QSslSocket_SupportedFeatures();
    }

    pub fn IsFeatureSupported(feat: i32) bool {
        return qtc.QSslSocket_IsFeatureSupported(@intCast(feat));
    }

    pub fn IgnoreSslErrors(self: ?*anyopaque, errors: []const u8) void {
        qtc.QSslSocket_IgnoreSslErrors(@ptrCast(self), @ptrCast(errors));
    }

    pub fn ContinueInterruptedHandshake(self: ?*anyopaque, ) void {
        qtc.QSslSocket_ContinueInterruptedHandshake(@ptrCast(self));
    }

    pub fn StartClientEncryption(self: ?*anyopaque, ) void {
        qtc.QSslSocket_StartClientEncryption(@ptrCast(self));
    }

    pub fn StartServerEncryption(self: ?*anyopaque, ) void {
        qtc.QSslSocket_StartServerEncryption(@ptrCast(self));
    }

    pub fn IgnoreSslErrors2(self: ?*anyopaque, ) void {
        qtc.QSslSocket_IgnoreSslErrors2(@ptrCast(self));
    }

    pub fn Encrypted(self: ?*anyopaque, ) void {
        qtc.QSslSocket_Encrypted(@ptrCast(self));
    }

    pub fn OnEncrypted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_Encrypted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PeerVerifyError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslSocket_PeerVerifyError(@ptrCast(self), @ptrCast(errorVal));
    }

    pub fn OnPeerVerifyError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PeerVerifyError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SslErrors(self: ?*anyopaque, errors: []const u8) void {
        qtc.QSslSocket_SslErrors(@ptrCast(self), @ptrCast(errors));
    }

    pub fn OnSslErrors(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_SslErrors(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModeChanged(self: ?*anyopaque, newMode: i32) void {
        qtc.QSslSocket_ModeChanged(@ptrCast(self), @intCast(newMode));
    }

    pub fn OnModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslSocket_Connect_ModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn EncryptedBytesWritten(self: ?*anyopaque, totalBytes: i64) void {
        qtc.QSslSocket_EncryptedBytesWritten(@ptrCast(self), totalBytes);
    }

    pub fn OnEncryptedBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSslSocket_Connect_EncryptedBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QSslSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn NewSessionTicketReceived(self: ?*anyopaque, ) void {
        qtc.QSslSocket_NewSessionTicketReceived(@ptrCast(self));
    }

    pub fn OnNewSessionTicketReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_NewSessionTicketReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AlertSent(self: ?*anyopaque, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QSslSocket_AlertSent(@ptrCast(self), @intCast(level), @intCast(typeVal), description_str);
    }

    pub fn OnAlertSent(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertSent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AlertReceived(self: ?*anyopaque, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QSslSocket_AlertReceived(@ptrCast(self), @intCast(level), @intCast(typeVal), description_str);
    }

    pub fn OnAlertReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslSocket_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(errorVal));
    }

    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QSslSocket_ReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QSslSocket_QBaseReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSslSocket_SkipData(@ptrCast(self), maxSize);
    }

    /// Allows for overriding the related default method
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnSkipData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSslSocket_QBaseSkipData(@ptrCast(self), maxSize);
    }

    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QSslSocket_WriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QSslSocket_QBaseWriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ConnectToHostEncrypted3(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i32) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QSslSocket_ConnectToHostEncrypted3(@ptrCast(self), hostName_str, port, @intCast(mode));
    }

    pub fn ConnectToHostEncrypted4(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QSslSocket_ConnectToHostEncrypted4(@ptrCast(self), hostName_str, port, @intCast(mode), @intCast(protocol));
    }

    pub fn ConnectToHostEncrypted42(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i32) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
const sslPeerName_str = qtc.libqt_string{
    .len = sslPeerName.len,
    .data = sslPeerName.ptr,
};
qtc.QSslSocket_ConnectToHostEncrypted42(@ptrCast(self), hostName_str, port, sslPeerName_str, @intCast(mode));
    }

    pub fn ConnectToHostEncrypted5(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
const sslPeerName_str = qtc.libqt_string{
    .len = sslPeerName.len,
    .data = sslPeerName.ptr,
};
qtc.QSslSocket_ConnectToHostEncrypted5(@ptrCast(self), hostName_str, port, sslPeerName_str, @intCast(mode), @intCast(protocol));
    }

    pub fn SetLocalCertificate22(self: ?*anyopaque, fileName: []const u8, format: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QSslSocket_SetLocalCertificate22(@ptrCast(self), fileName_str, @intCast(format));
    }

    pub fn SetPrivateKey22(self: ?*anyopaque, fileName: []const u8, algorithm: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QSslSocket_SetPrivateKey22(@ptrCast(self), fileName_str, @intCast(algorithm));
    }

    pub fn SetPrivateKey3(self: ?*anyopaque, fileName: []const u8, algorithm: i32, format: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QSslSocket_SetPrivateKey3(@ptrCast(self), fileName_str, @intCast(algorithm), @intCast(format));
    }

    pub fn SetPrivateKey4(self: ?*anyopaque, fileName: []const u8, algorithm: i32, format: i32, passPhrase: []u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const passPhrase_str = qtc.libqt_string{
    .len = passPhrase.len,
    .data = passPhrase.ptr,
};
qtc.QSslSocket_SetPrivateKey4(@ptrCast(self), fileName_str, @intCast(algorithm), @intCast(format), passPhrase_str);
    }

    pub fn WaitForEncrypted1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForEncrypted1(@ptrCast(self), msecs);
    }

    pub fn SupportedProtocols1(backendName: []const u8) []const u8 {
        const backendName_str = qtc.libqt_string{
    .len = backendName.len,
    .data = backendName.ptr,
};
return qtc.QSslSocket_SupportedProtocols1(backendName_str);
    }

    pub fn IsProtocolSupported2(protocol: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
    .len = backendName.len,
    .data = backendName.ptr,
};
return qtc.QSslSocket_IsProtocolSupported2(@intCast(protocol), backendName_str);
    }

    pub fn ImplementedClasses1(backendName: []const u8) []const u8 {
        const backendName_str = qtc.libqt_string{
    .len = backendName.len,
    .data = backendName.ptr,
};
return qtc.QSslSocket_ImplementedClasses1(backendName_str);
    }

    pub fn IsClassImplemented2(cl: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
    .len = backendName.len,
    .data = backendName.ptr,
};
return qtc.QSslSocket_IsClassImplemented2(@intCast(cl), backendName_str);
    }

    pub fn SupportedFeatures1(backendName: []const u8) []const u8 {
        const backendName_str = qtc.libqt_string{
    .len = backendName.len,
    .data = backendName.ptr,
};
return qtc.QSslSocket_SupportedFeatures1(backendName_str);
    }

    pub fn IsFeatureSupported2(feat: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
    .len = backendName.len,
    .data = backendName.ptr,
};
return qtc.QSslSocket_IsFeatureSupported2(@intCast(feat), backendName_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslSocket_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sslsocket.html#types
pub const enums = struct {
    pub const SslMode = enum {
        pub const UnencryptedMode: i32 = 0;
        pub const SslClientMode: i32 = 1;
        pub const SslServerMode: i32 = 2;
    };

    pub const PeerVerifyMode = enum {
        pub const VerifyNone: i32 = 0;
        pub const QueryPeer: i32 = 1;
        pub const VerifyPeer: i32 = 2;
        pub const AutoVerifyPeer: i32 = 3;
    };

};
