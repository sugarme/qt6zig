const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnativeinterface-qwindowsscreen.html
pub const qnativeinterface__qwindowsscreen = struct {

    /// New constructs a new QNativeInterface::QWindowsScreen object.
    pub fn New() QtC.QNativeInterface__QWindowsScreen {
        return qtc.QNativeInterface__QWindowsScreen_new();
    }


    pub fn Handle(self: ?*anyopaque, ) struct HMONITOR__ {
        return @ptrCast(qtc.QNativeInterface__QWindowsScreen_Handle(@ptrCast(self)));
    }

    pub fn OnHandle(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNativeInterface__QWindowsScreen_Connect_Handle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnHandle(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) struct HMONITOR__) void {
        qtc.QNativeInterface__QWindowsScreen_OnHandle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHandle(self: ?*anyopaque, ) struct HMONITOR__ {
        return @ptrCast(qtc.QNativeInterface__QWindowsScreen_QBaseHandle(@ptrCast(self)));
    }
};
