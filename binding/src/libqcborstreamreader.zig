const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcborstreamreader.html
pub const qcborstreamreader = struct {

    /// New constructs a new QCborStreamReader object.
    pub fn New() QtC.QCborStreamReader {
        return qtc.QCborStreamReader_new();
    }


    /// New2 constructs a new QCborStreamReader object.
    pub fn New2(data: []const u8, lenVal: i64) QtC.QCborStreamReader {
        return qtc.QCborStreamReader_new2(@ptrCast(data), lenVal);
    }


    /// New3 constructs a new QCborStreamReader object.
    pub fn New3(data: *const u8, lenVal: i64) QtC.QCborStreamReader {
        return qtc.QCborStreamReader_new3(@ptrCast(data), lenVal);
    }


    /// New4 constructs a new QCborStreamReader object.
    pub fn New4(data: []u8) QtC.QCborStreamReader {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QCborStreamReader_new4(data_str);
    }


    /// New5 constructs a new QCborStreamReader object.
    pub fn New5(device: ?*anyopaque) QtC.QCborStreamReader {
        return qtc.QCborStreamReader_new5(@ptrCast(device));
    }


    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QCborStreamReader_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QCborStreamReader_Device(@ptrCast(self));
    }

    pub fn AddData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
qtc.QCborStreamReader_AddData(@ptrCast(self), data_str);
    }

    pub fn AddData2(self: ?*anyopaque, data: []const u8, lenVal: i64) void {
        qtc.QCborStreamReader_AddData2(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn AddData3(self: ?*anyopaque, data: *const u8, lenVal: i64) void {
        qtc.QCborStreamReader_AddData3(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn Reparse(self: ?*anyopaque, ) void {
        qtc.QCborStreamReader_Reparse(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QCborStreamReader_Clear(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QCborStreamReader_Reset(@ptrCast(self));
    }

    pub fn LastError(self: ?*anyopaque, ) QtC.QCborError {
        return qtc.QCborStreamReader_LastError(@ptrCast(self));
    }

    pub fn CurrentOffset(self: ?*anyopaque, ) i64 {
        return qtc.QCborStreamReader_CurrentOffset(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsValid(@ptrCast(self));
    }

    pub fn ContainerDepth(self: ?*anyopaque, ) i32 {
        return qtc.QCborStreamReader_ContainerDepth(@ptrCast(self));
    }

    pub fn ParentContainerType(self: ?*anyopaque, ) u8 {
        return qtc.QCborStreamReader_ParentContainerType(@ptrCast(self));
    }

    pub fn HasNext(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_HasNext(@ptrCast(self));
    }

    pub fn Next(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_Next(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QCborStreamReader_Type(@ptrCast(self));
    }

    pub fn IsUnsignedInteger(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsUnsignedInteger(@ptrCast(self));
    }

    pub fn IsNegativeInteger(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsNegativeInteger(@ptrCast(self));
    }

    pub fn IsInteger(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsInteger(@ptrCast(self));
    }

    pub fn IsByteArray(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsByteArray(@ptrCast(self));
    }

    pub fn IsString(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsString(@ptrCast(self));
    }

    pub fn IsArray(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsArray(@ptrCast(self));
    }

    pub fn IsMap(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsMap(@ptrCast(self));
    }

    pub fn IsTag(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsTag(@ptrCast(self));
    }

    pub fn IsSimpleType(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsSimpleType(@ptrCast(self));
    }

    pub fn IsFloat16(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsFloat16(@ptrCast(self));
    }

    pub fn IsFloat(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsFloat(@ptrCast(self));
    }

    pub fn IsDouble(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsDouble(@ptrCast(self));
    }

    pub fn IsInvalid(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsInvalid(@ptrCast(self));
    }

    pub fn IsSimpleType2(self: ?*anyopaque, st: u8) bool {
        return qtc.QCborStreamReader_IsSimpleType2(@ptrCast(self), @intCast(st));
    }

    pub fn IsFalse(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsFalse(@ptrCast(self));
    }

    pub fn IsTrue(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsTrue(@ptrCast(self));
    }

    pub fn IsBool(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsBool(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsNull(@ptrCast(self));
    }

    pub fn IsUndefined(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsUndefined(@ptrCast(self));
    }

    pub fn IsLengthKnown(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsLengthKnown(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) u64 {
        return qtc.QCborStreamReader_Length(@ptrCast(self));
    }

    pub fn IsContainer(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_IsContainer(@ptrCast(self));
    }

    pub fn EnterContainer(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_EnterContainer(@ptrCast(self));
    }

    pub fn LeaveContainer(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_LeaveContainer(@ptrCast(self));
    }

    pub fn ReadAndAppendToString(self: ?*anyopaque, dst: []const u8) bool {
        const dst_str = qtc.libqt_string{
    .len = dst.len,
    .data = dst.ptr,
};
return qtc.QCborStreamReader_ReadAndAppendToString(@ptrCast(self), dst_str);
    }

    pub fn ReadAndAppendToUtf8String(self: ?*anyopaque, dst: []u8) bool {
        const dst_str = qtc.libqt_string{
    .len = dst.len,
    .data = dst.ptr,
};
return qtc.QCborStreamReader_ReadAndAppendToUtf8String(@ptrCast(self), dst_str);
    }

    pub fn ReadAndAppendToByteArray(self: ?*anyopaque, dst: []u8) bool {
        const dst_str = qtc.libqt_string{
    .len = dst.len,
    .data = dst.ptr,
};
return qtc.QCborStreamReader_ReadAndAppendToByteArray(@ptrCast(self), dst_str);
    }

    pub fn CurrentStringChunkSize(self: ?*anyopaque, ) i64 {
        return qtc.QCborStreamReader_CurrentStringChunkSize(@ptrCast(self));
    }

    pub fn ToBool(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamReader_ToBool(@ptrCast(self));
    }

    pub fn ToTag(self: ?*anyopaque, ) u64 {
        return qtc.QCborStreamReader_ToTag(@ptrCast(self));
    }

    pub fn ToUnsignedInteger(self: ?*anyopaque, ) u64 {
        return qtc.QCborStreamReader_ToUnsignedInteger(@ptrCast(self));
    }

    pub fn ToNegativeInteger(self: ?*anyopaque, ) u64 {
        return qtc.QCborStreamReader_ToNegativeInteger(@ptrCast(self));
    }

    pub fn ToSimpleType(self: ?*anyopaque, ) u8 {
        return qtc.QCborStreamReader_ToSimpleType(@ptrCast(self));
    }

    pub fn ToFloat(self: ?*anyopaque, ) f32 {
        return qtc.QCborStreamReader_ToFloat(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QCborStreamReader_ToDouble(@ptrCast(self));
    }

    pub fn ToInteger(self: ?*anyopaque, ) i64 {
        return qtc.QCborStreamReader_ToInteger(@ptrCast(self));
    }

    pub fn ReadAllString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborStreamReader_ReadAllString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborstreamreader.ReadAllString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ReadAllUtf8String(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborStreamReader_ReadAllUtf8String(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborstreamreader.ReadAllUtf8String: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ReadAllByteArray(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborStreamReader_ReadAllByteArray(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborstreamreader.ReadAllByteArray: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Next1(self: ?*anyopaque, maxRecursion: i32) bool {
        return qtc.QCborStreamReader_Next1(@ptrCast(self), maxRecursion);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborStreamReader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/cborstreamreader.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const UnsignedInteger: u8 = 0;
        pub const NegativeInteger: u8 = 32;
        pub const ByteString: u8 = 64;
        pub const ByteArray: u8 = 64;
        pub const TextString: u8 = 96;
        pub const String: u8 = 96;
        pub const Array: u8 = 128;
        pub const Map: u8 = 160;
        pub const Tag: u8 = 192;
        pub const SimpleType: u8 = 224;
        pub const HalfFloat: u8 = 249;
        pub const Float16: u8 = 249;
        pub const Float: u8 = 250;
        pub const Double: u8 = 251;
        pub const Invalid: u8 = 255;
    };

    pub const StringResultCode = enum {
        pub const EndOfString: i32 = 0;
        pub const Ok: i32 = 1;
        pub const Error: i32 = -1;
    };

};
