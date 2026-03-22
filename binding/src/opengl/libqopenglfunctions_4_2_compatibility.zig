const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglfunctions_4_2_compatibility.html
pub const qopenglfunctions_4_2_compatibility = struct {

    /// New constructs a new QOpenGLFunctions_4_2_Compatibility object.
    pub fn New() QtC.QOpenGLFunctions_4_2_Compatibility {
        return qtc.QOpenGLFunctions_4_2_Compatibility_new();
    }


    pub fn InitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_4_2_Compatibility_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_4_2_Compatibility_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlViewport(@ptrCast(self), x, y, width, height);
    }

    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDepthRange(@ptrCast(self), nearVal, farVal);
    }

    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsEnabled(@ptrCast(self), cap);
    }

    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexLevelParameteriv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexLevelParameterfv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexImage(@ptrCast(self), target, level, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlGetString(self: ?*anyopaque, name: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_4_2_Compatibility_GlGetString(@ptrCast(self), name));
    }

    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetIntegerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetFloatv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetError(self: ?*anyopaque, ) GL {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGetError(@ptrCast(self));
    }

    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetDoublev(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetBooleanv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlReadPixels(@ptrCast(self), x, y, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlReadBuffer(@ptrCast(self), mode);
    }

    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPixelStorei(@ptrCast(self), pname, param);
    }

    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPixelStoref(@ptrCast(self), pname, param);
    }

    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDepthFunc(@ptrCast(self), func);
    }

    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlStencilOp(@ptrCast(self), fail, zfail, zpass);
    }

    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlStencilFunc(@ptrCast(self), func, ref, mask);
    }

    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLogicOp(@ptrCast(self), opcode);
    }

    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendFunc(@ptrCast(self), sfactor, dfactor);
    }

    pub fn GlFlush(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFlush(@ptrCast(self));
    }

    pub fn GlFinish(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFinish(@ptrCast(self));
    }

    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEnable(@ptrCast(self), cap);
    }

    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDisable(@ptrCast(self), cap);
    }

    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDepthMask(@ptrCast(self), flag);
    }

    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorMask(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlStencilMask(@ptrCast(self), mask);
    }

    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearDepth(@ptrCast(self), depth);
    }

    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearStencil(@ptrCast(self), s);
    }

    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClear(@ptrCast(self), mask);
    }

    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawBuffer(@ptrCast(self), mode);
    }

    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexImage1D(@ptrCast(self), target, level, internalformat, width, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexParameteri(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexParameterf(@ptrCast(self), target, pname, param);
    }

    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlScissor(@ptrCast(self), x, y, width, height);
    }

    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPolygonMode(@ptrCast(self), face, mode);
    }

    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPointSize(@ptrCast(self), size);
    }

    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLineWidth(@ptrCast(self), width);
    }

    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlHint(@ptrCast(self), target, mode);
    }

    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFrontFace(@ptrCast(self), mode);
    }

    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCullFace(@ptrCast(self), mode);
    }

    pub fn GlIndexubv(self: ?*anyopaque, c: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexubv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexub(self: ?*anyopaque, c: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexub(@ptrCast(self), c);
    }

    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsTexture(@ptrCast(self), texture);
    }

    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindTexture(@ptrCast(self), target, texture);
    }

    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, x, y, width, height);
    }

    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyTexSubImage1D(@ptrCast(self), target, level, xoffset, x, y, width);
    }

    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyTexImage2D(@ptrCast(self), target, level, internalformat, x, y, width, height, border);
    }

    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyTexImage1D(@ptrCast(self), target, level, internalformat, x, y, width, border);
    }

    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPolygonOffset(@ptrCast(self), factor, units);
    }

    pub fn GlGetPointerv(self: ?*anyopaque, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetPointerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawElements(@ptrCast(self), mode, count, typeVal, @ptrCast(indices));
    }

    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawArrays(@ptrCast(self), mode, first, count);
    }

    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, x, y, width, height);
    }

    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexImage3D(@ptrCast(self), target, level, internalformat, width, height, depth, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawRangeElements(@ptrCast(self), mode, start, end, count, typeVal, @ptrCast(indices));
    }

    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendEquation(@ptrCast(self), mode);
    }

    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetCompressedTexImage(@ptrCast(self), target, level, @ptrCast(img));
    }

    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCompressedTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCompressedTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCompressedTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCompressedTexImage1D(@ptrCast(self), target, level, internalformat, width, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCompressedTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCompressedTexImage3D(@ptrCast(self), target, level, internalformat, width, height, depth, border, imageSize, @ptrCast(data));
    }

    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSampleCoverage(@ptrCast(self), value, invert);
    }

    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlActiveTexture(@ptrCast(self), texture);
    }

    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPointParameteriv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPointParameteri(@ptrCast(self), pname, param);
    }

    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPointParameterfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPointParameterf(@ptrCast(self), pname, param);
    }

    pub fn GlMultiDrawElements(self: ?*anyopaque, mode: u32, count: *const i32, typeVal: u32, indices: ?*anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiDrawElements(@ptrCast(self), mode, @ptrCast(count), typeVal, @ptrCast(indices), drawcount);
    }

    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: *const i32, count: *const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiDrawArrays(@ptrCast(self), mode, @ptrCast(first), @ptrCast(count), drawcount);
    }

    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendFuncSeparate(@ptrCast(self), sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    }

    pub fn GlGetBufferPointerv(self: ?*anyopaque, target: u32, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetBufferPointerv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetBufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlUnmapBuffer(@ptrCast(self), target);
    }

    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlMapBuffer(@ptrCast(self), target, access);
    }

    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: ?*anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBufferData(@ptrCast(self), target, size, @ptrCast(data), usage);
    }

    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsBuffer(@ptrCast(self), buffer);
    }

    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindBuffer(@ptrCast(self), target, buffer);
    }

    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetQueryObjectuiv(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetQueryObjectiv(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetQueryiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEndQuery(@ptrCast(self), target);
    }

    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBeginQuery(@ptrCast(self), target, id);
    }

    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsQuery(@ptrCast(self), id);
    }

    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteQueries(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenQueries(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlVertexAttribPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribPointer(@ptrCast(self), index, size, typeVal, normalized, stride, @ptrCast(pointer));
    }

    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlValidateProgram(@ptrCast(self), program);
    }

    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform4iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform3iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform2iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform1iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform4fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform3fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform2fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform1fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform4i(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform3i(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform2i(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform1i(@ptrCast(self), location, v0);
    }

    pub fn GlUniform4f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform4f(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform3f(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform2f(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform1f(@ptrCast(self), location, v0);
    }

    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUseProgram(@ptrCast(self), program);
    }

    pub fn GlShaderSource(self: ?*anyopaque, shader: u32, count: i32, stringVal: **const i8, length: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlShaderSource(@ptrCast(self), shader, count, @ptrCast(stringVal), @ptrCast(length));
    }

    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLinkProgram(@ptrCast(self), program);
    }

    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsShader(@ptrCast(self), shader);
    }

    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsProgram(@ptrCast(self), program);
    }

    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetVertexAttribPointerv(@ptrCast(self), index, pname, @ptrCast(pointer));
    }

    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetVertexAttribiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetVertexAttribfv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetVertexAttribdv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetUniformiv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetUniformfv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGetUniformLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, source: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetShaderSource(@ptrCast(self), shader, bufSize, @ptrCast(length), @ptrCast(source));
    }

    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetShaderInfoLog(@ptrCast(self), shader, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetShaderiv(@ptrCast(self), shader, pname, @ptrCast(params));
    }

    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetProgramInfoLog(@ptrCast(self), program, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetProgramiv(@ptrCast(self), program, pname, @ptrCast(params));
    }

    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGetAttribLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxCount: i32, count: *i32, obj: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetAttachedShaders(@ptrCast(self), program, maxCount, @ptrCast(count), @ptrCast(obj));
    }

    pub fn GlGetActiveUniform(self: ?*anyopaque, program: u32, index: u32, bufSize: i32, length: *i32, size: *i32, typeVal: *GL, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveUniform(@ptrCast(self), program, index, bufSize, @ptrCast(length), @ptrCast(size), @ptrCast(typeVal), @ptrCast(name));
    }

    pub fn GlGetActiveAttrib(self: ?*anyopaque, program: u32, index: u32, bufSize: i32, length: *i32, size: *i32, typeVal: *GL, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveAttrib(@ptrCast(self), program, index, bufSize, @ptrCast(length), @ptrCast(size), @ptrCast(typeVal), @ptrCast(name));
    }

    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEnableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDisableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDetachShader(@ptrCast(self), program, shader);
    }

    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteShader(@ptrCast(self), shader);
    }

    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteProgram(@ptrCast(self), program);
    }

    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlCreateShader(@ptrCast(self), typeVal);
    }

    pub fn GlCreateProgram(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlCreateProgram(@ptrCast(self));
    }

    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCompileShader(@ptrCast(self), shader);
    }

    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindAttribLocation(@ptrCast(self), program, index, @ptrCast(name));
    }

    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlAttachShader(@ptrCast(self), program, shader);
    }

    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlStencilMaskSeparate(@ptrCast(self), face, mask);
    }

    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlStencilFuncSeparate(@ptrCast(self), face, func, ref, mask);
    }

    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlStencilOpSeparate(@ptrCast(self), face, sfail, dpfail, dppass);
    }

    pub fn GlDrawBuffers(self: ?*anyopaque, n: i32, bufs: *const GL) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawBuffers(@ptrCast(self), n, @ptrCast(bufs));
    }

    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendEquationSeparate(@ptrCast(self), modeRGB, modeAlpha);
    }

    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix4x3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix3x4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix4x2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix2x4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix3x2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix2x3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsVertexArray(@ptrCast(self), array);
    }

    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenVertexArrays(@ptrCast(self), n, @ptrCast(arrays));
    }

    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteVertexArrays(@ptrCast(self), n, @ptrCast(arrays));
    }

    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindVertexArray(@ptrCast(self), array);
    }

    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFlushMappedBufferRange(@ptrCast(self), target, offset, length);
    }

    pub fn GlMapBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlMapBufferRange(@ptrCast(self), target, offset, length, access);
    }

    pub fn GlFramebufferTextureLayer(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFramebufferTextureLayer(@ptrCast(self), target, attachment, texture, level, layer);
    }

    pub fn GlRenderbufferStorageMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRenderbufferStorageMultisample(@ptrCast(self), target, samples, internalformat, width, height);
    }

    pub fn GlBlitFramebuffer(self: ?*anyopaque, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlitFramebuffer(@ptrCast(self), srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    }

    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenerateMipmap(@ptrCast(self), target);
    }

    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), target, attachment, pname, @ptrCast(params));
    }

    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFramebufferRenderbuffer(@ptrCast(self), target, attachment, renderbuffertarget, renderbuffer);
    }

    pub fn GlFramebufferTexture3D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFramebufferTexture3D(@ptrCast(self), target, attachment, textarget, texture, level, zoffset);
    }

    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFramebufferTexture2D(@ptrCast(self), target, attachment, textarget, texture, level);
    }

    pub fn GlFramebufferTexture1D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFramebufferTexture1D(@ptrCast(self), target, attachment, textarget, texture, level);
    }

    pub fn GlCheckFramebufferStatus(self: ?*anyopaque, target: u32) GL {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlCheckFramebufferStatus(@ptrCast(self), target);
    }

    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenFramebuffers(@ptrCast(self), n, @ptrCast(framebuffers));
    }

    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteFramebuffers(@ptrCast(self), n, @ptrCast(framebuffers));
    }

    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindFramebuffer(@ptrCast(self), target, framebuffer);
    }

    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsFramebuffer(@ptrCast(self), framebuffer);
    }

    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetRenderbufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRenderbufferStorage(@ptrCast(self), target, internalformat, width, height);
    }

    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenRenderbuffers(@ptrCast(self), n, @ptrCast(renderbuffers));
    }

    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteRenderbuffers(@ptrCast(self), n, @ptrCast(renderbuffers));
    }

    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindRenderbuffer(@ptrCast(self), target, renderbuffer);
    }

    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsRenderbuffer(@ptrCast(self), renderbuffer);
    }

    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_4_2_Compatibility_GlGetStringi(@ptrCast(self), name, index));
    }

    pub fn GlClearBufferfi(self: ?*anyopaque, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearBufferfi(@ptrCast(self), buffer, drawbuffer, depth, stencil);
    }

    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearBufferfv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearBufferuiv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearBufferiv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexParameterIuiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexParameterIiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexParameterIuiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexParameterIiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform4uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform3uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform2uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform1uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform4ui(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform3ui(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform2ui(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform1ui(@ptrCast(self), location, v0);
    }

    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGetFragDataLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlBindFragDataLocation(self: ?*anyopaque, program: u32, color: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindFragDataLocation(@ptrCast(self), program, color, @ptrCast(name));
    }

    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetUniformuiv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetVertexAttribIuiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetVertexAttribIiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlVertexAttribIPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribIPointer(@ptrCast(self), index, size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlEndConditionalRender(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEndConditionalRender(@ptrCast(self));
    }

    pub fn GlBeginConditionalRender(self: ?*anyopaque, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBeginConditionalRender(@ptrCast(self), id, mode);
    }

    pub fn GlClampColor(self: ?*anyopaque, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClampColor(@ptrCast(self), target, clamp);
    }

    pub fn GlGetTransformFeedbackVarying(self: ?*anyopaque, program: u32, index: u32, bufSize: i32, length: *i32, size: *i32, typeVal: *GL, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTransformFeedbackVarying(@ptrCast(self), program, index, bufSize, @ptrCast(length), @ptrCast(size), @ptrCast(typeVal), @ptrCast(name));
    }

    pub fn GlTransformFeedbackVaryings(self: ?*anyopaque, program: u32, count: i32, varyings: **const i8, bufferMode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTransformFeedbackVaryings(@ptrCast(self), program, count, @ptrCast(varyings), bufferMode);
    }

    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindBufferBase(@ptrCast(self), target, index, buffer);
    }

    pub fn GlBindBufferRange(self: ?*anyopaque, target: u32, index: u32, buffer: u32, offset: i64, size: i64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindBufferRange(@ptrCast(self), target, index, buffer, offset, size);
    }

    pub fn GlEndTransformFeedback(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEndTransformFeedback(@ptrCast(self));
    }

    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBeginTransformFeedback(@ptrCast(self), primitiveMode);
    }

    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsEnabledi(@ptrCast(self), target, index);
    }

    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDisablei(@ptrCast(self), target, index);
    }

    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEnablei(@ptrCast(self), target, index);
    }

    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetIntegeriV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: *u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetBooleaniV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlColorMaski(self: ?*anyopaque, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorMaski(@ptrCast(self), index, r, g, b, a);
    }

    pub fn GlCopyBufferSubData(self: ?*anyopaque, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyBufferSubData(@ptrCast(self), readTarget, writeTarget, readOffset, writeOffset, size);
    }

    pub fn GlUniformBlockBinding(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformBlockBinding(@ptrCast(self), program, uniformBlockIndex, uniformBlockBinding);
    }

    pub fn GlGetActiveUniformBlockName(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveUniformBlockName(@ptrCast(self), program, uniformBlockIndex, bufSize, @ptrCast(length), @ptrCast(uniformBlockName));
    }

    pub fn GlGetActiveUniformBlockiv(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveUniformBlockiv(@ptrCast(self), program, uniformBlockIndex, pname, @ptrCast(params));
    }

    pub fn GlGetUniformBlockIndex(self: ?*anyopaque, program: u32, uniformBlockName: *const i8) u32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGetUniformBlockIndex(@ptrCast(self), program, @ptrCast(uniformBlockName));
    }

    pub fn GlGetActiveUniformName(self: ?*anyopaque, program: u32, uniformIndex: u32, bufSize: i32, length: *i32, uniformName: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveUniformName(@ptrCast(self), program, uniformIndex, bufSize, @ptrCast(length), @ptrCast(uniformName));
    }

    pub fn GlGetActiveUniformsiv(self: ?*anyopaque, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveUniformsiv(@ptrCast(self), program, uniformCount, @ptrCast(uniformIndices), pname, @ptrCast(params));
    }

    pub fn GlGetUniformIndices(self: ?*anyopaque, program: u32, uniformCount: i32, uniformNames: **const i8, uniformIndices: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetUniformIndices(@ptrCast(self), program, uniformCount, @ptrCast(uniformNames), @ptrCast(uniformIndices));
    }

    pub fn GlPrimitiveRestartIndex(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPrimitiveRestartIndex(@ptrCast(self), index);
    }

    pub fn GlTexBuffer(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexBuffer(@ptrCast(self), target, internalformat, buffer);
    }

    pub fn GlDrawElementsInstanced(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawElementsInstanced(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount);
    }

    pub fn GlDrawArraysInstanced(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawArraysInstanced(@ptrCast(self), mode, first, count, instancecount);
    }

    pub fn GlSampleMaski(self: ?*anyopaque, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSampleMaski(@ptrCast(self), index, mask);
    }

    pub fn GlGetMultisamplefv(self: ?*anyopaque, pname: u32, index: u32, val: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMultisamplefv(@ptrCast(self), pname, index, @ptrCast(val));
    }

    pub fn GlTexImage3DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexImage3DMultisample(@ptrCast(self), target, samples, internalformat, width, height, depth, fixedsamplelocations);
    }

    pub fn GlTexImage2DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexImage2DMultisample(@ptrCast(self), target, samples, internalformat, width, height, fixedsamplelocations);
    }

    pub fn GlGetSynciv(self: ?*anyopaque, sync: GLsync, pname: u32, bufSize: i32, length: *i32, values: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetSynciv(@ptrCast(self), sync, pname, bufSize, @ptrCast(length), @ptrCast(values));
    }

    pub fn GlGetInteger64v(self: ?*anyopaque, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetInteger64v(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlWaitSync(self: ?*anyopaque, sync: GLsync, flags: u32, timeout: u64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWaitSync(@ptrCast(self), sync, flags, timeout);
    }

    pub fn GlClientWaitSync(self: ?*anyopaque, sync: GLsync, flags: u32, timeout: u64) GL {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlClientWaitSync(@ptrCast(self), sync, flags, timeout);
    }

    pub fn GlDeleteSync(self: ?*anyopaque, sync: GLsync) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteSync(@ptrCast(self), sync);
    }

    pub fn GlIsSync(self: ?*anyopaque, sync: GLsync) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsSync(@ptrCast(self), sync);
    }

    pub fn GlFenceSync(self: ?*anyopaque, condition: u32, flags: u32) GLsync {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlFenceSync(@ptrCast(self), condition, flags);
    }

    pub fn GlProvokingVertex(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProvokingVertex(@ptrCast(self), mode);
    }

    pub fn GlMultiDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: *const i32, typeVal: u32, indices: ?*anyopaque, drawcount: i32, basevertex: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiDrawElementsBaseVertex(@ptrCast(self), mode, @ptrCast(count), typeVal, @ptrCast(indices), drawcount, @ptrCast(basevertex));
    }

    pub fn GlDrawElementsInstancedBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawElementsInstancedBaseVertex(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount, basevertex);
    }

    pub fn GlDrawRangeElementsBaseVertex(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawRangeElementsBaseVertex(@ptrCast(self), mode, start, end, count, typeVal, @ptrCast(indices), basevertex);
    }

    pub fn GlDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawElementsBaseVertex(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), basevertex);
    }

    pub fn GlFramebufferTexture(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFramebufferTexture(@ptrCast(self), target, attachment, texture, level);
    }

    pub fn GlGetBufferParameteri64v(self: ?*anyopaque, target: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetBufferParameteri64v(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetInteger64iV(self: ?*anyopaque, target: u32, index: u32, data: *i64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetInteger64iV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlVertexAttribP4uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribP4uiv(@ptrCast(self), index, typeVal, normalized, @ptrCast(value));
    }

    pub fn GlVertexAttribP4ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribP4ui(@ptrCast(self), index, typeVal, normalized, value);
    }

    pub fn GlVertexAttribP3uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribP3uiv(@ptrCast(self), index, typeVal, normalized, @ptrCast(value));
    }

    pub fn GlVertexAttribP3ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribP3ui(@ptrCast(self), index, typeVal, normalized, value);
    }

    pub fn GlVertexAttribP2uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribP2uiv(@ptrCast(self), index, typeVal, normalized, @ptrCast(value));
    }

    pub fn GlVertexAttribP2ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribP2ui(@ptrCast(self), index, typeVal, normalized, value);
    }

    pub fn GlVertexAttribP1uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribP1uiv(@ptrCast(self), index, typeVal, normalized, @ptrCast(value));
    }

    pub fn GlVertexAttribP1ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribP1ui(@ptrCast(self), index, typeVal, normalized, value);
    }

    pub fn GlSecondaryColorP3uiv(self: ?*anyopaque, typeVal: u32, color: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColorP3uiv(@ptrCast(self), typeVal, @ptrCast(color));
    }

    pub fn GlSecondaryColorP3ui(self: ?*anyopaque, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColorP3ui(@ptrCast(self), typeVal, color);
    }

    pub fn GlColorP4uiv(self: ?*anyopaque, typeVal: u32, color: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorP4uiv(@ptrCast(self), typeVal, @ptrCast(color));
    }

    pub fn GlColorP4ui(self: ?*anyopaque, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorP4ui(@ptrCast(self), typeVal, color);
    }

    pub fn GlColorP3uiv(self: ?*anyopaque, typeVal: u32, color: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorP3uiv(@ptrCast(self), typeVal, @ptrCast(color));
    }

    pub fn GlColorP3ui(self: ?*anyopaque, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorP3ui(@ptrCast(self), typeVal, color);
    }

    pub fn GlNormalP3uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormalP3uiv(@ptrCast(self), typeVal, @ptrCast(coords));
    }

    pub fn GlNormalP3ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormalP3ui(@ptrCast(self), typeVal, coords);
    }

    pub fn GlMultiTexCoordP4uiv(self: ?*anyopaque, texture: u32, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoordP4uiv(@ptrCast(self), texture, typeVal, @ptrCast(coords));
    }

    pub fn GlMultiTexCoordP4ui(self: ?*anyopaque, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoordP4ui(@ptrCast(self), texture, typeVal, coords);
    }

    pub fn GlMultiTexCoordP3uiv(self: ?*anyopaque, texture: u32, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoordP3uiv(@ptrCast(self), texture, typeVal, @ptrCast(coords));
    }

    pub fn GlMultiTexCoordP3ui(self: ?*anyopaque, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoordP3ui(@ptrCast(self), texture, typeVal, coords);
    }

    pub fn GlMultiTexCoordP2uiv(self: ?*anyopaque, texture: u32, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoordP2uiv(@ptrCast(self), texture, typeVal, @ptrCast(coords));
    }

    pub fn GlMultiTexCoordP2ui(self: ?*anyopaque, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoordP2ui(@ptrCast(self), texture, typeVal, coords);
    }

    pub fn GlMultiTexCoordP1uiv(self: ?*anyopaque, texture: u32, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoordP1uiv(@ptrCast(self), texture, typeVal, @ptrCast(coords));
    }

    pub fn GlMultiTexCoordP1ui(self: ?*anyopaque, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoordP1ui(@ptrCast(self), texture, typeVal, coords);
    }

    pub fn GlTexCoordP4uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordP4uiv(@ptrCast(self), typeVal, @ptrCast(coords));
    }

    pub fn GlTexCoordP4ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordP4ui(@ptrCast(self), typeVal, coords);
    }

    pub fn GlTexCoordP3uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordP3uiv(@ptrCast(self), typeVal, @ptrCast(coords));
    }

    pub fn GlTexCoordP3ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordP3ui(@ptrCast(self), typeVal, coords);
    }

    pub fn GlTexCoordP2uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordP2uiv(@ptrCast(self), typeVal, @ptrCast(coords));
    }

    pub fn GlTexCoordP2ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordP2ui(@ptrCast(self), typeVal, coords);
    }

    pub fn GlTexCoordP1uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordP1uiv(@ptrCast(self), typeVal, @ptrCast(coords));
    }

    pub fn GlTexCoordP1ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordP1ui(@ptrCast(self), typeVal, coords);
    }

    pub fn GlVertexP4uiv(self: ?*anyopaque, typeVal: u32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexP4uiv(@ptrCast(self), typeVal, @ptrCast(value));
    }

    pub fn GlVertexP4ui(self: ?*anyopaque, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexP4ui(@ptrCast(self), typeVal, value);
    }

    pub fn GlVertexP3uiv(self: ?*anyopaque, typeVal: u32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexP3uiv(@ptrCast(self), typeVal, @ptrCast(value));
    }

    pub fn GlVertexP3ui(self: ?*anyopaque, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexP3ui(@ptrCast(self), typeVal, value);
    }

    pub fn GlVertexP2uiv(self: ?*anyopaque, typeVal: u32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexP2uiv(@ptrCast(self), typeVal, @ptrCast(value));
    }

    pub fn GlVertexP2ui(self: ?*anyopaque, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexP2ui(@ptrCast(self), typeVal, value);
    }

    pub fn GlGetQueryObjectui64v(self: ?*anyopaque, id: u32, pname: u32, params: *u64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetQueryObjectui64v(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryObjecti64v(self: ?*anyopaque, id: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetQueryObjecti64v(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlQueryCounter(self: ?*anyopaque, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlQueryCounter(@ptrCast(self), id, target);
    }

    pub fn GlGetSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetSamplerParameterIuiv(@ptrCast(self), sampler, pname, @ptrCast(params));
    }

    pub fn GlGetSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetSamplerParameterfv(@ptrCast(self), sampler, pname, @ptrCast(params));
    }

    pub fn GlGetSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetSamplerParameterIiv(@ptrCast(self), sampler, pname, @ptrCast(params));
    }

    pub fn GlGetSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetSamplerParameteriv(@ptrCast(self), sampler, pname, @ptrCast(params));
    }

    pub fn GlSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSamplerParameterIuiv(@ptrCast(self), sampler, pname, @ptrCast(param));
    }

    pub fn GlSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSamplerParameterIiv(@ptrCast(self), sampler, pname, @ptrCast(param));
    }

    pub fn GlSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSamplerParameterfv(@ptrCast(self), sampler, pname, @ptrCast(param));
    }

    pub fn GlSamplerParameterf(self: ?*anyopaque, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSamplerParameterf(@ptrCast(self), sampler, pname, param);
    }

    pub fn GlSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSamplerParameteriv(@ptrCast(self), sampler, pname, @ptrCast(param));
    }

    pub fn GlSamplerParameteri(self: ?*anyopaque, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSamplerParameteri(@ptrCast(self), sampler, pname, param);
    }

    pub fn GlBindSampler(self: ?*anyopaque, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindSampler(@ptrCast(self), unit, sampler);
    }

    pub fn GlIsSampler(self: ?*anyopaque, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsSampler(@ptrCast(self), sampler);
    }

    pub fn GlDeleteSamplers(self: ?*anyopaque, count: i32, samplers: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteSamplers(@ptrCast(self), count, @ptrCast(samplers));
    }

    pub fn GlGenSamplers(self: ?*anyopaque, count: i32, samplers: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenSamplers(@ptrCast(self), count, @ptrCast(samplers));
    }

    pub fn GlGetFragDataIndex(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGetFragDataIndex(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlBindFragDataLocationIndexed(self: ?*anyopaque, program: u32, colorNumber: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindFragDataLocationIndexed(@ptrCast(self), program, colorNumber, index, @ptrCast(name));
    }

    pub fn GlVertexAttribDivisor(self: ?*anyopaque, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribDivisor(@ptrCast(self), index, divisor);
    }

    pub fn GlGetQueryIndexediv(self: ?*anyopaque, target: u32, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetQueryIndexediv(@ptrCast(self), target, index, pname, @ptrCast(params));
    }

    pub fn GlEndQueryIndexed(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEndQueryIndexed(@ptrCast(self), target, index);
    }

    pub fn GlBeginQueryIndexed(self: ?*anyopaque, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBeginQueryIndexed(@ptrCast(self), target, index, id);
    }

    pub fn GlDrawTransformFeedbackStream(self: ?*anyopaque, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawTransformFeedbackStream(@ptrCast(self), mode, id, stream);
    }

    pub fn GlDrawTransformFeedback(self: ?*anyopaque, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawTransformFeedback(@ptrCast(self), mode, id);
    }

    pub fn GlResumeTransformFeedback(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlResumeTransformFeedback(@ptrCast(self));
    }

    pub fn GlPauseTransformFeedback(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPauseTransformFeedback(@ptrCast(self));
    }

    pub fn GlIsTransformFeedback(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsTransformFeedback(@ptrCast(self), id);
    }

    pub fn GlGenTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenTransformFeedbacks(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlDeleteTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteTransformFeedbacks(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlBindTransformFeedback(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindTransformFeedback(@ptrCast(self), target, id);
    }

    pub fn GlPatchParameterfv(self: ?*anyopaque, pname: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPatchParameterfv(@ptrCast(self), pname, @ptrCast(values));
    }

    pub fn GlPatchParameteri(self: ?*anyopaque, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPatchParameteri(@ptrCast(self), pname, value);
    }

    pub fn GlGetProgramStageiv(self: ?*anyopaque, program: u32, shadertype: u32, pname: u32, values: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetProgramStageiv(@ptrCast(self), program, shadertype, pname, @ptrCast(values));
    }

    pub fn GlGetUniformSubroutineuiv(self: ?*anyopaque, shadertype: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetUniformSubroutineuiv(@ptrCast(self), shadertype, location, @ptrCast(params));
    }

    pub fn GlUniformSubroutinesuiv(self: ?*anyopaque, shadertype: u32, count: i32, indices: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformSubroutinesuiv(@ptrCast(self), shadertype, count, @ptrCast(indices));
    }

    pub fn GlGetActiveSubroutineName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveSubroutineName(@ptrCast(self), program, shadertype, index, bufsize, @ptrCast(length), @ptrCast(name));
    }

    pub fn GlGetActiveSubroutineUniformName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveSubroutineUniformName(@ptrCast(self), program, shadertype, index, bufsize, @ptrCast(length), @ptrCast(name));
    }

    pub fn GlGetActiveSubroutineUniformiv(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, pname: u32, values: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveSubroutineUniformiv(@ptrCast(self), program, shadertype, index, pname, @ptrCast(values));
    }

    pub fn GlGetSubroutineIndex(self: ?*anyopaque, program: u32, shadertype: u32, name: *const i8) u32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGetSubroutineIndex(@ptrCast(self), program, shadertype, @ptrCast(name));
    }

    pub fn GlGetSubroutineUniformLocation(self: ?*anyopaque, program: u32, shadertype: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGetSubroutineUniformLocation(@ptrCast(self), program, shadertype, @ptrCast(name));
    }

    pub fn GlGetUniformdv(self: ?*anyopaque, program: u32, location: i32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetUniformdv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlUniformMatrix4x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix4x3dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix4x2dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix3x4dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix3x2dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix2x4dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix2x3dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix4dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix3dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniformMatrix2dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniform4dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform4dv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform3dv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform2dv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform1dv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform4d(@ptrCast(self), location, x, y, z, w);
    }

    pub fn GlUniform3d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform3d(@ptrCast(self), location, x, y, z);
    }

    pub fn GlUniform2d(self: ?*anyopaque, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform2d(@ptrCast(self), location, x, y);
    }

    pub fn GlUniform1d(self: ?*anyopaque, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUniform1d(@ptrCast(self), location, x);
    }

    pub fn GlDrawElementsIndirect(self: ?*anyopaque, mode: u32, typeVal: u32, indirect: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawElementsIndirect(@ptrCast(self), mode, typeVal, @ptrCast(indirect));
    }

    pub fn GlDrawArraysIndirect(self: ?*anyopaque, mode: u32, indirect: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawArraysIndirect(@ptrCast(self), mode, @ptrCast(indirect));
    }

    pub fn GlBlendFuncSeparatei(self: ?*anyopaque, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendFuncSeparatei(@ptrCast(self), buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    }

    pub fn GlBlendFunci(self: ?*anyopaque, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendFunci(@ptrCast(self), buf, src, dst);
    }

    pub fn GlBlendEquationSeparatei(self: ?*anyopaque, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendEquationSeparatei(@ptrCast(self), buf, modeRGB, modeAlpha);
    }

    pub fn GlBlendEquationi(self: ?*anyopaque, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBlendEquationi(@ptrCast(self), buf, mode);
    }

    pub fn GlMinSampleShading(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMinSampleShading(@ptrCast(self), value);
    }

    pub fn GlGetDoubleiV(self: ?*anyopaque, target: u32, index: u32, data: *f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetDoubleiV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlGetFloatiV(self: ?*anyopaque, target: u32, index: u32, data: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetFloatiV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlDepthRangeIndexed(self: ?*anyopaque, index: u32, n: f64, f: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDepthRangeIndexed(@ptrCast(self), index, n, f);
    }

    pub fn GlDepthRangeArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDepthRangeArrayv(@ptrCast(self), first, count, @ptrCast(v));
    }

    pub fn GlScissorIndexedv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlScissorIndexedv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlScissorIndexed(self: ?*anyopaque, index: u32, left: i32, bottom: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlScissorIndexed(@ptrCast(self), index, left, bottom, width, height);
    }

    pub fn GlScissorArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlScissorArrayv(@ptrCast(self), first, count, @ptrCast(v));
    }

    pub fn GlViewportIndexedfv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlViewportIndexedfv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlViewportIndexedf(self: ?*anyopaque, index: u32, x: f32, y: f32, w: f32, h: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlViewportIndexedf(@ptrCast(self), index, x, y, w, h);
    }

    pub fn GlViewportArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlViewportArrayv(@ptrCast(self), first, count, @ptrCast(v));
    }

    pub fn GlGetVertexAttribLdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetVertexAttribLdv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlVertexAttribLPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribLPointer(@ptrCast(self), index, size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlVertexAttribL4dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribL4dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribL3dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribL3dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribL2dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribL2dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribL1dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribL1dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribL4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribL4d(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttribL3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribL3d(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttribL2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribL2d(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttribL1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribL1d(@ptrCast(self), index, x);
    }

    pub fn GlGetProgramPipelineInfoLog(self: ?*anyopaque, pipeline: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetProgramPipelineInfoLog(@ptrCast(self), pipeline, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlValidateProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlValidateProgramPipeline(@ptrCast(self), pipeline);
    }

    pub fn GlProgramUniformMatrix4x3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix4x3dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3x4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix3x4dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4x2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix4x2dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2x4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix2x4dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3x2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix3x2dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2x3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix2x3dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix4x3fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix3x4fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix4x2fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix2x4fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix3x2fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix2x3fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix4dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix3dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix2dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix4fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix3fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniformMatrix2fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniform4uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform4uiv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform4ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform4ui(@ptrCast(self), program, location, v0, v1, v2, v3);
    }

    pub fn GlProgramUniform4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform4dv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform4d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64, v2: f64, v3: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform4d(@ptrCast(self), program, location, v0, v1, v2, v3);
    }

    pub fn GlProgramUniform4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform4fv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform4f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform4f(@ptrCast(self), program, location, v0, v1, v2, v3);
    }

    pub fn GlProgramUniform4iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform4iv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform4i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform4i(@ptrCast(self), program, location, v0, v1, v2, v3);
    }

    pub fn GlProgramUniform3uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform3uiv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform3ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform3ui(@ptrCast(self), program, location, v0, v1, v2);
    }

    pub fn GlProgramUniform3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform3dv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform3d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform3d(@ptrCast(self), program, location, v0, v1, v2);
    }

    pub fn GlProgramUniform3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform3fv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform3f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform3f(@ptrCast(self), program, location, v0, v1, v2);
    }

    pub fn GlProgramUniform3iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform3iv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform3i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform3i(@ptrCast(self), program, location, v0, v1, v2);
    }

    pub fn GlProgramUniform2uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform2uiv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform2ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform2ui(@ptrCast(self), program, location, v0, v1);
    }

    pub fn GlProgramUniform2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform2dv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform2d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform2d(@ptrCast(self), program, location, v0, v1);
    }

    pub fn GlProgramUniform2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform2fv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform2f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform2f(@ptrCast(self), program, location, v0, v1);
    }

    pub fn GlProgramUniform2iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform2iv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform2i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform2i(@ptrCast(self), program, location, v0, v1);
    }

    pub fn GlProgramUniform1uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform1uiv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform1ui(self: ?*anyopaque, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform1ui(@ptrCast(self), program, location, v0);
    }

    pub fn GlProgramUniform1dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform1dv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform1d(self: ?*anyopaque, program: u32, location: i32, v0: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform1d(@ptrCast(self), program, location, v0);
    }

    pub fn GlProgramUniform1fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform1fv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform1f(self: ?*anyopaque, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform1f(@ptrCast(self), program, location, v0);
    }

    pub fn GlProgramUniform1iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform1iv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform1i(self: ?*anyopaque, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramUniform1i(@ptrCast(self), program, location, v0);
    }

    pub fn GlGetProgramPipelineiv(self: ?*anyopaque, pipeline: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetProgramPipelineiv(@ptrCast(self), pipeline, pname, @ptrCast(params));
    }

    pub fn GlIsProgramPipeline(self: ?*anyopaque, pipeline: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsProgramPipeline(@ptrCast(self), pipeline);
    }

    pub fn GlGenProgramPipelines(self: ?*anyopaque, n: i32, pipelines: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGenProgramPipelines(@ptrCast(self), n, @ptrCast(pipelines));
    }

    pub fn GlDeleteProgramPipelines(self: ?*anyopaque, n: i32, pipelines: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteProgramPipelines(@ptrCast(self), n, @ptrCast(pipelines));
    }

    pub fn GlBindProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindProgramPipeline(@ptrCast(self), pipeline);
    }

    pub fn GlCreateShaderProgramv(self: ?*anyopaque, typeVal: u32, count: i32, strings: **const i8) u32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlCreateShaderProgramv(@ptrCast(self), typeVal, count, @ptrCast(strings));
    }

    pub fn GlActiveShaderProgram(self: ?*anyopaque, pipeline: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlActiveShaderProgram(@ptrCast(self), pipeline, program);
    }

    pub fn GlUseProgramStages(self: ?*anyopaque, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlUseProgramStages(@ptrCast(self), pipeline, stages, program);
    }

    pub fn GlProgramParameteri(self: ?*anyopaque, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramParameteri(@ptrCast(self), program, pname, value);
    }

    pub fn GlProgramBinary(self: ?*anyopaque, program: u32, binaryFormat: u32, binary: ?*anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlProgramBinary(@ptrCast(self), program, binaryFormat, @ptrCast(binary), length);
    }

    pub fn GlGetProgramBinary(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, binaryFormat: *GL, binary: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetProgramBinary(@ptrCast(self), program, bufSize, @ptrCast(length), @ptrCast(binaryFormat), @ptrCast(binary));
    }

    pub fn GlClearDepthf(self: ?*anyopaque, dd: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearDepthf(@ptrCast(self), dd);
    }

    pub fn GlDepthRangef(self: ?*anyopaque, n: f32, f: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDepthRangef(@ptrCast(self), n, f);
    }

    pub fn GlGetShaderPrecisionFormat(self: ?*anyopaque, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetShaderPrecisionFormat(@ptrCast(self), shadertype, precisiontype, @ptrCast(range), @ptrCast(precision));
    }

    pub fn GlShaderBinary(self: ?*anyopaque, count: i32, shaders: *const u32, binaryformat: u32, binary: ?*anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlShaderBinary(@ptrCast(self), count, @ptrCast(shaders), binaryformat, @ptrCast(binary), length);
    }

    pub fn GlReleaseShaderCompiler(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlReleaseShaderCompiler(@ptrCast(self));
    }

    pub fn GlTexStorage3D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexStorage3D(@ptrCast(self), target, levels, internalformat, width, height, depth);
    }

    pub fn GlTexStorage2D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexStorage2D(@ptrCast(self), target, levels, internalformat, width, height);
    }

    pub fn GlTexStorage1D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexStorage1D(@ptrCast(self), target, levels, internalformat, width);
    }

    pub fn GlMemoryBarrier(self: ?*anyopaque, barriers: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMemoryBarrier(@ptrCast(self), barriers);
    }

    pub fn GlBindImageTexture(self: ?*anyopaque, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBindImageTexture(@ptrCast(self), unit, texture, level, layered, layer, access, format);
    }

    pub fn GlGetActiveAtomicCounterBufferiv(self: ?*anyopaque, program: u32, bufferIndex: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetActiveAtomicCounterBufferiv(@ptrCast(self), program, bufferIndex, pname, @ptrCast(params));
    }

    pub fn GlGetInternalformativ(self: ?*anyopaque, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetInternalformativ(@ptrCast(self), target, internalformat, pname, bufSize, @ptrCast(params));
    }

    pub fn GlDrawTransformFeedbackStreamInstanced(self: ?*anyopaque, mode: u32, id: u32, stream: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawTransformFeedbackStreamInstanced(@ptrCast(self), mode, id, stream, instancecount);
    }

    pub fn GlDrawTransformFeedbackInstanced(self: ?*anyopaque, mode: u32, id: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawTransformFeedbackInstanced(@ptrCast(self), mode, id, instancecount);
    }

    pub fn GlDrawElementsInstancedBaseVertexBaseInstance(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32, basevertex: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawElementsInstancedBaseVertexBaseInstance(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount, basevertex, baseinstance);
    }

    pub fn GlDrawElementsInstancedBaseInstance(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawElementsInstancedBaseInstance(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount, baseinstance);
    }

    pub fn GlDrawArraysInstancedBaseInstance(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawArraysInstancedBaseInstance(@ptrCast(self), mode, first, count, instancecount, baseinstance);
    }

    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTranslatef(@ptrCast(self), x, y, z);
    }

    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTranslated(@ptrCast(self), x, y, z);
    }

    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlScalef(@ptrCast(self), x, y, z);
    }

    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlScaled(@ptrCast(self), x, y, z);
    }

    pub fn GlRotatef(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRotatef(@ptrCast(self), angle, x, y, z);
    }

    pub fn GlRotated(self: ?*anyopaque, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRotated(@ptrCast(self), angle, x, y, z);
    }

    pub fn GlPushMatrix(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPushMatrix(@ptrCast(self));
    }

    pub fn GlPopMatrix(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPopMatrix(@ptrCast(self));
    }

    pub fn GlOrtho(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlOrtho(@ptrCast(self), left, right, bottom, top, zNear, zFar);
    }

    pub fn GlMultMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMultMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMatrixMode(@ptrCast(self), mode);
    }

    pub fn GlLoadMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLoadMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLoadMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadIdentity(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLoadIdentity(@ptrCast(self));
    }

    pub fn GlFrustum(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFrustum(@ptrCast(self), left, right, bottom, top, zNear, zFar);
    }

    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlIsList(@ptrCast(self), list);
    }

    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexGeniv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexGenfv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexGendv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexEnviv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetTexEnvfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: *u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: *u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetPixelMapusv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetPixelMapuiv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetPixelMapfv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMaterialiv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMaterialfv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMapiv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMapfv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: *f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMapdv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetLightiv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetLightfv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: *f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetClipPlane(@ptrCast(self), plane, @ptrCast(equation));
    }

    pub fn GlDrawPixels(self: ?*anyopaque, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDrawPixels(@ptrCast(self), width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlCopyPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyPixels(@ptrCast(self), x, y, width, height, typeVal);
    }

    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPixelMapusv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPixelMapuiv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPixelMapfv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPixelTransferi(@ptrCast(self), pname, param);
    }

    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPixelTransferf(@ptrCast(self), pname, param);
    }

    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPixelZoom(@ptrCast(self), xfactor, yfactor);
    }

    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlAlphaFunc(@ptrCast(self), func, ref);
    }

    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalPoint2(@ptrCast(self), i, j);
    }

    pub fn GlEvalMesh2(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalMesh2(@ptrCast(self), mode, i1Val, i2Val, j1, j2);
    }

    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalPoint1(@ptrCast(self), i);
    }

    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalMesh1(@ptrCast(self), mode, i1Val, i2Val);
    }

    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalCoord2fv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalCoord2f(@ptrCast(self), u, v);
    }

    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalCoord2dv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalCoord2d(@ptrCast(self), u, v);
    }

    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalCoord1fv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalCoord1f(@ptrCast(self), u);
    }

    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalCoord1dv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEvalCoord1d(@ptrCast(self), u);
    }

    pub fn GlMapGrid2f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMapGrid2f(@ptrCast(self), un, u1Val, u2Val, vn, v1, v2);
    }

    pub fn GlMapGrid2d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMapGrid2d(@ptrCast(self), un, u1Val, u2Val, vn, v1, v2);
    }

    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMapGrid1f(@ptrCast(self), un, u1Val, u2Val);
    }

    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMapGrid1d(@ptrCast(self), un, u1Val, u2Val);
    }

    pub fn GlMap2f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMap2f(@ptrCast(self), target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, @ptrCast(points));
    }

    pub fn GlMap2d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMap2d(@ptrCast(self), target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, @ptrCast(points));
    }

    pub fn GlMap1f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMap1f(@ptrCast(self), target, u1Val, u2Val, stride, order, @ptrCast(points));
    }

    pub fn GlMap1d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMap1d(@ptrCast(self), target, u1Val, u2Val, stride, order, @ptrCast(points));
    }

    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPushAttrib(@ptrCast(self), mask);
    }

    pub fn GlPopAttrib(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPopAttrib(@ptrCast(self));
    }

    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlAccum(@ptrCast(self), op, value);
    }

    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexMask(@ptrCast(self), mask);
    }

    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearIndex(@ptrCast(self), c);
    }

    pub fn GlClearAccum(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClearAccum(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPushName(@ptrCast(self), name);
    }

    pub fn GlPopName(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPopName(@ptrCast(self));
    }

    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPassThrough(@ptrCast(self), token);
    }

    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLoadName(@ptrCast(self), name);
    }

    pub fn GlInitNames(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlInitNames(@ptrCast(self));
    }

    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlRenderMode(@ptrCast(self), mode);
    }

    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: *u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSelectBuffer(@ptrCast(self), size, @ptrCast(buffer));
    }

    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFeedbackBuffer(@ptrCast(self), size, typeVal, @ptrCast(buffer));
    }

    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexGeniv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexGeni(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexGenfv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexGenf(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexGendv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexGend(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexEnviv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexEnvi(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexEnvfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexEnvf(@ptrCast(self), target, pname, param);
    }

    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlShadeModel(@ptrCast(self), mode);
    }

    pub fn GlPolygonStipple(self: ?*anyopaque, mask: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMaterialiv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMateriali(@ptrCast(self), face, pname, param);
    }

    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMaterialfv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMaterialf(@ptrCast(self), face, pname, param);
    }

    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLineStipple(@ptrCast(self), factor, pattern);
    }

    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLightModeliv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLightModeli(@ptrCast(self), pname, param);
    }

    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLightModelfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLightModelf(@ptrCast(self), pname, param);
    }

    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLightiv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLighti(@ptrCast(self), light, pname, param);
    }

    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLightfv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLightf(@ptrCast(self), light, pname, param);
    }

    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogiv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogi(@ptrCast(self), pname, param);
    }

    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogf(@ptrCast(self), pname, param);
    }

    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorMaterial(@ptrCast(self), face, mode);
    }

    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClipPlane(@ptrCast(self), plane, @ptrCast(equation));
    }

    pub fn GlVertex4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex4s(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex4i(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex4f(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex4d(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex3s(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex3i(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex3f(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex3d(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex2s(@ptrCast(self), x, y);
    }

    pub fn GlVertex2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex2i(@ptrCast(self), x, y);
    }

    pub fn GlVertex2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex2f(@ptrCast(self), x, y);
    }

    pub fn GlVertex2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertex2d(@ptrCast(self), x, y);
    }

    pub fn GlTexCoord4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4s(self: ?*anyopaque, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord4s(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4i(self: ?*anyopaque, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord4i(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4f(self: ?*anyopaque, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord4f(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4d(self: ?*anyopaque, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord4d(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord3s(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord3i(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord3f(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord3d(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord2s(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord2i(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord2f(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord2d(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord1sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord1sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord1s(@ptrCast(self), s);
    }

    pub fn GlTexCoord1iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord1iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord1i(@ptrCast(self), s);
    }

    pub fn GlTexCoord1fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord1fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord1f(@ptrCast(self), s);
    }

    pub fn GlTexCoord1dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord1dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoord1d(@ptrCast(self), s);
    }

    pub fn GlRectsv(self: ?*anyopaque, v1: *const i16, v2: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRectsv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRects(self: ?*anyopaque, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRects(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectiv(self: ?*anyopaque, v1: *const i32, v2: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRectiv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRecti(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRecti(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectfv(self: ?*anyopaque, v1: *const f32, v2: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRectfv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRectf(self: ?*anyopaque, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRectf(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectdv(self: ?*anyopaque, v1: *const f64, v2: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRectdv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRectd(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRectd(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRasterPos4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos4s(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos4i(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos4f(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos4d(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos3s(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos3i(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos3f(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos3d(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos2s(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos2i(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos2f(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlRasterPos2d(@ptrCast(self), x, y);
    }

    pub fn GlNormal3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3s(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3i(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3f(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3d(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormal3b(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlIndexsv(self: ?*anyopaque, c: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexsv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexs(@ptrCast(self), c);
    }

    pub fn GlIndexiv(self: ?*anyopaque, c: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexiv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexi(@ptrCast(self), c);
    }

    pub fn GlIndexfv(self: ?*anyopaque, c: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexfv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexf(@ptrCast(self), c);
    }

    pub fn GlIndexdv(self: ?*anyopaque, c: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexdv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexd(@ptrCast(self), c);
    }

    pub fn GlEnd(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEnd(@ptrCast(self));
    }

    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEdgeFlagv(@ptrCast(self), @ptrCast(flag));
    }

    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEdgeFlag(@ptrCast(self), flag);
    }

    pub fn GlColor4usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4usv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4us(self: ?*anyopaque, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4us(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4uiv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4ui(self: ?*anyopaque, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4ui(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4ubv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4ub(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4ub(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4s(self: ?*anyopaque, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4s(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4i(self: ?*anyopaque, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4i(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4f(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4f(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4d(self: ?*anyopaque, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4d(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4b(self: ?*anyopaque, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor4b(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3usv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3us(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3ui(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3ub(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3s(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3i(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3f(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3d(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColor3b(@ptrCast(self), red, green, blue);
    }

    pub fn GlBitmap(self: ?*anyopaque, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBitmap(@ptrCast(self), width, height, xorig, yorig, xmove, ymove, @ptrCast(bitmap));
    }

    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlBegin(@ptrCast(self), mode);
    }

    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlListBase(@ptrCast(self), base);
    }

    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlGenLists(@ptrCast(self), range);
    }

    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDeleteLists(@ptrCast(self), list, range);
    }

    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCallLists(@ptrCast(self), n, typeVal, @ptrCast(lists));
    }

    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCallList(@ptrCast(self), list);
    }

    pub fn GlEndList(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEndList(@ptrCast(self));
    }

    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNewList(@ptrCast(self), list, mode);
    }

    pub fn GlPushClientAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPushClientAttrib(@ptrCast(self), mask);
    }

    pub fn GlPopClientAttrib(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPopClientAttrib(@ptrCast(self));
    }

    pub fn GlPrioritizeTextures(self: ?*anyopaque, n: i32, textures: *const u32, priorities: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlPrioritizeTextures(@ptrCast(self), n, @ptrCast(textures), @ptrCast(priorities));
    }

    pub fn GlAreTexturesResident(self: ?*anyopaque, n: i32, textures: *const u32, residences: *u8) u8 {
        return qtc.QOpenGLFunctions_4_2_Compatibility_GlAreTexturesResident(@ptrCast(self), n, @ptrCast(textures), @ptrCast(residences));
    }

    pub fn GlVertexPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlTexCoordPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlTexCoordPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlNormalPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlNormalPointer(@ptrCast(self), typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlInterleavedArrays(self: ?*anyopaque, format: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlInterleavedArrays(@ptrCast(self), format, stride, @ptrCast(pointer));
    }

    pub fn GlIndexPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlIndexPointer(@ptrCast(self), typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlEnableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEnableClientState(@ptrCast(self), array);
    }

    pub fn GlEdgeFlagPointer(self: ?*anyopaque, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlEdgeFlagPointer(@ptrCast(self), stride, @ptrCast(pointer));
    }

    pub fn GlDisableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlDisableClientState(@ptrCast(self), array);
    }

    pub fn GlColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlArrayElement(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlArrayElement(@ptrCast(self), i);
    }

    pub fn GlResetMinmax(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlResetMinmax(@ptrCast(self), target);
    }

    pub fn GlResetHistogram(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlResetHistogram(@ptrCast(self), target);
    }

    pub fn GlMinmax(self: ?*anyopaque, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMinmax(@ptrCast(self), target, internalformat, sink);
    }

    pub fn GlHistogram(self: ?*anyopaque, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlHistogram(@ptrCast(self), target, width, internalformat, sink);
    }

    pub fn GlGetMinmaxParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMinmaxParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetMinmaxParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMinmaxParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetMinmax(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetMinmax(@ptrCast(self), target, reset, format, typeVal, @ptrCast(values));
    }

    pub fn GlGetHistogramParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetHistogramParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetHistogramParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetHistogramParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetHistogram(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetHistogram(@ptrCast(self), target, reset, format, typeVal, @ptrCast(values));
    }

    pub fn GlSeparableFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSeparableFilter2D(@ptrCast(self), target, internalformat, width, height, format, typeVal, @ptrCast(row), @ptrCast(column));
    }

    pub fn GlGetSeparableFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque, span: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetSeparableFilter(@ptrCast(self), target, format, typeVal, @ptrCast(row), @ptrCast(column), @ptrCast(span));
    }

    pub fn GlGetConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetConvolutionParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetConvolutionParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetConvolutionFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetConvolutionFilter(@ptrCast(self), target, format, typeVal, @ptrCast(image));
    }

    pub fn GlCopyConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyConvolutionFilter2D(@ptrCast(self), target, internalformat, x, y, width, height);
    }

    pub fn GlCopyConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyConvolutionFilter1D(@ptrCast(self), target, internalformat, x, y, width);
    }

    pub fn GlConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlConvolutionParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlConvolutionParameteri(self: ?*anyopaque, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlConvolutionParameteri(@ptrCast(self), target, pname, params);
    }

    pub fn GlConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlConvolutionParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlConvolutionParameterf(self: ?*anyopaque, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlConvolutionParameterf(@ptrCast(self), target, pname, params);
    }

    pub fn GlConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlConvolutionFilter2D(@ptrCast(self), target, internalformat, width, height, format, typeVal, @ptrCast(image));
    }

    pub fn GlConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlConvolutionFilter1D(@ptrCast(self), target, internalformat, width, format, typeVal, @ptrCast(image));
    }

    pub fn GlCopyColorSubTable(self: ?*anyopaque, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyColorSubTable(@ptrCast(self), target, start, x, y, width);
    }

    pub fn GlColorSubTable(self: ?*anyopaque, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorSubTable(@ptrCast(self), target, start, count, format, typeVal, @ptrCast(data));
    }

    pub fn GlGetColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetColorTableParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetColorTableParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetColorTable(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlGetColorTable(@ptrCast(self), target, format, typeVal, @ptrCast(table));
    }

    pub fn GlCopyColorTable(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlCopyColorTable(@ptrCast(self), target, internalformat, x, y, width);
    }

    pub fn GlColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorTableParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorTableParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlColorTable(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlColorTable(@ptrCast(self), target, internalformat, width, format, typeVal, @ptrCast(table));
    }

    pub fn GlMultTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMultTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLoadTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlLoadTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMultiTexCoord4sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord4sv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord4s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord4s(@ptrCast(self), target, s, t, r, q);
    }

    pub fn GlMultiTexCoord4iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord4iv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord4i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord4i(@ptrCast(self), target, s, t, r, q);
    }

    pub fn GlMultiTexCoord4fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord4fv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord4f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord4f(@ptrCast(self), target, s, t, r, q);
    }

    pub fn GlMultiTexCoord4dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord4dv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord4d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord4d(@ptrCast(self), target, s, t, r, q);
    }

    pub fn GlMultiTexCoord3sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord3sv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord3s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord3s(@ptrCast(self), target, s, t, r);
    }

    pub fn GlMultiTexCoord3iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord3iv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord3i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord3i(@ptrCast(self), target, s, t, r);
    }

    pub fn GlMultiTexCoord3fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord3fv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord3f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord3f(@ptrCast(self), target, s, t, r);
    }

    pub fn GlMultiTexCoord3dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord3dv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord3d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord3d(@ptrCast(self), target, s, t, r);
    }

    pub fn GlMultiTexCoord2sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord2sv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord2s(self: ?*anyopaque, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord2s(@ptrCast(self), target, s, t);
    }

    pub fn GlMultiTexCoord2iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord2iv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord2i(self: ?*anyopaque, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord2i(@ptrCast(self), target, s, t);
    }

    pub fn GlMultiTexCoord2fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord2fv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord2f(self: ?*anyopaque, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord2f(@ptrCast(self), target, s, t);
    }

    pub fn GlMultiTexCoord2dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord2dv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord2d(self: ?*anyopaque, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord2d(@ptrCast(self), target, s, t);
    }

    pub fn GlMultiTexCoord1sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord1sv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord1s(self: ?*anyopaque, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord1s(@ptrCast(self), target, s);
    }

    pub fn GlMultiTexCoord1iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord1iv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord1i(self: ?*anyopaque, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord1i(@ptrCast(self), target, s);
    }

    pub fn GlMultiTexCoord1fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord1fv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord1f(self: ?*anyopaque, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord1f(@ptrCast(self), target, s);
    }

    pub fn GlMultiTexCoord1dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord1dv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord1d(self: ?*anyopaque, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlMultiTexCoord1d(@ptrCast(self), target, s);
    }

    pub fn GlClientActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlClientActiveTexture(@ptrCast(self), texture);
    }

    pub fn GlWindowPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos3s(@ptrCast(self), x, y, z);
    }

    pub fn GlWindowPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos3i(@ptrCast(self), x, y, z);
    }

    pub fn GlWindowPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos3f(@ptrCast(self), x, y, z);
    }

    pub fn GlWindowPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos3d(@ptrCast(self), x, y, z);
    }

    pub fn GlWindowPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos2s(@ptrCast(self), x, y);
    }

    pub fn GlWindowPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos2i(@ptrCast(self), x, y);
    }

    pub fn GlWindowPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos2f(@ptrCast(self), x, y);
    }

    pub fn GlWindowPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlWindowPos2d(@ptrCast(self), x, y);
    }

    pub fn GlSecondaryColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColorPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlSecondaryColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3usv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3us(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3ui(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3ub(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3s(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3i(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3f(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3d(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlSecondaryColor3b(@ptrCast(self), red, green, blue);
    }

    pub fn GlFogCoordPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogCoordPointer(@ptrCast(self), typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlFogCoorddv(self: ?*anyopaque, coord: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogCoorddv(@ptrCast(self), @ptrCast(coord));
    }

    pub fn GlFogCoordd(self: ?*anyopaque, coord: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogCoordd(@ptrCast(self), coord);
    }

    pub fn GlFogCoordfv(self: ?*anyopaque, coord: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogCoordfv(@ptrCast(self), @ptrCast(coord));
    }

    pub fn GlFogCoordf(self: ?*anyopaque, coord: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlFogCoordf(@ptrCast(self), coord);
    }

    pub fn GlVertexAttrib4usv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4usv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4uiv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4ubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4ubv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4s(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttrib4iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4iv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4fv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4f(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttrib4dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4d(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttrib4bv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4bv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nusv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4Nusv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nuiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4Nuiv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4Nubv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nub(self: ?*anyopaque, index: u32, x: u8, y: u8, z: u8, w: u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4Nub(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttrib4Nsv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4Nsv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Niv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4Niv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nbv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib4Nbv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib3sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib3sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib3s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib3s(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttrib3fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib3fv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib3f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib3f(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttrib3dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib3dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib3d(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttrib2sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib2sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib2s(self: ?*anyopaque, index: u32, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib2s(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttrib2fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib2fv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib2f(self: ?*anyopaque, index: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib2f(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttrib2dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib2dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib2d(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttrib1sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib1sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib1s(self: ?*anyopaque, index: u32, x: i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib1s(@ptrCast(self), index, x);
    }

    pub fn GlVertexAttrib1fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib1fv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib1f(self: ?*anyopaque, index: u32, x: f32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib1f(@ptrCast(self), index, x);
    }

    pub fn GlVertexAttrib1dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib1dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttrib1d(@ptrCast(self), index, x);
    }

    pub fn GlVertexAttribI4usv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI4usv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI4ubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI4ubv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI4sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI4sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI4bv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI4bv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI4uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI4uiv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI3uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI3uiv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI2uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI2uiv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI1uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI1uiv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI4iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI4iv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI3iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI3iv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI2iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI2iv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI1iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI1iv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribI4ui(self: ?*anyopaque, index: u32, x: u32, y: u32, z: u32, w: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI4ui(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttribI3ui(self: ?*anyopaque, index: u32, x: u32, y: u32, z: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI3ui(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttribI2ui(self: ?*anyopaque, index: u32, x: u32, y: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI2ui(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttribI1ui(self: ?*anyopaque, index: u32, x: u32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI1ui(@ptrCast(self), index, x);
    }

    pub fn GlVertexAttribI4i(self: ?*anyopaque, index: u32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI4i(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttribI3i(self: ?*anyopaque, index: u32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI3i(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttribI2i(self: ?*anyopaque, index: u32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI2i(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttribI1i(self: ?*anyopaque, index: u32, x: i32) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_GlVertexAttribI1i(@ptrCast(self), index, x);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Compatibility_Delete(@ptrCast(self));
    }
};
