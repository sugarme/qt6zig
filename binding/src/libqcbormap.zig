const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcbormap.html
pub const qcbormap = struct {

    /// New constructs a new QCborMap object.
    pub fn New() QtC.QCborMap {
        return qtc.QCborMap_new();
    }


    /// New2 constructs a new QCborMap object.
    pub fn New2(other: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborMap_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn ToCborValue(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborMap_ToCborValue(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QCborMap_Size(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QCborMap_IsEmpty(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QCborMap_Clear(@ptrCast(self));
    }

    pub fn Keys(self: ?*anyopaque, ) []const u8 {
        return qtc.QCborMap_Keys(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_Value(@ptrCast(self), key);
    }

    pub fn Value3(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_Value3(@ptrCast(self), key_str);
    }

    pub fn Value4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_Value4(@ptrCast(self), @ptrCast(key));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_OperatorSubscript(@ptrCast(self), key);
    }

    pub fn OperatorSubscript3(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_OperatorSubscript3(@ptrCast(self), key_str);
    }

    pub fn OperatorSubscript4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_OperatorSubscript4(@ptrCast(self), @ptrCast(key));
    }

    pub fn OperatorSubscript5(self: ?*anyopaque, key: i64) QtC.QCborValueRef {
        return qtc.QCborMap_OperatorSubscript5(@ptrCast(self), key);
    }

    pub fn OperatorSubscript7(self: ?*anyopaque, key: []const u8) QtC.QCborValueRef {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_OperatorSubscript7(@ptrCast(self), key_str);
    }

    pub fn OperatorSubscript8(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborMap_OperatorSubscript8(@ptrCast(self), @ptrCast(key));
    }

    pub fn Take(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_Take(@ptrCast(self), key);
    }

    pub fn Take3(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_Take3(@ptrCast(self), key_str);
    }

    pub fn Take4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_Take4(@ptrCast(self), @ptrCast(key));
    }

    pub fn Remove(self: ?*anyopaque, key: i64) void {
        qtc.QCborMap_Remove(@ptrCast(self), key);
    }

    pub fn Remove3(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QCborMap_Remove3(@ptrCast(self), key_str);
    }

    pub fn Remove4(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QCborMap_Remove4(@ptrCast(self), @ptrCast(key));
    }

    pub fn Contains(self: ?*anyopaque, key: i64) bool {
        return qtc.QCborMap_Contains(@ptrCast(self), key);
    }

    pub fn Contains3(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_Contains3(@ptrCast(self), key_str);
    }

    pub fn Contains4(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QCborMap_Contains4(@ptrCast(self), @ptrCast(key));
    }

    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborMap_Compare(@ptrCast(self), @ptrCast(other));
    }

    pub fn Begin(self: ?*anyopaque, ) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Begin(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, ) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstBegin(@ptrCast(self));
    }

    pub fn Begin2(self: ?*anyopaque, ) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Begin2(@ptrCast(self));
    }

    pub fn Cbegin(self: ?*anyopaque, ) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Cbegin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QtC.QCborMap__Iterator {
        return qtc.QCborMap_End(@ptrCast(self));
    }

    pub fn ConstEnd(self: ?*anyopaque, ) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstEnd(@ptrCast(self));
    }

    pub fn End2(self: ?*anyopaque, ) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_End2(@ptrCast(self));
    }

    pub fn Cend(self: ?*anyopaque, ) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Cend(@ptrCast(self));
    }

    pub fn Erase(self: ?*anyopaque, it: QtC.QCborMap__Iterator) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Erase(@ptrCast(self), @ptrCast(it));
    }

    pub fn Erase2(self: ?*anyopaque, it: QtC.QCborMap__ConstIterator) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Erase2(@ptrCast(self), @ptrCast(it));
    }

    pub fn Extract(self: ?*anyopaque, it: QtC.QCborMap__Iterator) QtC.QCborValue {
        return qtc.QCborMap_Extract(@ptrCast(self), @ptrCast(it));
    }

    pub fn Extract2(self: ?*anyopaque, it: QtC.QCborMap__ConstIterator) QtC.QCborValue {
        return qtc.QCborMap_Extract2(@ptrCast(self), @ptrCast(it));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QCborMap_Empty(@ptrCast(self));
    }

    pub fn Find(self: ?*anyopaque, key: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Find(@ptrCast(self), key);
    }

    pub fn Find3(self: ?*anyopaque, key: []const u8) QtC.QCborMap__Iterator {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_Find3(@ptrCast(self), key_str);
    }

    pub fn Find4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Find4(@ptrCast(self), @ptrCast(key));
    }

    pub fn ConstFind(self: ?*anyopaque, key: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstFind(@ptrCast(self), key);
    }

    pub fn ConstFind3(self: ?*anyopaque, key: []const u8) QtC.QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_ConstFind3(@ptrCast(self), key_str);
    }

    pub fn ConstFind4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstFind4(@ptrCast(self), @ptrCast(key));
    }

    pub fn Find5(self: ?*anyopaque, key: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Find5(@ptrCast(self), key);
    }

    pub fn Find7(self: ?*anyopaque, key: []const u8) QtC.QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_Find7(@ptrCast(self), key_str);
    }

    pub fn Find8(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Find8(@ptrCast(self), @ptrCast(key));
    }

    pub fn Insert(self: ?*anyopaque, key: i64, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Insert(@ptrCast(self), key, @ptrCast(value_));
    }

    pub fn Insert3(self: ?*anyopaque, key: []const u8, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborMap_Insert3(@ptrCast(self), key_str, @ptrCast(value_));
    }

    pub fn Insert4(self: ?*anyopaque, key: ?*anyopaque, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Insert4(@ptrCast(self), @ptrCast(key), @ptrCast(value_));
    }

    pub fn Insert5(self: ?*anyopaque, v: QPair<QCborValue, QCborValue>) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Insert5(@ptrCast(self), v);
    }

    pub fn FromVariantMap(mapVal: *const QMap<QString, QVariant>) QtC.QCborMap {
        return qtc.QCborMap_FromVariantMap(@ptrCast(mapVal));
    }

    pub fn FromVariantHash(hash: *const QHash<QString, QVariant>) QtC.QCborMap {
        return qtc.QCborMap_FromVariantHash(@ptrCast(hash));
    }

    pub fn FromJsonObject(o: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborMap_FromJsonObject(@ptrCast(o));
    }

    pub fn ToVariantMap(self: ?*anyopaque, ) QMap<QString, QVariant> {
        return qtc.QCborMap_ToVariantMap(@ptrCast(self));
    }

    pub fn ToVariantHash(self: ?*anyopaque, ) QHash<QString, QVariant> {
        return qtc.QCborMap_ToVariantHash(@ptrCast(self));
    }

    pub fn ToJsonObject(self: ?*anyopaque, ) QtC.QJsonObject {
        return qtc.QCborMap_ToJsonObject(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcbormap-iterator.html
pub const qcbormap__iterator = struct {

    /// New constructs a new QCborMap::Iterator object.
    pub fn New(other: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QCborMap::Iterator object.
    pub fn New2() QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new2();
    }


    /// New3 constructs a new QCborMap::Iterator object.
    pub fn New3(param1: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new3(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap__Iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMultiply(self: ?*anyopaque, ) QPair<QCborValueConstRef, QCborValueRef> {
        return qtc.QCborMap__Iterator_OperatorMultiply(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QPair<QCborValueConstRef, QCborValueRef> {
        return qtc.QCborMap__Iterator_OperatorSubscript(@ptrCast(self), j);
    }

    pub fn OperatorMinusGreater(self: ?*anyopaque, ) QtC.QCborValueRef {
        return qtc.QCborMap__Iterator_OperatorMinusGreater(@ptrCast(self));
    }

    pub fn OperatorMinusGreater2(self: ?*anyopaque, ) QtC.QCborValueConstRef {
        return qtc.QCborMap__Iterator_OperatorMinusGreater2(@ptrCast(self));
    }

    pub fn Key(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborMap__Iterator_Key(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) QtC.QCborValueRef {
        return qtc.QCborMap__Iterator_Value(@ptrCast(self));
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) QTreeWidgetItemIterator::Iterator {
        return @ptrCast(qtc.QCborMap__Iterator_OperatorPlusPlus(@ptrCast(self)));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QTreeWidgetItemIterator::Iterator {
        return qtc.QCborMap__Iterator_OperatorPlusPlus2(@ptrCast(self), param1);
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) QTreeWidgetItemIterator::Iterator {
        return @ptrCast(qtc.QCborMap__Iterator_OperatorMinusMinus(@ptrCast(self)));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QTreeWidgetItemIterator::Iterator {
        return qtc.QCborMap__Iterator_OperatorMinusMinus2(@ptrCast(self), param1);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QTreeWidgetItemIterator::Iterator {
        return @ptrCast(qtc.QCborMap__Iterator_OperatorPlusAssign(@ptrCast(self), j));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QTreeWidgetItemIterator::Iterator {
        return @ptrCast(qtc.QCborMap__Iterator_OperatorMinusAssign(@ptrCast(self), j));
    }

    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QTreeWidgetItemIterator::Iterator {
        return qtc.QCborMap__Iterator_OperatorPlus(@ptrCast(self), j);
    }

    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QTreeWidgetItemIterator::Iterator {
        return qtc.QCborMap__Iterator_OperatorMinus(@ptrCast(self), j);
    }

    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QCborMap__Iterator) i64 {
        return qtc.QCborMap__Iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap__Iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcbormap-constiterator.html
pub const qcbormap__constiterator = struct {

    /// New constructs a new QCborMap::ConstIterator object.
    pub fn New(other: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QCborMap::ConstIterator object.
    pub fn New2() QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new2();
    }


    /// New3 constructs a new QCborMap::ConstIterator object.
    pub fn New3(param1: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new3(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap__ConstIterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMultiply(self: ?*anyopaque, ) QPair<QCborValueConstRef, QCborValueConstRef> {
        return qtc.QCborMap__ConstIterator_OperatorMultiply(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QPair<QCborValueConstRef, QCborValueConstRef> {
        return qtc.QCborMap__ConstIterator_OperatorSubscript(@ptrCast(self), j);
    }

    pub fn OperatorMinusGreater(self: ?*anyopaque, ) QtC.QCborValueConstRef {
        return qtc.QCborMap__ConstIterator_OperatorMinusGreater(@ptrCast(self));
    }

    pub fn Key(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborMap__ConstIterator_Key(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) QtC.QCborValueConstRef {
        return qtc.QCborMap__ConstIterator_Value(@ptrCast(self));
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QCborMap__ConstIterator_OperatorPlusPlus(@ptrCast(self));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QChar {
        return qtc.QCborMap__ConstIterator_OperatorPlusPlus2(@ptrCast(self), param1);
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QCborMap__ConstIterator_OperatorMinusMinus(@ptrCast(self));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QChar {
        return qtc.QCborMap__ConstIterator_OperatorMinusMinus2(@ptrCast(self), param1);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QChar {
        return qtc.QCborMap__ConstIterator_OperatorPlusAssign(@ptrCast(self), j);
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QChar {
        return qtc.QCborMap__ConstIterator_OperatorMinusAssign(@ptrCast(self), j);
    }

    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QChar {
        return qtc.QCborMap__ConstIterator_OperatorPlus(@ptrCast(self), j);
    }

    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QChar {
        return qtc.QCborMap__ConstIterator_OperatorMinus(@ptrCast(self), j);
    }

    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QCborMap__ConstIterator) i64 {
        return qtc.QCborMap__ConstIterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap__ConstIterator_Delete(@ptrCast(self));
    }
};
