const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstylefactory.html
pub const qstylefactory = struct {

    /// New constructs a new QStyleFactory object.
    pub fn New(other: ?*anyopaque) QtC.QStyleFactory {
        return qtc.QStyleFactory_new(@ptrCast(other));
    }


    /// New2 constructs a new QStyleFactory object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleFactory {
        return qtc.QStyleFactory_new2(@ptrCast(other));
    }


    /// New3 constructs a new QStyleFactory object.
    pub fn New3() QtC.QStyleFactory {
        return qtc.QStyleFactory_new3();
    }


    /// New4 constructs a new QStyleFactory object.
    pub fn New4(param1: ?*anyopaque) QtC.QStyleFactory {
        return qtc.QStyleFactory_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleFactory_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleFactory_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Keys() []const u8 {
        return qtc.QStyleFactory_Keys();
    }

    pub fn Create(param1: []const u8) QtC.QStyle {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QStyleFactory_Create(param1_str);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleFactory_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleFactory_Delete(@ptrCast(self));
    }
};
