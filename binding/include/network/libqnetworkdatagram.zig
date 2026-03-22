const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkdatagram.html
pub const qnetworkdatagram = struct {

    /// New constructs a new QNetworkDatagram object.
    pub fn New() QtC.QNetworkDatagram {
        return qtc.QNetworkDatagram_new();
    }


    /// New2 constructs a new QNetworkDatagram object.
    pub fn New2(data: []u8) QtC.QNetworkDatagram {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QNetworkDatagram_new2(data_str);
    }


    /// New3 constructs a new QNetworkDatagram object.
    pub fn New3(other: ?*anyopaque) QtC.QNetworkDatagram {
        return qtc.QNetworkDatagram_new3(@ptrCast(other));
    }


    /// New4 constructs a new QNetworkDatagram object.
    pub fn New4(data: []u8, destinationAddress: ?*anyopaque) QtC.QNetworkDatagram {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QNetworkDatagram_new4(data_str, @ptrCast(destinationAddress));
    }


    /// New5 constructs a new QNetworkDatagram object.
    pub fn New5(data: []u8, destinationAddress: ?*anyopaque, port: u16) QtC.QNetworkDatagram {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QNetworkDatagram_new5(data_str, @ptrCast(destinationAddress), port);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkDatagram_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkDatagram_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QNetworkDatagram_Clear(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QNetworkDatagram_IsValid(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QNetworkDatagram_IsNull(@ptrCast(self));
    }

    pub fn InterfaceIndex(self: ?*anyopaque, ) u32 {
        return qtc.QNetworkDatagram_InterfaceIndex(@ptrCast(self));
    }

    pub fn SetInterfaceIndex(self: ?*anyopaque, index: u32) void {
        qtc.QNetworkDatagram_SetInterfaceIndex(@ptrCast(self), index);
    }

    pub fn SenderAddress(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QNetworkDatagram_SenderAddress(@ptrCast(self));
    }

    pub fn DestinationAddress(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QNetworkDatagram_DestinationAddress(@ptrCast(self));
    }

    pub fn SenderPort(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkDatagram_SenderPort(@ptrCast(self));
    }

    pub fn DestinationPort(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkDatagram_DestinationPort(@ptrCast(self));
    }

    pub fn SetSender(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QNetworkDatagram_SetSender(@ptrCast(self), @ptrCast(address));
    }

    pub fn SetDestination(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QNetworkDatagram_SetDestination(@ptrCast(self), @ptrCast(address), port);
    }

    pub fn HopLimit(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkDatagram_HopLimit(@ptrCast(self));
    }

    pub fn SetHopLimit(self: ?*anyopaque, count: i32) void {
        qtc.QNetworkDatagram_SetHopLimit(@ptrCast(self), count);
    }

    pub fn Data(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkDatagram_Data(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkdatagram.Data: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
qtc.QNetworkDatagram_SetData(@ptrCast(self), data_str);
    }

    pub fn MakeReply(self: ?*anyopaque, payload: []u8) QtC.QNetworkDatagram {
        const payload_str = qtc.libqt_string{
    .len = payload.len,
    .data = payload.ptr,
};
return qtc.QNetworkDatagram_MakeReply(@ptrCast(self), payload_str);
    }

    pub fn SetSender2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QNetworkDatagram_SetSender2(@ptrCast(self), @ptrCast(address), port);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkDatagram_Delete(@ptrCast(self));
    }
};
