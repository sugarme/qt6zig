const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfileiconprovider.html
pub const qfileiconprovider = struct {

    /// New constructs a new QFileIconProvider object.
    pub fn New() QtC.QFileIconProvider {
        return qtc.QFileIconProvider_new();
    }


    pub fn Icon(self: ?*anyopaque, typeVal: i32) QtC.QIcon {
        return qtc.QFileIconProvider_Icon(@ptrCast(self), @intCast(typeVal));
    }

    /// Allows for overriding the related default method
    pub fn OnIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QIcon) void {
        qtc.QFileIconProvider_OnIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIcon(self: ?*anyopaque, typeVal: i32) QtC.QIcon {
        return qtc.QFileIconProvider_QBaseIcon(@ptrCast(self), @intCast(typeVal));
    }

    pub fn Icon2(self: ?*anyopaque, info: ?*anyopaque) QtC.QIcon {
        return qtc.QFileIconProvider_Icon2(@ptrCast(self), @ptrCast(info));
    }

    /// Allows for overriding the related default method
    pub fn OnIcon2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QFileIconProvider_OnIcon2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIcon2(self: ?*anyopaque, info: ?*anyopaque) QtC.QIcon {
        return qtc.QFileIconProvider_QBaseIcon2(@ptrCast(self), @ptrCast(info));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileIconProvider_Delete(@ptrCast(self));
    }
};
