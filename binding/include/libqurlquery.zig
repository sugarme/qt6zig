const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qurlquery.html
pub const qurlquery = struct {

    /// New constructs a new QUrlQuery object.
    pub fn New() QtC.QUrlQuery {
        return qtc.QUrlQuery_new();
    }


    /// New2 constructs a new QUrlQuery object.
    pub fn New2(url: ?*anyopaque) QtC.QUrlQuery {
        return qtc.QUrlQuery_new2(@ptrCast(url));
    }


    /// New3 constructs a new QUrlQuery object.
    pub fn New3(queryString: []const u8) QtC.QUrlQuery {
        const queryString_str = qtc.libqt_string{
    .len = queryString.len,
    .data = queryString.ptr,
};
return qtc.QUrlQuery_new3(queryString_str);
    }


    /// New4 constructs a new QUrlQuery object.
    pub fn New4(other: ?*anyopaque) QtC.QUrlQuery {
        return qtc.QUrlQuery_new4(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUrlQuery_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUrlQuery_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QUrlQuery_IsEmpty(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QUrlQuery_IsDetached(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QUrlQuery_Clear(@ptrCast(self));
    }

    pub fn Query(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrlQuery_Query(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.Query: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetQuery(self: ?*anyopaque, queryString: []const u8) void {
        const queryString_str = qtc.libqt_string{
    .len = queryString.len,
    .data = queryString.ptr,
};
qtc.QUrlQuery_SetQuery(@ptrCast(self), queryString_str);
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrlQuery_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetQueryDelimiters(self: ?*anyopaque, valueDelimiter: QtC.QChar, pairDelimiter: QtC.QChar) void {
        qtc.QUrlQuery_SetQueryDelimiters(@ptrCast(self), @ptrCast(valueDelimiter), @ptrCast(pairDelimiter));
    }

    pub fn QueryValueDelimiter(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QUrlQuery_QueryValueDelimiter(@ptrCast(self));
    }

    pub fn QueryPairDelimiter(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QUrlQuery_QueryPairDelimiter(@ptrCast(self));
    }

    pub fn SetQueryItems(self: ?*anyopaque, query: []const u8) void {
        qtc.QUrlQuery_SetQueryItems(@ptrCast(self), @ptrCast(query));
    }

    pub fn QueryItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QUrlQuery_QueryItems(@ptrCast(self));
    }

    pub fn HasQueryItem(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QUrlQuery_HasQueryItem(@ptrCast(self), key_str);
    }

    pub fn AddQueryItem(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QUrlQuery_AddQueryItem(@ptrCast(self), key_str, value_str);
    }

    pub fn RemoveQueryItem(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QUrlQuery_RemoveQueryItem(@ptrCast(self), key_str);
    }

    pub fn QueryItemValue(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
const _str = qtc.QUrlQuery_QueryItemValue(@ptrCast(self), key_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.QueryItemValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AllQueryItemValues(self: ?*anyopaque, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QUrlQuery_AllQueryItemValues(@ptrCast(self), key_str);
    }

    pub fn RemoveAllQueryItems(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QUrlQuery_RemoveAllQueryItems(@ptrCast(self), key_str);
    }

    pub fn DataPtr(self: ?*anyopaque, ) QSharedDataPointer<QUrlQueryPrivate> {
        return @ptrCast(qtc.QUrlQuery_DataPtr(@ptrCast(self)));
    }

    pub fn Query1(self: ?*anyopaque, encoding: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrlQuery_Query1(@ptrCast(self), @intCast(encoding));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.Query1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString1(self: ?*anyopaque, encoding: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrlQuery_ToString1(@ptrCast(self), @intCast(encoding));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn QueryItems1(self: ?*anyopaque, encoding: u32) []const u8 {
        return qtc.QUrlQuery_QueryItems1(@ptrCast(self), @intCast(encoding));
    }

    pub fn QueryItemValue2(self: ?*anyopaque, key: []const u8, encoding: u32, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
const _str = qtc.QUrlQuery_QueryItemValue2(@ptrCast(self), key_str, @intCast(encoding));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.QueryItemValue2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AllQueryItemValues2(self: ?*anyopaque, key: []const u8, encoding: u32) []const u8 {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QUrlQuery_AllQueryItemValues2(@ptrCast(self), key_str, @intCast(encoding));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUrlQuery_Delete(@ptrCast(self));
    }
};
