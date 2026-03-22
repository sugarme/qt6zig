const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractsocket.html
pub const qabstractsocket = struct {

    /// New constructs a new QAbstractSocket object.
    pub fn New(socketType: i32, parent: ?*anyopaque) QtC.QAbstractSocket {
        return qtc.QAbstractSocket_new(@intCast(socketType), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSocket_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Resume(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_Resume(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnResume(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_OnResume(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResume(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_QBaseResume(@ptrCast(self));
    }

    pub fn PauseMode(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self));
    }

    pub fn SetPauseMode(self: ?*anyopaque, pauseMode: i32) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self), @intCast(pauseMode));
    }

    pub fn Bind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_Bind(@ptrCast(self), @ptrCast(address), port, @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnBind(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u16, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnBind(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_QBaseBind(@ptrCast(self), @ptrCast(address), port, @intCast(mode));
    }

    pub fn Bind2(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSocket_Bind2(@ptrCast(self));
    }

    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QAbstractSocket_ConnectToHost(@ptrCast(self), hostName_str, port, @intCast(mode), @intCast(protocol));
    }

    /// Allows for overriding the related default method
    pub fn OnConnectToHost(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_OnConnectToHost(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
qtc.QAbstractSocket_QBaseConnectToHost(@ptrCast(self), hostName_str, port, @intCast(mode), @intCast(protocol));
    }

    pub fn ConnectToHost2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self), @ptrCast(address), port);
    }

    pub fn DisconnectFromHost(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_DisconnectFromHost(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDisconnectFromHost(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_OnDisconnectFromHost(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDisconnectFromHost(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_QBaseDisconnectFromHost(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self));
    }

    pub fn BytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QAbstractSocket_BytesAvailable(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnBytesAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QAbstractSocket_QBaseBytesAvailable(@ptrCast(self));
    }

    pub fn BytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QAbstractSocket_BytesToWrite(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnBytesToWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QAbstractSocket_QBaseBytesToWrite(@ptrCast(self));
    }

    pub fn LocalPort(self: ?*anyopaque, ) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self));
    }

    pub fn LocalAddress(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QAbstractSocket_LocalAddress(@ptrCast(self));
    }

    pub fn PeerPort(self: ?*anyopaque, ) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self));
    }

    pub fn PeerAddress(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QAbstractSocket_PeerAddress(@ptrCast(self));
    }

    pub fn PeerName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSocket_PeerName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.PeerName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ReadBufferSize(self: ?*anyopaque, ) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self));
    }

    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QAbstractSocket_SetReadBufferSize(@ptrCast(self), size);
    }

    /// Allows for overriding the related default method
    pub fn OnSetReadBufferSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetReadBufferSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QAbstractSocket_QBaseSetReadBufferSize(@ptrCast(self), size);
    }

    pub fn Abort(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self));
    }

    pub fn SocketDescriptor(self: ?*anyopaque, ) isize {
        return qtc.QAbstractSocket_SocketDescriptor(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSocketDescriptor(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) isize) void {
        qtc.QAbstractSocket_OnSocketDescriptor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSocketDescriptor(self: ?*anyopaque, ) isize {
        return qtc.QAbstractSocket_QBaseSocketDescriptor(@ptrCast(self));
    }

    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QAbstractSocket_SetSocketDescriptor(@ptrCast(self), socketDescriptor, @intCast(state), @intCast(openMode));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSocketDescriptor(self: ?*anyopaque, callback: *const fn (?*anyopaque, isize, i32, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnSetSocketDescriptor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QAbstractSocket_QBaseSetSocketDescriptor(@ptrCast(self), socketDescriptor, @intCast(state), @intCast(openMode));
    }

    pub fn SetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QAbstractSocket_SetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSocketOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetSocketOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QAbstractSocket_QBaseSetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    pub fn SocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QAbstractSocket_SocketOption(@ptrCast(self), @intCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnSocketOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QAbstractSocket_OnSocketOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QAbstractSocket_QBaseSocketOption(@ptrCast(self), @intCast(option));
    }

    pub fn SocketType(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_QBaseClose(@ptrCast(self));
    }

    pub fn IsSequential(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSocket_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSequential(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSocket_QBaseIsSequential(@ptrCast(self));
    }

    pub fn Flush(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self));
    }

    pub fn WaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QAbstractSocket_WaitForConnected(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnWaitForConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QAbstractSocket_QBaseWaitForConnected(@ptrCast(self), msecs);
    }

    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QAbstractSocket_WaitForReadyRead(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnWaitForReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QAbstractSocket_QBaseWaitForReadyRead(@ptrCast(self), msecs);
    }

    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QAbstractSocket_WaitForBytesWritten(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnWaitForBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QAbstractSocket_QBaseWaitForBytesWritten(@ptrCast(self), msecs);
    }

    pub fn WaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QAbstractSocket_WaitForDisconnected(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnWaitForDisconnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QAbstractSocket_QBaseWaitForDisconnected(@ptrCast(self), msecs);
    }

    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QAbstractSocket_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    pub fn Proxy(self: ?*anyopaque, ) QtC.QNetworkProxy {
        return qtc.QAbstractSocket_Proxy(@ptrCast(self));
    }

    pub fn ProtocolTag(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.ProtocolTag: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetProtocolTag(self: ?*anyopaque, tag: []const u8) void {
        const tag_str = qtc.libqt_string{
    .len = tag.len,
    .data = tag.ptr,
};
qtc.QAbstractSocket_SetProtocolTag(@ptrCast(self), tag_str);
    }

    pub fn HostFound(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self));
    }

    pub fn OnHostFound(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Connected(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self));
    }

    pub fn OnConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Disconnected(self: ?*anyopaque, ) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self));
    }

    pub fn OnDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StateChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self), @intCast(param1));
    }

    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self), @intCast(param1));
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QAbstractSocket_ReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QAbstractSocket_QBaseReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QAbstractSocket_ReadLineData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnReadLineData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QAbstractSocket_QBaseReadLineData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QAbstractSocket_SkipData(@ptrCast(self), maxSize);
    }

    /// Allows for overriding the related default method
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnSkipData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QAbstractSocket_QBaseSkipData(@ptrCast(self), maxSize);
    }

    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QAbstractSocket_WriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QAbstractSocket_QBaseWriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn SetSocketState(self: ?*anyopaque, state: i32) void {
        qtc.QAbstractSocket_SetSocketState(@ptrCast(self), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSocketState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetSocketState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSocketState(self: ?*anyopaque, state: i32) void {
        qtc.QAbstractSocket_QBaseSetSocketState(@ptrCast(self), @intCast(state));
    }

    pub fn SetSocketError(self: ?*anyopaque, socketError: i32) void {
        qtc.QAbstractSocket_SetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSocketError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetSocketError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSocketError(self: ?*anyopaque, socketError: i32) void {
        qtc.QAbstractSocket_QBaseSetSocketError(@ptrCast(self), @intCast(socketError));
    }

    pub fn SetLocalPort(self: ?*anyopaque, port: u16) void {
        qtc.QAbstractSocket_SetLocalPort(@ptrCast(self), port);
    }

    /// Allows for overriding the related default method
    pub fn OnSetLocalPort(self: ?*anyopaque, callback: *const fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetLocalPort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetLocalPort(self: ?*anyopaque, port: u16) void {
        qtc.QAbstractSocket_QBaseSetLocalPort(@ptrCast(self), port);
    }

    pub fn SetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QAbstractSocket_SetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Allows for overriding the related default method
    pub fn OnSetLocalAddress(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetLocalAddress(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QAbstractSocket_QBaseSetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    pub fn SetPeerPort(self: ?*anyopaque, port: u16) void {
        qtc.QAbstractSocket_SetPeerPort(@ptrCast(self), port);
    }

    /// Allows for overriding the related default method
    pub fn OnSetPeerPort(self: ?*anyopaque, callback: *const fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetPeerPort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPeerPort(self: ?*anyopaque, port: u16) void {
        qtc.QAbstractSocket_QBaseSetPeerPort(@ptrCast(self), port);
    }

    pub fn SetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QAbstractSocket_SetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPeerAddress(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetPeerAddress(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QAbstractSocket_QBaseSetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    pub fn SetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QAbstractSocket_SetPeerName(@ptrCast(self), name_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetPeerName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetPeerName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QAbstractSocket_QBaseSetPeerName(@ptrCast(self), name_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSocket_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSocket_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Bind1(self: ?*anyopaque, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self), port);
    }

    pub fn Bind22(self: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self), port, @intCast(mode));
    }

    pub fn ConnectToHost3(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) void {
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self), @ptrCast(address), port, @intCast(mode));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractsocket.html#types
pub const enums = struct {
    pub const SocketType = enum {
        pub const TcpSocket: i32 = 0;
        pub const UdpSocket: i32 = 1;
        pub const SctpSocket: i32 = 2;
        pub const UnknownSocketType: i32 = -1;
    };

    pub const NetworkLayerProtocol = enum {
        pub const IPv4Protocol: i32 = 0;
        pub const IPv6Protocol: i32 = 1;
        pub const AnyIPProtocol: i32 = 2;
        pub const UnknownNetworkLayerProtocol: i32 = -1;
    };

    pub const SocketError = enum {
        pub const ConnectionRefusedError: i32 = 0;
        pub const RemoteHostClosedError: i32 = 1;
        pub const HostNotFoundError: i32 = 2;
        pub const SocketAccessError: i32 = 3;
        pub const SocketResourceError: i32 = 4;
        pub const SocketTimeoutError: i32 = 5;
        pub const DatagramTooLargeError: i32 = 6;
        pub const NetworkError: i32 = 7;
        pub const AddressInUseError: i32 = 8;
        pub const SocketAddressNotAvailableError: i32 = 9;
        pub const UnsupportedSocketOperationError: i32 = 10;
        pub const UnfinishedSocketOperationError: i32 = 11;
        pub const ProxyAuthenticationRequiredError: i32 = 12;
        pub const SslHandshakeFailedError: i32 = 13;
        pub const ProxyConnectionRefusedError: i32 = 14;
        pub const ProxyConnectionClosedError: i32 = 15;
        pub const ProxyConnectionTimeoutError: i32 = 16;
        pub const ProxyNotFoundError: i32 = 17;
        pub const ProxyProtocolError: i32 = 18;
        pub const OperationError: i32 = 19;
        pub const SslInternalError: i32 = 20;
        pub const SslInvalidUserDataError: i32 = 21;
        pub const TemporaryError: i32 = 22;
        pub const UnknownSocketError: i32 = -1;
    };

    pub const SocketState = enum {
        pub const UnconnectedState: i32 = 0;
        pub const HostLookupState: i32 = 1;
        pub const ConnectingState: i32 = 2;
        pub const ConnectedState: i32 = 3;
        pub const BoundState: i32 = 4;
        pub const ListeningState: i32 = 5;
        pub const ClosingState: i32 = 6;
    };

    pub const SocketOption = enum {
        pub const LowDelayOption: i32 = 0;
        pub const KeepAliveOption: i32 = 1;
        pub const MulticastTtlOption: i32 = 2;
        pub const MulticastLoopbackOption: i32 = 3;
        pub const TypeOfServiceOption: i32 = 4;
        pub const SendBufferSizeSocketOption: i32 = 5;
        pub const ReceiveBufferSizeSocketOption: i32 = 6;
        pub const PathMtuSocketOption: i32 = 7;
    };

    pub const BindFlag = enum {
        pub const DefaultForPlatform: i32 = 0;
        pub const ShareAddress: i32 = 1;
        pub const DontShareAddress: i32 = 2;
        pub const ReuseAddressHint: i32 = 4;
    };

    pub const PauseMode = enum {
        pub const PauseNever: i32 = 0;
        pub const PauseOnSslErrors: i32 = 1;
    };

};
