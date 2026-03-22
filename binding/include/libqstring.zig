const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstring.html
pub const qstring = struct {

    /// New constructs a new QString object.
    pub fn New() QtC.QString {
        return qtc.QString_new();
    }


    /// New2 constructs a new QString object.
    pub fn New2(unicode: ?*anyopaque) QtC.QString {
        return qtc.QString_new2(@ptrCast(unicode));
    }


    /// New3 constructs a new QString object.
    pub fn New3(c: QtC.QChar) QtC.QString {
        return qtc.QString_new3(@ptrCast(c));
    }


    /// New4 constructs a new QString object.
    pub fn New4(size: i64, c: QtC.QChar) QtC.QString {
        return qtc.QString_new4(size, @ptrCast(c));
    }


    /// New5 constructs a new QString object.
    pub fn New5(latin1: QLatin1StringView) QtC.QString {
        return qtc.QString_new5(latin1);
    }


    /// New6 constructs a new QString object.
    pub fn New6(sv: []const u8) QtC.QString {
        return qtc.QString_new6(@ptrCast(sv));
    }


    /// New7 constructs a new QString object.
    pub fn New7(param1: []const u8) QtC.QString {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QString_new7(param1_str);
    }


    /// New8 constructs a new QString object.
    pub fn New8(ch: []const u8) QtC.QString {
        return qtc.QString_new8(@ptrCast(ch));
    }


    /// New9 constructs a new QString object.
    pub fn New9(a: []u8) QtC.QString {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
return qtc.QString_new9(a_str);
    }


    /// New10 constructs a new QString object.
    pub fn New10(size: i64, param2: i32) QtC.QString {
        return qtc.QString_new10(size, @intCast(param2));
    }


    /// New11 constructs a new QString object.
    pub fn New11(unicode: ?*anyopaque, size: i64) QtC.QString {
        return qtc.QString_new11(@ptrCast(unicode), size);
    }


    pub fn OperatorAssign(self: ?*anyopaque, c: QtC.QChar) void {
        qtc.QString_OperatorAssign(@ptrCast(self), @ptrCast(c));
    }

    pub fn OperatorAssign2(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QString_OperatorAssign2(@ptrCast(self), param1_str);
    }

    pub fn OperatorAssign3(self: ?*anyopaque, latin1: QLatin1StringView) void {
        qtc.QString_OperatorAssign3(@ptrCast(self), latin1);
    }

    pub fn Swap(self: ?*anyopaque, other: []const u8) void {
        const other_str = qtc.libqt_string{
    .len = other.len,
    .data = other.ptr,
};
qtc.QString_Swap(@ptrCast(self), other_str);
    }

    pub fn MaxSize() i64 {
        return qtc.QString_MaxSize();
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QString_Size(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i64 {
        return qtc.QString_Count(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i64 {
        return qtc.QString_Length(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QString_IsEmpty(@ptrCast(self));
    }

    pub fn Resize(self: ?*anyopaque, size: i64) void {
        qtc.QString_Resize(@ptrCast(self), size);
    }

    pub fn Resize2(self: ?*anyopaque, size: i64, fillChar: QtC.QChar) void {
        qtc.QString_Resize2(@ptrCast(self), size, @ptrCast(fillChar));
    }

    pub fn ResizeForOverwrite(self: ?*anyopaque, size: i64) void {
        qtc.QString_ResizeForOverwrite(@ptrCast(self), size);
    }

    pub fn Fill(self: ?*anyopaque, c: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Fill(@ptrCast(self), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Fill: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Truncate(self: ?*anyopaque, pos: i64) void {
        qtc.QString_Truncate(@ptrCast(self), pos);
    }

    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QString_Chop(@ptrCast(self), n);
    }

    pub fn Slice(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Slice(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Slice: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Slice2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Slice2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Slice2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Capacity(self: ?*anyopaque, ) i64 {
        return qtc.QString_Capacity(@ptrCast(self));
    }

    pub fn Reserve(self: ?*anyopaque, size: i64) void {
        qtc.QString_Reserve(@ptrCast(self), size);
    }

    pub fn Squeeze(self: ?*anyopaque, ) void {
        qtc.QString_Squeeze(@ptrCast(self));
    }

    pub fn Unicode(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Unicode(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Data(@ptrCast(self));
    }

    pub fn Data2(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Data2(@ptrCast(self));
    }

    pub fn ConstData(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_ConstData(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QString_Detach(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QString_IsDetached(@ptrCast(self));
    }

    pub fn IsSharedWith(self: ?*anyopaque, other: []const u8) bool {
        const other_str = qtc.libqt_string{
    .len = other.len,
    .data = other.ptr,
};
return qtc.QString_IsSharedWith(@ptrCast(self), other_str);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QString_Clear(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, i: i64) QtC.QChar {
        return qtc.QString_At(@ptrCast(self), i);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QChar {
        return qtc.QString_OperatorSubscript(@ptrCast(self), i);
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, i: i64) QtC.QChar {
        return qtc.QString_OperatorSubscript2(@ptrCast(self), i);
    }

    pub fn Front(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Front(@ptrCast(self));
    }

    pub fn Front2(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Front2(@ptrCast(self));
    }

    pub fn Back(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Back(@ptrCast(self));
    }

    pub fn Back2(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Back2(@ptrCast(self));
    }

    pub fn Arg(self: ?*anyopaque, a: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg2(self: ?*anyopaque, a: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg2(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg3(self: ?*anyopaque, a: long, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg3(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg4(self: ?*anyopaque, a: unsigned long, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg4(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg5(self: ?*anyopaque, a: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg5(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg6(self: ?*anyopaque, a: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg6(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg7(self: ?*anyopaque, a: i16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg7(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg8(self: ?*anyopaque, a: u16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg8(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg9(self: ?*anyopaque, a: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg9(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg9: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg10(self: ?*anyopaque, a: i8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg10(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg10: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg11(self: ?*anyopaque, a: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg11(@ptrCast(self), @ptrCast(a));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg11: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg12(self: ?*anyopaque, a: []const u8, allocator: std.mem.Allocator) []const u8 {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
const _str = qtc.QString_Arg12(@ptrCast(self), a_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg12: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg13(self: ?*anyopaque, a: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg13(@ptrCast(self), @ptrCast(a));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg13: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg14(self: ?*anyopaque, a: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg14(@ptrCast(self), a);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg14: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Asprintf(format: []const u8, : ..., allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Asprintf(@ptrCast(format), );
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Asprintf: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IndexOf(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QString_IndexOf(@ptrCast(self), @ptrCast(c));
    }

    pub fn IndexOf2(self: ?*anyopaque, s: QLatin1StringView) i64 {
        return qtc.QString_IndexOf2(@ptrCast(self), s);
    }

    pub fn IndexOf3(self: ?*anyopaque, s: []const u8) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_IndexOf3(@ptrCast(self), s_str);
    }

    pub fn IndexOf4(self: ?*anyopaque, s: []const u8) i64 {
        return qtc.QString_IndexOf4(@ptrCast(self), @ptrCast(s));
    }

    pub fn LastIndexOf(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QString_LastIndexOf(@ptrCast(self), @ptrCast(c));
    }

    pub fn LastIndexOf2(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QString_LastIndexOf2(@ptrCast(self), @ptrCast(c), from);
    }

    pub fn LastIndexOf3(self: ?*anyopaque, s: QLatin1StringView) i64 {
        return qtc.QString_LastIndexOf3(@ptrCast(self), s);
    }

    pub fn LastIndexOf4(self: ?*anyopaque, s: QLatin1StringView, from: i64) i64 {
        return qtc.QString_LastIndexOf4(@ptrCast(self), s, from);
    }

    pub fn LastIndexOf5(self: ?*anyopaque, s: []const u8) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_LastIndexOf5(@ptrCast(self), s_str);
    }

    pub fn LastIndexOf6(self: ?*anyopaque, s: []const u8, from: i64) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_LastIndexOf6(@ptrCast(self), s_str, from);
    }

    pub fn LastIndexOf7(self: ?*anyopaque, s: []const u8) i64 {
        return qtc.QString_LastIndexOf7(@ptrCast(self), @ptrCast(s));
    }

    pub fn LastIndexOf8(self: ?*anyopaque, s: []const u8, from: i64) i64 {
        return qtc.QString_LastIndexOf8(@ptrCast(self), @ptrCast(s), from);
    }

    pub fn Contains(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QString_Contains(@ptrCast(self), @ptrCast(c));
    }

    pub fn Contains2(self: ?*anyopaque, s: []const u8) bool {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_Contains2(@ptrCast(self), s_str);
    }

    pub fn Contains3(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QString_Contains3(@ptrCast(self), s);
    }

    pub fn Contains4(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QString_Contains4(@ptrCast(self), @ptrCast(s));
    }

    pub fn Count2(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QString_Count2(@ptrCast(self), @ptrCast(c));
    }

    pub fn Count3(self: ?*anyopaque, s: []const u8) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_Count3(@ptrCast(self), s_str);
    }

    pub fn Count4(self: ?*anyopaque, s: []const u8) i64 {
        return qtc.QString_Count4(@ptrCast(self), @ptrCast(s));
    }

    pub fn IndexOf5(self: ?*anyopaque, re: ?*anyopaque) i64 {
        return qtc.QString_IndexOf5(@ptrCast(self), @ptrCast(re));
    }

    pub fn LastIndexOf9(self: ?*anyopaque, re: ?*anyopaque, from: i64) i64 {
        return qtc.QString_LastIndexOf9(@ptrCast(self), @ptrCast(re), from);
    }

    pub fn Contains5(self: ?*anyopaque, re: ?*anyopaque) bool {
        return qtc.QString_Contains5(@ptrCast(self), @ptrCast(re));
    }

    pub fn Count5(self: ?*anyopaque, re: ?*anyopaque) i64 {
        return qtc.QString_Count5(@ptrCast(self), @ptrCast(re));
    }

    pub fn Section(self: ?*anyopaque, sep: QtC.QChar, start: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Section(@ptrCast(self), @ptrCast(sep), start);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Section2(self: ?*anyopaque, in_sep: []const u8, start: i64, allocator: std.mem.Allocator) []const u8 {
        const in_sep_str = qtc.libqt_string{
    .len = in_sep.len,
    .data = in_sep.ptr,
};
const _str = qtc.QString_Section2(@ptrCast(self), in_sep_str, start);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Section3(self: ?*anyopaque, re: ?*anyopaque, start: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Section3(@ptrCast(self), @ptrCast(re), start);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Left(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Left(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Left: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Right(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Right(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Right: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Mid(self: ?*anyopaque, position: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Mid(@ptrCast(self), position);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Mid: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn First(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_First(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.First: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Last(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Last(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Last: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Sliced(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Sliced(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Sliced: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Sliced2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Sliced2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Chopped(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Chopped(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Chopped: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StartsWith(self: ?*anyopaque, s: []const u8) bool {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_StartsWith(@ptrCast(self), s_str);
    }

    pub fn StartsWith2(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QString_StartsWith2(@ptrCast(self), @ptrCast(s));
    }

    pub fn StartsWith3(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QString_StartsWith3(@ptrCast(self), s);
    }

    pub fn StartsWith4(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QString_StartsWith4(@ptrCast(self), @ptrCast(c));
    }

    pub fn EndsWith(self: ?*anyopaque, s: []const u8) bool {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_EndsWith(@ptrCast(self), s_str);
    }

    pub fn EndsWith2(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QString_EndsWith2(@ptrCast(self), @ptrCast(s));
    }

    pub fn EndsWith3(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QString_EndsWith3(@ptrCast(self), s);
    }

    pub fn EndsWith4(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QString_EndsWith4(@ptrCast(self), @ptrCast(c));
    }

    pub fn IsUpper(self: ?*anyopaque, ) bool {
        return qtc.QString_IsUpper(@ptrCast(self));
    }

    pub fn IsLower(self: ?*anyopaque, ) bool {
        return qtc.QString_IsLower(@ptrCast(self));
    }

    pub fn LeftJustified(self: ?*anyopaque, width: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_LeftJustified(@ptrCast(self), width);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.LeftJustified: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RightJustified(self: ?*anyopaque, width: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_RightJustified(@ptrCast(self), width);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.RightJustified: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToLower(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_ToLower(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.ToLower: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToUpper(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_ToUpper(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.ToUpper: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToCaseFolded(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_ToCaseFolded(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.ToCaseFolded: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Trimmed(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Trimmed(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Trimmed: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Simplified(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Simplified(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Simplified: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToHtmlEscaped(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_ToHtmlEscaped(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.ToHtmlEscaped: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Insert(self: ?*anyopaque, i: i64, c: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Insert(@ptrCast(self), i, @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Insert: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Insert2(self: ?*anyopaque, i: i64, uc: ?*anyopaque, lenVal: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Insert2(@ptrCast(self), i, @ptrCast(uc), lenVal);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Insert2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Insert3(self: ?*anyopaque, i: i64, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Insert3(@ptrCast(self), i, s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Insert3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Insert4(self: ?*anyopaque, i: i64, v: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Insert4(@ptrCast(self), i, @ptrCast(v));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Insert4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Insert5(self: ?*anyopaque, i: i64, s: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Insert5(@ptrCast(self), i, s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Insert5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Insert6(self: ?*anyopaque, i: i64, s: QUtf8StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Insert6(@ptrCast(self), i, s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Insert6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, c: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Append(@ptrCast(self), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Append: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append2(self: ?*anyopaque, uc: ?*anyopaque, lenVal: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Append2(@ptrCast(self), @ptrCast(uc), lenVal);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Append2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append3(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Append3(@ptrCast(self), s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Append3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append4(self: ?*anyopaque, v: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Append4(@ptrCast(self), @ptrCast(v));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Append4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append5(self: ?*anyopaque, s: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Append5(@ptrCast(self), s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Append5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append6(self: ?*anyopaque, s: QUtf8StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Append6(@ptrCast(self), s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Append6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Prepend(self: ?*anyopaque, c: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Prepend(@ptrCast(self), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Prepend: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Prepend2(self: ?*anyopaque, uc: ?*anyopaque, lenVal: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Prepend2(@ptrCast(self), @ptrCast(uc), lenVal);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Prepend2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Prepend3(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Prepend3(@ptrCast(self), s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Prepend3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Prepend4(self: ?*anyopaque, v: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Prepend4(@ptrCast(self), @ptrCast(v));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Prepend4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Prepend5(self: ?*anyopaque, s: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Prepend5(@ptrCast(self), s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Prepend5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Prepend6(self: ?*anyopaque, s: QUtf8StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Prepend6(@ptrCast(self), s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Prepend6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Assign(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Assign(@ptrCast(self), s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Assign: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Assign2(self: ?*anyopaque, n: i64, c: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Assign2(@ptrCast(self), n, @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Assign2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, c: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_OperatorPlusAssign(@ptrCast(self), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.OperatorPlusAssign: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign2(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_OperatorPlusAssign2(@ptrCast(self), s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.OperatorPlusAssign2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign3(self: ?*anyopaque, v: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_OperatorPlusAssign3(@ptrCast(self), @ptrCast(v));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.OperatorPlusAssign3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign4(self: ?*anyopaque, s: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_OperatorPlusAssign4(@ptrCast(self), s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.OperatorPlusAssign4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign5(self: ?*anyopaque, s: QUtf8StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_OperatorPlusAssign5(@ptrCast(self), s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.OperatorPlusAssign5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove(self: ?*anyopaque, i: i64, lenVal: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Remove(@ptrCast(self), i, lenVal);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Remove: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove2(self: ?*anyopaque, c: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Remove2(@ptrCast(self), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Remove2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove3(self: ?*anyopaque, s: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Remove3(@ptrCast(self), s);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Remove3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove4(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Remove4(@ptrCast(self), s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Remove4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RemoveAt(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_RemoveAt(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.RemoveAt: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RemoveFirst(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_RemoveFirst(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.RemoveFirst: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RemoveLast(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_RemoveLast(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.RemoveLast: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace(self: ?*anyopaque, i: i64, lenVal: i64, after: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace(@ptrCast(self), i, lenVal, @ptrCast(after));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace2(self: ?*anyopaque, i: i64, lenVal: i64, s: ?*anyopaque, slen: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace2(@ptrCast(self), i, lenVal, @ptrCast(s), slen);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace3(self: ?*anyopaque, i: i64, lenVal: i64, after: []const u8, allocator: std.mem.Allocator) []const u8 {
        const after_str = qtc.libqt_string{
    .len = after.len,
    .data = after.ptr,
};
const _str = qtc.QString_Replace3(@ptrCast(self), i, lenVal, after_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace4(self: ?*anyopaque, before: QtC.QChar, after: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace4(@ptrCast(self), @ptrCast(before), @ptrCast(after));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace5(self: ?*anyopaque, before: ?*anyopaque, blen: i64, after: ?*anyopaque, alen: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace5(@ptrCast(self), @ptrCast(before), blen, @ptrCast(after), alen);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace6(self: ?*anyopaque, before: QLatin1StringView, after: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace6(@ptrCast(self), before, after);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace7(self: ?*anyopaque, before: QLatin1StringView, after: []const u8, allocator: std.mem.Allocator) []const u8 {
        const after_str = qtc.libqt_string{
    .len = after.len,
    .data = after.ptr,
};
const _str = qtc.QString_Replace7(@ptrCast(self), before, after_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace8(self: ?*anyopaque, before: []const u8, after: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const before_str = qtc.libqt_string{
    .len = before.len,
    .data = before.ptr,
};
const _str = qtc.QString_Replace8(@ptrCast(self), before_str, after);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace9(self: ?*anyopaque, before: []const u8, after: []const u8, allocator: std.mem.Allocator) []const u8 {
        const before_str = qtc.libqt_string{
    .len = before.len,
    .data = before.ptr,
};
const after_str = qtc.libqt_string{
    .len = after.len,
    .data = after.ptr,
};
const _str = qtc.QString_Replace9(@ptrCast(self), before_str, after_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace9: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace10(self: ?*anyopaque, c: QtC.QChar, after: []const u8, allocator: std.mem.Allocator) []const u8 {
        const after_str = qtc.libqt_string{
    .len = after.len,
    .data = after.ptr,
};
const _str = qtc.QString_Replace10(@ptrCast(self), @ptrCast(c), after_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace10: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace11(self: ?*anyopaque, c: QtC.QChar, after: QLatin1StringView, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace11(@ptrCast(self), @ptrCast(c), after);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace11: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace12(self: ?*anyopaque, re: ?*anyopaque, after: []const u8, allocator: std.mem.Allocator) []const u8 {
        const after_str = qtc.libqt_string{
    .len = after.len,
    .data = after.ptr,
};
const _str = qtc.QString_Replace12(@ptrCast(self), @ptrCast(re), after_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace12: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove5(self: ?*anyopaque, re: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Remove5(@ptrCast(self), @ptrCast(re));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Remove5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Split(self: ?*anyopaque, sep: []const u8) []const u8 {
        const sep_str = qtc.libqt_string{
    .len = sep.len,
    .data = sep.ptr,
};
return qtc.QString_Split(@ptrCast(self), sep_str);
    }

    pub fn Split2(self: ?*anyopaque, sep: QtC.QChar) []const u8 {
        return qtc.QString_Split2(@ptrCast(self), @ptrCast(sep));
    }

    pub fn Split3(self: ?*anyopaque, sep: ?*anyopaque) []const u8 {
        return qtc.QString_Split3(@ptrCast(self), @ptrCast(sep));
    }

    pub fn Normalized(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Normalized(@ptrCast(self), @intCast(mode));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Normalized: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Repeated(self: ?*anyopaque, times: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Repeated(@ptrCast(self), times);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Repeated: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Utf16(self: ?*anyopaque, ) u16 {
        return @ptrCast(qtc.QString_Utf16(@ptrCast(self)));
    }

    pub fn ToLatin1(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QString_ToLatin1(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstring.ToLatin1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToUtf8(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QString_ToUtf8(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstring.ToUtf8: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToLocal8Bit(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QString_ToLocal8Bit(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstring.ToLocal8Bit: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToUcs4(self: ?*anyopaque, ) []const u8 {
        return qtc.QString_ToUcs4(@ptrCast(self));
    }

    pub fn FromLatin1(ba: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromLatin1(@ptrCast(ba));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromLatin1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromLatin12(str: []const u8, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromLatin12(@ptrCast(str), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromLatin12: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromUtf8(utf8: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromUtf8(@ptrCast(utf8));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUtf8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromUtf82(utf8: []const u8, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromUtf82(@ptrCast(utf8), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUtf82: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromLocal8Bit(ba: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromLocal8Bit(@ptrCast(ba));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromLocal8Bit: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromLocal8Bit2(str: []const u8, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromLocal8Bit2(@ptrCast(str), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromLocal8Bit2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromRawData(param1: ?*anyopaque, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromRawData(@ptrCast(param1), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromRawData: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromUtf162(str: *const u16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromUtf162(@ptrCast(str));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUtf162: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromUcs42(str: *const u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromUcs42(@ptrCast(str));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUcs42: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetRawData(self: ?*anyopaque, unicode: ?*anyopaque, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetRawData(@ptrCast(self), @ptrCast(unicode), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetRawData: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetUnicode(self: ?*anyopaque, unicode: ?*anyopaque, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetUnicode(@ptrCast(self), @ptrCast(unicode), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetUnicode: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetUtf16(self: ?*anyopaque, utf16: *const u16, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetUtf16(@ptrCast(self), @ptrCast(utf16), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetUtf16: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Compare(self: ?*anyopaque, s: []const u8) i32 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_Compare(@ptrCast(self), s_str);
    }

    pub fn Compare2(self: ?*anyopaque, other: QLatin1StringView) i32 {
        return qtc.QString_Compare2(@ptrCast(self), other);
    }

    pub fn Compare3(self: ?*anyopaque, s: []const u8) i32 {
        return qtc.QString_Compare3(@ptrCast(self), @ptrCast(s));
    }

    pub fn Compare4(self: ?*anyopaque, ch: QtC.QChar) i32 {
        return qtc.QString_Compare4(@ptrCast(self), @ptrCast(ch));
    }

    pub fn Compare5(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QString_Compare5(s1_str, s2_str);
    }

    pub fn Compare6(s1: []const u8, s2: QLatin1StringView) i32 {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
return qtc.QString_Compare6(s1_str, s2);
    }

    pub fn Compare7(s1: QLatin1StringView, s2: []const u8) i32 {
        const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QString_Compare7(s1, s2_str);
    }

    pub fn Compare8(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
return qtc.QString_Compare8(s1_str, @ptrCast(s2));
    }

    pub fn Compare9(s1: []const u8, s2: []const u8) i32 {
        const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QString_Compare9(@ptrCast(s1), s2_str);
    }

    pub fn LocaleAwareCompare(self: ?*anyopaque, s: []const u8) i32 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_LocaleAwareCompare(@ptrCast(self), s_str);
    }

    pub fn LocaleAwareCompare2(self: ?*anyopaque, s: []const u8) i32 {
        return qtc.QString_LocaleAwareCompare2(@ptrCast(self), @ptrCast(s));
    }

    pub fn LocaleAwareCompare3(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QString_LocaleAwareCompare3(s1_str, s2_str);
    }

    pub fn LocaleAwareCompare4(s1: []const u8, s2: []const u8) i32 {
        return qtc.QString_LocaleAwareCompare4(@ptrCast(s1), @ptrCast(s2));
    }

    pub fn ToShort(self: ?*anyopaque, ) i16 {
        return qtc.QString_ToShort(@ptrCast(self));
    }

    pub fn ToUShort(self: ?*anyopaque, ) u16 {
        return qtc.QString_ToUShort(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QString_ToInt(@ptrCast(self));
    }

    pub fn ToUInt(self: ?*anyopaque, ) u32 {
        return qtc.QString_ToUInt(@ptrCast(self));
    }

    pub fn ToLong(self: ?*anyopaque, ) long {
        return qtc.QString_ToLong(@ptrCast(self));
    }

    pub fn ToULong(self: ?*anyopaque, ) unsigned long {
        return qtc.QString_ToULong(@ptrCast(self));
    }

    pub fn ToLongLong(self: ?*anyopaque, ) i64 {
        return qtc.QString_ToLongLong(@ptrCast(self));
    }

    pub fn ToULongLong(self: ?*anyopaque, ) u64 {
        return qtc.QString_ToULongLong(@ptrCast(self));
    }

    pub fn ToFloat(self: ?*anyopaque, ) f32 {
        return qtc.QString_ToFloat(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QString_ToDouble(@ptrCast(self));
    }

    pub fn SetNum(self: ?*anyopaque, param1: i16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum2(self: ?*anyopaque, param1: u16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum2(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum3(self: ?*anyopaque, param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum3(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum4(self: ?*anyopaque, param1: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum4(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum5(self: ?*anyopaque, param1: long, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum5(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum6(self: ?*anyopaque, param1: unsigned long, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum6(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum7(self: ?*anyopaque, param1: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum7(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum8(self: ?*anyopaque, param1: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum8(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum9(self: ?*anyopaque, param1: f32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum9(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum9: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum10(self: ?*anyopaque, param1: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum10(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum10: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number(param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number2(param1: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number2(param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number3(param1: long, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number3(param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number4(param1: unsigned long, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number4(param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number5(param1: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number5(param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number6(param1: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number6(param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number7(param1: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number7(param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorAssign4(self: ?*anyopaque, ch: []const u8) void {
        qtc.QString_OperatorAssign4(@ptrCast(self), @ptrCast(ch));
    }

    pub fn OperatorAssign5(self: ?*anyopaque, a: []u8) void {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
qtc.QString_OperatorAssign5(@ptrCast(self), a_str);
    }

    pub fn Prepend7(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Prepend7(@ptrCast(self), @ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Prepend7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Prepend8(self: ?*anyopaque, s: []u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Prepend8(@ptrCast(self), s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Prepend8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append7(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Append7(@ptrCast(self), @ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Append7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append8(self: ?*anyopaque, s: []u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Append8(@ptrCast(self), s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Append8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Insert7(self: ?*anyopaque, i: i64, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Insert7(@ptrCast(self), i, @ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Insert7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Insert8(self: ?*anyopaque, i: i64, s: []u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Insert8(@ptrCast(self), i, s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Insert8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign6(self: ?*anyopaque, s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_OperatorPlusAssign6(@ptrCast(self), @ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.OperatorPlusAssign6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusAssign7(self: ?*anyopaque, s: []u8, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_OperatorPlusAssign7(@ptrCast(self), s_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.OperatorPlusAssign7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Begin(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Begin(@ptrCast(self));
    }

    pub fn Begin2(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Begin2(@ptrCast(self));
    }

    pub fn Cbegin(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Cbegin(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_ConstBegin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_End(@ptrCast(self));
    }

    pub fn End2(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_End2(@ptrCast(self));
    }

    pub fn Cend(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_Cend(@ptrCast(self));
    }

    pub fn ConstEnd(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QString_ConstEnd(@ptrCast(self));
    }

    pub fn Rbegin(self: ?*anyopaque, ) std::reverse_iterator<QChar *> {
        return qtc.QString_Rbegin(@ptrCast(self));
    }

    pub fn Rend(self: ?*anyopaque, ) std::reverse_iterator<QChar *> {
        return qtc.QString_Rend(@ptrCast(self));
    }

    pub fn Rbegin2(self: ?*anyopaque, ) std::reverse_iterator<const QChar *> {
        return qtc.QString_Rbegin2(@ptrCast(self));
    }

    pub fn Rend2(self: ?*anyopaque, ) std::reverse_iterator<const QChar *> {
        return qtc.QString_Rend2(@ptrCast(self));
    }

    pub fn Crbegin(self: ?*anyopaque, ) std::reverse_iterator<const QChar *> {
        return qtc.QString_Crbegin(@ptrCast(self));
    }

    pub fn Crend(self: ?*anyopaque, ) std::reverse_iterator<const QChar *> {
        return qtc.QString_Crend(@ptrCast(self));
    }

    pub fn PushBack(self: ?*anyopaque, c: QtC.QChar) void {
        qtc.QString_PushBack(@ptrCast(self), @ptrCast(c));
    }

    pub fn PushBack2(self: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
qtc.QString_PushBack2(@ptrCast(self), s_str);
    }

    pub fn PushFront(self: ?*anyopaque, c: QtC.QChar) void {
        qtc.QString_PushFront(@ptrCast(self), @ptrCast(c));
    }

    pub fn PushFront2(self: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
qtc.QString_PushFront2(@ptrCast(self), s_str);
    }

    pub fn ShrinkToFit(self: ?*anyopaque, ) void {
        qtc.QString_ShrinkToFit(@ptrCast(self));
    }

    pub fn Erase(self: ?*anyopaque, first: ?*anyopaque, last: ?*anyopaque) QtC.QChar {
        return qtc.QString_Erase(@ptrCast(self), @ptrCast(first), @ptrCast(last));
    }

    pub fn Erase2(self: ?*anyopaque, it: ?*anyopaque) QtC.QChar {
        return qtc.QString_Erase2(@ptrCast(self), @ptrCast(it));
    }

    pub fn MaxSize2(self: ?*anyopaque, ) i64 {
        return qtc.QString_MaxSize2(@ptrCast(self));
    }

    pub fn FromStdWString(s: *const std::wstring, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromStdWString(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromStdWString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToStdWString(self: ?*anyopaque, ) std::wstring {
        return qtc.QString_ToStdWString(@ptrCast(self));
    }

    pub fn FromStdU16String(s: *const std::u16string, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromStdU16String(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromStdU16String: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToStdU16String(self: ?*anyopaque, ) std::u16string {
        return qtc.QString_ToStdU16String(@ptrCast(self));
    }

    pub fn FromStdU32String(s: *const std::u32string, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromStdU32String(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromStdU32String: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToStdU32String(self: ?*anyopaque, ) std::u32string {
        return qtc.QString_ToStdU32String(@ptrCast(self));
    }

    pub fn OperatorbasicStringView(self: ?*anyopaque, ) std::u16string_view {
        return qtc.QString_OperatorbasicStringView(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QString_IsNull(@ptrCast(self));
    }

    pub fn IsRightToLeft(self: ?*anyopaque, ) bool {
        return qtc.QString_IsRightToLeft(@ptrCast(self));
    }

    pub fn IsValidUtf16(self: ?*anyopaque, ) bool {
        return qtc.QString_IsValidUtf16(@ptrCast(self));
    }

    pub fn Fill2(self: ?*anyopaque, c: QtC.QChar, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Fill2(@ptrCast(self), @ptrCast(c), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Fill2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg22(self: ?*anyopaque, a: i64, fieldwidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg22(@ptrCast(self), a, fieldwidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg22: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg32(self: ?*anyopaque, a: i64, fieldwidth: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg32(@ptrCast(self), a, fieldwidth, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg32: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg42(self: ?*anyopaque, a: i64, fieldwidth: i32, base: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg42(@ptrCast(self), a, fieldwidth, base, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg42: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg23(self: ?*anyopaque, a: u64, fieldwidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg23(@ptrCast(self), a, fieldwidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg23: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg33(self: ?*anyopaque, a: u64, fieldwidth: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg33(@ptrCast(self), a, fieldwidth, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg33: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg43(self: ?*anyopaque, a: u64, fieldwidth: i32, base: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg43(@ptrCast(self), a, fieldwidth, base, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg43: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg24(self: ?*anyopaque, a: long, fieldwidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg24(@ptrCast(self), a, fieldwidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg24: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg34(self: ?*anyopaque, a: long, fieldwidth: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg34(@ptrCast(self), a, fieldwidth, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg34: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg44(self: ?*anyopaque, a: long, fieldwidth: i32, base: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg44(@ptrCast(self), a, fieldwidth, base, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg44: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg25(self: ?*anyopaque, a: unsigned long, fieldwidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg25(@ptrCast(self), a, fieldwidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg25: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg35(self: ?*anyopaque, a: unsigned long, fieldwidth: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg35(@ptrCast(self), a, fieldwidth, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg35: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg45(self: ?*anyopaque, a: unsigned long, fieldwidth: i32, base: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg45(@ptrCast(self), a, fieldwidth, base, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg45: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg26(self: ?*anyopaque, a: i32, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg26(@ptrCast(self), a, fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg26: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg36(self: ?*anyopaque, a: i32, fieldWidth: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg36(@ptrCast(self), a, fieldWidth, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg36: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg46(self: ?*anyopaque, a: i32, fieldWidth: i32, base: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg46(@ptrCast(self), a, fieldWidth, base, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg46: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg27(self: ?*anyopaque, a: u32, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg27(@ptrCast(self), a, fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg27: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg37(self: ?*anyopaque, a: u32, fieldWidth: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg37(@ptrCast(self), a, fieldWidth, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg37: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg47(self: ?*anyopaque, a: u32, fieldWidth: i32, base: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg47(@ptrCast(self), a, fieldWidth, base, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg47: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg28(self: ?*anyopaque, a: i16, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg28(@ptrCast(self), a, fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg28: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg38(self: ?*anyopaque, a: i16, fieldWidth: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg38(@ptrCast(self), a, fieldWidth, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg38: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg48(self: ?*anyopaque, a: i16, fieldWidth: i32, base: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg48(@ptrCast(self), a, fieldWidth, base, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg48: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg29(self: ?*anyopaque, a: u16, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg29(@ptrCast(self), a, fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg29: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg39(self: ?*anyopaque, a: u16, fieldWidth: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg39(@ptrCast(self), a, fieldWidth, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg39: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg49(self: ?*anyopaque, a: u16, fieldWidth: i32, base: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg49(@ptrCast(self), a, fieldWidth, base, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg49: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg210(self: ?*anyopaque, a: f64, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg210(@ptrCast(self), a, fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg210: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg310(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg310(@ptrCast(self), a, fieldWidth, format);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg310: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg410(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg410(@ptrCast(self), a, fieldWidth, format, precision);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg410: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg52(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8, precision: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg52(@ptrCast(self), a, fieldWidth, format, precision, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg52: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg211(self: ?*anyopaque, a: i8, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg211(@ptrCast(self), a, fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg211: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg311(self: ?*anyopaque, a: i8, fieldWidth: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg311(@ptrCast(self), a, fieldWidth, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg311: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg212(self: ?*anyopaque, a: QtC.QChar, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg212(@ptrCast(self), @ptrCast(a), fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg212: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg312(self: ?*anyopaque, a: QtC.QChar, fieldWidth: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg312(@ptrCast(self), @ptrCast(a), fieldWidth, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg312: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg213(self: ?*anyopaque, a: []const u8, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
const _str = qtc.QString_Arg213(@ptrCast(self), a_str, fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg213: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg313(self: ?*anyopaque, a: []const u8, fieldWidth: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const a_str = qtc.libqt_string{
    .len = a.len,
    .data = a.ptr,
};
const _str = qtc.QString_Arg313(@ptrCast(self), a_str, fieldWidth, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg313: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg214(self: ?*anyopaque, a: []const u8, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg214(@ptrCast(self), @ptrCast(a), fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg214: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg314(self: ?*anyopaque, a: []const u8, fieldWidth: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg314(@ptrCast(self), @ptrCast(a), fieldWidth, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg314: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg215(self: ?*anyopaque, a: QLatin1StringView, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg215(@ptrCast(self), a, fieldWidth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg215: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arg315(self: ?*anyopaque, a: QLatin1StringView, fieldWidth: i32, fillChar: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Arg315(@ptrCast(self), a, fieldWidth, @ptrCast(fillChar));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Arg315: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IndexOf22(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QString_IndexOf22(@ptrCast(self), @ptrCast(c), from);
    }

    pub fn IndexOf32(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QString_IndexOf32(@ptrCast(self), @ptrCast(c), from, @intCast(cs));
    }

    pub fn IndexOf23(self: ?*anyopaque, s: QLatin1StringView, from: i64) i64 {
        return qtc.QString_IndexOf23(@ptrCast(self), s, from);
    }

    pub fn IndexOf33(self: ?*anyopaque, s: QLatin1StringView, from: i64, cs: i32) i64 {
        return qtc.QString_IndexOf33(@ptrCast(self), s, from, @intCast(cs));
    }

    pub fn IndexOf24(self: ?*anyopaque, s: []const u8, from: i64) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_IndexOf24(@ptrCast(self), s_str, from);
    }

    pub fn IndexOf34(self: ?*anyopaque, s: []const u8, from: i64, cs: i32) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_IndexOf34(@ptrCast(self), s_str, from, @intCast(cs));
    }

    pub fn IndexOf25(self: ?*anyopaque, s: []const u8, from: i64) i64 {
        return qtc.QString_IndexOf25(@ptrCast(self), @ptrCast(s), from);
    }

    pub fn IndexOf35(self: ?*anyopaque, s: []const u8, from: i64, cs: i32) i64 {
        return qtc.QString_IndexOf35(@ptrCast(self), @ptrCast(s), from, @intCast(cs));
    }

    pub fn LastIndexOf22(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QString_LastIndexOf22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn LastIndexOf32(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QString_LastIndexOf32(@ptrCast(self), @ptrCast(c), from, @intCast(cs));
    }

    pub fn LastIndexOf23(self: ?*anyopaque, s: QLatin1StringView, cs: i32) i64 {
        return qtc.QString_LastIndexOf23(@ptrCast(self), s, @intCast(cs));
    }

    pub fn LastIndexOf33(self: ?*anyopaque, s: QLatin1StringView, from: i64, cs: i32) i64 {
        return qtc.QString_LastIndexOf33(@ptrCast(self), s, from, @intCast(cs));
    }

    pub fn LastIndexOf24(self: ?*anyopaque, s: []const u8, cs: i32) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_LastIndexOf24(@ptrCast(self), s_str, @intCast(cs));
    }

    pub fn LastIndexOf34(self: ?*anyopaque, s: []const u8, from: i64, cs: i32) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_LastIndexOf34(@ptrCast(self), s_str, from, @intCast(cs));
    }

    pub fn LastIndexOf25(self: ?*anyopaque, s: []const u8, cs: i32) i64 {
        return qtc.QString_LastIndexOf25(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn LastIndexOf35(self: ?*anyopaque, s: []const u8, from: i64, cs: i32) i64 {
        return qtc.QString_LastIndexOf35(@ptrCast(self), @ptrCast(s), from, @intCast(cs));
    }

    pub fn Contains22(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QString_Contains22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn Contains23(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_Contains23(@ptrCast(self), s_str, @intCast(cs));
    }

    pub fn Contains24(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QString_Contains24(@ptrCast(self), s, @intCast(cs));
    }

    pub fn Contains25(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QString_Contains25(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn Count22(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QString_Count22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn Count23(self: ?*anyopaque, s: []const u8, cs: i32) i64 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_Count23(@ptrCast(self), s_str, @intCast(cs));
    }

    pub fn Count24(self: ?*anyopaque, s: []const u8, cs: i32) i64 {
        return qtc.QString_Count24(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn IndexOf26(self: ?*anyopaque, re: ?*anyopaque, from: i64) i64 {
        return qtc.QString_IndexOf26(@ptrCast(self), @ptrCast(re), from);
    }

    pub fn IndexOf36(self: ?*anyopaque, re: ?*anyopaque, from: i64, rmatch: ?*anyopaque) i64 {
        return qtc.QString_IndexOf36(@ptrCast(self), @ptrCast(re), from, @ptrCast(rmatch));
    }

    pub fn LastIndexOf36(self: ?*anyopaque, re: ?*anyopaque, from: i64, rmatch: ?*anyopaque) i64 {
        return qtc.QString_LastIndexOf36(@ptrCast(self), @ptrCast(re), from, @ptrCast(rmatch));
    }

    pub fn Contains26(self: ?*anyopaque, re: ?*anyopaque, rmatch: ?*anyopaque) bool {
        return qtc.QString_Contains26(@ptrCast(self), @ptrCast(re), @ptrCast(rmatch));
    }

    pub fn Section32(self: ?*anyopaque, sep: QtC.QChar, start: i64, end: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Section32(@ptrCast(self), @ptrCast(sep), start, end);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section32: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Section4(self: ?*anyopaque, sep: QtC.QChar, start: i64, end: i64, flags: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Section4(@ptrCast(self), @ptrCast(sep), start, end, @intCast(flags));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Section33(self: ?*anyopaque, in_sep: []const u8, start: i64, end: i64, allocator: std.mem.Allocator) []const u8 {
        const in_sep_str = qtc.libqt_string{
    .len = in_sep.len,
    .data = in_sep.ptr,
};
const _str = qtc.QString_Section33(@ptrCast(self), in_sep_str, start, end);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section33: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Section42(self: ?*anyopaque, in_sep: []const u8, start: i64, end: i64, flags: i32, allocator: std.mem.Allocator) []const u8 {
        const in_sep_str = qtc.libqt_string{
    .len = in_sep.len,
    .data = in_sep.ptr,
};
const _str = qtc.QString_Section42(@ptrCast(self), in_sep_str, start, end, @intCast(flags));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section42: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Section34(self: ?*anyopaque, re: ?*anyopaque, start: i64, end: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Section34(@ptrCast(self), @ptrCast(re), start, end);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section34: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Section43(self: ?*anyopaque, re: ?*anyopaque, start: i64, end: i64, flags: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Section43(@ptrCast(self), @ptrCast(re), start, end, @intCast(flags));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Section43: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Mid2(self: ?*anyopaque, position: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Mid2(@ptrCast(self), position, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Mid2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StartsWith22(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_StartsWith22(@ptrCast(self), s_str, @intCast(cs));
    }

    pub fn StartsWith23(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QString_StartsWith23(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn StartsWith24(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QString_StartsWith24(@ptrCast(self), s, @intCast(cs));
    }

    pub fn StartsWith25(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QString_StartsWith25(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn EndsWith22(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_EndsWith22(@ptrCast(self), s_str, @intCast(cs));
    }

    pub fn EndsWith23(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QString_EndsWith23(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn EndsWith24(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QString_EndsWith24(@ptrCast(self), s, @intCast(cs));
    }

    pub fn EndsWith25(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QString_EndsWith25(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn LeftJustified2(self: ?*anyopaque, width: i64, fill: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_LeftJustified2(@ptrCast(self), width, @ptrCast(fill));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.LeftJustified2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LeftJustified3(self: ?*anyopaque, width: i64, fill: QtC.QChar, trunc: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_LeftJustified3(@ptrCast(self), width, @ptrCast(fill), trunc);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.LeftJustified3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RightJustified2(self: ?*anyopaque, width: i64, fill: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_RightJustified2(@ptrCast(self), width, @ptrCast(fill));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.RightJustified2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RightJustified3(self: ?*anyopaque, width: i64, fill: QtC.QChar, trunc: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_RightJustified3(@ptrCast(self), width, @ptrCast(fill), trunc);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.RightJustified3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove22(self: ?*anyopaque, c: QtC.QChar, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Remove22(@ptrCast(self), @ptrCast(c), @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Remove22: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove23(self: ?*anyopaque, s: QLatin1StringView, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Remove23(@ptrCast(self), s, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Remove23: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove24(self: ?*anyopaque, s: []const u8, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
const _str = qtc.QString_Remove24(@ptrCast(self), s_str, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Remove24: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace32(self: ?*anyopaque, before: QtC.QChar, after: QtC.QChar, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace32(@ptrCast(self), @ptrCast(before), @ptrCast(after), @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace32: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace52(self: ?*anyopaque, before: ?*anyopaque, blen: i64, after: ?*anyopaque, alen: i64, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace52(@ptrCast(self), @ptrCast(before), blen, @ptrCast(after), alen, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace52: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace33(self: ?*anyopaque, before: QLatin1StringView, after: QLatin1StringView, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace33(@ptrCast(self), before, after, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace33: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace34(self: ?*anyopaque, before: QLatin1StringView, after: []const u8, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const after_str = qtc.libqt_string{
    .len = after.len,
    .data = after.ptr,
};
const _str = qtc.QString_Replace34(@ptrCast(self), before, after_str, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace34: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace35(self: ?*anyopaque, before: []const u8, after: QLatin1StringView, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const before_str = qtc.libqt_string{
    .len = before.len,
    .data = before.ptr,
};
const _str = qtc.QString_Replace35(@ptrCast(self), before_str, after, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace35: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace36(self: ?*anyopaque, before: []const u8, after: []const u8, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const before_str = qtc.libqt_string{
    .len = before.len,
    .data = before.ptr,
};
const after_str = qtc.libqt_string{
    .len = after.len,
    .data = after.ptr,
};
const _str = qtc.QString_Replace36(@ptrCast(self), before_str, after_str, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace36: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace37(self: ?*anyopaque, c: QtC.QChar, after: []const u8, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const after_str = qtc.libqt_string{
    .len = after.len,
    .data = after.ptr,
};
const _str = qtc.QString_Replace37(@ptrCast(self), @ptrCast(c), after_str, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace37: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Replace38(self: ?*anyopaque, c: QtC.QChar, after: QLatin1StringView, cs: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Replace38(@ptrCast(self), @ptrCast(c), after, @intCast(cs));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Replace38: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Split22(self: ?*anyopaque, sep: []const u8, behavior: i32) []const u8 {
        const sep_str = qtc.libqt_string{
    .len = sep.len,
    .data = sep.ptr,
};
return qtc.QString_Split22(@ptrCast(self), sep_str, @intCast(behavior));
    }

    pub fn Split32(self: ?*anyopaque, sep: []const u8, behavior: i32, cs: i32) []const u8 {
        const sep_str = qtc.libqt_string{
    .len = sep.len,
    .data = sep.ptr,
};
return qtc.QString_Split32(@ptrCast(self), sep_str, @intCast(behavior), @intCast(cs));
    }

    pub fn Split23(self: ?*anyopaque, sep: QtC.QChar, behavior: i32) []const u8 {
        return qtc.QString_Split23(@ptrCast(self), @ptrCast(sep), @intCast(behavior));
    }

    pub fn Split33(self: ?*anyopaque, sep: QtC.QChar, behavior: i32, cs: i32) []const u8 {
        return qtc.QString_Split33(@ptrCast(self), @ptrCast(sep), @intCast(behavior), @intCast(cs));
    }

    pub fn Split24(self: ?*anyopaque, sep: ?*anyopaque, behavior: i32) []const u8 {
        return qtc.QString_Split24(@ptrCast(self), @ptrCast(sep), @intCast(behavior));
    }

    pub fn Normalized2(self: ?*anyopaque, mode: i32, version: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Normalized2(@ptrCast(self), @intCast(mode), @intCast(version));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Normalized2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromUtf1623(str: *const u16, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromUtf1623(@ptrCast(str), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUtf1623: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromUcs423(str: *const u32, size: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_FromUcs423(@ptrCast(str), size);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUcs423: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Compare22(self: ?*anyopaque, s: []const u8, cs: i32) i32 {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QString_Compare22(@ptrCast(self), s_str, @intCast(cs));
    }

    pub fn Compare23(self: ?*anyopaque, other: QLatin1StringView, cs: i32) i32 {
        return qtc.QString_Compare23(@ptrCast(self), other, @intCast(cs));
    }

    pub fn Compare24(self: ?*anyopaque, s: []const u8, cs: i32) i32 {
        return qtc.QString_Compare24(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn Compare25(self: ?*anyopaque, ch: QtC.QChar, cs: i32) i32 {
        return qtc.QString_Compare25(@ptrCast(self), @ptrCast(ch), @intCast(cs));
    }

    pub fn Compare32(s1: []const u8, s2: []const u8, cs: i32) i32 {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QString_Compare32(s1_str, s2_str, @intCast(cs));
    }

    pub fn Compare33(s1: []const u8, s2: QLatin1StringView, cs: i32) i32 {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
return qtc.QString_Compare33(s1_str, s2, @intCast(cs));
    }

    pub fn Compare34(s1: QLatin1StringView, s2: []const u8, cs: i32) i32 {
        const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QString_Compare34(s1, s2_str, @intCast(cs));
    }

    pub fn Compare35(s1: []const u8, s2: []const u8, cs: i32) i32 {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
return qtc.QString_Compare35(s1_str, @ptrCast(s2), @intCast(cs));
    }

    pub fn Compare36(s1: []const u8, s2: []const u8, cs: i32) i32 {
        const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QString_Compare36(@ptrCast(s1), s2_str, @intCast(cs));
    }

    pub fn ToShort1(self: ?*anyopaque, ok: *bool) i16 {
        return qtc.QString_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToShort2(self: ?*anyopaque, ok: *bool, base: i32) i16 {
        return qtc.QString_ToShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUShort1(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QString_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUShort2(self: ?*anyopaque, ok: *bool, base: i32) u16 {
        return qtc.QString_ToUShort2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QString_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToInt2(self: ?*anyopaque, ok: *bool, base: i32) i32 {
        return qtc.QString_ToInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QString_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUInt2(self: ?*anyopaque, ok: *bool, base: i32) u32 {
        return qtc.QString_ToUInt2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLong1(self: ?*anyopaque, ok: *bool) long {
        return qtc.QString_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLong2(self: ?*anyopaque, ok: *bool, base: i32) long {
        return qtc.QString_ToLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULong1(self: ?*anyopaque, ok: *bool) unsigned long {
        return qtc.QString_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULong2(self: ?*anyopaque, ok: *bool, base: i32) unsigned long {
        return qtc.QString_ToULong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QString_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLongLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QString_ToLongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QString_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULongLong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QString_ToULongLong2(@ptrCast(self), @ptrCast(ok), base);
    }

    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QString_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QString_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn SetNum22(self: ?*anyopaque, param1: i16, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum22(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum22: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum23(self: ?*anyopaque, param1: u16, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum23(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum23: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum24(self: ?*anyopaque, param1: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum24(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum24: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum25(self: ?*anyopaque, param1: u32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum25(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum25: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum26(self: ?*anyopaque, param1: long, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum26(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum26: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum27(self: ?*anyopaque, param1: unsigned long, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum27(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum27: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum28(self: ?*anyopaque, param1: i64, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum28(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum28: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum29(self: ?*anyopaque, param1: u64, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum29(@ptrCast(self), param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum29: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum210(self: ?*anyopaque, param1: f32, format: i8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum210(@ptrCast(self), param1, format);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum210: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum32(self: ?*anyopaque, param1: f32, format: i8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum32(@ptrCast(self), param1, format, precision);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum32: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum211(self: ?*anyopaque, param1: f64, format: i8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum211(@ptrCast(self), param1, format);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum211: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNum33(self: ?*anyopaque, param1: f64, format: i8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_SetNum33(@ptrCast(self), param1, format, precision);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.SetNum33: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number22(param1: i32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number22(param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number22: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number23(param1: u32, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number23(param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number23: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number24(param1: long, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number24(param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number24: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number25(param1: unsigned long, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number25(param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number25: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number26(param1: i64, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number26(param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number26: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number27(param1: u64, base: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number27(param1, base);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number27: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number28(param1: f64, format: i8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number28(param1, format);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number28: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Number32(param1: f64, format: i8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QString_Number32(param1, format, precision);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number32: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QString_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/string.html#types
pub const enums = struct {
    pub const SectionFlag = enum {
        pub const SectionDefault: i32 = 0;
        pub const SectionSkipEmpty: i32 = 1;
        pub const SectionIncludeLeadingSep: i32 = 2;
        pub const SectionIncludeTrailingSep: i32 = 4;
        pub const SectionCaseInsensitiveSeps: i32 = 8;
    };

    pub const NormalizationForm = enum {
        pub const NormalizationForm_D: i32 = 0;
        pub const NormalizationForm_C: i32 = 1;
        pub const NormalizationForm_KD: i32 = 2;
        pub const NormalizationForm_KC: i32 = 3;
    };

    pub const Tag = enum {
        pub const L1: u8 = 0;
        pub const U8: u8 = 1;
        pub const U16: u8 = 2;
    };

};
