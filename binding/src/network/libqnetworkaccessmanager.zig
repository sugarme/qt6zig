const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkaccessmanager.html
pub const qnetworkaccessmanager = struct {

    /// New constructs a new QNetworkAccessManager object.
    pub fn New() QtC.QNetworkAccessManager {
        return qtc.QNetworkAccessManager_new();
    }


    /// New2 constructs a new QNetworkAccessManager object.
    pub fn New2(parent: ?*anyopaque) QtC.QNetworkAccessManager {
        return qtc.QNetworkAccessManager_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkAccessManager_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SupportedSchemes(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkAccessManager_SupportedSchemes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedSchemes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedSchemes(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkAccessManager_QBaseSupportedSchemes(@ptrCast(self));
    }

    pub fn ClearAccessCache(self: ?*anyopaque, ) void {
        qtc.QNetworkAccessManager_ClearAccessCache(@ptrCast(self));
    }

    pub fn ClearConnectionCache(self: ?*anyopaque, ) void {
        qtc.QNetworkAccessManager_ClearConnectionCache(@ptrCast(self));
    }

    pub fn Proxy(self: ?*anyopaque, ) QtC.QNetworkProxy {
        return qtc.QNetworkAccessManager_Proxy(@ptrCast(self));
    }

    pub fn SetProxy(self: ?*anyopaque, proxy: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetProxy(@ptrCast(self), @ptrCast(proxy));
    }

    pub fn ProxyFactory(self: ?*anyopaque, ) QtC.QNetworkProxyFactory {
        return qtc.QNetworkAccessManager_ProxyFactory(@ptrCast(self));
    }

    pub fn SetProxyFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetProxyFactory(@ptrCast(self), @ptrCast(factory));
    }

    pub fn Cache(self: ?*anyopaque, ) QtC.QAbstractNetworkCache {
        return qtc.QNetworkAccessManager_Cache(@ptrCast(self));
    }

    pub fn SetCache(self: ?*anyopaque, cache: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetCache(@ptrCast(self), @ptrCast(cache));
    }

    pub fn CookieJar(self: ?*anyopaque, ) QtC.QNetworkCookieJar {
        return qtc.QNetworkAccessManager_CookieJar(@ptrCast(self));
    }

    pub fn SetCookieJar(self: ?*anyopaque, cookieJar: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetCookieJar(@ptrCast(self), @ptrCast(cookieJar));
    }

    pub fn SetStrictTransportSecurityEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QNetworkAccessManager_SetStrictTransportSecurityEnabled(@ptrCast(self), enabled);
    }

    pub fn IsStrictTransportSecurityEnabled(self: ?*anyopaque, ) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityEnabled(@ptrCast(self));
    }

    pub fn EnableStrictTransportSecurityStore(self: ?*anyopaque, enabled: bool) void {
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore(@ptrCast(self), enabled);
    }

    pub fn IsStrictTransportSecurityStoreEnabled(self: ?*anyopaque, ) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(@ptrCast(self));
    }

    pub fn AddStrictTransportSecurityHosts(self: ?*anyopaque, knownHosts: []const u8) void {
        qtc.QNetworkAccessManager_AddStrictTransportSecurityHosts(@ptrCast(self), @ptrCast(knownHosts));
    }

    pub fn StrictTransportSecurityHosts(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkAccessManager_StrictTransportSecurityHosts(@ptrCast(self));
    }

    pub fn Head(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Head(@ptrCast(self), @ptrCast(request));
    }

    pub fn Get(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Get(@ptrCast(self), @ptrCast(request));
    }

    pub fn Get2(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Get2(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn Get3(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QNetworkAccessManager_Get3(@ptrCast(self), @ptrCast(request), data_str);
    }

    pub fn Post(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Post(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn Post2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QNetworkAccessManager_Post2(@ptrCast(self), @ptrCast(request), data_str);
    }

    pub fn Put(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Put(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn Put2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QNetworkAccessManager_Put2(@ptrCast(self), @ptrCast(request), data_str);
    }

    pub fn DeleteResource(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_DeleteResource(@ptrCast(self), @ptrCast(request));
    }

    pub fn SendCustomRequest(self: ?*anyopaque, request: ?*anyopaque, verb: []u8) QtC.QNetworkReply {
        const verb_str = qtc.libqt_string{
    .len = verb.len,
    .data = verb.ptr,
};
return qtc.QNetworkAccessManager_SendCustomRequest(@ptrCast(self), @ptrCast(request), verb_str);
    }

    pub fn SendCustomRequest2(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, data: []u8) QtC.QNetworkReply {
        const verb_str = qtc.libqt_string{
    .len = verb.len,
    .data = verb.ptr,
};
const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QNetworkAccessManager_SendCustomRequest2(@ptrCast(self), @ptrCast(request), verb_str, data_str);
    }

    pub fn Post4(self: ?*anyopaque, request: ?*anyopaque, multiPart: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Post4(@ptrCast(self), @ptrCast(request), @ptrCast(multiPart));
    }

    pub fn Put4(self: ?*anyopaque, request: ?*anyopaque, multiPart: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Put4(@ptrCast(self), @ptrCast(request), @ptrCast(multiPart));
    }

    pub fn SendCustomRequest3(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, multiPart: ?*anyopaque) QtC.QNetworkReply {
        const verb_str = qtc.libqt_string{
    .len = verb.len,
    .data = verb.ptr,
};
return qtc.QNetworkAccessManager_SendCustomRequest3(@ptrCast(self), @ptrCast(request), verb_str, @ptrCast(multiPart));
    }

    pub fn ConnectToHostEncrypted(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QNetworkAccessManager_ConnectToHostEncrypted(@ptrCast(self), hostName_str);
    }

    pub fn ConnectToHostEncrypted2(self: ?*anyopaque, hostName: []const u8, port: u16, sslConfiguration: ?*anyopaque, peerName: []const u8) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
const peerName_str = qtc.libqt_string{
    .len = peerName.len,
    .data = peerName.ptr,
};
qtc.QNetworkAccessManager_ConnectToHostEncrypted2(@ptrCast(self), hostName_str, port, @ptrCast(sslConfiguration), peerName_str);
    }

    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QNetworkAccessManager_ConnectToHost(@ptrCast(self), hostName_str);
    }

    pub fn SetRedirectPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QNetworkAccessManager_SetRedirectPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn RedirectPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkAccessManager_RedirectPolicy(@ptrCast(self));
    }

    pub fn AutoDeleteReplies(self: ?*anyopaque, ) bool {
        return qtc.QNetworkAccessManager_AutoDeleteReplies(@ptrCast(self));
    }

    pub fn SetAutoDeleteReplies(self: ?*anyopaque, autoDelete: bool) void {
        qtc.QNetworkAccessManager_SetAutoDeleteReplies(@ptrCast(self), autoDelete);
    }

    pub fn TransferTimeout(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkAccessManager_TransferTimeout(@ptrCast(self));
    }

    pub fn SetTransferTimeout(self: ?*anyopaque, timeout: i32) void {
        qtc.QNetworkAccessManager_SetTransferTimeout(@ptrCast(self), timeout);
    }

    pub fn SetTransferTimeout2(self: ?*anyopaque, ) void {
        qtc.QNetworkAccessManager_SetTransferTimeout2(@ptrCast(self));
    }

    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_ProxyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AuthenticationRequired(self: ?*anyopaque, reply: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_AuthenticationRequired(@ptrCast(self), @ptrCast(reply), @ptrCast(authenticator));
    }

    pub fn OnAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_AuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Finished(self: ?*anyopaque, reply: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Finished(@ptrCast(self), @ptrCast(reply));
    }

    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Encrypted(self: ?*anyopaque, reply: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Encrypted(@ptrCast(self), @ptrCast(reply));
    }

    pub fn OnEncrypted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Encrypted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SslErrors(self: ?*anyopaque, reply: ?*anyopaque, errors: []const u8) void {
        qtc.QNetworkAccessManager_SslErrors(@ptrCast(self), @ptrCast(reply), @ptrCast(errors));
    }

    pub fn OnSslErrors(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_SslErrors(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, reply: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(reply), @ptrCast(authenticator));
    }

    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CreateRequest(self: ?*anyopaque, op: i32, request: ?*anyopaque, outgoingData: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_CreateRequest(@ptrCast(self), @intCast(op), @ptrCast(request), @ptrCast(outgoingData));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QNetworkReply) void {
        qtc.QNetworkAccessManager_OnCreateRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateRequest(self: ?*anyopaque, op: i32, request: ?*anyopaque, outgoingData: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_QBaseCreateRequest(@ptrCast(self), @intCast(op), @ptrCast(request), @ptrCast(outgoingData));
    }

    pub fn SupportedSchemesImplementation(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkAccessManager_SupportedSchemesImplementation(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedSchemesImplementation(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemesImplementation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedSchemesImplementation(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkAccessManager_QBaseSupportedSchemesImplementation(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkAccessManager_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkAccessManager_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn EnableStrictTransportSecurityStore2(self: ?*anyopaque, enabled: bool, storeDir: []const u8) void {
        const storeDir_str = qtc.libqt_string{
    .len = storeDir.len,
    .data = storeDir.ptr,
};
qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore2(@ptrCast(self), enabled, storeDir_str);
    }

    pub fn SendCustomRequest32(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, data: ?*anyopaque) QtC.QNetworkReply {
        const verb_str = qtc.libqt_string{
    .len = verb.len,
    .data = verb.ptr,
};
return qtc.QNetworkAccessManager_SendCustomRequest32(@ptrCast(self), @ptrCast(request), verb_str, @ptrCast(data));
    }

    pub fn ConnectToHostEncrypted22(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QNetworkAccessManager_ConnectToHostEncrypted22(@ptrCast(self), hostName_str, port);
    }

    pub fn ConnectToHostEncrypted3(self: ?*anyopaque, hostName: []const u8, port: u16, sslConfiguration: ?*anyopaque) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QNetworkAccessManager_ConnectToHostEncrypted3(@ptrCast(self), hostName_str, port, @ptrCast(sslConfiguration));
    }

    pub fn ConnectToHost2(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QNetworkAccessManager_ConnectToHost2(@ptrCast(self), hostName_str, port);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/networkaccessmanager.html#types
pub const enums = struct {
    pub const Operation = enum {
        pub const HeadOperation: i32 = 1;
        pub const GetOperation: i32 = 2;
        pub const PutOperation: i32 = 3;
        pub const PostOperation: i32 = 4;
        pub const DeleteOperation: i32 = 5;
        pub const CustomOperation: i32 = 6;
        pub const UnknownOperation: i32 = 0;
    };

};
