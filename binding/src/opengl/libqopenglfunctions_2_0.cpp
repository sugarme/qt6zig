#include <QOpenGLFunctions_2_0>
#include <qopenglfunctions_2_0.h>
#include "libqopenglfunctions_2_0.h"
#include "libqopenglfunctions_2_0.hxx"

QOpenGLFunctions_2_0* QOpenGLFunctions_2_0_new() {
	 return new VirtualQOpenGLFunctions_2_0();
}

bool QOpenGLFunctions_2_0_InitializeOpenGLFunctions(QOpenGLFunctions_2_0* self) {
	return self->initializeOpenGLFunctions();
}

void QOpenGLFunctions_2_0_GlViewport(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glViewport(x, y, width, height);
}

void QOpenGLFunctions_2_0_GlDepthRange(QOpenGLFunctions_2_0* self, double nearVal, double farVal) {
	self->glDepthRange(nearVal, farVal);
}

unsigned char QOpenGLFunctions_2_0_GlIsEnabled(QOpenGLFunctions_2_0* self, uint32_t cap) {
	return self->glIsEnabled(cap);
}

void QOpenGLFunctions_2_0_GlGetTexLevelParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
	self->glGetTexLevelParameteriv(target, level, pname, params);
}

void QOpenGLFunctions_2_0_GlGetTexLevelParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
	self->glGetTexLevelParameterfv(target, level, pname, params);
}

void QOpenGLFunctions_2_0_GlGetTexParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetTexParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetTexImage(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glGetTexImage(target, level, format, typeVal, pixels);
}

const uint8_t* QOpenGLFunctions_2_0_GlGetString(QOpenGLFunctions_2_0* self, uint32_t name) {
	return self->glGetString(name);
}

void QOpenGLFunctions_2_0_GlGetIntegerv(QOpenGLFunctions_2_0* self, uint32_t pname, int32_t* params) {
	self->glGetIntegerv(pname, params);
}

void QOpenGLFunctions_2_0_GlGetFloatv(QOpenGLFunctions_2_0* self, uint32_t pname, float* params) {
	self->glGetFloatv(pname, params);
}

void QOpenGLFunctions_2_0_GlGetDoublev(QOpenGLFunctions_2_0* self, uint32_t pname, double* params) {
	self->glGetDoublev(pname, params);
}

void QOpenGLFunctions_2_0_GlGetBooleanv(QOpenGLFunctions_2_0* self, uint32_t pname, unsigned char* params) {
	self->glGetBooleanv(pname, params);
}

void QOpenGLFunctions_2_0_GlReadPixels(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glReadPixels(x, y, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_2_0_GlReadBuffer(QOpenGLFunctions_2_0* self, uint32_t mode) {
	self->glReadBuffer(mode);
}

void QOpenGLFunctions_2_0_GlPixelStorei(QOpenGLFunctions_2_0* self, uint32_t pname, int32_t param) {
	self->glPixelStorei(pname, param);
}

void QOpenGLFunctions_2_0_GlPixelStoref(QOpenGLFunctions_2_0* self, uint32_t pname, float param) {
	self->glPixelStoref(pname, param);
}

void QOpenGLFunctions_2_0_GlDepthFunc(QOpenGLFunctions_2_0* self, uint32_t func) {
	self->glDepthFunc(func);
}

void QOpenGLFunctions_2_0_GlStencilOp(QOpenGLFunctions_2_0* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
	self->glStencilOp(fail, zfail, zpass);
}

void QOpenGLFunctions_2_0_GlStencilFunc(QOpenGLFunctions_2_0* self, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFunc(func, ref, mask);
}

void QOpenGLFunctions_2_0_GlLogicOp(QOpenGLFunctions_2_0* self, uint32_t opcode) {
	self->glLogicOp(opcode);
}

void QOpenGLFunctions_2_0_GlBlendFunc(QOpenGLFunctions_2_0* self, uint32_t sfactor, uint32_t dfactor) {
	self->glBlendFunc(sfactor, dfactor);
}

void QOpenGLFunctions_2_0_GlFlush(QOpenGLFunctions_2_0* self) {
	self->glFlush();
}

void QOpenGLFunctions_2_0_GlFinish(QOpenGLFunctions_2_0* self) {
	self->glFinish();
}

void QOpenGLFunctions_2_0_GlEnable(QOpenGLFunctions_2_0* self, uint32_t cap) {
	self->glEnable(cap);
}

void QOpenGLFunctions_2_0_GlDisable(QOpenGLFunctions_2_0* self, uint32_t cap) {
	self->glDisable(cap);
}

void QOpenGLFunctions_2_0_GlDepthMask(QOpenGLFunctions_2_0* self, unsigned char flag) {
	self->glDepthMask(flag);
}

void QOpenGLFunctions_2_0_GlColorMask(QOpenGLFunctions_2_0* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	self->glColorMask(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlStencilMask(QOpenGLFunctions_2_0* self, uint32_t mask) {
	self->glStencilMask(mask);
}

void QOpenGLFunctions_2_0_GlClearDepth(QOpenGLFunctions_2_0* self, double depth) {
	self->glClearDepth(depth);
}

void QOpenGLFunctions_2_0_GlClearStencil(QOpenGLFunctions_2_0* self, int32_t s) {
	self->glClearStencil(s);
}

void QOpenGLFunctions_2_0_GlClearColor(QOpenGLFunctions_2_0* self, float red, float green, float blue, float alpha) {
	self->glClearColor(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlClear(QOpenGLFunctions_2_0* self, uint32_t mask) {
	self->glClear(mask);
}

void QOpenGLFunctions_2_0_GlDrawBuffer(QOpenGLFunctions_2_0* self, uint32_t mode) {
	self->glDrawBuffer(mode);
}

void QOpenGLFunctions_2_0_GlTexImage2D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage2D(target, level, internalformat, width, height, border, format, typeVal, pixels);
}

void QOpenGLFunctions_2_0_GlTexImage1D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage1D(target, level, internalformat, width, border, format, typeVal, pixels);
}

void QOpenGLFunctions_2_0_GlTexParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlTexParameteri(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexParameteri(target, pname, param);
}

void QOpenGLFunctions_2_0_GlTexParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlTexParameterf(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float param) {
	self->glTexParameterf(target, pname, param);
}

void QOpenGLFunctions_2_0_GlScissor(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glScissor(x, y, width, height);
}

void QOpenGLFunctions_2_0_GlPolygonMode(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t mode) {
	self->glPolygonMode(face, mode);
}

void QOpenGLFunctions_2_0_GlPointSize(QOpenGLFunctions_2_0* self, float size) {
	self->glPointSize(size);
}

void QOpenGLFunctions_2_0_GlLineWidth(QOpenGLFunctions_2_0* self, float width) {
	self->glLineWidth(width);
}

void QOpenGLFunctions_2_0_GlHint(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t mode) {
	self->glHint(target, mode);
}

void QOpenGLFunctions_2_0_GlFrontFace(QOpenGLFunctions_2_0* self, uint32_t mode) {
	self->glFrontFace(mode);
}

void QOpenGLFunctions_2_0_GlCullFace(QOpenGLFunctions_2_0* self, uint32_t mode) {
	self->glCullFace(mode);
}

void QOpenGLFunctions_2_0_GlIndexubv(QOpenGLFunctions_2_0* self, const uint8_t* c) {
	self->glIndexubv(c);
}

void QOpenGLFunctions_2_0_GlIndexub(QOpenGLFunctions_2_0* self, uint8_t c) {
	self->glIndexub(c);
}

unsigned char QOpenGLFunctions_2_0_GlIsTexture(QOpenGLFunctions_2_0* self, uint32_t texture) {
	return self->glIsTexture(texture);
}

void QOpenGLFunctions_2_0_GlGenTextures(QOpenGLFunctions_2_0* self, int32_t n, uint32_t* textures) {
	self->glGenTextures(n, textures);
}

void QOpenGLFunctions_2_0_GlDeleteTextures(QOpenGLFunctions_2_0* self, int32_t n, const uint32_t* textures) {
	self->glDeleteTextures(n, textures);
}

void QOpenGLFunctions_2_0_GlBindTexture(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t texture) {
	self->glBindTexture(target, texture);
}

void QOpenGLFunctions_2_0_GlTexSubImage2D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_2_0_GlTexSubImage1D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage1D(target, level, xoffset, width, format, typeVal, pixels);
}

void QOpenGLFunctions_2_0_GlCopyTexSubImage2D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void QOpenGLFunctions_2_0_GlCopyTexSubImage1D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
	self->glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void QOpenGLFunctions_2_0_GlCopyTexImage2D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
	self->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void QOpenGLFunctions_2_0_GlCopyTexImage1D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
	self->glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void QOpenGLFunctions_2_0_GlPolygonOffset(QOpenGLFunctions_2_0* self, float factor, float units) {
	self->glPolygonOffset(factor, units);
}

void QOpenGLFunctions_2_0_GlGetPointerv(QOpenGLFunctions_2_0* self, uint32_t pname, void** params) {
	self->glGetPointerv(pname, params);
}

void QOpenGLFunctions_2_0_GlDrawElements(QOpenGLFunctions_2_0* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawElements(mode, count, typeVal, indices);
}

void QOpenGLFunctions_2_0_GlDrawArrays(QOpenGLFunctions_2_0* self, uint32_t mode, int32_t first, int32_t count) {
	self->glDrawArrays(mode, first, count);
}

void QOpenGLFunctions_2_0_GlCopyTexSubImage3D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void QOpenGLFunctions_2_0_GlTexSubImage3D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, pixels);
}

void QOpenGLFunctions_2_0_GlTexImage3D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage3D(target, level, internalformat, width, height, depth, border, format, typeVal, pixels);
}

void QOpenGLFunctions_2_0_GlDrawRangeElements(QOpenGLFunctions_2_0* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawRangeElements(mode, start, end, count, typeVal, indices);
}

void QOpenGLFunctions_2_0_GlBlendEquation(QOpenGLFunctions_2_0* self, uint32_t mode) {
	self->glBlendEquation(mode);
}

void QOpenGLFunctions_2_0_GlBlendColor(QOpenGLFunctions_2_0* self, float red, float green, float blue, float alpha) {
	self->glBlendColor(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlGetCompressedTexImage(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, void* img) {
	self->glGetCompressedTexImage(target, level, img);
}

void QOpenGLFunctions_2_0_GlCompressedTexSubImage1D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void QOpenGLFunctions_2_0_GlCompressedTexSubImage2D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void QOpenGLFunctions_2_0_GlCompressedTexSubImage3D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void QOpenGLFunctions_2_0_GlCompressedTexImage1D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void QOpenGLFunctions_2_0_GlCompressedTexImage2D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void QOpenGLFunctions_2_0_GlCompressedTexImage3D(QOpenGLFunctions_2_0* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void QOpenGLFunctions_2_0_GlSampleCoverage(QOpenGLFunctions_2_0* self, float value, unsigned char invert) {
	self->glSampleCoverage(value, invert);
}

void QOpenGLFunctions_2_0_GlActiveTexture(QOpenGLFunctions_2_0* self, uint32_t texture) {
	self->glActiveTexture(texture);
}

void QOpenGLFunctions_2_0_GlPointParameteriv(QOpenGLFunctions_2_0* self, uint32_t pname, const int32_t* params) {
	self->glPointParameteriv(pname, params);
}

void QOpenGLFunctions_2_0_GlPointParameteri(QOpenGLFunctions_2_0* self, uint32_t pname, int32_t param) {
	self->glPointParameteri(pname, param);
}

void QOpenGLFunctions_2_0_GlPointParameterfv(QOpenGLFunctions_2_0* self, uint32_t pname, const float* params) {
	self->glPointParameterfv(pname, params);
}

void QOpenGLFunctions_2_0_GlPointParameterf(QOpenGLFunctions_2_0* self, uint32_t pname, float param) {
	self->glPointParameterf(pname, param);
}

void QOpenGLFunctions_2_0_GlMultiDrawElements(QOpenGLFunctions_2_0* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount) {
	self->glMultiDrawElements(mode, count, typeVal, indices, drawcount);
}

void QOpenGLFunctions_2_0_GlMultiDrawArrays(QOpenGLFunctions_2_0* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
	self->glMultiDrawArrays(mode, first, count, drawcount);
}

void QOpenGLFunctions_2_0_GlBlendFuncSeparate(QOpenGLFunctions_2_0* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
	self->glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void QOpenGLFunctions_2_0_GlGetBufferPointerv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, void** params) {
	self->glGetBufferPointerv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetBufferParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetBufferParameteriv(target, pname, params);
}

unsigned char QOpenGLFunctions_2_0_GlUnmapBuffer(QOpenGLFunctions_2_0* self, uint32_t target) {
	return self->glUnmapBuffer(target);
}

void* QOpenGLFunctions_2_0_GlMapBuffer(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t access) {
	return self->glMapBuffer(target, access);
}

void QOpenGLFunctions_2_0_GlGetBufferSubData(QOpenGLFunctions_2_0* self, uint32_t target, int64_t offset, int64_t size, void* data) {
	self->glGetBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_2_0_GlBufferSubData(QOpenGLFunctions_2_0* self, uint32_t target, int64_t offset, int64_t size, const void* data) {
	self->glBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_2_0_GlBufferData(QOpenGLFunctions_2_0* self, uint32_t target, int64_t size, const void* data, uint32_t usage) {
	self->glBufferData(target, size, data, usage);
}

unsigned char QOpenGLFunctions_2_0_GlIsBuffer(QOpenGLFunctions_2_0* self, uint32_t buffer) {
	return self->glIsBuffer(buffer);
}

void QOpenGLFunctions_2_0_GlGenBuffers(QOpenGLFunctions_2_0* self, int32_t n, uint32_t* buffers) {
	self->glGenBuffers(n, buffers);
}

void QOpenGLFunctions_2_0_GlDeleteBuffers(QOpenGLFunctions_2_0* self, int32_t n, const uint32_t* buffers) {
	self->glDeleteBuffers(n, buffers);
}

void QOpenGLFunctions_2_0_GlBindBuffer(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t buffer) {
	self->glBindBuffer(target, buffer);
}

void QOpenGLFunctions_2_0_GlGetQueryObjectuiv(QOpenGLFunctions_2_0* self, uint32_t id, uint32_t pname, uint32_t* params) {
	self->glGetQueryObjectuiv(id, pname, params);
}

void QOpenGLFunctions_2_0_GlGetQueryObjectiv(QOpenGLFunctions_2_0* self, uint32_t id, uint32_t pname, int32_t* params) {
	self->glGetQueryObjectiv(id, pname, params);
}

void QOpenGLFunctions_2_0_GlGetQueryiv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetQueryiv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlEndQuery(QOpenGLFunctions_2_0* self, uint32_t target) {
	self->glEndQuery(target);
}

void QOpenGLFunctions_2_0_GlBeginQuery(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t id) {
	self->glBeginQuery(target, id);
}

unsigned char QOpenGLFunctions_2_0_GlIsQuery(QOpenGLFunctions_2_0* self, uint32_t id) {
	return self->glIsQuery(id);
}

void QOpenGLFunctions_2_0_GlDeleteQueries(QOpenGLFunctions_2_0* self, int32_t n, const uint32_t* ids) {
	self->glDeleteQueries(n, ids);
}

void QOpenGLFunctions_2_0_GlGenQueries(QOpenGLFunctions_2_0* self, int32_t n, uint32_t* ids) {
	self->glGenQueries(n, ids);
}

void QOpenGLFunctions_2_0_GlVertexAttribPointer(QOpenGLFunctions_2_0* self, uint32_t index, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* pointer) {
	self->glVertexAttribPointer(index, size, typeVal, normalized, stride, pointer);
}

void QOpenGLFunctions_2_0_GlValidateProgram(QOpenGLFunctions_2_0* self, uint32_t program) {
	self->glValidateProgram(program);
}

void QOpenGLFunctions_2_0_GlUniformMatrix4fv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4fv(location, count, transpose, value);
}

void QOpenGLFunctions_2_0_GlUniformMatrix3fv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3fv(location, count, transpose, value);
}

void QOpenGLFunctions_2_0_GlUniformMatrix2fv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2fv(location, count, transpose, value);
}

void QOpenGLFunctions_2_0_GlUniform4iv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform4iv(location, count, value);
}

void QOpenGLFunctions_2_0_GlUniform3iv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform3iv(location, count, value);
}

void QOpenGLFunctions_2_0_GlUniform2iv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform2iv(location, count, value);
}

void QOpenGLFunctions_2_0_GlUniform1iv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform1iv(location, count, value);
}

void QOpenGLFunctions_2_0_GlUniform4fv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, const float* value) {
	self->glUniform4fv(location, count, value);
}

void QOpenGLFunctions_2_0_GlUniform3fv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, const float* value) {
	self->glUniform3fv(location, count, value);
}

void QOpenGLFunctions_2_0_GlUniform2fv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, const float* value) {
	self->glUniform2fv(location, count, value);
}

void QOpenGLFunctions_2_0_GlUniform1fv(QOpenGLFunctions_2_0* self, int32_t location, int32_t count, const float* value) {
	self->glUniform1fv(location, count, value);
}

void QOpenGLFunctions_2_0_GlUniform4i(QOpenGLFunctions_2_0* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
	self->glUniform4i(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_2_0_GlUniform3i(QOpenGLFunctions_2_0* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
	self->glUniform3i(location, v0, v1, v2);
}

void QOpenGLFunctions_2_0_GlUniform2i(QOpenGLFunctions_2_0* self, int32_t location, int32_t v0, int32_t v1) {
	self->glUniform2i(location, v0, v1);
}

void QOpenGLFunctions_2_0_GlUniform1i(QOpenGLFunctions_2_0* self, int32_t location, int32_t v0) {
	self->glUniform1i(location, v0);
}

void QOpenGLFunctions_2_0_GlUniform4f(QOpenGLFunctions_2_0* self, int32_t location, float v0, float v1, float v2, float v3) {
	self->glUniform4f(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_2_0_GlUniform3f(QOpenGLFunctions_2_0* self, int32_t location, float v0, float v1, float v2) {
	self->glUniform3f(location, v0, v1, v2);
}

void QOpenGLFunctions_2_0_GlUniform2f(QOpenGLFunctions_2_0* self, int32_t location, float v0, float v1) {
	self->glUniform2f(location, v0, v1);
}

void QOpenGLFunctions_2_0_GlUniform1f(QOpenGLFunctions_2_0* self, int32_t location, float v0) {
	self->glUniform1f(location, v0);
}

void QOpenGLFunctions_2_0_GlUseProgram(QOpenGLFunctions_2_0* self, uint32_t program) {
	self->glUseProgram(program);
}

void QOpenGLFunctions_2_0_GlShaderSource(QOpenGLFunctions_2_0* self, uint32_t shader, int32_t count, const GLchar** stringVal, const int32_t* length) {
	self->glShaderSource(shader, count, stringVal, length);
}

void QOpenGLFunctions_2_0_GlLinkProgram(QOpenGLFunctions_2_0* self, uint32_t program) {
	self->glLinkProgram(program);
}

unsigned char QOpenGLFunctions_2_0_GlIsShader(QOpenGLFunctions_2_0* self, uint32_t shader) {
	return self->glIsShader(shader);
}

unsigned char QOpenGLFunctions_2_0_GlIsProgram(QOpenGLFunctions_2_0* self, uint32_t program) {
	return self->glIsProgram(program);
}

void QOpenGLFunctions_2_0_GlGetVertexAttribPointerv(QOpenGLFunctions_2_0* self, uint32_t index, uint32_t pname, void** pointer) {
	self->glGetVertexAttribPointerv(index, pname, pointer);
}

void QOpenGLFunctions_2_0_GlGetVertexAttribiv(QOpenGLFunctions_2_0* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribiv(index, pname, params);
}

void QOpenGLFunctions_2_0_GlGetVertexAttribfv(QOpenGLFunctions_2_0* self, uint32_t index, uint32_t pname, float* params) {
	self->glGetVertexAttribfv(index, pname, params);
}

void QOpenGLFunctions_2_0_GlGetVertexAttribdv(QOpenGLFunctions_2_0* self, uint32_t index, uint32_t pname, double* params) {
	self->glGetVertexAttribdv(index, pname, params);
}

void QOpenGLFunctions_2_0_GlGetUniformiv(QOpenGLFunctions_2_0* self, uint32_t program, int32_t location, int32_t* params) {
	self->glGetUniformiv(program, location, params);
}

void QOpenGLFunctions_2_0_GlGetUniformfv(QOpenGLFunctions_2_0* self, uint32_t program, int32_t location, float* params) {
	self->glGetUniformfv(program, location, params);
}

int32_t QOpenGLFunctions_2_0_GlGetUniformLocation(QOpenGLFunctions_2_0* self, uint32_t program, const GLchar* name) {
	return self->glGetUniformLocation(program, name);
}

void QOpenGLFunctions_2_0_GlGetShaderSource(QOpenGLFunctions_2_0* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* source) {
	self->glGetShaderSource(shader, bufSize, length, source);
}

void QOpenGLFunctions_2_0_GlGetShaderInfoLog(QOpenGLFunctions_2_0* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void QOpenGLFunctions_2_0_GlGetShaderiv(QOpenGLFunctions_2_0* self, uint32_t shader, uint32_t pname, int32_t* params) {
	self->glGetShaderiv(shader, pname, params);
}

void QOpenGLFunctions_2_0_GlGetProgramInfoLog(QOpenGLFunctions_2_0* self, uint32_t program, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void QOpenGLFunctions_2_0_GlGetProgramiv(QOpenGLFunctions_2_0* self, uint32_t program, uint32_t pname, int32_t* params) {
	self->glGetProgramiv(program, pname, params);
}

int32_t QOpenGLFunctions_2_0_GlGetAttribLocation(QOpenGLFunctions_2_0* self, uint32_t program, const GLchar* name) {
	return self->glGetAttribLocation(program, name);
}

void QOpenGLFunctions_2_0_GlGetAttachedShaders(QOpenGLFunctions_2_0* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
	self->glGetAttachedShaders(program, maxCount, count, obj);
}

void QOpenGLFunctions_2_0_GlEnableVertexAttribArray(QOpenGLFunctions_2_0* self, uint32_t index) {
	self->glEnableVertexAttribArray(index);
}

void QOpenGLFunctions_2_0_GlDisableVertexAttribArray(QOpenGLFunctions_2_0* self, uint32_t index) {
	self->glDisableVertexAttribArray(index);
}

void QOpenGLFunctions_2_0_GlDetachShader(QOpenGLFunctions_2_0* self, uint32_t program, uint32_t shader) {
	self->glDetachShader(program, shader);
}

void QOpenGLFunctions_2_0_GlDeleteShader(QOpenGLFunctions_2_0* self, uint32_t shader) {
	self->glDeleteShader(shader);
}

void QOpenGLFunctions_2_0_GlDeleteProgram(QOpenGLFunctions_2_0* self, uint32_t program) {
	self->glDeleteProgram(program);
}

uint32_t QOpenGLFunctions_2_0_GlCreateShader(QOpenGLFunctions_2_0* self, uint32_t typeVal) {
	return self->glCreateShader(typeVal);
}

uint32_t QOpenGLFunctions_2_0_GlCreateProgram(QOpenGLFunctions_2_0* self) {
	return self->glCreateProgram();
}

void QOpenGLFunctions_2_0_GlCompileShader(QOpenGLFunctions_2_0* self, uint32_t shader) {
	self->glCompileShader(shader);
}

void QOpenGLFunctions_2_0_GlBindAttribLocation(QOpenGLFunctions_2_0* self, uint32_t program, uint32_t index, const GLchar* name) {
	self->glBindAttribLocation(program, index, name);
}

void QOpenGLFunctions_2_0_GlAttachShader(QOpenGLFunctions_2_0* self, uint32_t program, uint32_t shader) {
	self->glAttachShader(program, shader);
}

void QOpenGLFunctions_2_0_GlStencilMaskSeparate(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t mask) {
	self->glStencilMaskSeparate(face, mask);
}

void QOpenGLFunctions_2_0_GlStencilFuncSeparate(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFuncSeparate(face, func, ref, mask);
}

void QOpenGLFunctions_2_0_GlStencilOpSeparate(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
	self->glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void QOpenGLFunctions_2_0_GlBlendEquationSeparate(QOpenGLFunctions_2_0* self, uint32_t modeRGB, uint32_t modeAlpha) {
	self->glBlendEquationSeparate(modeRGB, modeAlpha);
}

void QOpenGLFunctions_2_0_GlTranslatef(QOpenGLFunctions_2_0* self, float x, float y, float z) {
	self->glTranslatef(x, y, z);
}

void QOpenGLFunctions_2_0_GlTranslated(QOpenGLFunctions_2_0* self, double x, double y, double z) {
	self->glTranslated(x, y, z);
}

void QOpenGLFunctions_2_0_GlScalef(QOpenGLFunctions_2_0* self, float x, float y, float z) {
	self->glScalef(x, y, z);
}

void QOpenGLFunctions_2_0_GlScaled(QOpenGLFunctions_2_0* self, double x, double y, double z) {
	self->glScaled(x, y, z);
}

void QOpenGLFunctions_2_0_GlRotatef(QOpenGLFunctions_2_0* self, float angle, float x, float y, float z) {
	self->glRotatef(angle, x, y, z);
}

void QOpenGLFunctions_2_0_GlRotated(QOpenGLFunctions_2_0* self, double angle, double x, double y, double z) {
	self->glRotated(angle, x, y, z);
}

void QOpenGLFunctions_2_0_GlPushMatrix(QOpenGLFunctions_2_0* self) {
	self->glPushMatrix();
}

void QOpenGLFunctions_2_0_GlPopMatrix(QOpenGLFunctions_2_0* self) {
	self->glPopMatrix();
}

void QOpenGLFunctions_2_0_GlOrtho(QOpenGLFunctions_2_0* self, double left, double right, double bottom, double top, double zNear, double zFar) {
	self->glOrtho(left, right, bottom, top, zNear, zFar);
}

void QOpenGLFunctions_2_0_GlMultMatrixd(QOpenGLFunctions_2_0* self, const double* m) {
	self->glMultMatrixd(m);
}

void QOpenGLFunctions_2_0_GlMultMatrixf(QOpenGLFunctions_2_0* self, const float* m) {
	self->glMultMatrixf(m);
}

void QOpenGLFunctions_2_0_GlMatrixMode(QOpenGLFunctions_2_0* self, uint32_t mode) {
	self->glMatrixMode(mode);
}

void QOpenGLFunctions_2_0_GlLoadMatrixd(QOpenGLFunctions_2_0* self, const double* m) {
	self->glLoadMatrixd(m);
}

void QOpenGLFunctions_2_0_GlLoadMatrixf(QOpenGLFunctions_2_0* self, const float* m) {
	self->glLoadMatrixf(m);
}

void QOpenGLFunctions_2_0_GlLoadIdentity(QOpenGLFunctions_2_0* self) {
	self->glLoadIdentity();
}

void QOpenGLFunctions_2_0_GlFrustum(QOpenGLFunctions_2_0* self, double left, double right, double bottom, double top, double zNear, double zFar) {
	self->glFrustum(left, right, bottom, top, zNear, zFar);
}

unsigned char QOpenGLFunctions_2_0_GlIsList(QOpenGLFunctions_2_0* self, uint32_t list) {
	return self->glIsList(list);
}

void QOpenGLFunctions_2_0_GlGetTexGeniv(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, int32_t* params) {
	self->glGetTexGeniv(coord, pname, params);
}

void QOpenGLFunctions_2_0_GlGetTexGenfv(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, float* params) {
	self->glGetTexGenfv(coord, pname, params);
}

void QOpenGLFunctions_2_0_GlGetTexGendv(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, double* params) {
	self->glGetTexGendv(coord, pname, params);
}

void QOpenGLFunctions_2_0_GlGetTexEnviv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexEnviv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetTexEnvfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexEnvfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetPolygonStipple(QOpenGLFunctions_2_0* self, uint8_t* mask) {
	self->glGetPolygonStipple(mask);
}

void QOpenGLFunctions_2_0_GlGetPixelMapusv(QOpenGLFunctions_2_0* self, uint32_t mapVal, uint16_t* values) {
	self->glGetPixelMapusv(mapVal, values);
}

void QOpenGLFunctions_2_0_GlGetPixelMapuiv(QOpenGLFunctions_2_0* self, uint32_t mapVal, uint32_t* values) {
	self->glGetPixelMapuiv(mapVal, values);
}

void QOpenGLFunctions_2_0_GlGetPixelMapfv(QOpenGLFunctions_2_0* self, uint32_t mapVal, float* values) {
	self->glGetPixelMapfv(mapVal, values);
}

void QOpenGLFunctions_2_0_GlGetMaterialiv(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t pname, int32_t* params) {
	self->glGetMaterialiv(face, pname, params);
}

void QOpenGLFunctions_2_0_GlGetMaterialfv(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t pname, float* params) {
	self->glGetMaterialfv(face, pname, params);
}

void QOpenGLFunctions_2_0_GlGetMapiv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t query, int32_t* v) {
	self->glGetMapiv(target, query, v);
}

void QOpenGLFunctions_2_0_GlGetMapfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t query, float* v) {
	self->glGetMapfv(target, query, v);
}

void QOpenGLFunctions_2_0_GlGetMapdv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t query, double* v) {
	self->glGetMapdv(target, query, v);
}

void QOpenGLFunctions_2_0_GlGetLightiv(QOpenGLFunctions_2_0* self, uint32_t light, uint32_t pname, int32_t* params) {
	self->glGetLightiv(light, pname, params);
}

void QOpenGLFunctions_2_0_GlGetLightfv(QOpenGLFunctions_2_0* self, uint32_t light, uint32_t pname, float* params) {
	self->glGetLightfv(light, pname, params);
}

void QOpenGLFunctions_2_0_GlGetClipPlane(QOpenGLFunctions_2_0* self, uint32_t plane, double* equation) {
	self->glGetClipPlane(plane, equation);
}

void QOpenGLFunctions_2_0_GlDrawPixels(QOpenGLFunctions_2_0* self, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glDrawPixels(width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_2_0_GlCopyPixels(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t typeVal) {
	self->glCopyPixels(x, y, width, height, typeVal);
}

void QOpenGLFunctions_2_0_GlPixelMapusv(QOpenGLFunctions_2_0* self, uint32_t mapVal, int32_t mapsize, const uint16_t* values) {
	self->glPixelMapusv(mapVal, mapsize, values);
}

void QOpenGLFunctions_2_0_GlPixelMapuiv(QOpenGLFunctions_2_0* self, uint32_t mapVal, int32_t mapsize, const uint32_t* values) {
	self->glPixelMapuiv(mapVal, mapsize, values);
}

void QOpenGLFunctions_2_0_GlPixelMapfv(QOpenGLFunctions_2_0* self, uint32_t mapVal, int32_t mapsize, const float* values) {
	self->glPixelMapfv(mapVal, mapsize, values);
}

void QOpenGLFunctions_2_0_GlPixelTransferi(QOpenGLFunctions_2_0* self, uint32_t pname, int32_t param) {
	self->glPixelTransferi(pname, param);
}

void QOpenGLFunctions_2_0_GlPixelTransferf(QOpenGLFunctions_2_0* self, uint32_t pname, float param) {
	self->glPixelTransferf(pname, param);
}

void QOpenGLFunctions_2_0_GlPixelZoom(QOpenGLFunctions_2_0* self, float xfactor, float yfactor) {
	self->glPixelZoom(xfactor, yfactor);
}

void QOpenGLFunctions_2_0_GlAlphaFunc(QOpenGLFunctions_2_0* self, uint32_t func, float ref) {
	self->glAlphaFunc(func, ref);
}

void QOpenGLFunctions_2_0_GlEvalPoint2(QOpenGLFunctions_2_0* self, int32_t i, int32_t j) {
	self->glEvalPoint2(i, j);
}

void QOpenGLFunctions_2_0_GlEvalMesh2(QOpenGLFunctions_2_0* self, uint32_t mode, int32_t i1Val, int32_t i2Val, int32_t j1, int32_t j2) {
	self->glEvalMesh2(mode, i1Val, i2Val, j1, j2);
}

void QOpenGLFunctions_2_0_GlEvalPoint1(QOpenGLFunctions_2_0* self, int32_t i) {
	self->glEvalPoint1(i);
}

void QOpenGLFunctions_2_0_GlEvalMesh1(QOpenGLFunctions_2_0* self, uint32_t mode, int32_t i1Val, int32_t i2Val) {
	self->glEvalMesh1(mode, i1Val, i2Val);
}

void QOpenGLFunctions_2_0_GlEvalCoord2fv(QOpenGLFunctions_2_0* self, const float* u) {
	self->glEvalCoord2fv(u);
}

void QOpenGLFunctions_2_0_GlEvalCoord2f(QOpenGLFunctions_2_0* self, float u, float v) {
	self->glEvalCoord2f(u, v);
}

void QOpenGLFunctions_2_0_GlEvalCoord2dv(QOpenGLFunctions_2_0* self, const double* u) {
	self->glEvalCoord2dv(u);
}

void QOpenGLFunctions_2_0_GlEvalCoord2d(QOpenGLFunctions_2_0* self, double u, double v) {
	self->glEvalCoord2d(u, v);
}

void QOpenGLFunctions_2_0_GlEvalCoord1fv(QOpenGLFunctions_2_0* self, const float* u) {
	self->glEvalCoord1fv(u);
}

void QOpenGLFunctions_2_0_GlEvalCoord1f(QOpenGLFunctions_2_0* self, float u) {
	self->glEvalCoord1f(u);
}

void QOpenGLFunctions_2_0_GlEvalCoord1dv(QOpenGLFunctions_2_0* self, const double* u) {
	self->glEvalCoord1dv(u);
}

void QOpenGLFunctions_2_0_GlEvalCoord1d(QOpenGLFunctions_2_0* self, double u) {
	self->glEvalCoord1d(u);
}

void QOpenGLFunctions_2_0_GlMapGrid2f(QOpenGLFunctions_2_0* self, int32_t un, float u1Val, float u2Val, int32_t vn, float v1, float v2) {
	self->glMapGrid2f(un, u1Val, u2Val, vn, v1, v2);
}

void QOpenGLFunctions_2_0_GlMapGrid2d(QOpenGLFunctions_2_0* self, int32_t un, double u1Val, double u2Val, int32_t vn, double v1, double v2) {
	self->glMapGrid2d(un, u1Val, u2Val, vn, v1, v2);
}

void QOpenGLFunctions_2_0_GlMapGrid1f(QOpenGLFunctions_2_0* self, int32_t un, float u1Val, float u2Val) {
	self->glMapGrid1f(un, u1Val, u2Val);
}

void QOpenGLFunctions_2_0_GlMapGrid1d(QOpenGLFunctions_2_0* self, int32_t un, double u1Val, double u2Val) {
	self->glMapGrid1d(un, u1Val, u2Val);
}

void QOpenGLFunctions_2_0_GlMap2f(QOpenGLFunctions_2_0* self, uint32_t target, float u1Val, float u2Val, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, const float* points) {
	self->glMap2f(target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, points);
}

void QOpenGLFunctions_2_0_GlMap2d(QOpenGLFunctions_2_0* self, uint32_t target, double u1Val, double u2Val, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, const double* points) {
	self->glMap2d(target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, points);
}

void QOpenGLFunctions_2_0_GlMap1f(QOpenGLFunctions_2_0* self, uint32_t target, float u1Val, float u2Val, int32_t stride, int32_t order, const float* points) {
	self->glMap1f(target, u1Val, u2Val, stride, order, points);
}

void QOpenGLFunctions_2_0_GlMap1d(QOpenGLFunctions_2_0* self, uint32_t target, double u1Val, double u2Val, int32_t stride, int32_t order, const double* points) {
	self->glMap1d(target, u1Val, u2Val, stride, order, points);
}

void QOpenGLFunctions_2_0_GlPushAttrib(QOpenGLFunctions_2_0* self, uint32_t mask) {
	self->glPushAttrib(mask);
}

void QOpenGLFunctions_2_0_GlPopAttrib(QOpenGLFunctions_2_0* self) {
	self->glPopAttrib();
}

void QOpenGLFunctions_2_0_GlAccum(QOpenGLFunctions_2_0* self, uint32_t op, float value) {
	self->glAccum(op, value);
}

void QOpenGLFunctions_2_0_GlIndexMask(QOpenGLFunctions_2_0* self, uint32_t mask) {
	self->glIndexMask(mask);
}

void QOpenGLFunctions_2_0_GlClearIndex(QOpenGLFunctions_2_0* self, float c) {
	self->glClearIndex(c);
}

void QOpenGLFunctions_2_0_GlClearAccum(QOpenGLFunctions_2_0* self, float red, float green, float blue, float alpha) {
	self->glClearAccum(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlPushName(QOpenGLFunctions_2_0* self, uint32_t name) {
	self->glPushName(name);
}

void QOpenGLFunctions_2_0_GlPopName(QOpenGLFunctions_2_0* self) {
	self->glPopName();
}

void QOpenGLFunctions_2_0_GlPassThrough(QOpenGLFunctions_2_0* self, float token) {
	self->glPassThrough(token);
}

void QOpenGLFunctions_2_0_GlLoadName(QOpenGLFunctions_2_0* self, uint32_t name) {
	self->glLoadName(name);
}

void QOpenGLFunctions_2_0_GlInitNames(QOpenGLFunctions_2_0* self) {
	self->glInitNames();
}

int32_t QOpenGLFunctions_2_0_GlRenderMode(QOpenGLFunctions_2_0* self, uint32_t mode) {
	return self->glRenderMode(mode);
}

void QOpenGLFunctions_2_0_GlSelectBuffer(QOpenGLFunctions_2_0* self, int32_t size, uint32_t* buffer) {
	self->glSelectBuffer(size, buffer);
}

void QOpenGLFunctions_2_0_GlFeedbackBuffer(QOpenGLFunctions_2_0* self, int32_t size, uint32_t typeVal, float* buffer) {
	self->glFeedbackBuffer(size, typeVal, buffer);
}

void QOpenGLFunctions_2_0_GlTexGeniv(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, const int32_t* params) {
	self->glTexGeniv(coord, pname, params);
}

void QOpenGLFunctions_2_0_GlTexGeni(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, int32_t param) {
	self->glTexGeni(coord, pname, param);
}

void QOpenGLFunctions_2_0_GlTexGenfv(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, const float* params) {
	self->glTexGenfv(coord, pname, params);
}

void QOpenGLFunctions_2_0_GlTexGenf(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, float param) {
	self->glTexGenf(coord, pname, param);
}

void QOpenGLFunctions_2_0_GlTexGendv(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, const double* params) {
	self->glTexGendv(coord, pname, params);
}

void QOpenGLFunctions_2_0_GlTexGend(QOpenGLFunctions_2_0* self, uint32_t coord, uint32_t pname, double param) {
	self->glTexGend(coord, pname, param);
}

void QOpenGLFunctions_2_0_GlTexEnviv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexEnviv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlTexEnvi(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexEnvi(target, pname, param);
}

void QOpenGLFunctions_2_0_GlTexEnvfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexEnvfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlTexEnvf(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float param) {
	self->glTexEnvf(target, pname, param);
}

void QOpenGLFunctions_2_0_GlShadeModel(QOpenGLFunctions_2_0* self, uint32_t mode) {
	self->glShadeModel(mode);
}

void QOpenGLFunctions_2_0_GlPolygonStipple(QOpenGLFunctions_2_0* self, const uint8_t* mask) {
	self->glPolygonStipple(mask);
}

void QOpenGLFunctions_2_0_GlMaterialiv(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t pname, const int32_t* params) {
	self->glMaterialiv(face, pname, params);
}

void QOpenGLFunctions_2_0_GlMateriali(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t pname, int32_t param) {
	self->glMateriali(face, pname, param);
}

void QOpenGLFunctions_2_0_GlMaterialfv(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t pname, const float* params) {
	self->glMaterialfv(face, pname, params);
}

void QOpenGLFunctions_2_0_GlMaterialf(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t pname, float param) {
	self->glMaterialf(face, pname, param);
}

void QOpenGLFunctions_2_0_GlLineStipple(QOpenGLFunctions_2_0* self, int32_t factor, uint16_t pattern) {
	self->glLineStipple(factor, pattern);
}

void QOpenGLFunctions_2_0_GlLightModeliv(QOpenGLFunctions_2_0* self, uint32_t pname, const int32_t* params) {
	self->glLightModeliv(pname, params);
}

void QOpenGLFunctions_2_0_GlLightModeli(QOpenGLFunctions_2_0* self, uint32_t pname, int32_t param) {
	self->glLightModeli(pname, param);
}

void QOpenGLFunctions_2_0_GlLightModelfv(QOpenGLFunctions_2_0* self, uint32_t pname, const float* params) {
	self->glLightModelfv(pname, params);
}

void QOpenGLFunctions_2_0_GlLightModelf(QOpenGLFunctions_2_0* self, uint32_t pname, float param) {
	self->glLightModelf(pname, param);
}

void QOpenGLFunctions_2_0_GlLightiv(QOpenGLFunctions_2_0* self, uint32_t light, uint32_t pname, const int32_t* params) {
	self->glLightiv(light, pname, params);
}

void QOpenGLFunctions_2_0_GlLighti(QOpenGLFunctions_2_0* self, uint32_t light, uint32_t pname, int32_t param) {
	self->glLighti(light, pname, param);
}

void QOpenGLFunctions_2_0_GlLightfv(QOpenGLFunctions_2_0* self, uint32_t light, uint32_t pname, const float* params) {
	self->glLightfv(light, pname, params);
}

void QOpenGLFunctions_2_0_GlLightf(QOpenGLFunctions_2_0* self, uint32_t light, uint32_t pname, float param) {
	self->glLightf(light, pname, param);
}

void QOpenGLFunctions_2_0_GlFogiv(QOpenGLFunctions_2_0* self, uint32_t pname, const int32_t* params) {
	self->glFogiv(pname, params);
}

void QOpenGLFunctions_2_0_GlFogi(QOpenGLFunctions_2_0* self, uint32_t pname, int32_t param) {
	self->glFogi(pname, param);
}

void QOpenGLFunctions_2_0_GlFogfv(QOpenGLFunctions_2_0* self, uint32_t pname, const float* params) {
	self->glFogfv(pname, params);
}

void QOpenGLFunctions_2_0_GlFogf(QOpenGLFunctions_2_0* self, uint32_t pname, float param) {
	self->glFogf(pname, param);
}

void QOpenGLFunctions_2_0_GlColorMaterial(QOpenGLFunctions_2_0* self, uint32_t face, uint32_t mode) {
	self->glColorMaterial(face, mode);
}

void QOpenGLFunctions_2_0_GlClipPlane(QOpenGLFunctions_2_0* self, uint32_t plane, const double* equation) {
	self->glClipPlane(plane, equation);
}

void QOpenGLFunctions_2_0_GlVertex4sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glVertex4sv(v);
}

void QOpenGLFunctions_2_0_GlVertex4s(QOpenGLFunctions_2_0* self, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glVertex4s(x, y, z, w);
}

void QOpenGLFunctions_2_0_GlVertex4iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glVertex4iv(v);
}

void QOpenGLFunctions_2_0_GlVertex4i(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glVertex4i(x, y, z, w);
}

void QOpenGLFunctions_2_0_GlVertex4fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glVertex4fv(v);
}

void QOpenGLFunctions_2_0_GlVertex4f(QOpenGLFunctions_2_0* self, float x, float y, float z, float w) {
	self->glVertex4f(x, y, z, w);
}

void QOpenGLFunctions_2_0_GlVertex4dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glVertex4dv(v);
}

void QOpenGLFunctions_2_0_GlVertex4d(QOpenGLFunctions_2_0* self, double x, double y, double z, double w) {
	self->glVertex4d(x, y, z, w);
}

void QOpenGLFunctions_2_0_GlVertex3sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glVertex3sv(v);
}

void QOpenGLFunctions_2_0_GlVertex3s(QOpenGLFunctions_2_0* self, int16_t x, int16_t y, int16_t z) {
	self->glVertex3s(x, y, z);
}

void QOpenGLFunctions_2_0_GlVertex3iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glVertex3iv(v);
}

void QOpenGLFunctions_2_0_GlVertex3i(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t z) {
	self->glVertex3i(x, y, z);
}

void QOpenGLFunctions_2_0_GlVertex3fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glVertex3fv(v);
}

void QOpenGLFunctions_2_0_GlVertex3f(QOpenGLFunctions_2_0* self, float x, float y, float z) {
	self->glVertex3f(x, y, z);
}

void QOpenGLFunctions_2_0_GlVertex3dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glVertex3dv(v);
}

void QOpenGLFunctions_2_0_GlVertex3d(QOpenGLFunctions_2_0* self, double x, double y, double z) {
	self->glVertex3d(x, y, z);
}

void QOpenGLFunctions_2_0_GlVertex2sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glVertex2sv(v);
}

void QOpenGLFunctions_2_0_GlVertex2s(QOpenGLFunctions_2_0* self, int16_t x, int16_t y) {
	self->glVertex2s(x, y);
}

void QOpenGLFunctions_2_0_GlVertex2iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glVertex2iv(v);
}

void QOpenGLFunctions_2_0_GlVertex2i(QOpenGLFunctions_2_0* self, int32_t x, int32_t y) {
	self->glVertex2i(x, y);
}

void QOpenGLFunctions_2_0_GlVertex2fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glVertex2fv(v);
}

void QOpenGLFunctions_2_0_GlVertex2f(QOpenGLFunctions_2_0* self, float x, float y) {
	self->glVertex2f(x, y);
}

void QOpenGLFunctions_2_0_GlVertex2dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glVertex2dv(v);
}

void QOpenGLFunctions_2_0_GlVertex2d(QOpenGLFunctions_2_0* self, double x, double y) {
	self->glVertex2d(x, y);
}

void QOpenGLFunctions_2_0_GlTexCoord4sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glTexCoord4sv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord4s(QOpenGLFunctions_2_0* self, int16_t s, int16_t t, int16_t r, int16_t q) {
	self->glTexCoord4s(s, t, r, q);
}

void QOpenGLFunctions_2_0_GlTexCoord4iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glTexCoord4iv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord4i(QOpenGLFunctions_2_0* self, int32_t s, int32_t t, int32_t r, int32_t q) {
	self->glTexCoord4i(s, t, r, q);
}

void QOpenGLFunctions_2_0_GlTexCoord4fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glTexCoord4fv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord4f(QOpenGLFunctions_2_0* self, float s, float t, float r, float q) {
	self->glTexCoord4f(s, t, r, q);
}

void QOpenGLFunctions_2_0_GlTexCoord4dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glTexCoord4dv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord4d(QOpenGLFunctions_2_0* self, double s, double t, double r, double q) {
	self->glTexCoord4d(s, t, r, q);
}

void QOpenGLFunctions_2_0_GlTexCoord3sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glTexCoord3sv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord3s(QOpenGLFunctions_2_0* self, int16_t s, int16_t t, int16_t r) {
	self->glTexCoord3s(s, t, r);
}

void QOpenGLFunctions_2_0_GlTexCoord3iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glTexCoord3iv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord3i(QOpenGLFunctions_2_0* self, int32_t s, int32_t t, int32_t r) {
	self->glTexCoord3i(s, t, r);
}

void QOpenGLFunctions_2_0_GlTexCoord3fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glTexCoord3fv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord3f(QOpenGLFunctions_2_0* self, float s, float t, float r) {
	self->glTexCoord3f(s, t, r);
}

void QOpenGLFunctions_2_0_GlTexCoord3dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glTexCoord3dv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord3d(QOpenGLFunctions_2_0* self, double s, double t, double r) {
	self->glTexCoord3d(s, t, r);
}

void QOpenGLFunctions_2_0_GlTexCoord2sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glTexCoord2sv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord2s(QOpenGLFunctions_2_0* self, int16_t s, int16_t t) {
	self->glTexCoord2s(s, t);
}

void QOpenGLFunctions_2_0_GlTexCoord2iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glTexCoord2iv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord2i(QOpenGLFunctions_2_0* self, int32_t s, int32_t t) {
	self->glTexCoord2i(s, t);
}

void QOpenGLFunctions_2_0_GlTexCoord2fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glTexCoord2fv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord2f(QOpenGLFunctions_2_0* self, float s, float t) {
	self->glTexCoord2f(s, t);
}

void QOpenGLFunctions_2_0_GlTexCoord2dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glTexCoord2dv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord2d(QOpenGLFunctions_2_0* self, double s, double t) {
	self->glTexCoord2d(s, t);
}

void QOpenGLFunctions_2_0_GlTexCoord1sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glTexCoord1sv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord1s(QOpenGLFunctions_2_0* self, int16_t s) {
	self->glTexCoord1s(s);
}

void QOpenGLFunctions_2_0_GlTexCoord1iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glTexCoord1iv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord1i(QOpenGLFunctions_2_0* self, int32_t s) {
	self->glTexCoord1i(s);
}

void QOpenGLFunctions_2_0_GlTexCoord1fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glTexCoord1fv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord1f(QOpenGLFunctions_2_0* self, float s) {
	self->glTexCoord1f(s);
}

void QOpenGLFunctions_2_0_GlTexCoord1dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glTexCoord1dv(v);
}

void QOpenGLFunctions_2_0_GlTexCoord1d(QOpenGLFunctions_2_0* self, double s) {
	self->glTexCoord1d(s);
}

void QOpenGLFunctions_2_0_GlRectsv(QOpenGLFunctions_2_0* self, const int16_t* v1, const int16_t* v2) {
	self->glRectsv(v1, v2);
}

void QOpenGLFunctions_2_0_GlRects(QOpenGLFunctions_2_0* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
	self->glRects(x1, y1, x2, y2);
}

void QOpenGLFunctions_2_0_GlRectiv(QOpenGLFunctions_2_0* self, const int32_t* v1, const int32_t* v2) {
	self->glRectiv(v1, v2);
}

void QOpenGLFunctions_2_0_GlRecti(QOpenGLFunctions_2_0* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	self->glRecti(x1, y1, x2, y2);
}

void QOpenGLFunctions_2_0_GlRectfv(QOpenGLFunctions_2_0* self, const float* v1, const float* v2) {
	self->glRectfv(v1, v2);
}

void QOpenGLFunctions_2_0_GlRectf(QOpenGLFunctions_2_0* self, float x1, float y1, float x2, float y2) {
	self->glRectf(x1, y1, x2, y2);
}

void QOpenGLFunctions_2_0_GlRectdv(QOpenGLFunctions_2_0* self, const double* v1, const double* v2) {
	self->glRectdv(v1, v2);
}

void QOpenGLFunctions_2_0_GlRectd(QOpenGLFunctions_2_0* self, double x1, double y1, double x2, double y2) {
	self->glRectd(x1, y1, x2, y2);
}

void QOpenGLFunctions_2_0_GlRasterPos4sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glRasterPos4sv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos4s(QOpenGLFunctions_2_0* self, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glRasterPos4s(x, y, z, w);
}

void QOpenGLFunctions_2_0_GlRasterPos4iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glRasterPos4iv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos4i(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glRasterPos4i(x, y, z, w);
}

void QOpenGLFunctions_2_0_GlRasterPos4fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glRasterPos4fv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos4f(QOpenGLFunctions_2_0* self, float x, float y, float z, float w) {
	self->glRasterPos4f(x, y, z, w);
}

void QOpenGLFunctions_2_0_GlRasterPos4dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glRasterPos4dv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos4d(QOpenGLFunctions_2_0* self, double x, double y, double z, double w) {
	self->glRasterPos4d(x, y, z, w);
}

void QOpenGLFunctions_2_0_GlRasterPos3sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glRasterPos3sv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos3s(QOpenGLFunctions_2_0* self, int16_t x, int16_t y, int16_t z) {
	self->glRasterPos3s(x, y, z);
}

void QOpenGLFunctions_2_0_GlRasterPos3iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glRasterPos3iv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos3i(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t z) {
	self->glRasterPos3i(x, y, z);
}

void QOpenGLFunctions_2_0_GlRasterPos3fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glRasterPos3fv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos3f(QOpenGLFunctions_2_0* self, float x, float y, float z) {
	self->glRasterPos3f(x, y, z);
}

void QOpenGLFunctions_2_0_GlRasterPos3dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glRasterPos3dv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos3d(QOpenGLFunctions_2_0* self, double x, double y, double z) {
	self->glRasterPos3d(x, y, z);
}

void QOpenGLFunctions_2_0_GlRasterPos2sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glRasterPos2sv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos2s(QOpenGLFunctions_2_0* self, int16_t x, int16_t y) {
	self->glRasterPos2s(x, y);
}

void QOpenGLFunctions_2_0_GlRasterPos2iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glRasterPos2iv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos2i(QOpenGLFunctions_2_0* self, int32_t x, int32_t y) {
	self->glRasterPos2i(x, y);
}

void QOpenGLFunctions_2_0_GlRasterPos2fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glRasterPos2fv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos2f(QOpenGLFunctions_2_0* self, float x, float y) {
	self->glRasterPos2f(x, y);
}

void QOpenGLFunctions_2_0_GlRasterPos2dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glRasterPos2dv(v);
}

void QOpenGLFunctions_2_0_GlRasterPos2d(QOpenGLFunctions_2_0* self, double x, double y) {
	self->glRasterPos2d(x, y);
}

void QOpenGLFunctions_2_0_GlNormal3sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glNormal3sv(v);
}

void QOpenGLFunctions_2_0_GlNormal3s(QOpenGLFunctions_2_0* self, int16_t nx, int16_t ny, int16_t nz) {
	self->glNormal3s(nx, ny, nz);
}

void QOpenGLFunctions_2_0_GlNormal3iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glNormal3iv(v);
}

void QOpenGLFunctions_2_0_GlNormal3i(QOpenGLFunctions_2_0* self, int32_t nx, int32_t ny, int32_t nz) {
	self->glNormal3i(nx, ny, nz);
}

void QOpenGLFunctions_2_0_GlNormal3fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glNormal3fv(v);
}

void QOpenGLFunctions_2_0_GlNormal3f(QOpenGLFunctions_2_0* self, float nx, float ny, float nz) {
	self->glNormal3f(nx, ny, nz);
}

void QOpenGLFunctions_2_0_GlNormal3dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glNormal3dv(v);
}

void QOpenGLFunctions_2_0_GlNormal3d(QOpenGLFunctions_2_0* self, double nx, double ny, double nz) {
	self->glNormal3d(nx, ny, nz);
}

void QOpenGLFunctions_2_0_GlNormal3bv(QOpenGLFunctions_2_0* self, const signed char* v) {
	self->glNormal3bv(v);
}

void QOpenGLFunctions_2_0_GlNormal3b(QOpenGLFunctions_2_0* self, signed char nx, signed char ny, signed char nz) {
	self->glNormal3b(nx, ny, nz);
}

void QOpenGLFunctions_2_0_GlIndexsv(QOpenGLFunctions_2_0* self, const int16_t* c) {
	self->glIndexsv(c);
}

void QOpenGLFunctions_2_0_GlIndexs(QOpenGLFunctions_2_0* self, int16_t c) {
	self->glIndexs(c);
}

void QOpenGLFunctions_2_0_GlIndexiv(QOpenGLFunctions_2_0* self, const int32_t* c) {
	self->glIndexiv(c);
}

void QOpenGLFunctions_2_0_GlIndexi(QOpenGLFunctions_2_0* self, int32_t c) {
	self->glIndexi(c);
}

void QOpenGLFunctions_2_0_GlIndexfv(QOpenGLFunctions_2_0* self, const float* c) {
	self->glIndexfv(c);
}

void QOpenGLFunctions_2_0_GlIndexf(QOpenGLFunctions_2_0* self, float c) {
	self->glIndexf(c);
}

void QOpenGLFunctions_2_0_GlIndexdv(QOpenGLFunctions_2_0* self, const double* c) {
	self->glIndexdv(c);
}

void QOpenGLFunctions_2_0_GlIndexd(QOpenGLFunctions_2_0* self, double c) {
	self->glIndexd(c);
}

void QOpenGLFunctions_2_0_GlEnd(QOpenGLFunctions_2_0* self) {
	self->glEnd();
}

void QOpenGLFunctions_2_0_GlEdgeFlagv(QOpenGLFunctions_2_0* self, const unsigned char* flag) {
	self->glEdgeFlagv(flag);
}

void QOpenGLFunctions_2_0_GlEdgeFlag(QOpenGLFunctions_2_0* self, unsigned char flag) {
	self->glEdgeFlag(flag);
}

void QOpenGLFunctions_2_0_GlColor4usv(QOpenGLFunctions_2_0* self, const uint16_t* v) {
	self->glColor4usv(v);
}

void QOpenGLFunctions_2_0_GlColor4us(QOpenGLFunctions_2_0* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
	self->glColor4us(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlColor4uiv(QOpenGLFunctions_2_0* self, const uint32_t* v) {
	self->glColor4uiv(v);
}

void QOpenGLFunctions_2_0_GlColor4ui(QOpenGLFunctions_2_0* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
	self->glColor4ui(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlColor4ubv(QOpenGLFunctions_2_0* self, const uint8_t* v) {
	self->glColor4ubv(v);
}

void QOpenGLFunctions_2_0_GlColor4ub(QOpenGLFunctions_2_0* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
	self->glColor4ub(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlColor4sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glColor4sv(v);
}

void QOpenGLFunctions_2_0_GlColor4s(QOpenGLFunctions_2_0* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
	self->glColor4s(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlColor4iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glColor4iv(v);
}

void QOpenGLFunctions_2_0_GlColor4i(QOpenGLFunctions_2_0* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
	self->glColor4i(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlColor4fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glColor4fv(v);
}

void QOpenGLFunctions_2_0_GlColor4f(QOpenGLFunctions_2_0* self, float red, float green, float blue, float alpha) {
	self->glColor4f(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlColor4dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glColor4dv(v);
}

void QOpenGLFunctions_2_0_GlColor4d(QOpenGLFunctions_2_0* self, double red, double green, double blue, double alpha) {
	self->glColor4d(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlColor4bv(QOpenGLFunctions_2_0* self, const signed char* v) {
	self->glColor4bv(v);
}

void QOpenGLFunctions_2_0_GlColor4b(QOpenGLFunctions_2_0* self, signed char red, signed char green, signed char blue, signed char alpha) {
	self->glColor4b(red, green, blue, alpha);
}

void QOpenGLFunctions_2_0_GlColor3usv(QOpenGLFunctions_2_0* self, const uint16_t* v) {
	self->glColor3usv(v);
}

void QOpenGLFunctions_2_0_GlColor3us(QOpenGLFunctions_2_0* self, uint16_t red, uint16_t green, uint16_t blue) {
	self->glColor3us(red, green, blue);
}

void QOpenGLFunctions_2_0_GlColor3uiv(QOpenGLFunctions_2_0* self, const uint32_t* v) {
	self->glColor3uiv(v);
}

void QOpenGLFunctions_2_0_GlColor3ui(QOpenGLFunctions_2_0* self, uint32_t red, uint32_t green, uint32_t blue) {
	self->glColor3ui(red, green, blue);
}

void QOpenGLFunctions_2_0_GlColor3ubv(QOpenGLFunctions_2_0* self, const uint8_t* v) {
	self->glColor3ubv(v);
}

void QOpenGLFunctions_2_0_GlColor3ub(QOpenGLFunctions_2_0* self, uint8_t red, uint8_t green, uint8_t blue) {
	self->glColor3ub(red, green, blue);
}

void QOpenGLFunctions_2_0_GlColor3sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glColor3sv(v);
}

void QOpenGLFunctions_2_0_GlColor3s(QOpenGLFunctions_2_0* self, int16_t red, int16_t green, int16_t blue) {
	self->glColor3s(red, green, blue);
}

void QOpenGLFunctions_2_0_GlColor3iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glColor3iv(v);
}

void QOpenGLFunctions_2_0_GlColor3i(QOpenGLFunctions_2_0* self, int32_t red, int32_t green, int32_t blue) {
	self->glColor3i(red, green, blue);
}

void QOpenGLFunctions_2_0_GlColor3fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glColor3fv(v);
}

void QOpenGLFunctions_2_0_GlColor3f(QOpenGLFunctions_2_0* self, float red, float green, float blue) {
	self->glColor3f(red, green, blue);
}

void QOpenGLFunctions_2_0_GlColor3dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glColor3dv(v);
}

void QOpenGLFunctions_2_0_GlColor3d(QOpenGLFunctions_2_0* self, double red, double green, double blue) {
	self->glColor3d(red, green, blue);
}

void QOpenGLFunctions_2_0_GlColor3bv(QOpenGLFunctions_2_0* self, const signed char* v) {
	self->glColor3bv(v);
}

void QOpenGLFunctions_2_0_GlColor3b(QOpenGLFunctions_2_0* self, signed char red, signed char green, signed char blue) {
	self->glColor3b(red, green, blue);
}

void QOpenGLFunctions_2_0_GlBitmap(QOpenGLFunctions_2_0* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, const uint8_t* bitmap) {
	self->glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void QOpenGLFunctions_2_0_GlBegin(QOpenGLFunctions_2_0* self, uint32_t mode) {
	self->glBegin(mode);
}

void QOpenGLFunctions_2_0_GlListBase(QOpenGLFunctions_2_0* self, uint32_t base) {
	self->glListBase(base);
}

uint32_t QOpenGLFunctions_2_0_GlGenLists(QOpenGLFunctions_2_0* self, int32_t range) {
	return self->glGenLists(range);
}

void QOpenGLFunctions_2_0_GlDeleteLists(QOpenGLFunctions_2_0* self, uint32_t list, int32_t range) {
	self->glDeleteLists(list, range);
}

void QOpenGLFunctions_2_0_GlCallLists(QOpenGLFunctions_2_0* self, int32_t n, uint32_t typeVal, const void* lists) {
	self->glCallLists(n, typeVal, lists);
}

void QOpenGLFunctions_2_0_GlCallList(QOpenGLFunctions_2_0* self, uint32_t list) {
	self->glCallList(list);
}

void QOpenGLFunctions_2_0_GlEndList(QOpenGLFunctions_2_0* self) {
	self->glEndList();
}

void QOpenGLFunctions_2_0_GlNewList(QOpenGLFunctions_2_0* self, uint32_t list, uint32_t mode) {
	self->glNewList(list, mode);
}

void QOpenGLFunctions_2_0_GlPushClientAttrib(QOpenGLFunctions_2_0* self, uint32_t mask) {
	self->glPushClientAttrib(mask);
}

void QOpenGLFunctions_2_0_GlPopClientAttrib(QOpenGLFunctions_2_0* self) {
	self->glPopClientAttrib();
}

void QOpenGLFunctions_2_0_GlPrioritizeTextures(QOpenGLFunctions_2_0* self, int32_t n, const uint32_t* textures, const float* priorities) {
	self->glPrioritizeTextures(n, textures, priorities);
}

unsigned char QOpenGLFunctions_2_0_GlAreTexturesResident(QOpenGLFunctions_2_0* self, int32_t n, const uint32_t* textures, unsigned char* residences) {
	return self->glAreTexturesResident(n, textures, residences);
}

void QOpenGLFunctions_2_0_GlVertexPointer(QOpenGLFunctions_2_0* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_2_0_GlTexCoordPointer(QOpenGLFunctions_2_0* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glTexCoordPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_2_0_GlNormalPointer(QOpenGLFunctions_2_0* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glNormalPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_2_0_GlInterleavedArrays(QOpenGLFunctions_2_0* self, uint32_t format, int32_t stride, const void* pointer) {
	self->glInterleavedArrays(format, stride, pointer);
}

void QOpenGLFunctions_2_0_GlIndexPointer(QOpenGLFunctions_2_0* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glIndexPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_2_0_GlEnableClientState(QOpenGLFunctions_2_0* self, uint32_t array) {
	self->glEnableClientState(array);
}

void QOpenGLFunctions_2_0_GlEdgeFlagPointer(QOpenGLFunctions_2_0* self, int32_t stride, const void* pointer) {
	self->glEdgeFlagPointer(stride, pointer);
}

void QOpenGLFunctions_2_0_GlDisableClientState(QOpenGLFunctions_2_0* self, uint32_t array) {
	self->glDisableClientState(array);
}

void QOpenGLFunctions_2_0_GlColorPointer(QOpenGLFunctions_2_0* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glColorPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_2_0_GlArrayElement(QOpenGLFunctions_2_0* self, int32_t i) {
	self->glArrayElement(i);
}

void QOpenGLFunctions_2_0_GlResetMinmax(QOpenGLFunctions_2_0* self, uint32_t target) {
	self->glResetMinmax(target);
}

void QOpenGLFunctions_2_0_GlResetHistogram(QOpenGLFunctions_2_0* self, uint32_t target) {
	self->glResetHistogram(target);
}

void QOpenGLFunctions_2_0_GlMinmax(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t internalformat, unsigned char sink) {
	self->glMinmax(target, internalformat, sink);
}

void QOpenGLFunctions_2_0_GlHistogram(QOpenGLFunctions_2_0* self, uint32_t target, int32_t width, uint32_t internalformat, unsigned char sink) {
	self->glHistogram(target, width, internalformat, sink);
}

void QOpenGLFunctions_2_0_GlGetMinmaxParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetMinmaxParameteriv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetMinmaxParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetMinmaxParameterfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetMinmax(QOpenGLFunctions_2_0* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
	self->glGetMinmax(target, reset, format, typeVal, values);
}

void QOpenGLFunctions_2_0_GlGetHistogramParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetHistogramParameteriv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetHistogramParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetHistogramParameterfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetHistogram(QOpenGLFunctions_2_0* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
	self->glGetHistogram(target, reset, format, typeVal, values);
}

void QOpenGLFunctions_2_0_GlSeparableFilter2D(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* row, const void* column) {
	self->glSeparableFilter2D(target, internalformat, width, height, format, typeVal, row, column);
}

void QOpenGLFunctions_2_0_GlGetSeparableFilter(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t format, uint32_t typeVal, void* row, void* column, void* span) {
	self->glGetSeparableFilter(target, format, typeVal, row, column, span);
}

void QOpenGLFunctions_2_0_GlGetConvolutionParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetConvolutionParameteriv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetConvolutionParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetConvolutionParameterfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetConvolutionFilter(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t format, uint32_t typeVal, void* image) {
	self->glGetConvolutionFilter(target, format, typeVal, image);
}

void QOpenGLFunctions_2_0_GlCopyConvolutionFilter2D(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void QOpenGLFunctions_2_0_GlCopyConvolutionFilter1D(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
	self->glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void QOpenGLFunctions_2_0_GlConvolutionParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glConvolutionParameteriv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlConvolutionParameteri(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t params) {
	self->glConvolutionParameteri(target, pname, params);
}

void QOpenGLFunctions_2_0_GlConvolutionParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, const float* params) {
	self->glConvolutionParameterfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlConvolutionParameterf(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float params) {
	self->glConvolutionParameterf(target, pname, params);
}

void QOpenGLFunctions_2_0_GlConvolutionFilter2D(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* image) {
	self->glConvolutionFilter2D(target, internalformat, width, height, format, typeVal, image);
}

void QOpenGLFunctions_2_0_GlConvolutionFilter1D(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* image) {
	self->glConvolutionFilter1D(target, internalformat, width, format, typeVal, image);
}

void QOpenGLFunctions_2_0_GlCopyColorSubTable(QOpenGLFunctions_2_0* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width) {
	self->glCopyColorSubTable(target, start, x, y, width);
}

void QOpenGLFunctions_2_0_GlColorSubTable(QOpenGLFunctions_2_0* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t typeVal, const void* data) {
	self->glColorSubTable(target, start, count, format, typeVal, data);
}

void QOpenGLFunctions_2_0_GlGetColorTableParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetColorTableParameteriv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetColorTableParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetColorTableParameterfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlGetColorTable(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t format, uint32_t typeVal, void* table) {
	self->glGetColorTable(target, format, typeVal, table);
}

void QOpenGLFunctions_2_0_GlCopyColorTable(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
	self->glCopyColorTable(target, internalformat, x, y, width);
}

void QOpenGLFunctions_2_0_GlColorTableParameteriv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glColorTableParameteriv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlColorTableParameterfv(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t pname, const float* params) {
	self->glColorTableParameterfv(target, pname, params);
}

void QOpenGLFunctions_2_0_GlColorTable(QOpenGLFunctions_2_0* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* table) {
	self->glColorTable(target, internalformat, width, format, typeVal, table);
}

void QOpenGLFunctions_2_0_GlMultTransposeMatrixd(QOpenGLFunctions_2_0* self, const double* m) {
	self->glMultTransposeMatrixd(m);
}

void QOpenGLFunctions_2_0_GlMultTransposeMatrixf(QOpenGLFunctions_2_0* self, const float* m) {
	self->glMultTransposeMatrixf(m);
}

void QOpenGLFunctions_2_0_GlLoadTransposeMatrixd(QOpenGLFunctions_2_0* self, const double* m) {
	self->glLoadTransposeMatrixd(m);
}

void QOpenGLFunctions_2_0_GlLoadTransposeMatrixf(QOpenGLFunctions_2_0* self, const float* m) {
	self->glLoadTransposeMatrixf(m);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord4sv(QOpenGLFunctions_2_0* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord4sv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord4s(QOpenGLFunctions_2_0* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q) {
	self->glMultiTexCoord4s(target, s, t, r, q);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord4iv(QOpenGLFunctions_2_0* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord4iv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord4i(QOpenGLFunctions_2_0* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q) {
	self->glMultiTexCoord4i(target, s, t, r, q);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord4fv(QOpenGLFunctions_2_0* self, uint32_t target, const float* v) {
	self->glMultiTexCoord4fv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord4f(QOpenGLFunctions_2_0* self, uint32_t target, float s, float t, float r, float q) {
	self->glMultiTexCoord4f(target, s, t, r, q);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord4dv(QOpenGLFunctions_2_0* self, uint32_t target, const double* v) {
	self->glMultiTexCoord4dv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord4d(QOpenGLFunctions_2_0* self, uint32_t target, double s, double t, double r, double q) {
	self->glMultiTexCoord4d(target, s, t, r, q);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord3sv(QOpenGLFunctions_2_0* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord3sv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord3s(QOpenGLFunctions_2_0* self, uint32_t target, int16_t s, int16_t t, int16_t r) {
	self->glMultiTexCoord3s(target, s, t, r);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord3iv(QOpenGLFunctions_2_0* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord3iv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord3i(QOpenGLFunctions_2_0* self, uint32_t target, int32_t s, int32_t t, int32_t r) {
	self->glMultiTexCoord3i(target, s, t, r);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord3fv(QOpenGLFunctions_2_0* self, uint32_t target, const float* v) {
	self->glMultiTexCoord3fv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord3f(QOpenGLFunctions_2_0* self, uint32_t target, float s, float t, float r) {
	self->glMultiTexCoord3f(target, s, t, r);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord3dv(QOpenGLFunctions_2_0* self, uint32_t target, const double* v) {
	self->glMultiTexCoord3dv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord3d(QOpenGLFunctions_2_0* self, uint32_t target, double s, double t, double r) {
	self->glMultiTexCoord3d(target, s, t, r);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord2sv(QOpenGLFunctions_2_0* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord2sv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord2s(QOpenGLFunctions_2_0* self, uint32_t target, int16_t s, int16_t t) {
	self->glMultiTexCoord2s(target, s, t);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord2iv(QOpenGLFunctions_2_0* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord2iv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord2i(QOpenGLFunctions_2_0* self, uint32_t target, int32_t s, int32_t t) {
	self->glMultiTexCoord2i(target, s, t);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord2fv(QOpenGLFunctions_2_0* self, uint32_t target, const float* v) {
	self->glMultiTexCoord2fv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord2f(QOpenGLFunctions_2_0* self, uint32_t target, float s, float t) {
	self->glMultiTexCoord2f(target, s, t);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord2dv(QOpenGLFunctions_2_0* self, uint32_t target, const double* v) {
	self->glMultiTexCoord2dv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord2d(QOpenGLFunctions_2_0* self, uint32_t target, double s, double t) {
	self->glMultiTexCoord2d(target, s, t);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord1sv(QOpenGLFunctions_2_0* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord1sv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord1s(QOpenGLFunctions_2_0* self, uint32_t target, int16_t s) {
	self->glMultiTexCoord1s(target, s);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord1iv(QOpenGLFunctions_2_0* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord1iv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord1i(QOpenGLFunctions_2_0* self, uint32_t target, int32_t s) {
	self->glMultiTexCoord1i(target, s);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord1fv(QOpenGLFunctions_2_0* self, uint32_t target, const float* v) {
	self->glMultiTexCoord1fv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord1f(QOpenGLFunctions_2_0* self, uint32_t target, float s) {
	self->glMultiTexCoord1f(target, s);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord1dv(QOpenGLFunctions_2_0* self, uint32_t target, const double* v) {
	self->glMultiTexCoord1dv(target, v);
}

void QOpenGLFunctions_2_0_GlMultiTexCoord1d(QOpenGLFunctions_2_0* self, uint32_t target, double s) {
	self->glMultiTexCoord1d(target, s);
}

void QOpenGLFunctions_2_0_GlClientActiveTexture(QOpenGLFunctions_2_0* self, uint32_t texture) {
	self->glClientActiveTexture(texture);
}

void QOpenGLFunctions_2_0_GlWindowPos3sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glWindowPos3sv(v);
}

void QOpenGLFunctions_2_0_GlWindowPos3s(QOpenGLFunctions_2_0* self, int16_t x, int16_t y, int16_t z) {
	self->glWindowPos3s(x, y, z);
}

void QOpenGLFunctions_2_0_GlWindowPos3iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glWindowPos3iv(v);
}

void QOpenGLFunctions_2_0_GlWindowPos3i(QOpenGLFunctions_2_0* self, int32_t x, int32_t y, int32_t z) {
	self->glWindowPos3i(x, y, z);
}

void QOpenGLFunctions_2_0_GlWindowPos3fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glWindowPos3fv(v);
}

void QOpenGLFunctions_2_0_GlWindowPos3f(QOpenGLFunctions_2_0* self, float x, float y, float z) {
	self->glWindowPos3f(x, y, z);
}

void QOpenGLFunctions_2_0_GlWindowPos3dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glWindowPos3dv(v);
}

void QOpenGLFunctions_2_0_GlWindowPos3d(QOpenGLFunctions_2_0* self, double x, double y, double z) {
	self->glWindowPos3d(x, y, z);
}

void QOpenGLFunctions_2_0_GlWindowPos2sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glWindowPos2sv(v);
}

void QOpenGLFunctions_2_0_GlWindowPos2s(QOpenGLFunctions_2_0* self, int16_t x, int16_t y) {
	self->glWindowPos2s(x, y);
}

void QOpenGLFunctions_2_0_GlWindowPos2iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glWindowPos2iv(v);
}

void QOpenGLFunctions_2_0_GlWindowPos2i(QOpenGLFunctions_2_0* self, int32_t x, int32_t y) {
	self->glWindowPos2i(x, y);
}

void QOpenGLFunctions_2_0_GlWindowPos2fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glWindowPos2fv(v);
}

void QOpenGLFunctions_2_0_GlWindowPos2f(QOpenGLFunctions_2_0* self, float x, float y) {
	self->glWindowPos2f(x, y);
}

void QOpenGLFunctions_2_0_GlWindowPos2dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glWindowPos2dv(v);
}

void QOpenGLFunctions_2_0_GlWindowPos2d(QOpenGLFunctions_2_0* self, double x, double y) {
	self->glWindowPos2d(x, y);
}

void QOpenGLFunctions_2_0_GlSecondaryColorPointer(QOpenGLFunctions_2_0* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glSecondaryColorPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3usv(QOpenGLFunctions_2_0* self, const uint16_t* v) {
	self->glSecondaryColor3usv(v);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3us(QOpenGLFunctions_2_0* self, uint16_t red, uint16_t green, uint16_t blue) {
	self->glSecondaryColor3us(red, green, blue);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3uiv(QOpenGLFunctions_2_0* self, const uint32_t* v) {
	self->glSecondaryColor3uiv(v);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3ui(QOpenGLFunctions_2_0* self, uint32_t red, uint32_t green, uint32_t blue) {
	self->glSecondaryColor3ui(red, green, blue);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3ubv(QOpenGLFunctions_2_0* self, const uint8_t* v) {
	self->glSecondaryColor3ubv(v);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3ub(QOpenGLFunctions_2_0* self, uint8_t red, uint8_t green, uint8_t blue) {
	self->glSecondaryColor3ub(red, green, blue);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3sv(QOpenGLFunctions_2_0* self, const int16_t* v) {
	self->glSecondaryColor3sv(v);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3s(QOpenGLFunctions_2_0* self, int16_t red, int16_t green, int16_t blue) {
	self->glSecondaryColor3s(red, green, blue);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3iv(QOpenGLFunctions_2_0* self, const int32_t* v) {
	self->glSecondaryColor3iv(v);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3i(QOpenGLFunctions_2_0* self, int32_t red, int32_t green, int32_t blue) {
	self->glSecondaryColor3i(red, green, blue);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3fv(QOpenGLFunctions_2_0* self, const float* v) {
	self->glSecondaryColor3fv(v);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3f(QOpenGLFunctions_2_0* self, float red, float green, float blue) {
	self->glSecondaryColor3f(red, green, blue);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3dv(QOpenGLFunctions_2_0* self, const double* v) {
	self->glSecondaryColor3dv(v);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3d(QOpenGLFunctions_2_0* self, double red, double green, double blue) {
	self->glSecondaryColor3d(red, green, blue);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3bv(QOpenGLFunctions_2_0* self, const signed char* v) {
	self->glSecondaryColor3bv(v);
}

void QOpenGLFunctions_2_0_GlSecondaryColor3b(QOpenGLFunctions_2_0* self, signed char red, signed char green, signed char blue) {
	self->glSecondaryColor3b(red, green, blue);
}

void QOpenGLFunctions_2_0_GlFogCoordPointer(QOpenGLFunctions_2_0* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glFogCoordPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_2_0_GlFogCoorddv(QOpenGLFunctions_2_0* self, const double* coord) {
	self->glFogCoorddv(coord);
}

void QOpenGLFunctions_2_0_GlFogCoordd(QOpenGLFunctions_2_0* self, double coord) {
	self->glFogCoordd(coord);
}

void QOpenGLFunctions_2_0_GlFogCoordfv(QOpenGLFunctions_2_0* self, const float* coord) {
	self->glFogCoordfv(coord);
}

void QOpenGLFunctions_2_0_GlFogCoordf(QOpenGLFunctions_2_0* self, float coord) {
	self->glFogCoordf(coord);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4usv(QOpenGLFunctions_2_0* self, uint32_t index, const uint16_t* v) {
	self->glVertexAttrib4usv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4uiv(QOpenGLFunctions_2_0* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttrib4uiv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4ubv(QOpenGLFunctions_2_0* self, uint32_t index, const uint8_t* v) {
	self->glVertexAttrib4ubv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4sv(QOpenGLFunctions_2_0* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib4sv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4s(QOpenGLFunctions_2_0* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glVertexAttrib4s(index, x, y, z, w);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4iv(QOpenGLFunctions_2_0* self, uint32_t index, const int32_t* v) {
	self->glVertexAttrib4iv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4fv(QOpenGLFunctions_2_0* self, uint32_t index, const float* v) {
	self->glVertexAttrib4fv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4f(QOpenGLFunctions_2_0* self, uint32_t index, float x, float y, float z, float w) {
	self->glVertexAttrib4f(index, x, y, z, w);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4dv(QOpenGLFunctions_2_0* self, uint32_t index, const double* v) {
	self->glVertexAttrib4dv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4d(QOpenGLFunctions_2_0* self, uint32_t index, double x, double y, double z, double w) {
	self->glVertexAttrib4d(index, x, y, z, w);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4bv(QOpenGLFunctions_2_0* self, uint32_t index, const signed char* v) {
	self->glVertexAttrib4bv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4Nusv(QOpenGLFunctions_2_0* self, uint32_t index, const uint16_t* v) {
	self->glVertexAttrib4Nusv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4Nuiv(QOpenGLFunctions_2_0* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttrib4Nuiv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4Nubv(QOpenGLFunctions_2_0* self, uint32_t index, const uint8_t* v) {
	self->glVertexAttrib4Nubv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4Nub(QOpenGLFunctions_2_0* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w) {
	self->glVertexAttrib4Nub(index, x, y, z, w);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4Nsv(QOpenGLFunctions_2_0* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib4Nsv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4Niv(QOpenGLFunctions_2_0* self, uint32_t index, const int32_t* v) {
	self->glVertexAttrib4Niv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib4Nbv(QOpenGLFunctions_2_0* self, uint32_t index, const signed char* v) {
	self->glVertexAttrib4Nbv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib3sv(QOpenGLFunctions_2_0* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib3sv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib3s(QOpenGLFunctions_2_0* self, uint32_t index, int16_t x, int16_t y, int16_t z) {
	self->glVertexAttrib3s(index, x, y, z);
}

void QOpenGLFunctions_2_0_GlVertexAttrib3fv(QOpenGLFunctions_2_0* self, uint32_t index, const float* v) {
	self->glVertexAttrib3fv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib3f(QOpenGLFunctions_2_0* self, uint32_t index, float x, float y, float z) {
	self->glVertexAttrib3f(index, x, y, z);
}

void QOpenGLFunctions_2_0_GlVertexAttrib3dv(QOpenGLFunctions_2_0* self, uint32_t index, const double* v) {
	self->glVertexAttrib3dv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib3d(QOpenGLFunctions_2_0* self, uint32_t index, double x, double y, double z) {
	self->glVertexAttrib3d(index, x, y, z);
}

void QOpenGLFunctions_2_0_GlVertexAttrib2sv(QOpenGLFunctions_2_0* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib2sv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib2s(QOpenGLFunctions_2_0* self, uint32_t index, int16_t x, int16_t y) {
	self->glVertexAttrib2s(index, x, y);
}

void QOpenGLFunctions_2_0_GlVertexAttrib2fv(QOpenGLFunctions_2_0* self, uint32_t index, const float* v) {
	self->glVertexAttrib2fv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib2f(QOpenGLFunctions_2_0* self, uint32_t index, float x, float y) {
	self->glVertexAttrib2f(index, x, y);
}

void QOpenGLFunctions_2_0_GlVertexAttrib2dv(QOpenGLFunctions_2_0* self, uint32_t index, const double* v) {
	self->glVertexAttrib2dv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib2d(QOpenGLFunctions_2_0* self, uint32_t index, double x, double y) {
	self->glVertexAttrib2d(index, x, y);
}

void QOpenGLFunctions_2_0_GlVertexAttrib1sv(QOpenGLFunctions_2_0* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib1sv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib1s(QOpenGLFunctions_2_0* self, uint32_t index, int16_t x) {
	self->glVertexAttrib1s(index, x);
}

void QOpenGLFunctions_2_0_GlVertexAttrib1fv(QOpenGLFunctions_2_0* self, uint32_t index, const float* v) {
	self->glVertexAttrib1fv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib1f(QOpenGLFunctions_2_0* self, uint32_t index, float x) {
	self->glVertexAttrib1f(index, x);
}

void QOpenGLFunctions_2_0_GlVertexAttrib1dv(QOpenGLFunctions_2_0* self, uint32_t index, const double* v) {
	self->glVertexAttrib1dv(index, v);
}

void QOpenGLFunctions_2_0_GlVertexAttrib1d(QOpenGLFunctions_2_0* self, uint32_t index, double x) {
	self->glVertexAttrib1d(index, x);
}

// Base class handler implementation
bool QOpenGLFunctions_2_0_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_2_0* self) {
	auto* vqopenglfunctions_2_0 = dynamic_cast<VirtualQOpenGLFunctions_2_0*>(self);
	if (vqopenglfunctions_2_0 && vqopenglfunctions_2_0->isVirtualQOpenGLFunctions_2_0) {
vqopenglfunctions_2_0->setQOpenGLFunctions_2_0_InitializeOpenGLFunctions_IsBase(true);
	return vqopenglfunctions_2_0->initializeOpenGLFunctions();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_2_0_OnInitializeOpenGLFunctions(QOpenGLFunctions_2_0* self, intptr_t slot) {
	auto* vqopenglfunctions_2_0 = dynamic_cast<VirtualQOpenGLFunctions_2_0*>(self);
	if (vqopenglfunctions_2_0 && vqopenglfunctions_2_0->isVirtualQOpenGLFunctions_2_0) {
vqopenglfunctions_2_0->setQOpenGLFunctions_2_0_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_2_0::QOpenGLFunctions_2_0_InitializeOpenGLFunctions_Callback>(slot));
}
}

void QOpenGLFunctions_2_0_Delete(QOpenGLFunctions_2_0* self) {
    delete self;
}

