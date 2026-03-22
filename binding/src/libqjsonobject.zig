const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qjsonobject.html
pub const qjsonobject = struct {

    /// New constructs a new QJsonObject object.
    pub fn New() QtC.QJsonObject {
        return qtc.QJsonObject_new();
    }


    /// New2 constructs a new QJsonObject object.
    pub fn New2(other: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonObject_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn FromVariantMap(mapVal: *const QMap<QString, QVariant>) QtC.QJsonObject {
        return qtc.QJsonObject_FromVariantMap(@ptrCast(mapVal));
    }

    pub fn ToVariantMap(self: ?*anyopaque, ) QMap<QString, QVariant> {
        return qtc.QJsonObject_ToVariantMap(@ptrCast(self));
    }

    pub fn FromVariantHash(mapVal: *const QHash<QString, QVariant>) QtC.QJsonObject {
        return qtc.QJsonObject_FromVariantHash(@ptrCast(mapVal));
    }

    pub fn ToVariantHash(self: ?*anyopaque, ) QHash<QString, QVariant> {
        return qtc.QJsonObject_ToVariantHash(@ptrCast(self));
    }

    pub fn Keys(self: ?*anyopaque, ) []const u8 {
        return qtc.QJsonObject_Keys(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QJsonObject_Size(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i64 {
        return qtc.QJsonObject_Count(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i64 {
        return qtc.QJsonObject_Length(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QJsonObject_IsEmpty(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QJsonObject_Value(@ptrCast(self), key_str);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QJsonObject_OperatorSubscript(@ptrCast(self), key_str);
    }

    pub fn Remove(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QJsonObject_Remove(@ptrCast(self), key_str);
    }

    pub fn Take(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QJsonObject_Take(@ptrCast(self), key_str);
    }

    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QJsonObject_Contains(@ptrCast(self), key_str);
    }

    pub fn Begin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QJsonObject_Begin(@ptrCast(self)));
    }

    pub fn Begin2(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonObject_Begin2(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonObject_ConstBegin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QJsonObject_End(@ptrCast(self)));
    }

    pub fn End2(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonObject_End2(@ptrCast(self));
    }

    pub fn ConstEnd(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonObject_ConstEnd(@ptrCast(self));
    }

    pub fn Erase(self: ?*anyopaque, it: *It::value_type) It::value_type {
        return @ptrCast(qtc.QJsonObject_Erase(@ptrCast(self), @ptrCast(it)));
    }

    pub fn Find(self: ?*anyopaque, key: []const u8) It::value_type {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return @ptrCast(qtc.QJsonObject_Find(@ptrCast(self), key_str));
    }

    pub fn Find2(self: ?*anyopaque, key: []const u8) QtC.QRect {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QJsonObject_Find2(@ptrCast(self), key_str);
    }

    pub fn ConstFind(self: ?*anyopaque, key: []const u8) QtC.QRect {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QJsonObject_ConstFind(@ptrCast(self), key_str);
    }

    pub fn Insert(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) It::value_type {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return @ptrCast(qtc.QJsonObject_Insert(@ptrCast(self), key_str, @ptrCast(value)));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QJsonObject_Empty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonobject-iterator.html
pub const qjsonobject__iterator = struct {

    /// New constructs a new QJsonObject::iterator object.
    pub fn New() QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new();
    }


    /// New2 constructs a new QJsonObject::iterator object.
    pub fn New2(obj: ?*anyopaque, index: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new2(@ptrCast(obj), index);
    }


    pub fn Key(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonObject__iterator_Key(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonobject::iterator.Key: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QJsonObject__iterator_OperatorPlusPlus(@ptrCast(self)));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) It::value_type {
        return @ptrCast(qtc.QJsonObject__iterator_OperatorPlusPlus2(@ptrCast(self), param1));
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QJsonObject__iterator_OperatorMinusMinus(@ptrCast(self)));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) It::value_type {
        return @ptrCast(qtc.QJsonObject__iterator_OperatorMinusMinus2(@ptrCast(self), param1));
    }

    pub fn OperatorPlus(self: ?*anyopaque, j: i64) It::value_type {
        return @ptrCast(qtc.QJsonObject__iterator_OperatorPlus(@ptrCast(self), j));
    }

    pub fn OperatorMinus(self: ?*anyopaque, j: i64) It::value_type {
        return @ptrCast(qtc.QJsonObject__iterator_OperatorMinus(@ptrCast(self), j));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) It::value_type {
        return @ptrCast(qtc.QJsonObject__iterator_OperatorPlusAssign(@ptrCast(self), j));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) It::value_type {
        return @ptrCast(qtc.QJsonObject__iterator_OperatorMinusAssign(@ptrCast(self), j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject__iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonobject-const_iterator.html
pub const qjsonobject__const_iterator = struct {

    /// New constructs a new QJsonObject::const_iterator object.
    pub fn New() QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new();
    }


    /// New2 constructs a new QJsonObject::const_iterator object.
    pub fn New2(obj: ?*anyopaque, index: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new2(@ptrCast(obj), index);
    }


    /// New3 constructs a new QJsonObject::const_iterator object.
    pub fn New3(other: *const It::value_type) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new3(@ptrCast(other));
    }


    pub fn Key(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonObject__const_iterator_Key(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonobject::const_iterator.Key: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonObject__const_iterator_OperatorPlusPlus(@ptrCast(self));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QRect {
        return qtc.QJsonObject__const_iterator_OperatorPlusPlus2(@ptrCast(self), param1);
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonObject__const_iterator_OperatorMinusMinus(@ptrCast(self));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QRect {
        return qtc.QJsonObject__const_iterator_OperatorMinusMinus2(@ptrCast(self), param1);
    }

    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QRect {
        return qtc.QJsonObject__const_iterator_OperatorPlus(@ptrCast(self), j);
    }

    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QRect {
        return qtc.QJsonObject__const_iterator_OperatorMinus(@ptrCast(self), j);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QRect {
        return qtc.QJsonObject__const_iterator_OperatorPlusAssign(@ptrCast(self), j);
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QRect {
        return qtc.QJsonObject__const_iterator_OperatorMinusAssign(@ptrCast(self), j);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject__const_iterator_Delete(@ptrCast(self));
    }
};
