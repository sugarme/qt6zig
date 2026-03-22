const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlatin1string.html
pub const qlatin1string = struct {

    /// New constructs a new QLatin1String object.
    pub fn New(other: ?*anyopaque) QtC.QLatin1String {
        return qtc.QLatin1String_new(@ptrCast(other));
    }


    /// New2 constructs a new QLatin1String object.
    pub fn New2(other: ?*anyopaque) QtC.QLatin1String {
        return qtc.QLatin1String_new2(@ptrCast(other));
    }


    /// New3 constructs a new QLatin1String object.
    pub fn New3() QtC.QLatin1String {
        return qtc.QLatin1String_new3();
    }


    /// New4 constructs a new QLatin1String object.
    pub fn New4(s: []const u8) QtC.QLatin1String {
        return qtc.QLatin1String_new4(@ptrCast(s));
    }


    /// New5 constructs a new QLatin1String object.
    pub fn New5(f: []const u8, l: []const u8) QtC.QLatin1String {
        return qtc.QLatin1String_new5(@ptrCast(f), @ptrCast(l));
    }


    /// New6 constructs a new QLatin1String object.
    pub fn New6(s: []const u8, sz: i64) QtC.QLatin1String {
        return qtc.QLatin1String_new6(@ptrCast(s), sz);
    }


    /// New7 constructs a new QLatin1String object.
    pub fn New7(s: []u8) QtC.QLatin1String {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QLatin1String_new7(s_str);
    }


    /// New8 constructs a new QLatin1String object.
    pub fn New8(s: []const u8) QtC.QLatin1String {
        return qtc.QLatin1String_new8(@ptrCast(s));
    }


    /// New9 constructs a new QLatin1String object.
    pub fn New9(param1: ?*anyopaque) QtC.QLatin1String {
        return qtc.QLatin1String_new9(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLatin1String_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLatin1String_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLatin1String_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlatin1string.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Latin1(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QLatin1String_Latin1(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QLatin1String_Size(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QLatin1String_Data(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn ConstData(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QLatin1String_ConstData(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn ConstBegin(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QLatin1String_ConstBegin(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn ConstEnd(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QLatin1String_ConstEnd(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn First(self: ?*anyopaque, ) QtC.QLatin1Char {
        return qtc.QLatin1String_First(@ptrCast(self));
    }

    pub fn Last(self: ?*anyopaque, ) QtC.QLatin1Char {
        return qtc.QLatin1String_Last(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i64 {
        return qtc.QLatin1String_Length(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QLatin1String_IsNull(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QLatin1String_IsEmpty(@ptrCast(self));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QLatin1String_Empty(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, i: i64) QtC.QLatin1Char {
        return qtc.QLatin1String_At(@ptrCast(self), i);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QLatin1Char {
        return qtc.QLatin1String_OperatorSubscript(@ptrCast(self), i);
    }

    pub fn Front(self: ?*anyopaque, ) QtC.QLatin1Char {
        return qtc.QLatin1String_Front(@ptrCast(self));
    }

    pub fn Back(self: ?*anyopaque, ) QtC.QLatin1Char {
        return qtc.QLatin1String_Back(@ptrCast(self));
    }

    pub fn Compare(self: ?*anyopaque, other: []const u8) i32 {
        return qtc.QLatin1String_Compare(@ptrCast(self), @ptrCast(other));
    }

    pub fn Compare2(self: ?*anyopaque, other: QLatin1StringView) i32 {
        return qtc.QLatin1String_Compare2(@ptrCast(self), other);
    }

    pub fn Compare3(self: ?*anyopaque, other: QUtf8StringView) i32 {
        return qtc.QLatin1String_Compare3(@ptrCast(self), other);
    }

    pub fn Compare4(self: ?*anyopaque, c: QtC.QChar) i32 {
        return qtc.QLatin1String_Compare4(@ptrCast(self), @ptrCast(c));
    }

    pub fn Compare5(self: ?*anyopaque, c: QtC.QChar, cs: i32) i32 {
        return qtc.QLatin1String_Compare5(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn StartsWith(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QLatin1String_StartsWith(@ptrCast(self), @ptrCast(s));
    }

    pub fn StartsWith2(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QLatin1String_StartsWith2(@ptrCast(self), s);
    }

    pub fn StartsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QLatin1String_StartsWith3(@ptrCast(self), @ptrCast(c));
    }

    pub fn StartsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QLatin1String_StartsWith4(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn EndsWith(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QLatin1String_EndsWith(@ptrCast(self), @ptrCast(s));
    }

    pub fn EndsWith2(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QLatin1String_EndsWith2(@ptrCast(self), s);
    }

    pub fn EndsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QLatin1String_EndsWith3(@ptrCast(self), @ptrCast(c));
    }

    pub fn EndsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QLatin1String_EndsWith4(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn IndexOf(self: ?*anyopaque, s: []const u8) i64 {
        return qtc.QLatin1String_IndexOf(@ptrCast(self), @ptrCast(s));
    }

    pub fn IndexOf2(self: ?*anyopaque, s: QLatin1StringView) i64 {
        return qtc.QLatin1String_IndexOf2(@ptrCast(self), s);
    }

    pub fn IndexOf3(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QLatin1String_IndexOf3(@ptrCast(self), @ptrCast(c));
    }

    pub fn Contains(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QLatin1String_Contains(@ptrCast(self), @ptrCast(s));
    }

    pub fn Contains2(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QLatin1String_Contains2(@ptrCast(self), s);
    }

    pub fn Contains3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QLatin1String_Contains3(@ptrCast(self), @ptrCast(c));
    }

    pub fn LastIndexOf(self: ?*anyopaque, s: []const u8) i64 {
        return qtc.QLatin1String_LastIndexOf(@ptrCast(self), @ptrCast(s));
    }

    pub fn LastIndexOf2(self: ?*anyopaque, s: []const u8, from: i64) i64 {
        return qtc.QLatin1String_LastIndexOf2(@ptrCast(self), @ptrCast(s), from);
    }

    pub fn LastIndexOf3(self: ?*anyopaque, s: QLatin1StringView) i64 {
        return qtc.QLatin1String_LastIndexOf3(@ptrCast(self), s);
    }

    pub fn LastIndexOf4(self: ?*anyopaque, s: QLatin1StringView, from: i64) i64 {
        return qtc.QLatin1String_LastIndexOf4(@ptrCast(self), s, from);
    }

    pub fn LastIndexOf5(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QLatin1String_LastIndexOf5(@ptrCast(self), @ptrCast(c));
    }

    pub fn LastIndexOf6(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QLatin1String_LastIndexOf6(@ptrCast(self), @ptrCast(c), from);
    }

    pub fn Count(self: ?*anyopaque, str: []const u8) i64 {
        return qtc.QLatin1String_Count(@ptrCast(self), @ptrCast(str));
    }

    pub fn Count2(self: ?*anyopaque, str: QLatin1StringView) i64 {
        return qtc.QLatin1String_Count2(@ptrCast(self), str);
    }

    pub fn Count3(self: ?*anyopaque, ch: QtC.QChar) i64 {
        return qtc.QLatin1String_Count3(@ptrCast(self), @ptrCast(ch));
    }

    pub fn ToShort(self: ?*anyopaque, ) i16 {
        return qtc.QLatin1String_ToShort(@ptrCast(self));
    }

    pub fn ToUShort(self: ?*anyopaque, ) u16 {
        return qtc.QLatin1String_ToUShort(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QLatin1String_ToInt(@ptrCast(self));
    }

    pub fn ToUInt(self: ?*anyopaque, ) u32 {
        return qtc.QLatin1String_ToUInt(@ptrCast(self));
    }

    pub fn ToLong(self: ?*anyopaque, ) long {
        return qtc.QLatin1String_ToLong(@ptrCast(self));
    }

    pub fn ToULong(self: ?*anyopaque, ) unsigned long {
        return qtc.QLatin1String_ToULong(@ptrCast(self));
    }

    pub fn ToLongLong(self: ?*anyopaque, ) i64 {
        return qtc.QLatin1String_ToLongLong(@ptrCast(self));
    }

    pub fn ToULongLong(self: ?*anyopaque, ) u64 {
        return qtc.QLatin1String_ToULongLong(@ptrCast(self));
    }

    pub fn ToFloat(self: ?*anyopaque, ) f32 {
        return qtc.QLatin1String_ToFloat(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QLatin1String_ToDouble(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QLatin1String_Begin(@ptrCast(self)));
    }

    pub fn Cbegin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QLatin1String_Cbegin(@ptrCast(self)));
    }

    pub fn End(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QLatin1String_End(@ptrCast(self)));
    }

    pub fn Cend(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QLatin1String_Cend(@ptrCast(self)));
    }

    pub fn Rbegin(self: ?*anyopaque, ) std::reverse_iterator<const char *> {
        return qtc.QLatin1String_Rbegin(@ptrCast(self));
    }

    pub fn Crbegin(self: ?*anyopaque, ) std::reverse_iterator<const char *> {
        return qtc.QLatin1String_Crbegin(@ptrCast(self));
    }

    pub fn Rend(self: ?*anyopaque, ) std::reverse_iterator<const char *> {
        return qtc.QLatin1String_Rend(@ptrCast(self));
    }

    pub fn Crend(self: ?*anyopaque, ) std::reverse_iterator<const char *> {
        return qtc.QLatin1String_Crend(@ptrCast(self));
    }

    pub fn MaxSize(self: ?*anyopaque, ) i64 {
        return qtc.QLatin1String_MaxSize(@ptrCast(self));
    }

    pub fn MaxSize2() i64 {
        return qtc.QLatin1String_MaxSize2();
    }

    pub fn Mid(self: ?*anyopaque, pos: i64) QLatin1StringView {
        return qtc.QLatin1String_Mid(@ptrCast(self), pos);
    }

    pub fn Left(self: ?*anyopaque, n: i64) QLatin1StringView {
        return qtc.QLatin1String_Left(@ptrCast(self), n);
    }

    pub fn Right(self: ?*anyopaque, n: i64) QLatin1StringView {
        return qtc.QLatin1String_Right(@ptrCast(self), n);
    }

    pub fn Sliced(self: ?*anyopaque, pos: i64) QLatin1StringView {
        return qtc.QLatin1String_Sliced(@ptrCast(self), pos);
    }

    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64) QLatin1StringView {
        return qtc.QLatin1String_Sliced2(@ptrCast(self), pos, n);
    }

    pub fn First2(self: ?*anyopaque, n: i64) QLatin1StringView {
        return qtc.QLatin1String_First2(@ptrCast(self), n);
    }

    pub fn Last2(self: ?*anyopaque, n: i64) QLatin1StringView {
        return qtc.QLatin1String_Last2(@ptrCast(self), n);
    }

    pub fn Chopped(self: ?*anyopaque, n: i64) QLatin1StringView {
        return qtc.QLatin1String_Chopped(@ptrCast(self), n);
    }

    pub fn Slice(self: ?*anyopaque, pos: i64) QLatin1StringView {
        return @ptrCast(qtc.QLatin1String_Slice(@ptrCast(self), pos));
    }

    pub fn Slice2(self: ?*anyopaque, pos: i64, n: i64) QLatin1StringView {
        return @ptrCast(qtc.QLatin1String_Slice2(@ptrCast(self), pos, n));
    }

    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QLatin1String_Chop(@ptrCast(self), n);
    }

    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QLatin1String_Truncate(@ptrCast(self), n);
    }

    pub fn Trimmed(self: ?*anyopaque, ) QLatin1StringView {
        return qtc.QLatin1String_Trimmed(@ptrCast(self));
    }

    pub fn Compare22(self: ?*anyopaque, other: []const u8, cs: i32) i32 {
        return qtc.QLatin1String_Compare22(@ptrCast(self), @ptrCast(other), @intCast(cs));
    }

    pub fn Compare23(self: ?*anyopaque, other: QLatin1StringView, cs: i32) i32 {
        return qtc.QLatin1String_Compare23(@ptrCast(self), other, @intCast(cs));
    }

    pub fn Compare24(self: ?*anyopaque, other: QUtf8StringView, cs: i32) i32 {
        return qtc.QLatin1String_Compare24(@ptrCast(self), other, @intCast(cs));
    }

    pub fn StartsWith22(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QLatin1String_StartsWith22(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn StartsWith23(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QLatin1String_StartsWith23(@ptrCast(self), s, @intCast(cs));
    }

    pub fn EndsWith22(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QLatin1String_EndsWith22(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn EndsWith23(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QLatin1String_EndsWith23(@ptrCast(self), s, @intCast(cs));
    }

    pub fn IndexOf22(self: ?*anyopaque, s: []const u8, from: i64) i64 {
        return qtc.QLatin1String_IndexOf22(@ptrCast(self), @ptrCast(s), from);
    }

    pub fn IndexOf32(self: ?*anyopaque, s: []const u8, from: i64, cs: i32) i64 {
        return qtc.QLatin1String_IndexOf32(@ptrCast(self), @ptrCast(s), from, @intCast(cs));
    }

    pub fn IndexOf23(self: ?*anyopaque, s: QLatin1StringView, from: i64) i64 {
        return qtc.QLatin1String_IndexOf23(@ptrCast(self), s, from);
    }

    pub fn IndexOf33(self: ?*anyopaque, s: QLatin1StringView, from: i64, cs: i32) i64 {
        return qtc.QLatin1String_IndexOf33(@ptrCast(self), s, from, @intCast(cs));
    }

    pub fn IndexOf24(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QLatin1String_IndexOf24(@ptrCast(self), @ptrCast(c), from);
    }

    pub fn IndexOf34(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QLatin1String_IndexOf34(@ptrCast(self), @ptrCast(c), from, @intCast(cs));
    }

    pub fn Contains22(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QLatin1String_Contains22(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn Contains23(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QLatin1String_Contains23(@ptrCast(self), s, @intCast(cs));
    }

    pub fn Contains24(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QLatin1String_Contains24(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn LastIndexOf22(self: ?*anyopaque, s: []const u8, cs: i32) i64 {
        return qtc.QLatin1String_LastIndexOf22(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn LastIndexOf32(self: ?*anyopaque, s: []const u8, from: i64, cs: i32) i64 {
        return qtc.QLatin1String_LastIndexOf32(@ptrCast(self), @ptrCast(s), from, @intCast(cs));
    }

    pub fn LastIndexOf23(self: ?*anyopaque, s: QLatin1StringView, cs: i32) i64 {
        return qtc.QLatin1String_LastIndexOf23(@ptrCast(self), s, @intCast(cs));
    }

    pub fn LastIndexOf33(self: ?*anyopaque, s: QLatin1StringView, from: i64, cs: i32) i64 {
        return qtc.QLatin1String_LastIndexOf33(@ptrCast(self), s, from, @intCast(cs));
    }

    pub fn LastIndexOf24(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QLatin1String_LastIndexOf24(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn LastIndexOf34(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QLatin1String_LastIndexOf34(@ptrCast(self), @ptrCast(c), from, @intCast(cs));
    }

    pub fn Count22(self: ?*anyopaque, str: []const u8, cs: i32) i64 {
        return qtc.QLatin1String_Count22(@ptrCast(self), @ptrCast(str), @intCast(cs));
    }

    pub fn Count23(self: ?*anyopaque, str: QLatin1StringView, cs: i32) i64 {
        return qtc.QLatin1String_Count23(@ptrCast(self), str, @intCast(cs));
    }

    pub fn Count24(self: ?*anyopaque, ch: QtC.QChar, cs: i32) i64 {
        return qtc.QLatin1String_Count24(@ptrCast(self), @ptrCast(ch), @intCast(cs));
    }

    pub fn ToShort1(self: ?*anyopaque, ok: *bool) i16 {
        return qtc.QLatin1String_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToShort2(self: ?*anyopaque, ok: *bool, base: i32) i16 {
        return qtc.QLatin1String_ToShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUShort1(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QLatin1String_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUShort2(self: ?*anyopaque, ok: *bool, base: i32) u16 {
        return qtc.QLatin1String_ToUShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QLatin1String_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToInt2(self: ?*anyopaque, ok: *bool, base: i32) i32 {
        return qtc.QLatin1String_ToInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QLatin1String_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUInt2(self: ?*anyopaque, ok: *bool, base: i32) u32 {
        return qtc.QLatin1String_ToUInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLong1(self: ?*anyopaque, ok: *bool) long {
        return qtc.QLatin1String_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLong2(self: ?*anyopaque, ok: *bool, base: i32) long {
        return qtc.QLatin1String_ToLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULong1(self: ?*anyopaque, ok: *bool) unsigned long {
        return qtc.QLatin1String_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULong2(self: ?*anyopaque, ok: *bool, base: i32) unsigned long {
        return qtc.QLatin1String_ToULong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QLatin1String_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLongLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QLatin1String_ToLongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QLatin1String_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULongLong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QLatin1String_ToULongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QLatin1String_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QLatin1String_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn Mid2(self: ?*anyopaque, pos: i64, n: i64) QLatin1StringView {
        return qtc.QLatin1String_Mid2(@ptrCast(self), pos, n);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLatin1String_Delete(@ptrCast(self));
    }
};
