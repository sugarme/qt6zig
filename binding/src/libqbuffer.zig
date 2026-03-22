const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbuffer.html
pub const qbuffer = struct {

    /// New constructs a new QBuffer object.
    pub fn New() QtC.QBuffer {
        return qtc.QBuffer_new();
    }


    /// New2 constructs a new QBuffer object.
    pub fn New2(buf: []u8) QtC.QBuffer {
        const buf_str = qtc.libqt_string{
    .len = buf.len,
    .data = buf.ptr,
};
return qtc.QBuffer_new2(buf_str);
    }


    /// New3 constructs a new QBuffer object.
    pub fn New3(parent: ?*anyopaque) QtC.QBuffer {
        return qtc.QBuffer_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QBuffer object.
    pub fn New4(buf: []u8, parent: ?*anyopaque) QtC.QBuffer {
        const buf_str = qtc.libqt_string{
    .len = buf.len,
    .data = buf.ptr,
};
return qtc.QBuffer_new4(buf_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBuffer_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbuffer.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Buffer(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QBuffer_Buffer(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbuffer.Buffer: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Buffer2(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QBuffer_Buffer2(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbuffer.Buffer2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetBuffer(self: ?*anyopaque, a: []u8) void {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
qtc.QBuffer_SetBuffer(@ptrCast(self), a_str);
    }

    pub fn SetData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
qtc.QBuffer_SetData(@ptrCast(self), data_str);
    }

    pub fn SetData2(self: ?*anyopaque, data: []const u8, lenVal: i64) void {
        qtc.QBuffer_SetData2(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn Data(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QBuffer_Data(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbuffer.Data: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Open(self: ?*anyopaque, openMode: i32) bool {
        return qtc.QBuffer_Open(@ptrCast(self), @intCast(openMode));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QBuffer_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, openMode: i32) bool {
        return qtc.QBuffer_QBaseOpen(@ptrCast(self), @intCast(openMode));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QBuffer_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBuffer_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QBuffer_QBaseClose(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QBuffer_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QBuffer_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) i64 {
        return qtc.QBuffer_QBaseSize(@ptrCast(self));
    }

    pub fn Pos(self: ?*anyopaque, ) i64 {
        return qtc.QBuffer_Pos(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPos(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QBuffer_OnPos(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePos(self: ?*anyopaque, ) i64 {
        return qtc.QBuffer_QBasePos(@ptrCast(self));
    }

    pub fn Seek(self: ?*anyopaque, off: i64) bool {
        return qtc.QBuffer_Seek(@ptrCast(self), off);
    }

    /// Allows for overriding the related default method
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QBuffer_OnSeek(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeek(self: ?*anyopaque, off: i64) bool {
        return qtc.QBuffer_QBaseSeek(@ptrCast(self), off);
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QBuffer_AtEnd(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QBuffer_OnAtEnd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAtEnd(self: ?*anyopaque, ) bool {
        return qtc.QBuffer_QBaseAtEnd(@ptrCast(self));
    }

    pub fn CanReadLine(self: ?*anyopaque, ) bool {
        return qtc.QBuffer_CanReadLine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QBuffer_OnCanReadLine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanReadLine(self: ?*anyopaque, ) bool {
        return qtc.QBuffer_QBaseCanReadLine(@ptrCast(self));
    }

    pub fn ConnectNotify(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBuffer_ConnectNotify(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBuffer_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConnectNotify(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBuffer_QBaseConnectNotify(@ptrCast(self), @ptrCast(param1));
    }

    pub fn DisconnectNotify(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBuffer_DisconnectNotify(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBuffer_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBuffer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QBuffer_ReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QBuffer_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QBuffer_QBaseReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QBuffer_WriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QBuffer_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QBuffer_QBaseWriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBuffer_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbuffer.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBuffer_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbuffer.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBuffer_Delete(@ptrCast(self));
    }
};
