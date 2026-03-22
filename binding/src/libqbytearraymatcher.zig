const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbytearraymatcher.html
pub const qbytearraymatcher = struct {

    /// New constructs a new QByteArrayMatcher object.
    pub fn New() QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new();
    }


    /// New2 constructs a new QByteArrayMatcher object.
    pub fn New2(pattern: []u8) QtC.QByteArrayMatcher {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
return qtc.QByteArrayMatcher_new2(pattern_str);
    }


    /// New3 constructs a new QByteArrayMatcher object.
    pub fn New3(pattern: []const u8) QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new3(@ptrCast(pattern));
    }


    /// New4 constructs a new QByteArrayMatcher object.
    pub fn New4(pattern: []const u8) QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new4(@ptrCast(pattern));
    }


    /// New5 constructs a new QByteArrayMatcher object.
    pub fn New5(other: ?*anyopaque) QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new5(@ptrCast(other));
    }


    /// New6 constructs a new QByteArrayMatcher object.
    pub fn New6(pattern: []const u8, length: i64) QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new6(@ptrCast(pattern), length);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayMatcher_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetPattern(self: ?*anyopaque, pattern: []u8) void {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
qtc.QByteArrayMatcher_SetPattern(@ptrCast(self), pattern_str);
    }

    pub fn IndexIn(self: ?*anyopaque, str: []const u8, lenVal: i64) i64 {
        return qtc.QByteArrayMatcher_IndexIn(@ptrCast(self), @ptrCast(str), lenVal);
    }

    pub fn IndexIn2(self: ?*anyopaque, data: []const u8) i64 {
        return qtc.QByteArrayMatcher_IndexIn2(@ptrCast(self), @ptrCast(data));
    }

    pub fn Pattern(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QByteArrayMatcher_Pattern(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearraymatcher.Pattern: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn IndexIn3(self: ?*anyopaque, str: []const u8, lenVal: i64, from: i64) i64 {
        return qtc.QByteArrayMatcher_IndexIn3(@ptrCast(self), @ptrCast(str), lenVal, from);
    }

    pub fn IndexIn22(self: ?*anyopaque, data: []const u8, from: i64) i64 {
        return qtc.QByteArrayMatcher_IndexIn22(@ptrCast(self), @ptrCast(data), from);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QByteArrayMatcher_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html
pub const qstaticbytearraymatcherbase = struct {

    /// New constructs a new QStaticByteArrayMatcherBase object.
    pub fn New(other: ?*anyopaque) QtC.QStaticByteArrayMatcherBase {
        return qtc.QStaticByteArrayMatcherBase_new(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticByteArrayMatcherBase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

};
