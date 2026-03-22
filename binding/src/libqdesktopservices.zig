const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdesktopservices.html
pub const qdesktopservices = struct {

    /// New constructs a new QDesktopServices object.
    pub fn New(other: ?*anyopaque) QtC.QDesktopServices {
        return qtc.QDesktopServices_new(@ptrCast(other));
    }


    /// New2 constructs a new QDesktopServices object.
    pub fn New2(other: ?*anyopaque) QtC.QDesktopServices {
        return qtc.QDesktopServices_new2(@ptrCast(other));
    }


    /// New3 constructs a new QDesktopServices object.
    pub fn New3() QtC.QDesktopServices {
        return qtc.QDesktopServices_new3();
    }


    /// New4 constructs a new QDesktopServices object.
    pub fn New4(param1: ?*anyopaque) QtC.QDesktopServices {
        return qtc.QDesktopServices_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDesktopServices_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDesktopServices_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OpenUrl(url: ?*anyopaque) bool {
        return qtc.QDesktopServices_OpenUrl(@ptrCast(url));
    }

    pub fn SetUrlHandler(scheme: []const u8, receiver: ?*anyopaque, method: []const u8) void {
        const scheme_str = qtc.libqt_string{
    .len = scheme.len,
    .data = scheme.ptr,
};
qtc.QDesktopServices_SetUrlHandler(scheme_str, @ptrCast(receiver), @ptrCast(method));
    }

    pub fn UnsetUrlHandler(scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
    .len = scheme.len,
    .data = scheme.ptr,
};
qtc.QDesktopServices_UnsetUrlHandler(scheme_str);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDesktopServices_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesktopServices_Delete(@ptrCast(self));
    }
};
