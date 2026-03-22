const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/_guid.html
pub const _guid = struct {

    /// New constructs a new _GUID object.
    pub fn New() QtC._GUID {
        return qtc._GUID_new();
    }


    /// New2 constructs a new _GUID object.
    pub fn New2(param1: ?*anyopaque) QtC._GUID {
        return qtc._GUID_new2(@ptrCast(param1));
    }


    pub fn Data1(self: ?*anyopaque, ) unsigned long {
        return qtc._GUID_Data1(@ptrCast(self));
    }

    pub fn SetData1(self: ?*anyopaque, Data1: unsigned long) void {
        qtc._GUID_SetData1(@ptrCast(self), Data1);
    }

    pub fn Data2(self: ?*anyopaque, ) u16 {
        return qtc._GUID_Data2(@ptrCast(self));
    }

    pub fn SetData2(self: ?*anyopaque, Data2: u16) void {
        qtc._GUID_SetData2(@ptrCast(self), Data2);
    }

    pub fn Data3(self: ?*anyopaque, ) u16 {
        return qtc._GUID_Data3(@ptrCast(self));
    }

    pub fn SetData3(self: ?*anyopaque, Data3: u16) void {
        qtc._GUID_SetData3(@ptrCast(self), Data3);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc._GUID_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/quuid.html
pub const quuid = struct {

    /// New constructs a new QUuid object.
    pub fn New(other: ?*anyopaque) QtC.QUuid {
        return qtc.QUuid_new(@ptrCast(other));
    }


    /// New2 constructs a new QUuid object.
    pub fn New2(other: ?*anyopaque) QtC.QUuid {
        return qtc.QUuid_new2(@ptrCast(other));
    }


    /// New3 constructs a new QUuid object.
    pub fn New3() QtC.QUuid {
        return qtc.QUuid_new3();
    }


    /// New4 constructs a new QUuid object.
    pub fn New4(l: u32, w1: u16, w2: u16, b1: u8, b2: u8, b3: u8, b4: u8, b5: u8, b6: u8, b7: u8, b8: u8) QtC.QUuid {
        return qtc.QUuid_new4(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
    }


    /// New5 constructs a new QUuid object.
    pub fn New5(id128: QtC.QUuid__Id128Bytes) QtC.QUuid {
        return qtc.QUuid_new5(@ptrCast(id128));
    }


    /// New6 constructs a new QUuid object.
    pub fn New6(guid: ?*anyopaque) QtC.QUuid {
        return qtc.QUuid_new6(@ptrCast(guid));
    }


    /// New7 constructs a new QUuid object.
    pub fn New7(param1: ?*anyopaque) QtC.QUuid {
        return qtc.QUuid_new7(@ptrCast(param1));
    }


    /// New8 constructs a new QUuid object.
    pub fn New8(id128: QtC.QUuid__Id128Bytes, order: i32) QtC.QUuid {
        return qtc.QUuid_new8(@ptrCast(id128), @intCast(order));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUuid_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUuid_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUuid_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("quuid.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToByteArray(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid.ToByteArray: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToBytes(self: ?*anyopaque, ) QtC.QUuid__Id128Bytes {
        return qtc.QUuid_ToBytes(@ptrCast(self));
    }

    pub fn ToRfc4122(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QUuid_ToRfc4122(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid.ToRfc4122: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromBytes(bytes: ?*anyopaque) QtC.QUuid {
        return qtc.QUuid_FromBytes(@ptrCast(bytes));
    }

    pub fn FromRfc4122(param1: []const u8) QtC.QUuid {
        return qtc.QUuid_FromRfc4122(@ptrCast(param1));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QUuid_IsNull(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, guid: ?*anyopaque) void {
        qtc.QUuid_OperatorAssign(@ptrCast(self), @ptrCast(guid));
    }

    pub fn Operator_GUID(self: ?*anyopaque, ) QtC._GUID {
        return qtc.QUuid_Operator_GUID(@ptrCast(self));
    }

    pub fn CreateUuid() QtC.QUuid {
        return qtc.QUuid_CreateUuid();
    }

    pub fn CreateUuidV5(ns: QtC.QUuid, baseData: []const u8) QtC.QUuid {
        return qtc.QUuid_CreateUuidV5(@ptrCast(ns), @ptrCast(baseData));
    }

    pub fn CreateUuidV3(ns: QtC.QUuid, baseData: []const u8) QtC.QUuid {
        return qtc.QUuid_CreateUuidV3(@ptrCast(ns), @ptrCast(baseData));
    }

    pub fn Variant(self: ?*anyopaque, ) i32 {
        return qtc.QUuid_Variant(@ptrCast(self));
    }

    pub fn Version(self: ?*anyopaque, ) i32 {
        return qtc.QUuid_Version(@ptrCast(self));
    }

    pub fn Data1(self: ?*anyopaque, ) u32 {
        return qtc.QUuid_Data1(@ptrCast(self));
    }

    pub fn SetData1(self: ?*anyopaque, data1: u32) void {
        qtc.QUuid_SetData1(@ptrCast(self), data1);
    }

    pub fn Data2(self: ?*anyopaque, ) u16 {
        return qtc.QUuid_Data2(@ptrCast(self));
    }

    pub fn SetData2(self: ?*anyopaque, data2: u16) void {
        qtc.QUuid_SetData2(@ptrCast(self), data2);
    }

    pub fn Data3(self: ?*anyopaque, ) u16 {
        return qtc.QUuid_Data3(@ptrCast(self));
    }

    pub fn SetData3(self: ?*anyopaque, data3: u16) void {
        qtc.QUuid_SetData3(@ptrCast(self), data3);
    }

    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QUuid_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ToString1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUuid_ToString1(@ptrCast(self), @intCast(mode));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("quuid.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToByteArray1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray1(@ptrCast(self), @intCast(mode));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid.ToByteArray1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToBytes1(self: ?*anyopaque, order: i32) QtC.QUuid__Id128Bytes {
        return qtc.QUuid_ToBytes1(@ptrCast(self), @intCast(order));
    }

    pub fn FromBytes2(bytes: ?*anyopaque, order: i32) QtC.QUuid {
        return qtc.QUuid_FromBytes2(@ptrCast(bytes), @intCast(order));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUuid_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/quuid-id128bytes.html
pub const quuid__id128bytes = struct {

    /// New constructs a new QUuid::Id128Bytes object.
    pub fn New() QtC.QUuid__Id128Bytes {
        return qtc.QUuid__Id128Bytes_new();
    }


    /// New2 constructs a new QUuid::Id128Bytes object.
    pub fn New2(param1: ?*anyopaque) QtC.QUuid__Id128Bytes {
        return qtc.QUuid__Id128Bytes_new2(@ptrCast(param1));
    }


    pub fn OperatorQByteArrayView(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUuid__Id128Bytes_OperatorQByteArrayView(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("quuid::id128bytes.OperatorQByteArrayView: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUuid__Id128Bytes_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/uuid.html#types
pub const enums = struct {
    pub const Variant = enum {
        pub const VarUnknown: i32 = -1;
        pub const NCS: i32 = 0;
        pub const DCE: i32 = 2;
        pub const Microsoft: i32 = 6;
        pub const Reserved: i32 = 7;
    };

    pub const Version = enum {
        pub const VerUnknown: i32 = -1;
        pub const Time: i32 = 1;
        pub const EmbeddedPOSIX: i32 = 2;
        pub const Md5: i32 = 3;
        pub const Name: i32 = 3;
        pub const Random: i32 = 4;
        pub const Sha1: i32 = 5;
    };

    pub const StringFormat = enum {
        pub const WithBraces: i32 = 0;
        pub const WithoutBraces: i32 = 1;
        pub const Id128: i32 = 3;
    };

};
