const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqlindex.html
pub const qsqlindex = struct {

    /// New constructs a new QSqlIndex object.
    pub fn New() QtC.QSqlIndex {
        return qtc.QSqlIndex_new();
    }


    /// New2 constructs a new QSqlIndex object.
    pub fn New2(other: ?*anyopaque) QtC.QSqlIndex {
        return qtc.QSqlIndex_new2(@ptrCast(other));
    }


    /// New3 constructs a new QSqlIndex object.
    pub fn New3(cursorName: []const u8) QtC.QSqlIndex {
        const cursorName_str = qtc.libqt_string{
    .len = cursorName.len,
    .data = cursorName.ptr,
};
return qtc.QSqlIndex_new3(cursorName_str);
    }


    /// New4 constructs a new QSqlIndex object.
    pub fn New4(cursorName: []const u8, name: []const u8) QtC.QSqlIndex {
        const cursorName_str = qtc.libqt_string{
    .len = cursorName.len,
    .data = cursorName.ptr,
};
const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSqlIndex_new4(cursorName_str, name_str);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlIndex_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlIndex_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetCursorName(self: ?*anyopaque, cursorName: []const u8) void {
        const cursorName_str = qtc.libqt_string{
    .len = cursorName.len,
    .data = cursorName.ptr,
};
qtc.QSqlIndex_SetCursorName(@ptrCast(self), cursorName_str);
    }

    pub fn CursorName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlIndex_CursorName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.CursorName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSqlIndex_SetName(@ptrCast(self), name_str);
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlIndex_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QSqlIndex_Append(@ptrCast(self), @ptrCast(field));
    }

    pub fn Append2(self: ?*anyopaque, field: ?*anyopaque, desc: bool) void {
        qtc.QSqlIndex_Append2(@ptrCast(self), @ptrCast(field), desc);
    }

    pub fn IsDescending(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlIndex_IsDescending(@ptrCast(self), i);
    }

    pub fn SetDescending(self: ?*anyopaque, i: i32, desc: bool) void {
        qtc.QSqlIndex_SetDescending(@ptrCast(self), i, desc);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlIndex_Delete(@ptrCast(self));
    }
};
