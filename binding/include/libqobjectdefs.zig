const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgenericargument.html
pub const qgenericargument = struct {

    /// New constructs a new QGenericArgument object.
    pub fn New() QtC.QGenericArgument {
        return qtc.QGenericArgument_new();
    }


    /// New2 constructs a new QGenericArgument object.
    pub fn New2(aName: []const u8) QtC.QGenericArgument {
        return qtc.QGenericArgument_new2(@ptrCast(aName));
    }


    /// New3 constructs a new QGenericArgument object.
    pub fn New3(aName: []const u8, aData: ?*anyopaque) QtC.QGenericArgument {
        return qtc.QGenericArgument_new3(@ptrCast(aName), @ptrCast(aData));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericArgument_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericArgument_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Data(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QGenericArgument_Data(@ptrCast(self));
    }

    pub fn Name(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QGenericArgument_Name(@ptrCast(self));
return  std.mem.span(_ret);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGenericArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgenericreturnargument.html
pub const qgenericreturnargument = struct {

    /// New constructs a new QGenericReturnArgument object.
    pub fn New() QtC.QGenericReturnArgument {
        return qtc.QGenericReturnArgument_new();
    }


    /// New2 constructs a new QGenericReturnArgument object.
    pub fn New2(aName: []const u8) QtC.QGenericReturnArgument {
        return qtc.QGenericReturnArgument_new2(@ptrCast(aName));
    }


    /// New3 constructs a new QGenericReturnArgument object.
    pub fn New3(aName: []const u8, aData: ?*anyopaque) QtC.QGenericReturnArgument {
        return qtc.QGenericReturnArgument_new3(@ptrCast(aName), @ptrCast(aData));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericReturnArgument_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericReturnArgument_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGenericReturnArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetamethodargument.html
pub const qmetamethodargument = struct {

    pub fn MetaType(self: ?*anyopaque, ) QtC.QtPrivate__QMetaTypeInterface {
        return qtc.QMetaMethodArgument_MetaType(@ptrCast(self));
    }

    pub fn SetMetaType(self: ?*anyopaque, metaType: ?*anyopaque) void {
        qtc.QMetaMethodArgument_SetMetaType(@ptrCast(self), @ptrCast(metaType));
    }

    pub fn Name(self: ?*anyopaque, ) []const u8 {
        const name_ret = qtc.QMetaMethodArgument_Name(@ptrCast(self));
return  std.mem.span(name_ret);
    }

    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        qtc.QMetaMethodArgument_SetName(@ptrCast(self), @ptrCast(name));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaMethodArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetamethodreturnargument.html
pub const qmetamethodreturnargument = struct {

    pub fn MetaType(self: ?*anyopaque, ) QtC.QtPrivate__QMetaTypeInterface {
        return qtc.QMetaMethodReturnArgument_MetaType(@ptrCast(self));
    }

    pub fn SetMetaType(self: ?*anyopaque, metaType: ?*anyopaque) void {
        qtc.QMetaMethodReturnArgument_SetMetaType(@ptrCast(self), @ptrCast(metaType));
    }

    pub fn Name(self: ?*anyopaque, ) []const u8 {
        const name_ret = qtc.QMetaMethodReturnArgument_Name(@ptrCast(self));
return  std.mem.span(name_ret);
    }

    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        qtc.QMetaMethodReturnArgument_SetName(@ptrCast(self), @ptrCast(name));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaMethodReturnArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject.html
pub const qmetaobject = struct {

    /// New constructs a new QMetaObject object.
    pub fn New() QtC.QMetaObject {
        return qtc.QMetaObject_new();
    }


    /// New2 constructs a new QMetaObject object.
    pub fn New2(param1: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaObject_new2(@ptrCast(param1));
    }


    pub fn ClassName(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QMetaObject_ClassName(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn SuperClass(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QMetaObject_SuperClass(@ptrCast(self));
    }

    pub fn Inherits(self: ?*anyopaque, metaObject: ?*anyopaque) bool {
        return qtc.QMetaObject_Inherits(@ptrCast(self), @ptrCast(metaObject));
    }

    pub fn Cast(self: ?*anyopaque, obj: ?*anyopaque) QtC.QObject {
        return qtc.QMetaObject_Cast(@ptrCast(self), @ptrCast(obj));
    }

    pub fn Cast2(self: ?*anyopaque, obj: ?*anyopaque) QtC.QObject {
        return qtc.QMetaObject_Cast2(@ptrCast(self), @ptrCast(obj));
    }

    pub fn Tr(self: ?*anyopaque, s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMetaObject_Tr(@ptrCast(self), @ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmetaobject.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QMetaObject_MetaType(@ptrCast(self));
    }

    pub fn MethodOffset(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_MethodOffset(@ptrCast(self));
    }

    pub fn EnumeratorOffset(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_EnumeratorOffset(@ptrCast(self));
    }

    pub fn PropertyOffset(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_PropertyOffset(@ptrCast(self));
    }

    pub fn ClassInfoOffset(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_ClassInfoOffset(@ptrCast(self));
    }

    pub fn ConstructorCount(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_ConstructorCount(@ptrCast(self));
    }

    pub fn MethodCount(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_MethodCount(@ptrCast(self));
    }

    pub fn EnumeratorCount(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_EnumeratorCount(@ptrCast(self));
    }

    pub fn PropertyCount(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_PropertyCount(@ptrCast(self));
    }

    pub fn ClassInfoCount(self: ?*anyopaque, ) i32 {
        return qtc.QMetaObject_ClassInfoCount(@ptrCast(self));
    }

    pub fn IndexOfConstructor(self: ?*anyopaque, constructor: []const u8) i32 {
        return qtc.QMetaObject_IndexOfConstructor(@ptrCast(self), @ptrCast(constructor));
    }

    pub fn IndexOfMethod(self: ?*anyopaque, method: []const u8) i32 {
        return qtc.QMetaObject_IndexOfMethod(@ptrCast(self), @ptrCast(method));
    }

    pub fn IndexOfSignal(self: ?*anyopaque, signal: []const u8) i32 {
        return qtc.QMetaObject_IndexOfSignal(@ptrCast(self), @ptrCast(signal));
    }

    pub fn IndexOfSlot(self: ?*anyopaque, slot: []const u8) i32 {
        return qtc.QMetaObject_IndexOfSlot(@ptrCast(self), @ptrCast(slot));
    }

    pub fn IndexOfEnumerator(self: ?*anyopaque, name: []const u8) i32 {
        return qtc.QMetaObject_IndexOfEnumerator(@ptrCast(self), @ptrCast(name));
    }

    pub fn IndexOfProperty(self: ?*anyopaque, name: []const u8) i32 {
        return qtc.QMetaObject_IndexOfProperty(@ptrCast(self), @ptrCast(name));
    }

    pub fn IndexOfClassInfo(self: ?*anyopaque, name: []const u8) i32 {
        return qtc.QMetaObject_IndexOfClassInfo(@ptrCast(self), @ptrCast(name));
    }

    pub fn Constructor(self: ?*anyopaque, index: i32) QtC.QMetaMethod {
        return qtc.QMetaObject_Constructor(@ptrCast(self), index);
    }

    pub fn Method(self: ?*anyopaque, index: i32) QtC.QMetaMethod {
        return qtc.QMetaObject_Method(@ptrCast(self), index);
    }

    pub fn Enumerator(self: ?*anyopaque, index: i32) QtC.QMetaEnum {
        return qtc.QMetaObject_Enumerator(@ptrCast(self), index);
    }

    pub fn Property(self: ?*anyopaque, index: i32) QtC.QMetaProperty {
        return qtc.QMetaObject_Property(@ptrCast(self), index);
    }

    pub fn ClassInfo(self: ?*anyopaque, index: i32) QtC.QMetaClassInfo {
        return qtc.QMetaObject_ClassInfo(@ptrCast(self), index);
    }

    pub fn UserProperty(self: ?*anyopaque, ) QtC.QMetaProperty {
        return qtc.QMetaObject_UserProperty(@ptrCast(self));
    }

    pub fn CheckConnectArgs(signal: []const u8, method: []const u8) bool {
        return qtc.QMetaObject_CheckConnectArgs(@ptrCast(signal), @ptrCast(method));
    }

    pub fn CheckConnectArgs2(signal: ?*anyopaque, method: ?*anyopaque) bool {
        return qtc.QMetaObject_CheckConnectArgs2(@ptrCast(signal), @ptrCast(method));
    }

    pub fn NormalizedSignature(method: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaObject_NormalizedSignature(@ptrCast(method));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaobject.NormalizedSignature: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn NormalizedType(typeVal: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaObject_NormalizedType(@ptrCast(typeVal));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaobject.NormalizedType: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Disconnect(sender: ?*anyopaque, signal_index: i32, receiver: ?*anyopaque, method_index: i32) bool {
        return qtc.QMetaObject_Disconnect(@ptrCast(sender), signal_index, @ptrCast(receiver), method_index);
    }

    pub fn DisconnectOne(sender: ?*anyopaque, signal_index: i32, receiver: ?*anyopaque, method_index: i32) bool {
        return qtc.QMetaObject_DisconnectOne(@ptrCast(sender), signal_index, @ptrCast(receiver), method_index);
    }

    pub fn ConnectSlotsByName(o: ?*anyopaque) void {
        qtc.QMetaObject_ConnectSlotsByName(@ptrCast(o));
    }

    pub fn Activate(sender: ?*anyopaque, signal_index: i32, argv: ?*anyopaque) void {
        qtc.QMetaObject_Activate(@ptrCast(sender), signal_index, @ptrCast(argv));
    }

    pub fn Activate2(sender: ?*anyopaque, param2: ?*anyopaque, local_signal_index: i32, argv: ?*anyopaque) void {
        qtc.QMetaObject_Activate2(@ptrCast(sender), @ptrCast(param2), local_signal_index, @ptrCast(argv));
    }

    pub fn Activate3(sender: ?*anyopaque, signal_offset: i32, local_signal_index: i32, argv: ?*anyopaque) void {
        qtc.QMetaObject_Activate3(@ptrCast(sender), signal_offset, local_signal_index, @ptrCast(argv));
    }

    pub fn StaticMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QMetaObject_StaticMetacall(@ptrCast(self), @intCast(param1), param2, @ptrCast(param3));
    }

    pub fn Metacall(param1: ?*anyopaque, param2: i32, param3: i32, param4: ?*anyopaque) i32 {
        return qtc.QMetaObject_Metacall(@ptrCast(param1), @intCast(param2), param3, @ptrCast(param4));
    }

    pub fn D(self: ?*anyopaque, ) QtC.QMetaObject__Data {
        return qtc.QMetaObject_D(@ptrCast(self));
    }

    pub fn SetD(self: ?*anyopaque, d: QtC.QMetaObject__Data) void {
        qtc.QMetaObject_SetD(@ptrCast(self), @ptrCast(d));
    }

    pub fn Tr3(self: ?*anyopaque, s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMetaObject_Tr3(@ptrCast(self), @ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmetaobject.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject-connection.html
pub const qmetaobject__connection = struct {

    /// New constructs a new QMetaObject::Connection object.
    pub fn New() QtC.QMetaObject__Connection {
        return qtc.QMetaObject__Connection_new();
    }


    pub fn OperatorvoidMultiplyConnection__Multiply(self: ?*anyopaque, ) void Connection:: {
        return @ptrCast(qtc.QMetaObject__Connection_OperatorvoidMultiplyConnection__Multiply(@ptrCast(self)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaObject__Connection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject-superdata.html
pub const qmetaobject__superdata = struct {

    /// New constructs a new QMetaObject::SuperData object.
    pub fn New() QtC.QMetaObject__SuperData {
        return qtc.QMetaObject__SuperData_new();
    }


    /// New2 constructs a new QMetaObject::SuperData object.
    pub fn New2(mo: ?*anyopaque) QtC.QMetaObject__SuperData {
        return qtc.QMetaObject__SuperData_new2(@ptrCast(mo));
    }


    /// New3 constructs a new QMetaObject::SuperData object.
    pub fn New3(param1: ?*anyopaque) QtC.QMetaObject__SuperData {
        return qtc.QMetaObject__SuperData_new3(@ptrCast(param1));
    }


    pub fn Direct(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QMetaObject__SuperData_Direct(@ptrCast(self));
    }

    pub fn SetDirect(self: ?*anyopaque, direct: ?*anyopaque) void {
        qtc.QMetaObject__SuperData_SetDirect(@ptrCast(self), @ptrCast(direct));
    }

    pub fn OperatorMinusGreater(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QMetaObject__SuperData_OperatorMinusGreater(@ptrCast(self));
    }

    pub fn OperatorconstQMetaObjectMultiply(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QMetaObject__SuperData_OperatorconstQMetaObjectMultiply(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMetaObject__SuperData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaObject__SuperData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject-data.html
pub const qmetaobject__data = struct {

    /// New constructs a new QMetaObject::Data object.
    pub fn New() QtC.QMetaObject__Data {
        return qtc.QMetaObject__Data_new();
    }


    /// New2 constructs a new QMetaObject::Data object.
    pub fn New2(param1: ?*anyopaque) QtC.QMetaObject__Data {
        return qtc.QMetaObject__Data_new2(@ptrCast(param1));
    }


    pub fn Superdata(self: ?*anyopaque, ) QtC.QMetaObject__SuperData {
        return qtc.QMetaObject__Data_Superdata(@ptrCast(self));
    }

    pub fn SetSuperdata(self: ?*anyopaque, superdata: QtC.QMetaObject__SuperData) void {
        qtc.QMetaObject__Data_SetSuperdata(@ptrCast(self), @ptrCast(superdata));
    }

    pub fn Stringdata(self: ?*anyopaque, ) u32 {
        return @ptrCast(qtc.QMetaObject__Data_Stringdata(@ptrCast(self)));
    }

    pub fn SetStringdata(self: ?*anyopaque, stringdata: *const u32) void {
        qtc.QMetaObject__Data_SetStringdata(@ptrCast(self), @ptrCast(stringdata));
    }

    pub fn Data(self: ?*anyopaque, ) u32 {
        return @ptrCast(qtc.QMetaObject__Data_Data(@ptrCast(self)));
    }

    pub fn SetData(self: ?*anyopaque, data: *const u32) void {
        qtc.QMetaObject__Data_SetData(@ptrCast(self), @ptrCast(data));
    }

    pub fn RelatedMetaObjects(self: ?*anyopaque, ) QtC.QMetaObject__SuperData {
        return qtc.QMetaObject__Data_RelatedMetaObjects(@ptrCast(self));
    }

    pub fn SetRelatedMetaObjects(self: ?*anyopaque, relatedMetaObjects: ?*anyopaque) void {
        qtc.QMetaObject__Data_SetRelatedMetaObjects(@ptrCast(self), @ptrCast(relatedMetaObjects));
    }

    pub fn MetaTypes(self: ?*anyopaque, ) QtC.QtPrivate__QMetaTypeInterface {
        return qtc.QMetaObject__Data_MetaTypes(@ptrCast(self));
    }

    pub fn SetMetaTypes(self: ?*anyopaque, metaTypes: ?*anyopaque) void {
        qtc.QMetaObject__Data_SetMetaTypes(@ptrCast(self), @ptrCast(metaTypes));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMetaObject__Data_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaObject__Data_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/objectdefs.html#types
pub const enums = struct {
    pub const Call = enum {
        pub const InvokeMetaMethod: i32 = 0;
        pub const ReadProperty: i32 = 1;
        pub const WriteProperty: i32 = 2;
        pub const ResetProperty: i32 = 3;
        pub const CreateInstance: i32 = 4;
        pub const IndexOfMethod: i32 = 5;
        pub const RegisterPropertyMetaType: i32 = 6;
        pub const RegisterMethodArgumentMetaType: i32 = 7;
        pub const BindableProperty: i32 = 8;
        pub const CustomCall: i32 = 9;
        pub const ConstructInPlace: i32 = 10;
    };

};
