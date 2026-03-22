const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsslconfiguration.html
pub const qsslconfiguration = struct {

    /// New constructs a new QSslConfiguration object.
    pub fn New() QtC.QSslConfiguration {
        return qtc.QSslConfiguration_new();
    }


    /// New2 constructs a new QSslConfiguration object.
    pub fn New2(other: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QSslConfiguration_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslConfiguration_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslConfiguration_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslConfiguration_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslConfiguration_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QSslConfiguration_IsNull(@ptrCast(self));
    }

    pub fn Protocol(self: ?*anyopaque, ) i32 {
        return qtc.QSslConfiguration_Protocol(@ptrCast(self));
    }

    pub fn SetProtocol(self: ?*anyopaque, protocol: i32) void {
        qtc.QSslConfiguration_SetProtocol(@ptrCast(self), @intCast(protocol));
    }

    pub fn PeerVerifyMode(self: ?*anyopaque, ) i32 {
        return qtc.QSslConfiguration_PeerVerifyMode(@ptrCast(self));
    }

    pub fn SetPeerVerifyMode(self: ?*anyopaque, mode: i32) void {
        qtc.QSslConfiguration_SetPeerVerifyMode(@ptrCast(self), @intCast(mode));
    }

    pub fn PeerVerifyDepth(self: ?*anyopaque, ) i32 {
        return qtc.QSslConfiguration_PeerVerifyDepth(@ptrCast(self));
    }

    pub fn SetPeerVerifyDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QSslConfiguration_SetPeerVerifyDepth(@ptrCast(self), depth);
    }

    pub fn LocalCertificateChain(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslConfiguration_LocalCertificateChain(@ptrCast(self));
    }

    pub fn SetLocalCertificateChain(self: ?*anyopaque, localChain: []const u8) void {
        qtc.QSslConfiguration_SetLocalCertificateChain(@ptrCast(self), @ptrCast(localChain));
    }

    pub fn LocalCertificate(self: ?*anyopaque, ) QtC.QSslCertificate {
        return qtc.QSslConfiguration_LocalCertificate(@ptrCast(self));
    }

    pub fn SetLocalCertificate(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QSslConfiguration_SetLocalCertificate(@ptrCast(self), @ptrCast(certificate));
    }

    pub fn PeerCertificate(self: ?*anyopaque, ) QtC.QSslCertificate {
        return qtc.QSslConfiguration_PeerCertificate(@ptrCast(self));
    }

    pub fn PeerCertificateChain(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslConfiguration_PeerCertificateChain(@ptrCast(self));
    }

    pub fn SessionCipher(self: ?*anyopaque, ) QtC.QSslCipher {
        return qtc.QSslConfiguration_SessionCipher(@ptrCast(self));
    }

    pub fn SessionProtocol(self: ?*anyopaque, ) i32 {
        return qtc.QSslConfiguration_SessionProtocol(@ptrCast(self));
    }

    pub fn PrivateKey(self: ?*anyopaque, ) QtC.QSslKey {
        return qtc.QSslConfiguration_PrivateKey(@ptrCast(self));
    }

    pub fn SetPrivateKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSslConfiguration_SetPrivateKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn Ciphers(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslConfiguration_Ciphers(@ptrCast(self));
    }

    pub fn SetCiphers(self: ?*anyopaque, ciphers: []const u8) void {
        qtc.QSslConfiguration_SetCiphers(@ptrCast(self), @ptrCast(ciphers));
    }

    pub fn SetCiphers2(self: ?*anyopaque, ciphers: []const u8) void {
        const ciphers_str = qtc.libqt_string{
    .len = ciphers.len,
    .data = ciphers.ptr,
};
qtc.QSslConfiguration_SetCiphers2(@ptrCast(self), ciphers_str);
    }

    pub fn SupportedCiphers() []const u8 {
        return qtc.QSslConfiguration_SupportedCiphers();
    }

    pub fn CaCertificates(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslConfiguration_CaCertificates(@ptrCast(self));
    }

    pub fn SetCaCertificates(self: ?*anyopaque, certificates: []const u8) void {
        qtc.QSslConfiguration_SetCaCertificates(@ptrCast(self), @ptrCast(certificates));
    }

    pub fn AddCaCertificates(self: ?*anyopaque, path: []const u8) bool {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QSslConfiguration_AddCaCertificates(@ptrCast(self), path_str);
    }

    pub fn AddCaCertificate(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QSslConfiguration_AddCaCertificate(@ptrCast(self), @ptrCast(certificate));
    }

    pub fn AddCaCertificates2(self: ?*anyopaque, certificates: []const u8) void {
        qtc.QSslConfiguration_AddCaCertificates2(@ptrCast(self), @ptrCast(certificates));
    }

    pub fn SystemCaCertificates() []const u8 {
        return qtc.QSslConfiguration_SystemCaCertificates();
    }

    pub fn SetSslOption(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QSslConfiguration_SetSslOption(@ptrCast(self), @intCast(option), on);
    }

    pub fn TestSslOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QSslConfiguration_TestSslOption(@ptrCast(self), @intCast(option));
    }

    pub fn SessionTicket(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslConfiguration_SessionTicket(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.SessionTicket: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetSessionTicket(self: ?*anyopaque, sessionTicket: []u8) void {
        const sessionTicket_str = qtc.libqt_string{
    .len = sessionTicket.len,
    .data = sessionTicket.ptr,
};
qtc.QSslConfiguration_SetSessionTicket(@ptrCast(self), sessionTicket_str);
    }

    pub fn SessionTicketLifeTimeHint(self: ?*anyopaque, ) i32 {
        return qtc.QSslConfiguration_SessionTicketLifeTimeHint(@ptrCast(self));
    }

    pub fn EphemeralServerKey(self: ?*anyopaque, ) QtC.QSslKey {
        return qtc.QSslConfiguration_EphemeralServerKey(@ptrCast(self));
    }

    pub fn EllipticCurves(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslConfiguration_EllipticCurves(@ptrCast(self));
    }

    pub fn SetEllipticCurves(self: ?*anyopaque, curves: []const u8) void {
        qtc.QSslConfiguration_SetEllipticCurves(@ptrCast(self), @ptrCast(curves));
    }

    pub fn SupportedEllipticCurves() []const u8 {
        return qtc.QSslConfiguration_SupportedEllipticCurves();
    }

    pub fn PreSharedKeyIdentityHint(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslConfiguration_PreSharedKeyIdentityHint(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.PreSharedKeyIdentityHint: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetPreSharedKeyIdentityHint(self: ?*anyopaque, hint: []u8) void {
        const hint_str = qtc.libqt_string{
    .len = hint.len,
    .data = hint.ptr,
};
qtc.QSslConfiguration_SetPreSharedKeyIdentityHint(@ptrCast(self), hint_str);
    }

    pub fn DiffieHellmanParameters(self: ?*anyopaque, ) QtC.QSslDiffieHellmanParameters {
        return qtc.QSslConfiguration_DiffieHellmanParameters(@ptrCast(self));
    }

    pub fn SetDiffieHellmanParameters(self: ?*anyopaque, dhparams: ?*anyopaque) void {
        qtc.QSslConfiguration_SetDiffieHellmanParameters(@ptrCast(self), @ptrCast(dhparams));
    }

    pub fn BackendConfiguration(self: ?*anyopaque, ) QMap<QByteArray, QVariant> {
        return qtc.QSslConfiguration_BackendConfiguration(@ptrCast(self));
    }

    pub fn SetBackendConfigurationOption(self: ?*anyopaque, name: []u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSslConfiguration_SetBackendConfigurationOption(@ptrCast(self), name_str, @ptrCast(value));
    }

    pub fn SetBackendConfiguration(self: ?*anyopaque, ) void {
        qtc.QSslConfiguration_SetBackendConfiguration(@ptrCast(self));
    }

    pub fn DefaultConfiguration() QtC.QSslConfiguration {
        return qtc.QSslConfiguration_DefaultConfiguration();
    }

    pub fn SetDefaultConfiguration(configuration: ?*anyopaque) void {
        qtc.QSslConfiguration_SetDefaultConfiguration(@ptrCast(configuration));
    }

    pub fn DtlsCookieVerificationEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSslConfiguration_DtlsCookieVerificationEnabled(@ptrCast(self));
    }

    pub fn SetDtlsCookieVerificationEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSslConfiguration_SetDtlsCookieVerificationEnabled(@ptrCast(self), enable);
    }

    pub fn DefaultDtlsConfiguration() QtC.QSslConfiguration {
        return qtc.QSslConfiguration_DefaultDtlsConfiguration();
    }

    pub fn SetDefaultDtlsConfiguration(configuration: ?*anyopaque) void {
        qtc.QSslConfiguration_SetDefaultDtlsConfiguration(@ptrCast(configuration));
    }

    pub fn HandshakeMustInterruptOnError(self: ?*anyopaque, ) bool {
        return qtc.QSslConfiguration_HandshakeMustInterruptOnError(@ptrCast(self));
    }

    pub fn SetHandshakeMustInterruptOnError(self: ?*anyopaque, interrupt: bool) void {
        qtc.QSslConfiguration_SetHandshakeMustInterruptOnError(@ptrCast(self), interrupt);
    }

    pub fn MissingCertificateIsFatal(self: ?*anyopaque, ) bool {
        return qtc.QSslConfiguration_MissingCertificateIsFatal(@ptrCast(self));
    }

    pub fn SetMissingCertificateIsFatal(self: ?*anyopaque, cannotRecover: bool) void {
        qtc.QSslConfiguration_SetMissingCertificateIsFatal(@ptrCast(self), cannotRecover);
    }

    pub fn SetOcspStaplingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSslConfiguration_SetOcspStaplingEnabled(@ptrCast(self), enable);
    }

    pub fn OcspStaplingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSslConfiguration_OcspStaplingEnabled(@ptrCast(self));
    }

    pub fn SetAllowedNextProtocols(self: ?*anyopaque, protocols: []const u8) void {
        qtc.QSslConfiguration_SetAllowedNextProtocols(@ptrCast(self), @ptrCast(protocols));
    }

    pub fn AllowedNextProtocols(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslConfiguration_AllowedNextProtocols(@ptrCast(self));
    }

    pub fn NextNegotiatedProtocol(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslConfiguration_NextNegotiatedProtocol(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.NextNegotiatedProtocol: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn NextProtocolNegotiationStatus(self: ?*anyopaque, ) i32 {
        return qtc.QSslConfiguration_NextProtocolNegotiationStatus(@ptrCast(self));
    }

    pub fn AddCaCertificates22(self: ?*anyopaque, path: []const u8, format: i32) bool {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QSslConfiguration_AddCaCertificates22(@ptrCast(self), path_str, @intCast(format));
    }

    pub fn AddCaCertificates3(self: ?*anyopaque, path: []const u8, format: i32, syntax: i32) bool {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QSslConfiguration_AddCaCertificates3(@ptrCast(self), path_str, @intCast(format), @intCast(syntax));
    }

    pub fn SetBackendConfiguration1(self: ?*anyopaque, backendConfiguration: *const QMap<QByteArray, QVariant>) void {
        qtc.QSslConfiguration_SetBackendConfiguration1(@ptrCast(self), @ptrCast(backendConfiguration));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslConfiguration_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sslconfiguration.html#types
pub const enums = struct {
    pub const NextProtocolNegotiationStatus = enum {
        pub const NextProtocolNegotiationNone: i32 = 0;
        pub const NextProtocolNegotiationNegotiated: i32 = 1;
        pub const NextProtocolNegotiationUnsupported: i32 = 2;
    };

};
