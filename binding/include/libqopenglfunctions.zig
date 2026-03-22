const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglfunctions.html
pub const qopenglfunctions = struct {

    /// New constructs a new QOpenGLFunctions object.
    pub fn New(other: ?*anyopaque) QtC.QOpenGLFunctions {
        return qtc.QOpenGLFunctions_new(@ptrCast(other));
    }


    /// New2 constructs a new QOpenGLFunctions object.
    pub fn New2() QtC.QOpenGLFunctions {
        return qtc.QOpenGLFunctions_new2();
    }


    /// New3 constructs a new QOpenGLFunctions object.
    pub fn New3(context: ?*anyopaque) QtC.QOpenGLFunctions {
        return qtc.QOpenGLFunctions_new3(@ptrCast(context));
    }


    /// New4 constructs a new QOpenGLFunctions object.
    pub fn New4(param1: ?*anyopaque) QtC.QOpenGLFunctions {
        return qtc.QOpenGLFunctions_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLFunctions_CopyAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OpenGLFeatures(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLFunctions_OpenGLFeatures(@ptrCast(self));
    }

    pub fn HasOpenGLFeature(self: ?*anyopaque, feature: i32) bool {
        return qtc.QOpenGLFunctions_HasOpenGLFeature(@ptrCast(self), @intCast(feature));
    }

    pub fn InitializeOpenGLFunctions(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self));
    }

    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_GlBindTexture(@ptrCast(self), target, texture);
    }

    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_GlBlendFunc(@ptrCast(self), sfactor, dfactor);
    }

    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_GlClear(@ptrCast(self), mask);
    }

    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_GlClearStencil(@ptrCast(self), s);
    }

    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_GlColorMask(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexImage2D(@ptrCast(self), target, level, internalformat, x, y, width, height, border);
    }

    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, x, y, width, height);
    }

    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlCullFace(@ptrCast(self), mode);
    }

    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_GlDepthFunc(@ptrCast(self), func);
    }

    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_GlDepthMask(@ptrCast(self), flag);
    }

    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_GlDisable(@ptrCast(self), cap);
    }

    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_GlDrawArrays(@ptrCast(self), mode, first, count);
    }

    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlDrawElements(@ptrCast(self), mode, count, typeVal, @ptrCast(indices));
    }

    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_GlEnable(@ptrCast(self), cap);
    }

    pub fn GlFinish(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_GlFinish(@ptrCast(self));
    }

    pub fn GlFlush(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_GlFlush(@ptrCast(self));
    }

    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlFrontFace(@ptrCast(self), mode);
    }

    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_GlGenTextures(@ptrCast(self), n, @ptrCast(textures));
    }

    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_GlGetBooleanv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetError(self: ?*anyopaque, ) GL {
        return qtc.QOpenGLFunctions_GlGetError(@ptrCast(self));
    }

    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetFloatv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetIntegerv(@ptrCast(self), pname, @ptrCast(params));
    }

    pub fn GlGetString(self: ?*anyopaque, name: u32) u8 {
        return @ptrCast(qtc.QOpenGLFunctions_GlGetString(@ptrCast(self), name));
    }

    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_GlHint(@ptrCast(self), target, mode);
    }

    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsEnabled(@ptrCast(self), cap);
    }

    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsTexture(@ptrCast(self), texture);
    }

    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_GlLineWidth(@ptrCast(self), width);
    }

    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlPixelStorei(@ptrCast(self), pname, param);
    }

    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_GlPolygonOffset(@ptrCast(self), factor, units);
    }

    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlReadPixels(@ptrCast(self), x, y, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlScissor(@ptrCast(self), x, y, width, height);
    }

    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFunc(@ptrCast(self), func, ref, mask);
    }

    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMask(@ptrCast(self), mask);
    }

    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOp(@ptrCast(self), fail, zfail, zpass);
    }

    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_GlTexParameterf(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_GlTexParameterfv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlTexParameteri(@ptrCast(self), target, pname, param);
    }

    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_GlTexParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, typeVal, @ptrCast(pixels));
    }

    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlViewport(@ptrCast(self), x, y, width, height);
    }

    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_GlActiveTexture(@ptrCast(self), texture);
    }

    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlAttachShader(@ptrCast(self), program, shader);
    }

    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: []const u8) void {
        qtc.QOpenGLFunctions_GlBindAttribLocation(@ptrCast(self), program, index, @ptrCast(name));
    }

    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_GlBindBuffer(@ptrCast(self), target, buffer);
    }

    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindFramebuffer(@ptrCast(self), target, framebuffer);
    }

    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindRenderbuffer(@ptrCast(self), target, renderbuffer);
    }

    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlBlendColor(@ptrCast(self), red, green, blue, alpha);
    }

    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquation(@ptrCast(self), mode);
    }

    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquationSeparate(@ptrCast(self), modeRGB, modeAlpha);
    }

    pub fn GlBlendFuncSeparate(self: ?*anyopaque, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendFuncSeparate(@ptrCast(self), srcRGB, dstRGB, srcAlpha, dstAlpha);
    }

    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: ?*anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_GlBufferData(@ptrCast(self), target, size, @ptrCast(data), usage);
    }

    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlBufferSubData(@ptrCast(self), target, offset, size, @ptrCast(data));
    }

    pub fn GlCheckFramebufferStatus(self: ?*anyopaque, target: u32) GL {
        return qtc.QOpenGLFunctions_GlCheckFramebufferStatus(@ptrCast(self), target);
    }

    pub fn GlClearDepthf(self: ?*anyopaque, depth: f32) void {
        qtc.QOpenGLFunctions_GlClearDepthf(@ptrCast(self), depth);
    }

    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_GlCompileShader(@ptrCast(self), shader);
    }

    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexImage2D(@ptrCast(self), target, level, internalformat, width, height, border, imageSize, @ptrCast(data));
    }

    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexSubImage2D(@ptrCast(self), target, level, xoffset, yoffset, width, height, format, imageSize, @ptrCast(data));
    }

    pub fn GlCreateProgram(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLFunctions_GlCreateProgram(@ptrCast(self));
    }

    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_GlCreateShader(@ptrCast(self), typeVal);
    }

    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteFramebuffers(@ptrCast(self), n, @ptrCast(framebuffers));
    }

    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlDeleteProgram(@ptrCast(self), program);
    }

    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteRenderbuffers(@ptrCast(self), n, @ptrCast(renderbuffers));
    }

    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_GlDeleteShader(@ptrCast(self), shader);
    }

    pub fn GlDepthRangef(self: ?*anyopaque, zNear: f32, zFar: f32) void {
        qtc.QOpenGLFunctions_GlDepthRangef(@ptrCast(self), zNear, zFar);
    }

    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlDetachShader(@ptrCast(self), program, shader);
    }

    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_GlDisableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_GlEnableVertexAttribArray(@ptrCast(self), index);
    }

    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlFramebufferRenderbuffer(@ptrCast(self), target, attachment, renderbuffertarget, renderbuffer);
    }

    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_GlFramebufferTexture2D(@ptrCast(self), target, attachment, textarget, texture, level);
    }

    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenBuffers(@ptrCast(self), n, @ptrCast(buffers));
    }

    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_GlGenerateMipmap(@ptrCast(self), target);
    }

    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenFramebuffers(@ptrCast(self), n, @ptrCast(framebuffers));
    }

    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenRenderbuffers(@ptrCast(self), n, @ptrCast(renderbuffers));
    }

    pub fn GlGetActiveAttrib(self: ?*anyopaque, program: u32, index: u32, bufsize: i32, length: *i32, size: *i32, typeVal: *GL, name: []const u8) void {
        qtc.QOpenGLFunctions_GlGetActiveAttrib(@ptrCast(self), program, index, bufsize, @ptrCast(length), @ptrCast(size), @ptrCast(typeVal), @ptrCast(name));
    }

    pub fn GlGetActiveUniform(self: ?*anyopaque, program: u32, index: u32, bufsize: i32, length: *i32, size: *i32, typeVal: *GL, name: []const u8) void {
        qtc.QOpenGLFunctions_GlGetActiveUniform(@ptrCast(self), program, index, bufsize, @ptrCast(length), @ptrCast(size), @ptrCast(typeVal), @ptrCast(name));
    }

    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxcount: i32, count: *i32, shaders: *u32) void {
        qtc.QOpenGLFunctions_GlGetAttachedShaders(@ptrCast(self), program, maxcount, @ptrCast(count), @ptrCast(shaders));
    }

    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: []const u8) i32 {
        return qtc.QOpenGLFunctions_GlGetAttribLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetBufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), target, attachment, pname, @ptrCast(params));
    }

    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetProgramiv(@ptrCast(self), program, pname, @ptrCast(params));
    }

    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufsize: i32, length: *i32, infolog: []const u8) void {
        qtc.QOpenGLFunctions_GlGetProgramInfoLog(@ptrCast(self), program, bufsize, @ptrCast(length), @ptrCast(infolog));
    }

    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetRenderbufferParameteriv(@ptrCast(self), target, pname, @ptrCast(params));
    }

    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetShaderiv(@ptrCast(self), shader, pname, @ptrCast(params));
    }

    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufsize: i32, length: *i32, infolog: []const u8) void {
        qtc.QOpenGLFunctions_GlGetShaderInfoLog(@ptrCast(self), shader, bufsize, @ptrCast(length), @ptrCast(infolog));
    }

    pub fn GlGetShaderPrecisionFormat(self: ?*anyopaque, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32) void {
        qtc.QOpenGLFunctions_GlGetShaderPrecisionFormat(@ptrCast(self), shadertype, precisiontype, @ptrCast(range), @ptrCast(precision));
    }

    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufsize: i32, length: *i32, source: []const u8) void {
        qtc.QOpenGLFunctions_GlGetShaderSource(@ptrCast(self), shader, bufsize, @ptrCast(length), @ptrCast(source));
    }

    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetUniformfv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetUniformiv(@ptrCast(self), program, location, @ptrCast(params));
    }

    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: []const u8) i32 {
        return qtc.QOpenGLFunctions_GlGetUniformLocation(@ptrCast(self), program, @ptrCast(name));
    }

    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribfv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribiv(@ptrCast(self), index, pname, @ptrCast(params));
    }

    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribPointerv(@ptrCast(self), index, pname, @ptrCast(pointer));
    }

    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsBuffer(@ptrCast(self), buffer);
    }

    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsFramebuffer(@ptrCast(self), framebuffer);
    }

    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsProgram(@ptrCast(self), program);
    }

    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsRenderbuffer(@ptrCast(self), renderbuffer);
    }

    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsShader(@ptrCast(self), shader);
    }

    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlLinkProgram(@ptrCast(self), program);
    }

    pub fn GlReleaseShaderCompiler(self: ?*anyopaque, ) void {
        qtc.QOpenGLFunctions_GlReleaseShaderCompiler(@ptrCast(self));
    }

    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlRenderbufferStorage(@ptrCast(self), target, internalformat, width, height);
    }

    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_GlSampleCoverage(@ptrCast(self), value, invert);
    }

    pub fn GlShaderBinary(self: ?*anyopaque, n: i32, shaders: *const u32, binaryformat: u32, binary: ?*anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_GlShaderBinary(@ptrCast(self), n, @ptrCast(shaders), binaryformat, @ptrCast(binary), length);
    }

    pub fn GlShaderSource(self: ?*anyopaque, shader: u32, count: i32, stringVal: []const u8, length: *const i32) void {
        qtc.QOpenGLFunctions_GlShaderSource(@ptrCast(self), shader, count, @ptrCast(stringVal), @ptrCast(length));
    }

    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFuncSeparate(@ptrCast(self), face, func, ref, mask);
    }

    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMaskSeparate(@ptrCast(self), face, mask);
    }

    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOpSeparate(@ptrCast(self), face, fail, zfail, zpass);
    }

    pub fn GlUniform1f(self: ?*anyopaque, location: i32, x: f32) void {
        qtc.QOpenGLFunctions_GlUniform1f(@ptrCast(self), location, x);
    }

    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform1fv(@ptrCast(self), location, count, @ptrCast(v));
    }

    pub fn GlUniform1i(self: ?*anyopaque, location: i32, x: i32) void {
        qtc.QOpenGLFunctions_GlUniform1i(@ptrCast(self), location, x);
    }

    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform1iv(@ptrCast(self), location, count, @ptrCast(v));
    }

    pub fn GlUniform2f(self: ?*anyopaque, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlUniform2f(@ptrCast(self), location, x, y);
    }

    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform2fv(@ptrCast(self), location, count, @ptrCast(v));
    }

    pub fn GlUniform2i(self: ?*anyopaque, location: i32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_GlUniform2i(@ptrCast(self), location, x, y);
    }

    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform2iv(@ptrCast(self), location, count, @ptrCast(v));
    }

    pub fn GlUniform3f(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlUniform3f(@ptrCast(self), location, x, y, z);
    }

    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform3fv(@ptrCast(self), location, count, @ptrCast(v));
    }

    pub fn GlUniform3i(self: ?*anyopaque, location: i32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_GlUniform3i(@ptrCast(self), location, x, y, z);
    }

    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform3iv(@ptrCast(self), location, count, @ptrCast(v));
    }

    pub fn GlUniform4f(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlUniform4f(@ptrCast(self), location, x, y, z, w);
    }

    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform4fv(@ptrCast(self), location, count, @ptrCast(v));
    }

    pub fn GlUniform4i(self: ?*anyopaque, location: i32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_GlUniform4i(@ptrCast(self), location, x, y, z, w);
    }

    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform4iv(@ptrCast(self), location, count, @ptrCast(v));
    }

    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix2fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix3fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix4fv(@ptrCast(self), location, count, transpose, @ptrCast(value));
    }

    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlUseProgram(@ptrCast(self), program);
    }

    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlValidateProgram(@ptrCast(self), program);
    }

    pub fn GlVertexAttrib1f(self: ?*anyopaque, indx: u32, x: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1f(@ptrCast(self), indx, x);
    }

    pub fn GlVertexAttrib1fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1fv(@ptrCast(self), indx, @ptrCast(values));
    }

    pub fn GlVertexAttrib2f(self: ?*anyopaque, indx: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2f(@ptrCast(self), indx, x, y);
    }

    pub fn GlVertexAttrib2fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2fv(@ptrCast(self), indx, @ptrCast(values));
    }

    pub fn GlVertexAttrib3f(self: ?*anyopaque, indx: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3f(@ptrCast(self), indx, x, y, z);
    }

    pub fn GlVertexAttrib3fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3fv(@ptrCast(self), indx, @ptrCast(values));
    }

    pub fn GlVertexAttrib4f(self: ?*anyopaque, indx: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4f(@ptrCast(self), indx, x, y, z, w);
    }

    pub fn GlVertexAttrib4fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4fv(@ptrCast(self), indx, @ptrCast(values));
    }

    pub fn GlVertexAttribPointer(self: ?*anyopaque, indx: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, ptr: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlVertexAttribPointer(@ptrCast(self), indx, size, typeVal, normalized, stride, @ptrCast(ptr));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/openglfunctions.html#types
pub const enums = struct {
    pub const OpenGLFeature = enum {
        pub const Multitexture: i32 = 1;
        pub const Shaders: i32 = 2;
        pub const Buffers: i32 = 4;
        pub const Framebuffers: i32 = 8;
        pub const BlendColor: i32 = 16;
        pub const BlendEquation: i32 = 32;
        pub const BlendEquationSeparate: i32 = 64;
        pub const BlendFuncSeparate: i32 = 128;
        pub const BlendSubtract: i32 = 256;
        pub const CompressedTextures: i32 = 512;
        pub const Multisample: i32 = 1024;
        pub const StencilSeparate: i32 = 2048;
        pub const NPOTTextures: i32 = 4096;
        pub const NPOTTextureRepeat: i32 = 8192;
        pub const FixedFunctionPipeline: i32 = 16384;
        pub const TextureRGFormats: i32 = 32768;
        pub const MultipleRenderTargets: i32 = 65536;
        pub const BlendEquationAdvanced: i32 = 131072;
    };

};
