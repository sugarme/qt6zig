const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qassociativeiterator.html
pub const qassociativeiterator = struct {

    pub fn Key(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAssociativeIterator_Key(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) QVariantRef<QAssociativeIterator> {
        return qtc.QAssociativeIterator_Value(@ptrCast(self));
    }

    pub fn OperatorMultiply(self: ?*anyopaque, ) QVariantRef<QAssociativeIterator> {
        return qtc.QAssociativeIterator_OperatorMultiply(@ptrCast(self));
    }

    pub fn OperatorMinusGreater(self: ?*anyopaque, ) QVariantPointer<QAssociativeIterator> {
        return qtc.QAssociativeIterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAssociativeIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qassociativeconstiterator.html
pub const qassociativeconstiterator = struct {

    pub fn Key(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAssociativeConstIterator_Key(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAssociativeConstIterator_Value(@ptrCast(self));
    }

    pub fn OperatorMultiply(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAssociativeConstIterator_OperatorMultiply(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAssociativeConstIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qassociativeiterable.html
pub const qassociativeiterable = struct {

    /// New constructs a new QAssociativeIterable object.
    pub fn New() QtC.QAssociativeIterable {
        return qtc.QAssociativeIterable_new();
    }


    /// New2 constructs a new QAssociativeIterable object.
    pub fn New2(metaAssociation: ?*anyopaque, metaType: ?*anyopaque, iterable: ?*anyopaque) QtC.QAssociativeIterable {
        return qtc.QAssociativeIterable_new2(@ptrCast(metaAssociation), @ptrCast(metaType), @ptrCast(iterable));
    }


    /// New3 constructs a new QAssociativeIterable object.
    pub fn New3(metaAssociation: ?*anyopaque, metaType: ?*anyopaque, iterable: ?*anyopaque) QtC.QAssociativeIterable {
        return qtc.QAssociativeIterable_new3(@ptrCast(metaAssociation), @ptrCast(metaType), @ptrCast(iterable));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAssociativeIterable_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAssociativeIterable_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Begin(self: ?*anyopaque, ) QTaggedIterator<QAssociativeConstIterator, void> {
        return qtc.QAssociativeIterable_Begin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QTaggedIterator<QAssociativeConstIterator, void> {
        return qtc.QAssociativeIterable_End(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, ) QTaggedIterator<QAssociativeConstIterator, void> {
        return qtc.QAssociativeIterable_ConstBegin(@ptrCast(self));
    }

    pub fn ConstEnd(self: ?*anyopaque, ) QTaggedIterator<QAssociativeConstIterator, void> {
        return qtc.QAssociativeIterable_ConstEnd(@ptrCast(self));
    }

    pub fn MutableBegin(self: ?*anyopaque, ) QTaggedIterator<QAssociativeIterator, void> {
        return qtc.QAssociativeIterable_MutableBegin(@ptrCast(self));
    }

    pub fn MutableEnd(self: ?*anyopaque, ) QTaggedIterator<QAssociativeIterator, void> {
        return qtc.QAssociativeIterable_MutableEnd(@ptrCast(self));
    }

    pub fn Find(self: ?*anyopaque, key: ?*anyopaque) QTaggedIterator<QAssociativeConstIterator, void> {
        return qtc.QAssociativeIterable_Find(@ptrCast(self), @ptrCast(key));
    }

    pub fn ConstFind(self: ?*anyopaque, key: ?*anyopaque) QTaggedIterator<QAssociativeConstIterator, void> {
        return qtc.QAssociativeIterable_ConstFind(@ptrCast(self), @ptrCast(key));
    }

    pub fn MutableFind(self: ?*anyopaque, key: ?*anyopaque) QTaggedIterator<QAssociativeIterator, void> {
        return qtc.QAssociativeIterable_MutableFind(@ptrCast(self), @ptrCast(key));
    }

    pub fn ContainsKey(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QAssociativeIterable_ContainsKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn InsertKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QAssociativeIterable_InsertKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn RemoveKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QAssociativeIterable_RemoveKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn Value(self: ?*anyopaque, key: ?*anyopaque) QtC.QVariant {
        return qtc.QAssociativeIterable_Value(@ptrCast(self), @ptrCast(key));
    }

    pub fn SetValue(self: ?*anyopaque, key: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QAssociativeIterable_SetValue(@ptrCast(self), @ptrCast(key), @ptrCast(mapped));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAssociativeIterable_Delete(@ptrCast(self));
    }
};
