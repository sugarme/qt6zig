const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglfunctions_1_1.html
pub const qopenglfunctions_1_1 = struct {

    /// New constructs a new QOpenGLFunctions_1_1 object.
    pub fn New() QtC.QOpenGLFunctions_1_1 {
        return qtc.QOpenGLFunctions_1_1_new();
    }


    pub fn InitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_1_1_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_1_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFunctions_1_1_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_1_GlViewport(@ptrCast(self), x, y, width, height);
    }

    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_1_1_GlDepthRange(@ptrCast(self), nearVal, farVal);
    }

    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_1_1_GlIsEnabled(@ptrCast(self), cap);
    }

    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexLevelParameteriv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexLevelParameterfv(@ptrCast(self), target, level, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexImage(@ptrCast(self), target, level, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlGetString(self: ?*anyopaque, name: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_1_1_GlGetString(@ptrCast(self), name));
    }

    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_1_GlGetIntegerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetFloatv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetError(self: ?*anyopaque, ) GL {
        return qtc.QOpenGLFunctions_1_1_GlGetError(@ptrCast(self));
    }

    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_1_1_GlGetDoublev(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_1_1_GlGetBooleanv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlReadPixels(@ptrCast(self), x, y, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlReadBuffer(@ptrCast(self), mode);
    }

    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlPixelStorei(@ptrCast(self), pname, param);
    }

    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlPixelStoref(@ptrCast(self), pname, param);
    }

    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_1_1_GlDepthFunc(@ptrCast(self), func);
    }

    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_1_1_GlStencilOp(@ptrCast(self), fail, zfail, zpass);
    }

    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_1_1_GlStencilFunc(@ptrCast(self), func, ref, mask);
    }

    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlLogicOp(@ptrCast(self), opcode);
    }

    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_1_1_GlBlendFunc(@ptrCast(self), sfactor, dfactor);
    }

    pub fn GlFlush(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlFlush(@ptrCast(self));
    }

    pub fn GlFinish(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlFinish(@ptrCast(self));
    }

    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_1_1_GlEnable(@ptrCast(self), cap);
    }

    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_1_1_GlDisable(@ptrCast(self), cap);
    }

    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_1_1_GlDepthMask(@ptrCast(self), flag);
    }

    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_1_GlColorMask(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_1_GlStencilMask(@ptrCast(self), mask);
    }

    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_1_1_GlClearDepth(@ptrCast(self), depth);
    }

    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_1_1_GlClearStencil(@ptrCast(self), s);
    }

    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_1_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_1_GlClear(@ptrCast(self), mask);
    }

    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlDrawBuffer(@ptrCast(self), mode);
    }

    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlTexImage1D(@ptrCast(self), target, level, internalformat, width, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexParameteri(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexParameterf(@ptrCast(self), target, pname, param);
    }

    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_1_GlScissor(@ptrCast(self), x, y, width, height);
    }

    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlPolygonMode(@ptrCast(self), face, mode);
    }

    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_1_1_GlPointSize(@ptrCast(self), size);
    }

    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_1_1_GlLineWidth(@ptrCast(self), width);
    }

    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlHint(@ptrCast(self), target, mode);
    }

    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlFrontFace(@ptrCast(self), mode);
    }

    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlCullFace(@ptrCast(self), mode);
    }

    pub fn GlIndexubv(self: ?*anyopaque, c: *const u8) void {
        qtc.QOpenGLFunctions_1_1_GlIndexubv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexub(self: ?*anyopaque, c: u8) void {
        qtc.QOpenGLFunctions_1_1_GlIndexub(@ptrCast(self), c);
    }

    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_1_1_GlIsTexture(@ptrCast(self), texture);
    }

    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_1_1_GlGenTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_1_1_GlDeleteTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_1_1_GlBindTexture(@ptrCast(self), target, texture);
    }

    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlTexSubImage1D(@ptrCast(self), target, level, xoffset, width, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_1_GlCopyTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, x, y, width, height);
    }

    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_1_GlCopyTexSubImage1D(@ptrCast(self), target, level, xoffset, x, y, width);
    }

    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_1_1_GlCopyTexImage2D(@ptrCast(self), target, level, internalformat, x, y, width, height, border);
    }

    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_1_1_GlCopyTexImage1D(@ptrCast(self), target, level, internalformat, x, y, width, border);
    }

    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_1_1_GlPolygonOffset(@ptrCast(self), factor, units);
    }

    pub fn GlGetPointerv(self: ?*anyopaque, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlGetPointerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlDrawElements(@ptrCast(self), mode, count, typeVal, @ptrCast(indices));
    }

    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_1_1_GlDrawArrays(@ptrCast(self), mode, first, count);
    }

    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_1_GlTranslatef(@ptrCast(self), x, y, z);
    }

    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_1_GlTranslated(@ptrCast(self), x, y, z);
    }

    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_1_GlScalef(@ptrCast(self), x, y, z);
    }

    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_1_GlScaled(@ptrCast(self), x, y, z);
    }

    pub fn GlRotatef(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_1_GlRotatef(@ptrCast(self), angle, x, y, z);
    }

    pub fn GlRotated(self: ?*anyopaque, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_1_GlRotated(@ptrCast(self), angle, x, y, z);
    }

    pub fn GlPushMatrix(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlPushMatrix(@ptrCast(self));
    }

    pub fn GlPopMatrix(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlPopMatrix(@ptrCast(self));
    }

    pub fn GlOrtho(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_1_GlOrtho(@ptrCast(self), left, right, bottom, top, zNear, zFar);
    }

    pub fn GlMultMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlMultMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMultMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlMultMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlMatrixMode(@ptrCast(self), mode);
    }

    pub fn GlLoadMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlLoadMatrixd(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlLoadMatrixf(@ptrCast(self), @ptrCast(m));
    }

    pub fn GlLoadIdentity(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlLoadIdentity(@ptrCast(self));
    }

    pub fn GlFrustum(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_1_GlFrustum(@ptrCast(self), left, right, bottom, top, zNear, zFar);
    }

    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_1_1_GlIsList(@ptrCast(self), list);
    }

    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexGeniv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexGenfv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexGendv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexEnviv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetTexEnvfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: *u8) void {
        qtc.QOpenGLFunctions_1_1_GlGetPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: *u16) void {
        qtc.QOpenGLFunctions_1_1_GlGetPixelMapusv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: *u32) void {
        qtc.QOpenGLFunctions_1_1_GlGetPixelMapuiv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetPixelMapfv(@ptrCast(self), mapVal, @ptrCast(values));
    }

    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_1_GlGetMaterialiv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetMaterialfv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: *i32) void {
        qtc.QOpenGLFunctions_1_1_GlGetMapiv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetMapfv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: *f64) void {
        qtc.QOpenGLFunctions_1_1_GlGetMapdv(@ptrCast(self), target, query, @ptrCast(v));
    }

    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_1_GlGetLightiv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlGetLightfv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: *f64) void {
        qtc.QOpenGLFunctions_1_1_GlGetClipPlane(@ptrCast(self), plane, @ptrCast(equation));
    }

    pub fn GlDrawPixels(self: ?*anyopaque, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlDrawPixels(@ptrCast(self), width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlCopyPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_1_1_GlCopyPixels(@ptrCast(self), x, y, width, height, typeVal);
    }

    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u16) void {
        qtc.QOpenGLFunctions_1_1_GlPixelMapusv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u32) void {
        qtc.QOpenGLFunctions_1_1_GlPixelMapuiv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlPixelMapfv(@ptrCast(self), mapVal, mapsize, @ptrCast(values));
    }

    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlPixelTransferi(@ptrCast(self), pname, param);
    }

    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlPixelTransferf(@ptrCast(self), pname, param);
    }

    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_1_1_GlPixelZoom(@ptrCast(self), xfactor, yfactor);
    }

    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_1_1_GlAlphaFunc(@ptrCast(self), func, ref);
    }

    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_1_1_GlEvalPoint2(@ptrCast(self), i, j);
    }

    pub fn GlEvalMesh2(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_1_1_GlEvalMesh2(@ptrCast(self), mode, i1Val, i2Val, j1, j2);
    }

    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_1_1_GlEvalPoint1(@ptrCast(self), i);
    }

    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_1_1_GlEvalMesh1(@ptrCast(self), mode, i1Val, i2Val);
    }

    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlEvalCoord2fv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_1_1_GlEvalCoord2f(@ptrCast(self), u, v);
    }

    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlEvalCoord2dv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_1_1_GlEvalCoord2d(@ptrCast(self), u, v);
    }

    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlEvalCoord1fv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_1_1_GlEvalCoord1f(@ptrCast(self), u);
    }

    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlEvalCoord1dv(@ptrCast(self), @ptrCast(u));
    }

    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_1_1_GlEvalCoord1d(@ptrCast(self), u);
    }

    pub fn GlMapGrid2f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_1_1_GlMapGrid2f(@ptrCast(self), un, u1Val, u2Val, vn, v1, v2);
    }

    pub fn GlMapGrid2d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_1_1_GlMapGrid2d(@ptrCast(self), un, u1Val, u2Val, vn, v1, v2);
    }

    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_1_1_GlMapGrid1f(@ptrCast(self), un, u1Val, u2Val);
    }

    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_1_1_GlMapGrid1d(@ptrCast(self), un, u1Val, u2Val);
    }

    pub fn GlMap2f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlMap2f(@ptrCast(self), target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, @ptrCast(points));
    }

    pub fn GlMap2d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlMap2d(@ptrCast(self), target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, @ptrCast(points));
    }

    pub fn GlMap1f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlMap1f(@ptrCast(self), target, u1Val, u2Val, stride, order, @ptrCast(points));
    }

    pub fn GlMap1d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlMap1d(@ptrCast(self), target, u1Val, u2Val, stride, order, @ptrCast(points));
    }

    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_1_GlPushAttrib(@ptrCast(self), mask);
    }

    pub fn GlPopAttrib(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlPopAttrib(@ptrCast(self));
    }

    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_1_1_GlAccum(@ptrCast(self), op, value);
    }

    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_1_GlIndexMask(@ptrCast(self), mask);
    }

    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_1_1_GlClearIndex(@ptrCast(self), c);
    }

    pub fn GlClearAccum(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_1_GlClearAccum(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_1_1_GlPushName(@ptrCast(self), name);
    }

    pub fn GlPopName(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlPopName(@ptrCast(self));
    }

    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_1_1_GlPassThrough(@ptrCast(self), token);
    }

    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_1_1_GlLoadName(@ptrCast(self), name);
    }

    pub fn GlInitNames(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlInitNames(@ptrCast(self));
    }

    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_1_1_GlRenderMode(@ptrCast(self), mode);
    }

    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: *u32) void {
        qtc.QOpenGLFunctions_1_1_GlSelectBuffer(@ptrCast(self), size, @ptrCast(buffer));
    }

    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: *f32) void {
        qtc.QOpenGLFunctions_1_1_GlFeedbackBuffer(@ptrCast(self), size, typeVal, @ptrCast(buffer));
    }

    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexGeniv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexGeni(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexGenfv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexGenf(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexGendv(@ptrCast(self), coord, pname, @ptrCast(params));
    }

    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexGend(@ptrCast(self), coord, pname, param);
    }

    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexEnviv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexEnvi(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexEnvfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexEnvf(@ptrCast(self), target, pname, param);
    }

    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlShadeModel(@ptrCast(self), mode);
    }

    pub fn GlPolygonStipple(self: ?*anyopaque, mask: *const u8) void {
        qtc.QOpenGLFunctions_1_1_GlPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlMaterialiv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlMateriali(@ptrCast(self), face, pname, param);
    }

    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlMaterialfv(@ptrCast(self), face, pname, @ptrCast(params));
    }

    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlMaterialf(@ptrCast(self), face, pname, param);
    }

    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_1_1_GlLineStipple(@ptrCast(self), factor, pattern);
    }

    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlLightModeliv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlLightModeli(@ptrCast(self), pname, param);
    }

    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlLightModelfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlLightModelf(@ptrCast(self), pname, param);
    }

    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlLightiv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlLighti(@ptrCast(self), light, pname, param);
    }

    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlLightfv(@ptrCast(self), light, pname, @ptrCast(params));
    }

    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlLightf(@ptrCast(self), light, pname, param);
    }

    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlFogiv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_1_GlFogi(@ptrCast(self), pname, param);
    }

    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlFogfv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_1_GlFogf(@ptrCast(self), pname, param);
    }

    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlColorMaterial(@ptrCast(self), face, mode);
    }

    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlClipPlane(@ptrCast(self), plane, @ptrCast(equation));
    }

    pub fn GlVertex4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlVertex4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_1_GlVertex4s(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex4i(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex4f(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlVertex4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_1_GlVertex4d(@ptrCast(self), x, y, z, w);
    }

    pub fn GlVertex3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlVertex3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_1_GlVertex3s(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex3i(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex3f(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlVertex3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_1_GlVertex3d(@ptrCast(self), x, y, z);
    }

    pub fn GlVertex2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlVertex2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_1_GlVertex2s(@ptrCast(self), x, y);
    }

    pub fn GlVertex2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex2i(@ptrCast(self), x, y);
    }

    pub fn GlVertex2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_1_GlVertex2f(@ptrCast(self), x, y);
    }

    pub fn GlVertex2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlVertex2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_1_GlVertex2d(@ptrCast(self), x, y);
    }

    pub fn GlTexCoord4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4s(self: ?*anyopaque, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord4s(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4i(self: ?*anyopaque, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord4i(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4f(self: ?*anyopaque, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord4f(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord4d(self: ?*anyopaque, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord4d(@ptrCast(self), s, t, r, q);
    }

    pub fn GlTexCoord3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord3s(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord3i(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord3f(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord3d(@ptrCast(self), s, t, r);
    }

    pub fn GlTexCoord2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord2s(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord2i(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord2f(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord2d(@ptrCast(self), s, t);
    }

    pub fn GlTexCoord1sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord1sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord1s(@ptrCast(self), s);
    }

    pub fn GlTexCoord1iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord1iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord1i(@ptrCast(self), s);
    }

    pub fn GlTexCoord1fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord1fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord1f(@ptrCast(self), s);
    }

    pub fn GlTexCoord1dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord1dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoord1d(@ptrCast(self), s);
    }

    pub fn GlRectsv(self: ?*anyopaque, v1: *const i16, v2: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlRectsv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRects(self: ?*anyopaque, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_1_1_GlRects(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectiv(self: ?*anyopaque, v1: *const i32, v2: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlRectiv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRecti(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_1_1_GlRecti(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectfv(self: ?*anyopaque, v1: *const f32, v2: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlRectfv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRectf(self: ?*anyopaque, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_1_1_GlRectf(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRectdv(self: ?*anyopaque, v1: *const f64, v2: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlRectdv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    pub fn GlRectd(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_1_1_GlRectd(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GlRasterPos4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos4s(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos4i(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos4f(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos4d(@ptrCast(self), x, y, z, w);
    }

    pub fn GlRasterPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos3s(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos3i(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos3f(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos3d(@ptrCast(self), x, y, z);
    }

    pub fn GlRasterPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos2sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos2s(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos2iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos2i(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos2fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos2f(@ptrCast(self), x, y);
    }

    pub fn GlRasterPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos2dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_1_GlRasterPos2d(@ptrCast(self), x, y);
    }

    pub fn GlNormal3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3s(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3i(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3f(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3d(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlNormal3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_1_1_GlNormal3b(@ptrCast(self), nx, ny, nz);
    }

    pub fn GlIndexsv(self: ?*anyopaque, c: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlIndexsv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_1_1_GlIndexs(@ptrCast(self), c);
    }

    pub fn GlIndexiv(self: ?*anyopaque, c: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlIndexiv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_1_1_GlIndexi(@ptrCast(self), c);
    }

    pub fn GlIndexfv(self: ?*anyopaque, c: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlIndexfv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_1_1_GlIndexf(@ptrCast(self), c);
    }

    pub fn GlIndexdv(self: ?*anyopaque, c: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlIndexdv(@ptrCast(self), @ptrCast(c));
    }

    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_1_1_GlIndexd(@ptrCast(self), c);
    }

    pub fn GlEnd(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlEnd(@ptrCast(self));
    }

    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: *const u8) void {
        qtc.QOpenGLFunctions_1_1_GlEdgeFlagv(@ptrCast(self), @ptrCast(flag));
    }

    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_1_1_GlEdgeFlag(@ptrCast(self), flag);
    }

    pub fn GlColor4usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_1_1_GlColor4usv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4us(self: ?*anyopaque, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_1_1_GlColor4us(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_1_1_GlColor4uiv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4ui(self: ?*anyopaque, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_1_1_GlColor4ui(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_1_1_GlColor4ubv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4ub(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_1_GlColor4ub(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlColor4sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4s(self: ?*anyopaque, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_1_1_GlColor4s(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlColor4iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4i(self: ?*anyopaque, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_1_1_GlColor4i(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlColor4fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4f(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_1_GlColor4f(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlColor4dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4d(self: ?*anyopaque, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_1_1_GlColor4d(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor4bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_1_1_GlColor4bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor4b(self: ?*anyopaque, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_1_1_GlColor4b(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_1_1_GlColor3usv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_1_GlColor3us(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_1_1_GlColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_1_GlColor3ui(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_1_1_GlColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_1_GlColor3ub(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_1_GlColor3sv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_1_GlColor3s(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_1_GlColor3iv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_1_GlColor3i(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlColor3fv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_1_GlColor3f(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_1_GlColor3dv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_1_GlColor3d(@ptrCast(self), red, green, blue);
    }

    pub fn GlColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_1_1_GlColor3bv(@ptrCast(self), @ptrCast(v));
    }

    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_1_GlColor3b(@ptrCast(self), red, green, blue);
    }

    pub fn GlBitmap(self: ?*anyopaque, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8) void {
        qtc.QOpenGLFunctions_1_1_GlBitmap(@ptrCast(self), width, height, xorig, yorig, xmove, ymove, @ptrCast(bitmap));
    }

    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlBegin(@ptrCast(self), mode);
    }

    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_1_1_GlListBase(@ptrCast(self), base);
    }

    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_1_1_GlGenLists(@ptrCast(self), range);
    }

    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_1_1_GlDeleteLists(@ptrCast(self), list, range);
    }

    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlCallLists(@ptrCast(self), n, typeVal, @ptrCast(lists));
    }

    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_1_1_GlCallList(@ptrCast(self), list);
    }

    pub fn GlEndList(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlEndList(@ptrCast(self));
    }

    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_1_GlNewList(@ptrCast(self), list, mode);
    }

    pub fn GlPushClientAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_1_GlPushClientAttrib(@ptrCast(self), mask);
    }

    pub fn GlPopClientAttrib(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_1_1_GlPopClientAttrib(@ptrCast(self));
    }

    pub fn GlPrioritizeTextures(self: ?*anyopaque, n: i32, textures: *const u32, priorities: *const f32) void {
        qtc.QOpenGLFunctions_1_1_GlPrioritizeTextures(@ptrCast(self), n, @ptrCast(textures), @ptrCast(priorities));
    }

    pub fn GlAreTexturesResident(self: ?*anyopaque, n: i32, textures: *const u32, residences: *u8) u8 {
        return qtc.QOpenGLFunctions_1_1_GlAreTexturesResident(@ptrCast(self), n, @ptrCast(textures), @ptrCast(residences));
    }

    pub fn GlVertexPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlVertexPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlTexCoordPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlTexCoordPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlNormalPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlNormalPointer(@ptrCast(self), typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlInterleavedArrays(self: ?*anyopaque, format: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlInterleavedArrays(@ptrCast(self), format, stride, @ptrCast(pointer));
    }

    pub fn GlIndexPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlIndexPointer(@ptrCast(self), typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlEnableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_1_1_GlEnableClientState(@ptrCast(self), array);
    }

    pub fn GlEdgeFlagPointer(self: ?*anyopaque, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlEdgeFlagPointer(@ptrCast(self), stride, @ptrCast(pointer));
    }

    pub fn GlDisableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_1_1_GlDisableClientState(@ptrCast(self), array);
    }

    pub fn GlColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_GlColorPointer(@ptrCast(self), size, typeVal, stride, @ptrCast(pointer));
    }

    pub fn GlArrayElement(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_1_1_GlArrayElement(@ptrCast(self), i);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_Delete(@ptrCast(self));
    }
};
