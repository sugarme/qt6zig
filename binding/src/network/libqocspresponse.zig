const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qocspresponse.html
pub const qocspresponse = struct {

    /// New constructs a new QOcspResponse object.
    pub fn New() QtC.QOcspResponse {
        return qtc.QOcspResponse_new();
    }


    /// New2 constructs a new QOcspResponse object.
    pub fn New2(other: ?*anyopaque) QtC.QOcspResponse {
        return qtc.QOcspResponse_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOcspResponse_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn CertificateStatus(self: ?*anyopaque, ) i32 {
        return qtc.QOcspResponse_CertificateStatus(@ptrCast(self));
    }

    pub fn RevocationReason(self: ?*anyopaque, ) i32 {
        return qtc.QOcspResponse_RevocationReason(@ptrCast(self));
    }

    pub fn Responder(self: ?*anyopaque, ) QtC.QSslCertificate {
        return qtc.QOcspResponse_Responder(@ptrCast(self));
    }

    pub fn Subject(self: ?*anyopaque, ) QtC.QSslCertificate {
        return qtc.QOcspResponse_Subject(@ptrCast(self));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOcspResponse_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOcspResponse_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/ocspresponse.html#types
pub const enums = struct {
    pub const QOcspCertificateStatus = enum {
        pub const Good: i32 = 0;
        pub const Revoked: i32 = 1;
        pub const Unknown: i32 = 2;
    };

    pub const QOcspRevocationReason = enum {
        pub const None: i32 = -1;
        pub const Unspecified: i32 = 0;
        pub const KeyCompromise: i32 = 1;
        pub const CACompromise: i32 = 2;
        pub const AffiliationChanged: i32 = 3;
        pub const Superseded: i32 = 4;
        pub const CessationOfOperation: i32 = 5;
        pub const CertificateHold: i32 = 6;
        pub const RemoveFromCRL: i32 = 7;
    };

};
