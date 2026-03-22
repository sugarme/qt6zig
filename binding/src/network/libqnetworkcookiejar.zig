const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkcookiejar.html
pub const qnetworkcookiejar = struct {

    /// New constructs a new QNetworkCookieJar object.
    pub fn New() QtC.QNetworkCookieJar {
        return qtc.QNetworkCookieJar_new();
    }


    /// New2 constructs a new QNetworkCookieJar object.
    pub fn New2(parent: ?*anyopaque) QtC.QNetworkCookieJar {
        return qtc.QNetworkCookieJar_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkCookieJar_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookiejar.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CookiesForUrl(self: ?*anyopaque, url: ?*anyopaque) []const u8 {
        return qtc.QNetworkCookieJar_CookiesForUrl(@ptrCast(self), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnCookiesForUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QNetworkCookieJar_OnCookiesForUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCookiesForUrl(self: ?*anyopaque, url: ?*anyopaque) []const u8 {
        return qtc.QNetworkCookieJar_QBaseCookiesForUrl(@ptrCast(self), @ptrCast(url));
    }

    pub fn SetCookiesFromUrl(self: ?*anyopaque, cookieList: []const u8, url: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_SetCookiesFromUrl(@ptrCast(self), @ptrCast(cookieList), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnSetCookiesFromUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnSetCookiesFromUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetCookiesFromUrl(self: ?*anyopaque, cookieList: []const u8, url: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_QBaseSetCookiesFromUrl(@ptrCast(self), @ptrCast(cookieList), @ptrCast(url));
    }

    pub fn InsertCookie(self: ?*anyopaque, cookie: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_InsertCookie(@ptrCast(self), @ptrCast(cookie));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertCookie(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnInsertCookie(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertCookie(self: ?*anyopaque, cookie: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_QBaseInsertCookie(@ptrCast(self), @ptrCast(cookie));
    }

    pub fn UpdateCookie(self: ?*anyopaque, cookie: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_UpdateCookie(@ptrCast(self), @ptrCast(cookie));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCookie(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnUpdateCookie(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCookie(self: ?*anyopaque, cookie: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_QBaseUpdateCookie(@ptrCast(self), @ptrCast(cookie));
    }

    pub fn DeleteCookie(self: ?*anyopaque, cookie: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_DeleteCookie(@ptrCast(self), @ptrCast(cookie));
    }

    /// Allows for overriding the related default method
    pub fn OnDeleteCookie(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnDeleteCookie(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDeleteCookie(self: ?*anyopaque, cookie: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_QBaseDeleteCookie(@ptrCast(self), @ptrCast(cookie));
    }

    pub fn AllCookies(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkCookieJar_AllCookies(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAllCookies(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QNetworkCookieJar_OnAllCookies(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAllCookies(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkCookieJar_QBaseAllCookies(@ptrCast(self));
    }

    pub fn SetAllCookies(self: ?*anyopaque, cookieList: []const u8) void {
        qtc.QNetworkCookieJar_SetAllCookies(@ptrCast(self), @ptrCast(cookieList));
    }

    /// Allows for overriding the related default method
    pub fn OnSetAllCookies(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnSetAllCookies(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetAllCookies(self: ?*anyopaque, cookieList: []const u8) void {
        qtc.QNetworkCookieJar_QBaseSetAllCookies(@ptrCast(self), @ptrCast(cookieList));
    }

    pub fn ValidateCookie(self: ?*anyopaque, cookie: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_ValidateCookie(@ptrCast(self), @ptrCast(cookie), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnValidateCookie(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnValidateCookie(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidateCookie(self: ?*anyopaque, cookie: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QNetworkCookieJar_QBaseValidateCookie(@ptrCast(self), @ptrCast(cookie), @ptrCast(url));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkCookieJar_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookiejar.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkCookieJar_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookiejar.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkCookieJar_Delete(@ptrCast(self));
    }
};
