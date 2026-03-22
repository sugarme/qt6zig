const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdatastream.html
pub const qdatastream = struct {

    /// New constructs a new QDataStream object.
    pub fn New() QtC.QDataStream {
        return qtc.QDataStream_new();
    }


    /// New2 constructs a new QDataStream object.
    pub fn New2(param1: ?*anyopaque) QtC.QDataStream {
        return qtc.QDataStream_new2(@ptrCast(param1));
    }


    /// New3 constructs a new QDataStream object.
    pub fn New3(param1: []u8, flags: i32) QtC.QDataStream {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QDataStream_new3(param1_str, @intCast(flags));
    }


    /// New4 constructs a new QDataStream object.
    pub fn New4(param1: []u8) QtC.QDataStream {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QDataStream_new4(param1_str);
    }


    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QDataStream_Device(@ptrCast(self));
    }

    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QDataStream_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QDataStream_AtEnd(@ptrCast(self));
    }

    pub fn Status(self: ?*anyopaque, ) i32 {
        return qtc.QDataStream_Status(@ptrCast(self));
    }

    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.QDataStream_SetStatus(@ptrCast(self), @intCast(status));
    }

    pub fn ResetStatus(self: ?*anyopaque, ) void {
        qtc.QDataStream_ResetStatus(@ptrCast(self));
    }

    pub fn FloatingPointPrecision(self: ?*anyopaque, ) i32 {
        return qtc.QDataStream_FloatingPointPrecision(@ptrCast(self));
    }

    pub fn SetFloatingPointPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QDataStream_SetFloatingPointPrecision(@ptrCast(self), @intCast(precision));
    }

    pub fn ByteOrder(self: ?*anyopaque, ) i32 {
        return qtc.QDataStream_ByteOrder(@ptrCast(self));
    }

    pub fn SetByteOrder(self: ?*anyopaque, byteOrder: i32) void {
        qtc.QDataStream_SetByteOrder(@ptrCast(self), @intCast(byteOrder));
    }

    pub fn Version(self: ?*anyopaque, ) i32 {
        return qtc.QDataStream_Version(@ptrCast(self));
    }

    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QDataStream_SetVersion(@ptrCast(self), version);
    }

    pub fn OperatorShiftRight(self: ?*anyopaque, i: *i8) void {
        qtc.QDataStream_OperatorShiftRight(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight2(self: ?*anyopaque, i: *i8) void {
        qtc.QDataStream_OperatorShiftRight2(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight3(self: ?*anyopaque, i: *u8) void {
        qtc.QDataStream_OperatorShiftRight3(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight4(self: ?*anyopaque, i: *i16) void {
        qtc.QDataStream_OperatorShiftRight4(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight5(self: ?*anyopaque, i: *u16) void {
        qtc.QDataStream_OperatorShiftRight5(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight6(self: ?*anyopaque, i: *i32) void {
        qtc.QDataStream_OperatorShiftRight6(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight7(self: ?*anyopaque, i: *u32) void {
        qtc.QDataStream_OperatorShiftRight7(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight8(self: ?*anyopaque, i: *i64) void {
        qtc.QDataStream_OperatorShiftRight8(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight9(self: ?*anyopaque, i: *u64) void {
        qtc.QDataStream_OperatorShiftRight9(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight11(self: ?*anyopaque, i: *bool) void {
        qtc.QDataStream_OperatorShiftRight11(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight12(self: ?*anyopaque, f: *f32) void {
        qtc.QDataStream_OperatorShiftRight12(@ptrCast(self), @ptrCast(f));
    }

    pub fn OperatorShiftRight13(self: ?*anyopaque, f: *f64) void {
        qtc.QDataStream_OperatorShiftRight13(@ptrCast(self), @ptrCast(f));
    }

    pub fn OperatorShiftRight14(self: ?*anyopaque, str: []const u8) void {
        qtc.QDataStream_OperatorShiftRight14(@ptrCast(self), @ptrCast(str));
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, i: i8) void {
        qtc.QDataStream_OperatorShiftLeft(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft2(self: ?*anyopaque, i: i8) void {
        qtc.QDataStream_OperatorShiftLeft2(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft3(self: ?*anyopaque, i: u8) void {
        qtc.QDataStream_OperatorShiftLeft3(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft4(self: ?*anyopaque, i: i16) void {
        qtc.QDataStream_OperatorShiftLeft4(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft5(self: ?*anyopaque, i: u16) void {
        qtc.QDataStream_OperatorShiftLeft5(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft6(self: ?*anyopaque, i: i32) void {
        qtc.QDataStream_OperatorShiftLeft6(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft7(self: ?*anyopaque, i: u32) void {
        qtc.QDataStream_OperatorShiftLeft7(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft8(self: ?*anyopaque, i: i64) void {
        qtc.QDataStream_OperatorShiftLeft8(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft9(self: ?*anyopaque, i: u64) void {
        qtc.QDataStream_OperatorShiftLeft9(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft11(self: ?*anyopaque, f: f32) void {
        qtc.QDataStream_OperatorShiftLeft11(@ptrCast(self), f);
    }

    pub fn OperatorShiftLeft12(self: ?*anyopaque, f: f64) void {
        qtc.QDataStream_OperatorShiftLeft12(@ptrCast(self), f);
    }

    pub fn OperatorShiftLeft13(self: ?*anyopaque, str: []const u8) void {
        qtc.QDataStream_OperatorShiftLeft13(@ptrCast(self), @ptrCast(str));
    }

    pub fn ReadBytes(self: ?*anyopaque, param1: []const u8, lenVal: *u32) QtC.QDataStream {
        return qtc.QDataStream_ReadBytes(@ptrCast(self), @ptrCast(param1), @ptrCast(lenVal));
    }

    pub fn ReadBytes2(self: ?*anyopaque, param1: []const u8, lenVal: *i64) QtC.QDataStream {
        return qtc.QDataStream_ReadBytes2(@ptrCast(self), @ptrCast(param1), @ptrCast(lenVal));
    }

    pub fn ReadRawData(self: ?*anyopaque, param1: []const u8, lenVal: i64) i64 {
        return qtc.QDataStream_ReadRawData(@ptrCast(self), @ptrCast(param1), lenVal);
    }

    pub fn WriteBytes(self: ?*anyopaque, param1: []const u8, lenVal: i64) void {
        qtc.QDataStream_WriteBytes(@ptrCast(self), @ptrCast(param1), lenVal);
    }

    pub fn WriteRawData(self: ?*anyopaque, param1: []const u8, lenVal: i64) i64 {
        return qtc.QDataStream_WriteRawData(@ptrCast(self), @ptrCast(param1), lenVal);
    }

    pub fn SkipRawData(self: ?*anyopaque, lenVal: i64) i64 {
        return qtc.QDataStream_SkipRawData(@ptrCast(self), lenVal);
    }

    pub fn StartTransaction(self: ?*anyopaque, ) void {
        qtc.QDataStream_StartTransaction(@ptrCast(self));
    }

    pub fn CommitTransaction(self: ?*anyopaque, ) bool {
        return qtc.QDataStream_CommitTransaction(@ptrCast(self));
    }

    pub fn RollbackTransaction(self: ?*anyopaque, ) void {
        qtc.QDataStream_RollbackTransaction(@ptrCast(self));
    }

    pub fn AbortTransaction(self: ?*anyopaque, ) void {
        qtc.QDataStream_AbortTransaction(@ptrCast(self));
    }

    pub fn IsDeviceTransactionStarted(self: ?*anyopaque, ) bool {
        return qtc.QDataStream_IsDeviceTransactionStarted(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDataStream_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/datastream.html#types
pub const enums = struct {
    pub const Version = enum {
        pub const Qt_1_0: i32 = 1;
        pub const Qt_2_0: i32 = 2;
        pub const Qt_2_1: i32 = 3;
        pub const Qt_3_0: i32 = 4;
        pub const Qt_3_1: i32 = 5;
        pub const Qt_3_3: i32 = 6;
        pub const Qt_4_0: i32 = 7;
        pub const Qt_4_1: i32 = 7;
        pub const Qt_4_2: i32 = 8;
        pub const Qt_4_3: i32 = 9;
        pub const Qt_4_4: i32 = 10;
        pub const Qt_4_5: i32 = 11;
        pub const Qt_4_6: i32 = 12;
        pub const Qt_4_7: i32 = 12;
        pub const Qt_4_8: i32 = 12;
        pub const Qt_4_9: i32 = 12;
        pub const Qt_5_0: i32 = 13;
        pub const Qt_5_1: i32 = 14;
        pub const Qt_5_2: i32 = 15;
        pub const Qt_5_3: i32 = 15;
        pub const Qt_5_4: i32 = 16;
        pub const Qt_5_5: i32 = 16;
        pub const Qt_5_6: i32 = 17;
        pub const Qt_5_7: i32 = 17;
        pub const Qt_5_8: i32 = 17;
        pub const Qt_5_9: i32 = 17;
        pub const Qt_5_10: i32 = 17;
        pub const Qt_5_11: i32 = 17;
        pub const Qt_5_12: i32 = 18;
        pub const Qt_5_13: i32 = 19;
        pub const Qt_5_14: i32 = 19;
        pub const Qt_5_15: i32 = 19;
        pub const Qt_6_0: i32 = 20;
        pub const Qt_6_1: i32 = 20;
        pub const Qt_6_2: i32 = 20;
        pub const Qt_6_3: i32 = 20;
        pub const Qt_6_4: i32 = 20;
        pub const Qt_6_5: i32 = 20;
        pub const Qt_6_6: i32 = 21;
        pub const Qt_6_7: i32 = 22;
        pub const Qt_6_8: i32 = 22;
        pub const Qt_DefaultCompiledVersion: i32 = 22;
    };

    pub const ByteOrder = enum {
        pub const BigEndian: i32 = 0;
        pub const LittleEndian: i32 = 1;
    };

    pub const Status = enum {
        pub const Ok: i32 = 0;
        pub const ReadPastEnd: i32 = 1;
        pub const ReadCorruptData: i32 = 2;
        pub const WriteFailed: i32 = 3;
        pub const SizeLimitExceeded: i32 = 4;
    };

    pub const FloatingPointPrecision = enum {
        pub const SinglePrecision: i32 = 0;
        pub const DoublePrecision: i32 = 1;
    };

};
