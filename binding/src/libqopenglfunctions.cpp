#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <qopenglfunctions.h>
#include "libqopenglfunctions.h"
#include "libqopenglfunctions.hxx"

QOpenGLFunctions* QOpenGLFunctions_new(const QOpenGLFunctions* other) {
	 return new QOpenGLFunctions(*other);
}

QOpenGLFunctions* QOpenGLFunctions_new2() {
	 return new QOpenGLFunctions();
}

QOpenGLFunctions* QOpenGLFunctions_new3(QOpenGLContext* context) {
	 return new QOpenGLFunctions(context);
}

QOpenGLFunctions* QOpenGLFunctions_new4(const QOpenGLFunctions* param1) {
	 return new QOpenGLFunctions(*param1);
}

void QOpenGLFunctions_CopyAssign(QOpenGLFunctions* self, QOpenGLFunctions* other) {
    *self = *other;
}

int QOpenGLFunctions_OpenGLFeatures(const QOpenGLFunctions* self) {
	return self->openGLFeatures();
}

bool QOpenGLFunctions_HasOpenGLFeature(const QOpenGLFunctions* self, int feature) {
	return self->hasOpenGLFeature(static_cast<QOpenGLFunctions::OpenGLFeature>(feature));
}

void QOpenGLFunctions_InitializeOpenGLFunctions(QOpenGLFunctions* self) {
	self->initializeOpenGLFunctions();
}

void QOpenGLFunctions_GlBindTexture(QOpenGLFunctions* self, uint32_t target, uint32_t texture) {
	self->glBindTexture(target, texture);
}

void QOpenGLFunctions_GlBlendFunc(QOpenGLFunctions* self, uint32_t sfactor, uint32_t dfactor) {
	self->glBlendFunc(sfactor, dfactor);
}

void QOpenGLFunctions_GlClear(QOpenGLFunctions* self, uint32_t mask) {
	self->glClear(mask);
}

void QOpenGLFunctions_GlClearColor(QOpenGLFunctions* self, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
	self->glClearColor(red, green, blue, alpha);
}

void QOpenGLFunctions_GlClearStencil(QOpenGLFunctions* self, int32_t s) {
	self->glClearStencil(s);
}

void QOpenGLFunctions_GlColorMask(QOpenGLFunctions* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	self->glColorMask(red, green, blue, alpha);
}

void QOpenGLFunctions_GlCopyTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
	self->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void QOpenGLFunctions_GlCopyTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void QOpenGLFunctions_GlCullFace(QOpenGLFunctions* self, uint32_t mode) {
	self->glCullFace(mode);
}

void QOpenGLFunctions_GlDeleteTextures(QOpenGLFunctions* self, int32_t n, const uint32_t* textures) {
	self->glDeleteTextures(n, textures);
}

void QOpenGLFunctions_GlDepthFunc(QOpenGLFunctions* self, uint32_t func) {
	self->glDepthFunc(func);
}

void QOpenGLFunctions_GlDepthMask(QOpenGLFunctions* self, unsigned char flag) {
	self->glDepthMask(flag);
}

void QOpenGLFunctions_GlDisable(QOpenGLFunctions* self, uint32_t cap) {
	self->glDisable(cap);
}

void QOpenGLFunctions_GlDrawArrays(QOpenGLFunctions* self, uint32_t mode, int32_t first, int32_t count) {
	self->glDrawArrays(mode, first, count);
}

void QOpenGLFunctions_GlDrawElements(QOpenGLFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawElements(mode, count, typeVal, indices);
}

void QOpenGLFunctions_GlEnable(QOpenGLFunctions* self, uint32_t cap) {
	self->glEnable(cap);
}

void QOpenGLFunctions_GlFinish(QOpenGLFunctions* self) {
	self->glFinish();
}

void QOpenGLFunctions_GlFlush(QOpenGLFunctions* self) {
	self->glFlush();
}

void QOpenGLFunctions_GlFrontFace(QOpenGLFunctions* self, uint32_t mode) {
	self->glFrontFace(mode);
}

void QOpenGLFunctions_GlGenTextures(QOpenGLFunctions* self, int32_t n, uint32_t* textures) {
	self->glGenTextures(n, textures);
}

void QOpenGLFunctions_GlGetBooleanv(QOpenGLFunctions* self, uint32_t pname, unsigned char* params) {
	self->glGetBooleanv(pname, params);
}

void QOpenGLFunctions_GlGetFloatv(QOpenGLFunctions* self, uint32_t pname, float* params) {
	self->glGetFloatv(pname, params);
}

void QOpenGLFunctions_GlGetIntegerv(QOpenGLFunctions* self, uint32_t pname, int32_t* params) {
	self->glGetIntegerv(pname, params);
}

const uint8_t* QOpenGLFunctions_GlGetString(QOpenGLFunctions* self, uint32_t name) {
	return self->glGetString(name);
}

void QOpenGLFunctions_GlGetTexParameterfv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_GlGetTexParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_GlHint(QOpenGLFunctions* self, uint32_t target, uint32_t mode) {
	self->glHint(target, mode);
}

unsigned char QOpenGLFunctions_GlIsEnabled(QOpenGLFunctions* self, uint32_t cap) {
	return self->glIsEnabled(cap);
}

unsigned char QOpenGLFunctions_GlIsTexture(QOpenGLFunctions* self, uint32_t texture) {
	return self->glIsTexture(texture);
}

void QOpenGLFunctions_GlLineWidth(QOpenGLFunctions* self, float width) {
	self->glLineWidth(width);
}

void QOpenGLFunctions_GlPixelStorei(QOpenGLFunctions* self, uint32_t pname, int32_t param) {
	self->glPixelStorei(pname, param);
}

void QOpenGLFunctions_GlPolygonOffset(QOpenGLFunctions* self, float factor, float units) {
	self->glPolygonOffset(factor, units);
}

void QOpenGLFunctions_GlReadPixels(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glReadPixels(x, y, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_GlScissor(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glScissor(x, y, width, height);
}

void QOpenGLFunctions_GlStencilFunc(QOpenGLFunctions* self, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFunc(func, ref, mask);
}

void QOpenGLFunctions_GlStencilMask(QOpenGLFunctions* self, uint32_t mask) {
	self->glStencilMask(mask);
}

void QOpenGLFunctions_GlStencilOp(QOpenGLFunctions* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
	self->glStencilOp(fail, zfail, zpass);
}

void QOpenGLFunctions_GlTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage2D(target, level, internalformat, width, height, border, format, typeVal, pixels);
}

void QOpenGLFunctions_GlTexParameterf(QOpenGLFunctions* self, uint32_t target, uint32_t pname, float param) {
	self->glTexParameterf(target, pname, param);
}

void QOpenGLFunctions_GlTexParameterfv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_GlTexParameteri(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexParameteri(target, pname, param);
}

void QOpenGLFunctions_GlTexParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_GlTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_GlViewport(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glViewport(x, y, width, height);
}

void QOpenGLFunctions_GlActiveTexture(QOpenGLFunctions* self, uint32_t texture) {
	self->glActiveTexture(texture);
}

void QOpenGLFunctions_GlAttachShader(QOpenGLFunctions* self, uint32_t program, uint32_t shader) {
	self->glAttachShader(program, shader);
}

void QOpenGLFunctions_GlBindAttribLocation(QOpenGLFunctions* self, uint32_t program, uint32_t index, const char* name) {
	self->glBindAttribLocation(program, index, name);
}

void QOpenGLFunctions_GlBindBuffer(QOpenGLFunctions* self, uint32_t target, uint32_t buffer) {
	self->glBindBuffer(target, buffer);
}

void QOpenGLFunctions_GlBindFramebuffer(QOpenGLFunctions* self, uint32_t target, uint32_t framebuffer) {
	self->glBindFramebuffer(target, framebuffer);
}

void QOpenGLFunctions_GlBindRenderbuffer(QOpenGLFunctions* self, uint32_t target, uint32_t renderbuffer) {
	self->glBindRenderbuffer(target, renderbuffer);
}

void QOpenGLFunctions_GlBlendColor(QOpenGLFunctions* self, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
	self->glBlendColor(red, green, blue, alpha);
}

void QOpenGLFunctions_GlBlendEquation(QOpenGLFunctions* self, uint32_t mode) {
	self->glBlendEquation(mode);
}

void QOpenGLFunctions_GlBlendEquationSeparate(QOpenGLFunctions* self, uint32_t modeRGB, uint32_t modeAlpha) {
	self->glBlendEquationSeparate(modeRGB, modeAlpha);
}

void QOpenGLFunctions_GlBlendFuncSeparate(QOpenGLFunctions* self, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
	self->glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void QOpenGLFunctions_GlBufferData(QOpenGLFunctions* self, uint32_t target, ptrdiff_t size, const void* data, uint32_t usage) {
	self->glBufferData(target, size, data, usage);
}

void QOpenGLFunctions_GlBufferSubData(QOpenGLFunctions* self, uint32_t target, ptrdiff_t offset, ptrdiff_t size, const void* data) {
	self->glBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_GlClearDepthf(QOpenGLFunctions* self, GLclampf depth) {
	self->glClearDepthf(depth);
}

void QOpenGLFunctions_GlCompileShader(QOpenGLFunctions* self, uint32_t shader) {
	self->glCompileShader(shader);
}

void QOpenGLFunctions_GlCompressedTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void QOpenGLFunctions_GlCompressedTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

uint32_t QOpenGLFunctions_GlCreateProgram(QOpenGLFunctions* self) {
	return self->glCreateProgram();
}

uint32_t QOpenGLFunctions_GlCreateShader(QOpenGLFunctions* self, uint32_t typeVal) {
	return self->glCreateShader(typeVal);
}

void QOpenGLFunctions_GlDeleteBuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* buffers) {
	self->glDeleteBuffers(n, buffers);
}

void QOpenGLFunctions_GlDeleteFramebuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* framebuffers) {
	self->glDeleteFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_GlDeleteProgram(QOpenGLFunctions* self, uint32_t program) {
	self->glDeleteProgram(program);
}

void QOpenGLFunctions_GlDeleteRenderbuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* renderbuffers) {
	self->glDeleteRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_GlDeleteShader(QOpenGLFunctions* self, uint32_t shader) {
	self->glDeleteShader(shader);
}

void QOpenGLFunctions_GlDepthRangef(QOpenGLFunctions* self, GLclampf zNear, GLclampf zFar) {
	self->glDepthRangef(zNear, zFar);
}

void QOpenGLFunctions_GlDetachShader(QOpenGLFunctions* self, uint32_t program, uint32_t shader) {
	self->glDetachShader(program, shader);
}

void QOpenGLFunctions_GlDisableVertexAttribArray(QOpenGLFunctions* self, uint32_t index) {
	self->glDisableVertexAttribArray(index);
}

void QOpenGLFunctions_GlEnableVertexAttribArray(QOpenGLFunctions* self, uint32_t index) {
	self->glEnableVertexAttribArray(index);
}

void QOpenGLFunctions_GlFramebufferRenderbuffer(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
	self->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void QOpenGLFunctions_GlFramebufferTexture2D(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
	self->glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void QOpenGLFunctions_GlGenBuffers(QOpenGLFunctions* self, int32_t n, uint32_t* buffers) {
	self->glGenBuffers(n, buffers);
}

void QOpenGLFunctions_GlGenerateMipmap(QOpenGLFunctions* self, uint32_t target) {
	self->glGenerateMipmap(target);
}

void QOpenGLFunctions_GlGenFramebuffers(QOpenGLFunctions* self, int32_t n, uint32_t* framebuffers) {
	self->glGenFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_GlGenRenderbuffers(QOpenGLFunctions* self, int32_t n, uint32_t* renderbuffers) {
	self->glGenRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_GlGetAttachedShaders(QOpenGLFunctions* self, uint32_t program, int32_t maxcount, int32_t* count, uint32_t* shaders) {
	self->glGetAttachedShaders(program, maxcount, count, shaders);
}

int32_t QOpenGLFunctions_GlGetAttribLocation(QOpenGLFunctions* self, uint32_t program, const char* name) {
	return self->glGetAttribLocation(program, name);
}

void QOpenGLFunctions_GlGetBufferParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetBufferParameteriv(target, pname, params);
}

void QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
	self->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void QOpenGLFunctions_GlGetProgramiv(QOpenGLFunctions* self, uint32_t program, uint32_t pname, int32_t* params) {
	self->glGetProgramiv(program, pname, params);
}

void QOpenGLFunctions_GlGetProgramInfoLog(QOpenGLFunctions* self, uint32_t program, int32_t bufsize, int32_t* length, char* infolog) {
	self->glGetProgramInfoLog(program, bufsize, length, infolog);
}

void QOpenGLFunctions_GlGetRenderbufferParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetRenderbufferParameteriv(target, pname, params);
}

void QOpenGLFunctions_GlGetShaderiv(QOpenGLFunctions* self, uint32_t shader, uint32_t pname, int32_t* params) {
	self->glGetShaderiv(shader, pname, params);
}

void QOpenGLFunctions_GlGetShaderInfoLog(QOpenGLFunctions* self, uint32_t shader, int32_t bufsize, int32_t* length, char* infolog) {
	self->glGetShaderInfoLog(shader, bufsize, length, infolog);
}

void QOpenGLFunctions_GlGetShaderPrecisionFormat(QOpenGLFunctions* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision) {
	self->glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void QOpenGLFunctions_GlGetShaderSource(QOpenGLFunctions* self, uint32_t shader, int32_t bufsize, int32_t* length, char* source) {
	self->glGetShaderSource(shader, bufsize, length, source);
}

void QOpenGLFunctions_GlGetUniformfv(QOpenGLFunctions* self, uint32_t program, int32_t location, float* params) {
	self->glGetUniformfv(program, location, params);
}

void QOpenGLFunctions_GlGetUniformiv(QOpenGLFunctions* self, uint32_t program, int32_t location, int32_t* params) {
	self->glGetUniformiv(program, location, params);
}

int32_t QOpenGLFunctions_GlGetUniformLocation(QOpenGLFunctions* self, uint32_t program, const char* name) {
	return self->glGetUniformLocation(program, name);
}

void QOpenGLFunctions_GlGetVertexAttribfv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, float* params) {
	self->glGetVertexAttribfv(index, pname, params);
}

void QOpenGLFunctions_GlGetVertexAttribiv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribiv(index, pname, params);
}

void QOpenGLFunctions_GlGetVertexAttribPointerv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, void** pointer) {
	self->glGetVertexAttribPointerv(index, pname, pointer);
}

unsigned char QOpenGLFunctions_GlIsBuffer(QOpenGLFunctions* self, uint32_t buffer) {
	return self->glIsBuffer(buffer);
}

unsigned char QOpenGLFunctions_GlIsFramebuffer(QOpenGLFunctions* self, uint32_t framebuffer) {
	return self->glIsFramebuffer(framebuffer);
}

unsigned char QOpenGLFunctions_GlIsProgram(QOpenGLFunctions* self, uint32_t program) {
	return self->glIsProgram(program);
}

unsigned char QOpenGLFunctions_GlIsRenderbuffer(QOpenGLFunctions* self, uint32_t renderbuffer) {
	return self->glIsRenderbuffer(renderbuffer);
}

unsigned char QOpenGLFunctions_GlIsShader(QOpenGLFunctions* self, uint32_t shader) {
	return self->glIsShader(shader);
}

void QOpenGLFunctions_GlLinkProgram(QOpenGLFunctions* self, uint32_t program) {
	self->glLinkProgram(program);
}

void QOpenGLFunctions_GlReleaseShaderCompiler(QOpenGLFunctions* self) {
	self->glReleaseShaderCompiler();
}

void QOpenGLFunctions_GlRenderbufferStorage(QOpenGLFunctions* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
	self->glRenderbufferStorage(target, internalformat, width, height);
}

void QOpenGLFunctions_GlSampleCoverage(QOpenGLFunctions* self, GLclampf value, unsigned char invert) {
	self->glSampleCoverage(value, invert);
}

void QOpenGLFunctions_GlShaderBinary(QOpenGLFunctions* self, int32_t n, const uint32_t* shaders, uint32_t binaryformat, const void* binary, int32_t length) {
	self->glShaderBinary(n, shaders, binaryformat, binary, length);
}

void QOpenGLFunctions_GlShaderSource(QOpenGLFunctions* self, uint32_t shader, int32_t count, const char** stringVal, const int32_t* length) {
	self->glShaderSource(shader, count, stringVal, length);
}

void QOpenGLFunctions_GlStencilFuncSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFuncSeparate(face, func, ref, mask);
}

void QOpenGLFunctions_GlStencilMaskSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t mask) {
	self->glStencilMaskSeparate(face, mask);
}

void QOpenGLFunctions_GlStencilOpSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t fail, uint32_t zfail, uint32_t zpass) {
	self->glStencilOpSeparate(face, fail, zfail, zpass);
}

void QOpenGLFunctions_GlUniform1f(QOpenGLFunctions* self, int32_t location, float x) {
	self->glUniform1f(location, x);
}

void QOpenGLFunctions_GlUniform1fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v) {
	self->glUniform1fv(location, count, v);
}

void QOpenGLFunctions_GlUniform1i(QOpenGLFunctions* self, int32_t location, int32_t x) {
	self->glUniform1i(location, x);
}

void QOpenGLFunctions_GlUniform1iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v) {
	self->glUniform1iv(location, count, v);
}

void QOpenGLFunctions_GlUniform2f(QOpenGLFunctions* self, int32_t location, float x, float y) {
	self->glUniform2f(location, x, y);
}

void QOpenGLFunctions_GlUniform2fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v) {
	self->glUniform2fv(location, count, v);
}

void QOpenGLFunctions_GlUniform2i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y) {
	self->glUniform2i(location, x, y);
}

void QOpenGLFunctions_GlUniform2iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v) {
	self->glUniform2iv(location, count, v);
}

void QOpenGLFunctions_GlUniform3f(QOpenGLFunctions* self, int32_t location, float x, float y, float z) {
	self->glUniform3f(location, x, y, z);
}

void QOpenGLFunctions_GlUniform3fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v) {
	self->glUniform3fv(location, count, v);
}

void QOpenGLFunctions_GlUniform3i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y, int32_t z) {
	self->glUniform3i(location, x, y, z);
}

void QOpenGLFunctions_GlUniform3iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v) {
	self->glUniform3iv(location, count, v);
}

void QOpenGLFunctions_GlUniform4f(QOpenGLFunctions* self, int32_t location, float x, float y, float z, float w) {
	self->glUniform4f(location, x, y, z, w);
}

void QOpenGLFunctions_GlUniform4fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v) {
	self->glUniform4fv(location, count, v);
}

void QOpenGLFunctions_GlUniform4i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glUniform4i(location, x, y, z, w);
}

void QOpenGLFunctions_GlUniform4iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v) {
	self->glUniform4iv(location, count, v);
}

void QOpenGLFunctions_GlUniformMatrix2fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2fv(location, count, transpose, value);
}

void QOpenGLFunctions_GlUniformMatrix3fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3fv(location, count, transpose, value);
}

void QOpenGLFunctions_GlUniformMatrix4fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4fv(location, count, transpose, value);
}

void QOpenGLFunctions_GlUseProgram(QOpenGLFunctions* self, uint32_t program) {
	self->glUseProgram(program);
}

void QOpenGLFunctions_GlValidateProgram(QOpenGLFunctions* self, uint32_t program) {
	self->glValidateProgram(program);
}

void QOpenGLFunctions_GlVertexAttrib1f(QOpenGLFunctions* self, uint32_t indx, float x) {
	self->glVertexAttrib1f(indx, x);
}

void QOpenGLFunctions_GlVertexAttrib1fv(QOpenGLFunctions* self, uint32_t indx, const float* values) {
	self->glVertexAttrib1fv(indx, values);
}

void QOpenGLFunctions_GlVertexAttrib2f(QOpenGLFunctions* self, uint32_t indx, float x, float y) {
	self->glVertexAttrib2f(indx, x, y);
}

void QOpenGLFunctions_GlVertexAttrib2fv(QOpenGLFunctions* self, uint32_t indx, const float* values) {
	self->glVertexAttrib2fv(indx, values);
}

void QOpenGLFunctions_GlVertexAttrib3f(QOpenGLFunctions* self, uint32_t indx, float x, float y, float z) {
	self->glVertexAttrib3f(indx, x, y, z);
}

void QOpenGLFunctions_GlVertexAttrib3fv(QOpenGLFunctions* self, uint32_t indx, const float* values) {
	self->glVertexAttrib3fv(indx, values);
}

void QOpenGLFunctions_GlVertexAttrib4f(QOpenGLFunctions* self, uint32_t indx, float x, float y, float z, float w) {
	self->glVertexAttrib4f(indx, x, y, z, w);
}

void QOpenGLFunctions_GlVertexAttrib4fv(QOpenGLFunctions* self, uint32_t indx, const float* values) {
	self->glVertexAttrib4fv(indx, values);
}

void QOpenGLFunctions_GlVertexAttribPointer(QOpenGLFunctions* self, uint32_t indx, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* ptr) {
	self->glVertexAttribPointer(indx, size, typeVal, normalized, stride, ptr);
}

void QOpenGLFunctions_Delete(QOpenGLFunctions* self) {
    delete self;
}

