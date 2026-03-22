const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsslcipher.html
pub const qsslcipher = struct {

    /// New constructs a new QSslCipher object.
    pub fn New() QtC.QSslCipher {
        return qtc.QSslCipher_new();
    }


    /// New2 constructs a new QSslCipher object.
    pub fn New2(name: []const u8) QtC.QSslCipher {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSslCipher_new2(name_str);
    }


    /// New3 constructs a new QSslCipher object.
    pub fn New3(name: []const u8, protocol: i32) QtC.QSslCipher {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSslCipher_new3(name_str, @intCast(protocol));
    }


    /// New4 constructs a new QSslCipher object.
    pub fn New4(other: ?*anyopaque) QtC.QSslCipher {
        return qtc.QSslCipher_new4(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCipher_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCipher_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslCipher_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslCipher_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QSslCipher_IsNull(@ptrCast(self));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SupportedBits(self: ?*anyopaque, ) i32 {
        return qtc.QSslCipher_SupportedBits(@ptrCast(self));
    }

    pub fn UsedBits(self: ?*anyopaque, ) i32 {
        return qtc.QSslCipher_UsedBits(@ptrCast(self));
    }

    pub fn KeyExchangeMethod(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_KeyExchangeMethod(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.KeyExchangeMethod: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AuthenticationMethod(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_AuthenticationMethod(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.AuthenticationMethod: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn EncryptionMethod(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_EncryptionMethod(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.EncryptionMethod: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ProtocolString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_ProtocolString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.ProtocolString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Protocol(self: ?*anyopaque, ) i32 {
        return qtc.QSslCipher_Protocol(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslCipher_Delete(@ptrCast(self));
    }
};
