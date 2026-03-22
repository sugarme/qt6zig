const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbytearray.html
pub const qbytearray = struct {

    /// New constructs a new QByteArray object.
    pub fn New() QtC.QByteArray {
        return qtc.QByteArray_new();
    }


    /// New2 constructs a new QByteArray object.
    pub fn New2(param1: []const u8) QtC.QByteArray {
        return qtc.QByteArray_new2(@ptrCast(param1));
    }


    /// New3 constructs a new QByteArray object.
    pub fn New3(size: i64, c: i8) QtC.QByteArray {
        return qtc.QByteArray_new3(size, c);
    }


    /// New4 constructs a new QByteArray object.
    pub fn New4(size: i64, param2: i32) QtC.QByteArray {
        return qtc.QByteArray_new4(size, @intCast(param2));
    }


    /// New5 constructs a new QByteArray object.
    pub fn New5(v: []const u8) QtC.QByteArray {
        return qtc.QByteArray_new5(@ptrCast(v));
    }


    /// New6 constructs a new QByteArray object.
    pub fn New6(param1: []u8) QtC.QByteArray {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QByteArray_new6(param1_str);
    }


    /// New7 constructs a new QByteArray object.
    pub fn New7(param1: []const u8, size: i64) QtC.QByteArray {
        return qtc.QByteArray_new7(@ptrCast(param1), size);
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: []u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QByteArray_OperatorAssign(@ptrCast(self), param1_str);
    }

    pub fn OperatorAssign2(self: ?*anyopaque, str: []const u8) void {
        qtc.QByteArray_OperatorAssign2(@ptrCast(self), @ptrCast(str));
    }

    pub fn Swap(self: ?*anyopaque, other: []u8) void {
        const other_str = qtc.libqt_string{
    .len = other.len,
    .data = other.ptr,
};
qtc.QByteArray_Swap(@ptrCast(self), other_str);
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QByteArray_IsEmpty(@ptrCast(self));
    }

    pub fn Resize(self: ?*anyopaque, size: i64) void {
        qtc.QByteArray_Resize(@ptrCast(self), size);
    }

    pub fn Resize2(self: ?*anyopaque, size: i64, c: i8) void {
        qtc.QByteArray_Resize2(@ptrCast(self), size, c);
    }

    pub fn ResizeForOverwrite(self: ?*anyopaque, size: i64) void {
        qtc.QByteArray_ResizeForOverwrite(@ptrCast(self), size);
    }

    pub fn Fill(self: ?*anyopaque, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Fill(@ptrCast(self), c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Fill: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Capacity(self: ?*anyopaque, ) i64 {
        return qtc.QByteArray_Capacity(@ptrCast(self));
    }

    pub fn Reserve(self: ?*anyopaque, size: i64) void {
        qtc.QByteArray_Reserve(@ptrCast(self), size);
    }

    pub fn Squeeze(self: ?*anyopaque, ) void {
        qtc.QByteArray_Squeeze(@ptrCast(self));
    }

    pub fn OperatorconstCharMultiply(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_OperatorconstCharMultiply(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn OperatorconstVoidMultiply(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QByteArray_OperatorconstVoidMultiply(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_Data(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Data2(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_Data2(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn ConstData(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_ConstData(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QByteArray_Detach(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QByteArray_IsDetached(@ptrCast(self));
    }

    pub fn IsSharedWith(self: ?*anyopaque, other: []u8) bool {
        const other_str = qtc.libqt_string{
    .len = other.len,
    .data = other.ptr,
};
return qtc.QByteArray_IsSharedWith(@ptrCast(self), other_str);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QByteArray_Clear(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, i: i64) i8 {
        return qtc.QByteArray_At(@ptrCast(self), i);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) i8 {
        return qtc.QByteArray_OperatorSubscript(@ptrCast(self), i);
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, i: i64) i8 {
        return @ptrCast(qtc.QByteArray_OperatorSubscript2(@ptrCast(self), i));
    }

    pub fn Front(self: ?*anyopaque, ) i8 {
        return qtc.QByteArray_Front(@ptrCast(self));
    }

    pub fn Front2(self: ?*anyopaque, ) i8 {
        return @ptrCast(qtc.QByteArray_Front2(@ptrCast(self)));
    }

    pub fn Back(self: ?*anyopaque, ) i8 {
        return qtc.QByteArray_Back(@ptrCast(self));
    }

    pub fn Back2(self: ?*anyopaque, ) i8 {
        return @ptrCast(qtc.QByteArray_Back2(@ptrCast(self)));
    }

    pub fn IndexOf(self: ?*anyopaque, c: i8) i64 {
        return qtc.QByteArray_IndexOf(@ptrCast(self), c);
    }

    pub fn IndexOf2(self: ?*anyopaque, bv: []const u8) i64 {
        return qtc.QByteArray_IndexOf2(@ptrCast(self), @ptrCast(bv));
    }

    pub fn LastIndexOf(self: ?*anyopaque, c: i8) i64 {
        return qtc.QByteArray_LastIndexOf(@ptrCast(self), c);
    }

    pub fn LastIndexOf2(self: ?*anyopaque, bv: []const u8) i64 {
        return qtc.QByteArray_LastIndexOf2(@ptrCast(self), @ptrCast(bv));
    }

    pub fn LastIndexOf3(self: ?*anyopaque, bv: []const u8, from: i64) i64 {
        return qtc.QByteArray_LastIndexOf3(@ptrCast(self), @ptrCast(bv), from);
    }

    pub fn Contains(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArray_Contains(@ptrCast(self), c);
    }

    pub fn Contains2(self: ?*anyopaque, bv: []const u8) bool {
        return qtc.QByteArray_Contains2(@ptrCast(self), @ptrCast(bv));
    }

    pub fn Count(self: ?*anyopaque, c: i8) i64 {
        return qtc.QByteArray_Count(@ptrCast(self), c);
    }

    pub fn Count2(self: ?*anyopaque, bv: []const u8) i64 {
        return qtc.QByteArray_Count2(@ptrCast(self), @ptrCast(bv));
    }

    pub fn Compare(self: ?*anyopaque, a: []const u8) i32 {
        return qtc.QByteArray_Compare(@ptrCast(self), @ptrCast(a));
    }

    pub fn Left(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Left(@ptrCast(self), n);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Left: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Right(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Right(@ptrCast(self), n);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Right: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Mid(self: ?*anyopaque, index: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Mid(@ptrCast(self), index);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Mid: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn First(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_First(@ptrCast(self), n);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.First: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Last(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Last(@ptrCast(self), n);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Last: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Sliced(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Sliced(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Sliced: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Sliced2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Sliced2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Chopped(self: ?*anyopaque, lenVal: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Chopped(@ptrCast(self), lenVal);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Chopped: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn StartsWith(self: ?*anyopaque, bv: []const u8) bool {
        return qtc.QByteArray_StartsWith(@ptrCast(self), @ptrCast(bv));
    }

    pub fn StartsWith2(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArray_StartsWith2(@ptrCast(self), c);
    }

    pub fn EndsWith(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArray_EndsWith(@ptrCast(self), c);
    }

    pub fn EndsWith2(self: ?*anyopaque, bv: []const u8) bool {
        return qtc.QByteArray_EndsWith2(@ptrCast(self), @ptrCast(bv));
    }

    pub fn IsUpper(self: ?*anyopaque, ) bool {
        return qtc.QByteArray_IsUpper(@ptrCast(self));
    }

    pub fn IsLower(self: ?*anyopaque, ) bool {
        return qtc.QByteArray_IsLower(@ptrCast(self));
    }

    pub fn IsValidUtf8(self: ?*anyopaque, ) bool {
        return qtc.QByteArray_IsValidUtf8(@ptrCast(self));
    }

    pub fn Truncate(self: ?*anyopaque, pos: i64) void {
        qtc.QByteArray_Truncate(@ptrCast(self), pos);
    }

    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QByteArray_Chop(@ptrCast(self), n);
    }

    pub fn Slice(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Slice(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Slice: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Slice2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Slice2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Slice2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToLower(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_ToLower(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToLower: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToUpper(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_ToUpper(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToUpper: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Trimmed(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Trimmed(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Trimmed: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Simplified(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Simplified(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Simplified: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn LeftJustified(self: ?*anyopaque, width: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_LeftJustified(@ptrCast(self), width);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.LeftJustified: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RightJustified(self: ?*anyopaque, width: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_RightJustified(@ptrCast(self), width);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.RightJustified: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Prepend(self: ?*anyopaque, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Prepend(@ptrCast(self), c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Prepend: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Prepend2(self: ?*anyopaque, count: i64, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Prepend2(@ptrCast(self), count, c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Prepend2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Prepend3(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Prepend3(@ptrCast(self), @ptrCast(s));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Prepend3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Prepend4(self: ?*anyopaque, s: []const u8, lenVal: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Prepend4(@ptrCast(self), @ptrCast(s), lenVal);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Prepend4: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Prepend5(self: ?*anyopaque, a: []u8, allocator: std.mem.Allocator) []u8 {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_Prepend5(@ptrCast(self), a_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Prepend5: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Prepend6(self: ?*anyopaque, a: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Prepend6(@ptrCast(self), @ptrCast(a));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Prepend6: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Append(@ptrCast(self), c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Append: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Append2(self: ?*anyopaque, count: i64, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Append2(@ptrCast(self), count, c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Append2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Append3(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Append3(@ptrCast(self), @ptrCast(s));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Append3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Append4(self: ?*anyopaque, s: []const u8, lenVal: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Append4(@ptrCast(self), @ptrCast(s), lenVal);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Append4: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Append5(self: ?*anyopaque, a: []u8, allocator: std.mem.Allocator) []u8 {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_Append5(@ptrCast(self), a_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Append5: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Append6(self: ?*anyopaque, a: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Append6(@ptrCast(self), @ptrCast(a));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Append6: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Assign(self: ?*anyopaque, v: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Assign(@ptrCast(self), @ptrCast(v));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Assign: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Assign2(self: ?*anyopaque, n: i64, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Assign2(@ptrCast(self), n, c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Assign2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Insert(self: ?*anyopaque, i: i64, data: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Insert(@ptrCast(self), i, @ptrCast(data));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Insert: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Insert2(self: ?*anyopaque, i: i64, s: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Insert2(@ptrCast(self), i, @ptrCast(s));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Insert2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Insert3(self: ?*anyopaque, i: i64, data: []u8, allocator: std.mem.Allocator) []u8 {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_Insert3(@ptrCast(self), i, data_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Insert3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Insert4(self: ?*anyopaque, i: i64, count: i64, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Insert4(@ptrCast(self), i, count, c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Insert4: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Insert5(self: ?*anyopaque, i: i64, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Insert5(@ptrCast(self), i, c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Insert5: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Insert6(self: ?*anyopaque, i: i64, s: []const u8, lenVal: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Insert6(@ptrCast(self), i, @ptrCast(s), lenVal);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Insert6: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Remove(self: ?*anyopaque, index: i64, lenVal: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Remove(@ptrCast(self), index, lenVal);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Remove: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RemoveAt(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_RemoveAt(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.RemoveAt: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RemoveFirst(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_RemoveFirst(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.RemoveFirst: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RemoveLast(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_RemoveLast(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.RemoveLast: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Replace(self: ?*anyopaque, index: i64, lenVal: i64, s: []const u8, alen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Replace(@ptrCast(self), index, lenVal, @ptrCast(s), alen);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Replace: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Replace2(self: ?*anyopaque, index: i64, lenVal: i64, s: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Replace2(@ptrCast(self), index, lenVal, @ptrCast(s));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Replace2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Replace3(self: ?*anyopaque, before: i8, after: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Replace3(@ptrCast(self), before, @ptrCast(after));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Replace3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Replace4(self: ?*anyopaque, before: []const u8, bsize: i64, after: []const u8, asize: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Replace4(@ptrCast(self), @ptrCast(before), bsize, @ptrCast(after), asize);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Replace4: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Replace5(self: ?*anyopaque, before: []const u8, after: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Replace5(@ptrCast(self), @ptrCast(before), @ptrCast(after));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Replace5: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Replace6(self: ?*anyopaque, before: i8, after: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Replace6(@ptrCast(self), before, after);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Replace6: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, c: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_OperatorPlusAssign(@ptrCast(self), c);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.OperatorPlusAssign: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign2(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_OperatorPlusAssign2(@ptrCast(self), @ptrCast(s));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.OperatorPlusAssign2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign3(self: ?*anyopaque, a: []u8, allocator: std.mem.Allocator) []u8 {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_OperatorPlusAssign3(@ptrCast(self), a_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.OperatorPlusAssign3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign4(self: ?*anyopaque, a: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_OperatorPlusAssign4(@ptrCast(self), @ptrCast(a));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.OperatorPlusAssign4: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Split(self: ?*anyopaque, sep: i8) []const u8 {
        return qtc.QByteArray_Split(@ptrCast(self), sep);
    }

    pub fn Repeated(self: ?*anyopaque, times: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Repeated(@ptrCast(self), times);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Repeated: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToShort(self: ?*anyopaque, ) i16 {
        return qtc.QByteArray_ToShort(@ptrCast(self));
    }

    pub fn ToUShort(self: ?*anyopaque, ) u16 {
        return qtc.QByteArray_ToUShort(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QByteArray_ToInt(@ptrCast(self));
    }

    pub fn ToUInt(self: ?*anyopaque, ) u32 {
        return qtc.QByteArray_ToUInt(@ptrCast(self));
    }

    pub fn ToLong(self: ?*anyopaque, ) long {
        return qtc.QByteArray_ToLong(@ptrCast(self));
    }

    pub fn ToULong(self: ?*anyopaque, ) unsigned long {
        return qtc.QByteArray_ToULong(@ptrCast(self));
    }

    pub fn ToLongLong(self: ?*anyopaque, ) i64 {
        return qtc.QByteArray_ToLongLong(@ptrCast(self));
    }

    pub fn ToULongLong(self: ?*anyopaque, ) u64 {
        return qtc.QByteArray_ToULongLong(@ptrCast(self));
    }

    pub fn ToFloat(self: ?*anyopaque, ) f32 {
        return qtc.QByteArray_ToFloat(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QByteArray_ToDouble(@ptrCast(self));
    }

    pub fn ToBase64(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_ToBase64(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToBase64: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToHex(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_ToHex(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToHex: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToPercentEncoding(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_ToPercentEncoding(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToPercentEncoding: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn PercentDecoded(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_PercentDecoded(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.PercentDecoded: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum(self: ?*anyopaque, param1: i16, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum2(self: ?*anyopaque, param1: u16, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum2(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum3(self: ?*anyopaque, param1: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum3(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum4(self: ?*anyopaque, param1: u32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum4(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum4: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum5(self: ?*anyopaque, param1: long, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum5(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum5: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum6(self: ?*anyopaque, param1: unsigned long, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum6(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum6: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum7(self: ?*anyopaque, param1: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum7(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum7: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum8(self: ?*anyopaque, param1: u64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum8(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum8: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum9(self: ?*anyopaque, param1: f32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum9(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum9: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum10(self: ?*anyopaque, param1: f64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum10(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum10: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetRawData(self: ?*anyopaque, a: []const u8, n: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetRawData(@ptrCast(self), @ptrCast(a), n);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetRawData: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number(param1: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number(param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number2(param1: u32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number2(param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number3(param1: long, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number3(param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number4(param1: unsigned long, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number4(param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number4: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number5(param1: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number5(param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number5: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number6(param1: u64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number6(param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number6: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number7(param1: f64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number7(param1);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number7: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromRawData(data: []const u8, size: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_FromRawData(@ptrCast(data), size);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromRawData: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromBase64Encoding(base64: []u8) QtC.QByteArray__FromBase64Result {
        const base64_str = qtc.libqt_string{
    .len = base64.len,
    .data = base64.ptr,
};
return qtc.QByteArray_FromBase64Encoding(base64_str);
    }

    pub fn FromBase64(base64: []u8, allocator: std.mem.Allocator) []u8 {
        const base64_str = qtc.libqt_string{
    .len = base64.len,
    .data = base64.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_FromBase64(base64_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromBase64: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromHex(hexEncoded: []u8, allocator: std.mem.Allocator) []u8 {
        const hexEncoded_str = qtc.libqt_string{
    .len = hexEncoded.len,
    .data = hexEncoded.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_FromHex(hexEncoded_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromHex: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromPercentEncoding(pctEncoded: []u8, allocator: std.mem.Allocator) []u8 {
        const pctEncoded_str = qtc.libqt_string{
    .len = pctEncoded.len,
    .data = pctEncoded.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_FromPercentEncoding(pctEncoded_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromPercentEncoding: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Begin(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_Begin(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Begin2(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_Begin2(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Cbegin(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_Cbegin(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn ConstBegin(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_ConstBegin(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn End(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_End(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn End2(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_End2(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Cend(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_Cend(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn ConstEnd(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QByteArray_ConstEnd(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn PushBack(self: ?*anyopaque, c: i8) void {
        qtc.QByteArray_PushBack(@ptrCast(self), c);
    }

    pub fn PushBack2(self: ?*anyopaque, s: []const u8) void {
        qtc.QByteArray_PushBack2(@ptrCast(self), @ptrCast(s));
    }

    pub fn PushBack3(self: ?*anyopaque, a: []u8) void {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
qtc.QByteArray_PushBack3(@ptrCast(self), a_str);
    }

    pub fn PushBack4(self: ?*anyopaque, a: []const u8) void {
        qtc.QByteArray_PushBack4(@ptrCast(self), @ptrCast(a));
    }

    pub fn PushFront(self: ?*anyopaque, c: i8) void {
        qtc.QByteArray_PushFront(@ptrCast(self), c);
    }

    pub fn PushFront2(self: ?*anyopaque, c: []const u8) void {
        qtc.QByteArray_PushFront2(@ptrCast(self), @ptrCast(c));
    }

    pub fn PushFront3(self: ?*anyopaque, a: []u8) void {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
qtc.QByteArray_PushFront3(@ptrCast(self), a_str);
    }

    pub fn PushFront4(self: ?*anyopaque, a: []const u8) void {
        qtc.QByteArray_PushFront4(@ptrCast(self), @ptrCast(a));
    }

    pub fn ShrinkToFit(self: ?*anyopaque, ) void {
        qtc.QByteArray_ShrinkToFit(@ptrCast(self));
    }

    pub fn Erase(self: ?*anyopaque, first: []const u8, last: []const u8) []const u8 {
        const _ret = qtc.QByteArray_Erase(@ptrCast(self), @ptrCast(first), @ptrCast(last));
return  std.mem.span(_ret);
    }

    pub fn Erase2(self: ?*anyopaque, it: []const u8) []const u8 {
        const _ret = qtc.QByteArray_Erase2(@ptrCast(self), @ptrCast(it));
return  std.mem.span(_ret);
    }

    pub fn MaxSize(self: ?*anyopaque, ) i64 {
        return qtc.QByteArray_MaxSize(@ptrCast(self));
    }

    pub fn MaxSize2() i64 {
        return qtc.QByteArray_MaxSize2();
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QByteArray_Size(@ptrCast(self));
    }

    pub fn Count3(self: ?*anyopaque, ) i64 {
        return qtc.QByteArray_Count3(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i64 {
        return qtc.QByteArray_Length(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QByteArray_IsNull(@ptrCast(self));
    }

    pub fn Fill2(self: ?*anyopaque, c: i8, size: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Fill2(@ptrCast(self), c, size);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Fill2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn IndexOf22(self: ?*anyopaque, c: i8, from: i64) i64 {
        return qtc.QByteArray_IndexOf22(@ptrCast(self), c, from);
    }

    pub fn IndexOf23(self: ?*anyopaque, bv: []const u8, from: i64) i64 {
        return qtc.QByteArray_IndexOf23(@ptrCast(self), @ptrCast(bv), from);
    }

    pub fn LastIndexOf22(self: ?*anyopaque, c: i8, from: i64) i64 {
        return qtc.QByteArray_LastIndexOf22(@ptrCast(self), c, from);
    }

    pub fn Compare2(self: ?*anyopaque, a: []const u8, cs: i32) i32 {
        return qtc.QByteArray_Compare2(@ptrCast(self), @ptrCast(a), @intCast(cs));
    }

    pub fn Mid2(self: ?*anyopaque, index: i64, lenVal: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Mid2(@ptrCast(self), index, lenVal);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Mid2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn LeftJustified2(self: ?*anyopaque, width: i64, fill: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_LeftJustified2(@ptrCast(self), width, fill);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.LeftJustified2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn LeftJustified3(self: ?*anyopaque, width: i64, fill: i8, truncate: bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_LeftJustified3(@ptrCast(self), width, fill, truncate);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.LeftJustified3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RightJustified2(self: ?*anyopaque, width: i64, fill: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_RightJustified2(@ptrCast(self), width, fill);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.RightJustified2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RightJustified3(self: ?*anyopaque, width: i64, fill: i8, truncate: bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_RightJustified3(@ptrCast(self), width, fill, truncate);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.RightJustified3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToShort1(self: ?*anyopaque, ok: *bool) i16 {
        return qtc.QByteArray_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToShort2(self: ?*anyopaque, ok: *bool, base: i32) i16 {
        return qtc.QByteArray_ToShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUShort1(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QByteArray_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUShort2(self: ?*anyopaque, ok: *bool, base: i32) u16 {
        return qtc.QByteArray_ToUShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QByteArray_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToInt2(self: ?*anyopaque, ok: *bool, base: i32) i32 {
        return qtc.QByteArray_ToInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QByteArray_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUInt2(self: ?*anyopaque, ok: *bool, base: i32) u32 {
        return qtc.QByteArray_ToUInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLong1(self: ?*anyopaque, ok: *bool) long {
        return qtc.QByteArray_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLong2(self: ?*anyopaque, ok: *bool, base: i32) long {
        return qtc.QByteArray_ToLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULong1(self: ?*anyopaque, ok: *bool) unsigned long {
        return qtc.QByteArray_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULong2(self: ?*anyopaque, ok: *bool, base: i32) unsigned long {
        return qtc.QByteArray_ToULong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QByteArray_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLongLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QByteArray_ToLongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QByteArray_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULongLong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QByteArray_ToULongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QByteArray_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QByteArray_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToBase641(self: ?*anyopaque, options: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_ToBase641(@ptrCast(self), @intCast(options));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToBase641: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToHex1(self: ?*anyopaque, separator: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_ToHex1(@ptrCast(self), separator);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToHex1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToPercentEncoding1(self: ?*anyopaque, exclude: []u8, allocator: std.mem.Allocator) []u8 {
        const exclude_str = qtc.libqt_string{
    .len = exclude.len,
    .data = exclude.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_ToPercentEncoding1(@ptrCast(self), exclude_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToPercentEncoding1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToPercentEncoding2(self: ?*anyopaque, exclude: []u8, include: []u8, allocator: std.mem.Allocator) []u8 {
        const exclude_str = qtc.libqt_string{
    .len = exclude.len,
    .data = exclude.ptr,
};
const include_str = qtc.libqt_string{
    .len = include.len,
    .data = include.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_ToPercentEncoding2(@ptrCast(self), exclude_str, include_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToPercentEncoding2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToPercentEncoding3(self: ?*anyopaque, exclude: []u8, include: []u8, percent: i8, allocator: std.mem.Allocator) []u8 {
        const exclude_str = qtc.libqt_string{
    .len = exclude.len,
    .data = exclude.ptr,
};
const include_str = qtc.libqt_string{
    .len = include.len,
    .data = include.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_ToPercentEncoding3(@ptrCast(self), exclude_str, include_str, percent);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.ToPercentEncoding3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn PercentDecoded1(self: ?*anyopaque, percent: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_PercentDecoded1(@ptrCast(self), percent);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.PercentDecoded1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum22(self: ?*anyopaque, param1: i16, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum22(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum22: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum23(self: ?*anyopaque, param1: u16, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum23(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum23: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum24(self: ?*anyopaque, param1: i32, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum24(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum24: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum25(self: ?*anyopaque, param1: u32, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum25(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum25: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum26(self: ?*anyopaque, param1: long, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum26(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum26: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum27(self: ?*anyopaque, param1: unsigned long, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum27(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum27: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum28(self: ?*anyopaque, param1: i64, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum28(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum28: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum29(self: ?*anyopaque, param1: u64, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum29(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum29: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum210(self: ?*anyopaque, param1: f32, format: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum210(@ptrCast(self), param1, format);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum210: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum32(self: ?*anyopaque, param1: f32, format: i8, precision: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum32(@ptrCast(self), param1, format, precision);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum32: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum211(self: ?*anyopaque, param1: f64, format: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum211(@ptrCast(self), param1, format);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum211: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetNum33(self: ?*anyopaque, param1: f64, format: i8, precision: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_SetNum33(@ptrCast(self), param1, format, precision);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.SetNum33: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number22(param1: i32, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number22(param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number22: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number23(param1: u32, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number23(param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number23: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number24(param1: long, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number24(param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number24: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number25(param1: unsigned long, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number25(param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number25: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number26(param1: i64, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number26(param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number26: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number27(param1: u64, base: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number27(param1, base);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number27: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number28(param1: f64, format: i8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number28(param1, format);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number28: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Number32(param1: f64, format: i8, precision: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray_Number32(param1, format, precision);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number32: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromBase64Encoding2(base64: []u8, options: i32) QtC.QByteArray__FromBase64Result {
        const base64_str = qtc.libqt_string{
    .len = base64.len,
    .data = base64.ptr,
};
return qtc.QByteArray_FromBase64Encoding2(base64_str, @intCast(options));
    }

    pub fn FromBase642(base64: []u8, options: i32, allocator: std.mem.Allocator) []u8 {
        const base64_str = qtc.libqt_string{
    .len = base64.len,
    .data = base64.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_FromBase642(base64_str, @intCast(options));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromBase642: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FromPercentEncoding2(pctEncoded: []u8, percent: i8, allocator: std.mem.Allocator) []u8 {
        const pctEncoded_str = qtc.libqt_string{
    .len = pctEncoded.len,
    .data = pctEncoded.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QByteArray_FromPercentEncoding2(pctEncoded_str, percent);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromPercentEncoding2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QByteArray_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qbytearray-frombase64result.html
pub const qbytearray__frombase64result = struct {

    /// New constructs a new QByteArray::FromBase64Result object.
    pub fn New(param1: ?*anyopaque) QtC.QByteArray__FromBase64Result {
        return qtc.QByteArray__FromBase64Result_new(@ptrCast(param1));
    }


    /// New2 constructs a new QByteArray::FromBase64Result object.
    pub fn New2() QtC.QByteArray__FromBase64Result {
        return qtc.QByteArray__FromBase64Result_new2();
    }


    pub fn Decoded(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const decoded_bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_Decoded(@ptrCast(self));
defer qtc.libqt_string_free(&decoded_bytearray);
const decoded_ret = allocator.alloc(u8, decoded_bytearray.len) catch @panic("qbytearray::frombase64result.Decoded: Memory allocation failed");
@memcpy(decoded_ret, decoded_bytearray.data[0..decoded_bytearray.len]);
return  decoded_ret;
    }

    pub fn SetDecoded(self: ?*anyopaque, decoded: []u8) void {
        const decoded_str = qtc.libqt_string{
    .len = decoded.len,
    .data = decoded.ptr,
};
qtc.QByteArray__FromBase64Result_SetDecoded(@ptrCast(self), decoded_str);
    }

    pub fn DecodingStatus(self: ?*anyopaque, ) i32 {
        return qtc.QByteArray__FromBase64Result_DecodingStatus(@ptrCast(self));
    }

    pub fn SetDecodingStatus(self: ?*anyopaque, decodingStatus: i32) void {
        qtc.QByteArray__FromBase64Result_SetDecodingStatus(@ptrCast(self), @intCast(decodingStatus));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArray__FromBase64Result_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Operatorbool(self: ?*anyopaque, ) bool {
        return qtc.QByteArray__FromBase64Result_Operatorbool(@ptrCast(self));
    }

    pub fn OperatorMultiply(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_OperatorMultiply(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray::frombase64result.OperatorMultiply: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn OperatorMultiply2(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_OperatorMultiply2(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray::frombase64result.OperatorMultiply2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QByteArray__FromBase64Result_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QByteArray__FromBase64Result_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/bytearray.html#types
pub const enums = struct {
    pub const Base64Option = enum {
        pub const Base64Encoding: i32 = 0;
        pub const Base64UrlEncoding: i32 = 1;
        pub const KeepTrailingEquals: i32 = 0;
        pub const OmitTrailingEquals: i32 = 2;
        pub const IgnoreBase64DecodingErrors: i32 = 0;
        pub const AbortOnBase64DecodingErrors: i32 = 4;
    };

    pub const Base64DecodingStatus = enum {
        pub const Ok: i32 = 0;
        pub const IllegalInputLength: i32 = 1;
        pub const IllegalCharacter: i32 = 2;
        pub const IllegalPadding: i32 = 3;
    };

};
