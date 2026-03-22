const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qexception.html
pub const qexception = struct {

    /// New constructs a new QException object.
    pub fn New() QtC.QException {
        return qtc.QException_new();
    }


    /// New2 constructs a new QException object.
    pub fn New2(param1: ?*anyopaque) QtC.QException {
        return qtc.QException_new2(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QException_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Raise(self: ?*anyopaque, ) void {
        qtc.QException_Raise(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRaise(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QException_OnRaise(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRaise(self: ?*anyopaque, ) void {
        qtc.QException_QBaseRaise(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QException_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qunhandledexception.html
pub const qunhandledexception = struct {

    /// New constructs a new QUnhandledException object.
    pub fn New() QtC.QUnhandledException {
        return qtc.QUnhandledException_new();
    }


    /// New2 constructs a new QUnhandledException object.
    pub fn New2(other: ?*anyopaque) QtC.QUnhandledException {
        return qtc.QUnhandledException_new2(@ptrCast(other));
    }


    /// New3 constructs a new QUnhandledException object.
    pub fn New3(exception: std::exception_ptr) QtC.QUnhandledException {
        return qtc.QUnhandledException_new3(exception);
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUnhandledException_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUnhandledException_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Raise(self: ?*anyopaque, ) void {
        qtc.QUnhandledException_Raise(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRaise(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QUnhandledException_OnRaise(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRaise(self: ?*anyopaque, ) void {
        qtc.QUnhandledException_QBaseRaise(@ptrCast(self));
    }

    pub fn Exception(self: ?*anyopaque, ) std::exception_ptr {
        return qtc.QUnhandledException_Exception(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUnhandledException_Delete(@ptrCast(self));
    }
};
