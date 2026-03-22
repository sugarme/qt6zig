const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglfunctions_3_1.html
pub const qopenglfunctions_3_1 = struct {

    /// New constructs a new QOpenGLFunctions_3_1 object.
    pub fn New() QtC.QOpenGLFunctions_3_1 {
        return qtc.QOpenGLFunctions_3_1_new();
    }


    pub fn InitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_3_1_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLFunctions_3_1_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_3_1_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlViewport(@ptrCast(self), x, y, width, height);
    }

    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_3_1_GlDepthRange(@ptrCast(self), nearVal, farVal);
    }

    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsEnabled(@ptrCast(self), cap);
    }

    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexLevelParameteriv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexLevelParameterfv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexImage(@ptrCast(self), target, level, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlGetString(self: ?*anyopaque, name: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_3_1_GlGetString(@ptrCast(self), name));
    }

    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetIntegerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetFloatv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_3_1_GlGetDoublev(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_3_1_GlGetBooleanv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlReadPixels(@ptrCast(self), x, y, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlReadBuffer(@ptrCast(self), mode);
    }

    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_1_GlPixelStorei(@ptrCast(self), pname, param);
    }

    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_1_GlPixelStoref(@ptrCast(self), pname, param);
    }

    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDepthFunc(@ptrCast(self), func);
    }

    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilOp(@ptrCast(self), fail, zfail, zpass);
    }

    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilFunc(@ptrCast(self), func, ref, mask);
    }

    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlLogicOp(@ptrCast(self), opcode);
    }

    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendFunc(@ptrCast(self), sfactor, dfactor);
    }

    pub fn GlFlush(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_3_1_GlFlush(@ptrCast(self));
    }

    pub fn GlFinish(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_3_1_GlFinish(@ptrCast(self));
    }

    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_3_1_GlEnable(@ptrCast(self), cap);
    }

    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDisable(@ptrCast(self), cap);
    }

    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_3_1_GlDepthMask(@ptrCast(self), flag);
    }

    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_3_1_GlColorMask(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilMask(@ptrCast(self), mask);
    }

    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_3_1_GlClearDepth(@ptrCast(self), depth);
    }

    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_3_1_GlClearStencil(@ptrCast(self), s);
    }

    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_1_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlClear(@ptrCast(self), mask);
    }

    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDrawBuffer(@ptrCast(self), mode);
    }

    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexImage1D(@ptrCast(self), target, level, internalformat, width, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameteri(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameterf(@ptrCast(self), target, pname, param);
    }

    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlScissor(@ptrCast(self), x, y, width, height);
    }

    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlPolygonMode(@ptrCast(self), face, mode);
    }

    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_3_1_GlPointSize(@ptrCast(self), size);
    }

    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_3_1_GlLineWidth(@ptrCast(self), width);
    }

    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlHint(@ptrCast(self), target, mode);
    }

    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlFrontFace(@ptrCast(self), mode);
    }

    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlCullFace(@ptrCast(self), mode);
    }

    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsTexture(@ptrCast(self), texture);
    }

    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindTexture(@ptrCast(self), target, texture);
    }

    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, x, y, width, height);
    }

    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexSubImage1D(@ptrCast(self), target, level, xoffset, x, y, width);
    }

    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexImage2D(@ptrCast(self), target, level, internalformat, x, y, width, height, border);
    }

    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexImage1D(@ptrCast(self), target, level, internalformat, x, y, width, border);
    }

    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_3_1_GlPolygonOffset(@ptrCast(self), factor, units);
    }

    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlDrawElements(@ptrCast(self), mode, count, typeVal, @ptrCast(indices));
    }

    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_3_1_GlDrawArrays(@ptrCast(self), mode, first, count);
    }

    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, x, y, width, height);
    }

    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexImage3D(@ptrCast(self), target, level, internalformat, width, height, depth, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlDrawRangeElements(@ptrCast(self), mode, start, end, count, typeVal, @ptrCast(indices));
    }

    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendEquation(@ptrCast(self), mode);
    }

    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetCompressedTexImage(@ptrCast(self), target, level, @ptrCast(img));
    }

    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexImage1D(@ptrCast(self), target, level, internalformat, width, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexImage3D(@ptrCast(self), target, level, internalformat, width, height, depth, border, imageSize, @ptrCast(data));
    }

    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_3_1_GlSampleCoverage(@ptrCast(self), value, invert);
    }

    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_3_1_GlActiveTexture(@ptrCast(self), texture);
    }

    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlPointParameteriv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_1_GlPointParameteri(@ptrCast(self), pname, param);
    }

    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlPointParameterfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_1_GlPointParameterf(@ptrCast(self), pname, param);
    }

    pub fn GlMultiDrawElements(self: ?*anyopaque, mode: u32, count: *const i32, typeVal: u32, indices: ?*anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_3_1_GlMultiDrawElements(@ptrCast(self), mode, @ptrCast(count), typeVal, @ptrCast(indices), drawcount);
    }

    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: *const i32, count: *const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_3_1_GlMultiDrawArrays(@ptrCast(self), mode, @ptrCast(first), @ptrCast(count), drawcount);
    }

    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendFuncSeparate(@ptrCast(self), sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    }

    pub fn GlGetBufferPointerv(self: ?*anyopaque, target: u32, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetBufferPointerv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetBufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlUnmapBuffer(@ptrCast(self), target);
    }

    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_3_1_GlMapBuffer(@ptrCast(self), target, access);
    }

    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: ?*anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBufferData(@ptrCast(self), target, size, @ptrCast(data), usage);
    }

    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsBuffer(@ptrCast(self), buffer);
    }

    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindBuffer(@ptrCast(self), target, buffer);
    }

    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetQueryObjectuiv(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetQueryObjectiv(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetQueryiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_3_1_GlEndQuery(@ptrCast(self), target);
    }

    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBeginQuery(@ptrCast(self), target, id);
    }

    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsQuery(@ptrCast(self), id);
    }

    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteQueries(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenQueries(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlVertexAttribPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlVertexAttribPointer(@ptrCast(self), index, size, typeVal, normalized, stride, @ptrCast(pointer));
    }

    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_3_1_GlValidateProgram(@ptrCast(self), program);
    }

    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4i(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3i(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2i(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1i(@ptrCast(self), location, v0);
    }

    pub fn GlUniform4f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4f(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3f(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2f(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1f(@ptrCast(self), location, v0);
    }

    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUseProgram(@ptrCast(self), program);
    }

    pub fn GlShaderSource(self: ?*anyopaque, shader: u32, count: i32, stringVal: **const i8, length: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlShaderSource(@ptrCast(self), shader, count, @ptrCast(stringVal), @ptrCast(length));
    }

    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_3_1_GlLinkProgram(@ptrCast(self), program);
    }

    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsShader(@ptrCast(self), shader);
    }

    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsProgram(@ptrCast(self), program);
    }

    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribPointerv(@ptrCast(self), index, pname, @ptrCast(pointer));
    }

    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribfv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribdv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetUniformiv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetUniformfv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_3_1_GlGetUniformLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, source: *i8) void {
        qtc.QOpenGLFunctions_3_1_GlGetShaderSource(@ptrCast(self), shader, bufSize, @ptrCast(length), @ptrCast(source));
    }

    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_3_1_GlGetShaderInfoLog(@ptrCast(self), shader, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetShaderiv(@ptrCast(self), shader, pname, @ptrCast(params));
    }

    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_3_1_GlGetProgramInfoLog(@ptrCast(self), program, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetProgramiv(@ptrCast(self), program, pname, @ptrCast(params));
    }

    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_3_1_GlGetAttribLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxCount: i32, count: *i32, obj: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetAttachedShaders(@ptrCast(self), program, maxCount, @ptrCast(count), @ptrCast(obj));
    }

    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlEnableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDisableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDetachShader(@ptrCast(self), program, shader);
    }

    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteShader(@ptrCast(self), shader);
    }

    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteProgram(@ptrCast(self), program);
    }

    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_3_1_GlCreateShader(@ptrCast(self), typeVal);
    }

    pub fn GlCreateProgram(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLFunctions_3_1_GlCreateProgram(@ptrCast(self));
    }

    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_3_1_GlCompileShader(@ptrCast(self), shader);
    }

    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_3_1_GlBindAttribLocation(@ptrCast(self), program, index, @ptrCast(name));
    }

    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_3_1_GlAttachShader(@ptrCast(self), program, shader);
    }

    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilMaskSeparate(@ptrCast(self), face, mask);
    }

    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilFuncSeparate(@ptrCast(self), face, func, ref, mask);
    }

    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilOpSeparate(@ptrCast(self), face, sfail, dpfail, dppass);
    }

    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendEquationSeparate(@ptrCast(self), modeRGB, modeAlpha);
    }

    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix4x3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix3x4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix4x2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix2x4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix3x2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix2x3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsVertexArray(@ptrCast(self), array);
    }

    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenVertexArrays(@ptrCast(self), n, @ptrCast(arrays));
    }

    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteVertexArrays(@ptrCast(self), n, @ptrCast(arrays));
    }

    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindVertexArray(@ptrCast(self), array);
    }

    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64) void {
        qtc.QOpenGLFunctions_3_1_GlFlushMappedBufferRange(@ptrCast(self), target, offset, length);
    }

    pub fn GlMapBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_3_1_GlMapBufferRange(@ptrCast(self), target, offset, length, access);
    }

    pub fn GlFramebufferTextureLayer(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferTextureLayer(@ptrCast(self), target, attachment, texture, level, layer);
    }

    pub fn GlRenderbufferStorageMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlRenderbufferStorageMultisample(@ptrCast(self), target, samples, internalformat, width, height);
    }

    pub fn GlBlitFramebuffer(self: ?*anyopaque, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlitFramebuffer(@ptrCast(self), srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    }

    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenerateMipmap(@ptrCast(self), target);
    }

    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), target, attachment, pname, @ptrCast(params));
    }

    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferRenderbuffer(@ptrCast(self), target, attachment, renderbuffertarget, renderbuffer);
    }

    pub fn GlFramebufferTexture3D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferTexture3D(@ptrCast(self), target, attachment, textarget, texture, level, zoffset);
    }

    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferTexture2D(@ptrCast(self), target, attachment, textarget, texture, level);
    }

    pub fn GlFramebufferTexture1D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferTexture1D(@ptrCast(self), target, attachment, textarget, texture, level);
    }

    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenFramebuffers(@ptrCast(self), n, @ptrCast(framebuffers));
    }

    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteFramebuffers(@ptrCast(self), n, @ptrCast(framebuffers));
    }

    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindFramebuffer(@ptrCast(self), target, framebuffer);
    }

    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsFramebuffer(@ptrCast(self), framebuffer);
    }

    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetRenderbufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlRenderbufferStorage(@ptrCast(self), target, internalformat, width, height);
    }

    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenRenderbuffers(@ptrCast(self), n, @ptrCast(renderbuffers));
    }

    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteRenderbuffers(@ptrCast(self), n, @ptrCast(renderbuffers));
    }

    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindRenderbuffer(@ptrCast(self), target, renderbuffer);
    }

    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsRenderbuffer(@ptrCast(self), renderbuffer);
    }

    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_3_1_GlGetStringi(@ptrCast(self), name, index));
    }

    pub fn GlClearBufferfi(self: ?*anyopaque, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_3_1_GlClearBufferfi(@ptrCast(self), buffer, drawbuffer, depth, stencil);
    }

    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_3_1_GlClearBufferfv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlClearBufferuiv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlClearBufferiv(@ptrCast(self), buffer, drawbuffer, @ptrCast(value));
    }

    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexParameterIuiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexParameterIiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameterIuiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameterIiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1uiv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4ui(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3ui(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2ui(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1ui(@ptrCast(self), location, v0);
    }

    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_3_1_GlGetFragDataLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlBindFragDataLocation(self: ?*anyopaque, program: u32, color: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_3_1_GlBindFragDataLocation(@ptrCast(self), program, color, @ptrCast(name));
    }

    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetUniformuiv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribIuiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribIiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlVertexAttribIPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlVertexAttribIPointer(@ptrCast(self), index, size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlEndConditionalRender(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_3_1_GlEndConditionalRender(@ptrCast(self));
    }

    pub fn GlBeginConditionalRender(self: ?*anyopaque, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBeginConditionalRender(@ptrCast(self), id, mode);
    }

    pub fn GlClampColor(self: ?*anyopaque, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_3_1_GlClampColor(@ptrCast(self), target, clamp);
    }

    pub fn GlTransformFeedbackVaryings(self: ?*anyopaque, program: u32, count: i32, varyings: **const i8, bufferMode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlTransformFeedbackVaryings(@ptrCast(self), program, count, @ptrCast(varyings), bufferMode);
    }

    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindBufferBase(@ptrCast(self), target, index, buffer);
    }

    pub fn GlBindBufferRange(self: ?*anyopaque, target: u32, index: u32, buffer: u32, offset: i64, size: i64) void {
        qtc.QOpenGLFunctions_3_1_GlBindBufferRange(@ptrCast(self), target, index, buffer, offset, size);
    }

    pub fn GlEndTransformFeedback(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_3_1_GlEndTransformFeedback(@ptrCast(self));
    }

    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBeginTransformFeedback(@ptrCast(self), primitiveMode);
    }

    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsEnabledi(@ptrCast(self), target, index);
    }

    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDisablei(@ptrCast(self), target, index);
    }

    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlEnablei(@ptrCast(self), target, index);
    }

    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetIntegeriV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: *u8) void {
        qtc.QOpenGLFunctions_3_1_GlGetBooleaniV(@ptrCast(self), target, index, @ptrCast(data));
    }

    pub fn GlColorMaski(self: ?*anyopaque, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_3_1_GlColorMaski(@ptrCast(self), index, r, g, b, a);
    }

    pub fn GlCopyBufferSubData(self: ?*anyopaque, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64) void {
        qtc.QOpenGLFunctions_3_1_GlCopyBufferSubData(@ptrCast(self), readTarget, writeTarget, readOffset, writeOffset, size);
    }

    pub fn GlUniformBlockBinding(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformBlockBinding(@ptrCast(self), program, uniformBlockIndex, uniformBlockBinding);
    }

    pub fn GlGetActiveUniformBlockName(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8) void {
        qtc.QOpenGLFunctions_3_1_GlGetActiveUniformBlockName(@ptrCast(self), program, uniformBlockIndex, bufSize, @ptrCast(length), @ptrCast(uniformBlockName));
    }

    pub fn GlGetActiveUniformBlockiv(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetActiveUniformBlockiv(@ptrCast(self), program, uniformBlockIndex, pname, @ptrCast(params));
    }

    pub fn GlGetUniformBlockIndex(self: ?*anyopaque, program: u32, uniformBlockName: *const i8) u32 {
        return qtc.QOpenGLFunctions_3_1_GlGetUniformBlockIndex(@ptrCast(self), program, @ptrCast(uniformBlockName));
    }

    pub fn GlGetActiveUniformName(self: ?*anyopaque, program: u32, uniformIndex: u32, bufSize: i32, length: *i32, uniformName: *i8) void {
        qtc.QOpenGLFunctions_3_1_GlGetActiveUniformName(@ptrCast(self), program, uniformIndex, bufSize, @ptrCast(length), @ptrCast(uniformName));
    }

    pub fn GlGetActiveUniformsiv(self: ?*anyopaque, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetActiveUniformsiv(@ptrCast(self), program, uniformCount, @ptrCast(uniformIndices), pname, @ptrCast(params));
    }

    pub fn GlGetUniformIndices(self: ?*anyopaque, program: u32, uniformCount: i32, uniformNames: **const i8, uniformIndices: *u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetUniformIndices(@ptrCast(self), program, uniformCount, @ptrCast(uniformNames), @ptrCast(uniformIndices));
    }

    pub fn GlPrimitiveRestartIndex(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlPrimitiveRestartIndex(@ptrCast(self), index);
    }

    pub fn GlTexBuffer(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlTexBuffer(@ptrCast(self), target, internalformat, buffer);
    }

    pub fn GlDrawElementsInstanced(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_3_1_GlDrawElementsInstanced(@ptrCast(self), mode, count, typeVal, @ptrCast(indices), instancecount);
    }

    pub fn GlDrawArraysInstanced(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_3_1_GlDrawArraysInstanced(@ptrCast(self), mode, first, count, instancecount);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_Delete(@ptrCast(self));
    }
};
