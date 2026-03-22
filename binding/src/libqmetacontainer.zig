const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmetacontainer.html
pub const qmetacontainer = struct {

    /// New constructs a new QMetaContainer object.
    pub fn New(other: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new(@ptrCast(other));
    }


    /// New2 constructs a new QMetaContainer object.
    pub fn New2(other: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMetaContainer object.
    pub fn New3() QtC.QMetaContainer {
        return qtc.QMetaContainer_new3();
    }


    /// New4 constructs a new QMetaContainer object.
    pub fn New4(d: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new4(@ptrCast(d));
    }


    /// New5 constructs a new QMetaContainer object.
    pub fn New5(param1: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaContainer_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaContainer_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn HasInputIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self));
    }

    pub fn HasForwardIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self));
    }

    pub fn HasBidirectionalIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self));
    }

    pub fn HasRandomAccessIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self));
    }

    pub fn HasSize(self: ?*anyopaque, ) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, container: ?*anyopaque) i64 {
        return qtc.QMetaContainer_Size(@ptrCast(self), @ptrCast(container));
    }

    pub fn CanClear(self: ?*anyopaque, ) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self), @ptrCast(container));
    }

    pub fn HasIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self), @ptrCast(container));
    }

    pub fn End(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self), @ptrCast(container));
    }

    pub fn DestroyIterator(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self), @ptrCast(iterator));
    }

    pub fn CompareIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    pub fn CopyIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self), @ptrCast(target), @ptrCast(source));
    }

    pub fn AdvanceIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self), @ptrCast(iterator), step);
    }

    pub fn DiffIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) i64 {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    pub fn HasConstIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self));
    }

    pub fn ConstBegin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self), @ptrCast(container));
    }

    pub fn ConstEnd(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self), @ptrCast(container));
    }

    pub fn DestroyConstIterator(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self), @ptrCast(iterator));
    }

    pub fn CompareConstIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    pub fn CopyConstIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self), @ptrCast(target), @ptrCast(source));
    }

    pub fn AdvanceConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self), @ptrCast(iterator), step);
    }

    pub fn DiffConstIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) i64 {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaContainer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetasequence.html
pub const qmetasequence = struct {

    /// New constructs a new QMetaSequence object.
    pub fn New(other: ?*anyopaque) QtC.QMetaSequence {
        return qtc.QMetaSequence_new(@ptrCast(other));
    }


    /// New2 constructs a new QMetaSequence object.
    pub fn New2(other: ?*anyopaque) QtC.QMetaSequence {
        return qtc.QMetaSequence_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMetaSequence object.
    pub fn New3() QtC.QMetaSequence {
        return qtc.QMetaSequence_new3();
    }


    /// New4 constructs a new QMetaSequence object.
    pub fn New4(d: ?*anyopaque) QtC.QMetaSequence {
        return qtc.QMetaSequence_new4(@ptrCast(d));
    }


    /// New5 constructs a new QMetaSequence object.
    pub fn New5(param1: ?*anyopaque) QtC.QMetaSequence {
        return qtc.QMetaSequence_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaSequence_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaSequence_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ValueMetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QMetaSequence_ValueMetaType(@ptrCast(self));
    }

    pub fn IsSortable(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_IsSortable(@ptrCast(self));
    }

    pub fn CanAddValueAtBegin(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanAddValueAtBegin(@ptrCast(self));
    }

    pub fn AddValueAtBegin(self: ?*anyopaque, container: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_AddValueAtBegin(@ptrCast(self), @ptrCast(container), @ptrCast(value));
    }

    pub fn CanAddValueAtEnd(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanAddValueAtEnd(@ptrCast(self));
    }

    pub fn AddValueAtEnd(self: ?*anyopaque, container: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_AddValueAtEnd(@ptrCast(self), @ptrCast(container), @ptrCast(value));
    }

    pub fn CanRemoveValueAtBegin(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanRemoveValueAtBegin(@ptrCast(self));
    }

    pub fn RemoveValueAtBegin(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtBegin(@ptrCast(self), @ptrCast(container));
    }

    pub fn CanRemoveValueAtEnd(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanRemoveValueAtEnd(@ptrCast(self));
    }

    pub fn RemoveValueAtEnd(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtEnd(@ptrCast(self), @ptrCast(container));
    }

    pub fn CanGetValueAtIndex(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanGetValueAtIndex(@ptrCast(self));
    }

    pub fn ValueAtIndex(self: ?*anyopaque, container: ?*anyopaque, index: i64, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIndex(@ptrCast(self), @ptrCast(container), index, @ptrCast(result));
    }

    pub fn CanSetValueAtIndex(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanSetValueAtIndex(@ptrCast(self));
    }

    pub fn SetValueAtIndex(self: ?*anyopaque, container: ?*anyopaque, index: i64, value: ?*anyopaque) void {
        qtc.QMetaSequence_SetValueAtIndex(@ptrCast(self), @ptrCast(container), index, @ptrCast(value));
    }

    pub fn CanAddValue(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanAddValue(@ptrCast(self));
    }

    pub fn AddValue(self: ?*anyopaque, container: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_AddValue(@ptrCast(self), @ptrCast(container), @ptrCast(value));
    }

    pub fn CanRemoveValue(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanRemoveValue(@ptrCast(self));
    }

    pub fn RemoveValue(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValue(@ptrCast(self), @ptrCast(container));
    }

    pub fn CanGetValueAtIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanGetValueAtIterator(@ptrCast(self));
    }

    pub fn ValueAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(result));
    }

    pub fn CanSetValueAtIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanSetValueAtIterator(@ptrCast(self));
    }

    pub fn SetValueAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_SetValueAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(value));
    }

    pub fn CanInsertValueAtIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanInsertValueAtIterator(@ptrCast(self));
    }

    pub fn InsertValueAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_InsertValueAtIterator(@ptrCast(self), @ptrCast(container), @ptrCast(iterator), @ptrCast(value));
    }

    pub fn CanEraseValueAtIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanEraseValueAtIterator(@ptrCast(self));
    }

    pub fn EraseValueAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaSequence_EraseValueAtIterator(@ptrCast(self), @ptrCast(container), @ptrCast(iterator));
    }

    pub fn CanEraseRangeAtIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanEraseRangeAtIterator(@ptrCast(self));
    }

    pub fn EraseRangeAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator1: ?*anyopaque, iterator2: ?*anyopaque) void {
        qtc.QMetaSequence_EraseRangeAtIterator(@ptrCast(self), @ptrCast(container), @ptrCast(iterator1), @ptrCast(iterator2));
    }

    pub fn CanGetValueAtConstIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaSequence_CanGetValueAtConstIterator(@ptrCast(self));
    }

    pub fn ValueAtConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtConstIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(result));
    }

    pub fn Iface(self: ?*anyopaque, ) QtC.QtMetaContainerPrivate__QMetaSequenceInterface {
        return qtc.QMetaSequence_Iface(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaSequence_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaassociation.html
pub const qmetaassociation = struct {

    /// New constructs a new QMetaAssociation object.
    pub fn New(other: ?*anyopaque) QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new(@ptrCast(other));
    }


    /// New2 constructs a new QMetaAssociation object.
    pub fn New2(other: ?*anyopaque) QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMetaAssociation object.
    pub fn New3() QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new3();
    }


    /// New4 constructs a new QMetaAssociation object.
    pub fn New4(d: ?*anyopaque) QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new4(@ptrCast(d));
    }


    /// New5 constructs a new QMetaAssociation object.
    pub fn New5(param1: ?*anyopaque) QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaAssociation_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaAssociation_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn KeyMetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QMetaAssociation_KeyMetaType(@ptrCast(self));
    }

    pub fn MappedMetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QMetaAssociation_MappedMetaType(@ptrCast(self));
    }

    pub fn CanInsertKey(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanInsertKey(@ptrCast(self));
    }

    pub fn InsertKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_InsertKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    pub fn CanRemoveKey(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanRemoveKey(@ptrCast(self));
    }

    pub fn RemoveKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_RemoveKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    pub fn CanContainsKey(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanContainsKey(@ptrCast(self));
    }

    pub fn ContainsKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QMetaAssociation_ContainsKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    pub fn CanGetMappedAtKey(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanGetMappedAtKey(@ptrCast(self));
    }

    pub fn MappedAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtKey(@ptrCast(self), @ptrCast(container), @ptrCast(key), @ptrCast(mapped));
    }

    pub fn CanSetMappedAtKey(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanSetMappedAtKey(@ptrCast(self));
    }

    pub fn SetMappedAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtKey(@ptrCast(self), @ptrCast(container), @ptrCast(key), @ptrCast(mapped));
    }

    pub fn CanGetKeyAtIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanGetKeyAtIterator(@ptrCast(self));
    }

    pub fn KeyAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(key));
    }

    pub fn CanGetKeyAtConstIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanGetKeyAtConstIterator(@ptrCast(self));
    }

    pub fn KeyAtConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtConstIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(key));
    }

    pub fn CanGetMappedAtIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanGetMappedAtIterator(@ptrCast(self));
    }

    pub fn MappedAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(mapped));
    }

    pub fn CanGetMappedAtConstIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanGetMappedAtConstIterator(@ptrCast(self));
    }

    pub fn MappedAtConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtConstIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(mapped));
    }

    pub fn CanSetMappedAtIterator(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanSetMappedAtIterator(@ptrCast(self));
    }

    pub fn SetMappedAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(mapped));
    }

    pub fn CanCreateIteratorAtKey(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanCreateIteratorAtKey(@ptrCast(self));
    }

    pub fn CreateIteratorAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateIteratorAtKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    pub fn CanCreateConstIteratorAtKey(self: ?*anyopaque, ) bool {
        return qtc.QMetaAssociation_CanCreateConstIteratorAtKey(@ptrCast(self));
    }

    pub fn CreateConstIteratorAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateConstIteratorAtKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    pub fn Iface(self: ?*anyopaque, ) QtC.QtMetaContainerPrivate__QMetaAssociationInterface {
        return qtc.QMetaAssociation_Iface(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaAssociation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/metacontainer.html#types
pub const enums = struct {
    pub const IteratorCapability = enum {
        pub const InputCapability: u8 = 1;
        pub const ForwardCapability: u8 = 2;
        pub const BiDirectionalCapability: u8 = 4;
        pub const RandomAccessCapability: u8 = 8;
    };

    pub const AddRemoveCapability = enum {
        pub const CanAddAtBegin: u8 = 1;
        pub const CanRemoveAtBegin: u8 = 2;
        pub const CanAddAtEnd: u8 = 4;
        pub const CanRemoveAtEnd: u8 = 8;
    };

    pub const Position = enum {
        pub const AtBegin: u8 = 0;
        pub const AtEnd: u8 = 1;
        pub const Unspecified: u8 = 2;
    };

};
