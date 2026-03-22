const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html
pub const qscopedpropertyupdategroup = struct {

    /// New constructs a new QScopedPropertyUpdateGroup object.
    pub fn New() QtC.QScopedPropertyUpdateGroup {
        return qtc.QScopedPropertyUpdateGroup_new();
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScopedPropertyUpdateGroup_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html
pub const qpropertybindingsourcelocation = struct {

    /// New constructs a new QPropertyBindingSourceLocation object.
    pub fn New(other: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new(@ptrCast(other));
    }


    /// New2 constructs a new QPropertyBindingSourceLocation object.
    pub fn New2(other: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPropertyBindingSourceLocation object.
    pub fn New3() QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new3();
    }


    /// New4 constructs a new QPropertyBindingSourceLocation object.
    pub fn New4(param1: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn FileName(self: ?*anyopaque, ) []const u8 {
        const fileName_ret = qtc.QPropertyBindingSourceLocation_FileName(@ptrCast(self));
return  std.mem.span(fileName_ret);
    }

    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        qtc.QPropertyBindingSourceLocation_SetFileName(@ptrCast(self), @ptrCast(fileName));
    }

    pub fn FunctionName(self: ?*anyopaque, ) []const u8 {
        const functionName_ret = qtc.QPropertyBindingSourceLocation_FunctionName(@ptrCast(self));
return  std.mem.span(functionName_ret);
    }

    pub fn SetFunctionName(self: ?*anyopaque, functionName: []const u8) void {
        qtc.QPropertyBindingSourceLocation_SetFunctionName(@ptrCast(self), @ptrCast(functionName));
    }

    pub fn Line(self: ?*anyopaque, ) u32 {
        return qtc.QPropertyBindingSourceLocation_Line(@ptrCast(self));
    }

    pub fn SetLine(self: ?*anyopaque, line: u32) void {
        qtc.QPropertyBindingSourceLocation_SetLine(@ptrCast(self), line);
    }

    pub fn Column(self: ?*anyopaque, ) u32 {
        return qtc.QPropertyBindingSourceLocation_Column(@ptrCast(self));
    }

    pub fn SetColumn(self: ?*anyopaque, column: u32) void {
        qtc.QPropertyBindingSourceLocation_SetColumn(@ptrCast(self), column);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertybindingerror.html
pub const qpropertybindingerror = struct {

    /// New constructs a new QPropertyBindingError object.
    pub fn New() QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new();
    }


    /// New2 constructs a new QPropertyBindingError object.
    pub fn New2(typeVal: i32) QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new2(@intCast(typeVal));
    }


    /// New3 constructs a new QPropertyBindingError object.
    pub fn New3(other: ?*anyopaque) QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new3(@ptrCast(other));
    }


    /// New4 constructs a new QPropertyBindingError object.
    pub fn New4(typeVal: i32, description: []const u8) QtC.QPropertyBindingError {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
return qtc.QPropertyBindingError_new4(@intCast(typeVal), description_str);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingError_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn HasError(self: ?*anyopaque, ) bool {
        return qtc.QPropertyBindingError_HasError(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QPropertyBindingError_Type(@ptrCast(self));
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPropertyBindingError_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertybindingerror.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyBindingError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/quntypedpropertybinding.html
pub const quntypedpropertybinding = struct {

    /// New constructs a new QUntypedPropertyBinding object.
    pub fn New() QtC.QUntypedPropertyBinding {
        return qtc.QUntypedPropertyBinding_new();
    }


    /// New2 constructs a new QUntypedPropertyBinding object.
    pub fn New2(metaType: QtC.QMetaType, vtable: ?*anyopaque, function: ?*anyopaque, location: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedPropertyBinding_new2(@ptrCast(metaType), @ptrCast(vtable), @ptrCast(function), @ptrCast(location));
    }


    /// New3 constructs a new QUntypedPropertyBinding object.
    pub fn New3(other: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedPropertyBinding_new3(@ptrCast(other));
    }


    /// New4 constructs a new QUntypedPropertyBinding object.
    pub fn New4(priv: *QPropertyBindingPrivate) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedPropertyBinding_new4(@ptrCast(priv));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyBinding_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QUntypedPropertyBinding_IsNull(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) QtC.QPropertyBindingError {
        return qtc.QUntypedPropertyBinding_Error(@ptrCast(self));
    }

    pub fn ValueMetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QUntypedPropertyBinding_ValueMetaType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedPropertyBinding_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertyobserverbase.html
pub const qpropertyobserverbase = struct {

    /// New constructs a new QPropertyObserverBase object.
    pub fn New(other: ?*anyopaque) QtC.QPropertyObserverBase {
        return qtc.QPropertyObserverBase_new(@ptrCast(other));
    }


    /// New2 constructs a new QPropertyObserverBase object.
    pub fn New2(other: ?*anyopaque) QtC.QPropertyObserverBase {
        return qtc.QPropertyObserverBase_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPropertyObserverBase object.
    pub fn New3() QtC.QPropertyObserverBase {
        return qtc.QPropertyObserverBase_new3();
    }


    /// New4 constructs a new QPropertyObserverBase object.
    pub fn New4(param1: ?*anyopaque) QtC.QPropertyObserverBase {
        return qtc.QPropertyObserverBase_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyObserverBase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyObserverBase_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyObserverBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertyobserver.html
pub const qpropertyobserver = struct {

    /// New constructs a new QPropertyObserver object.
    pub fn New() QtC.QPropertyObserver {
        return qtc.QPropertyObserver_new();
    }


    pub fn SetSource(self: ?*anyopaque, property: ?*anyopaque) void {
        qtc.QPropertyObserver_SetSource(@ptrCast(self), @ptrCast(property));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyObserver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertynotifier.html
pub const qpropertynotifier = struct {

    /// New constructs a new QPropertyNotifier object.
    pub fn New() QtC.QPropertyNotifier {
        return qtc.QPropertyNotifier_new();
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyNotifier_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/quntypedbindable.html
pub const quntypedbindable = struct {

    /// New constructs a new QUntypedBindable object.
    pub fn New(other: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new(@ptrCast(other));
    }


    /// New2 constructs a new QUntypedBindable object.
    pub fn New2(other: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new2(@ptrCast(other));
    }


    /// New3 constructs a new QUntypedBindable object.
    pub fn New3() QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new3();
    }


    /// New4 constructs a new QUntypedBindable object.
    pub fn New4(param1: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedBindable_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedBindable_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QUntypedBindable_IsValid(@ptrCast(self));
    }

    pub fn IsBindable(self: ?*anyopaque, ) bool {
        return qtc.QUntypedBindable_IsBindable(@ptrCast(self));
    }

    pub fn IsReadOnly(self: ?*anyopaque, ) bool {
        return qtc.QUntypedBindable_IsReadOnly(@ptrCast(self));
    }

    pub fn MakeBinding(self: ?*anyopaque, ) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_MakeBinding(@ptrCast(self));
    }

    pub fn TakeBinding(self: ?*anyopaque, ) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_TakeBinding(@ptrCast(self));
    }

    pub fn Observe(self: ?*anyopaque, observer: ?*anyopaque) void {
        qtc.QUntypedBindable_Observe(@ptrCast(self), @ptrCast(observer));
    }

    pub fn Binding(self: ?*anyopaque, ) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_Binding(@ptrCast(self));
    }

    pub fn SetBinding(self: ?*anyopaque, binding: ?*anyopaque) bool {
        return qtc.QUntypedBindable_SetBinding(@ptrCast(self), @ptrCast(binding));
    }

    pub fn HasBinding(self: ?*anyopaque, ) bool {
        return qtc.QUntypedBindable_HasBinding(@ptrCast(self));
    }

    pub fn MetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QUntypedBindable_MetaType(@ptrCast(self));
    }

    pub fn MakeBinding1(self: ?*anyopaque, location: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_MakeBinding1(@ptrCast(self), @ptrCast(location));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedBindable_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/property.html#types
pub const enums = struct {
    pub const Reason = enum {
        pub const InvalidInterface: i32 = 0;
        pub const NonBindableInterface: i32 = 1;
        pub const ReadOnlyInterface: i32 = 2;
    };

    pub const Type = enum {
        pub const NoError: i32 = 0;
        pub const BindingLoop: i32 = 1;
        pub const EvaluationError: i32 = 2;
        pub const UnknownError: i32 = 3;
    };

    pub const ObserverTag = enum {
        pub const ObserverNotifiesBinding: i32 = 0;
        pub const ObserverNotifiesChangeHandler: i32 = 1;
        pub const ObserverIsPlaceholder: i32 = 2;
    };

};
