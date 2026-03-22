const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstringview.html
pub const qstringview = struct {

    /// New constructs a new QStringView object.
    pub fn New(other: []const u8) QtC.QStringView {
        return qtc.QStringView_new(@ptrCast(other));
    }


    /// New2 constructs a new QStringView object.
    pub fn New2(other: []const u8) QtC.QStringView {
        return qtc.QStringView_new2(@ptrCast(other));
    }


    /// New3 constructs a new QStringView object.
    pub fn New3() QtC.QStringView {
        return qtc.QStringView_new3();
    }


    /// New4 constructs a new QStringView object.
    pub fn New4(param1: []const u8) QtC.QStringView {
        return qtc.QStringView_new4(@ptrCast(param1));
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

    pub fn Mid(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Mid(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Mid: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Left(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Left(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Left: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Right(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Right(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Right: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn First(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_First(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.First: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Last(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Last(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Last: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Sliced(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Sliced(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Sliced: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Sliced2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Sliced2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Chopped(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Chopped(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Chopped: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QStringView_Truncate(@ptrCast(self), n);
    }

    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QStringView_Chop(@ptrCast(self), n);
    }

    pub fn Trimmed(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Trimmed(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Trimmed: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Slice(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Slice(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Slice: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Slice2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Slice2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Slice2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Compare(self: ?*anyopaque, other: []const u8) i32 {
        return qtc.QStringView_Compare(@ptrCast(self), @ptrCast(other));
    }

    pub fn Compare2(self: ?*anyopaque, other: QLatin1StringView) i32 {
        return qtc.QStringView_Compare2(@ptrCast(self), other);
    }

    pub fn Compare3(self: ?*anyopaque, other: QUtf8StringView) i32 {
        return qtc.QStringView_Compare3(@ptrCast(self), other);
    }

    pub fn Compare4(self: ?*anyopaque, c: QtC.QChar) i32 {
        return qtc.QStringView_Compare4(@ptrCast(self), @ptrCast(c));
    }

    pub fn Compare5(self: ?*anyopaque, c: QtC.QChar, cs: i32) i32 {
        return qtc.QStringView_Compare5(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn LocaleAwareCompare(self: ?*anyopaque, other: []const u8) i32 {
        return qtc.QStringView_LocaleAwareCompare(@ptrCast(self), @ptrCast(other));
    }

    pub fn StartsWith(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QStringView_StartsWith(@ptrCast(self), @ptrCast(s));
    }

    pub fn StartsWith2(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QStringView_StartsWith2(@ptrCast(self), s);
    }

    pub fn StartsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QStringView_StartsWith3(@ptrCast(self), @ptrCast(c));
    }

    pub fn StartsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QStringView_StartsWith4(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn EndsWith(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QStringView_EndsWith(@ptrCast(self), @ptrCast(s));
    }

    pub fn EndsWith2(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QStringView_EndsWith2(@ptrCast(self), s);
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

    pub fn IndexOf2(self: ?*anyopaque, s: []const u8) i64 {
        return qtc.QStringView_IndexOf2(@ptrCast(self), @ptrCast(s));
    }

    pub fn IndexOf3(self: ?*anyopaque, s: QLatin1StringView) i64 {
        return qtc.QStringView_IndexOf3(@ptrCast(self), s);
    }

    pub fn Contains(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QStringView_Contains(@ptrCast(self), @ptrCast(c));
    }

    pub fn Contains2(self: ?*anyopaque, s: []const u8) bool {
        return qtc.QStringView_Contains2(@ptrCast(self), @ptrCast(s));
    }

    pub fn Contains3(self: ?*anyopaque, s: QLatin1StringView) bool {
        return qtc.QStringView_Contains3(@ptrCast(self), s);
    }

    pub fn Count(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QStringView_Count(@ptrCast(self), @ptrCast(c));
    }

    pub fn Count2(self: ?*anyopaque, s: []const u8) i64 {
        return qtc.QStringView_Count2(@ptrCast(self), @ptrCast(s));
    }

    pub fn Count3(self: ?*anyopaque, s: QLatin1StringView) i64 {
        return qtc.QStringView_Count3(@ptrCast(self), s);
    }

    pub fn LastIndexOf(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QStringView_LastIndexOf(@ptrCast(self), @ptrCast(c));
    }

    pub fn LastIndexOf2(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QStringView_LastIndexOf2(@ptrCast(self), @ptrCast(c), from);
    }

    pub fn LastIndexOf3(self: ?*anyopaque, s: []const u8) i64 {
        return qtc.QStringView_LastIndexOf3(@ptrCast(self), @ptrCast(s));
    }

    pub fn LastIndexOf4(self: ?*anyopaque, s: []const u8, from: i64) i64 {
        return qtc.QStringView_LastIndexOf4(@ptrCast(self), @ptrCast(s), from);
    }

    pub fn LastIndexOf5(self: ?*anyopaque, s: QLatin1StringView) i64 {
        return qtc.QStringView_LastIndexOf5(@ptrCast(self), s);
    }

    pub fn LastIndexOf6(self: ?*anyopaque, s: QLatin1StringView, from: i64) i64 {
        return qtc.QStringView_LastIndexOf6(@ptrCast(self), s, from);
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

    pub fn Split(self: ?*anyopaque, sep: []const u8) []const u8 {
        return qtc.QStringView_Split(@ptrCast(self), @ptrCast(sep));
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

    pub fn Rbegin(self: ?*anyopaque, ) std::reverse_iterator<const QChar *> {
        return qtc.QStringView_Rbegin(@ptrCast(self));
    }

    pub fn Rend(self: ?*anyopaque, ) std::reverse_iterator<const QChar *> {
        return qtc.QStringView_Rend(@ptrCast(self));
    }

    pub fn Crbegin(self: ?*anyopaque, ) std::reverse_iterator<const QChar *> {
        return qtc.QStringView_Crbegin(@ptrCast(self));
    }

    pub fn Crend(self: ?*anyopaque, ) std::reverse_iterator<const QChar *> {
        return qtc.QStringView_Crend(@ptrCast(self));
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

    pub fn OperatorbasicStringView(self: ?*anyopaque, ) std::u16string_view {
        return qtc.QStringView_OperatorbasicStringView(@ptrCast(self));
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

    pub fn Mid2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringView_Mid2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.Mid2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Compare22(self: ?*anyopaque, other: []const u8, cs: i32) i32 {
        return qtc.QStringView_Compare22(@ptrCast(self), @ptrCast(other), @intCast(cs));
    }

    pub fn Compare23(self: ?*anyopaque, other: QLatin1StringView, cs: i32) i32 {
        return qtc.QStringView_Compare23(@ptrCast(self), other, @intCast(cs));
    }

    pub fn Compare24(self: ?*anyopaque, other: QUtf8StringView, cs: i32) i32 {
        return qtc.QStringView_Compare24(@ptrCast(self), other, @intCast(cs));
    }

    pub fn StartsWith22(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QStringView_StartsWith22(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn StartsWith23(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QStringView_StartsWith23(@ptrCast(self), s, @intCast(cs));
    }

    pub fn EndsWith22(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QStringView_EndsWith22(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn EndsWith23(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QStringView_EndsWith23(@ptrCast(self), s, @intCast(cs));
    }

    pub fn IndexOf22(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QStringView_IndexOf22(@ptrCast(self), @ptrCast(c), from);
    }

    pub fn IndexOf32(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QStringView_IndexOf32(@ptrCast(self), @ptrCast(c), from, @intCast(cs));
    }

    pub fn IndexOf23(self: ?*anyopaque, s: []const u8, from: i64) i64 {
        return qtc.QStringView_IndexOf23(@ptrCast(self), @ptrCast(s), from);
    }

    pub fn IndexOf33(self: ?*anyopaque, s: []const u8, from: i64, cs: i32) i64 {
        return qtc.QStringView_IndexOf33(@ptrCast(self), @ptrCast(s), from, @intCast(cs));
    }

    pub fn IndexOf24(self: ?*anyopaque, s: QLatin1StringView, from: i64) i64 {
        return qtc.QStringView_IndexOf24(@ptrCast(self), s, from);
    }

    pub fn IndexOf34(self: ?*anyopaque, s: QLatin1StringView, from: i64, cs: i32) i64 {
        return qtc.QStringView_IndexOf34(@ptrCast(self), s, from, @intCast(cs));
    }

    pub fn Contains22(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QStringView_Contains22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn Contains23(self: ?*anyopaque, s: []const u8, cs: i32) bool {
        return qtc.QStringView_Contains23(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn Contains24(self: ?*anyopaque, s: QLatin1StringView, cs: i32) bool {
        return qtc.QStringView_Contains24(@ptrCast(self), s, @intCast(cs));
    }

    pub fn Count22(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QStringView_Count22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn Count23(self: ?*anyopaque, s: []const u8, cs: i32) i64 {
        return qtc.QStringView_Count23(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn Count24(self: ?*anyopaque, s: QLatin1StringView, cs: i32) i64 {
        return qtc.QStringView_Count24(@ptrCast(self), s, @intCast(cs));
    }

    pub fn LastIndexOf22(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf22(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    pub fn LastIndexOf32(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf32(@ptrCast(self), @ptrCast(c), from, @intCast(cs));
    }

    pub fn LastIndexOf23(self: ?*anyopaque, s: []const u8, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf23(@ptrCast(self), @ptrCast(s), @intCast(cs));
    }

    pub fn LastIndexOf33(self: ?*anyopaque, s: []const u8, from: i64, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf33(@ptrCast(self), @ptrCast(s), from, @intCast(cs));
    }

    pub fn LastIndexOf24(self: ?*anyopaque, s: QLatin1StringView, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf24(@ptrCast(self), s, @intCast(cs));
    }

    pub fn LastIndexOf34(self: ?*anyopaque, s: QLatin1StringView, from: i64, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf34(@ptrCast(self), s, from, @intCast(cs));
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

    pub fn Split22(self: ?*anyopaque, sep: []const u8, behavior: i32) []const u8 {
        return qtc.QStringView_Split22(@ptrCast(self), @ptrCast(sep), @intCast(behavior));
    }

    pub fn Split32(self: ?*anyopaque, sep: []const u8, behavior: i32, cs: i32) []const u8 {
        return qtc.QStringView_Split32(@ptrCast(self), @ptrCast(sep), @intCast(behavior), @intCast(cs));
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
