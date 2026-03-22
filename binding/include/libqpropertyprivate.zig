const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpropertybindingprivateptr.html
pub const qpropertybindingprivateptr = struct {

    /// New constructs a new QPropertyBindingPrivatePtr object.
    pub fn New() QtC.QPropertyBindingPrivatePtr {
        return qtc.QPropertyBindingPrivatePtr_new();
    }


    pub fn DestroyAndFreeMemory(self: ?*anyopaque, ) void {
        qtc.QPropertyBindingPrivatePtr_DestroyAndFreeMemory(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QPropertyBindingPrivatePtr_Reset(@ptrCast(self));
    }

    pub fn Operatorbool(self: ?*anyopaque, ) bool {
        return qtc.QPropertyBindingPrivatePtr_Operatorbool(@ptrCast(self));
    }

    pub fn OperatorNot(self: ?*anyopaque, ) bool {
        return qtc.QPropertyBindingPrivatePtr_OperatorNot(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyBindingPrivatePtr_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/quntypedpropertydata.html
pub const quntypedpropertydata = struct {

    /// New constructs a new QUntypedPropertyData object.
    pub fn New(other: ?*anyopaque) QtC.QUntypedPropertyData {
        return qtc.QUntypedPropertyData_new(@ptrCast(other));
    }


    /// New2 constructs a new QUntypedPropertyData object.
    pub fn New2(other: ?*anyopaque) QtC.QUntypedPropertyData {
        return qtc.QUntypedPropertyData_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyData_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyData_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedPropertyData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertyproxybindingdata.html
pub const qpropertyproxybindingdata = struct {

    pub fn DPtr(self: ?*anyopaque, ) usize {
        return qtc.QPropertyProxyBindingData_DPtr(@ptrCast(self));
    }

    pub fn SetDPtr(self: ?*anyopaque, d_ptr: usize) void {
        qtc.QPropertyProxyBindingData_SetDPtr(@ptrCast(self), d_ptr);
    }

    pub fn PropertyData(self: ?*anyopaque, ) QtC.QUntypedPropertyData {
        return qtc.QPropertyProxyBindingData_PropertyData(@ptrCast(self));
    }

    pub fn SetPropertyData(self: ?*anyopaque, propertyData: ?*anyopaque) void {
        qtc.QPropertyProxyBindingData_SetPropertyData(@ptrCast(self), @ptrCast(propertyData));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyProxyBindingData_Delete(@ptrCast(self));
    }
};
