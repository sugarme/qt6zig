const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstringview.html
pub const qstringview = struct {

    /// New constructs a new QStringView object.
    pub fn New() QtC.QStringView {
        return qtc.QStringView_new();
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStringView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStringView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QStringView_Size(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QStringView_Data(@ptrCast(self)));
    }

    pub fn ConstData(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QStringView_ConstData(@ptrCast(self)));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, n: i64) QtC.QChar {
        return qtc.QStringView_OperatorSubscript(@ptrCast(self), n);
    }

    pub fn ToLatin1(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QStringView_ToLatin1(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToLatin1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToUtf8(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QStringView_ToUtf8(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToUtf8: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToLocal8Bit(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QStringView_ToLocal8Bit(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToLocal8Bit: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToUcs4(self: ?*anyopaque, ) []const u8 {
        return qtc.QStringView_ToUcs4(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, n: i64) QtC.QChar {
        return qtc.QStringView_At(@ptrCast(self), n);
    }

    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QStringView_Truncate(@ptrCast(self), n);
    }

    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QStringView_Chop(@ptrCast(self), n);
    }

    pub fn Compare4(self: ?*anyopaque, c: QtC.QChar) i32 {
        return qtc.QStringView_Compare4(@ptrCast(self), @ptrCast(c));
    }

    pub fn Compare5(self: ?*anyopaque, c: QtC.QChar, cs: i32) i32 {
        return qtc.QStringView_Compare5(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn StartsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QStringView_StartsWith3(@ptrCast(self), @ptrCast(c));
    }

    pub fn StartsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QStringView_StartsWith4(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn EndsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QStringView_EndsWith3(@ptrCast(self), @ptrCast(c));
    }

    pub fn EndsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QStringView_EndsWith4(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn IndexOf(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QStringView_IndexOf(@ptrCast(self), @ptrCast(c));
    }

    pub fn Contains(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QStringView_Contains(@ptrCast(self), @ptrCast(c));
    }

    pub fn Count(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QStringView_Count(@ptrCast(self), @ptrCast(c));
    }

    pub fn LastIndexOf(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QStringView_LastIndexOf(@ptrCast(self), @ptrCast(c));
    }

    pub fn LastIndexOf2(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QStringView_LastIndexOf2(@ptrCast(self), @ptrCast(c), from);
    }

    pub fn IndexOf4(self: ?*anyopaque, re: ?*anyopaque) i64 {
        return qtc.QStringView_IndexOf4(@ptrCast(self), @ptrCast(re));
    }

    pub fn LastIndexOf7(self: ?*anyopaque, re: ?*anyopaque, from: i64) i64 {
        return qtc.QStringView_LastIndexOf7(@ptrCast(self), @ptrCast(re), from);
    }

    pub fn Contains4(self: ?*anyopaque, re: ?*anyopaque) bool {
        return qtc.QStringView_Contains4(@ptrCast(self), @ptrCast(re));
    }

    pub fn Count4(self: ?*anyopaque, re: ?*anyopaque) i64 {
        return qtc.QStringView_Count4(@ptrCast(self), @ptrCast(re));
    }

    pub fn IsRightToLeft(self: ?*anyopaque, ) bool {
        return qtc.QStringView_IsRightToLeft(@ptrCast(self));
    }

    pub fn IsValidUtf16(self: ?*anyopaque, ) bool {
        return qtc.QStringView_IsValidUtf16(@ptrCast(self));
    }

    pub fn IsUpper(self: ?*anyopaque, ) bool {
        return qtc.QStringView_IsUpper(@ptrCast(self));
    }

    pub fn IsLower(self: ?*anyopaque, ) bool {
        return qtc.QStringView_IsLower(@ptrCast(self));
    }

    pub fn ToShort(self: ?*anyopaque, ) i16 {
        return qtc.QStringView_ToShort(@ptrCast(self));
    }

    pub fn ToUShort(self: ?*anyopaque, ) u16 {
        return qtc.QStringView_ToUShort(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QStringView_ToInt(@ptrCast(self));
    }

    pub fn ToUInt(self: ?*anyopaque, ) u32 {
        return qtc.QStringView_ToUInt(@ptrCast(self));
    }

    pub fn ToLong(self: ?*anyopaque, ) long {
        return qtc.QStringView_ToLong(@ptrCast(self));
    }

    pub fn ToULong(self: ?*anyopaque, ) unsigned long {
        return qtc.QStringView_ToULong(@ptrCast(self));
    }

    pub fn ToLongLong(self: ?*anyopaque, ) i64 {
        return qtc.QStringView_ToLongLong(@ptrCast(self));
    }

    pub fn ToULongLong(self: ?*anyopaque, ) u64 {
        return qtc.QStringView_ToULongLong(@ptrCast(self));
    }

    pub fn ToFloat(self: ?*anyopaque, ) f32 {
        return qtc.QStringView_ToFloat(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QStringView_ToDouble(@ptrCast(self));
    }

    pub fn Split2(self: ?*anyopaque, sep: QtC.QChar) []const u8 {
        return qtc.QStringView_Split2(@ptrCast(self), @ptrCast(sep));
    }

    pub fn Split3(self: ?*anyopaque, sep: ?*anyopaque) []const u8 {
        return qtc.QStringView_Split3(@ptrCast(self), @ptrCast(sep));
    }

    pub fn Begin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QStringView_Begin(@ptrCast(self)));
    }

    pub fn End(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QStringView_End(@ptrCast(self)));
    }

    pub fn Cbegin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QStringView_Cbegin(@ptrCast(self)));
    }

    pub fn Cend(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QStringView_Cend(@ptrCast(self)));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QStringView_Empty(@ptrCast(self));
    }

    pub fn Front(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QStringView_Front(@ptrCast(self));
    }

    pub fn Back(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QStringView_Back(@ptrCast(self));
    }

    pub fn MaxSize(self: ?*anyopaque, ) i64 {
        return qtc.QStringView_MaxSize(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QStringView_ConstBegin(@ptrCast(self)));
    }

    pub fn ConstEnd(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QStringView_ConstEnd(@ptrCast(self)));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QStringView_IsNull(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QStringView_IsEmpty(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i64 {
        return qtc.QStringView_Length(@ptrCast(self));
    }

    pub fn First2(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QStringView_First2(@ptrCast(self));
    }

    pub fn Last2(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QStringView_Last2(@ptrCast(self));
    }

    pub fn MaxSize2() i64 {
        return qtc.QStringView_MaxSize2();
    }

    pub fn IndexOf22(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QStringView_IndexOf22(@ptrCast(self), @ptrCast(c), from);
    }

    pub fn IndexOf32(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QStringView_IndexOf32(@ptrCast(self), @ptrCast(c), from, @intCast(cs));
    }

    pub fn Contains22(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QStringView_Contains22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn Count22(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QStringView_Count22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn LastIndexOf22(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn LastIndexOf32(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf32(@ptrCast(self), @ptrCast(c), from, @intCast(cs));
    }

    pub fn IndexOf25(self: ?*anyopaque, re: ?*anyopaque, from: i64) i64 {
        return qtc.QStringView_IndexOf25(@ptrCast(self), @ptrCast(re), from);
    }

    pub fn IndexOf35(self: ?*anyopaque, re: ?*anyopaque, from: i64, rmatch: ?*anyopaque) i64 {
        return qtc.QStringView_IndexOf35(@ptrCast(self), @ptrCast(re), from, @ptrCast(rmatch));
    }

    pub fn LastIndexOf35(self: ?*anyopaque, re: ?*anyopaque, from: i64, rmatch: ?*anyopaque) i64 {
        return qtc.QStringView_LastIndexOf35(@ptrCast(self), @ptrCast(re), from, @ptrCast(rmatch));
    }

    pub fn Contains25(self: ?*anyopaque, re: ?*anyopaque, rmatch: ?*anyopaque) bool {
        return qtc.QStringView_Contains25(@ptrCast(self), @ptrCast(re), @ptrCast(rmatch));
    }

    pub fn ToShort1(self: ?*anyopaque, ok: *bool) i16 {
        return qtc.QStringView_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToShort2(self: ?*anyopaque, ok: *bool, base: i32) i16 {
        return qtc.QStringView_ToShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUShort1(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QStringView_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUShort2(self: ?*anyopaque, ok: *bool, base: i32) u16 {
        return qtc.QStringView_ToUShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QStringView_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToInt2(self: ?*anyopaque, ok: *bool, base: i32) i32 {
        return qtc.QStringView_ToInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QStringView_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUInt2(self: ?*anyopaque, ok: *bool, base: i32) u32 {
        return qtc.QStringView_ToUInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLong1(self: ?*anyopaque, ok: *bool) long {
        return qtc.QStringView_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLong2(self: ?*anyopaque, ok: *bool, base: i32) long {
        return qtc.QStringView_ToLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULong1(self: ?*anyopaque, ok: *bool) unsigned long {
        return qtc.QStringView_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULong2(self: ?*anyopaque, ok: *bool, base: i32) unsigned long {
        return qtc.QStringView_ToULong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QStringView_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLongLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QStringView_ToLongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QStringView_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULongLong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QStringView_ToULongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QStringView_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QStringView_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn Split23(self: ?*anyopaque, sep: QtC.QChar, behavior: i32) []const u8 {
        return qtc.QStringView_Split23(@ptrCast(self), @ptrCast(sep), @intCast(behavior));
    }

    pub fn Split33(self: ?*anyopaque, sep: QtC.QChar, behavior: i32, cs: i32) []const u8 {
        return qtc.QStringView_Split33(@ptrCast(self), @ptrCast(sep), @intCast(behavior), @intCast(cs));
    }

    pub fn Split24(self: ?*anyopaque, sep: ?*anyopaque, behavior: i32) []const u8 {
        return qtc.QStringView_Split24(@ptrCast(self), @ptrCast(sep), @intCast(behavior));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringView_Delete(@ptrCast(self));
    }
};
