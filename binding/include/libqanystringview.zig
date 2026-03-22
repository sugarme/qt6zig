const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qanystringview.html
pub const qanystringview = struct {

    /// New constructs a new QAnyStringView object.
    pub fn New(other: []const u8) QtC.QAnyStringView {
        const other_str = qtc.libqt_string{
    .len = other.len,
    .data = other.ptr,
};
return qtc.QAnyStringView_new(other_str);
    }


    /// New2 constructs a new QAnyStringView object.
    pub fn New2(other: []const u8) QtC.QAnyStringView {
        const other_str = qtc.libqt_string{
    .len = other.len,
    .data = other.ptr,
};
return qtc.QAnyStringView_new2(other_str);
    }


    /// New3 constructs a new QAnyStringView object.
    pub fn New3() QtC.QAnyStringView {
        return qtc.QAnyStringView_new3();
    }


    /// New4 constructs a new QAnyStringView object.
    pub fn New4(str: []u8) QtC.QAnyStringView {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QAnyStringView_new4(str_str);
    }


    /// New5 constructs a new QAnyStringView object.
    pub fn New5(str: []const u8) QtC.QAnyStringView {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QAnyStringView_new5(str_str);
    }


    /// New6 constructs a new QAnyStringView object.
    pub fn New6(str: QLatin1StringView) QtC.QAnyStringView {
        return qtc.QAnyStringView_new6(str);
    }


    /// New7 constructs a new QAnyStringView object.
    pub fn New7(v: []const u8) QtC.QAnyStringView {
        return qtc.QAnyStringView_new7(@ptrCast(v));
    }


    /// New8 constructs a new QAnyStringView object.
    pub fn New8(param1: []const u8) QtC.QAnyStringView {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QAnyStringView_new8(param1_str);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAnyStringView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAnyStringView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Mid(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Mid(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Mid: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Left(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Left(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Left: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Right(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Right(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Right: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Sliced(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Sliced(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Sliced: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Sliced2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Sliced2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn First(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_First(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.First: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Last(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Last(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Last: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Chopped(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Chopped(@ptrCast(self), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Chopped: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Slice(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Slice(@ptrCast(self), pos);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Slice: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Slice2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Slice2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Slice2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QAnyStringView_Truncate(@ptrCast(self), n);
    }

    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QAnyStringView_Chop(@ptrCast(self), n);
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QAnyStringView_Size(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QAnyStringView_Data(@ptrCast(self));
    }

    pub fn Compare(lhs: []const u8, rhs: []const u8) i32 {
        const lhs_str = qtc.libqt_string{
    .len = lhs.len,
    .data = lhs.ptr,
};
const rhs_str = qtc.libqt_string{
    .len = rhs.len,
    .data = rhs.ptr,
};
return qtc.QAnyStringView_Compare(lhs_str, rhs_str);
    }

    pub fn Equal(lhs: []const u8, rhs: []const u8) bool {
        const lhs_str = qtc.libqt_string{
    .len = lhs.len,
    .data = lhs.ptr,
};
const rhs_str = qtc.libqt_string{
    .len = rhs.len,
    .data = rhs.ptr,
};
return qtc.QAnyStringView_Equal(lhs_str, rhs_str);
    }

    pub fn Front(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QAnyStringView_Front(@ptrCast(self));
    }

    pub fn Back(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QAnyStringView_Back(@ptrCast(self));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QAnyStringView_Empty(@ptrCast(self));
    }

    pub fn SizeBytes(self: ?*anyopaque, ) i64 {
        return qtc.QAnyStringView_SizeBytes(@ptrCast(self));
    }

    pub fn MaxSize(self: ?*anyopaque, ) i64 {
        return qtc.QAnyStringView_MaxSize(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QAnyStringView_IsNull(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QAnyStringView_IsEmpty(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i64 {
        return qtc.QAnyStringView_Length(@ptrCast(self));
    }

    pub fn Mid2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Mid2(@ptrCast(self), pos, n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Mid2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Compare3(lhs: []const u8, rhs: []const u8, cs: i32) i32 {
        const lhs_str = qtc.libqt_string{
    .len = lhs.len,
    .data = lhs.ptr,
};
const rhs_str = qtc.libqt_string{
    .len = rhs.len,
    .data = rhs.ptr,
};
return qtc.QAnyStringView_Compare3(lhs_str, rhs_str, @intCast(cs));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAnyStringView_Delete(@ptrCast(self));
    }
};
