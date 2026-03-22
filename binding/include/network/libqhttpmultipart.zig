const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhttppart.html
pub const qhttppart = struct {

    /// New constructs a new QHttpPart object.
    pub fn New() QtC.QHttpPart {
        return qtc.QHttpPart_new();
    }


    /// New2 constructs a new QHttpPart object.
    pub fn New2(other: ?*anyopaque) QtC.QHttpPart {
        return qtc.QHttpPart_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttpPart_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttpPart_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QHttpPart_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QHttpPart_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetHeader(self: ?*anyopaque, header: i32, value: ?*anyopaque) void {
        qtc.QHttpPart_SetHeader(@ptrCast(self), @intCast(header), @ptrCast(value));
    }

    pub fn SetRawHeader(self: ?*anyopaque, headerName: []u8, headerValue: []u8) void {
        const headerName_str = qtc.libqt_string{
    .len = headerName.len,
    .data = headerName.ptr,
};
const headerValue_str = qtc.libqt_string{
    .len = headerValue.len,
    .data = headerValue.ptr,
};
qtc.QHttpPart_SetRawHeader(@ptrCast(self), headerName_str, headerValue_str);
    }

    pub fn SetBody(self: ?*anyopaque, body: []u8) void {
        const body_str = qtc.libqt_string{
    .len = body.len,
    .data = body.ptr,
};
qtc.QHttpPart_SetBody(@ptrCast(self), body_str);
    }

    pub fn SetBodyDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QHttpPart_SetBodyDevice(@ptrCast(self), @ptrCast(device));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHttpPart_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhttpmultipart.html
pub const qhttpmultipart = struct {

    /// New constructs a new QHttpMultiPart object.
    pub fn New() QtC.QHttpMultiPart {
        return qtc.QHttpMultiPart_new();
    }


    /// New2 constructs a new QHttpMultiPart object.
    pub fn New2(contentType: i32) QtC.QHttpMultiPart {
        return qtc.QHttpMultiPart_new2(@intCast(contentType));
    }


    /// New3 constructs a new QHttpMultiPart object.
    pub fn New3(parent: ?*anyopaque) QtC.QHttpMultiPart {
        return qtc.QHttpMultiPart_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QHttpMultiPart object.
    pub fn New4(contentType: i32, parent: ?*anyopaque) QtC.QHttpMultiPart {
        return qtc.QHttpMultiPart_new4(@intCast(contentType), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHttpMultiPart_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpmultipart.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, httpPart: ?*anyopaque) void {
        qtc.QHttpMultiPart_Append(@ptrCast(self), @ptrCast(httpPart));
    }

    pub fn SetContentType(self: ?*anyopaque, contentType: i32) void {
        qtc.QHttpMultiPart_SetContentType(@ptrCast(self), @intCast(contentType));
    }

    pub fn Boundary(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QHttpMultiPart_Boundary(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qhttpmultipart.Boundary: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetBoundary(self: ?*anyopaque, boundary: []u8) void {
        const boundary_str = qtc.libqt_string{
    .len = boundary.len,
    .data = boundary.ptr,
};
qtc.QHttpMultiPart_SetBoundary(@ptrCast(self), boundary_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHttpMultiPart_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpmultipart.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHttpMultiPart_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpmultipart.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHttpMultiPart_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/httpmultipart.html#types
pub const enums = struct {
    pub const ContentType = enum {
        pub const MixedType: i32 = 0;
        pub const RelatedType: i32 = 1;
        pub const FormDataType: i32 = 2;
        pub const AlternativeType: i32 = 3;
    };

};
