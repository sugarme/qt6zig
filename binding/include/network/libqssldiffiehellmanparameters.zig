const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html
pub const qssldiffiehellmanparameters = struct {

    /// New constructs a new QSslDiffieHellmanParameters object.
    pub fn New() QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_new();
    }


    /// New2 constructs a new QSslDiffieHellmanParameters object.
    pub fn New2(other: ?*anyopaque) QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_new2(@ptrCast(other));
    }


    pub fn DefaultParameters() QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_DefaultParameters();
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslDiffieHellmanParameters_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslDiffieHellmanParameters_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn FromEncoded(encoded: []u8) QtC.QSslDiffieHellmanParameters {
        const encoded_str = qtc.libqt_string{
    .len = encoded.len,
    .data = encoded.ptr,
};
return qtc.QSslDiffieHellmanParameters_FromEncoded(encoded_str);
    }

    pub fn FromEncoded2(device: ?*anyopaque) QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_FromEncoded2(@ptrCast(device));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QSslDiffieHellmanParameters_IsEmpty(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSslDiffieHellmanParameters_IsValid(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QSslDiffieHellmanParameters_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslDiffieHellmanParameters_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qssldiffiehellmanparameters.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromEncoded22(encoded: []u8, format: i32) QtC.QSslDiffieHellmanParameters {
        const encoded_str = qtc.libqt_string{
    .len = encoded.len,
    .data = encoded.ptr,
};
return qtc.QSslDiffieHellmanParameters_FromEncoded22(encoded_str, @intCast(format));
    }

    pub fn FromEncoded23(device: ?*anyopaque, format: i32) QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_FromEncoded23(@ptrCast(device), @intCast(format));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslDiffieHellmanParameters_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/ssldiffiehellmanparameters.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const InvalidInputDataError: i32 = 1;
        pub const UnsafeParametersError: i32 = 2;
    };

};
