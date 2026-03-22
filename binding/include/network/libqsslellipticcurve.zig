const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsslellipticcurve.html
pub const qsslellipticcurve = struct {

    /// New constructs a new QSslEllipticCurve object.
    pub fn New(other: ?*anyopaque) QtC.QSslEllipticCurve {
        return qtc.QSslEllipticCurve_new(@ptrCast(other));
    }


    /// New2 constructs a new QSslEllipticCurve object.
    pub fn New2(other: ?*anyopaque) QtC.QSslEllipticCurve {
        return qtc.QSslEllipticCurve_new2(@ptrCast(other));
    }


    /// New3 constructs a new QSslEllipticCurve object.
    pub fn New3() QtC.QSslEllipticCurve {
        return qtc.QSslEllipticCurve_new3();
    }


    /// New4 constructs a new QSslEllipticCurve object.
    pub fn New4(param1: ?*anyopaque) QtC.QSslEllipticCurve {
        return qtc.QSslEllipticCurve_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslEllipticCurve_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslEllipticCurve_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn FromShortName(name: []const u8) QtC.QSslEllipticCurve {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSslEllipticCurve_FromShortName(name_str);
    }

    pub fn FromLongName(name: []const u8) QtC.QSslEllipticCurve {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSslEllipticCurve_FromLongName(name_str);
    }

    pub fn ShortName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslEllipticCurve_ShortName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslellipticcurve.ShortName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LongName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslEllipticCurve_LongName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslellipticcurve.LongName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSslEllipticCurve_IsValid(@ptrCast(self));
    }

    pub fn IsTlsNamedCurve(self: ?*anyopaque, ) bool {
        return qtc.QSslEllipticCurve_IsTlsNamedCurve(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslEllipticCurve_Delete(@ptrCast(self));
    }
};
