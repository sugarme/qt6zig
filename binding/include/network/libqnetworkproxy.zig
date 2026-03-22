const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkproxyquery.html
pub const qnetworkproxyquery = struct {

    /// New constructs a new QNetworkProxyQuery object.
    pub fn New() QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new();
    }


    /// New2 constructs a new QNetworkProxyQuery object.
    pub fn New2(requestUrl: ?*anyopaque) QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new2(@ptrCast(requestUrl));
    }


    /// New3 constructs a new QNetworkProxyQuery object.
    pub fn New3(hostname: []const u8, port: i32) QtC.QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
    .len = hostname.len,
    .data = hostname.ptr,
};
return qtc.QNetworkProxyQuery_new3(hostname_str, port);
    }


    /// New4 constructs a new QNetworkProxyQuery object.
    pub fn New4(bindPort: u16) QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new4(bindPort);
    }


    /// New5 constructs a new QNetworkProxyQuery object.
    pub fn New5(other: ?*anyopaque) QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new5(@ptrCast(other));
    }


    /// New6 constructs a new QNetworkProxyQuery object.
    pub fn New6(requestUrl: ?*anyopaque, queryType: i32) QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new6(@ptrCast(requestUrl), @intCast(queryType));
    }


    /// New7 constructs a new QNetworkProxyQuery object.
    pub fn New7(hostname: []const u8, port: i32, protocolTag: []const u8) QtC.QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
    .len = hostname.len,
    .data = hostname.ptr,
};
const protocolTag_str = qtc.libqt_string{
    .len = protocolTag.len,
    .data = protocolTag.ptr,
};
return qtc.QNetworkProxyQuery_new7(hostname_str, port, protocolTag_str);
    }


    /// New8 constructs a new QNetworkProxyQuery object.
    pub fn New8(hostname: []const u8, port: i32, protocolTag: []const u8, queryType: i32) QtC.QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
    .len = hostname.len,
    .data = hostname.ptr,
};
const protocolTag_str = qtc.libqt_string{
    .len = protocolTag.len,
    .data = protocolTag.ptr,
};
return qtc.QNetworkProxyQuery_new8(hostname_str, port, protocolTag_str, @intCast(queryType));
    }


    /// New9 constructs a new QNetworkProxyQuery object.
    pub fn New9(bindPort: u16, protocolTag: []const u8) QtC.QNetworkProxyQuery {
        const protocolTag_str = qtc.libqt_string{
    .len = protocolTag.len,
    .data = protocolTag.ptr,
};
return qtc.QNetworkProxyQuery_new9(bindPort, protocolTag_str);
    }


    /// New10 constructs a new QNetworkProxyQuery object.
    pub fn New10(bindPort: u16, protocolTag: []const u8, queryType: i32) QtC.QNetworkProxyQuery {
        const protocolTag_str = qtc.libqt_string{
    .len = protocolTag.len,
    .data = protocolTag.ptr,
};
return qtc.QNetworkProxyQuery_new10(bindPort, protocolTag_str, @intCast(queryType));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkProxyQuery_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkProxyQuery_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkProxyQuery_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkProxyQuery_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn QueryType(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkProxyQuery_QueryType(@ptrCast(self));
    }

    pub fn SetQueryType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QNetworkProxyQuery_SetQueryType(@ptrCast(self), @intCast(typeVal));
    }

    pub fn PeerPort(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkProxyQuery_PeerPort(@ptrCast(self));
    }

    pub fn SetPeerPort(self: ?*anyopaque, port: i32) void {
        qtc.QNetworkProxyQuery_SetPeerPort(@ptrCast(self), port);
    }

    pub fn PeerHostName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxyQuery_PeerHostName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxyquery.PeerHostName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPeerHostName(self: ?*anyopaque, hostname: []const u8) void {
        const hostname_str = qtc.libqt_string{
    .len = hostname.len,
    .data = hostname.ptr,
};
qtc.QNetworkProxyQuery_SetPeerHostName(@ptrCast(self), hostname_str);
    }

    pub fn LocalPort(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkProxyQuery_LocalPort(@ptrCast(self));
    }

    pub fn SetLocalPort(self: ?*anyopaque, port: i32) void {
        qtc.QNetworkProxyQuery_SetLocalPort(@ptrCast(self), port);
    }

    pub fn ProtocolTag(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxyQuery_ProtocolTag(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxyquery.ProtocolTag: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetProtocolTag(self: ?*anyopaque, protocolTag: []const u8) void {
        const protocolTag_str = qtc.libqt_string{
    .len = protocolTag.len,
    .data = protocolTag.ptr,
};
qtc.QNetworkProxyQuery_SetProtocolTag(@ptrCast(self), protocolTag_str);
    }

    pub fn Url(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QNetworkProxyQuery_Url(@ptrCast(self));
    }

    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkProxyQuery_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkProxyQuery_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkproxy.html
pub const qnetworkproxy = struct {

    /// New constructs a new QNetworkProxy object.
    pub fn New() QtC.QNetworkProxy {
        return qtc.QNetworkProxy_new();
    }


    /// New2 constructs a new QNetworkProxy object.
    pub fn New2(typeVal: i32) QtC.QNetworkProxy {
        return qtc.QNetworkProxy_new2(@intCast(typeVal));
    }


    /// New3 constructs a new QNetworkProxy object.
    pub fn New3(other: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QNetworkProxy_new3(@ptrCast(other));
    }


    /// New4 constructs a new QNetworkProxy object.
    pub fn New4(typeVal: i32, hostName: []const u8) QtC.QNetworkProxy {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
return qtc.QNetworkProxy_new4(@intCast(typeVal), hostName_str);
    }


    /// New5 constructs a new QNetworkProxy object.
    pub fn New5(typeVal: i32, hostName: []const u8, port: u16) QtC.QNetworkProxy {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
return qtc.QNetworkProxy_new5(@intCast(typeVal), hostName_str, port);
    }


    /// New6 constructs a new QNetworkProxy object.
    pub fn New6(typeVal: i32, hostName: []const u8, port: u16, user: []const u8) QtC.QNetworkProxy {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
const user_str = qtc.libqt_string{
    .len = user.len,
    .data = user.ptr,
};
return qtc.QNetworkProxy_new6(@intCast(typeVal), hostName_str, port, user_str);
    }


    /// New7 constructs a new QNetworkProxy object.
    pub fn New7(typeVal: i32, hostName: []const u8, port: u16, user: []const u8, password: []const u8) QtC.QNetworkProxy {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
const user_str = qtc.libqt_string{
    .len = user.len,
    .data = user.ptr,
};
const password_str = qtc.libqt_string{
    .len = password.len,
    .data = password.ptr,
};
return qtc.QNetworkProxy_new7(@intCast(typeVal), hostName_str, port, user_str, password_str);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkProxy_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkProxy_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkProxy_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkProxy_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QNetworkProxy_SetType(@ptrCast(self), @intCast(typeVal));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkProxy_Type(@ptrCast(self));
    }

    pub fn SetCapabilities(self: ?*anyopaque, capab: i32) void {
        qtc.QNetworkProxy_SetCapabilities(@ptrCast(self), @intCast(capab));
    }

    pub fn Capabilities(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkProxy_Capabilities(@ptrCast(self));
    }

    pub fn IsCachingProxy(self: ?*anyopaque, ) bool {
        return qtc.QNetworkProxy_IsCachingProxy(@ptrCast(self));
    }

    pub fn IsTransparentProxy(self: ?*anyopaque, ) bool {
        return qtc.QNetworkProxy_IsTransparentProxy(@ptrCast(self));
    }

    pub fn SetUser(self: ?*anyopaque, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
    .len = userName.len,
    .data = userName.ptr,
};
qtc.QNetworkProxy_SetUser(@ptrCast(self), userName_str);
    }

    pub fn User(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxy_User(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.User: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
    .len = password.len,
    .data = password.ptr,
};
qtc.QNetworkProxy_SetPassword(@ptrCast(self), password_str);
    }

    pub fn Password(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxy_Password(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.Password: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHostName(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QNetworkProxy_SetHostName(@ptrCast(self), hostName_str);
    }

    pub fn HostName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxy_HostName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.HostName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPort(self: ?*anyopaque, port: u16) void {
        qtc.QNetworkProxy_SetPort(@ptrCast(self), port);
    }

    pub fn Port(self: ?*anyopaque, ) u16 {
        return qtc.QNetworkProxy_Port(@ptrCast(self));
    }

    pub fn SetApplicationProxy(proxy: ?*anyopaque) void {
        qtc.QNetworkProxy_SetApplicationProxy(@ptrCast(proxy));
    }

    pub fn ApplicationProxy() QtC.QNetworkProxy {
        return qtc.QNetworkProxy_ApplicationProxy();
    }

    pub fn Headers(self: ?*anyopaque, ) QtC.QHttpHeaders {
        return qtc.QNetworkProxy_Headers(@ptrCast(self));
    }

    pub fn SetHeaders(self: ?*anyopaque, newHeaders: ?*anyopaque) void {
        qtc.QNetworkProxy_SetHeaders(@ptrCast(self), @ptrCast(newHeaders));
    }

    pub fn Header(self: ?*anyopaque, header: i32) QtC.QVariant {
        return qtc.QNetworkProxy_Header(@ptrCast(self), @intCast(header));
    }

    pub fn SetHeader(self: ?*anyopaque, header: i32, value: ?*anyopaque) void {
        qtc.QNetworkProxy_SetHeader(@ptrCast(self), @intCast(header), @ptrCast(value));
    }

    pub fn HasRawHeader(self: ?*anyopaque, headerName: []u8) bool {
        const headerName_str = qtc.libqt_string{
    .len = headerName.len,
    .data = headerName.ptr,
};
return qtc.QNetworkProxy_HasRawHeader(@ptrCast(self), headerName_str);
    }

    pub fn RawHeaderList(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkProxy_RawHeaderList(@ptrCast(self));
    }

    pub fn RawHeader(self: ?*anyopaque, headerName: []u8, allocator: std.mem.Allocator) []u8 {
        const headerName_str = qtc.libqt_string{
    .len = headerName.len,
    .data = headerName.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QNetworkProxy_RawHeader(@ptrCast(self), headerName_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkproxy.RawHeader: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetRawHeader(self: ?*anyopaque, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.libqt_string{
    .len = headerName.len,
    .data = headerName.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QNetworkProxy_SetRawHeader(@ptrCast(self), headerName_str, value_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkProxy_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkproxyfactory.html
pub const qnetworkproxyfactory = struct {

    /// New constructs a new QNetworkProxyFactory object.
    pub fn New() QtC.QNetworkProxyFactory {
        return qtc.QNetworkProxyFactory_new();
    }


    /// New2 constructs a new QNetworkProxyFactory object.
    pub fn New2(param1: ?*anyopaque) QtC.QNetworkProxyFactory {
        return qtc.QNetworkProxyFactory_new2(@ptrCast(param1));
    }


    pub fn QueryProxy(self: ?*anyopaque, query: ?*anyopaque) []const u8 {
        return qtc.QNetworkProxyFactory_QueryProxy(@ptrCast(self), @ptrCast(query));
    }

    /// Allows for overriding the related default method
    pub fn OnQueryProxy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QNetworkProxyFactory_OnQueryProxy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseQueryProxy(self: ?*anyopaque, query: ?*anyopaque) []const u8 {
        return qtc.QNetworkProxyFactory_QBaseQueryProxy(@ptrCast(self), @ptrCast(query));
    }

    pub fn UsesSystemConfiguration() bool {
        return qtc.QNetworkProxyFactory_UsesSystemConfiguration();
    }

    pub fn SetUseSystemConfiguration(enable: bool) void {
        qtc.QNetworkProxyFactory_SetUseSystemConfiguration(enable);
    }

    pub fn SetApplicationProxyFactory(factory: ?*anyopaque) void {
        qtc.QNetworkProxyFactory_SetApplicationProxyFactory(@ptrCast(factory));
    }

    pub fn ProxyForQuery(query: ?*anyopaque) []const u8 {
        return qtc.QNetworkProxyFactory_ProxyForQuery(@ptrCast(query));
    }

    pub fn SystemProxyForQuery() []const u8 {
        return qtc.QNetworkProxyFactory_SystemProxyForQuery();
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QNetworkProxyFactory_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SystemProxyForQuery1(query: ?*anyopaque) []const u8 {
        return qtc.QNetworkProxyFactory_SystemProxyForQuery1(@ptrCast(query));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkProxyFactory_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/networkproxy.html#types
pub const enums = struct {
    pub const QueryType = enum {
        pub const TcpSocket: i32 = 0;
        pub const UdpSocket: i32 = 1;
        pub const SctpSocket: i32 = 2;
        pub const TcpServer: i32 = 100;
        pub const UrlRequest: i32 = 101;
        pub const SctpServer: i32 = 102;
    };

    pub const ProxyType = enum {
        pub const DefaultProxy: i32 = 0;
        pub const Socks5Proxy: i32 = 1;
        pub const NoProxy: i32 = 2;
        pub const HttpProxy: i32 = 3;
        pub const HttpCachingProxy: i32 = 4;
        pub const FtpCachingProxy: i32 = 5;
    };

    pub const Capability = enum {
        pub const TunnelingCapability: i32 = 1;
        pub const ListeningCapability: i32 = 2;
        pub const UdpTunnelingCapability: i32 = 4;
        pub const CachingCapability: i32 = 8;
        pub const HostNameLookupCapability: i32 = 16;
        pub const SctpTunnelingCapability: i32 = 32;
        pub const SctpListeningCapability: i32 = 64;
    };

};
