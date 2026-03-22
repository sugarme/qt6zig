const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgenericpluginfactory.html
pub const qgenericpluginfactory = struct {

    /// New constructs a new QGenericPluginFactory object.
    pub fn New(other: ?*anyopaque) QtC.QGenericPluginFactory {
        return qtc.QGenericPluginFactory_new(@ptrCast(other));
    }


    /// New2 constructs a new QGenericPluginFactory object.
    pub fn New2(other: ?*anyopaque) QtC.QGenericPluginFactory {
        return qtc.QGenericPluginFactory_new2(@ptrCast(other));
    }


    /// New3 constructs a new QGenericPluginFactory object.
    pub fn New3() QtC.QGenericPluginFactory {
        return qtc.QGenericPluginFactory_new3();
    }


    /// New4 constructs a new QGenericPluginFactory object.
    pub fn New4(param1: ?*anyopaque) QtC.QGenericPluginFactory {
        return qtc.QGenericPluginFactory_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericPluginFactory_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericPluginFactory_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Keys() []const u8 {
        return qtc.QGenericPluginFactory_Keys();
    }

    pub fn Create(param1: []const u8, param2: []const u8) QtC.QObject {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
const param2_str = qtc.libqt_string{
    .len = param2.len,
    .data = param2.ptr,
};
return qtc.QGenericPluginFactory_Create(param1_str, param2_str);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGenericPluginFactory_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGenericPluginFactory_Delete(@ptrCast(self));
    }
};
