const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qauthenticator.html
pub const qauthenticator = struct {

    /// New constructs a new QAuthenticator object.
    pub fn New() QtC.QAuthenticator {
        return qtc.QAuthenticator_new();
    }


    /// New2 constructs a new QAuthenticator object.
    pub fn New2(other: ?*anyopaque) QtC.QAuthenticator {
        return qtc.QAuthenticator_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAuthenticator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QAuthenticator_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QAuthenticator_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn User(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAuthenticator_User(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.User: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetUser(self: ?*anyopaque, user: []const u8) void {
        const user_str = qtc.libqt_string{
    .len = user.len,
    .data = user.ptr,
};
qtc.QAuthenticator_SetUser(@ptrCast(self), user_str);
    }

    pub fn Password(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAuthenticator_Password(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.Password: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
    .len = password.len,
    .data = password.ptr,
};
qtc.QAuthenticator_SetPassword(@ptrCast(self), password_str);
    }

    pub fn Realm(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAuthenticator_Realm(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.Realm: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetRealm(self: ?*anyopaque, realm: []const u8) void {
        const realm_str = qtc.libqt_string{
    .len = realm.len,
    .data = realm.ptr,
};
qtc.QAuthenticator_SetRealm(@ptrCast(self), realm_str);
    }

    pub fn Option(self: ?*anyopaque, opt: []const u8) QtC.QVariant {
        const opt_str = qtc.libqt_string{
    .len = opt.len,
    .data = opt.ptr,
};
return qtc.QAuthenticator_Option(@ptrCast(self), opt_str);
    }

    pub fn Options(self: ?*anyopaque, ) QHash<QString, QVariant> {
        return qtc.QAuthenticator_Options(@ptrCast(self));
    }

    pub fn SetOption(self: ?*anyopaque, opt: []const u8, value: ?*anyopaque) void {
        const opt_str = qtc.libqt_string{
    .len = opt.len,
    .data = opt.ptr,
};
qtc.QAuthenticator_SetOption(@ptrCast(self), opt_str, @ptrCast(value));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QAuthenticator_IsNull(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QAuthenticator_Detach(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAuthenticator_Delete(@ptrCast(self));
    }
};
