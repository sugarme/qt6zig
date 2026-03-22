const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqlrecord.html
pub const qsqlrecord = struct {

    /// New constructs a new QSqlRecord object.
    pub fn New() QtC.QSqlRecord {
        return qtc.QSqlRecord_new();
    }


    /// New2 constructs a new QSqlRecord object.
    pub fn New2(other: ?*anyopaque) QtC.QSqlRecord {
        return qtc.QSqlRecord_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlRecord_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlRecord_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn Value(self: ?*anyopaque, i: i32) QtC.QVariant {
        return qtc.QSqlRecord_Value(@ptrCast(self), i);
    }

    pub fn SetValue(self: ?*anyopaque, i: i32, val: ?*anyopaque) void {
        qtc.QSqlRecord_SetValue(@ptrCast(self), i, @ptrCast(val));
    }

    pub fn SetNull(self: ?*anyopaque, i: i32) void {
        qtc.QSqlRecord_SetNull(@ptrCast(self), i);
    }

    pub fn IsNull(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlRecord_IsNull(@ptrCast(self), i);
    }

    pub fn FieldName(self: ?*anyopaque, i: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRecord_FieldName(@ptrCast(self), i);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrecord.FieldName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Field(self: ?*anyopaque, i: i32) QtC.QSqlField {
        return qtc.QSqlRecord_Field(@ptrCast(self), i);
    }

    pub fn IsGenerated(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlRecord_IsGenerated(@ptrCast(self), i);
    }

    pub fn SetGenerated2(self: ?*anyopaque, i: i32, generated: bool) void {
        qtc.QSqlRecord_SetGenerated2(@ptrCast(self), i, generated);
    }

    pub fn Append(self: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QSqlRecord_Append(@ptrCast(self), @ptrCast(field));
    }

    pub fn Replace(self: ?*anyopaque, pos: i32, field: ?*anyopaque) void {
        qtc.QSqlRecord_Replace(@ptrCast(self), pos, @ptrCast(field));
    }

    pub fn Insert(self: ?*anyopaque, pos: i32, field: ?*anyopaque) void {
        qtc.QSqlRecord_Insert(@ptrCast(self), pos, @ptrCast(field));
    }

    pub fn Remove(self: ?*anyopaque, pos: i32) void {
        qtc.QSqlRecord_Remove(@ptrCast(self), pos);
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QSqlRecord_IsEmpty(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSqlRecord_Clear(@ptrCast(self));
    }

    pub fn ClearValues(self: ?*anyopaque, ) void {
        qtc.QSqlRecord_ClearValues(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QSqlRecord_Count(@ptrCast(self));
    }

    pub fn KeyValues(self: ?*anyopaque, keyFields: ?*anyopaque) QtC.QSqlRecord {
        return qtc.QSqlRecord_KeyValues(@ptrCast(self), @ptrCast(keyFields));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlRecord_Delete(@ptrCast(self));
    }
};
