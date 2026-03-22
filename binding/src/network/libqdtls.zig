const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdtlsclientverifier.html
pub const qdtlsclientverifier = struct {

    /// New constructs a new QDtlsClientVerifier object.
    pub fn New() QtC.QDtlsClientVerifier {
        return qtc.QDtlsClientVerifier_new();
    }


    /// New2 constructs a new QDtlsClientVerifier object.
    pub fn New2(parent: ?*anyopaque) QtC.QDtlsClientVerifier {
        return qtc.QDtlsClientVerifier_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtlsClientVerifier_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCookieGeneratorParameters(self: ?*anyopaque, params: ?*anyopaque) bool {
        return qtc.QDtlsClientVerifier_SetCookieGeneratorParameters(@ptrCast(self), @ptrCast(params));
    }

    pub fn CookieGeneratorParameters(self: ?*anyopaque, ) QtC.QDtlsClientVerifier__GeneratorParameters {
        return qtc.QDtlsClientVerifier_CookieGeneratorParameters(@ptrCast(self));
    }

    pub fn VerifyClient(self: ?*anyopaque, socket: ?*anyopaque, dgram: []u8, address: ?*anyopaque, port: u16) bool {
        const dgram_str = qtc.libqt_string{
    .len = dgram.len,
    .data = dgram.ptr,
};
return qtc.QDtlsClientVerifier_VerifyClient(@ptrCast(self), @ptrCast(socket), dgram_str, @ptrCast(address), port);
    }

    pub fn VerifiedHello(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDtlsClientVerifier_VerifiedHello(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdtlsclientverifier.VerifiedHello: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn DtlsError(self: ?*anyopaque, ) u8 {
        return qtc.QDtlsClientVerifier_DtlsError(@ptrCast(self));
    }

    pub fn DtlsErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtlsClientVerifier_DtlsErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.DtlsErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtlsClientVerifier_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtlsClientVerifier_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDtlsClientVerifier_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdtls.html
pub const qdtls = struct {

    /// New constructs a new QDtls object.
    pub fn New(mode: i32) QtC.QDtls {
        return qtc.QDtls_new(@intCast(mode));
    }


    /// New2 constructs a new QDtls object.
    pub fn New2(mode: i32, parent: ?*anyopaque) QtC.QDtls {
        return qtc.QDtls_new2(@intCast(mode), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtls_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPeer(self: ?*anyopaque, address: ?*anyopaque, port: u16) bool {
        return qtc.QDtls_SetPeer(@ptrCast(self), @ptrCast(address), port);
    }

    pub fn SetPeerVerificationName(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDtls_SetPeerVerificationName(@ptrCast(self), name_str);
    }

    pub fn PeerAddress(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QDtls_PeerAddress(@ptrCast(self));
    }

    pub fn PeerPort(self: ?*anyopaque, ) u16 {
        return qtc.QDtls_PeerPort(@ptrCast(self));
    }

    pub fn PeerVerificationName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtls_PeerVerificationName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.PeerVerificationName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SslMode(self: ?*anyopaque, ) i32 {
        return qtc.QDtls_SslMode(@ptrCast(self));
    }

    pub fn SetMtuHint(self: ?*anyopaque, mtuHint: u16) void {
        qtc.QDtls_SetMtuHint(@ptrCast(self), mtuHint);
    }

    pub fn MtuHint(self: ?*anyopaque, ) u16 {
        return qtc.QDtls_MtuHint(@ptrCast(self));
    }

    pub fn SetCookieGeneratorParameters(self: ?*anyopaque, params: ?*anyopaque) bool {
        return qtc.QDtls_SetCookieGeneratorParameters(@ptrCast(self), @ptrCast(params));
    }

    pub fn CookieGeneratorParameters(self: ?*anyopaque, ) QtC.QDtlsClientVerifier__GeneratorParameters {
        return qtc.QDtls_CookieGeneratorParameters(@ptrCast(self));
    }

    pub fn SetDtlsConfiguration(self: ?*anyopaque, configuration: ?*anyopaque) bool {
        return qtc.QDtls_SetDtlsConfiguration(@ptrCast(self), @ptrCast(configuration));
    }

    pub fn DtlsConfiguration(self: ?*anyopaque, ) QtC.QSslConfiguration {
        return qtc.QDtls_DtlsConfiguration(@ptrCast(self));
    }

    pub fn HandshakeState(self: ?*anyopaque, ) i32 {
        return qtc.QDtls_HandshakeState(@ptrCast(self));
    }

    pub fn DoHandshake(self: ?*anyopaque, socket: ?*anyopaque) bool {
        return qtc.QDtls_DoHandshake(@ptrCast(self), @ptrCast(socket));
    }

    pub fn HandleTimeout(self: ?*anyopaque, socket: ?*anyopaque) bool {
        return qtc.QDtls_HandleTimeout(@ptrCast(self), @ptrCast(socket));
    }

    pub fn ResumeHandshake(self: ?*anyopaque, socket: ?*anyopaque) bool {
        return qtc.QDtls_ResumeHandshake(@ptrCast(self), @ptrCast(socket));
    }

    pub fn AbortHandshake(self: ?*anyopaque, socket: ?*anyopaque) bool {
        return qtc.QDtls_AbortHandshake(@ptrCast(self), @ptrCast(socket));
    }

    pub fn Shutdown(self: ?*anyopaque, socket: ?*anyopaque) bool {
        return qtc.QDtls_Shutdown(@ptrCast(self), @ptrCast(socket));
    }

    pub fn IsConnectionEncrypted(self: ?*anyopaque, ) bool {
        return qtc.QDtls_IsConnectionEncrypted(@ptrCast(self));
    }

    pub fn SessionCipher(self: ?*anyopaque, ) QtC.QSslCipher {
        return qtc.QDtls_SessionCipher(@ptrCast(self));
    }

    pub fn SessionProtocol(self: ?*anyopaque, ) i32 {
        return qtc.QDtls_SessionProtocol(@ptrCast(self));
    }

    pub fn WriteDatagramEncrypted(self: ?*anyopaque, socket: ?*anyopaque, dgram: []u8) i64 {
        const dgram_str = qtc.libqt_string{
    .len = dgram.len,
    .data = dgram.ptr,
};
return qtc.QDtls_WriteDatagramEncrypted(@ptrCast(self), @ptrCast(socket), dgram_str);
    }

    pub fn DecryptDatagram(self: ?*anyopaque, socket: ?*anyopaque, dgram: []u8, allocator: std.mem.Allocator) []u8 {
        const dgram_str = qtc.libqt_string{
    .len = dgram.len,
    .data = dgram.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QDtls_DecryptDatagram(@ptrCast(self), @ptrCast(socket), dgram_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdtls.DecryptDatagram: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn DtlsError(self: ?*anyopaque, ) u8 {
        return qtc.QDtls_DtlsError(@ptrCast(self));
    }

    pub fn DtlsErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtls_DtlsErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.DtlsErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PeerVerificationErrors(self: ?*anyopaque, ) []const u8 {
        return qtc.QDtls_PeerVerificationErrors(@ptrCast(self));
    }

    pub fn IgnoreVerificationErrors(self: ?*anyopaque, errorsToIgnore: []const u8) void {
        qtc.QDtls_IgnoreVerificationErrors(@ptrCast(self), @ptrCast(errorsToIgnore));
    }

    pub fn PskRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QDtls_PskRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    pub fn OnPskRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDtls_Connect_PskRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HandshakeTimeout(self: ?*anyopaque, ) void {
        qtc.QDtls_HandshakeTimeout(@ptrCast(self));
    }

    pub fn OnHandshakeTimeout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDtls_Connect_HandshakeTimeout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtls_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDtls_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPeer3(self: ?*anyopaque, address: ?*anyopaque, port: u16, verificationName: []const u8) bool {
        const verificationName_str = qtc.libqt_string{
    .len = verificationName.len,
    .data = verificationName.ptr,
};
return qtc.QDtls_SetPeer3(@ptrCast(self), @ptrCast(address), port, verificationName_str);
    }

    pub fn DoHandshake2(self: ?*anyopaque, socket: ?*anyopaque, dgram: []u8) bool {
        const dgram_str = qtc.libqt_string{
    .len = dgram.len,
    .data = dgram.ptr,
};
return qtc.QDtls_DoHandshake2(@ptrCast(self), @ptrCast(socket), dgram_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDtls_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html
pub const qdtlsclientverifier__generatorparameters = struct {

    /// New constructs a new QDtlsClientVerifier::GeneratorParameters object.
    pub fn New() QtC.QDtlsClientVerifier__GeneratorParameters {
        return qtc.QDtlsClientVerifier__GeneratorParameters_new();
    }


    /// New2 constructs a new QDtlsClientVerifier::GeneratorParameters object.
    pub fn New2(a: i32, s: []u8) QtC.QDtlsClientVerifier__GeneratorParameters {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QDtlsClientVerifier__GeneratorParameters_new2(@intCast(a), s_str);
    }


    /// New3 constructs a new QDtlsClientVerifier::GeneratorParameters object.
    pub fn New3(param1: ?*anyopaque) QtC.QDtlsClientVerifier__GeneratorParameters {
        return qtc.QDtlsClientVerifier__GeneratorParameters_new3(@ptrCast(param1));
    }


    pub fn Hash(self: ?*anyopaque, ) i32 {
        return qtc.QDtlsClientVerifier__GeneratorParameters_Hash(@ptrCast(self));
    }

    pub fn SetHash(self: ?*anyopaque, hash: i32) void {
        qtc.QDtlsClientVerifier__GeneratorParameters_SetHash(@ptrCast(self), @intCast(hash));
    }

    pub fn Secret(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const secret_bytearray: qtc.libqt_string = qtc.QDtlsClientVerifier__GeneratorParameters_Secret(@ptrCast(self));
defer qtc.libqt_string_free(&secret_bytearray);
const secret_ret = allocator.alloc(u8, secret_bytearray.len) catch @panic("qdtlsclientverifier::generatorparameters.Secret: Memory allocation failed");
@memcpy(secret_ret, secret_bytearray.data[0..secret_bytearray.len]);
return  secret_ret;
    }

    pub fn SetSecret(self: ?*anyopaque, secret: []u8) void {
        const secret_str = qtc.libqt_string{
    .len = secret.len,
    .data = secret.ptr,
};
qtc.QDtlsClientVerifier__GeneratorParameters_SetSecret(@ptrCast(self), secret_str);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDtlsClientVerifier__GeneratorParameters_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDtlsClientVerifier__GeneratorParameters_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/dtls.html#types
pub const enums = struct {
    pub const QDtlsError = enum {
        pub const NoError: u8 = 0;
        pub const InvalidInputParameters: u8 = 1;
        pub const InvalidOperation: u8 = 2;
        pub const UnderlyingSocketError: u8 = 3;
        pub const RemoteClosedConnectionError: u8 = 4;
        pub const PeerVerificationError: u8 = 5;
        pub const TlsInitializationError: u8 = 6;
        pub const TlsFatalError: u8 = 7;
        pub const TlsNonFatalError: u8 = 8;
    };

    pub const HandshakeState = enum {
        pub const HandshakeNotStarted: i32 = 0;
        pub const HandshakeInProgress: i32 = 1;
        pub const PeerVerificationFailed: i32 = 2;
        pub const HandshakeComplete: i32 = 3;
    };

};
