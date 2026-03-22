const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qjsonarray.html
pub const qjsonarray = struct {

    /// New constructs a new QJsonArray object.
    pub fn New() QtC.QJsonArray {
        return qtc.QJsonArray_new();
    }


    /// New2 constructs a new QJsonArray object.
    pub fn New2(other: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonArray_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn FromStringList(list: []const u8) QtC.QJsonArray {
        return qtc.QJsonArray_FromStringList(@ptrCast(list));
    }

    pub fn FromVariantList(list: []const u8) QtC.QJsonArray {
        return qtc.QJsonArray_FromVariantList(@ptrCast(list));
    }

    pub fn ToVariantList(self: ?*anyopaque, ) []const u8 {
        return qtc.QJsonArray_ToVariantList(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QJsonArray_Size(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i64 {
        return qtc.QJsonArray_Count(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QJsonArray_IsEmpty(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonArray_At(@ptrCast(self), i);
    }

    pub fn First(self: ?*anyopaque, ) QtC.QJsonValue {
        return qtc.QJsonArray_First(@ptrCast(self));
    }

    pub fn Last(self: ?*anyopaque, ) QtC.QJsonValue {
        return qtc.QJsonArray_Last(@ptrCast(self));
    }

    pub fn Prepend(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QJsonArray_Prepend(@ptrCast(self), @ptrCast(value));
    }

    pub fn Append(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QJsonArray_Append(@ptrCast(self), @ptrCast(value));
    }

    pub fn RemoveAt(self: ?*anyopaque, i: i64) void {
        qtc.QJsonArray_RemoveAt(@ptrCast(self), i);
    }

    pub fn TakeAt(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonArray_TakeAt(@ptrCast(self), i);
    }

    pub fn RemoveFirst(self: ?*anyopaque, ) void {
        qtc.QJsonArray_RemoveFirst(@ptrCast(self));
    }

    pub fn RemoveLast(self: ?*anyopaque, ) void {
        qtc.QJsonArray_RemoveLast(@ptrCast(self));
    }

    pub fn Insert(self: ?*anyopaque, i: i64, value: ?*anyopaque) void {
        qtc.QJsonArray_Insert(@ptrCast(self), i, @ptrCast(value));
    }

    pub fn Replace(self: ?*anyopaque, i: i64, value: ?*anyopaque) void {
        qtc.QJsonArray_Replace(@ptrCast(self), i, @ptrCast(value));
    }

    pub fn Contains(self: ?*anyopaque, element: ?*anyopaque) bool {
        return qtc.QJsonArray_Contains(@ptrCast(self), @ptrCast(element));
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonArray_OperatorSubscript2(@ptrCast(self), i);
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Begin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QJsonArray_Begin(@ptrCast(self)));
    }

    pub fn Begin2(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonArray_Begin2(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonArray_ConstBegin(@ptrCast(self));
    }

    pub fn Cbegin(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonArray_Cbegin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QJsonArray_End(@ptrCast(self)));
    }

    pub fn End2(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonArray_End2(@ptrCast(self));
    }

    pub fn ConstEnd(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonArray_ConstEnd(@ptrCast(self));
    }

    pub fn Cend(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonArray_Cend(@ptrCast(self));
    }

    pub fn Insert2(self: ?*anyopaque, before: *It::value_type, value: ?*anyopaque) It::value_type {
        return @ptrCast(qtc.QJsonArray_Insert2(@ptrCast(self), @ptrCast(before), @ptrCast(value)));
    }

    pub fn Erase(self: ?*anyopaque, it: *It::value_type) It::value_type {
        return @ptrCast(qtc.QJsonArray_Erase(@ptrCast(self), @ptrCast(it)));
    }

    pub fn OperatorPlus(self: ?*anyopaque, v: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonArray_OperatorPlus(@ptrCast(self), @ptrCast(v));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, v: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonArray_OperatorPlusAssign(@ptrCast(self), @ptrCast(v));
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, v: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonArray_OperatorShiftLeft(@ptrCast(self), @ptrCast(v));
    }

    pub fn PushBack(self: ?*anyopaque, t: ?*anyopaque) void {
        qtc.QJsonArray_PushBack(@ptrCast(self), @ptrCast(t));
    }

    pub fn PushFront(self: ?*anyopaque, t: ?*anyopaque) void {
        qtc.QJsonArray_PushFront(@ptrCast(self), @ptrCast(t));
    }

    pub fn PopFront(self: ?*anyopaque, ) void {
        qtc.QJsonArray_PopFront(@ptrCast(self));
    }

    pub fn PopBack(self: ?*anyopaque, ) void {
        qtc.QJsonArray_PopBack(@ptrCast(self));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QJsonArray_Empty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonArray_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonarray-iterator.html
pub const qjsonarray__iterator = struct {

    /// New constructs a new QJsonArray::iterator object.
    pub fn New(other: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QJsonArray::iterator object.
    pub fn New2() QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_new2();
    }


    /// New3 constructs a new QJsonArray::iterator object.
    pub fn New3(array: ?*anyopaque, index: i64) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_new3(@ptrCast(array), index);
    }


    /// New4 constructs a new QJsonArray::iterator object.
    pub fn New4(other: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_new4(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray__iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QJsonArray__iterator_OperatorPlusPlus(@ptrCast(self)));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) It::value_type {
        return @ptrCast(qtc.QJsonArray__iterator_OperatorPlusPlus2(@ptrCast(self), param1));
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QJsonArray__iterator_OperatorMinusMinus(@ptrCast(self)));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) It::value_type {
        return @ptrCast(qtc.QJsonArray__iterator_OperatorMinusMinus2(@ptrCast(self), param1));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) It::value_type {
        return @ptrCast(qtc.QJsonArray__iterator_OperatorPlusAssign(@ptrCast(self), j));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) It::value_type {
        return @ptrCast(qtc.QJsonArray__iterator_OperatorMinusAssign(@ptrCast(self), j));
    }

    pub fn OperatorPlus(self: ?*anyopaque, j: i64) It::value_type {
        return @ptrCast(qtc.QJsonArray__iterator_OperatorPlus(@ptrCast(self), j));
    }

    pub fn OperatorMinus(self: ?*anyopaque, j: i64) It::value_type {
        return @ptrCast(qtc.QJsonArray__iterator_OperatorMinus(@ptrCast(self), j));
    }

    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QJsonArray__iterator) i64 {
        return qtc.QJsonArray__iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonArray__iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonarray-const_iterator.html
pub const qjsonarray__const_iterator = struct {

    /// New constructs a new QJsonArray::const_iterator object.
    pub fn New(other: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QJsonArray::const_iterator object.
    pub fn New2() QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new2();
    }


    /// New3 constructs a new QJsonArray::const_iterator object.
    pub fn New3(array: ?*anyopaque, index: i64) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new3(@ptrCast(array), index);
    }


    /// New4 constructs a new QJsonArray::const_iterator object.
    pub fn New4(o: *const It::value_type) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new4(@ptrCast(o));
    }


    /// New5 constructs a new QJsonArray::const_iterator object.
    pub fn New5(other: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new5(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray__const_iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonArray__const_iterator_OperatorPlusPlus(@ptrCast(self));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QRect {
        return qtc.QJsonArray__const_iterator_OperatorPlusPlus2(@ptrCast(self), param1);
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QJsonArray__const_iterator_OperatorMinusMinus(@ptrCast(self));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QRect {
        return qtc.QJsonArray__const_iterator_OperatorMinusMinus2(@ptrCast(self), param1);
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QRect {
        return qtc.QJsonArray__const_iterator_OperatorPlusAssign(@ptrCast(self), j);
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QRect {
        return qtc.QJsonArray__const_iterator_OperatorMinusAssign(@ptrCast(self), j);
    }

    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QRect {
        return qtc.QJsonArray__const_iterator_OperatorPlus(@ptrCast(self), j);
    }

    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QRect {
        return qtc.QJsonArray__const_iterator_OperatorMinus(@ptrCast(self), j);
    }

    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QJsonArray__const_iterator) i64 {
        return qtc.QJsonArray__const_iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonArray__const_iterator_Delete(@ptrCast(self));
    }
};
