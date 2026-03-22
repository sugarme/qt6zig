const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcameraformat.html
pub const qcameraformat = struct {

    /// New constructs a new QCameraFormat object.
    pub fn New() QtC.QCameraFormat {
        return qtc.QCameraFormat_new();
    }


    /// New2 constructs a new QCameraFormat object.
    pub fn New2(other: ?*anyopaque) QtC.QCameraFormat {
        return qtc.QCameraFormat_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCameraFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn PixelFormat(self: ?*anyopaque, ) i32 {
        return qtc.QCameraFormat_PixelFormat(@ptrCast(self));
    }

    pub fn Resolution(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCameraFormat_Resolution(@ptrCast(self));
    }

    pub fn MinFrameRate(self: ?*anyopaque, ) f32 {
        return qtc.QCameraFormat_MinFrameRate(@ptrCast(self));
    }

    pub fn MaxFrameRate(self: ?*anyopaque, ) f32 {
        return qtc.QCameraFormat_MaxFrameRate(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QCameraFormat_IsNull(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCameraFormat_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCameraFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCameraFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcameradevice.html
pub const qcameradevice = struct {

    /// New constructs a new QCameraDevice object.
    pub fn New() QtC.QCameraDevice {
        return qtc.QCameraDevice_new();
    }


    /// New2 constructs a new QCameraDevice object.
    pub fn New2(other: ?*anyopaque) QtC.QCameraDevice {
        return qtc.QCameraDevice_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCameraDevice_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCameraDevice_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCameraDevice_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QCameraDevice_IsNull(@ptrCast(self));
    }

    pub fn Id(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCameraDevice_Id(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcameradevice.Id: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCameraDevice_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcameradevice.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsDefault(self: ?*anyopaque, ) bool {
        return qtc.QCameraDevice_IsDefault(@ptrCast(self));
    }

    pub fn Position(self: ?*anyopaque, ) i32 {
        return qtc.QCameraDevice_Position(@ptrCast(self));
    }

    pub fn PhotoResolutions(self: ?*anyopaque, ) []const u8 {
        return qtc.QCameraDevice_PhotoResolutions(@ptrCast(self));
    }

    pub fn VideoFormats(self: ?*anyopaque, ) []const u8 {
        return qtc.QCameraDevice_VideoFormats(@ptrCast(self));
    }

    pub fn CorrectionAngle(self: ?*anyopaque, ) i32 {
        return qtc.QCameraDevice_CorrectionAngle(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCameraDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/cameradevice.html#types
pub const enums = struct {
    pub const Position = enum {
        pub const UnspecifiedPosition: i32 = 0;
        pub const BackFace: i32 = 1;
        pub const FrontFace: i32 = 2;
    };

};
