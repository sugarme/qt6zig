const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrestreply.html
pub const qrestreply = struct {

    /// New constructs a new QRestReply object.
    pub fn New(reply: ?*anyopaque) QtC.QRestReply {
        return qtc.QRestReply_new(@ptrCast(reply));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRestReply_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn NetworkReply(self: ?*anyopaque, ) QtC.QNetworkReply {
        return qtc.QRestReply_NetworkReply(@ptrCast(self));
    }

    pub fn ReadBody(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QRestReply_ReadBody(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrestreply.ReadBody: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ReadText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRestReply_ReadText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestreply.ReadText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsSuccess(self: ?*anyopaque, ) bool {
        return qtc.QRestReply_IsSuccess(@ptrCast(self));
    }

    pub fn HttpStatus(self: ?*anyopaque, ) i32 {
        return qtc.QRestReply_HttpStatus(@ptrCast(self));
    }

    pub fn IsHttpStatusSuccess(self: ?*anyopaque, ) bool {
        return qtc.QRestReply_IsHttpStatusSuccess(@ptrCast(self));
    }

    pub fn HasError(self: ?*anyopaque, ) bool {
        return qtc.QRestReply_HasError(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QRestReply_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRestReply_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestreply.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRestReply_Delete(@ptrCast(self));
    }
};
