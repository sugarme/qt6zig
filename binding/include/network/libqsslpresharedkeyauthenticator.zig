const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html
pub const qsslpresharedkeyauthenticator = struct {

    /// New constructs a new QSslPreSharedKeyAuthenticator object.
    pub fn New() QtC.QSslPreSharedKeyAuthenticator {
        return qtc.QSslPreSharedKeyAuthenticator_new();
    }


    /// New2 constructs a new QSslPreSharedKeyAuthenticator object.
    pub fn New2(authenticator: ?*anyopaque) QtC.QSslPreSharedKeyAuthenticator {
        return qtc.QSslPreSharedKeyAuthenticator_new2(@ptrCast(authenticator));
    }


    pub fn OperatorAssign(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QSslPreSharedKeyAuthenticator_OperatorAssign(@ptrCast(self), @ptrCast(authenticator));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslPreSharedKeyAuthenticator_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IdentityHint(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_IdentityHint(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.IdentityHint: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetIdentity(self: ?*anyopaque, identity: []u8) void {
        const identity_str = qtc.libqt_string{
    .len = identity.len,
    .data = identity.ptr,
};
qtc.QSslPreSharedKeyAuthenticator_SetIdentity(@ptrCast(self), identity_str);
    }

    pub fn Identity(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_Identity(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.Identity: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn MaximumIdentityLength(self: ?*anyopaque, ) i32 {
        return qtc.QSslPreSharedKeyAuthenticator_MaximumIdentityLength(@ptrCast(self));
    }

    pub fn SetPreSharedKey(self: ?*anyopaque, preSharedKey: []u8) void {
        const preSharedKey_str = qtc.libqt_string{
    .len = preSharedKey.len,
    .data = preSharedKey.ptr,
};
qtc.QSslPreSharedKeyAuthenticator_SetPreSharedKey(@ptrCast(self), preSharedKey_str);
    }

    pub fn PreSharedKey(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_PreSharedKey(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.PreSharedKey: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn MaximumPreSharedKeyLength(self: ?*anyopaque, ) i32 {
        return qtc.QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslPreSharedKeyAuthenticator_Delete(@ptrCast(self));
    }
};
