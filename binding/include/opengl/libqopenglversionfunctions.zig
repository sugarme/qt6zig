const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglversionstatus.html
pub const qopenglversionstatus = struct {

    /// New constructs a new QOpenGLVersionStatus object.
    pub fn New(other: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new(@ptrCast(other));
    }


    /// New2 constructs a new QOpenGLVersionStatus object.
    pub fn New2(other: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new2(@ptrCast(other));
    }


    /// New3 constructs a new QOpenGLVersionStatus object.
    pub fn New3() QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new3();
    }


    /// New4 constructs a new QOpenGLVersionStatus object.
    pub fn New4(majorVersion: i32, minorVersion: i32, functionStatus: i32) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new4(majorVersion, minorVersion, @intCast(functionStatus));
    }


    /// New5 constructs a new QOpenGLVersionStatus object.
    pub fn New5(param1: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new5(@ptrCast(param1));
    }


    pub fn Version(self: ?*anyopaque, ) QPair<int, int> {
        return qtc.QOpenGLVersionStatus_Version(@ptrCast(self));
    }

    pub fn SetVersion(self: ?*anyopaque, version: QPair<int, int>) void {
        qtc.QOpenGLVersionStatus_SetVersion(@ptrCast(self), version);
    }

    pub fn Status(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLVersionStatus_Status(@ptrCast(self));
    }

    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.QOpenGLVersionStatus_SetStatus(@ptrCast(self), @intCast(status));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QOpenGLVersionStatus_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionStatus_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html
pub const qopenglversionfunctionsbackend = struct {

    /// New constructs a new QOpenGLVersionFunctionsBackend object.
    pub fn New(ctx: ?*anyopaque) QtC.QOpenGLVersionFunctionsBackend {
        return qtc.QOpenGLVersionFunctionsBackend_new(@ptrCast(ctx));
    }


    /// New2 constructs a new QOpenGLVersionFunctionsBackend object.
    pub fn New2(param1: ?*anyopaque) QtC.QOpenGLVersionFunctionsBackend {
        return qtc.QOpenGLVersionFunctionsBackend_new2(@ptrCast(param1));
    }


    pub fn Context(self: ?*anyopaque, ) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html
pub const qopenglversionfunctionsstorage = struct {

    /// New constructs a new QOpenGLVersionFunctionsStorage object.
    pub fn New(other: ?*anyopaque) QtC.QOpenGLVersionFunctionsStorage {
        return qtc.QOpenGLVersionFunctionsStorage_new(@ptrCast(other));
    }


    /// New2 constructs a new QOpenGLVersionFunctionsStorage object.
    pub fn New2() QtC.QOpenGLVersionFunctionsStorage {
        return qtc.QOpenGLVersionFunctionsStorage_new2();
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsStorage_CopyAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Backends(self: ?*anyopaque, ) QtC.QOpenGLVersionFunctionsBackend {
        return qtc.QOpenGLVersionFunctionsStorage_Backends(@ptrCast(self));
    }

    pub fn SetBackends(self: ?*anyopaque, backends: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsStorage_SetBackends(@ptrCast(self), @ptrCast(backends));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsStorage_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractopenglfunctions.html
pub const qabstractopenglfunctions = struct {

    pub fn InitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QAbstractOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractOpenGLFunctions_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QAbstractOpenGLFunctions_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    pub fn IsInitialized(self: ?*anyopaque, ) bool {
        return qtc.QAbstractOpenGLFunctions_IsInitialized(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractOpenGLFunctions_OnIsInitialized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsInitialized(self: ?*anyopaque, ) bool {
        return qtc.QAbstractOpenGLFunctions_QBaseIsInitialized(@ptrCast(self));
    }

    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QAbstractOpenGLFunctions_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Allows for overriding the related default method
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractOpenGLFunctions_OnSetOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QAbstractOpenGLFunctions_QBaseSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    pub fn OwningContext(self: ?*anyopaque, ) QtC.QOpenGLContext {
        return qtc.QAbstractOpenGLFunctions_OwningContext(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QOpenGLContext) void {
        qtc.QAbstractOpenGLFunctions_OnOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOwningContext(self: ?*anyopaque, ) QtC.QOpenGLContext {
        return qtc.QAbstractOpenGLFunctions_QBaseOwningContext(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractOpenGLFunctions_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_0_corebackend.html
pub const qopenglfunctions_1_0_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_1_0_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_0_CoreBackend {
        return qtc.QOpenGLFunctions_1_0_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_0_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_1_corebackend.html
pub const qopenglfunctions_1_1_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_1_1_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_1_CoreBackend {
        return qtc.QOpenGLFunctions_1_1_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_1_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_2_corebackend.html
pub const qopenglfunctions_1_2_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_1_2_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_2_CoreBackend {
        return qtc.QOpenGLFunctions_1_2_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_2_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_3_corebackend.html
pub const qopenglfunctions_1_3_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_1_3_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_3_CoreBackend {
        return qtc.QOpenGLFunctions_1_3_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_3_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_3_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_4_corebackend.html
pub const qopenglfunctions_1_4_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_1_4_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_4_CoreBackend {
        return qtc.QOpenGLFunctions_1_4_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_4_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_4_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_5_corebackend.html
pub const qopenglfunctions_1_5_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_1_5_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_5_CoreBackend {
        return qtc.QOpenGLFunctions_1_5_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_5_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_2_0_corebackend.html
pub const qopenglfunctions_2_0_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_2_0_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_2_0_CoreBackend {
        return qtc.QOpenGLFunctions_2_0_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_2_0_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_2_1_corebackend.html
pub const qopenglfunctions_2_1_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_2_1_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_2_1_CoreBackend {
        return qtc.QOpenGLFunctions_2_1_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_2_1_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_3_0_corebackend.html
pub const qopenglfunctions_3_0_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_3_0_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_3_0_CoreBackend {
        return qtc.QOpenGLFunctions_3_0_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_3_0_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_3_1_corebackend.html
pub const qopenglfunctions_3_1_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_3_1_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_3_1_CoreBackend {
        return qtc.QOpenGLFunctions_3_1_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_3_1_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_3_2_corebackend.html
pub const qopenglfunctions_3_2_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_3_2_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_3_2_CoreBackend {
        return qtc.QOpenGLFunctions_3_2_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_3_2_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_3_3_corebackend.html
pub const qopenglfunctions_3_3_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_3_3_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_3_3_CoreBackend {
        return qtc.QOpenGLFunctions_3_3_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_3_3_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_3_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_4_0_corebackend.html
pub const qopenglfunctions_4_0_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_4_0_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_4_0_CoreBackend {
        return qtc.QOpenGLFunctions_4_0_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_4_0_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_4_1_corebackend.html
pub const qopenglfunctions_4_1_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_4_1_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_4_1_CoreBackend {
        return qtc.QOpenGLFunctions_4_1_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_4_1_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_4_2_corebackend.html
pub const qopenglfunctions_4_2_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_4_2_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_4_2_CoreBackend {
        return qtc.QOpenGLFunctions_4_2_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_4_2_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_4_3_corebackend.html
pub const qopenglfunctions_4_3_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_4_3_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_4_3_CoreBackend {
        return qtc.QOpenGLFunctions_4_3_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_4_3_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_4_4_corebackend.html
pub const qopenglfunctions_4_4_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_4_4_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_4_4_CoreBackend {
        return qtc.QOpenGLFunctions_4_4_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_4_4_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_4_5_corebackend.html
pub const qopenglfunctions_4_5_corebackend = struct {

    /// New constructs a new QOpenGLFunctions_4_5_CoreBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_4_5_CoreBackend {
        return qtc.QOpenGLFunctions_4_5_CoreBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_4_5_CoreBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_5_CoreBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_0_deprecatedbackend.html
pub const qopenglfunctions_1_0_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_1_0_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_0_DeprecatedBackend {
        return qtc.QOpenGLFunctions_1_0_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_0_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_1_deprecatedbackend.html
pub const qopenglfunctions_1_1_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_1_1_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_1_DeprecatedBackend {
        return qtc.QOpenGLFunctions_1_1_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_1_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_2_deprecatedbackend.html
pub const qopenglfunctions_1_2_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_1_2_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_2_DeprecatedBackend {
        return qtc.QOpenGLFunctions_1_2_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_2_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_3_deprecatedbackend.html
pub const qopenglfunctions_1_3_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_1_3_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_3_DeprecatedBackend {
        return qtc.QOpenGLFunctions_1_3_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_3_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_3_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_1_4_deprecatedbackend.html
pub const qopenglfunctions_1_4_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_1_4_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_1_4_DeprecatedBackend {
        return qtc.QOpenGLFunctions_1_4_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_1_4_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_4_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_2_0_deprecatedbackend.html
pub const qopenglfunctions_2_0_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_2_0_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_2_0_DeprecatedBackend {
        return qtc.QOpenGLFunctions_2_0_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_2_0_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_0_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_3_0_deprecatedbackend.html
pub const qopenglfunctions_3_0_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_3_0_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_3_0_DeprecatedBackend {
        return qtc.QOpenGLFunctions_3_0_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_3_0_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_3_3_deprecatedbackend.html
pub const qopenglfunctions_3_3_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_3_3_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_3_3_DeprecatedBackend {
        return qtc.QOpenGLFunctions_3_3_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_3_3_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_3_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions_4_5_deprecatedbackend.html
pub const qopenglfunctions_4_5_deprecatedbackend = struct {

    /// New constructs a new QOpenGLFunctions_4_5_DeprecatedBackend object.
    pub fn New(c: ?*anyopaque) QtC.QOpenGLFunctions_4_5_DeprecatedBackend {
        return qtc.QOpenGLFunctions_4_5_DeprecatedBackend_new(@ptrCast(c));
    }


    pub fn VersionStatus() i32 {
        return qtc.QOpenGLFunctions_4_5_DeprecatedBackend_VersionStatus();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_5_DeprecatedBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/openglversionfunctions.html#types
pub const enums = struct {
    pub const OpenGLStatus = enum {
        pub const CoreStatus: i32 = 0;
        pub const DeprecatedStatus: i32 = 1;
        pub const InvalidStatus: i32 = 2;
    };

    pub const Version = enum {
        pub const OpenGL_1_0_Core: i32 = 0;
        pub const OpenGL_1_1_Core: i32 = 1;
        pub const OpenGL_1_2_Core: i32 = 2;
        pub const OpenGL_1_3_Core: i32 = 3;
        pub const OpenGL_1_4_Core: i32 = 4;
        pub const OpenGL_1_5_Core: i32 = 5;
        pub const OpenGL_2_0_Core: i32 = 6;
        pub const OpenGL_2_1_Core: i32 = 7;
        pub const OpenGL_3_0_Core: i32 = 8;
        pub const OpenGL_3_1_Core: i32 = 9;
        pub const OpenGL_3_2_Core: i32 = 10;
        pub const OpenGL_3_3_Core: i32 = 11;
        pub const OpenGL_4_0_Core: i32 = 12;
        pub const OpenGL_4_1_Core: i32 = 13;
        pub const OpenGL_4_2_Core: i32 = 14;
        pub const OpenGL_4_3_Core: i32 = 15;
        pub const OpenGL_4_4_Core: i32 = 16;
        pub const OpenGL_4_5_Core: i32 = 17;
        pub const OpenGL_1_0_Deprecated: i32 = 18;
        pub const OpenGL_1_1_Deprecated: i32 = 19;
        pub const OpenGL_1_2_Deprecated: i32 = 20;
        pub const OpenGL_1_3_Deprecated: i32 = 21;
        pub const OpenGL_1_4_Deprecated: i32 = 22;
        pub const OpenGL_2_0_Deprecated: i32 = 23;
        pub const OpenGL_3_0_Deprecated: i32 = 24;
        pub const OpenGL_3_3_Deprecated: i32 = 25;
        pub const OpenGL_4_5_Deprecated: i32 = 26;
        pub const OpenGLVersionBackendCount: i32 = 27;
    };

};
