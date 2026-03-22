const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglfunctions_4_2_core.html
pub const qopenglfunctions_4_2_core = struct {

    /// New constructs a new QOpenGLFunctions_4_2_Core object.
    pub fn New() QtC.QOpenGLFunctions_4_2_Core {
        return qtc.QOpenGLFunctions_4_2_Core_new();
    }


    pub fn InitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_4_2_Core_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_2_Core_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_4_2_Core_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewport(@ptrCast(self), x, y, width, height);
    }

    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRange(@ptrCast(self), nearVal, farVal);
    }

    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsEnabled(@ptrCast(self), cap);
    }

    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexLevelParameteriv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexLevelParameterfv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexImage(@ptrCast(self), target, level, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlGetString(self: ?*anyopaque, name: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_4_2_Core_GlGetString(@ptrCast(self), name));
    }

    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetIntegerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetFloatv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetError(self: ?*anyopaque, ) GL {
        return qtc.QOpenGLFunctions_4_2_Core_GlGetError(@ptrCast(self));
    }

    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetDoublev(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBooleanv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlReadPixels(@ptrCast(self), x, y, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlReadBuffer(@ptrCast(self), mode);
    }

    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPixelStorei(@ptrCast(self), pname, param);
    }

    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPixelStoref(@ptrCast(self), pname, param);
    }

    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthFunc(@ptrCast(self), func);
    }

    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilOp(@ptrCast(self), fail, zfail, zpass);
    }

    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilFunc(@ptrCast(self), func, ref, mask);
    }

    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLogicOp(@ptrCast(self), opcode);
    }

    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFunc(@ptrCast(self), sfactor, dfactor);
    }

    pub fn GlFlush(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFlush(@ptrCast(self));
    }

    pub fn GlFinish(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFinish(@ptrCast(self));
    }

    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnable(@ptrCast(self), cap);
    }

    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisable(@ptrCast(self), cap);
    }

    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthMask(@ptrCast(self), flag);
    }

    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlColorMask(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilMask(@ptrCast(self), mask);
    }

    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearDepth(@ptrCast(self), depth);
    }

    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearStencil(@ptrCast(self), s);
    }

    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClear(@ptrCast(self), mask);
    }

    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawBuffer(@ptrCast(self), mode);
    }

    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage1D(@ptrCast(self), target, level, internalformat, width, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameteri(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterf(@ptrCast(self), target, pname, param);
    }

    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissor(@ptrCast(self), x, y, width, height);
    }

    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPolygonMode(@ptrCast(self), face, mode);
    }

    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointSize(@ptrCast(self), size);
    }

    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLineWidth(@ptrCast(self), width);
    }

    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlHint(@ptrCast(self), target, mode);
    }

    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFrontFace(@ptrCast(self), mode);
    }

    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCullFace(@ptrCast(self), mode);
    }

    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsTexture(@ptrCast(self), texture);
    }

    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindTexture(@ptrCast(self), target, texture);
    }

    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, x, y, width, height);
    }

    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage1D(@ptrCast(self), target, level, xoffset, x, y, width);
    }

    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexImage2D(@ptrCast(self), target, level, internalformat, x, y, width, height, border);
    }

    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexImage1D(@ptrCast(self), target, level, internalformat, x, y, width, border);
    }

    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPolygonOffset(@ptrCast(self), factor, units);
    }

    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElements(@ptrCast(self), mode, count, typeVal, @ptrCast(indices));
    }

    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArrays(@ptrCast(self), mode, first, count);
    }

    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, x, y, width, height);
    }

    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage3D(@ptrCast(self), target, level, internalformat, width, height, depth, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawRangeElements(@ptrCast(self), mode, start, end, count, typeVal, @ptrCast(indices));
    }

    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquation(@ptrCast(self), mode);
    }

    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetCompressedTexImage(@ptrCast(self), target, level, @ptrCast(img));
    }

    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage1D(@ptrCast(self), target, level, internalformat, width, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage3D(@ptrCast(self), target, level, internalformat, width, height, depth, border, imageSize, @ptrCast(data));
    }

    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSampleCoverage(@ptrCast(self), value, invert);
    }

    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlActiveTexture(@ptrCast(self), texture);
    }

    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameteriv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameteri(@ptrCast(self), pname, param);
    }

    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameterfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameterf(@ptrCast(self), pname, param);
    }

    pub fn GlMultiDrawElements(self: ?*anyopaque, mode: u32, count: *const i32, typeVal: u32, indices: ?*anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawElements(@ptrCast(self), mode, @ptrCast(count), typeVal, @ptrCast(indices), drawcount);
    }

    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: *const i32, count: *const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawArrays(@ptrCast(self), mode, @ptrCast(first), @ptrCast(count), drawcount);
    }

    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFuncSeparate(@ptrCast(self), sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    }

    pub fn GlGetBufferPointerv(self: ?*anyopaque, target: u32, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferPointerv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlUnmapBuffer(@ptrCast(self), target);
    }

    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_2_Core_GlMapBuffer(@ptrCast(self), target, access);
    }

    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: ?*anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBufferData(@ptrCast(self), target, size, @ptrCast(data), usage);
    }

    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsBuffer(@ptrCast(self), buffer);
    }

    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBuffer(@ptrCast(self), target, buffer);
    }

    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectuiv(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectiv(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndQuery(@ptrCast(self), target);
    }

    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginQuery(@ptrCast(self), target, id);
    }

    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsQuery(@ptrCast(self), id);
    }

    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteQueries(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenQueries(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlVertexAttribPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribPointer(@ptrCast(self), index, size, typeVal, normalized, stride, @ptrCast(pointer));
    }

    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlValidateProgram(@ptrCast(self), program);
    }

    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4i(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3i(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2i(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1i(@ptrCast(self), location, v0);
    }

    pub fn GlUniform4f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4f(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3f(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2f(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1f(@ptrCast(self), location, v0);
    }

    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUseProgram(@ptrCast(self), program);
    }

    pub fn GlShaderSource(self: ?*anyopaque, shader: u32, count: i32, stringVal: **const i8, length: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlShaderSource(@ptrCast(self), shader, count, @ptrCast(stringVal), @ptrCast(length));
    }

    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLinkProgram(@ptrCast(self), program);
    }

    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsShader(@ptrCast(self), shader);
    }

    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsProgram(@ptrCast(self), program);
    }

    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribPointerv(@ptrCast(self), index, pname, @ptrCast(pointer));
    }

    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribfv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribdv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformiv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformfv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlGetUniformLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, source: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderSource(@ptrCast(self), shader, bufSize, @ptrCast(length), @ptrCast(source));
    }

    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderInfoLog(@ptrCast(self), shader, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderiv(@ptrCast(self), shader, pname, @ptrCast(params));
    }

    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramInfoLog(@ptrCast(self), program, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramiv(@ptrCast(self), program, pname, @ptrCast(params));
    }

    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlGetAttribLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxCount: i32, count: *i32, obj: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetAttachedShaders(@ptrCast(self), program, maxCount, @ptrCast(count), @ptrCast(obj));
    }

    pub fn GlGetActiveUniform(self: ?*anyopaque, program: u32, index: u32, bufSize: i32, length: *i32, size: *i32, typeVal: *GL, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniform(@ptrCast(self), program, index, bufSize, @ptrCast(length), @ptrCast(size), @ptrCast(typeVal), @ptrCast(name));
    }

    pub fn GlGetActiveAttrib(self: ?*anyopaque, program: u32, index: u32, bufSize: i32, length: *i32, size: *i32, typeVal: *GL, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveAttrib(@ptrCast(self), program, index, bufSize, @ptrCast(length), @ptrCast(size), @ptrCast(typeVal), @ptrCast(name));
    }

    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDetachShader(@ptrCast(self), program, shader);
    }

    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteShader(@ptrCast(self), shader);
    }

    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteProgram(@ptrCast(self), program);
    }

    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateShader(@ptrCast(self), typeVal);
    }

    pub fn GlCreateProgram(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateProgram(@ptrCast(self));
    }

    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompileShader(@ptrCast(self), shader);
    }

    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindAttribLocation(@ptrCast(self), program, index, @ptrCast(name));
    }

    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlAttachShader(@ptrCast(self), program, shader);
    }

    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilMaskSeparate(@ptrCast(self), face, mask);
    }

    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilFuncSeparate(@ptrCast(self), face, func, ref, mask);
    }

    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilOpSeparate(@ptrCast(self), face, sfail, dpfail, dppass);
    }

    pub fn GlDrawBuffers(self: ?*anyopaque, n: i32, bufs: *const GL) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawBuffers(@ptrCast(self), n, @ptrCast(bufs));
    }

    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationSeparate(@ptrCast(self), modeRGB, modeAlpha);
    }

    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsVertexArray(@ptrCast(self), array);
    }

    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenVertexArrays(@ptrCast(self), n, @ptrCast(arrays));
    }

    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteVertexArrays(@ptrCast(self), n, @ptrCast(arrays));
    }

    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindVertexArray(@ptrCast(self), array);
    }

    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFlushMappedBufferRange(@ptrCast(self), target, offset, length);
    }

    pub fn GlMapBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_2_Core_GlMapBufferRange(@ptrCast(self), target, offset, length, access);
    }

    pub fn GlFramebufferTextureLayer(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTextureLayer(@ptrCast(self), target, attachment, texture, level, layer);
    }

    pub fn GlRenderbufferStorageMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlRenderbufferStorageMultisample(@ptrCast(self), target, samples, internalformat, width, height);
    }

    pub fn GlBlitFramebuffer(self: ?*anyopaque, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlitFramebuffer(@ptrCast(self), srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    }

    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenerateMipmap(@ptrCast(self), target);
    }

    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), target, attachment, pname, @ptrCast(params));
    }

    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferRenderbuffer(@ptrCast(self), target, attachment, renderbuffertarget, renderbuffer);
    }

    pub fn GlFramebufferTexture3D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture3D(@ptrCast(self), target, attachment, textarget, texture, level, zoffset);
    }

    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture2D(@ptrCast(self), target, attachment, textarget, texture, level);
    }

    pub fn GlFramebufferTexture1D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture1D(@ptrCast(self), target, attachment, textarget, texture, level);
    }

    pub fn GlCheckFramebufferStatus(self: ?*anyopaque, target: u32) GL {
        return qtc.QOpenGLFunctions_4_2_Core_GlCheckFramebufferStatus(@ptrCast(self), target);
    }

    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenFramebuffers(@ptrCast(self), n, @ptrCast(framebuffers));
    }

    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteFramebuffers(@ptrCast(self), n, @ptrCast(framebuffers));
    }

    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindFramebuffer(@ptrCast(self), target, framebuffer);
    }

    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsFramebuffer(@ptrCast(self), framebuffer);
    }

    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetRenderbufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlRenderbufferStorage(@ptrCast(self), target, internalformat, width, height);
    }

    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenRenderbuffers(@ptrCast(self), n, @ptrCast(renderbuffers));
    }

    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteRenderbuffers(@ptrCast(self), n, @ptrCast(renderbuffers));
    }

    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindRenderbuffer(@ptrCast(self), target, renderbuffer);
    }

    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsRenderbuffer(@ptrCast(self), renderbuffer);
    }

    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_4_2_Core_GlGetStringi(@ptrCast(self), name, index));
    }

    pub fn GlClearBufferfi(self: ?*anyopaque, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferfi(@ptrCast(self), buffer, drawbuffer, depth, stencil);
    }

    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferfv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferuiv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferiv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterIuiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterIiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterIuiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterIiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4ui(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3ui(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2ui(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1ui(@ptrCast(self), location, v0);
    }

    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlGetFragDataLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlBindFragDataLocation(self: ?*anyopaque, program: u32, color: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindFragDataLocation(@ptrCast(self), program, color, @ptrCast(name));
    }

    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformuiv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribIuiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribIiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlVertexAttribIPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribIPointer(@ptrCast(self), index, size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlEndConditionalRender(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndConditionalRender(@ptrCast(self));
    }

    pub fn GlBeginConditionalRender(self: ?*anyopaque, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginConditionalRender(@ptrCast(self), id, mode);
    }

    pub fn GlClampColor(self: ?*anyopaque, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClampColor(@ptrCast(self), target, clamp);
    }

    pub fn GlGetTransformFeedbackVarying(self: ?*anyopaque, program: u32, index: u32, bufSize: i32, length: *i32, size: *i32, typeVal: *GL, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTransformFeedbackVarying(@ptrCast(self), program, index, bufSize, @ptrCast(length), @ptrCast(size), @ptrCast(typeVal), @ptrCast(name));
    }

    pub fn GlTransformFeedbackVaryings(self: ?*anyopaque, program: u32, count: i32, varyings: **const i8, bufferMode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTransformFeedbackVaryings(@ptrCast(self), program, count, @ptrCast(varyings), bufferMode);
    }

    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBufferBase(@ptrCast(self), target, index, buffer);
    }

    pub fn GlBindBufferRange(self: ?*anyopaque, target: u32, index: u32, buffer: u32, offset: i64, size: i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBufferRange(@ptrCast(self), target, index, buffer, offset, size);
    }

    pub fn GlEndTransformFeedback(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndTransformFeedback(@ptrCast(self));
    }

    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginTransformFeedback(@ptrCast(self), primitiveMode);
    }

    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsEnabledi(@ptrCast(self), target, index);
    }

    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisablei(@ptrCast(self), target, index);
    }

    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnablei(@ptrCast(self), target, index);
    }

    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetIntegeriV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: *u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBooleaniV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlColorMaski(self: ?*anyopaque, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlColorMaski(@ptrCast(self), index, r, g, b, a);
    }

    pub fn GlCopyBufferSubData(self: ?*anyopaque, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyBufferSubData(@ptrCast(self), readTarget, writeTarget, readOffset, writeOffset, size);
    }

    pub fn GlUniformBlockBinding(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformBlockBinding(@ptrCast(self), program, uniformBlockIndex, uniformBlockBinding);
    }

    pub fn GlGetActiveUniformBlockName(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformBlockName(@ptrCast(self), program, uniformBlockIndex, bufSize, @ptrCast(length), @ptrCast(uniformBlockName));
    }

    pub fn GlGetActiveUniformBlockiv(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformBlockiv(@ptrCast(self), program, uniformBlockIndex, pname, @ptrCast(params));
    }

    pub fn GlGetUniformBlockIndex(self: ?*anyopaque, program: u32, uniformBlockName: *const i8) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlGetUniformBlockIndex(@ptrCast(self), program, @ptrCast(uniformBlockName));
    }

    pub fn GlGetActiveUniformName(self: ?*anyopaque, program: u32, uniformIndex: u32, bufSize: i32, length: *i32, uniformName: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformName(@ptrCast(self), program, uniformIndex, bufSize, @ptrCast(length), @ptrCast(uniformName));
    }

    pub fn GlGetActiveUniformsiv(self: ?*anyopaque, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformsiv(@ptrCast(self), program, uniformCount, @ptrCast(uniformIndices), pname, @ptrCast(params));
    }

    pub fn GlGetUniformIndices(self: ?*anyopaque, program: u32, uniformCount: i32, uniformNames: **const i8, uniformIndices: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformIndices(@ptrCast(self), program, uniformCount, @ptrCast(uniformNames), @ptrCast(uniformIndices));
    }

    pub fn GlPrimitiveRestartIndex(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPrimitiveRestartIndex(@ptrCast(self), index);
    }

    pub fn GlTexBuffer(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexBuffer(@ptrCast(self), target, internalformat, buffer);
    }

    pub fn GlDrawElementsInstanced(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstanced(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount);
    }

    pub fn GlDrawArraysInstanced(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysInstanced(@ptrCast(self), mode, first, count, instancecount);
    }

    pub fn GlSampleMaski(self: ?*anyopaque, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSampleMaski(@ptrCast(self), index, mask);
    }

    pub fn GlGetMultisamplefv(self: ?*anyopaque, pname: u32, index: u32, val: *f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetMultisamplefv(@ptrCast(self), pname, index, @ptrCast(val));
    }

    pub fn GlTexImage3DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage3DMultisample(@ptrCast(self), target, samples, internalformat, width, height, depth, fixedsamplelocations);
    }

    pub fn GlTexImage2DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage2DMultisample(@ptrCast(self), target, samples, internalformat, width, height, fixedsamplelocations);
    }

    pub fn GlGetSynciv(self: ?*anyopaque, sync: GLsync, pname: u32, bufSize: i32, length: *i32, values: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSynciv(@ptrCast(self), sync, pname, bufSize, @ptrCast(length), @ptrCast(values));
    }

    pub fn GlGetInteger64v(self: ?*anyopaque, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInteger64v(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlWaitSync(self: ?*anyopaque, sync: GLsync, flags: u32, timeout: u64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlWaitSync(@ptrCast(self), sync, flags, timeout);
    }

    pub fn GlClientWaitSync(self: ?*anyopaque, sync: GLsync, flags: u32, timeout: u64) GL {
        return qtc.QOpenGLFunctions_4_2_Core_GlClientWaitSync(@ptrCast(self), sync, flags, timeout);
    }

    pub fn GlDeleteSync(self: ?*anyopaque, sync: GLsync) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteSync(@ptrCast(self), sync);
    }

    pub fn GlIsSync(self: ?*anyopaque, sync: GLsync) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsSync(@ptrCast(self), sync);
    }

    pub fn GlFenceSync(self: ?*anyopaque, condition: u32, flags: u32) GLsync {
        return qtc.QOpenGLFunctions_4_2_Core_GlFenceSync(@ptrCast(self), condition, flags);
    }

    pub fn GlProvokingVertex(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProvokingVertex(@ptrCast(self), mode);
    }

    pub fn GlMultiDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: *const i32, typeVal: u32, indices: ?*anyopaque, drawcount: i32, basevertex: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawElementsBaseVertex(@ptrCast(self), mode, @ptrCast(count), typeVal, @ptrCast(indices), drawcount, @ptrCast(basevertex));
    }

    pub fn GlDrawElementsInstancedBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseVertex(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount, basevertex);
    }

    pub fn GlDrawRangeElementsBaseVertex(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawRangeElementsBaseVertex(@ptrCast(self), mode, start, end, count, typeVal, @ptrCast(indices), basevertex);
    }

    pub fn GlDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsBaseVertex(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), basevertex);
    }

    pub fn GlFramebufferTexture(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture(@ptrCast(self), target, attachment, texture, level);
    }

    pub fn GlGetBufferParameteri64v(self: ?*anyopaque, target: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferParameteri64v(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetInteger64iV(self: ?*anyopaque, target: u32, index: u32, data: *i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInteger64iV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlVertexAttribP4uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP4uiv(@ptrCast(self), index, typeVal, normalized, @ptrCast(value));
    }

    pub fn GlVertexAttribP4ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP4ui(@ptrCast(self), index, typeVal, normalized, value);
    }

    pub fn GlVertexAttribP3uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP3uiv(@ptrCast(self), index, typeVal, normalized, @ptrCast(value));
    }

    pub fn GlVertexAttribP3ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP3ui(@ptrCast(self), index, typeVal, normalized, value);
    }

    pub fn GlVertexAttribP2uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP2uiv(@ptrCast(self), index, typeVal, normalized, @ptrCast(value));
    }

    pub fn GlVertexAttribP2ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP2ui(@ptrCast(self), index, typeVal, normalized, value);
    }

    pub fn GlVertexAttribP1uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP1uiv(@ptrCast(self), index, typeVal, normalized, @ptrCast(value));
    }

    pub fn GlVertexAttribP1ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP1ui(@ptrCast(self), index, typeVal, normalized, value);
    }

    pub fn GlGetQueryObjectui64v(self: ?*anyopaque, id: u32, pname: u32, params: *u64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectui64v(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryObjecti64v(self: ?*anyopaque, id: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjecti64v(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlQueryCounter(self: ?*anyopaque, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlQueryCounter(@ptrCast(self), id, target);
    }

    pub fn GlGetSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterIuiv(@ptrCast(self), sampler, pname, @ptrCast(params));
    }

    pub fn GlGetSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterfv(@ptrCast(self), sampler, pname, @ptrCast(params));
    }

    pub fn GlGetSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterIiv(@ptrCast(self), sampler, pname, @ptrCast(params));
    }

    pub fn GlGetSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameteriv(@ptrCast(self), sampler, pname, @ptrCast(params));
    }

    pub fn GlSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterIuiv(@ptrCast(self), sampler, pname, @ptrCast(param));
    }

    pub fn GlSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterIiv(@ptrCast(self), sampler, pname, @ptrCast(param));
    }

    pub fn GlSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterfv(@ptrCast(self), sampler, pname, @ptrCast(param));
    }

    pub fn GlSamplerParameterf(self: ?*anyopaque, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterf(@ptrCast(self), sampler, pname, param);
    }

    pub fn GlSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameteriv(@ptrCast(self), sampler, pname, @ptrCast(param));
    }

    pub fn GlSamplerParameteri(self: ?*anyopaque, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameteri(@ptrCast(self), sampler, pname, param);
    }

    pub fn GlBindSampler(self: ?*anyopaque, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindSampler(@ptrCast(self), unit, sampler);
    }

    pub fn GlIsSampler(self: ?*anyopaque, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsSampler(@ptrCast(self), sampler);
    }

    pub fn GlDeleteSamplers(self: ?*anyopaque, count: i32, samplers: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteSamplers(@ptrCast(self), count, @ptrCast(samplers));
    }

    pub fn GlGenSamplers(self: ?*anyopaque, count: i32, samplers: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenSamplers(@ptrCast(self), count, @ptrCast(samplers));
    }

    pub fn GlGetFragDataIndex(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlGetFragDataIndex(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlBindFragDataLocationIndexed(self: ?*anyopaque, program: u32, colorNumber: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindFragDataLocationIndexed(@ptrCast(self), program, colorNumber, index, @ptrCast(name));
    }

    pub fn GlVertexAttribDivisor(self: ?*anyopaque, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribDivisor(@ptrCast(self), index, divisor);
    }

    pub fn GlGetQueryIndexediv(self: ?*anyopaque, target: u32, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryIndexediv(@ptrCast(self), target, index, pname, @ptrCast(params));
    }

    pub fn GlEndQueryIndexed(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndQueryIndexed(@ptrCast(self), target, index);
    }

    pub fn GlBeginQueryIndexed(self: ?*anyopaque, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginQueryIndexed(@ptrCast(self), target, index, id);
    }

    pub fn GlDrawTransformFeedbackStream(self: ?*anyopaque, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackStream(@ptrCast(self), mode, id, stream);
    }

    pub fn GlDrawTransformFeedback(self: ?*anyopaque, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedback(@ptrCast(self), mode, id);
    }

    pub fn GlResumeTransformFeedback(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Core_GlResumeTransformFeedback(@ptrCast(self));
    }

    pub fn GlPauseTransformFeedback(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPauseTransformFeedback(@ptrCast(self));
    }

    pub fn GlIsTransformFeedback(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsTransformFeedback(@ptrCast(self), id);
    }

    pub fn GlGenTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenTransformFeedbacks(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlDeleteTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteTransformFeedbacks(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlBindTransformFeedback(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindTransformFeedback(@ptrCast(self), target, id);
    }

    pub fn GlPatchParameterfv(self: ?*anyopaque, pname: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPatchParameterfv(@ptrCast(self), pname, @ptrCast(values));
    }

    pub fn GlPatchParameteri(self: ?*anyopaque, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPatchParameteri(@ptrCast(self), pname, value);
    }

    pub fn GlGetProgramStageiv(self: ?*anyopaque, program: u32, shadertype: u32, pname: u32, values: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramStageiv(@ptrCast(self), program, shadertype, pname, @ptrCast(values));
    }

    pub fn GlGetUniformSubroutineuiv(self: ?*anyopaque, shadertype: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformSubroutineuiv(@ptrCast(self), shadertype, location, @ptrCast(params));
    }

    pub fn GlUniformSubroutinesuiv(self: ?*anyopaque, shadertype: u32, count: i32, indices: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformSubroutinesuiv(@ptrCast(self), shadertype, count, @ptrCast(indices));
    }

    pub fn GlGetActiveSubroutineName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineName(@ptrCast(self), program, shadertype, index, bufsize, @ptrCast(length), @ptrCast(name));
    }

    pub fn GlGetActiveSubroutineUniformName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineUniformName(@ptrCast(self), program, shadertype, index, bufsize, @ptrCast(length), @ptrCast(name));
    }

    pub fn GlGetActiveSubroutineUniformiv(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, pname: u32, values: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineUniformiv(@ptrCast(self), program, shadertype, index, pname, @ptrCast(values));
    }

    pub fn GlGetSubroutineIndex(self: ?*anyopaque, program: u32, shadertype: u32, name: *const i8) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlGetSubroutineIndex(@ptrCast(self), program, shadertype, @ptrCast(name));
    }

    pub fn GlGetSubroutineUniformLocation(self: ?*anyopaque, program: u32, shadertype: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlGetSubroutineUniformLocation(@ptrCast(self), program, shadertype, @ptrCast(name));
    }

    pub fn GlGetUniformdv(self: ?*anyopaque, program: u32, location: i32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformdv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlUniformMatrix4x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x3dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x2dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x4dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x2dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x4dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x3dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2dv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniform4dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4dv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3dv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2dv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1dv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4d(@ptrCast(self), location, x, y, z, w);
    }

    pub fn GlUniform3d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3d(@ptrCast(self), location, x, y, z);
    }

    pub fn GlUniform2d(self: ?*anyopaque, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2d(@ptrCast(self), location, x, y);
    }

    pub fn GlUniform1d(self: ?*anyopaque, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1d(@ptrCast(self), location, x);
    }

    pub fn GlDrawElementsIndirect(self: ?*anyopaque, mode: u32, typeVal: u32, indirect: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsIndirect(@ptrCast(self), mode, typeVal, @ptrCast(indirect));
    }

    pub fn GlDrawArraysIndirect(self: ?*anyopaque, mode: u32, indirect: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysIndirect(@ptrCast(self), mode, @ptrCast(indirect));
    }

    pub fn GlBlendFuncSeparatei(self: ?*anyopaque, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFuncSeparatei(@ptrCast(self), buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    }

    pub fn GlBlendFunci(self: ?*anyopaque, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFunci(@ptrCast(self), buf, src, dst);
    }

    pub fn GlBlendEquationSeparatei(self: ?*anyopaque, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationSeparatei(@ptrCast(self), buf, modeRGB, modeAlpha);
    }

    pub fn GlBlendEquationi(self: ?*anyopaque, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationi(@ptrCast(self), buf, mode);
    }

    pub fn GlMinSampleShading(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMinSampleShading(@ptrCast(self), value);
    }

    pub fn GlGetDoubleiV(self: ?*anyopaque, target: u32, index: u32, data: *f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetDoubleiV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlGetFloatiV(self: ?*anyopaque, target: u32, index: u32, data: *f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetFloatiV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlDepthRangeIndexed(self: ?*anyopaque, index: u32, n: f64, f: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangeIndexed(@ptrCast(self), index, n, f);
    }

    pub fn GlDepthRangeArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangeArrayv(@ptrCast(self), first, count, @ptrCast(v));
    }

    pub fn GlScissorIndexedv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorIndexedv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlScissorIndexed(self: ?*anyopaque, index: u32, left: i32, bottom: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorIndexed(@ptrCast(self), index, left, bottom, width, height);
    }

    pub fn GlScissorArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorArrayv(@ptrCast(self), first, count, @ptrCast(v));
    }

    pub fn GlViewportIndexedfv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportIndexedfv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlViewportIndexedf(self: ?*anyopaque, index: u32, x: f32, y: f32, w: f32, h: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportIndexedf(@ptrCast(self), index, x, y, w, h);
    }

    pub fn GlViewportArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportArrayv(@ptrCast(self), first, count, @ptrCast(v));
    }

    pub fn GlGetVertexAttribLdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribLdv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlVertexAttribLPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribLPointer(@ptrCast(self), index, size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlVertexAttribL4dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL4dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribL3dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL3dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribL2dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL2dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribL1dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL1dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttribL4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL4d(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttribL3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL3d(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttribL2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL2d(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttribL1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL1d(@ptrCast(self), index, x);
    }

    pub fn GlGetProgramPipelineInfoLog(self: ?*anyopaque, pipeline: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramPipelineInfoLog(@ptrCast(self), pipeline, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlValidateProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlValidateProgramPipeline(@ptrCast(self), pipeline);
    }

    pub fn GlProgramUniformMatrix4x3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x3dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3x4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x4dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4x2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x2dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2x4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x4dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3x2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x2dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2x3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x3dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x3fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x4fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x2fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x4fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x2fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x3fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2dv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniformMatrix2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2fv(@ptrCast(self), program, location, count, transpose, @ptrCast(value));
    }

    pub fn GlProgramUniform4uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4uiv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform4ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4ui(@ptrCast(self), program, location, v0, v1, v2, v3);
    }

    pub fn GlProgramUniform4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4dv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform4d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64, v2: f64, v3: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4d(@ptrCast(self), program, location, v0, v1, v2, v3);
    }

    pub fn GlProgramUniform4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4fv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform4f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4f(@ptrCast(self), program, location, v0, v1, v2, v3);
    }

    pub fn GlProgramUniform4iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4iv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform4i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4i(@ptrCast(self), program, location, v0, v1, v2, v3);
    }

    pub fn GlProgramUniform3uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3uiv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform3ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3ui(@ptrCast(self), program, location, v0, v1, v2);
    }

    pub fn GlProgramUniform3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3dv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform3d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3d(@ptrCast(self), program, location, v0, v1, v2);
    }

    pub fn GlProgramUniform3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3fv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform3f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3f(@ptrCast(self), program, location, v0, v1, v2);
    }

    pub fn GlProgramUniform3iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3iv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform3i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3i(@ptrCast(self), program, location, v0, v1, v2);
    }

    pub fn GlProgramUniform2uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2uiv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform2ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2ui(@ptrCast(self), program, location, v0, v1);
    }

    pub fn GlProgramUniform2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2dv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform2d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2d(@ptrCast(self), program, location, v0, v1);
    }

    pub fn GlProgramUniform2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2fv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform2f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2f(@ptrCast(self), program, location, v0, v1);
    }

    pub fn GlProgramUniform2iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2iv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform2i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2i(@ptrCast(self), program, location, v0, v1);
    }

    pub fn GlProgramUniform1uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1uiv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform1ui(self: ?*anyopaque, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1ui(@ptrCast(self), program, location, v0);
    }

    pub fn GlProgramUniform1dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1dv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform1d(self: ?*anyopaque, program: u32, location: i32, v0: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1d(@ptrCast(self), program, location, v0);
    }

    pub fn GlProgramUniform1fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1fv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform1f(self: ?*anyopaque, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1f(@ptrCast(self), program, location, v0);
    }

    pub fn GlProgramUniform1iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1iv(@ptrCast(self), program, location, count, @ptrCast(value));
    }

    pub fn GlProgramUniform1i(self: ?*anyopaque, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1i(@ptrCast(self), program, location, v0);
    }

    pub fn GlGetProgramPipelineiv(self: ?*anyopaque, pipeline: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramPipelineiv(@ptrCast(self), pipeline, pname, @ptrCast(params));
    }

    pub fn GlIsProgramPipeline(self: ?*anyopaque, pipeline: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsProgramPipeline(@ptrCast(self), pipeline);
    }

    pub fn GlGenProgramPipelines(self: ?*anyopaque, n: i32, pipelines: *u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenProgramPipelines(@ptrCast(self), n, @ptrCast(pipelines));
    }

    pub fn GlDeleteProgramPipelines(self: ?*anyopaque, n: i32, pipelines: *const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteProgramPipelines(@ptrCast(self), n, @ptrCast(pipelines));
    }

    pub fn GlBindProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindProgramPipeline(@ptrCast(self), pipeline);
    }

    pub fn GlCreateShaderProgramv(self: ?*anyopaque, typeVal: u32, count: i32, strings: **const i8) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateShaderProgramv(@ptrCast(self), typeVal, count, @ptrCast(strings));
    }

    pub fn GlActiveShaderProgram(self: ?*anyopaque, pipeline: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlActiveShaderProgram(@ptrCast(self), pipeline, program);
    }

    pub fn GlUseProgramStages(self: ?*anyopaque, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUseProgramStages(@ptrCast(self), pipeline, stages, program);
    }

    pub fn GlProgramParameteri(self: ?*anyopaque, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramParameteri(@ptrCast(self), program, pname, value);
    }

    pub fn GlProgramBinary(self: ?*anyopaque, program: u32, binaryFormat: u32, binary: ?*anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramBinary(@ptrCast(self), program, binaryFormat, @ptrCast(binary), length);
    }

    pub fn GlGetProgramBinary(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, binaryFormat: *GL, binary: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramBinary(@ptrCast(self), program, bufSize, @ptrCast(length), @ptrCast(binaryFormat), @ptrCast(binary));
    }

    pub fn GlClearDepthf(self: ?*anyopaque, dd: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearDepthf(@ptrCast(self), dd);
    }

    pub fn GlDepthRangef(self: ?*anyopaque, n: f32, f: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangef(@ptrCast(self), n, f);
    }

    pub fn GlGetShaderPrecisionFormat(self: ?*anyopaque, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderPrecisionFormat(@ptrCast(self), shadertype, precisiontype, @ptrCast(range), @ptrCast(precision));
    }

    pub fn GlShaderBinary(self: ?*anyopaque, count: i32, shaders: *const u32, binaryformat: u32, binary: ?*anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlShaderBinary(@ptrCast(self), count, @ptrCast(shaders), binaryformat, @ptrCast(binary), length);
    }

    pub fn GlReleaseShaderCompiler(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_4_2_Core_GlReleaseShaderCompiler(@ptrCast(self));
    }

    pub fn GlTexStorage3D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage3D(@ptrCast(self), target, levels, internalformat, width, height, depth);
    }

    pub fn GlTexStorage2D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage2D(@ptrCast(self), target, levels, internalformat, width, height);
    }

    pub fn GlTexStorage1D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage1D(@ptrCast(self), target, levels, internalformat, width);
    }

    pub fn GlMemoryBarrier(self: ?*anyopaque, barriers: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMemoryBarrier(@ptrCast(self), barriers);
    }

    pub fn GlBindImageTexture(self: ?*anyopaque, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindImageTexture(@ptrCast(self), unit, texture, level, layered, layer, access, format);
    }

    pub fn GlGetActiveAtomicCounterBufferiv(self: ?*anyopaque, program: u32, bufferIndex: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveAtomicCounterBufferiv(@ptrCast(self), program, bufferIndex, pname, @ptrCast(params));
    }

    pub fn GlGetInternalformativ(self: ?*anyopaque, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: *i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInternalformativ(@ptrCast(self), target, internalformat, pname, bufSize, @ptrCast(params));
    }

    pub fn GlDrawTransformFeedbackStreamInstanced(self: ?*anyopaque, mode: u32, id: u32, stream: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackStreamInstanced(@ptrCast(self), mode, id, stream, instancecount);
    }

    pub fn GlDrawTransformFeedbackInstanced(self: ?*anyopaque, mode: u32, id: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackInstanced(@ptrCast(self), mode, id, instancecount);
    }

    pub fn GlDrawElementsInstancedBaseVertexBaseInstance(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32, basevertex: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseVertexBaseInstance(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount, basevertex, baseinstance);
    }

    pub fn GlDrawElementsInstancedBaseInstance(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseInstance(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount, baseinstance);
    }

    pub fn GlDrawArraysInstancedBaseInstance(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysInstancedBaseInstance(@ptrCast(self), mode, first, count, instancecount, baseinstance);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_Delete(@ptrCast(self));
    }
};
