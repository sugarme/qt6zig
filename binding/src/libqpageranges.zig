const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpageranges.html
pub const qpageranges = struct {

    /// New constructs a new QPageRanges object.
    pub fn New() QtC.QPageRanges {
        return qtc.QPageRanges_new();
    }


    /// New2 constructs a new QPageRanges object.
    pub fn New2(other: ?*anyopaque) QtC.QPageRanges {
        return qtc.QPageRanges_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageRanges_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageRanges_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn AddPage(self: ?*anyopaque, pageNumber: i32) void {
        qtc.QPageRanges_AddPage(@ptrCast(self), pageNumber);
    }

    pub fn AddRange(self: ?*anyopaque, from: i32, to: i32) void {
        qtc.QPageRanges_AddRange(@ptrCast(self), from, to);
    }

    pub fn ToRangeList(self: ?*anyopaque, ) []const u8 {
        return qtc.QPageRanges_ToRangeList(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QPageRanges_Clear(@ptrCast(self));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPageRanges_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpageranges.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromString(ranges: []const u8) QtC.QPageRanges {
        const ranges_str = qtc.libqt_string{
    .len = ranges.len,
    .data = ranges.ptr,
};
return qtc.QPageRanges_FromString(ranges_str);
    }

    pub fn Contains(self: ?*anyopaque, pageNumber: i32) bool {
        return qtc.QPageRanges_Contains(@ptrCast(self), pageNumber);
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QPageRanges_IsEmpty(@ptrCast(self));
    }

    pub fn FirstPage(self: ?*anyopaque, ) i32 {
        return qtc.QPageRanges_FirstPage(@ptrCast(self));
    }

    pub fn LastPage(self: ?*anyopaque, ) i32 {
        return qtc.QPageRanges_LastPage(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QPageRanges_Detach(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageRanges_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpageranges-range.html
pub const qpageranges__range = struct {

    /// New constructs a new QPageRanges::Range object.
    pub fn New(other: ?*anyopaque) QtC.QPageRanges__Range {
        return qtc.QPageRanges__Range_new(@ptrCast(other));
    }


    /// New2 constructs a new QPageRanges::Range object.
    pub fn New2(other: ?*anyopaque) QtC.QPageRanges__Range {
        return qtc.QPageRanges__Range_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPageRanges::Range object.
    pub fn New3() QtC.QPageRanges__Range {
        return qtc.QPageRanges__Range_new3();
    }


    /// New4 constructs a new QPageRanges::Range object.
    pub fn New4(param1: ?*anyopaque) QtC.QPageRanges__Range {
        return qtc.QPageRanges__Range_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageRanges__Range_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageRanges__Range_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn From(self: ?*anyopaque, ) i32 {
        return qtc.QPageRanges__Range_From(@ptrCast(self));
    }

    pub fn SetFrom(self: ?*anyopaque, from: i32) void {
        qtc.QPageRanges__Range_SetFrom(@ptrCast(self), from);
    }

    pub fn To(self: ?*anyopaque, ) i32 {
        return qtc.QPageRanges__Range_To(@ptrCast(self));
    }

    pub fn SetTo(self: ?*anyopaque, to: i32) void {
        qtc.QPageRanges__Range_SetTo(@ptrCast(self), to);
    }

    pub fn Contains(self: ?*anyopaque, pageNumber: i32) bool {
        return qtc.QPageRanges__Range_Contains(@ptrCast(self), pageNumber);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageRanges__Range_Delete(@ptrCast(self));
    }
};
