const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkaddressentry.html
pub const qnetworkaddressentry = struct {

    /// New constructs a new QNetworkAddressEntry object.
    pub fn New() QtC.QNetworkAddressEntry {
        return qtc.QNetworkAddressEntry_new();
    }


    /// New2 constructs a new QNetworkAddressEntry object.
    pub fn New2(other: ?*anyopaque) QtC.QNetworkAddressEntry {
        return qtc.QNetworkAddressEntry_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkAddressEntry_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkAddressEntry_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn DnsEligibility(self: ?*anyopaque, ) i8 {
        return qtc.QNetworkAddressEntry_DnsEligibility(@ptrCast(self));
    }

    pub fn SetDnsEligibility(self: ?*anyopaque, status: i8) void {
        qtc.QNetworkAddressEntry_SetDnsEligibility(@ptrCast(self), @intCast(status));
    }

    pub fn Ip(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QNetworkAddressEntry_Ip(@ptrCast(self));
    }

    pub fn SetIp(self: ?*anyopaque, newIp: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_SetIp(@ptrCast(self), @ptrCast(newIp));
    }

    pub fn Netmask(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QNetworkAddressEntry_Netmask(@ptrCast(self));
    }

    pub fn SetNetmask(self: ?*anyopaque, newNetmask: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_SetNetmask(@ptrCast(self), @ptrCast(newNetmask));
    }

    pub fn PrefixLength(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkAddressEntry_PrefixLength(@ptrCast(self));
    }

    pub fn SetPrefixLength(self: ?*anyopaque, length: i32) void {
        qtc.QNetworkAddressEntry_SetPrefixLength(@ptrCast(self), length);
    }

    pub fn Broadcast(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QNetworkAddressEntry_Broadcast(@ptrCast(self));
    }

    pub fn SetBroadcast(self: ?*anyopaque, newBroadcast: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_SetBroadcast(@ptrCast(self), @ptrCast(newBroadcast));
    }

    pub fn IsLifetimeKnown(self: ?*anyopaque, ) bool {
        return qtc.QNetworkAddressEntry_IsLifetimeKnown(@ptrCast(self));
    }

    pub fn PreferredLifetime(self: ?*anyopaque, ) QtC.QDeadlineTimer {
        return qtc.QNetworkAddressEntry_PreferredLifetime(@ptrCast(self));
    }

    pub fn ValidityLifetime(self: ?*anyopaque, ) QtC.QDeadlineTimer {
        return qtc.QNetworkAddressEntry_ValidityLifetime(@ptrCast(self));
    }

    pub fn SetAddressLifetime(self: ?*anyopaque, preferred: QtC.QDeadlineTimer, validity: QtC.QDeadlineTimer) void {
        qtc.QNetworkAddressEntry_SetAddressLifetime(@ptrCast(self), @ptrCast(preferred), @ptrCast(validity));
    }

    pub fn ClearAddressLifetime(self: ?*anyopaque, ) void {
        qtc.QNetworkAddressEntry_ClearAddressLifetime(@ptrCast(self));
    }

    pub fn IsPermanent(self: ?*anyopaque, ) bool {
        return qtc.QNetworkAddressEntry_IsPermanent(@ptrCast(self));
    }

    pub fn IsTemporary(self: ?*anyopaque, ) bool {
        return qtc.QNetworkAddressEntry_IsTemporary(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkinterface.html
pub const qnetworkinterface = struct {

    /// New constructs a new QNetworkInterface object.
    pub fn New() QtC.QNetworkInterface {
        return qtc.QNetworkInterface_new();
    }


    /// New2 constructs a new QNetworkInterface object.
    pub fn New2(other: ?*anyopaque) QtC.QNetworkInterface {
        return qtc.QNetworkInterface_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkInterface_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkInterface_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QNetworkInterface_IsValid(@ptrCast(self));
    }

    pub fn Index(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkInterface_Index(@ptrCast(self));
    }

    pub fn MaximumTransmissionUnit(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkInterface_MaximumTransmissionUnit(@ptrCast(self));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInterface_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HumanReadableName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInterface_HumanReadableName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.HumanReadableName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkInterface_Flags(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkInterface_Type(@ptrCast(self));
    }

    pub fn HardwareAddress(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInterface_HardwareAddress(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.HardwareAddress: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddressEntries(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkInterface_AddressEntries(@ptrCast(self));
    }

    pub fn InterfaceIndexFromName(name: []const u8) i32 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QNetworkInterface_InterfaceIndexFromName(name_str);
    }

    pub fn InterfaceFromName(name: []const u8) QtC.QNetworkInterface {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QNetworkInterface_InterfaceFromName(name_str);
    }

    pub fn InterfaceFromIndex(index: i32) QtC.QNetworkInterface {
        return qtc.QNetworkInterface_InterfaceFromIndex(index);
    }

    pub fn InterfaceNameFromIndex(index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInterface_InterfaceNameFromIndex(index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.InterfaceNameFromIndex: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AllInterfaces() []const u8 {
        return qtc.QNetworkInterface_AllInterfaces();
    }

    pub fn AllAddresses() []const u8 {
        return qtc.QNetworkInterface_AllAddresses();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/networkinterface.html#types
pub const enums = struct {
    pub const DnsEligibilityStatus = enum {
        pub const DnsEligibilityUnknown: i8 = -1;
        pub const DnsIneligible: i8 = 0;
        pub const DnsEligible: i8 = 1;
    };

    pub const InterfaceFlag = enum {
        pub const IsUp: i32 = 1;
        pub const IsRunning: i32 = 2;
        pub const CanBroadcast: i32 = 4;
        pub const IsLoopBack: i32 = 8;
        pub const IsPointToPoint: i32 = 16;
        pub const CanMulticast: i32 = 32;
    };

    pub const InterfaceType = enum {
        pub const Loopback: i32 = 1;
        pub const Virtual: i32 = 2;
        pub const Ethernet: i32 = 3;
        pub const Slip: i32 = 4;
        pub const CanBus: i32 = 5;
        pub const Ppp: i32 = 6;
        pub const Fddi: i32 = 7;
        pub const Wifi: i32 = 8;
        pub const Ieee80211: i32 = 8;
        pub const Phonet: i32 = 9;
        pub const Ieee802154: i32 = 10;
        pub const SixLoWPAN: i32 = 11;
        pub const Ieee80216: i32 = 12;
        pub const Ieee1394: i32 = 13;
        pub const Unknown: i32 = 0;
    };

};
