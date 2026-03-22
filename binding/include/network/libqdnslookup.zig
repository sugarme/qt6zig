const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdnsdomainnamerecord.html
pub const qdnsdomainnamerecord = struct {

    /// New constructs a new QDnsDomainNameRecord object.
    pub fn New() QtC.QDnsDomainNameRecord {
        return qtc.QDnsDomainNameRecord_new();
    }


    /// New2 constructs a new QDnsDomainNameRecord object.
    pub fn New2(other: ?*anyopaque) QtC.QDnsDomainNameRecord {
        return qtc.QDnsDomainNameRecord_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsDomainNameRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsDomainNameRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsDomainNameRecord_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsdomainnamerecord.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TimeToLive(self: ?*anyopaque, ) u32 {
        return qtc.QDnsDomainNameRecord_TimeToLive(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsDomainNameRecord_Value(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsdomainnamerecord.Value: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsDomainNameRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnshostaddressrecord.html
pub const qdnshostaddressrecord = struct {

    /// New constructs a new QDnsHostAddressRecord object.
    pub fn New() QtC.QDnsHostAddressRecord {
        return qtc.QDnsHostAddressRecord_new();
    }


    /// New2 constructs a new QDnsHostAddressRecord object.
    pub fn New2(other: ?*anyopaque) QtC.QDnsHostAddressRecord {
        return qtc.QDnsHostAddressRecord_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsHostAddressRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsHostAddressRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsHostAddressRecord_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnshostaddressrecord.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TimeToLive(self: ?*anyopaque, ) u32 {
        return qtc.QDnsHostAddressRecord_TimeToLive(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QDnsHostAddressRecord_Value(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsHostAddressRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnsmailexchangerecord.html
pub const qdnsmailexchangerecord = struct {

    /// New constructs a new QDnsMailExchangeRecord object.
    pub fn New() QtC.QDnsMailExchangeRecord {
        return qtc.QDnsMailExchangeRecord_new();
    }


    /// New2 constructs a new QDnsMailExchangeRecord object.
    pub fn New2(other: ?*anyopaque) QtC.QDnsMailExchangeRecord {
        return qtc.QDnsMailExchangeRecord_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsMailExchangeRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsMailExchangeRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Exchange(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsMailExchangeRecord_Exchange(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsmailexchangerecord.Exchange: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsMailExchangeRecord_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsmailexchangerecord.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Preference(self: ?*anyopaque, ) u16 {
        return qtc.QDnsMailExchangeRecord_Preference(@ptrCast(self));
    }

    pub fn TimeToLive(self: ?*anyopaque, ) u32 {
        return qtc.QDnsMailExchangeRecord_TimeToLive(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsMailExchangeRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnsservicerecord.html
pub const qdnsservicerecord = struct {

    /// New constructs a new QDnsServiceRecord object.
    pub fn New() QtC.QDnsServiceRecord {
        return qtc.QDnsServiceRecord_new();
    }


    /// New2 constructs a new QDnsServiceRecord object.
    pub fn New2(other: ?*anyopaque) QtC.QDnsServiceRecord {
        return qtc.QDnsServiceRecord_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsServiceRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsServiceRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsServiceRecord_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsservicerecord.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Port(self: ?*anyopaque, ) u16 {
        return qtc.QDnsServiceRecord_Port(@ptrCast(self));
    }

    pub fn Priority(self: ?*anyopaque, ) u16 {
        return qtc.QDnsServiceRecord_Priority(@ptrCast(self));
    }

    pub fn Target(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsServiceRecord_Target(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsservicerecord.Target: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TimeToLive(self: ?*anyopaque, ) u32 {
        return qtc.QDnsServiceRecord_TimeToLive(@ptrCast(self));
    }

    pub fn Weight(self: ?*anyopaque, ) u16 {
        return qtc.QDnsServiceRecord_Weight(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsServiceRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnstextrecord.html
pub const qdnstextrecord = struct {

    /// New constructs a new QDnsTextRecord object.
    pub fn New() QtC.QDnsTextRecord {
        return qtc.QDnsTextRecord_new();
    }


    /// New2 constructs a new QDnsTextRecord object.
    pub fn New2(other: ?*anyopaque) QtC.QDnsTextRecord {
        return qtc.QDnsTextRecord_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsTextRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsTextRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsTextRecord_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnstextrecord.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TimeToLive(self: ?*anyopaque, ) u32 {
        return qtc.QDnsTextRecord_TimeToLive(@ptrCast(self));
    }

    pub fn Values(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsTextRecord_Values(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsTextRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnstlsassociationrecord.html
pub const qdnstlsassociationrecord = struct {

    /// New constructs a new QDnsTlsAssociationRecord object.
    pub fn New() QtC.QDnsTlsAssociationRecord {
        return qtc.QDnsTlsAssociationRecord_new();
    }


    /// New2 constructs a new QDnsTlsAssociationRecord object.
    pub fn New2(other: ?*anyopaque) QtC.QDnsTlsAssociationRecord {
        return qtc.QDnsTlsAssociationRecord_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsTlsAssociationRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsTlsAssociationRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsTlsAssociationRecord_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnstlsassociationrecord.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TimeToLive(self: ?*anyopaque, ) u32 {
        return qtc.QDnsTlsAssociationRecord_TimeToLive(@ptrCast(self));
    }

    pub fn Usage(self: ?*anyopaque, ) u8 {
        return qtc.QDnsTlsAssociationRecord_Usage(@ptrCast(self));
    }

    pub fn Selector(self: ?*anyopaque, ) u8 {
        return qtc.QDnsTlsAssociationRecord_Selector(@ptrCast(self));
    }

    pub fn MatchType(self: ?*anyopaque, ) u8 {
        return qtc.QDnsTlsAssociationRecord_MatchType(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDnsTlsAssociationRecord_Value(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdnstlsassociationrecord.Value: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsTlsAssociationRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnslookup.html
pub const qdnslookup = struct {

    /// New constructs a new QDnsLookup object.
    pub fn New() QtC.QDnsLookup {
        return qtc.QDnsLookup_new();
    }


    /// New2 constructs a new QDnsLookup object.
    pub fn New2(typeVal: i32, name: []const u8) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new2(@intCast(typeVal), name_str);
    }


    /// New3 constructs a new QDnsLookup object.
    pub fn New3(typeVal: i32, name: []const u8, nameserver: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new3(@intCast(typeVal), name_str, @ptrCast(nameserver));
    }


    /// New4 constructs a new QDnsLookup object.
    pub fn New4(typeVal: i32, name: []const u8, nameserver: ?*anyopaque, port: u16) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new4(@intCast(typeVal), name_str, @ptrCast(nameserver), port);
    }


    /// New5 constructs a new QDnsLookup object.
    pub fn New5(typeVal: i32, name: []const u8, protocol: u8, nameserver: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new5(@intCast(typeVal), name_str, @intCast(protocol), @ptrCast(nameserver));
    }


    /// New6 constructs a new QDnsLookup object.
    pub fn New6(parent: ?*anyopaque) QtC.QDnsLookup {
        return qtc.QDnsLookup_new6(@ptrCast(parent));
    }


    /// New7 constructs a new QDnsLookup object.
    pub fn New7(typeVal: i32, name: []const u8, parent: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new7(@intCast(typeVal), name_str, @ptrCast(parent));
    }


    /// New8 constructs a new QDnsLookup object.
    pub fn New8(typeVal: i32, name: []const u8, nameserver: ?*anyopaque, parent: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new8(@intCast(typeVal), name_str, @ptrCast(nameserver), @ptrCast(parent));
    }


    /// New9 constructs a new QDnsLookup object.
    pub fn New9(typeVal: i32, name: []const u8, nameserver: ?*anyopaque, port: u16, parent: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new9(@intCast(typeVal), name_str, @ptrCast(nameserver), port, @ptrCast(parent));
    }


    /// New10 constructs a new QDnsLookup object.
    pub fn New10(typeVal: i32, name: []const u8, protocol: u8, nameserver: ?*anyopaque, port: u16) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new10(@intCast(typeVal), name_str, @intCast(protocol), @ptrCast(nameserver), port);
    }


    /// New11 constructs a new QDnsLookup object.
    pub fn New11(typeVal: i32, name: []const u8, protocol: u8, nameserver: ?*anyopaque, port: u16, parent: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDnsLookup_new11(@intCast(typeVal), name_str, @intCast(protocol), @ptrCast(nameserver), port, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsLookup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsAuthenticData(self: ?*anyopaque, ) bool {
        return qtc.QDnsLookup_IsAuthenticData(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QDnsLookup_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsLookup_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsFinished(self: ?*anyopaque, ) bool {
        return qtc.QDnsLookup_IsFinished(@ptrCast(self));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsLookup_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDnsLookup_SetName(@ptrCast(self), name_str);
    }

    pub fn BindableName(self: ?*anyopaque, ) QBindable<QString> {
        return qtc.QDnsLookup_BindableName(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QDnsLookup_Type(@ptrCast(self));
    }

    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QDnsLookup_SetType(@ptrCast(self), @intCast(typeVal));
    }

    pub fn BindableType(self: ?*anyopaque, ) QBindable<Type> {
        return qtc.QDnsLookup_BindableType(@ptrCast(self));
    }

    pub fn Nameserver(self: ?*anyopaque, ) QtC.QHostAddress {
        return qtc.QDnsLookup_Nameserver(@ptrCast(self));
    }

    pub fn SetNameserver(self: ?*anyopaque, nameserver: ?*anyopaque) void {
        qtc.QDnsLookup_SetNameserver(@ptrCast(self), @ptrCast(nameserver));
    }

    pub fn BindableNameserver(self: ?*anyopaque, ) QBindable<QHostAddress> {
        return qtc.QDnsLookup_BindableNameserver(@ptrCast(self));
    }

    pub fn NameserverPort(self: ?*anyopaque, ) u16 {
        return qtc.QDnsLookup_NameserverPort(@ptrCast(self));
    }

    pub fn SetNameserverPort(self: ?*anyopaque, port: u16) void {
        qtc.QDnsLookup_SetNameserverPort(@ptrCast(self), port);
    }

    pub fn BindableNameserverPort(self: ?*anyopaque, ) QBindable<quint16> {
        return qtc.QDnsLookup_BindableNameserverPort(@ptrCast(self));
    }

    pub fn NameserverProtocol(self: ?*anyopaque, ) u8 {
        return qtc.QDnsLookup_NameserverProtocol(@ptrCast(self));
    }

    pub fn SetNameserverProtocol(self: ?*anyopaque, protocol: u8) void {
        qtc.QDnsLookup_SetNameserverProtocol(@ptrCast(self), @intCast(protocol));
    }

    pub fn BindableNameserverProtocol(self: ?*anyopaque, ) QBindable<Protocol> {
        return qtc.QDnsLookup_BindableNameserverProtocol(@ptrCast(self));
    }

    pub fn SetNameserver2(self: ?*anyopaque, protocol: u8, nameserver: ?*anyopaque) void {
        qtc.QDnsLookup_SetNameserver2(@ptrCast(self), @intCast(protocol), @ptrCast(nameserver));
    }

    pub fn SetNameserver3(self: ?*anyopaque, nameserver: ?*anyopaque, port: u16) void {
        qtc.QDnsLookup_SetNameserver3(@ptrCast(self), @ptrCast(nameserver), port);
    }

    pub fn CanonicalNameRecords(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsLookup_CanonicalNameRecords(@ptrCast(self));
    }

    pub fn HostAddressRecords(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsLookup_HostAddressRecords(@ptrCast(self));
    }

    pub fn MailExchangeRecords(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsLookup_MailExchangeRecords(@ptrCast(self));
    }

    pub fn NameServerRecords(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsLookup_NameServerRecords(@ptrCast(self));
    }

    pub fn PointerRecords(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsLookup_PointerRecords(@ptrCast(self));
    }

    pub fn ServiceRecords(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsLookup_ServiceRecords(@ptrCast(self));
    }

    pub fn TextRecords(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsLookup_TextRecords(@ptrCast(self));
    }

    pub fn TlsAssociationRecords(self: ?*anyopaque, ) []const u8 {
        return qtc.QDnsLookup_TlsAssociationRecords(@ptrCast(self));
    }

    pub fn SetSslConfiguration(self: ?*anyopaque, sslConfiguration: ?*anyopaque) void {
        qtc.QDnsLookup_SetSslConfiguration(@ptrCast(self), @ptrCast(sslConfiguration));
    }

    pub fn SslConfiguration(self: ?*anyopaque, ) QtC.QSslConfiguration {
        return qtc.QDnsLookup_SslConfiguration(@ptrCast(self));
    }

    pub fn IsProtocolSupported(protocol: u8) bool {
        return qtc.QDnsLookup_IsProtocolSupported(@intCast(protocol));
    }

    pub fn DefaultPortForProtocol(protocol: u8) u16 {
        return qtc.QDnsLookup_DefaultPortForProtocol(@intCast(protocol));
    }

    pub fn Abort(self: ?*anyopaque, ) void {
        qtc.QDnsLookup_Abort(@ptrCast(self));
    }

    pub fn Lookup(self: ?*anyopaque, ) void {
        qtc.QDnsLookup_Lookup(@ptrCast(self));
    }

    pub fn Finished(self: ?*anyopaque, ) void {
        qtc.QDnsLookup_Finished(@ptrCast(self));
    }

    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn NameChanged(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDnsLookup_NameChanged(@ptrCast(self), name_str);
    }

    pub fn OnNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TypeChanged(self: ?*anyopaque, typeVal: i32) void {
        qtc.QDnsLookup_TypeChanged(@ptrCast(self), @intCast(typeVal));
    }

    pub fn OnTypeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_TypeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn NameserverChanged(self: ?*anyopaque, nameserver: ?*anyopaque) void {
        qtc.QDnsLookup_NameserverChanged(@ptrCast(self), @ptrCast(nameserver));
    }

    pub fn OnNameserverChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn NameserverPortChanged(self: ?*anyopaque, port: u16) void {
        qtc.QDnsLookup_NameserverPortChanged(@ptrCast(self), port);
    }

    pub fn OnNameserverPortChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverPortChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn NameserverProtocolChanged(self: ?*anyopaque, protocol: u8) void {
        qtc.QDnsLookup_NameserverProtocolChanged(@ptrCast(self), @intCast(protocol));
    }

    pub fn OnNameserverProtocolChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, u8) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverProtocolChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsLookup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsLookup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNameserver32(self: ?*anyopaque, protocol: u8, nameserver: ?*anyopaque, port: u16) void {
        qtc.QDnsLookup_SetNameserver32(@ptrCast(self), @intCast(protocol), @ptrCast(nameserver), port);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsLookup_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/dnslookup.html#types
pub const enums = struct {
    pub const CertificateUsage = enum {
        pub const CertificateAuthorityConstrait: u8 = 0;
        pub const ServiceCertificateConstraint: u8 = 1;
        pub const TrustAnchorAssertion: u8 = 2;
        pub const DomainIssuedCertificate: u8 = 3;
        pub const PrivateUse: u8 = 255;
        pub const PKIX_TA: u8 = 0;
        pub const PKIX_EE: u8 = 1;
        pub const DANE_TA: u8 = 2;
        pub const DANE_EE: u8 = 3;
        pub const PrivCert: u8 = 255;
    };

    pub const Selector = enum {
        pub const FullCertificate: u8 = 0;
        pub const SubjectPublicKeyInfo: u8 = 1;
        pub const PrivateUse: u8 = 255;
        pub const Cert: u8 = 0;
        pub const SPKI: u8 = 1;
        pub const PrivSel: u8 = 255;
    };

    pub const MatchingType = enum {
        pub const Exact: u8 = 0;
        pub const Sha256: u8 = 1;
        pub const Sha512: u8 = 2;
        pub const PrivateUse: u8 = 255;
        pub const PrivMatch: u8 = 255;
    };

    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const ResolverError: i32 = 1;
        pub const OperationCancelledError: i32 = 2;
        pub const InvalidRequestError: i32 = 3;
        pub const InvalidReplyError: i32 = 4;
        pub const ServerFailureError: i32 = 5;
        pub const ServerRefusedError: i32 = 6;
        pub const NotFoundError: i32 = 7;
        pub const TimeoutError: i32 = 8;
    };

    pub const Type = enum {
        pub const A: i32 = 1;
        pub const AAAA: i32 = 28;
        pub const ANY: i32 = 255;
        pub const CNAME: i32 = 5;
        pub const MX: i32 = 15;
        pub const NS: i32 = 2;
        pub const PTR: i32 = 12;
        pub const SRV: i32 = 33;
        pub const TLSA: i32 = 52;
        pub const TXT: i32 = 16;
    };

    pub const Protocol = enum {
        pub const Standard: u8 = 0;
        pub const DnsOverTls: u8 = 1;
    };

};
