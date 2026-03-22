const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsurface.html
pub const qsurface = struct {

    /// New constructs a new QSurface object.
    pub fn New(param1: ?*anyopaque) QtC.QSurface {
        return qtc.QSurface_new(@ptrCast(param1));
    }


    pub fn SurfaceClass(self: ?*anyopaque, ) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QSurface_Format(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSurfaceFormat) void {
        qtc.QSurface_OnFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormat(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QSurface_QBaseFormat(@ptrCast(self));
    }

    pub fn SurfaceHandle(self: ?*anyopaque, ) QPlatformSurface {
        return @ptrCast(qtc.QSurface_SurfaceHandle(@ptrCast(self)));
    }

    /// Allows for overriding the related default method
    pub fn OnSurfaceHandle(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QPlatformSurface) void {
        qtc.QSurface_OnSurfaceHandle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSurfaceHandle(self: ?*anyopaque, ) QPlatformSurface {
        return @ptrCast(qtc.QSurface_QBaseSurfaceHandle(@ptrCast(self)));
    }

    pub fn SurfaceType(self: ?*anyopaque, ) i32 {
        return qtc.QSurface_SurfaceType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSurfaceType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSurface_OnSurfaceType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSurfaceType(self: ?*anyopaque, ) i32 {
        return qtc.QSurface_QBaseSurfaceType(@ptrCast(self));
    }

    pub fn SupportsOpenGL(self: ?*anyopaque, ) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSurface_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSurface_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSurface_QBaseSize(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSurface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSurface_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSurface_QBaseOperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSurface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/surface.html#types
pub const enums = struct {
    pub const SurfaceClass = enum {
        pub const Window: i32 = 0;
        pub const Offscreen: i32 = 1;
    };

    pub const SurfaceType = enum {
        pub const RasterSurface: i32 = 0;
        pub const OpenGLSurface: i32 = 1;
        pub const RasterGLSurface: i32 = 2;
        pub const OpenVGSurface: i32 = 3;
        pub const VulkanSurface: i32 = 4;
        pub const MetalSurface: i32 = 5;
        pub const Direct3DSurface: i32 = 6;
    };

};
