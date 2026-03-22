const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrunnable.html
pub const qrunnable = struct {

    /// New constructs a new QRunnable object.
    pub fn New() QtC.QRunnable {
        return qtc.QRunnable_new();
    }


    pub fn Run(self: ?*anyopaque, ) void {
        qtc.QRunnable_Run(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRun(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QRunnable_OnRun(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRun(self: ?*anyopaque, ) void {
        qtc.QRunnable_QBaseRun(@ptrCast(self));
    }

    pub fn AutoDelete(self: ?*anyopaque, ) bool {
        return qtc.QRunnable_AutoDelete(@ptrCast(self));
    }

    pub fn SetAutoDelete(self: ?*anyopaque, autoDelete: bool) void {
        qtc.QRunnable_SetAutoDelete(@ptrCast(self), autoDelete);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRunnable_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgenericrunnable.html
pub const qgenericrunnable = struct {

    pub fn Run(self: ?*anyopaque, ) void {
        qtc.QGenericRunnable_Run(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRun(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGenericRunnable_OnRun(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRun(self: ?*anyopaque, ) void {
        qtc.QGenericRunnable_QBaseRun(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGenericRunnable_Delete(@ptrCast(self));
    }
};
