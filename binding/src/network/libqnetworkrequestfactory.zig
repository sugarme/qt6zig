const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkrequestfactory.html
pub const qnetworkrequestfactory = struct {

    /// New constructs a new QNetworkRequestFactory object.
    pub fn New() QtC.QNetworkRequestFactory {
        return qtc.QNetworkRequestFactory_new();
    }


    /// New2 constructs a new QNetworkRequestFactory object.
    pub fn New2(baseUrl: ?*anyopaque) QtC.QNetworkRequestFactory {
        return qtc.QNetworkRequestFactory_new2(@ptrCast(baseUrl));
    }


    /// New3 constructs a new QNetworkRequestFactory object.
    pub fn New3(other: ?*anyopaque) QtC.QNetworkRequestFactory {
        return qtc.QNetworkRequestFactory_new3(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn BaseUrl(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QNetworkRequestFactory_BaseUrl(@ptrCast(self));
    }

    pub fn SetBaseUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetBaseUrl(@ptrCast(self), @ptrCast(url));
    }

    pub fn SslConfiguration(self: ?*anyopaque, ) QtC.QSslConfiguration {
        return qtc.QNetworkRequestFactory_SslConfiguration(@ptrCast(self));
    }

    pub fn SetSslConfiguration(self: ?*anyopaque, configuration: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetSslConfiguration(@ptrCast(self), @ptrCast(configuration));
    }

    pub fn CreateRequest(self: ?*anyopaque, ) QtC.QNetworkRequest {
        return qtc.QNetworkRequestFactory_CreateRequest(@ptrCast(self));
    }

    pub fn CreateRequest2(self: ?*anyopaque, query: ?*anyopaque) QtC.QNetworkRequest {
        return qtc.QNetworkRequestFactory_CreateRequest2(@ptrCast(self), @ptrCast(query));
    }

    pub fn CreateRequest3(self: ?*anyopaque, path: []const u8) QtC.QNetworkRequest {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QNetworkRequestFactory_CreateRequest3(@ptrCast(self), path_str);
    }

    pub fn CreateRequest4(self: ?*anyopaque, path: []const u8, query: ?*anyopaque) QtC.QNetworkRequest {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QNetworkRequestFactory_CreateRequest4(@ptrCast(self), path_str, @ptrCast(query));
    }

    pub fn SetCommonHeaders(self: ?*anyopaque, headers: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetCommonHeaders(@ptrCast(self), @ptrCast(headers));
    }

    pub fn CommonHeaders(self: ?*anyopaque, ) QtC.QHttpHeaders {
        return qtc.QNetworkRequestFactory_CommonHeaders(@ptrCast(self));
    }

    pub fn ClearCommonHeaders(self: ?*anyopaque, ) void {
        qtc.QNetworkRequestFactory_ClearCommonHeaders(@ptrCast(self));
    }

    pub fn BearerToken(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkRequestFactory_BearerToken(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkrequestfactory.BearerToken: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetBearerToken(self: ?*anyopaque, token: []u8) void {
        const token_str = qtc.libqt_string{
    .len = token.len,
    .data = token.ptr,
};
qtc.QNetworkRequestFactory_SetBearerToken(@ptrCast(self), token_str);
    }

    pub fn ClearBearerToken(self: ?*anyopaque, ) void {
        qtc.QNetworkRequestFactory_ClearBearerToken(@ptrCast(self));
    }

    pub fn UserName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkRequestFactory_UserName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkrequestfactory.UserName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetUserName(self: ?*anyopaque, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
    .len = userName.len,
    .data = userName.ptr,
};
qtc.QNetworkRequestFactory_SetUserName(@ptrCast(self), userName_str);
    }

    pub fn ClearUserName(self: ?*anyopaque, ) void {
        qtc.QNetworkRequestFactory_ClearUserName(@ptrCast(self));
    }

    pub fn Password(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkRequestFactory_Password(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkrequestfactory.Password: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
    .len = password.len,
    .data = password.ptr,
};
qtc.QNetworkRequestFactory_SetPassword(@ptrCast(self), password_str);
    }

    pub fn ClearPassword(self: ?*anyopaque, ) void {
        qtc.QNetworkRequestFactory_ClearPassword(@ptrCast(self));
    }

    pub fn QueryParameters(self: ?*anyopaque, ) QtC.QUrlQuery {
        return qtc.QNetworkRequestFactory_QueryParameters(@ptrCast(self));
    }

    pub fn SetQueryParameters(self: ?*anyopaque, query: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetQueryParameters(@ptrCast(self), @ptrCast(query));
    }

    pub fn ClearQueryParameters(self: ?*anyopaque, ) void {
        qtc.QNetworkRequestFactory_ClearQueryParameters(@ptrCast(self));
    }

    pub fn SetPriority(self: ?*anyopaque, priority: i32) void {
        qtc.QNetworkRequestFactory_SetPriority(@ptrCast(self), @intCast(priority));
    }

    pub fn Priority(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkRequestFactory_Priority(@ptrCast(self));
    }

    pub fn Attribute(self: ?*anyopaque, attribute: i32) QtC.QVariant {
        return qtc.QNetworkRequestFactory_Attribute(@ptrCast(self), @intCast(attribute));
    }

    pub fn Attribute2(self: ?*anyopaque, attribute: i32, defaultValue: ?*anyopaque) QtC.QVariant {
        return qtc.QNetworkRequestFactory_Attribute2(@ptrCast(self), @intCast(attribute), @ptrCast(defaultValue));
    }

    pub fn SetAttribute(self: ?*anyopaque, attribute: i32, value: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetAttribute(@ptrCast(self), @intCast(attribute), @ptrCast(value));
    }

    pub fn ClearAttribute(self: ?*anyopaque, attribute: i32) void {
        qtc.QNetworkRequestFactory_ClearAttribute(@ptrCast(self), @intCast(attribute));
    }

    pub fn ClearAttributes(self: ?*anyopaque, ) void {
        qtc.QNetworkRequestFactory_ClearAttributes(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_Delete(@ptrCast(self));
    }
};
