const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmetamethod.html
pub const qmetamethod = struct {

    /// New constructs a new QMetaMethod object.
    pub fn New(other: ?*anyopaque) QtC.QMetaMethod {
        return qtc.QMetaMethod_new(@ptrCast(other));
    }


    /// New2 constructs a new QMetaMethod object.
    pub fn New2(other: ?*anyopaque) QtC.QMetaMethod {
        return qtc.QMetaMethod_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMetaMethod object.
    pub fn New3() QtC.QMetaMethod {
        return qtc.QMetaMethod_new3();
    }


    /// New4 constructs a new QMetaMethod object.
    pub fn New4(param1: ?*anyopaque) QtC.QMetaMethod {
        return qtc.QMetaMethod_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaMethod_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaMethod_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn MethodSignature(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaMethod_MethodSignature(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.MethodSignature: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaMethod_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.Name: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn TypeName(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaMethod_TypeName(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn ReturnType(self: ?*anyopaque, ) i32 {
        return qtc.QMetaMethod_ReturnType(@ptrCast(self));
    }

    pub fn ReturnMetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QMetaMethod_ReturnMetaType(@ptrCast(self));
    }

    pub fn ParameterCount(self: ?*anyopaque, ) i32 {
        return qtc.QMetaMethod_ParameterCount(@ptrCast(self));
    }

    pub fn ParameterType(self: ?*anyopaque, index: i32) i32 {
        return qtc.QMetaMethod_ParameterType(@ptrCast(self), index);
    }

    pub fn ParameterMetaType(self: ?*anyopaque, index: i32) QtC.QMetaType {
        return qtc.QMetaMethod_ParameterMetaType(@ptrCast(self), index);
    }

    pub fn GetParameterTypes(self: ?*anyopaque, types: *i32) void {
        qtc.QMetaMethod_GetParameterTypes(@ptrCast(self), @ptrCast(types));
    }

    pub fn ParameterTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QMetaMethod_ParameterTypes(@ptrCast(self));
    }

    pub fn ParameterTypeName(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaMethod_ParameterTypeName(@ptrCast(self), index);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.ParameterTypeName: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ParameterNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QMetaMethod_ParameterNames(@ptrCast(self));
    }

    pub fn Tag(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaMethod_Tag(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Access(self: ?*anyopaque, ) i32 {
        return qtc.QMetaMethod_Access(@ptrCast(self));
    }

    pub fn MethodType(self: ?*anyopaque, ) i32 {
        return qtc.QMetaMethod_MethodType(@ptrCast(self));
    }

    pub fn Attributes(self: ?*anyopaque, ) i32 {
        return qtc.QMetaMethod_Attributes(@ptrCast(self));
    }

    pub fn MethodIndex(self: ?*anyopaque, ) i32 {
        return qtc.QMetaMethod_MethodIndex(@ptrCast(self));
    }

    pub fn RelativeMethodIndex(self: ?*anyopaque, ) i32 {
        return qtc.QMetaMethod_RelativeMethodIndex(@ptrCast(self));
    }

    pub fn Revision(self: ?*anyopaque, ) i32 {
        return qtc.QMetaMethod_Revision(@ptrCast(self));
    }

    pub fn IsConst(self: ?*anyopaque, ) bool {
        return qtc.QMetaMethod_IsConst(@ptrCast(self));
    }

    pub fn EnclosingMetaObject(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QMetaMethod_EnclosingMetaObject(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QMetaMethod_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaMethod_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaenum.html
pub const qmetaenum = struct {

    /// New constructs a new QMetaEnum object.
    pub fn New(other: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QMetaEnum_new(@ptrCast(other));
    }


    /// New2 constructs a new QMetaEnum object.
    pub fn New2(other: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QMetaEnum_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMetaEnum object.
    pub fn New3() QtC.QMetaEnum {
        return qtc.QMetaEnum_new3();
    }


    /// New4 constructs a new QMetaEnum object.
    pub fn New4(param1: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QMetaEnum_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaEnum_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaEnum_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Name(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaEnum_Name(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn EnumName(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaEnum_EnumName(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn MetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QMetaEnum_MetaType(@ptrCast(self));
    }

    pub fn IsFlag(self: ?*anyopaque, ) bool {
        return qtc.QMetaEnum_IsFlag(@ptrCast(self));
    }

    pub fn IsScoped(self: ?*anyopaque, ) bool {
        return qtc.QMetaEnum_IsScoped(@ptrCast(self));
    }

    pub fn KeyCount(self: ?*anyopaque, ) i32 {
        return qtc.QMetaEnum_KeyCount(@ptrCast(self));
    }

    pub fn Key(self: ?*anyopaque, index: i32) []const u8 {
        const _ret = qtc.QMetaEnum_Key(@ptrCast(self), index);
return  std.mem.span(_ret);
    }

    pub fn Value(self: ?*anyopaque, index: i32) i32 {
        return qtc.QMetaEnum_Value(@ptrCast(self), index);
    }

    pub fn Scope(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaEnum_Scope(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn KeyToValue(self: ?*anyopaque, key: []const u8) i32 {
        return qtc.QMetaEnum_KeyToValue(@ptrCast(self), @ptrCast(key));
    }

    pub fn ValueToKey(self: ?*anyopaque, value: i32) []const u8 {
        const _ret = qtc.QMetaEnum_ValueToKey(@ptrCast(self), value);
return  std.mem.span(_ret);
    }

    pub fn KeysToValue(self: ?*anyopaque, keys: []const u8) i32 {
        return qtc.QMetaEnum_KeysToValue(@ptrCast(self), @ptrCast(keys));
    }

    pub fn ValueToKeys(self: ?*anyopaque, value: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaEnum_ValueToKeys(@ptrCast(self), value);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaenum.ValueToKeys: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn EnclosingMetaObject(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QMetaEnum_EnclosingMetaObject(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QMetaEnum_IsValid(@ptrCast(self));
    }

    pub fn KeyToValue2(self: ?*anyopaque, key: []const u8, ok: *bool) i32 {
        return qtc.QMetaEnum_KeyToValue2(@ptrCast(self), @ptrCast(key), @ptrCast(ok));
    }

    pub fn KeysToValue2(self: ?*anyopaque, keys: []const u8, ok: *bool) i32 {
        return qtc.QMetaEnum_KeysToValue2(@ptrCast(self), @ptrCast(keys), @ptrCast(ok));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaEnum_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaproperty.html
pub const qmetaproperty = struct {

    /// New constructs a new QMetaProperty object.
    pub fn New(other: ?*anyopaque) QtC.QMetaProperty {
        return qtc.QMetaProperty_new(@ptrCast(other));
    }


    /// New2 constructs a new QMetaProperty object.
    pub fn New2(other: ?*anyopaque) QtC.QMetaProperty {
        return qtc.QMetaProperty_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMetaProperty object.
    pub fn New3() QtC.QMetaProperty {
        return qtc.QMetaProperty_new3();
    }


    /// New4 constructs a new QMetaProperty object.
    pub fn New4(param1: ?*anyopaque) QtC.QMetaProperty {
        return qtc.QMetaProperty_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaProperty_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaProperty_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Name(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaProperty_Name(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn TypeName(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaProperty_TypeName(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Type(self: ?*anyopaque, ) i64 {
        return qtc.QMetaProperty_Type(@ptrCast(self));
    }

    pub fn UserType(self: ?*anyopaque, ) i32 {
        return qtc.QMetaProperty_UserType(@ptrCast(self));
    }

    pub fn TypeId(self: ?*anyopaque, ) i32 {
        return qtc.QMetaProperty_TypeId(@ptrCast(self));
    }

    pub fn MetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QMetaProperty_MetaType(@ptrCast(self));
    }

    pub fn PropertyIndex(self: ?*anyopaque, ) i32 {
        return qtc.QMetaProperty_PropertyIndex(@ptrCast(self));
    }

    pub fn RelativePropertyIndex(self: ?*anyopaque, ) i32 {
        return qtc.QMetaProperty_RelativePropertyIndex(@ptrCast(self));
    }

    pub fn IsReadable(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsReadable(@ptrCast(self));
    }

    pub fn IsWritable(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsWritable(@ptrCast(self));
    }

    pub fn IsResettable(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsResettable(@ptrCast(self));
    }

    pub fn IsDesignable(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsDesignable(@ptrCast(self));
    }

    pub fn IsScriptable(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsScriptable(@ptrCast(self));
    }

    pub fn IsStored(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsStored(@ptrCast(self));
    }

    pub fn IsUser(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsUser(@ptrCast(self));
    }

    pub fn IsConstant(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsConstant(@ptrCast(self));
    }

    pub fn IsFinal(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsFinal(@ptrCast(self));
    }

    pub fn IsRequired(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsRequired(@ptrCast(self));
    }

    pub fn IsBindable(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsBindable(@ptrCast(self));
    }

    pub fn IsFlagType(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsFlagType(@ptrCast(self));
    }

    pub fn IsEnumType(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsEnumType(@ptrCast(self));
    }

    pub fn Enumerator(self: ?*anyopaque, ) QtC.QMetaEnum {
        return qtc.QMetaProperty_Enumerator(@ptrCast(self));
    }

    pub fn HasNotifySignal(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_HasNotifySignal(@ptrCast(self));
    }

    pub fn NotifySignal(self: ?*anyopaque, ) QtC.QMetaMethod {
        return qtc.QMetaProperty_NotifySignal(@ptrCast(self));
    }

    pub fn NotifySignalIndex(self: ?*anyopaque, ) i32 {
        return qtc.QMetaProperty_NotifySignalIndex(@ptrCast(self));
    }

    pub fn Revision(self: ?*anyopaque, ) i32 {
        return qtc.QMetaProperty_Revision(@ptrCast(self));
    }

    pub fn Read(self: ?*anyopaque, obj: ?*anyopaque) QtC.QVariant {
        return qtc.QMetaProperty_Read(@ptrCast(self), @ptrCast(obj));
    }

    pub fn Write(self: ?*anyopaque, obj: ?*anyopaque, value: ?*anyopaque) bool {
        return qtc.QMetaProperty_Write(@ptrCast(self), @ptrCast(obj), @ptrCast(value));
    }

    pub fn Reset(self: ?*anyopaque, obj: ?*anyopaque) bool {
        return qtc.QMetaProperty_Reset(@ptrCast(self), @ptrCast(obj));
    }

    pub fn Bindable(self: ?*anyopaque, object: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QMetaProperty_Bindable(@ptrCast(self), @ptrCast(object));
    }

    pub fn ReadOnGadget(self: ?*anyopaque, gadget: ?*anyopaque) QtC.QVariant {
        return qtc.QMetaProperty_ReadOnGadget(@ptrCast(self), @ptrCast(gadget));
    }

    pub fn WriteOnGadget(self: ?*anyopaque, gadget: ?*anyopaque, value: ?*anyopaque) bool {
        return qtc.QMetaProperty_WriteOnGadget(@ptrCast(self), @ptrCast(gadget), @ptrCast(value));
    }

    pub fn ResetOnGadget(self: ?*anyopaque, gadget: ?*anyopaque) bool {
        return qtc.QMetaProperty_ResetOnGadget(@ptrCast(self), @ptrCast(gadget));
    }

    pub fn HasStdCppSet(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_HasStdCppSet(@ptrCast(self));
    }

    pub fn IsAlias(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsAlias(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QMetaProperty_IsValid(@ptrCast(self));
    }

    pub fn EnclosingMetaObject(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QMetaProperty_EnclosingMetaObject(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaProperty_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaclassinfo.html
pub const qmetaclassinfo = struct {

    /// New constructs a new QMetaClassInfo object.
    pub fn New(other: ?*anyopaque) QtC.QMetaClassInfo {
        return qtc.QMetaClassInfo_new(@ptrCast(other));
    }


    /// New2 constructs a new QMetaClassInfo object.
    pub fn New2(other: ?*anyopaque) QtC.QMetaClassInfo {
        return qtc.QMetaClassInfo_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMetaClassInfo object.
    pub fn New3() QtC.QMetaClassInfo {
        return qtc.QMetaClassInfo_new3();
    }


    /// New4 constructs a new QMetaClassInfo object.
    pub fn New4(param1: ?*anyopaque) QtC.QMetaClassInfo {
        return qtc.QMetaClassInfo_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaClassInfo_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaClassInfo_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Name(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaClassInfo_Name(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn Value(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaClassInfo_Value(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn EnclosingMetaObject(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QMetaClassInfo_EnclosingMetaObject(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaClassInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/metaobject.html#types
pub const enums = struct {
    pub const Access = enum {
        pub const Private: i32 = 0;
        pub const Protected: i32 = 1;
        pub const Public: i32 = 2;
    };

    pub const MethodType = enum {
        pub const Method: i32 = 0;
        pub const Signal: i32 = 1;
        pub const Slot: i32 = 2;
        pub const Constructor: i32 = 3;
    };

    pub const Attributes = enum {
        pub const Compatibility: i32 = 1;
        pub const Cloned: i32 = 2;
        pub const Scriptable: i32 = 4;
    };

};
