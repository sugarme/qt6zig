const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsslcertificate.html
pub const qsslcertificate = struct {

    /// New constructs a new QSslCertificate object.
    pub fn New(device: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslCertificate_new(@ptrCast(device));
    }


    /// New2 constructs a new QSslCertificate object.
    pub fn New2() QtC.QSslCertificate {
        return qtc.QSslCertificate_new2();
    }


    /// New3 constructs a new QSslCertificate object.
    pub fn New3(other: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslCertificate_new3(@ptrCast(other));
    }


    /// New4 constructs a new QSslCertificate object.
    pub fn New4(device: ?*anyopaque, format: i32) QtC.QSslCertificate {
        return qtc.QSslCertificate_new4(@ptrCast(device), @intCast(format));
    }


    /// New5 constructs a new QSslCertificate object.
    pub fn New5(data: []u8) QtC.QSslCertificate {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QSslCertificate_new5(data_str);
    }


    /// New6 constructs a new QSslCertificate object.
    pub fn New6(data: []u8, format: i32) QtC.QSslCertificate {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QSslCertificate_new6(data_str, @intCast(format));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCertificate_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCertificate_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslCertificate_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslCertificate_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QSslCertificate_IsNull(@ptrCast(self));
    }

    pub fn IsBlacklisted(self: ?*anyopaque, ) bool {
        return qtc.QSslCertificate_IsBlacklisted(@ptrCast(self));
    }

    pub fn IsSelfSigned(self: ?*anyopaque, ) bool {
        return qtc.QSslCertificate_IsSelfSigned(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSslCertificate_Clear(@ptrCast(self));
    }

    pub fn Version(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_Version(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Version: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SerialNumber(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_SerialNumber(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.SerialNumber: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Digest(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_Digest(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Digest: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn IssuerInfo(self: ?*anyopaque, info: i32) []const u8 {
        return qtc.QSslCertificate_IssuerInfo(@ptrCast(self), @intCast(info));
    }

    pub fn IssuerInfo2(self: ?*anyopaque, attribute: []u8) []const u8 {
        const attribute_str = qtc.libqt_string{
    .len = attribute.len,
    .data = attribute.ptr,
};
return qtc.QSslCertificate_IssuerInfo2(@ptrCast(self), attribute_str);
    }

    pub fn SubjectInfo(self: ?*anyopaque, info: i32) []const u8 {
        return qtc.QSslCertificate_SubjectInfo(@ptrCast(self), @intCast(info));
    }

    pub fn SubjectInfo2(self: ?*anyopaque, attribute: []u8) []const u8 {
        const attribute_str = qtc.libqt_string{
    .len = attribute.len,
    .data = attribute.ptr,
};
return qtc.QSslCertificate_SubjectInfo2(@ptrCast(self), attribute_str);
    }

    pub fn IssuerDisplayName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificate_IssuerDisplayName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.IssuerDisplayName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SubjectDisplayName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificate_SubjectDisplayName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.SubjectDisplayName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SubjectInfoAttributes(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslCertificate_SubjectInfoAttributes(@ptrCast(self));
    }

    pub fn IssuerInfoAttributes(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslCertificate_IssuerInfoAttributes(@ptrCast(self));
    }

    pub fn SubjectAlternativeNames(self: ?*anyopaque, ) QMultiMap<QSsl::AlternativeNameEntryType, QString> {
        return qtc.QSslCertificate_SubjectAlternativeNames(@ptrCast(self));
    }

    pub fn EffectiveDate(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QSslCertificate_EffectiveDate(@ptrCast(self));
    }

    pub fn ExpiryDate(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QSslCertificate_ExpiryDate(@ptrCast(self));
    }

    pub fn PublicKey(self: ?*anyopaque, ) QtC.QSslKey {
        return qtc.QSslCertificate_PublicKey(@ptrCast(self));
    }

    pub fn Extensions(self: ?*anyopaque, ) []const u8 {
        return qtc.QSslCertificate_Extensions(@ptrCast(self));
    }

    pub fn ToPem(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_ToPem(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.ToPem: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToDer(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_ToDer(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.ToDer: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificate_ToText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.ToText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromPath(path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QSslCertificate_FromPath(path_str);
    }

    pub fn FromDevice(device: ?*anyopaque) []const u8 {
        return qtc.QSslCertificate_FromDevice(@ptrCast(device));
    }

    pub fn FromData(data: []u8) []const u8 {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QSslCertificate_FromData(data_str);
    }

    pub fn Verify(certificateChain: []const u8) []const u8 {
        return qtc.QSslCertificate_Verify(@ptrCast(certificateChain));
    }

    pub fn ImportPkcs12(device: ?*anyopaque, key: ?*anyopaque, cert: ?*anyopaque) bool {
        return qtc.QSslCertificate_ImportPkcs12(@ptrCast(device), @ptrCast(key), @ptrCast(cert));
    }

    pub fn Handle(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QSslCertificate_Handle(@ptrCast(self));
    }

    pub fn Digest1(self: ?*anyopaque, algorithm: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_Digest1(@ptrCast(self), @intCast(algorithm));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Digest1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromPath2(path: []const u8, format: i32) []const u8 {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QSslCertificate_FromPath2(path_str, @intCast(format));
    }

    pub fn FromPath3(path: []const u8, format: i32, syntax: i32) []const u8 {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QSslCertificate_FromPath3(path_str, @intCast(format), @intCast(syntax));
    }

    pub fn FromDevice2(device: ?*anyopaque, format: i32) []const u8 {
        return qtc.QSslCertificate_FromDevice2(@ptrCast(device), @intCast(format));
    }

    pub fn FromData2(data: []u8, format: i32) []const u8 {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QSslCertificate_FromData2(data_str, @intCast(format));
    }

    pub fn Verify2(certificateChain: []const u8, hostName: []const u8) []const u8 {
        const hostName_str = qtc.libqt_string{
    .len = hostName.len,
    .data = hostName.ptr,
};
return qtc.QSslCertificate_Verify2(@ptrCast(certificateChain), hostName_str);
    }

    pub fn ImportPkcs124(device: ?*anyopaque, key: ?*anyopaque, cert: ?*anyopaque, caCertificates: []const u8) bool {
        return qtc.QSslCertificate_ImportPkcs124(@ptrCast(device), @ptrCast(key), @ptrCast(cert), @ptrCast(caCertificates));
    }

    pub fn ImportPkcs125(device: ?*anyopaque, key: ?*anyopaque, cert: ?*anyopaque, caCertificates: []const u8, passPhrase: []u8) bool {
        const passPhrase_str = qtc.libqt_string{
    .len = passPhrase.len,
    .data = passPhrase.ptr,
};
return qtc.QSslCertificate_ImportPkcs125(@ptrCast(device), @ptrCast(key), @ptrCast(cert), @ptrCast(caCertificates), passPhrase_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslCertificate_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sslcertificate.html#types
pub const enums = struct {
    pub const SubjectInfo = enum {
        pub const Organization: i32 = 0;
        pub const CommonName: i32 = 1;
        pub const LocalityName: i32 = 2;
        pub const OrganizationalUnitName: i32 = 3;
        pub const CountryName: i32 = 4;
        pub const StateOrProvinceName: i32 = 5;
        pub const DistinguishedNameQualifier: i32 = 6;
        pub const SerialNumber: i32 = 7;
        pub const EmailAddress: i32 = 8;
    };

    pub const PatternSyntax = enum {
        pub const RegularExpression: i32 = 0;
        pub const Wildcard: i32 = 1;
        pub const FixedString: i32 = 2;
    };

};
