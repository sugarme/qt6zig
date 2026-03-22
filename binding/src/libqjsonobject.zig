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

    pub fn Value2(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        return qtc.QJsonObject_Value2(@ptrCast(self), @ptrCast(key));
    }

    pub fn Value3(self: ?*anyopaque, key: QLatin1StringView) QtC.QJsonValue {
        return qtc.QJsonObject_Value3(@ptrCast(self), key);
    }

    pub fn OperatorSubscript3(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        return qtc.QJsonObject_OperatorSubscript3(@ptrCast(self), @ptrCast(key));
    }

    pub fn OperatorSubscript4(self: ?*anyopaque, key: QLatin1StringView) QtC.QJsonValue {
        return qtc.QJsonObject_OperatorSubscript4(@ptrCast(self), key);
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

    pub fn Remove2(self: ?*anyopaque, key: []const u8) void {
        qtc.QJsonObject_Remove2(@ptrCast(self), @ptrCast(key));
    }

    pub fn Remove3(self: ?*anyopaque, key: QLatin1StringView) void {
        qtc.QJsonObject_Remove3(@ptrCast(self), key);
    }

    pub fn Take2(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        return qtc.QJsonObject_Take2(@ptrCast(self), @ptrCast(key));
    }

    pub fn Take3(self: ?*anyopaque, key: QLatin1StringView) QtC.QJsonValue {
        return qtc.QJsonObject_Take3(@ptrCast(self), key);
    }

    pub fn Contains2(self: ?*anyopaque, key: []const u8) bool {
        return qtc.QJsonObject_Contains2(@ptrCast(self), @ptrCast(key));
    }

    pub fn Contains3(self: ?*anyopaque, key: QLatin1StringView) bool {
        return qtc.QJsonObject_Contains3(@ptrCast(self), key);
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

    pub fn Find3(self: ?*anyopaque, key: []const u8) It::value_type {
        return @ptrCast(qtc.QJsonObject_Find3(@ptrCast(self), @ptrCast(key)));
    }

    pub fn Find4(self: ?*anyopaque, key: QLatin1StringView) It::value_type {
        return @ptrCast(qtc.QJsonObject_Find4(@ptrCast(self), key));
    }

    pub fn Find5(self: ?*anyopaque, key: []const u8) QtC.QRect {
        return qtc.QJsonObject_Find5(@ptrCast(self), @ptrCast(key));
    }

    pub fn Find6(self: ?*anyopaque, key: QLatin1StringView) QtC.QRect {
        return qtc.QJsonObject_Find6(@ptrCast(self), key);
    }

    pub fn ConstFind2(self: ?*anyopaque, key: []const u8) QtC.QRect {
        return qtc.QJsonObject_ConstFind2(@ptrCast(self), @ptrCast(key));
    }

    pub fn ConstFind3(self: ?*anyopaque, key: QLatin1StringView) QtC.QRect {
        return qtc.QJsonObject_ConstFind3(@ptrCast(self), key);
    }

    pub fn Insert2(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) It::value_type {
        return @ptrCast(qtc.QJsonObject_Insert2(@ptrCast(self), @ptrCast(key), @ptrCast(value)));
    }

    pub fn Insert3(self: ?*anyopaque, key: QLatin1StringView, value: ?*anyopaque) It::value_type {
        return @ptrCast(qtc.QJsonObject_Insert3(@ptrCast(self), key, @ptrCast(value)));
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
    pub fn New(other: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QJsonObject::iterator object.
    pub fn New2() QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new2();
    }


    /// New3 constructs a new QJsonObject::iterator object.
    pub fn New3(obj: ?*anyopaque, index: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new3(@ptrCast(obj), index);
    }


    /// New4 constructs a new QJsonObject::iterator object.
    pub fn New4(other: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new4(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject__iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
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

    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QJsonObject__iterator) i64 {
        return qtc.QJsonObject__iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject__iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonobject-const_iterator.html
pub const qjsonobject__const_iterator = struct {

    /// New constructs a new QJsonObject::const_iterator object.
    pub fn New(other: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QJsonObject::const_iterator object.
    pub fn New2() QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new2();
    }


    /// New3 constructs a new QJsonObject::const_iterator object.
    pub fn New3(obj: ?*anyopaque, index: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new3(@ptrCast(obj), index);
    }


    /// New4 constructs a new QJsonObject::const_iterator object.
    pub fn New4(other: *const It::value_type) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new4(@ptrCast(other));
    }


    /// New5 constructs a new QJsonObject::const_iterator object.
    pub fn New5(other: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new5(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject__const_iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
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

    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QJsonObject__const_iterator) i64 {
        return qtc.QJsonObject__const_iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject__const_iterator_Delete(@ptrCast(self));
    }
};
