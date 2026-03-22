const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfactoryinterface.html
pub const qfactoryinterface = struct {

    /// New constructs a new QFactoryInterface object.
    pub fn New() QtC.QFactoryInterface {
        return qtc.QFactoryInterface_new();
    }


    /// New2 constructs a new QFactoryInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QFactoryInterface {
        return qtc.QFactoryInterface_new2(@ptrCast(param1));
    }


    pub fn Keys(self: ?*anyopaque, ) []const u8 {
        return qtc.QFactoryInterface_Keys(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnKeys(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QFactoryInterface_OnKeys(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeys(self: ?*anyopaque, ) []const u8 {
        return qtc.QFactoryInterface_QBaseKeys(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFactoryInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFactoryInterface_Delete(@ptrCast(self));
    }
};
