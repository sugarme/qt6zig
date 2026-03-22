const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html
pub const qopenglversionfunctionsfactory = struct {

    /// New constructs a new QOpenGLVersionFunctionsFactory object.
    pub fn New(other: ?*anyopaque) QtC.QOpenGLVersionFunctionsFactory {
        return qtc.QOpenGLVersionFunctionsFactory_new(@ptrCast(other));
    }


    /// New2 constructs a new QOpenGLVersionFunctionsFactory object.
    pub fn New2(other: ?*anyopaque) QtC.QOpenGLVersionFunctionsFactory {
        return qtc.QOpenGLVersionFunctionsFactory_new2(@ptrCast(other));
    }


    /// New3 constructs a new QOpenGLVersionFunctionsFactory object.
    pub fn New3() QtC.QOpenGLVersionFunctionsFactory {
        return qtc.QOpenGLVersionFunctionsFactory_new3();
    }


    /// New4 constructs a new QOpenGLVersionFunctionsFactory object.
    pub fn New4(param1: ?*anyopaque) QtC.QOpenGLVersionFunctionsFactory {
        return qtc.QOpenGLVersionFunctionsFactory_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsFactory_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsFactory_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Get() QtC.QAbstractOpenGLFunctions {
        return qtc.QOpenGLVersionFunctionsFactory_Get();
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsFactory_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Get1(versionProfile: ?*anyopaque) QtC.QAbstractOpenGLFunctions {
        return qtc.QOpenGLVersionFunctionsFactory_Get1(@ptrCast(versionProfile));
    }

    pub fn Get2(versionProfile: ?*anyopaque, context: ?*anyopaque) QtC.QAbstractOpenGLFunctions {
        return qtc.QOpenGLVersionFunctionsFactory_Get2(@ptrCast(versionProfile), @ptrCast(context));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsFactory_Delete(@ptrCast(self));
    }
};
