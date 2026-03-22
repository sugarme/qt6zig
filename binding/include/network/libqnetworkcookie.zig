const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkcookie.html
pub const qnetworkcookie = struct {

    /// New constructs a new QNetworkCookie object.
    pub fn New() QtC.QNetworkCookie {
        return qtc.QNetworkCookie_new();
    }


    /// New2 constructs a new QNetworkCookie object.
    pub fn New2(other: ?*anyopaque) QtC.QNetworkCookie {
        return qtc.QNetworkCookie_new2(@ptrCast(other));
    }


    /// New3 constructs a new QNetworkCookie object.
    pub fn New3(name: []u8) QtC.QNetworkCookie {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QNetworkCookie_new3(name_str);
    }


    /// New4 constructs a new QNetworkCookie object.
    pub fn New4(name: []u8, value: []u8) QtC.QNetworkCookie {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
return qtc.QNetworkCookie_new4(name_str, value_str);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCookie_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCookie_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsSecure(self: ?*anyopaque, ) bool {
        return qtc.QNetworkCookie_IsSecure(@ptrCast(self));
    }

    pub fn SetSecure(self: ?*anyopaque, enable: bool) void {
        qtc.QNetworkCookie_SetSecure(@ptrCast(self), enable);
    }

    pub fn IsHttpOnly(self: ?*anyopaque, ) bool {
        return qtc.QNetworkCookie_IsHttpOnly(@ptrCast(self));
    }

    pub fn SetHttpOnly(self: ?*anyopaque, enable: bool) void {
        qtc.QNetworkCookie_SetHttpOnly(@ptrCast(self), enable);
    }

    pub fn SameSitePolicy(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkCookie_SameSitePolicy(@ptrCast(self));
    }

    pub fn SetSameSitePolicy(self: ?*anyopaque, sameSite: i32) void {
        qtc.QNetworkCookie_SetSameSitePolicy(@ptrCast(self), @intCast(sameSite));
    }

    pub fn IsSessionCookie(self: ?*anyopaque, ) bool {
        return qtc.QNetworkCookie_IsSessionCookie(@ptrCast(self));
    }

    pub fn ExpirationDate(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QNetworkCookie_ExpirationDate(@ptrCast(self));
    }

    pub fn SetExpirationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.QNetworkCookie_SetExpirationDate(@ptrCast(self), @ptrCast(date));
    }

    pub fn Domain(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkCookie_Domain(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookie.Domain: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDomain(self: ?*anyopaque, domain: []const u8) void {
        const domain_str = qtc.libqt_string{
    .len = domain.len,
    .data = domain.ptr,
};
qtc.QNetworkCookie_SetDomain(@ptrCast(self), domain_str);
    }

    pub fn Path(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkCookie_Path(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookie.Path: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
qtc.QNetworkCookie_SetPath(@ptrCast(self), path_str);
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.Name: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetName(self: ?*anyopaque, cookieName: []u8) void {
        const cookieName_str = qtc.libqt_string{
    .len = cookieName.len,
    .data = cookieName.ptr,
};
qtc.QNetworkCookie_SetName(@ptrCast(self), cookieName_str);
    }

    pub fn Value(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Value(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.Value: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetValue(self: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QNetworkCookie_SetValue(@ptrCast(self), value_str);
    }

    pub fn ToRawForm(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.ToRawForm: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn HasSameIdentifier(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_HasSameIdentifier(@ptrCast(self), @ptrCast(other));
    }

    pub fn Normalize(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkCookie_Normalize(@ptrCast(self), @ptrCast(url));
    }

    pub fn ParseCookies(cookieString: []const u8) []const u8 {
        return qtc.QNetworkCookie_ParseCookies(@ptrCast(cookieString));
    }

    pub fn ToRawForm1(self: ?*anyopaque, form: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm1(@ptrCast(self), @intCast(form));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.ToRawForm1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkCookie_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/networkcookie.html#types
pub const enums = struct {
    pub const RawForm = enum {
        pub const NameAndValueOnly: i32 = 0;
        pub const Full: i32 = 1;
    };

    pub const SameSite = enum {
        pub const Default: i32 = 0;
        pub const None: i32 = 1;
        pub const Lax: i32 = 2;
        pub const Strict: i32 = 3;
    };

};
