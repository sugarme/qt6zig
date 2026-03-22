const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtcpsocket.html
pub const qtcpsocket = struct {

    /// New constructs a new QTcpSocket object.
    pub fn New() QtC.QTcpSocket {
        return qtc.QTcpSocket_new();
    }


    /// New2 constructs a new QTcpSocket object.
    pub fn New2(parent: ?*anyopaque) QtC.QTcpSocket {
        return qtc.QTcpSocket_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpSocket_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Bind(self: ?*anyopaque, addr: i32) bool {
        return qtc.QTcpSocket_Bind(@ptrCast(self), @intCast(addr));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpSocket_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpSocket_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Bind2(self: ?*anyopaque, addr: i32, port: u16) bool {
        return qtc.QTcpSocket_Bind2(@ptrCast(self), @intCast(addr), port);
    }

    pub fn Bind3(self: ?*anyopaque, addr: i32, port: u16, mode: i32) bool {
        return qtc.QTcpSocket_Bind3(@ptrCast(self), @intCast(addr), port, @intCast(mode));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTcpSocket_Delete(@ptrCast(self));
    }
};
