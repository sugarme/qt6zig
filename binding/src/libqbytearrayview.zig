const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbytearrayview.html
pub const qbytearrayview = struct {

    /// New constructs a new QByteArrayView object.
    pub fn New(other: []const u8) QtC.QByteArrayView {
        return qtc.QByteArrayView_new(@ptrCast(other));
    }


    /// New2 constructs a new QByteArrayView object.
    pub fn New2(other: []const u8) QtC.QByteArrayView {
        return qtc.QByteArrayView_new2(@ptrCast(other));
    }


    /// New3 constructs a new QByteArrayView object.
    pub fn New3() QtC.QByteArrayView {
        return qtc.QByteArrayView_new3();
    }


    /// New4 constructs a new QByteArrayView object.
    pub fn New4(param1: []const u8) QtC.QByteArrayView {
        return qtc.QByteArrayView_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ToByteArray(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArrayView_ToByteArray(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.ToByteArray: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QByteArrayView_Size(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QByteArrayView_Data(@ptrCast(self)));
    }

    pub fn ConstData(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QByteArrayView_ConstData(@ptrCast(self)));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, n: i64) i8 {
        return qtc.QByteArrayView_OperatorSubscript(@ptrCast(self), n);
    }

    pub fn At(self: ?*anyopaque, n: i64) i8 {
        return qtc.QByteArrayView_At(@ptrCast(self), n);
    }

    pub fn First(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_First(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.First: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Last(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Last(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Last: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Sliced(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Sliced(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Sliced: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Sliced2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Sliced2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Slice(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Slice(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Slice: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Slice2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Slice2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Slice2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Chopped(self: ?*anyopaque, lenVal: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Chopped(@ptrCast(self), lenVal);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Chopped: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Left(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Left(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Left: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Right(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Right(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Right: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Mid(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Mid(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Mid: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QByteArrayView_Truncate(@ptrCast(self), n);
    }

    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QByteArrayView_Chop(@ptrCast(self), n);
    }

    pub fn Trimmed(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Trimmed(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Trimmed: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToShort(self: ?*anyopaque, ) i16 {
        return qtc.QByteArrayView_ToShort(@ptrCast(self));
    }

    pub fn ToUShort(self: ?*anyopaque, ) u16 {
        return qtc.QByteArrayView_ToUShort(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QByteArrayView_ToInt(@ptrCast(self));
    }

    pub fn ToUInt(self: ?*anyopaque, ) u32 {
        return qtc.QByteArrayView_ToUInt(@ptrCast(self));
    }

    pub fn ToLong(self: ?*anyopaque, ) long {
        return qtc.QByteArrayView_ToLong(@ptrCast(self));
    }

    pub fn ToULong(self: ?*anyopaque, ) unsigned long {
        return qtc.QByteArrayView_ToULong(@ptrCast(self));
    }

    pub fn ToLongLong(self: ?*anyopaque, ) i64 {
        return qtc.QByteArrayView_ToLongLong(@ptrCast(self));
    }

    pub fn ToULongLong(self: ?*anyopaque, ) u64 {
        return qtc.QByteArrayView_ToULongLong(@ptrCast(self));
    }

    pub fn ToFloat(self: ?*anyopaque, ) f32 {
        return qtc.QByteArrayView_ToFloat(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QByteArrayView_ToDouble(@ptrCast(self));
    }

    pub fn StartsWith(self: ?*anyopaque, other: []const u8) bool {
        return qtc.QByteArrayView_StartsWith(@ptrCast(self), @ptrCast(other));
    }

    pub fn StartsWith2(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArrayView_StartsWith2(@ptrCast(self), c);
    }

    pub fn EndsWith(self: ?*anyopaque, other: []const u8) bool {
        return qtc.QByteArrayView_EndsWith(@ptrCast(self), @ptrCast(other));
    }

    pub fn EndsWith2(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArrayView_EndsWith2(@ptrCast(self), c);
    }

    pub fn IndexOf(self: ?*anyopaque, a: []const u8) i64 {
        return qtc.QByteArrayView_IndexOf(@ptrCast(self), @ptrCast(a));
    }

    pub fn IndexOf2(self: ?*anyopaque, ch: i8) i64 {
        return qtc.QByteArrayView_IndexOf2(@ptrCast(self), ch);
    }

    pub fn Contains(self: ?*anyopaque, a: []const u8) bool {
        return qtc.QByteArrayView_Contains(@ptrCast(self), @ptrCast(a));
    }

    pub fn Contains2(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArrayView_Contains2(@ptrCast(self), c);
    }

    pub fn LastIndexOf(self: ?*anyopaque, a: []const u8) i64 {
        return qtc.QByteArrayView_LastIndexOf(@ptrCast(self), @ptrCast(a));
    }

    pub fn LastIndexOf2(self: ?*anyopaque, a: []const u8, from: i64) i64 {
        return qtc.QByteArrayView_LastIndexOf2(@ptrCast(self), @ptrCast(a), from);
    }

    pub fn LastIndexOf3(self: ?*anyopaque, ch: i8) i64 {
        return qtc.QByteArrayView_LastIndexOf3(@ptrCast(self), ch);
    }

    pub fn Count(self: ?*anyopaque, a: []const u8) i64 {
        return qtc.QByteArrayView_Count(@ptrCast(self), @ptrCast(a));
    }

    pub fn Count2(self: ?*anyopaque, ch: i8) i64 {
        return qtc.QByteArrayView_Count2(@ptrCast(self), ch);
    }

    pub fn Compare(self: ?*anyopaque, a: []const u8) i32 {
        return qtc.QByteArrayView_Compare(@ptrCast(self), @ptrCast(a));
    }

    pub fn IsValidUtf8(self: ?*anyopaque, ) bool {
        return qtc.QByteArrayView_IsValidUtf8(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QByteArrayView_Begin(@ptrCast(self)));
    }

    pub fn End(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QByteArrayView_End(@ptrCast(self)));
    }

    pub fn Cbegin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QByteArrayView_Cbegin(@ptrCast(self)));
    }

    pub fn Cend(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QByteArrayView_Cend(@ptrCast(self)));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QByteArrayView_Empty(@ptrCast(self));
    }

    pub fn Front(self: ?*anyopaque, ) i8 {
        return qtc.QByteArrayView_Front(@ptrCast(self));
    }

    pub fn Back(self: ?*anyopaque, ) i8 {
        return qtc.QByteArrayView_Back(@ptrCast(self));
    }

    pub fn MaxSize(self: ?*anyopaque, ) i64 {
        return qtc.QByteArrayView_MaxSize(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QByteArrayView_IsNull(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QByteArrayView_IsEmpty(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i64 {
        return qtc.QByteArrayView_Length(@ptrCast(self));
    }

    pub fn First2(self: ?*anyopaque, ) i8 {
        return qtc.QByteArrayView_First2(@ptrCast(self));
    }

    pub fn Last2(self: ?*anyopaque, ) i8 {
        return qtc.QByteArrayView_Last2(@ptrCast(self));
    }

    pub fn MaxSize2() i64 {
        return qtc.QByteArrayView_MaxSize2();
    }

    pub fn Mid2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Mid2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Mid2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToShort1(self: ?*anyopaque, ok: *bool) i16 {
        return qtc.QByteArrayView_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToShort2(self: ?*anyopaque, ok: *bool, base: i32) i16 {
        return qtc.QByteArrayView_ToShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUShort1(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QByteArrayView_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUShort2(self: ?*anyopaque, ok: *bool, base: i32) u16 {
        return qtc.QByteArrayView_ToUShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QByteArrayView_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToInt2(self: ?*anyopaque, ok: *bool, base: i32) i32 {
        return qtc.QByteArrayView_ToInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QByteArrayView_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUInt2(self: ?*anyopaque, ok: *bool, base: i32) u32 {
        return qtc.QByteArrayView_ToUInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLong1(self: ?*anyopaque, ok: *bool) long {
        return qtc.QByteArrayView_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLong2(self: ?*anyopaque, ok: *bool, base: i32) long {
        return qtc.QByteArrayView_ToLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULong1(self: ?*anyopaque, ok: *bool) unsigned long {
        return qtc.QByteArrayView_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULong2(self: ?*anyopaque, ok: *bool, base: i32) unsigned long {
        return qtc.QByteArrayView_ToULong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QByteArrayView_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLongLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QByteArrayView_ToLongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QByteArrayView_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULongLong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QByteArrayView_ToULongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QByteArrayView_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QByteArrayView_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn IndexOf22(self: ?*anyopaque, a: []const u8, from: i64) i64 {
        return qtc.QByteArrayView_IndexOf22(@ptrCast(self), @ptrCast(a), from);
    }

    pub fn IndexOf23(self: ?*anyopaque, ch: i8, from: i64) i64 {
        return qtc.QByteArrayView_IndexOf23(@ptrCast(self), ch, from);
    }

    pub fn LastIndexOf22(self: ?*anyopaque, ch: i8, from: i64) i64 {
        return qtc.QByteArrayView_LastIndexOf22(@ptrCast(self), ch, from);
    }

    pub fn Compare2(self: ?*anyopaque, a: []const u8, cs: i32) i32 {
        return qtc.QByteArrayView_Compare2(@ptrCast(self), @ptrCast(a), @intCast(cs));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QByteArrayView_Delete(@ptrCast(self));
    }
};
