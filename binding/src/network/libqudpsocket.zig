const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qudpsocket.html
pub const qudpsocket = struct {

    /// New constructs a new QUdpSocket object.
    pub fn New() QtC.QUdpSocket {
        return qtc.QUdpSocket_new();
    }


    /// New2 constructs a new QUdpSocket object.
    pub fn New2(parent: ?*anyopaque) QtC.QUdpSocket {
        return qtc.QUdpSocket_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUdpSocket_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Bind(self: ?*anyopaque, addr: i32) bool {
        return qtc.QUdpSocket_Bind(@ptrCast(self), @intCast(addr));
    }

    pub fn JoinMulticastGroup(self: ?*anyopaque, groupAddress: ?*anyopaque) bool {
        return qtc.QUdpSocket_JoinMulticastGroup(@ptrCast(self), @ptrCast(groupAddress));
    }

    pub fn JoinMulticastGroup2(self: ?*anyopaque, groupAddress: ?*anyopaque, iface: ?*anyopaque) bool {
        return qtc.QUdpSocket_JoinMulticastGroup2(@ptrCast(self), @ptrCast(groupAddress), @ptrCast(iface));
    }

    pub fn LeaveMulticastGroup(self: ?*anyopaque, groupAddress: ?*anyopaque) bool {
        return qtc.QUdpSocket_LeaveMulticastGroup(@ptrCast(self), @ptrCast(groupAddress));
    }

    pub fn LeaveMulticastGroup2(self: ?*anyopaque, groupAddress: ?*anyopaque, iface: ?*anyopaque) bool {
        return qtc.QUdpSocket_LeaveMulticastGroup2(@ptrCast(self), @ptrCast(groupAddress), @ptrCast(iface));
    }

    pub fn MulticastInterface(self: ?*anyopaque, ) QtC.QNetworkInterface {
        return qtc.QUdpSocket_MulticastInterface(@ptrCast(self));
    }

    pub fn SetMulticastInterface(self: ?*anyopaque, iface: ?*anyopaque) void {
        qtc.QUdpSocket_SetMulticastInterface(@ptrCast(self), @ptrCast(iface));
    }

    pub fn HasPendingDatagrams(self: ?*anyopaque, ) bool {
        return qtc.QUdpSocket_HasPendingDatagrams(@ptrCast(self));
    }

    pub fn PendingDatagramSize(self: ?*anyopaque, ) i64 {
        return qtc.QUdpSocket_PendingDatagramSize(@ptrCast(self));
    }

    pub fn ReceiveDatagram(self: ?*anyopaque, ) QtC.QNetworkDatagram {
        return qtc.QUdpSocket_ReceiveDatagram(@ptrCast(self));
    }

    pub fn ReadDatagram(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QUdpSocket_ReadDatagram(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn WriteDatagram(self: ?*anyopaque, datagram: ?*anyopaque) i64 {
        return qtc.QUdpSocket_WriteDatagram(@ptrCast(self), @ptrCast(datagram));
    }

    pub fn WriteDatagram2(self: ?*anyopaque, data: []const u8, lenVal: i64, host: ?*anyopaque, port: u16) i64 {
        return qtc.QUdpSocket_WriteDatagram2(@ptrCast(self), @ptrCast(data), lenVal, @ptrCast(host), port);
    }

    pub fn WriteDatagram3(self: ?*anyopaque, datagram: []u8, host: ?*anyopaque, port: u16) i64 {
        const datagram_str = qtc.libqt_string{
    .len = datagram.len,
    .data = datagram.ptr,
};
return qtc.QUdpSocket_WriteDatagram3(@ptrCast(self), datagram_str, @ptrCast(host), port);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUdpSocket_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUdpSocket_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Bind2(self: ?*anyopaque, addr: i32, port: u16) bool {
        return qtc.QUdpSocket_Bind2(@ptrCast(self), @intCast(addr), port);
    }

    pub fn Bind3(self: ?*anyopaque, addr: i32, port: u16, mode: i32) bool {
        return qtc.QUdpSocket_Bind3(@ptrCast(self), @intCast(addr), port, @intCast(mode));
    }

    pub fn ReceiveDatagram1(self: ?*anyopaque, maxSize: i64) QtC.QNetworkDatagram {
        return qtc.QUdpSocket_ReceiveDatagram1(@ptrCast(self), maxSize);
    }

    pub fn ReadDatagram3(self: ?*anyopaque, data: []const u8, maxlen: i64, host: ?*anyopaque) i64 {
        return qtc.QUdpSocket_ReadDatagram3(@ptrCast(self), @ptrCast(data), maxlen, @ptrCast(host));
    }

    pub fn ReadDatagram4(self: ?*anyopaque, data: []const u8, maxlen: i64, host: ?*anyopaque, port: *u16) i64 {
        return qtc.QUdpSocket_ReadDatagram4(@ptrCast(self), @ptrCast(data), maxlen, @ptrCast(host), @ptrCast(port));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUdpSocket_Delete(@ptrCast(self));
    }
};
