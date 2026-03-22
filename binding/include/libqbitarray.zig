const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbitarray.html
pub const qbitarray = struct {

    /// New constructs a new QBitArray object.
    pub fn New() QtC.QBitArray {
        return qtc.QBitArray_new();
    }


    /// New2 constructs a new QBitArray object.
    pub fn New2(size: i64) QtC.QBitArray {
        return qtc.QBitArray_new2(size);
    }


    /// New3 constructs a new QBitArray object.
    pub fn New3(other: ?*anyopaque) QtC.QBitArray {
        return qtc.QBitArray_new3(@ptrCast(other));
    }


    /// New4 constructs a new QBitArray object.
    pub fn New4(size: i64, val: bool) QtC.QBitArray {
        return qtc.QBitArray_new4(size, val);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitArray_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitArray_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QBitArray_Size(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i64 {
        return qtc.QBitArray_Count(@ptrCast(self));
    }

    pub fn Count2(self: ?*anyopaque, on: bool) i64 {
        return qtc.QBitArray_Count2(@ptrCast(self), on);
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QBitArray_IsEmpty(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QBitArray_IsNull(@ptrCast(self));
    }

    pub fn Resize(self: ?*anyopaque, size: i64) void {
        qtc.QBitArray_Resize(@ptrCast(self), size);
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QBitArray_Detach(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QBitArray_IsDetached(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QBitArray_Clear(@ptrCast(self));
    }

    pub fn TestBit(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_TestBit(@ptrCast(self), i);
    }

    pub fn SetBit(self: ?*anyopaque, i: i64) void {
        qtc.QBitArray_SetBit(@ptrCast(self), i);
    }

    pub fn SetBit2(self: ?*anyopaque, i: i64, val: bool) void {
        qtc.QBitArray_SetBit2(@ptrCast(self), i, val);
    }

    pub fn ClearBit(self: ?*anyopaque, i: i64) void {
        qtc.QBitArray_ClearBit(@ptrCast(self), i);
    }

    pub fn ToggleBit(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_ToggleBit(@ptrCast(self), i);
    }

    pub fn At(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_At(@ptrCast(self), i);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QBitRef {
        return qtc.QBitArray_OperatorSubscript(@ptrCast(self), i);
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_OperatorSubscript2(@ptrCast(self), i);
    }

    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorBitwiseXorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseXorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Fill(self: ?*anyopaque, aval: bool) bool {
        return qtc.QBitArray_Fill(@ptrCast(self), aval);
    }

    pub fn Fill2(self: ?*anyopaque, val: bool, first: i64, last: i64) void {
        qtc.QBitArray_Fill2(@ptrCast(self), val, first, last);
    }

    pub fn Truncate(self: ?*anyopaque, pos: i64) void {
        qtc.QBitArray_Truncate(@ptrCast(self), pos);
    }

    pub fn Bits(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QBitArray_Bits(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn FromBits(data: []const u8, lenVal: i64) QtC.QBitArray {
        return qtc.QBitArray_FromBits(@ptrCast(data), lenVal);
    }

    pub fn ToUInt32(self: ?*anyopaque, endianness: i32) u32 {
        return qtc.QBitArray_ToUInt32(@ptrCast(self), @intCast(endianness));
    }

    pub fn DataPtr(self: ?*anyopaque, ) QArrayDataPointer<char> {
        return @ptrCast(qtc.QBitArray_DataPtr(@ptrCast(self)));
    }

    pub fn DataPtr2(self: ?*anyopaque, ) QArrayDataPointer<char> {
        return @ptrCast(qtc.QBitArray_DataPtr2(@ptrCast(self)));
    }

    pub fn Fill22(self: ?*anyopaque, aval: bool, asize: i64) bool {
        return qtc.QBitArray_Fill22(@ptrCast(self), aval, asize);
    }

    pub fn ToUInt322(self: ?*anyopaque, endianness: i32, ok: *bool) u32 {
        return qtc.QBitArray_ToUInt322(@ptrCast(self), @intCast(endianness), @ptrCast(ok));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBitArray_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qbitref.html
pub const qbitref = struct {

    /// New constructs a new QBitRef object.
    pub fn New(other: ?*anyopaque) QtC.QBitRef {
        return qtc.QBitRef_new(@ptrCast(other));
    }


    /// New2 constructs a new QBitRef object.
    pub fn New2(param1: ?*anyopaque) QtC.QBitRef {
        return qtc.QBitRef_new2(@ptrCast(param1));
    }


    pub fn Operatorbool(self: ?*anyopaque, ) bool {
        return qtc.QBitRef_Operatorbool(@ptrCast(self));
    }

    pub fn OperatorNot(self: ?*anyopaque, ) bool {
        return qtc.QBitRef_OperatorNot(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QBitRef_OperatorAssign(@ptrCast(self), @ptrCast(val));
    }

    pub fn OperatorAssign2(self: ?*anyopaque, val: bool) void {
        qtc.QBitRef_OperatorAssign2(@ptrCast(self), val);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBitRef_Delete(@ptrCast(self));
    }
};
