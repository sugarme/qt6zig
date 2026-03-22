const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcborarray.html
pub const qcborarray = struct {

    /// New constructs a new QCborArray object.
    pub fn New() QtC.QCborArray {
        return qtc.QCborArray_new();
    }


    /// New2 constructs a new QCborArray object.
    pub fn New2(other: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborArray_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborArray_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn ToCborValue(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborArray_ToCborValue(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QCborArray_Size(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QCborArray_IsEmpty(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QCborArray_Clear(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, i: i64) QtC.QCborValue {
        return qtc.QCborArray_At(@ptrCast(self), i);
    }

    pub fn First(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborArray_First(@ptrCast(self));
    }

    pub fn Last(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborArray_Last(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QCborValue {
        return qtc.QCborArray_OperatorSubscript(@ptrCast(self), i);
    }

    pub fn First2(self: ?*anyopaque, ) QtC.QCborValueRef {
        return qtc.QCborArray_First2(@ptrCast(self));
    }

    pub fn Last2(self: ?*anyopaque, ) QtC.QCborValueRef {
        return qtc.QCborArray_Last2(@ptrCast(self));
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, i: i64) QtC.QCborValueRef {
        return qtc.QCborArray_OperatorSubscript2(@ptrCast(self), i);
    }

    pub fn Insert(self: ?*anyopaque, i: i64, value: ?*anyopaque) void {
        qtc.QCborArray_Insert(@ptrCast(self), i, @ptrCast(value));
    }

    pub fn Prepend(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QCborArray_Prepend(@ptrCast(self), @ptrCast(value));
    }

    pub fn Append(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QCborArray_Append(@ptrCast(self), @ptrCast(value));
    }

    pub fn Extract(self: ?*anyopaque, it: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborArray_Extract(@ptrCast(self), @ptrCast(it));
    }

    pub fn Extract2(self: ?*anyopaque, it: QTreeWidgetItemIterator::Iterator) QtC.QCborValue {
        return qtc.QCborArray_Extract2(@ptrCast(self), it);
    }

    pub fn RemoveAt(self: ?*anyopaque, i: i64) void {
        qtc.QCborArray_RemoveAt(@ptrCast(self), i);
    }

    pub fn TakeAt(self: ?*anyopaque, i: i64) QtC.QCborValue {
        return qtc.QCborArray_TakeAt(@ptrCast(self), i);
    }

    pub fn RemoveFirst(self: ?*anyopaque, ) void {
        qtc.QCborArray_RemoveFirst(@ptrCast(self));
    }

    pub fn RemoveLast(self: ?*anyopaque, ) void {
        qtc.QCborArray_RemoveLast(@ptrCast(self));
    }

    pub fn TakeFirst(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborArray_TakeFirst(@ptrCast(self));
    }

    pub fn TakeLast(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborArray_TakeLast(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, value: ?*anyopaque) bool {
        return qtc.QCborArray_Contains(@ptrCast(self), @ptrCast(value));
    }

    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborArray_Compare(@ptrCast(self), @ptrCast(other));
    }

    pub fn Begin(self: ?*anyopaque, ) QtC.QCborArray__Iterator {
        return qtc.QCborArray_Begin(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, ) QtC.QCborArray__ConstIterator {
        return qtc.QCborArray_ConstBegin(@ptrCast(self));
    }

    pub fn Begin2(self: ?*anyopaque, ) QtC.QCborArray__ConstIterator {
        return qtc.QCborArray_Begin2(@ptrCast(self));
    }

    pub fn Cbegin(self: ?*anyopaque, ) QtC.QCborArray__ConstIterator {
        return qtc.QCborArray_Cbegin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QtC.QCborArray__Iterator {
        return qtc.QCborArray_End(@ptrCast(self));
    }

    pub fn ConstEnd(self: ?*anyopaque, ) QtC.QCborArray__ConstIterator {
        return qtc.QCborArray_ConstEnd(@ptrCast(self));
    }

    pub fn End2(self: ?*anyopaque, ) QtC.QCborArray__ConstIterator {
        return qtc.QCborArray_End2(@ptrCast(self));
    }

    pub fn Cend(self: ?*anyopaque, ) QtC.QCborArray__ConstIterator {
        return qtc.QCborArray_Cend(@ptrCast(self));
    }

    pub fn Insert2(self: ?*anyopaque, before: QtC.QCborArray__Iterator, value: ?*anyopaque) QtC.QCborArray__Iterator {
        return qtc.QCborArray_Insert2(@ptrCast(self), @ptrCast(before), @ptrCast(value));
    }

    pub fn Insert3(self: ?*anyopaque, before: QtC.QCborArray__ConstIterator, value: ?*anyopaque) QtC.QCborArray__Iterator {
        return qtc.QCborArray_Insert3(@ptrCast(self), @ptrCast(before), @ptrCast(value));
    }

    pub fn Erase(self: ?*anyopaque, it: QtC.QCborArray__Iterator) QtC.QCborArray__Iterator {
        return qtc.QCborArray_Erase(@ptrCast(self), @ptrCast(it));
    }

    pub fn Erase2(self: ?*anyopaque, it: QtC.QCborArray__ConstIterator) QtC.QCborArray__Iterator {
        return qtc.QCborArray_Erase2(@ptrCast(self), @ptrCast(it));
    }

    pub fn PushBack(self: ?*anyopaque, t: ?*anyopaque) void {
        qtc.QCborArray_PushBack(@ptrCast(self), @ptrCast(t));
    }

    pub fn PushFront(self: ?*anyopaque, t: ?*anyopaque) void {
        qtc.QCborArray_PushFront(@ptrCast(self), @ptrCast(t));
    }

    pub fn PopFront(self: ?*anyopaque, ) void {
        qtc.QCborArray_PopFront(@ptrCast(self));
    }

    pub fn PopBack(self: ?*anyopaque, ) void {
        qtc.QCborArray_PopBack(@ptrCast(self));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QCborArray_Empty(@ptrCast(self));
    }

    pub fn OperatorPlus(self: ?*anyopaque, v: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_OperatorPlus(@ptrCast(self), @ptrCast(v));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, v: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_OperatorPlusAssign(@ptrCast(self), @ptrCast(v));
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, v: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_OperatorShiftLeft(@ptrCast(self), @ptrCast(v));
    }

    pub fn FromStringList(list: []const u8) QtC.QCborArray {
        return qtc.QCborArray_FromStringList(@ptrCast(list));
    }

    pub fn FromVariantList(list: []const u8) QtC.QCborArray {
        return qtc.QCborArray_FromVariantList(@ptrCast(list));
    }

    pub fn FromJsonArray(array: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_FromJsonArray(@ptrCast(array));
    }

    pub fn ToVariantList(self: ?*anyopaque, ) []const u8 {
        return qtc.QCborArray_ToVariantList(@ptrCast(self));
    }

    pub fn ToJsonArray(self: ?*anyopaque, ) QtC.QJsonArray {
        return qtc.QCborArray_ToJsonArray(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborArray_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcborarray-iterator.html
pub const qcborarray__iterator = struct {

    /// New constructs a new QCborArray::Iterator object.
    pub fn New(other: ?*anyopaque) QtC.QCborArray__Iterator {
        return qtc.QCborArray__Iterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QCborArray::Iterator object.
    pub fn New2() QtC.QCborArray__Iterator {
        return qtc.QCborArray__Iterator_new2();
    }


    /// New3 constructs a new QCborArray::Iterator object.
    pub fn New3(param1: ?*anyopaque) QtC.QCborArray__Iterator {
        return qtc.QCborArray__Iterator_new3(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborArray__Iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMultiply(self: ?*anyopaque, ) QtC.QCborValueRef {
        return qtc.QCborArray__Iterator_OperatorMultiply(@ptrCast(self));
    }

    pub fn OperatorMinusGreater(self: ?*anyopaque, ) QtC.QCborValueRef {
        return qtc.QCborArray__Iterator_OperatorMinusGreater(@ptrCast(self));
    }

    pub fn OperatorMinusGreater2(self: ?*anyopaque, ) QtC.QCborValueConstRef {
        return qtc.QCborArray__Iterator_OperatorMinusGreater2(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QtC.QCborValueRef {
        return qtc.QCborArray__Iterator_OperatorSubscript(@ptrCast(self), j);
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) QTreeWidgetItemIterator::Iterator {
        return @ptrCast(qtc.QCborArray__Iterator_OperatorPlusPlus(@ptrCast(self)));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QTreeWidgetItemIterator::Iterator {
        return qtc.QCborArray__Iterator_OperatorPlusPlus2(@ptrCast(self), param1);
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) QTreeWidgetItemIterator::Iterator {
        return @ptrCast(qtc.QCborArray__Iterator_OperatorMinusMinus(@ptrCast(self)));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QTreeWidgetItemIterator::Iterator {
        return qtc.QCborArray__Iterator_OperatorMinusMinus2(@ptrCast(self), param1);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QTreeWidgetItemIterator::Iterator {
        return @ptrCast(qtc.QCborArray__Iterator_OperatorPlusAssign(@ptrCast(self), j));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QTreeWidgetItemIterator::Iterator {
        return @ptrCast(qtc.QCborArray__Iterator_OperatorMinusAssign(@ptrCast(self), j));
    }

    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QTreeWidgetItemIterator::Iterator {
        return qtc.QCborArray__Iterator_OperatorPlus(@ptrCast(self), j);
    }

    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QTreeWidgetItemIterator::Iterator {
        return qtc.QCborArray__Iterator_OperatorMinus(@ptrCast(self), j);
    }

    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QCborArray__Iterator) i64 {
        return qtc.QCborArray__Iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborArray__Iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcborarray-constiterator.html
pub const qcborarray__constiterator = struct {

    /// New constructs a new QCborArray::ConstIterator object.
    pub fn New(other: ?*anyopaque) QtC.QCborArray__ConstIterator {
        return qtc.QCborArray__ConstIterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QCborArray::ConstIterator object.
    pub fn New2() QtC.QCborArray__ConstIterator {
        return qtc.QCborArray__ConstIterator_new2();
    }


    /// New3 constructs a new QCborArray::ConstIterator object.
    pub fn New3(param1: ?*anyopaque) QtC.QCborArray__ConstIterator {
        return qtc.QCborArray__ConstIterator_new3(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborArray__ConstIterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMultiply(self: ?*anyopaque, ) QtC.QCborValueConstRef {
        return qtc.QCborArray__ConstIterator_OperatorMultiply(@ptrCast(self));
    }

    pub fn OperatorMinusGreater(self: ?*anyopaque, ) QtC.QCborValueConstRef {
        return qtc.QCborArray__ConstIterator_OperatorMinusGreater(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QtC.QCborValueConstRef {
        return qtc.QCborArray__ConstIterator_OperatorSubscript(@ptrCast(self), j);
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QCborArray__ConstIterator_OperatorPlusPlus(@ptrCast(self));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QChar {
        return qtc.QCborArray__ConstIterator_OperatorPlusPlus2(@ptrCast(self), param1);
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QCborArray__ConstIterator_OperatorMinusMinus(@ptrCast(self));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QChar {
        return qtc.QCborArray__ConstIterator_OperatorMinusMinus2(@ptrCast(self), param1);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QChar {
        return qtc.QCborArray__ConstIterator_OperatorPlusAssign(@ptrCast(self), j);
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QChar {
        return qtc.QCborArray__ConstIterator_OperatorMinusAssign(@ptrCast(self), j);
    }

    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QChar {
        return qtc.QCborArray__ConstIterator_OperatorPlus(@ptrCast(self), j);
    }

    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QChar {
        return qtc.QCborArray__ConstIterator_OperatorMinus(@ptrCast(self), j);
    }

    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QCborArray__ConstIterator) i64 {
        return qtc.QCborArray__ConstIterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborArray__ConstIterator_Delete(@ptrCast(self));
    }
};
