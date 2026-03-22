const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsslcertificateextension.html
pub const qsslcertificateextension = struct {

    /// New constructs a new QSslCertificateExtension object.
    pub fn New() QtC.QSslCertificateExtension {
        return qtc.QSslCertificateExtension_new();
    }


    /// New2 constructs a new QSslCertificateExtension object.
    pub fn New2(other: ?*anyopaque) QtC.QSslCertificateExtension {
        return qtc.QSslCertificateExtension_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCertificateExtension_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCertificateExtension_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Oid(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificateExtension_Oid(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificateextension.Oid: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificateExtension_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificateextension.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Value(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSslCertificateExtension_Value(@ptrCast(self));
    }

    pub fn IsCritical(self: ?*anyopaque, ) bool {
        return qtc.QSslCertificateExtension_IsCritical(@ptrCast(self));
    }

    pub fn IsSupported(self: ?*anyopaque, ) bool {
        return qtc.QSslCertificateExtension_IsSupported(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslCertificateExtension_Delete(@ptrCast(self));
    }
};
