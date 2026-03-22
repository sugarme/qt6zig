const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkreply.html
pub const qnetworkreply = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkReply_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkreply.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_QBaseClose(@ptrCast(self));
    }

    pub fn IsSequential(self: ?*anyopaque, ) bool {
        return qtc.QNetworkReply_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkReply_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSequential(self: ?*anyopaque, ) bool {
        return qtc.QNetworkReply_QBaseIsSequential(@ptrCast(self));
    }

    pub fn ReadBufferSize(self: ?*anyopaque, ) i64 {
        return qtc.QNetworkReply_ReadBufferSize(@ptrCast(self));
    }

    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QNetworkReply_SetReadBufferSize(@ptrCast(self), size);
    }

    /// Allows for overriding the related default method
    pub fn OnSetReadBufferSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetReadBufferSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QNetworkReply_QBaseSetReadBufferSize(@ptrCast(self), size);
    }

    pub fn Manager(self: ?*anyopaque, ) QtC.QNetworkAccessManager {
        return qtc.QNetworkReply_Manager(@ptrCast(self));
    }

    pub fn Operation(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkReply_Operation(@ptrCast(self));
    }

    pub fn Request(self: ?*anyopaque, ) QtC.QNetworkRequest {
        return qtc.QNetworkReply_Request(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkReply_Error(@ptrCast(self));
    }

    pub fn IsFinished(self: ?*anyopaque, ) bool {
        return qtc.QNetworkReply_IsFinished(@ptrCast(self));
    }

    pub fn IsRunning(self: ?*anyopaque, ) bool {
        return qtc.QNetworkReply_IsRunning(@ptrCast(self));
    }

    pub fn Url(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QNetworkReply_Url(@ptrCast(self));
    }

    pub fn Header(self: ?*anyopaque, header: i32) QtC.QVariant {
        return qtc.QNetworkReply_Header(@ptrCast(self), @intCast(header));
    }

    pub fn HasRawHeader(self: ?*anyopaque, headerName: []const u8) bool {
        const headerName_str = qtc.libqt_string{
    .len = headerName.len,
    .data = headerName.ptr,
};
return qtc.QNetworkReply_HasRawHeader(@ptrCast(self), headerName_str);
    }

    pub fn RawHeaderList(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkReply_RawHeaderList(@ptrCast(self));
    }

    pub fn RawHeader(self: ?*anyopaque, headerName: []const u8, allocator: std.mem.Allocator) []u8 {
        const headerName_str = qtc.libqt_string{
    .len = headerName.len,
    .data = headerName.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QNetworkReply_RawHeader(@ptrCast(self), headerName_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkreply.RawHeader: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RawHeaderPairs(self: ?*anyopaque, ) []const u8 {
        return @ptrCast(qtc.QNetworkReply_RawHeaderPairs(@ptrCast(self)));
    }

    pub fn Headers(self: ?*anyopaque, ) QtC.QHttpHeaders {
        return qtc.QNetworkReply_Headers(@ptrCast(self));
    }

    pub fn Attribute(self: ?*anyopaque, code: i32) QtC.QVariant {
        return qtc.QNetworkReply_Attribute(@ptrCast(self), @intCast(code));
    }

    pub fn SslConfiguration(self: ?*anyopaque, ) QtC.QSslConfiguration {
        return qtc.QNetworkReply_SslConfiguration(@ptrCast(self));
    }

    pub fn SetSslConfiguration(self: ?*anyopaque, configuration: ?*anyopaque) void {
        qtc.QNetworkReply_SetSslConfiguration(@ptrCast(self), @ptrCast(configuration));
    }

    pub fn IgnoreSslErrors(self: ?*anyopaque, errors: []const u8) void {
        qtc.QNetworkReply_IgnoreSslErrors(@ptrCast(self), @ptrCast(errors));
    }

    pub fn Abort(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_Abort(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAbort(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnAbort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAbort(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_QBaseAbort(@ptrCast(self));
    }

    pub fn IgnoreSslErrors2(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_IgnoreSslErrors2(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIgnoreSslErrors2(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnIgnoreSslErrors2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIgnoreSslErrors2(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_QBaseIgnoreSslErrors2(@ptrCast(self));
    }

    pub fn SocketStartedConnecting(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_SocketStartedConnecting(@ptrCast(self));
    }

    pub fn OnSocketStartedConnecting(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_SocketStartedConnecting(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RequestSent(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_RequestSent(@ptrCast(self));
    }

    pub fn OnRequestSent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_RequestSent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MetaDataChanged(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_MetaDataChanged(@ptrCast(self));
    }

    pub fn OnMetaDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_MetaDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Finished(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_Finished(@ptrCast(self));
    }

    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, param1: i32) void {
        qtc.QNetworkReply_ErrorOccurred(@ptrCast(self), @intCast(param1));
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Encrypted(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_Encrypted(@ptrCast(self));
    }

    pub fn OnEncrypted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Encrypted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SslErrors(self: ?*anyopaque, errors: []const u8) void {
        qtc.QNetworkReply_SslErrors(@ptrCast(self), @ptrCast(errors));
    }

    pub fn OnSslErrors(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_SslErrors(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkReply_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Redirected(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkReply_Redirected(@ptrCast(self), @ptrCast(url));
    }

    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Redirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RedirectAllowed(self: ?*anyopaque, ) void {
        qtc.QNetworkReply_RedirectAllowed(@ptrCast(self));
    }

    pub fn OnRedirectAllowed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_RedirectAllowed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UploadProgress(self: ?*anyopaque, bytesSent: i64, bytesTotal: i64) void {
        qtc.QNetworkReply_UploadProgress(@ptrCast(self), bytesSent, bytesTotal);
    }

    pub fn OnUploadProgress(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, i64) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_UploadProgress(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DownloadProgress(self: ?*anyopaque, bytesReceived: i64, bytesTotal: i64) void {
        qtc.QNetworkReply_DownloadProgress(@ptrCast(self), bytesReceived, bytesTotal);
    }

    pub fn OnDownloadProgress(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, i64) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_DownloadProgress(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QNetworkReply_WriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QNetworkReply_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QNetworkReply_QBaseWriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn SetOperation(self: ?*anyopaque, operation: i32) void {
        qtc.QNetworkReply_SetOperation(@ptrCast(self), @intCast(operation));
    }

    /// Allows for overriding the related default method
    pub fn OnSetOperation(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetOperation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOperation(self: ?*anyopaque, operation: i32) void {
        qtc.QNetworkReply_QBaseSetOperation(@ptrCast(self), @intCast(operation));
    }

    pub fn SetRequest(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QNetworkReply_SetRequest(@ptrCast(self), @ptrCast(request));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRequest(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QNetworkReply_QBaseSetRequest(@ptrCast(self), @ptrCast(request));
    }

    pub fn SetError(self: ?*anyopaque, errorCode: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QNetworkReply_SetError(@ptrCast(self), @intCast(errorCode), errorString_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetError(self: ?*anyopaque, errorCode: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QNetworkReply_QBaseSetError(@ptrCast(self), @intCast(errorCode), errorString_str);
    }

    pub fn SetFinished(self: ?*anyopaque, finished: bool) void {
        qtc.QNetworkReply_SetFinished(@ptrCast(self), finished);
    }

    /// Allows for overriding the related default method
    pub fn OnSetFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetFinished(self: ?*anyopaque, finished: bool) void {
        qtc.QNetworkReply_QBaseSetFinished(@ptrCast(self), finished);
    }

    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkReply_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnSetUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkReply_QBaseSetUrl(@ptrCast(self), @ptrCast(url));
    }

    pub fn SetHeader(self: ?*anyopaque, header: i32, value: ?*anyopaque) void {
        qtc.QNetworkReply_SetHeader(@ptrCast(self), @intCast(header), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetHeader(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetHeader(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHeader(self: ?*anyopaque, header: i32, value: ?*anyopaque) void {
        qtc.QNetworkReply_QBaseSetHeader(@ptrCast(self), @intCast(header), @ptrCast(value));
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
qtc.QNetworkReply_SetRawHeader(@ptrCast(self), headerName_str, value_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetRawHeader(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, [*:0]u8) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetRawHeader(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRawHeader(self: ?*anyopaque, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.libqt_string{
    .len = headerName.len,
    .data = headerName.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QNetworkReply_QBaseSetRawHeader(@ptrCast(self), headerName_str, value_str);
    }

    pub fn SetHeaders(self: ?*anyopaque, newHeaders: ?*anyopaque) void {
        qtc.QNetworkReply_SetHeaders(@ptrCast(self), @ptrCast(newHeaders));
    }

    /// Allows for overriding the related default method
    pub fn OnSetHeaders(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetHeaders(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHeaders(self: ?*anyopaque, newHeaders: ?*anyopaque) void {
        qtc.QNetworkReply_QBaseSetHeaders(@ptrCast(self), @ptrCast(newHeaders));
    }

    pub fn SetWellKnownHeader(self: ?*anyopaque, name: i32, value: []const u8) void {
        qtc.QNetworkReply_SetWellKnownHeader(@ptrCast(self), @intCast(name), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetWellKnownHeader(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetWellKnownHeader(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetWellKnownHeader(self: ?*anyopaque, name: i32, value: []const u8) void {
        qtc.QNetworkReply_QBaseSetWellKnownHeader(@ptrCast(self), @intCast(name), @ptrCast(value));
    }

    pub fn SetAttribute(self: ?*anyopaque, code: i32, value: ?*anyopaque) void {
        qtc.QNetworkReply_SetAttribute(@ptrCast(self), @intCast(code), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetAttribute(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetAttribute(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetAttribute(self: ?*anyopaque, code: i32, value: ?*anyopaque) void {
        qtc.QNetworkReply_QBaseSetAttribute(@ptrCast(self), @intCast(code), @ptrCast(value));
    }

    pub fn SslConfigurationImplementation(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QNetworkReply_SslConfigurationImplementation(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnSslConfigurationImplementation(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnSslConfigurationImplementation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSslConfigurationImplementation(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QNetworkReply_QBaseSslConfigurationImplementation(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetSslConfigurationImplementation(self: ?*anyopaque, sslConfigurationImplementation: ?*anyopaque) void {
        qtc.QNetworkReply_SetSslConfigurationImplementation(@ptrCast(self), @ptrCast(sslConfigurationImplementation));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSslConfigurationImplementation(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkReply_OnSetSslConfigurationImplementation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSslConfigurationImplementation(self: ?*anyopaque, sslConfigurationImplementation: ?*anyopaque) void {
        qtc.QNetworkReply_QBaseSetSslConfigurationImplementation(@ptrCast(self), @ptrCast(sslConfigurationImplementation));
    }

    pub fn IgnoreSslErrorsImplementation(self: ?*anyopaque, param1: []const u8) void {
        qtc.QNetworkReply_IgnoreSslErrorsImplementation(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnIgnoreSslErrorsImplementation(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QNetworkReply_OnIgnoreSslErrorsImplementation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIgnoreSslErrorsImplementation(self: ?*anyopaque, param1: []const u8) void {
        qtc.QNetworkReply_QBaseIgnoreSslErrorsImplementation(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkReply_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkreply.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkReply_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkreply.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkReply_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/networkreply.html#types
pub const enums = struct {
    pub const NetworkError = enum {
        pub const NoError: i32 = 0;
        pub const ConnectionRefusedError: i32 = 1;
        pub const RemoteHostClosedError: i32 = 2;
        pub const HostNotFoundError: i32 = 3;
        pub const TimeoutError: i32 = 4;
        pub const OperationCanceledError: i32 = 5;
        pub const SslHandshakeFailedError: i32 = 6;
        pub const TemporaryNetworkFailureError: i32 = 7;
        pub const NetworkSessionFailedError: i32 = 8;
        pub const BackgroundRequestNotAllowedError: i32 = 9;
        pub const TooManyRedirectsError: i32 = 10;
        pub const InsecureRedirectError: i32 = 11;
        pub const UnknownNetworkError: i32 = 99;
        pub const ProxyConnectionRefusedError: i32 = 101;
        pub const ProxyConnectionClosedError: i32 = 102;
        pub const ProxyNotFoundError: i32 = 103;
        pub const ProxyTimeoutError: i32 = 104;
        pub const ProxyAuthenticationRequiredError: i32 = 105;
        pub const UnknownProxyError: i32 = 199;
        pub const ContentAccessDenied: i32 = 201;
        pub const ContentOperationNotPermittedError: i32 = 202;
        pub const ContentNotFoundError: i32 = 203;
        pub const AuthenticationRequiredError: i32 = 204;
        pub const ContentReSendError: i32 = 205;
        pub const ContentConflictError: i32 = 206;
        pub const ContentGoneError: i32 = 207;
        pub const UnknownContentError: i32 = 299;
        pub const ProtocolUnknownError: i32 = 301;
        pub const ProtocolInvalidOperationError: i32 = 302;
        pub const ProtocolFailure: i32 = 399;
        pub const InternalServerError: i32 = 401;
        pub const OperationNotImplementedError: i32 = 402;
        pub const ServiceUnavailableError: i32 = 403;
        pub const UnknownServerError: i32 = 499;
    };

};
