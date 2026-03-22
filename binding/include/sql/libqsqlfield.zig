const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsqlfield.html
pub const qsqlfield = struct {

    /// New constructs a new QSqlField object.
    pub fn New() QtC.QSqlField {
        return qtc.QSqlField_new();
    }


    /// New2 constructs a new QSqlField object.
    pub fn New2(other: ?*anyopaque) QtC.QSqlField {
        return qtc.QSqlField_new2(@ptrCast(other));
    }


    /// New3 constructs a new QSqlField object.
    pub fn New3(fieldName: []const u8, typeVal: i64) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
    .len = fieldName.len,
    .data = fieldName.ptr,
};
return qtc.QSqlField_new3(fieldName_str, @intCast(typeVal));
    }


    /// New4 constructs a new QSqlField object.
    pub fn New4(fieldName: []const u8) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
    .len = fieldName.len,
    .data = fieldName.ptr,
};
return qtc.QSqlField_new4(fieldName_str);
    }


    /// New5 constructs a new QSqlField object.
    pub fn New5(fieldName: []const u8, typeVal: QtC.QMetaType) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
    .len = fieldName.len,
    .data = fieldName.ptr,
};
return qtc.QSqlField_new5(fieldName_str, @ptrCast(typeVal));
    }


    /// New6 constructs a new QSqlField object.
    pub fn New6(fieldName: []const u8, typeVal: QtC.QMetaType, tableName: []const u8) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
    .len = fieldName.len,
    .data = fieldName.ptr,
};
const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
return qtc.QSqlField_new6(fieldName_str, @ptrCast(typeVal), tableName_str);
    }


    /// New7 constructs a new QSqlField object.
    pub fn New7(fieldName: []const u8, typeVal: i64, tableName: []const u8) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
    .len = fieldName.len,
    .data = fieldName.ptr,
};
const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
return qtc.QSqlField_new7(fieldName_str, @intCast(typeVal), tableName_str);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlField_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlField_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlField_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlField_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QSqlField_SetValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn Value(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlField_Value(@ptrCast(self));
    }

    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSqlField_SetName(@ptrCast(self), name_str);
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlField_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlfield.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTableName(self: ?*anyopaque, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
    .len = tableName.len,
    .data = tableName.ptr,
};
qtc.QSqlField_SetTableName(@ptrCast(self), tableName_str);
    }

    pub fn TableName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlField_TableName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlfield.TableName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QSqlField_IsNull(@ptrCast(self));
    }

    pub fn SetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.QSqlField_SetReadOnly(@ptrCast(self), readOnly);
    }

    pub fn IsReadOnly(self: ?*anyopaque, ) bool {
        return qtc.QSqlField_IsReadOnly(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSqlField_Clear(@ptrCast(self));
    }

    pub fn IsAutoValue(self: ?*anyopaque, ) bool {
        return qtc.QSqlField_IsAutoValue(@ptrCast(self));
    }

    pub fn MetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QSqlField_MetaType(@ptrCast(self));
    }

    pub fn SetMetaType(self: ?*anyopaque, typeVal: QtC.QMetaType) void {
        qtc.QSqlField_SetMetaType(@ptrCast(self), @ptrCast(typeVal));
    }

    pub fn Type(self: ?*anyopaque, ) i64 {
        return qtc.QSqlField_Type(@ptrCast(self));
    }

    pub fn SetType(self: ?*anyopaque, typeVal: i64) void {
        qtc.QSqlField_SetType(@ptrCast(self), @intCast(typeVal));
    }

    pub fn SetRequiredStatus(self: ?*anyopaque, status: i32) void {
        qtc.QSqlField_SetRequiredStatus(@ptrCast(self), @intCast(status));
    }

    pub fn SetRequired(self: ?*anyopaque, required: bool) void {
        qtc.QSqlField_SetRequired(@ptrCast(self), required);
    }

    pub fn SetLength(self: ?*anyopaque, fieldLength: i32) void {
        qtc.QSqlField_SetLength(@ptrCast(self), fieldLength);
    }

    pub fn SetPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QSqlField_SetPrecision(@ptrCast(self), precision);
    }

    pub fn SetDefaultValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QSqlField_SetDefaultValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn SetSqlType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlField_SetSqlType(@ptrCast(self), typeVal);
    }

    pub fn SetGenerated(self: ?*anyopaque, gen: bool) void {
        qtc.QSqlField_SetGenerated(@ptrCast(self), gen);
    }

    pub fn SetAutoValue(self: ?*anyopaque, autoVal: bool) void {
        qtc.QSqlField_SetAutoValue(@ptrCast(self), autoVal);
    }

    pub fn RequiredStatus(self: ?*anyopaque, ) i32 {
        return qtc.QSqlField_RequiredStatus(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QSqlField_Length(@ptrCast(self));
    }

    pub fn Precision(self: ?*anyopaque, ) i32 {
        return qtc.QSqlField_Precision(@ptrCast(self));
    }

    pub fn DefaultValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSqlField_DefaultValue(@ptrCast(self));
    }

    pub fn TypeID(self: ?*anyopaque, ) i32 {
        return qtc.QSqlField_TypeID(@ptrCast(self));
    }

    pub fn IsGenerated(self: ?*anyopaque, ) bool {
        return qtc.QSqlField_IsGenerated(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSqlField_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlField_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sqlfield.html#types
pub const enums = struct {
    pub const RequiredStatus = enum {
        pub const Unknown: i32 = -1;
        pub const Optional: i32 = 0;
        pub const Required: i32 = 1;
    };

};
