const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnativeinterface-qwglcontext.html
pub const qnativeinterface__qwglcontext = struct {

    /// New constructs a new QNativeInterface::QWGLContext object.
    pub fn New() QtC.QNativeInterface__QWGLContext {
        return qtc.QNativeInterface__QWGLContext_new();
    }


    pub fn OpenGLModuleHandle() struct HINSTANCE__ {
        return @ptrCast(qtc.QNativeInterface__QWGLContext_OpenGLModuleHandle());
    }

    pub fn FromNative(context: *struct HGLRC__, window: *struct HWND__) QtC.QOpenGLContext {
        return qtc.QNativeInterface__QWGLContext_FromNative(@ptrCast(context), @ptrCast(window));
    }

    pub fn NativeContext(self: ?*anyopaque, ) struct HGLRC__ {
        return @ptrCast(qtc.QNativeInterface__QWGLContext_NativeContext(@ptrCast(self)));
    }

    pub fn OnNativeContext(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNativeInterface__QWGLContext_Connect_NativeContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnNativeContext(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) struct HGLRC__) void {
        qtc.QNativeInterface__QWGLContext_OnNativeContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNativeContext(self: ?*anyopaque, ) struct HGLRC__ {
        return @ptrCast(qtc.QNativeInterface__QWGLContext_QBaseNativeContext(@ptrCast(self)));
    }

    pub fn FromNative3(context: *struct HGLRC__, window: *struct HWND__, shareContext: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QNativeInterface__QWGLContext_FromNative3(@ptrCast(context), @ptrCast(window), @ptrCast(shareContext));
    }
};
