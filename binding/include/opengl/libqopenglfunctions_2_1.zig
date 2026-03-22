const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglfunctions_2_1.html
pub const qopenglfunctions_2_1 = struct {

    /// New constructs a new QOpenGLFunctions_2_1 object.
    pub fn New() QtC.QOpenGLFunctions_2_1 {
        return qtc.QOpenGLFunctions_2_1_new();
    }


    pub fn InitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_2_1_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLFunctions_2_1_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_2_1_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlViewport(@ptrCast(self), x, y, width, height);
    }

    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_2_1_GlDepthRange(@ptrCast(self), nearVal, farVal);
    }

    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsEnabled(@ptrCast(self), cap);
    }

    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexLevelParameteriv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexLevelParameterfv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexImage(@ptrCast(self), target, level, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlGetString(self: ?*anyopaque, name: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_2_1_GlGetString(@ptrCast(self), name));
    }

    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetIntegerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetFloatv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetDoublev(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_2_1_GlGetBooleanv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlReadPixels(@ptrCast(self), x, y, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlReadBuffer(@ptrCast(self), mode);
    }

    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelStorei(@ptrCast(self), pname, param);
    }

    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelStoref(@ptrCast(self), pname, param);
    }

    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDepthFunc(@ptrCast(self), func);
    }

    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilOp(@ptrCast(self), fail, zfail, zpass);
    }

    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilFunc(@ptrCast(self), func, ref, mask);
    }

    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlLogicOp(@ptrCast(self), opcode);
    }

    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendFunc(@ptrCast(self), sfactor, dfactor);
    }

    pub fn GlFlush(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlFlush(@ptrCast(self));
    }

    pub fn GlFinish(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlFinish(@ptrCast(self));
    }

    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_2_1_GlEnable(@ptrCast(self), cap);
    }

    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDisable(@ptrCast(self), cap);
    }

    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_2_1_GlDepthMask(@ptrCast(self), flag);
    }

    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_2_1_GlColorMask(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilMask(@ptrCast(self), mask);
    }

    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_2_1_GlClearDepth(@ptrCast(self), depth);
    }

    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_2_1_GlClearStencil(@ptrCast(self), s);
    }

    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_2_1_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlClear(@ptrCast(self), mask);
    }

    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDrawBuffer(@ptrCast(self), mode);
    }

    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlTexImage1D(@ptrCast(self), target, level, internalformat, width, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexParameteri(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexParameterf(@ptrCast(self), target, pname, param);
    }

    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlScissor(@ptrCast(self), x, y, width, height);
    }

    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlPolygonMode(@ptrCast(self), face, mode);
    }

    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPointSize(@ptrCast(self), size);
    }

    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_2_1_GlLineWidth(@ptrCast(self), width);
    }

    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlHint(@ptrCast(self), target, mode);
    }

    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlFrontFace(@ptrCast(self), mode);
    }

    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlCullFace(@ptrCast(self), mode);
    }

    pub fn GlIndexubv(self: ?*anyopaque, c: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlIndexubv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexub(self: ?*anyopaque, c: u8) void {
        qtc.QOpenGLFunctions_2_1_GlIndexub(@ptrCast(self), c);
    }

    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsTexture(@ptrCast(self), texture);
    }

    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGenTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBindTexture(@ptrCast(self), target, texture);
    }

    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, x, y, width, height);
    }

    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexSubImage1D(@ptrCast(self), target, level, xoffset, x, y, width);
    }

    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexImage2D(@ptrCast(self), target, level, internalformat, x, y, width, height, border);
    }

    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexImage1D(@ptrCast(self), target, level, internalformat, x, y, width, border);
    }

    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPolygonOffset(@ptrCast(self), factor, units);
    }

    pub fn GlGetPointerv(self: ?*anyopaque, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetPointerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlDrawElements(@ptrCast(self), mode, count, typeVal, @ptrCast(indices));
    }

    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_2_1_GlDrawArrays(@ptrCast(self), mode, first, count);
    }

    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, x, y, width, height);
    }

    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlTexImage3D(@ptrCast(self), target, level, internalformat, width, height, depth, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlDrawRangeElements(@ptrCast(self), mode, start, end, count, typeVal, @ptrCast(indices));
    }

    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendEquation(@ptrCast(self), mode);
    }

    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetCompressedTexImage(@ptrCast(self), target, level, @ptrCast(img));
    }

    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexSubImage3D(@ptrCast(self), target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexImage1D(@ptrCast(self), target, level, internalformat, width, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexImage3D(@ptrCast(self), target, level, internalformat, width, height, depth, border, imageSize, @ptrCast(data));
    }

    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_2_1_GlSampleCoverage(@ptrCast(self), value, invert);
    }

    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_2_1_GlActiveTexture(@ptrCast(self), texture);
    }

    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlPointParameteriv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlPointParameteri(@ptrCast(self), pname, param);
    }

    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlPointParameterfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPointParameterf(@ptrCast(self), pname, param);
    }

    pub fn GlMultiDrawElements(self: ?*anyopaque, mode: u32, count: *const i32, typeVal: u32, indices: ?*anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiDrawElements(@ptrCast(self), mode, @ptrCast(count), typeVal, @ptrCast(indices), drawcount);
    }

    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: *const i32, count: *const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiDrawArrays(@ptrCast(self), mode, @ptrCast(first), @ptrCast(count), drawcount);
    }

    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendFuncSeparate(@ptrCast(self), sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    }

    pub fn GlGetBufferPointerv(self: ?*anyopaque, target: u32, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetBufferPointerv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetBufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlUnmapBuffer(@ptrCast(self), target);
    }

    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_2_1_GlMapBuffer(@ptrCast(self), target, access);
    }

    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: ?*anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBufferData(@ptrCast(self), target, size, @ptrCast(data), usage);
    }

    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsBuffer(@ptrCast(self), buffer);
    }

    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGenBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBindBuffer(@ptrCast(self), target, buffer);
    }

    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGetQueryObjectuiv(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetQueryObjectiv(@ptrCast(self), id, pname, @ptrCast(params));
    }

    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetQueryiv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_2_1_GlEndQuery(@ptrCast(self), target);
    }

    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBeginQuery(@ptrCast(self), target, id);
    }

    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsQuery(@ptrCast(self), id);
    }

    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteQueries(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGenQueries(@ptrCast(self), n, @ptrCast(ids));
    }

    pub fn GlVertexAttribPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttribPointer(@ptrCast(self), index, size, typeVal, normalized, stride, @ptrCast(pointer));
    }

    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_2_1_GlValidateProgram(@ptrCast(self), program);
    }

    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform4iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform3iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform2iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform1iv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform4fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform3fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform2fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform1fv(@ptrCast(self), location, count, @ptrCast(value));
    }

    pub fn GlUniform4i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform4i(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform3i(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform2i(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform1i(@ptrCast(self), location, v0);
    }

    pub fn GlUniform4f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform4f(@ptrCast(self), location, v0, v1, v2, v3);
    }

    pub fn GlUniform3f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform3f(@ptrCast(self), location, v0, v1, v2);
    }

    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform2f(@ptrCast(self), location, v0, v1);
    }

    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform1f(@ptrCast(self), location, v0);
    }

    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_2_1_GlUseProgram(@ptrCast(self), program);
    }

    pub fn GlShaderSource(self: ?*anyopaque, shader: u32, count: i32, stringVal: **const i8, length: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlShaderSource(@ptrCast(self), shader, count, @ptrCast(stringVal), @ptrCast(length));
    }

    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_2_1_GlLinkProgram(@ptrCast(self), program);
    }

    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsShader(@ptrCast(self), shader);
    }

    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsProgram(@ptrCast(self), program);
    }

    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetVertexAttribPointerv(@ptrCast(self), index, pname, @ptrCast(pointer));
    }

    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetVertexAttribiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetVertexAttribfv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetVertexAttribdv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetUniformiv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetUniformfv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_2_1_GlGetUniformLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, source: *i8) void {
        qtc.QOpenGLFunctions_2_1_GlGetShaderSource(@ptrCast(self), shader, bufSize, @ptrCast(length), @ptrCast(source));
    }

    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_2_1_GlGetShaderInfoLog(@ptrCast(self), shader, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetShaderiv(@ptrCast(self), shader, pname, @ptrCast(params));
    }

    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_2_1_GlGetProgramInfoLog(@ptrCast(self), program, bufSize, @ptrCast(length), @ptrCast(infoLog));
    }

    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetProgramiv(@ptrCast(self), program, pname, @ptrCast(params));
    }

    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_2_1_GlGetAttribLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxCount: i32, count: *i32, obj: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGetAttachedShaders(@ptrCast(self), program, maxCount, @ptrCast(count), @ptrCast(obj));
    }

    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_2_1_GlEnableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDisableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDetachShader(@ptrCast(self), program, shader);
    }

    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteShader(@ptrCast(self), shader);
    }

    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteProgram(@ptrCast(self), program);
    }

    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_2_1_GlCreateShader(@ptrCast(self), typeVal);
    }

    pub fn GlCreateProgram(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLFunctions_2_1_GlCreateProgram(@ptrCast(self));
    }

    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_2_1_GlCompileShader(@ptrCast(self), shader);
    }

    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlBindAttribLocation(@ptrCast(self), program, index, @ptrCast(name));
    }

    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_2_1_GlAttachShader(@ptrCast(self), program, shader);
    }

    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilMaskSeparate(@ptrCast(self), face, mask);
    }

    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilFuncSeparate(@ptrCast(self), face, func, ref, mask);
    }

    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilOpSeparate(@ptrCast(self), face, sfail, dpfail, dppass);
    }

    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendEquationSeparate(@ptrCast(self), modeRGB, modeAlpha);
    }

    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix4x3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix3x4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix4x2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix2x4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix3x2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix2x3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTranslatef(@ptrCast(self), x, y, z);
    }

    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTranslated(@ptrCast(self), x, y, z);
    }

    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlScalef(@ptrCast(self), x, y, z);
    }

    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlScaled(@ptrCast(self), x, y, z);
    }

    pub fn GlRotatef(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRotatef(@ptrCast(self), angle, x, y, z);
    }

    pub fn GlRotated(self: ?*anyopaque, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRotated(@ptrCast(self), angle, x, y, z);
    }

    pub fn GlPushMatrix(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlPushMatrix(@ptrCast(self));
    }

    pub fn GlPopMatrix(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlPopMatrix(@ptrCast(self));
    }

    pub fn GlOrtho(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_2_1_GlOrtho(@ptrCast(self), left, right, bottom, top, zNear, zFar);
    }

    pub fn GlMultMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMultMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlMatrixMode(@ptrCast(self), mode);
    }

    pub fn GlLoadMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlLoadMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlLoadMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadIdentity(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlLoadIdentity(@ptrCast(self));
    }

    pub fn GlFrustum(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_2_1_GlFrustum(@ptrCast(self), left, right, bottom, top, zNear, zFar);
    }

    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsList(@ptrCast(self), list);
    }

    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexGeniv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexGenfv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexGendv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexEnviv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexEnvfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: *u8) void {
        qtc.QOpenGLFunctions_2_1_GlGetPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: *u16) void {
        qtc.QOpenGLFunctions_2_1_GlGetPixelMapusv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGetPixelMapuiv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetPixelMapfv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMaterialiv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMaterialfv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMapiv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMapfv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetMapdv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetLightiv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetLightfv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetClipPlane(@ptrCast(self), plane, @ptrCast(equation));
    }

    pub fn GlDrawPixels(self: ?*anyopaque, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlDrawPixels(@ptrCast(self), width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlCopyPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyPixels(@ptrCast(self), x, y, width, height, typeVal);
    }

    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlPixelMapusv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelMapuiv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelMapfv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelTransferi(@ptrCast(self), pname, param);
    }

    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelTransferf(@ptrCast(self), pname, param);
    }

    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelZoom(@ptrCast(self), xfactor, yfactor);
    }

    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_2_1_GlAlphaFunc(@ptrCast(self), func, ref);
    }

    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalPoint2(@ptrCast(self), i, j);
    }

    pub fn GlEvalMesh2(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalMesh2(@ptrCast(self), mode, i1Val, i2Val, j1, j2);
    }

    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalPoint1(@ptrCast(self), i);
    }

    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalMesh1(@ptrCast(self), mode, i1Val, i2Val);
    }

    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord2fv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord2f(@ptrCast(self), u, v);
    }

    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord2dv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord2d(@ptrCast(self), u, v);
    }

    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord1fv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord1f(@ptrCast(self), u);
    }

    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord1dv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord1d(@ptrCast(self), u);
    }

    pub fn GlMapGrid2f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMapGrid2f(@ptrCast(self), un, u1Val, u2Val, vn, v1, v2);
    }

    pub fn GlMapGrid2d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMapGrid2d(@ptrCast(self), un, u1Val, u2Val, vn, v1, v2);
    }

    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMapGrid1f(@ptrCast(self), un, u1Val, u2Val);
    }

    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMapGrid1d(@ptrCast(self), un, u1Val, u2Val);
    }

    pub fn GlMap2f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMap2f(@ptrCast(self), target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, @ptrCast(points));
    }

    pub fn GlMap2d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMap2d(@ptrCast(self), target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, @ptrCast(points));
    }

    pub fn GlMap1f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMap1f(@ptrCast(self), target, u1Val, u2Val, stride, order, @ptrCast(points));
    }

    pub fn GlMap1d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMap1d(@ptrCast(self), target, u1Val, u2Val, stride, order, @ptrCast(points));
    }

    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlPushAttrib(@ptrCast(self), mask);
    }

    pub fn GlPopAttrib(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlPopAttrib(@ptrCast(self));
    }

    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_2_1_GlAccum(@ptrCast(self), op, value);
    }

    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexMask(@ptrCast(self), mask);
    }

    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_2_1_GlClearIndex(@ptrCast(self), c);
    }

    pub fn GlClearAccum(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_2_1_GlClearAccum(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_2_1_GlPushName(@ptrCast(self), name);
    }

    pub fn GlPopName(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlPopName(@ptrCast(self));
    }

    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPassThrough(@ptrCast(self), token);
    }

    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_2_1_GlLoadName(@ptrCast(self), name);
    }

    pub fn GlInitNames(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlInitNames(@ptrCast(self));
    }

    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_2_1_GlRenderMode(@ptrCast(self), mode);
    }

    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlSelectBuffer(@ptrCast(self), size, @ptrCast(buffer));
    }

    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlFeedbackBuffer(@ptrCast(self), size, typeVal, @ptrCast(buffer));
    }

    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexGeniv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexGeni(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexGenfv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexGenf(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexGendv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexGend(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexEnviv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexEnvi(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexEnvfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexEnvf(@ptrCast(self), target, pname, param);
    }

    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlShadeModel(@ptrCast(self), mode);
    }

    pub fn GlPolygonStipple(self: ?*anyopaque, mask: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMaterialiv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMateriali(@ptrCast(self), face, pname, param);
    }

    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMaterialfv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMaterialf(@ptrCast(self), face, pname, param);
    }

    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_2_1_GlLineStipple(@ptrCast(self), factor, pattern);
    }

    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlLightModeliv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlLightModeli(@ptrCast(self), pname, param);
    }

    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlLightModelfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlLightModelf(@ptrCast(self), pname, param);
    }

    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlLightiv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlLighti(@ptrCast(self), light, pname, param);
    }

    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlLightfv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlLightf(@ptrCast(self), light, pname, param);
    }

    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlFogiv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlFogi(@ptrCast(self), pname, param);
    }

    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlFogfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlFogf(@ptrCast(self), pname, param);
    }

    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlColorMaterial(@ptrCast(self), face, mode);
    }

    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlClipPlane(@ptrCast(self), plane, @ptrCast(equation));
    }

    pub fn GlVertex4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4s(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4i(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4f(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4d(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3s(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3i(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3f(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3d(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2s(@ptrCast(self), x, y);
    }

    pub fn GlVertex2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2i(@ptrCast(self), x, y);
    }

    pub fn GlVertex2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2f(@ptrCast(self), x, y);
    }

    pub fn GlVertex2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2d(@ptrCast(self), x, y);
    }

    pub fn GlTexCoord4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4s(self: ?*anyopaque, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4s(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4i(self: ?*anyopaque, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4i(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4f(self: ?*anyopaque, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4f(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4d(self: ?*anyopaque, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4d(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3s(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3i(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3f(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3d(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2s(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2i(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2f(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2d(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord1sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1s(@ptrCast(self), s);
    }

    pub fn GlTexCoord1iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1i(@ptrCast(self), s);
    }

    pub fn GlTexCoord1fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1f(@ptrCast(self), s);
    }

    pub fn GlTexCoord1dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1d(@ptrCast(self), s);
    }

    pub fn GlRectsv(self: ?*anyopaque, v1: *const i16, v2: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlRectsv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRects(self: ?*anyopaque, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_2_1_GlRects(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectiv(self: ?*anyopaque, v1: *const i32, v2: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlRectiv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRecti(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_2_1_GlRecti(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectfv(self: ?*anyopaque, v1: *const f32, v2: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlRectfv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRectf(self: ?*anyopaque, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRectf(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectdv(self: ?*anyopaque, v1: *const f64, v2: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlRectdv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRectd(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRectd(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRasterPos4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4s(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4i(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4f(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4d(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3s(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3i(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3f(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3d(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2s(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2i(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2f(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2d(@ptrCast(self), x, y);
    }

    pub fn GlNormal3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3s(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3i(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3f(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3d(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3b(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlIndexsv(self: ?*anyopaque, c: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlIndexsv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_2_1_GlIndexs(@ptrCast(self), c);
    }

    pub fn GlIndexiv(self: ?*anyopaque, c: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexiv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexi(@ptrCast(self), c);
    }

    pub fn GlIndexfv(self: ?*anyopaque, c: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexfv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexf(@ptrCast(self), c);
    }

    pub fn GlIndexdv(self: ?*anyopaque, c: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlIndexdv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_2_1_GlIndexd(@ptrCast(self), c);
    }

    pub fn GlEnd(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlEnd(@ptrCast(self));
    }

    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlEdgeFlagv(@ptrCast(self), @ptrCast(flag));
    }

    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_2_1_GlEdgeFlag(@ptrCast(self), flag);
    }

    pub fn GlColor4usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlColor4usv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4us(self: ?*anyopaque, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_2_1_GlColor4us(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4uiv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4ui(self: ?*anyopaque, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4ui(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlColor4ubv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4ub(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_2_1_GlColor4ub(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlColor4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4s(self: ?*anyopaque, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_2_1_GlColor4s(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4i(self: ?*anyopaque, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4i(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4f(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4f(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlColor4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4d(self: ?*anyopaque, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_2_1_GlColor4d(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlColor4bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4b(self: ?*anyopaque, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_2_1_GlColor4b(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlColor3usv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_2_1_GlColor3us(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3ui(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_2_1_GlColor3ub(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlColor3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_2_1_GlColor3s(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3i(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3f(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlColor3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_2_1_GlColor3d(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlColor3bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_2_1_GlColor3b(@ptrCast(self), red, green, blue);
    }

    pub fn GlBitmap(self: ?*anyopaque, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlBitmap(@ptrCast(self), width, height, xorig, yorig, xmove, ymove, @ptrCast(bitmap));
    }

    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBegin(@ptrCast(self), mode);
    }

    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_2_1_GlListBase(@ptrCast(self), base);
    }

    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_2_1_GlGenLists(@ptrCast(self), range);
    }

    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteLists(@ptrCast(self), list, range);
    }

    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlCallLists(@ptrCast(self), n, typeVal, @ptrCast(lists));
    }

    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_2_1_GlCallList(@ptrCast(self), list);
    }

    pub fn GlEndList(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlEndList(@ptrCast(self));
    }

    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlNewList(@ptrCast(self), list, mode);
    }

    pub fn GlPushClientAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlPushClientAttrib(@ptrCast(self), mask);
    }

    pub fn GlPopClientAttrib(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_2_1_GlPopClientAttrib(@ptrCast(self));
    }

    pub fn GlPrioritizeTextures(self: ?*anyopaque, n: i32, textures: *const u32, priorities: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlPrioritizeTextures(@ptrCast(self), n, @ptrCast(textures), @ptrCast(priorities));
    }

    pub fn GlAreTexturesResident(self: ?*anyopaque, n: i32, textures: *const u32, residences: *u8) u8 {
        return qtc.QOpenGLFunctions_2_1_GlAreTexturesResident(@ptrCast(self), n, @ptrCast(textures), @ptrCast(residences));
    }

    pub fn GlVertexPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlVertexPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlTexCoordPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoordPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlNormalPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlNormalPointer(@ptrCast(self), typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlInterleavedArrays(self: ?*anyopaque, format: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlInterleavedArrays(@ptrCast(self), format, stride, @ptrCast(pointer));
    }

    pub fn GlIndexPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlIndexPointer(@ptrCast(self), typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlEnableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_2_1_GlEnableClientState(@ptrCast(self), array);
    }

    pub fn GlEdgeFlagPointer(self: ?*anyopaque, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlEdgeFlagPointer(@ptrCast(self), stride, @ptrCast(pointer));
    }

    pub fn GlDisableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDisableClientState(@ptrCast(self), array);
    }

    pub fn GlColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlColorPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlArrayElement(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_2_1_GlArrayElement(@ptrCast(self), i);
    }

    pub fn GlResetMinmax(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_2_1_GlResetMinmax(@ptrCast(self), target);
    }

    pub fn GlResetHistogram(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_2_1_GlResetHistogram(@ptrCast(self), target);
    }

    pub fn GlMinmax(self: ?*anyopaque, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_2_1_GlMinmax(@ptrCast(self), target, internalformat, sink);
    }

    pub fn GlHistogram(self: ?*anyopaque, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_2_1_GlHistogram(@ptrCast(self), target, width, internalformat, sink);
    }

    pub fn GlGetMinmaxParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMinmaxParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetMinmaxParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMinmaxParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetMinmax(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetMinmax(@ptrCast(self), target, reset, format, typeVal, @ptrCast(values));
    }

    pub fn GlGetHistogramParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetHistogramParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetHistogramParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetHistogramParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetHistogram(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetHistogram(@ptrCast(self), target, reset, format, typeVal, @ptrCast(values));
    }

    pub fn GlSeparableFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlSeparableFilter2D(@ptrCast(self), target, internalformat, width, height, format, typeVal, @ptrCast(row), @ptrCast(column));
    }

    pub fn GlGetSeparableFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque, span: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetSeparableFilter(@ptrCast(self), target, format, typeVal, @ptrCast(row), @ptrCast(column), @ptrCast(span));
    }

    pub fn GlGetConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetConvolutionParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetConvolutionParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetConvolutionFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetConvolutionFilter(@ptrCast(self), target, format, typeVal, @ptrCast(image));
    }

    pub fn GlCopyConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyConvolutionFilter2D(@ptrCast(self), target, internalformat, x, y, width, height);
    }

    pub fn GlCopyConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyConvolutionFilter1D(@ptrCast(self), target, internalformat, x, y, width);
    }

    pub fn GlConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlConvolutionParameteri(self: ?*anyopaque, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionParameteri(@ptrCast(self), target, pname, params);
    }

    pub fn GlConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlConvolutionParameterf(self: ?*anyopaque, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionParameterf(@ptrCast(self), target, pname, params);
    }

    pub fn GlConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionFilter2D(@ptrCast(self), target, internalformat, width, height, format, typeVal, @ptrCast(image));
    }

    pub fn GlConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionFilter1D(@ptrCast(self), target, internalformat, width, format, typeVal, @ptrCast(image));
    }

    pub fn GlCopyColorSubTable(self: ?*anyopaque, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyColorSubTable(@ptrCast(self), target, start, x, y, width);
    }

    pub fn GlColorSubTable(self: ?*anyopaque, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlColorSubTable(@ptrCast(self), target, start, count, format, typeVal, @ptrCast(data));
    }

    pub fn GlGetColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetColorTableParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetColorTableParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetColorTable(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlGetColorTable(@ptrCast(self), target, format, typeVal, @ptrCast(table));
    }

    pub fn GlCopyColorTable(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyColorTable(@ptrCast(self), target, internalformat, x, y, width);
    }

    pub fn GlColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlColorTableParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlColorTableParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlColorTable(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlColorTable(@ptrCast(self), target, internalformat, width, format, typeVal, @ptrCast(table));
    }

    pub fn GlMultTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMultTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlLoadTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlLoadTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMultiTexCoord4sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4sv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord4s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4s(@ptrCast(self), target, s, t, r, q);
    }

    pub fn GlMultiTexCoord4iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4iv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord4i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4i(@ptrCast(self), target, s, t, r, q);
    }

    pub fn GlMultiTexCoord4fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4fv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord4f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4f(@ptrCast(self), target, s, t, r, q);
    }

    pub fn GlMultiTexCoord4dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4dv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord4d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4d(@ptrCast(self), target, s, t, r, q);
    }

    pub fn GlMultiTexCoord3sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3sv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord3s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3s(@ptrCast(self), target, s, t, r);
    }

    pub fn GlMultiTexCoord3iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3iv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord3i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3i(@ptrCast(self), target, s, t, r);
    }

    pub fn GlMultiTexCoord3fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3fv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord3f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3f(@ptrCast(self), target, s, t, r);
    }

    pub fn GlMultiTexCoord3dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3dv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord3d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3d(@ptrCast(self), target, s, t, r);
    }

    pub fn GlMultiTexCoord2sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2sv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord2s(self: ?*anyopaque, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2s(@ptrCast(self), target, s, t);
    }

    pub fn GlMultiTexCoord2iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2iv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord2i(self: ?*anyopaque, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2i(@ptrCast(self), target, s, t);
    }

    pub fn GlMultiTexCoord2fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2fv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord2f(self: ?*anyopaque, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2f(@ptrCast(self), target, s, t);
    }

    pub fn GlMultiTexCoord2dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2dv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord2d(self: ?*anyopaque, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2d(@ptrCast(self), target, s, t);
    }

    pub fn GlMultiTexCoord1sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1sv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord1s(self: ?*anyopaque, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1s(@ptrCast(self), target, s);
    }

    pub fn GlMultiTexCoord1iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1iv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord1i(self: ?*anyopaque, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1i(@ptrCast(self), target, s);
    }

    pub fn GlMultiTexCoord1fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1fv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord1f(self: ?*anyopaque, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1f(@ptrCast(self), target, s);
    }

    pub fn GlMultiTexCoord1dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1dv(@ptrCast(self), target, @ptrCast(v));
    }

    pub fn GlMultiTexCoord1d(self: ?*anyopaque, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1d(@ptrCast(self), target, s);
    }

    pub fn GlClientActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_2_1_GlClientActiveTexture(@ptrCast(self), texture);
    }

    pub fn GlWindowPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3s(@ptrCast(self), x, y, z);
    }

    pub fn GlWindowPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3i(@ptrCast(self), x, y, z);
    }

    pub fn GlWindowPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3f(@ptrCast(self), x, y, z);
    }

    pub fn GlWindowPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3d(@ptrCast(self), x, y, z);
    }

    pub fn GlWindowPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2s(@ptrCast(self), x, y);
    }

    pub fn GlWindowPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2i(@ptrCast(self), x, y);
    }

    pub fn GlWindowPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2f(@ptrCast(self), x, y);
    }

    pub fn GlWindowPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlWindowPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2d(@ptrCast(self), x, y);
    }

    pub fn GlSecondaryColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColorPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlSecondaryColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3usv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3us(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3ui(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3ub(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3s(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3i(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3f(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3d(@ptrCast(self), red, green, blue);
    }

    pub fn GlSecondaryColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlSecondaryColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3b(@ptrCast(self), red, green, blue);
    }

    pub fn GlFogCoordPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoordPointer(@ptrCast(self), typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlFogCoorddv(self: ?*anyopaque, coord: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoorddv(@ptrCast(self), @ptrCast(coord));
    }

    pub fn GlFogCoordd(self: ?*anyopaque, coord: f64) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoordd(@ptrCast(self), coord);
    }

    pub fn GlFogCoordfv(self: ?*anyopaque, coord: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoordfv(@ptrCast(self), @ptrCast(coord));
    }

    pub fn GlFogCoordf(self: ?*anyopaque, coord: f32) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoordf(@ptrCast(self), coord);
    }

    pub fn GlVertexAttrib4usv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4usv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4uiv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4ubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4ubv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4s(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttrib4iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4iv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4fv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4f(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttrib4dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4d(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttrib4bv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4bv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nusv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nusv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nuiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nuiv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nubv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nub(self: ?*anyopaque, index: u32, x: u8, y: u8, z: u8, w: u8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nub(@ptrCast(self), index, x, y, z, w);
    }

    pub fn GlVertexAttrib4Nsv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nsv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Niv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Niv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib4Nbv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nbv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib3sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib3s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3s(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttrib3fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3fv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib3f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3f(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttrib3dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3d(@ptrCast(self), index, x, y, z);
    }

    pub fn GlVertexAttrib2sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib2s(self: ?*anyopaque, index: u32, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2s(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttrib2fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2fv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib2f(self: ?*anyopaque, index: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2f(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttrib2dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2d(@ptrCast(self), index, x, y);
    }

    pub fn GlVertexAttrib1sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1sv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib1s(self: ?*anyopaque, index: u32, x: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1s(@ptrCast(self), index, x);
    }

    pub fn GlVertexAttrib1fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1fv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib1f(self: ?*anyopaque, index: u32, x: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1f(@ptrCast(self), index, x);
    }

    pub fn GlVertexAttrib1dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1dv(@ptrCast(self), index, @ptrCast(v));
    }

    pub fn GlVertexAttrib1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1d(@ptrCast(self), index, x);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_Delete(@ptrCast(self));
    }
};
