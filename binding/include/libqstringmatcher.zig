const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstringmatcher.html
pub const qstringmatcher = struct {

    /// New constructs a new QStringMatcher object.
    pub fn New() QtC.QStringMatcher {
        return qtc.QStringMatcher_new();
    }


    /// New2 constructs a new QStringMatcher object.
    pub fn New2(pattern: []const u8) QtC.QStringMatcher {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
return qtc.QStringMatcher_new2(pattern_str);
    }


    /// New3 constructs a new QStringMatcher object.
    pub fn New3(uc: ?*anyopaque, lenVal: i64) QtC.QStringMatcher {
        return qtc.QStringMatcher_new3(@ptrCast(uc), lenVal);
    }


    /// New4 constructs a new QStringMatcher object.
    pub fn New4(pattern: []const u8) QtC.QStringMatcher {
        return qtc.QStringMatcher_new4(@ptrCast(pattern));
    }


    /// New5 constructs a new QStringMatcher object.
    pub fn New5(other: ?*anyopaque) QtC.QStringMatcher {
        return qtc.QStringMatcher_new5(@ptrCast(other));
    }


    /// New6 constructs a new QStringMatcher object.
    pub fn New6(pattern: []const u8, cs: i32) QtC.QStringMatcher {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
return qtc.QStringMatcher_new6(pattern_str, @intCast(cs));
    }


    /// New7 constructs a new QStringMatcher object.
    pub fn New7(uc: ?*anyopaque, lenVal: i64, cs: i32) QtC.QStringMatcher {
        return qtc.QStringMatcher_new7(@ptrCast(uc), lenVal, @intCast(cs));
    }


    /// New8 constructs a new QStringMatcher object.
    pub fn New8(pattern: []const u8, cs: i32) QtC.QStringMatcher {
        return qtc.QStringMatcher_new8(@ptrCast(pattern), @intCast(cs));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStringMatcher_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetPattern(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
qtc.QStringMatcher_SetPattern(@ptrCast(self), pattern_str);
    }

    pub fn SetCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QStringMatcher_SetCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    pub fn IndexIn(self: ?*anyopaque, str: []const u8) i64 {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QStringMatcher_IndexIn(@ptrCast(self), str_str);
    }

    pub fn IndexIn2(self: ?*anyopaque, str: ?*anyopaque, length: i64) i64 {
        return qtc.QStringMatcher_IndexIn2(@ptrCast(self), @ptrCast(str), length);
    }

    pub fn IndexIn3(self: ?*anyopaque, str: []const u8) i64 {
        return qtc.QStringMatcher_IndexIn3(@ptrCast(self), @ptrCast(str));
    }

    pub fn Pattern(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringMatcher_Pattern(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringmatcher.Pattern: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PatternView(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringMatcher_PatternView(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringmatcher.PatternView: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CaseSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QStringMatcher_CaseSensitivity(@ptrCast(self));
    }

    pub fn IndexIn22(self: ?*anyopaque, str: []const u8, from: i64) i64 {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QStringMatcher_IndexIn22(@ptrCast(self), str_str, from);
    }

    pub fn IndexIn32(self: ?*anyopaque, str: ?*anyopaque, length: i64, from: i64) i64 {
        return qtc.QStringMatcher_IndexIn32(@ptrCast(self), @ptrCast(str), length, from);
    }

    pub fn IndexIn23(self: ?*anyopaque, str: []const u8, from: i64) i64 {
        return qtc.QStringMatcher_IndexIn23(@ptrCast(self), @ptrCast(str), from);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringMatcher_Delete(@ptrCast(self));
    }
};
