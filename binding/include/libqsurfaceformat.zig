const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsurfaceformat.html
pub const qsurfaceformat = struct {

    /// New constructs a new QSurfaceFormat object.
    pub fn New() QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new();
    }


    /// New2 constructs a new QSurfaceFormat object.
    pub fn New2(options: i32) QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new2(@intCast(options));
    }


    /// New3 constructs a new QSurfaceFormat object.
    pub fn New3(other: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new3(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSurfaceFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetDepthBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetDepthBufferSize(@ptrCast(self), size);
    }

    pub fn DepthBufferSize(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_DepthBufferSize(@ptrCast(self));
    }

    pub fn SetStencilBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetStencilBufferSize(@ptrCast(self), size);
    }

    pub fn StencilBufferSize(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_StencilBufferSize(@ptrCast(self));
    }

    pub fn SetRedBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetRedBufferSize(@ptrCast(self), size);
    }

    pub fn RedBufferSize(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_RedBufferSize(@ptrCast(self));
    }

    pub fn SetGreenBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetGreenBufferSize(@ptrCast(self), size);
    }

    pub fn GreenBufferSize(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_GreenBufferSize(@ptrCast(self));
    }

    pub fn SetBlueBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetBlueBufferSize(@ptrCast(self), size);
    }

    pub fn BlueBufferSize(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_BlueBufferSize(@ptrCast(self));
    }

    pub fn SetAlphaBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetAlphaBufferSize(@ptrCast(self), size);
    }

    pub fn AlphaBufferSize(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_AlphaBufferSize(@ptrCast(self));
    }

    pub fn SetSamples(self: ?*anyopaque, numSamples: i32) void {
        qtc.QSurfaceFormat_SetSamples(@ptrCast(self), numSamples);
    }

    pub fn Samples(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_Samples(@ptrCast(self));
    }

    pub fn SetSwapBehavior(self: ?*anyopaque, behavior: i32) void {
        qtc.QSurfaceFormat_SetSwapBehavior(@ptrCast(self), @intCast(behavior));
    }

    pub fn SwapBehavior(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_SwapBehavior(@ptrCast(self));
    }

    pub fn HasAlpha(self: ?*anyopaque, ) bool {
        return qtc.QSurfaceFormat_HasAlpha(@ptrCast(self));
    }

    pub fn SetProfile(self: ?*anyopaque, profile: i32) void {
        qtc.QSurfaceFormat_SetProfile(@ptrCast(self), @intCast(profile));
    }

    pub fn Profile(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_Profile(@ptrCast(self));
    }

    pub fn SetRenderableType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QSurfaceFormat_SetRenderableType(@ptrCast(self), @intCast(typeVal));
    }

    pub fn RenderableType(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_RenderableType(@ptrCast(self));
    }

    pub fn SetMajorVersion(self: ?*anyopaque, majorVersion: i32) void {
        qtc.QSurfaceFormat_SetMajorVersion(@ptrCast(self), majorVersion);
    }

    pub fn MajorVersion(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_MajorVersion(@ptrCast(self));
    }

    pub fn SetMinorVersion(self: ?*anyopaque, minorVersion: i32) void {
        qtc.QSurfaceFormat_SetMinorVersion(@ptrCast(self), minorVersion);
    }

    pub fn MinorVersion(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_MinorVersion(@ptrCast(self));
    }

    pub fn Version(self: ?*anyopaque, ) QPair<int, int> {
        return qtc.QSurfaceFormat_Version(@ptrCast(self));
    }

    pub fn SetVersion(self: ?*anyopaque, major: i32, minor: i32) void {
        qtc.QSurfaceFormat_SetVersion(@ptrCast(self), major, minor);
    }

    pub fn Stereo(self: ?*anyopaque, ) bool {
        return qtc.QSurfaceFormat_Stereo(@ptrCast(self));
    }

    pub fn SetStereo(self: ?*anyopaque, enable: bool) void {
        qtc.QSurfaceFormat_SetStereo(@ptrCast(self), enable);
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QSurfaceFormat_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QSurfaceFormat_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QSurfaceFormat_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_Options(@ptrCast(self));
    }

    pub fn SwapInterval(self: ?*anyopaque, ) i32 {
        return qtc.QSurfaceFormat_SwapInterval(@ptrCast(self));
    }

    pub fn SetSwapInterval(self: ?*anyopaque, interval: i32) void {
        qtc.QSurfaceFormat_SetSwapInterval(@ptrCast(self), interval);
    }

    pub fn ColorSpace(self: ?*anyopaque, ) QtC.QColorSpace {
        return qtc.QSurfaceFormat_ColorSpace(@ptrCast(self));
    }

    pub fn SetColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QSurfaceFormat_SetColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    pub fn SetColorSpace2(self: ?*anyopaque, colorSpace: i32) void {
        qtc.QSurfaceFormat_SetColorSpace2(@ptrCast(self), @intCast(colorSpace));
    }

    pub fn SetDefaultFormat(format: ?*anyopaque) void {
        qtc.QSurfaceFormat_SetDefaultFormat(@ptrCast(format));
    }

    pub fn DefaultFormat() QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_DefaultFormat();
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QSurfaceFormat_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSurfaceFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/surfaceformat.html#types
pub const enums = struct {
    pub const FormatOption = enum {
        pub const StereoBuffers: i32 = 1;
        pub const DebugContext: i32 = 2;
        pub const DeprecatedFunctions: i32 = 4;
        pub const ResetNotification: i32 = 8;
        pub const ProtectedContent: i32 = 16;
    };

    pub const SwapBehavior = enum {
        pub const DefaultSwapBehavior: i32 = 0;
        pub const SingleBuffer: i32 = 1;
        pub const DoubleBuffer: i32 = 2;
        pub const TripleBuffer: i32 = 3;
    };

    pub const RenderableType = enum {
        pub const DefaultRenderableType: i32 = 0;
        pub const OpenGL: i32 = 1;
        pub const OpenGLES: i32 = 2;
        pub const OpenVG: i32 = 4;
    };

    pub const OpenGLContextProfile = enum {
        pub const NoProfile: i32 = 0;
        pub const CoreProfile: i32 = 1;
        pub const CompatibilityProfile: i32 = 2;
    };

    pub const ColorSpace = enum {
        pub const DefaultColorSpace: i32 = 0;
        pub const SRGBColorSpace: i32 = 1;
    };

};
