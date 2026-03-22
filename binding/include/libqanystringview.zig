const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qanystringview.html
pub const qanystringview = struct {

    /// New constructs a new QAnyStringView object.
    pub fn New() QtC.QAnyStringView {
        return qtc.QAnyStringView_new();
    }


    /// New2 constructs a new QAnyStringView object.
    pub fn New2(str: []u8) QtC.QAnyStringView {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QAnyStringView_new2(str_str);
    }


    /// New3 constructs a new QAnyStringView object.
    pub fn New3(str: []const u8) QtC.QAnyStringView {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
return qtc.QAnyStringView_new3(str_str);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAnyStringView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAnyStringView_MoveAssign(@ptrCast(self), @ptrCast(other));
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

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAnyStringView_Delete(@ptrCast(self));
    }
};
