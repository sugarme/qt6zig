const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsequentialiterator.html
pub const qsequentialiterator = struct {

    pub fn OperatorMultiply(self: ?*anyopaque, ) QVariantRef<QSequentialIterator> {
        return qtc.QSequentialIterator_OperatorMultiply(@ptrCast(self));
    }

    pub fn OperatorMinusGreater(self: ?*anyopaque, ) QVariantPointer<QSequentialIterator> {
        return qtc.QSequentialIterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSequentialIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsequentialconstiterator.html
pub const qsequentialconstiterator = struct {

    pub fn OperatorMultiply(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSequentialConstIterator_OperatorMultiply(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSequentialConstIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsequentialiterable.html
pub const qsequentialiterable = struct {

    /// New constructs a new QSequentialIterable object.
    pub fn New() QtC.QSequentialIterable {
        return qtc.QSequentialIterable_new();
    }


    /// New2 constructs a new QSequentialIterable object.
    pub fn New2(metaSequence: ?*anyopaque, metaType: ?*anyopaque, iterable: ?*anyopaque) QtC.QSequentialIterable {
        return qtc.QSequentialIterable_new2(@ptrCast(metaSequence), @ptrCast(metaType), @ptrCast(iterable));
    }


    /// New3 constructs a new QSequentialIterable object.
    pub fn New3(metaSequence: ?*anyopaque, metaType: ?*anyopaque, iterable: ?*anyopaque) QtC.QSequentialIterable {
        return qtc.QSequentialIterable_new3(@ptrCast(metaSequence), @ptrCast(metaType), @ptrCast(iterable));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSequentialIterable_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSequentialIterable_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Begin(self: ?*anyopaque, ) QTaggedIterator<QSequentialConstIterator, void> {
        return qtc.QSequentialIterable_Begin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QTaggedIterator<QSequentialConstIterator, void> {
        return qtc.QSequentialIterable_End(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, ) QTaggedIterator<QSequentialConstIterator, void> {
        return qtc.QSequentialIterable_ConstBegin(@ptrCast(self));
    }

    pub fn ConstEnd(self: ?*anyopaque, ) QTaggedIterator<QSequentialConstIterator, void> {
        return qtc.QSequentialIterable_ConstEnd(@ptrCast(self));
    }

    pub fn MutableBegin(self: ?*anyopaque, ) QTaggedIterator<QSequentialIterator, void> {
        return qtc.QSequentialIterable_MutableBegin(@ptrCast(self));
    }

    pub fn MutableEnd(self: ?*anyopaque, ) QTaggedIterator<QSequentialIterator, void> {
        return qtc.QSequentialIterable_MutableEnd(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, idx: i64) QtC.QVariant {
        return qtc.QSequentialIterable_At(@ptrCast(self), idx);
    }

    pub fn Set(self: ?*anyopaque, idx: i64, value: ?*anyopaque) void {
        qtc.QSequentialIterable_Set(@ptrCast(self), idx, @ptrCast(value));
    }

    pub fn AddValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QSequentialIterable_AddValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn RemoveValue(self: ?*anyopaque, ) void {
        qtc.QSequentialIterable_RemoveValue(@ptrCast(self));
    }

    pub fn ValueMetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QSequentialIterable_ValueMetaType(@ptrCast(self));
    }

    pub fn AddValue2(self: ?*anyopaque, value: ?*anyopaque, position: i32) void {
        qtc.QSequentialIterable_AddValue2(@ptrCast(self), @ptrCast(value), @intCast(position));
    }

    pub fn RemoveValue1(self: ?*anyopaque, position: i32) void {
        qtc.QSequentialIterable_RemoveValue1(@ptrCast(self), @intCast(position));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSequentialIterable_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sequentialiterable.html#types
pub const enums = struct {
    pub const Position = enum {
        pub const Unspecified: i32 = 0;
        pub const AtBegin: i32 = 1;
        pub const AtEnd: i32 = 2;
    };

};
