const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmessageauthenticationcode.html
pub const qmessageauthenticationcode = struct {

    /// New constructs a new QMessageAuthenticationCode object.
    pub fn New(method: i32) QtC.QMessageAuthenticationCode {
        return qtc.QMessageAuthenticationCode_new(@intCast(method));
    }


    /// New2 constructs a new QMessageAuthenticationCode object.
    pub fn New2(method: i32, key: []const u8) QtC.QMessageAuthenticationCode {
        return qtc.QMessageAuthenticationCode_new2(@intCast(method), @ptrCast(key));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QMessageAuthenticationCode_Reset(@ptrCast(self));
    }

    pub fn SetKey(self: ?*anyopaque, key: []const u8) void {
        qtc.QMessageAuthenticationCode_SetKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn AddData(self: ?*anyopaque, data: []const u8, length: i64) void {
        qtc.QMessageAuthenticationCode_AddData(@ptrCast(self), @ptrCast(data), length);
    }

    pub fn AddData2(self: ?*anyopaque, data: []const u8) void {
        qtc.QMessageAuthenticationCode_AddData2(@ptrCast(self), @ptrCast(data));
    }

    pub fn AddData3(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QMessageAuthenticationCode_AddData3(@ptrCast(self), @ptrCast(device));
    }

    pub fn ResultView(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageAuthenticationCode_ResultView(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.ResultView: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Result(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Result(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Result: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Hash(message: []const u8, key: []const u8, method: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Hash(@ptrCast(message), @ptrCast(key), @intCast(method));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Hash: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn HashInto(buffer: QSpan<char>, message: []const u8, key: []const u8, method: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageAuthenticationCode_HashInto(buffer, @ptrCast(message), @ptrCast(key), @intCast(method));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HashInto2(buffer: QSpan<uchar>, message: []const u8, key: []const u8, method: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageAuthenticationCode_HashInto2(buffer, @ptrCast(message), @ptrCast(key), @intCast(method));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HashInto3(buffer: QSpan<std::byte>, message: []const u8, key: []const u8, method: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageAuthenticationCode_HashInto3(buffer, @ptrCast(message), @ptrCast(key), @intCast(method));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HashInto4(buffer: QSpan<char>, messageParts: QSpan<const QByteArrayView>, key: []const u8, method: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageAuthenticationCode_HashInto4(buffer, messageParts, @ptrCast(key), @intCast(method));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HashInto5(buffer: QSpan<uchar>, messageParts: QSpan<const QByteArrayView>, key: []const u8, method: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageAuthenticationCode_HashInto5(buffer, messageParts, @ptrCast(key), @intCast(method));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HashInto6(buffer: QSpan<std::byte>, message: QSpan<const QByteArrayView>, key: []const u8, method: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageAuthenticationCode_HashInto6(buffer, message, @ptrCast(key), @intCast(method));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Delete(@ptrCast(self));
    }
};
