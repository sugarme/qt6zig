#include <QOpenGLFunctions_4_2_Core>
#include <qopenglfunctions_4_2_core.h>
#include "libqopenglfunctions_4_2_core.h"
#include "libqopenglfunctions_4_2_core.hxx"

QOpenGLFunctions_4_2_Core* QOpenGLFunctions_4_2_Core_new() {
	 return new VirtualQOpenGLFunctions_4_2_Core();
}

bool QOpenGLFunctions_4_2_Core_InitializeOpenGLFunctions(QOpenGLFunctions_4_2_Core* self) {
	return self->initializeOpenGLFunctions();
}

void QOpenGLFunctions_4_2_Core_GlViewport(QOpenGLFunctions_4_2_Core* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glViewport(x, y, width, height);
}

void QOpenGLFunctions_4_2_Core_GlDepthRange(QOpenGLFunctions_4_2_Core* self, double nearVal, double farVal) {
	self->glDepthRange(nearVal, farVal);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsEnabled(QOpenGLFunctions_4_2_Core* self, uint32_t cap) {
	return self->glIsEnabled(cap);
}

void QOpenGLFunctions_4_2_Core_GlGetTexLevelParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
	self->glGetTexLevelParameteriv(target, level, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetTexLevelParameterfv(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
	self->glGetTexLevelParameterfv(target, level, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetTexParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetTexParameterfv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetTexImage(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glGetTexImage(target, level, format, typeVal, pixels);
}

const uint8_t* QOpenGLFunctions_4_2_Core_GlGetString(QOpenGLFunctions_4_2_Core* self, uint32_t name) {
	return self->glGetString(name);
}

void QOpenGLFunctions_4_2_Core_GlGetIntegerv(QOpenGLFunctions_4_2_Core* self, uint32_t pname, int32_t* params) {
	self->glGetIntegerv(pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetFloatv(QOpenGLFunctions_4_2_Core* self, uint32_t pname, float* params) {
	self->glGetFloatv(pname, params);
}

GL QOpenGLFunctions_4_2_Core_GlGetError(QOpenGLFunctions_4_2_Core* self) {
	return self->glGetError();
}

void QOpenGLFunctions_4_2_Core_GlGetDoublev(QOpenGLFunctions_4_2_Core* self, uint32_t pname, double* params) {
	self->glGetDoublev(pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetBooleanv(QOpenGLFunctions_4_2_Core* self, uint32_t pname, unsigned char* params) {
	self->glGetBooleanv(pname, params);
}

void QOpenGLFunctions_4_2_Core_GlReadPixels(QOpenGLFunctions_4_2_Core* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glReadPixels(x, y, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_4_2_Core_GlReadBuffer(QOpenGLFunctions_4_2_Core* self, uint32_t mode) {
	self->glReadBuffer(mode);
}

void QOpenGLFunctions_4_2_Core_GlPixelStorei(QOpenGLFunctions_4_2_Core* self, uint32_t pname, int32_t param) {
	self->glPixelStorei(pname, param);
}

void QOpenGLFunctions_4_2_Core_GlPixelStoref(QOpenGLFunctions_4_2_Core* self, uint32_t pname, float param) {
	self->glPixelStoref(pname, param);
}

void QOpenGLFunctions_4_2_Core_GlDepthFunc(QOpenGLFunctions_4_2_Core* self, uint32_t func) {
	self->glDepthFunc(func);
}

void QOpenGLFunctions_4_2_Core_GlStencilOp(QOpenGLFunctions_4_2_Core* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
	self->glStencilOp(fail, zfail, zpass);
}

void QOpenGLFunctions_4_2_Core_GlStencilFunc(QOpenGLFunctions_4_2_Core* self, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFunc(func, ref, mask);
}

void QOpenGLFunctions_4_2_Core_GlLogicOp(QOpenGLFunctions_4_2_Core* self, uint32_t opcode) {
	self->glLogicOp(opcode);
}

void QOpenGLFunctions_4_2_Core_GlBlendFunc(QOpenGLFunctions_4_2_Core* self, uint32_t sfactor, uint32_t dfactor) {
	self->glBlendFunc(sfactor, dfactor);
}

void QOpenGLFunctions_4_2_Core_GlFlush(QOpenGLFunctions_4_2_Core* self) {
	self->glFlush();
}

void QOpenGLFunctions_4_2_Core_GlFinish(QOpenGLFunctions_4_2_Core* self) {
	self->glFinish();
}

void QOpenGLFunctions_4_2_Core_GlEnable(QOpenGLFunctions_4_2_Core* self, uint32_t cap) {
	self->glEnable(cap);
}

void QOpenGLFunctions_4_2_Core_GlDisable(QOpenGLFunctions_4_2_Core* self, uint32_t cap) {
	self->glDisable(cap);
}

void QOpenGLFunctions_4_2_Core_GlDepthMask(QOpenGLFunctions_4_2_Core* self, unsigned char flag) {
	self->glDepthMask(flag);
}

void QOpenGLFunctions_4_2_Core_GlColorMask(QOpenGLFunctions_4_2_Core* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	self->glColorMask(red, green, blue, alpha);
}

void QOpenGLFunctions_4_2_Core_GlStencilMask(QOpenGLFunctions_4_2_Core* self, uint32_t mask) {
	self->glStencilMask(mask);
}

void QOpenGLFunctions_4_2_Core_GlClearDepth(QOpenGLFunctions_4_2_Core* self, double depth) {
	self->glClearDepth(depth);
}

void QOpenGLFunctions_4_2_Core_GlClearStencil(QOpenGLFunctions_4_2_Core* self, int32_t s) {
	self->glClearStencil(s);
}

void QOpenGLFunctions_4_2_Core_GlClearColor(QOpenGLFunctions_4_2_Core* self, float red, float green, float blue, float alpha) {
	self->glClearColor(red, green, blue, alpha);
}

void QOpenGLFunctions_4_2_Core_GlClear(QOpenGLFunctions_4_2_Core* self, uint32_t mask) {
	self->glClear(mask);
}

void QOpenGLFunctions_4_2_Core_GlDrawBuffer(QOpenGLFunctions_4_2_Core* self, uint32_t mode) {
	self->glDrawBuffer(mode);
}

void QOpenGLFunctions_4_2_Core_GlTexImage2D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage2D(target, level, internalformat, width, height, border, format, typeVal, pixels);
}

void QOpenGLFunctions_4_2_Core_GlTexImage1D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage1D(target, level, internalformat, width, border, format, typeVal, pixels);
}

void QOpenGLFunctions_4_2_Core_GlTexParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlTexParameteri(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexParameteri(target, pname, param);
}

void QOpenGLFunctions_4_2_Core_GlTexParameterfv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlTexParameterf(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, float param) {
	self->glTexParameterf(target, pname, param);
}

void QOpenGLFunctions_4_2_Core_GlScissor(QOpenGLFunctions_4_2_Core* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glScissor(x, y, width, height);
}

void QOpenGLFunctions_4_2_Core_GlPolygonMode(QOpenGLFunctions_4_2_Core* self, uint32_t face, uint32_t mode) {
	self->glPolygonMode(face, mode);
}

void QOpenGLFunctions_4_2_Core_GlPointSize(QOpenGLFunctions_4_2_Core* self, float size) {
	self->glPointSize(size);
}

void QOpenGLFunctions_4_2_Core_GlLineWidth(QOpenGLFunctions_4_2_Core* self, float width) {
	self->glLineWidth(width);
}

void QOpenGLFunctions_4_2_Core_GlHint(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t mode) {
	self->glHint(target, mode);
}

void QOpenGLFunctions_4_2_Core_GlFrontFace(QOpenGLFunctions_4_2_Core* self, uint32_t mode) {
	self->glFrontFace(mode);
}

void QOpenGLFunctions_4_2_Core_GlCullFace(QOpenGLFunctions_4_2_Core* self, uint32_t mode) {
	self->glCullFace(mode);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsTexture(QOpenGLFunctions_4_2_Core* self, uint32_t texture) {
	return self->glIsTexture(texture);
}

void QOpenGLFunctions_4_2_Core_GlGenTextures(QOpenGLFunctions_4_2_Core* self, int32_t n, uint32_t* textures) {
	self->glGenTextures(n, textures);
}

void QOpenGLFunctions_4_2_Core_GlDeleteTextures(QOpenGLFunctions_4_2_Core* self, int32_t n, const uint32_t* textures) {
	self->glDeleteTextures(n, textures);
}

void QOpenGLFunctions_4_2_Core_GlBindTexture(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t texture) {
	self->glBindTexture(target, texture);
}

void QOpenGLFunctions_4_2_Core_GlTexSubImage2D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_4_2_Core_GlTexSubImage1D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage1D(target, level, xoffset, width, format, typeVal, pixels);
}

void QOpenGLFunctions_4_2_Core_GlCopyTexSubImage2D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void QOpenGLFunctions_4_2_Core_GlCopyTexSubImage1D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
	self->glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void QOpenGLFunctions_4_2_Core_GlCopyTexImage2D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
	self->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void QOpenGLFunctions_4_2_Core_GlCopyTexImage1D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
	self->glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void QOpenGLFunctions_4_2_Core_GlPolygonOffset(QOpenGLFunctions_4_2_Core* self, float factor, float units) {
	self->glPolygonOffset(factor, units);
}

void QOpenGLFunctions_4_2_Core_GlDrawElements(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawElements(mode, count, typeVal, indices);
}

void QOpenGLFunctions_4_2_Core_GlDrawArrays(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t first, int32_t count) {
	self->glDrawArrays(mode, first, count);
}

void QOpenGLFunctions_4_2_Core_GlCopyTexSubImage3D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void QOpenGLFunctions_4_2_Core_GlTexSubImage3D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, pixels);
}

void QOpenGLFunctions_4_2_Core_GlTexImage3D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage3D(target, level, internalformat, width, height, depth, border, format, typeVal, pixels);
}

void QOpenGLFunctions_4_2_Core_GlDrawRangeElements(QOpenGLFunctions_4_2_Core* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawRangeElements(mode, start, end, count, typeVal, indices);
}

void QOpenGLFunctions_4_2_Core_GlBlendEquation(QOpenGLFunctions_4_2_Core* self, uint32_t mode) {
	self->glBlendEquation(mode);
}

void QOpenGLFunctions_4_2_Core_GlBlendColor(QOpenGLFunctions_4_2_Core* self, float red, float green, float blue, float alpha) {
	self->glBlendColor(red, green, blue, alpha);
}

void QOpenGLFunctions_4_2_Core_GlGetCompressedTexImage(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, void* img) {
	self->glGetCompressedTexImage(target, level, img);
}

void QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage1D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage2D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage3D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void QOpenGLFunctions_4_2_Core_GlCompressedTexImage1D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void QOpenGLFunctions_4_2_Core_GlCompressedTexImage2D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void QOpenGLFunctions_4_2_Core_GlCompressedTexImage3D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void QOpenGLFunctions_4_2_Core_GlSampleCoverage(QOpenGLFunctions_4_2_Core* self, float value, unsigned char invert) {
	self->glSampleCoverage(value, invert);
}

void QOpenGLFunctions_4_2_Core_GlActiveTexture(QOpenGLFunctions_4_2_Core* self, uint32_t texture) {
	self->glActiveTexture(texture);
}

void QOpenGLFunctions_4_2_Core_GlPointParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t pname, const int32_t* params) {
	self->glPointParameteriv(pname, params);
}

void QOpenGLFunctions_4_2_Core_GlPointParameteri(QOpenGLFunctions_4_2_Core* self, uint32_t pname, int32_t param) {
	self->glPointParameteri(pname, param);
}

void QOpenGLFunctions_4_2_Core_GlPointParameterfv(QOpenGLFunctions_4_2_Core* self, uint32_t pname, const float* params) {
	self->glPointParameterfv(pname, params);
}

void QOpenGLFunctions_4_2_Core_GlPointParameterf(QOpenGLFunctions_4_2_Core* self, uint32_t pname, float param) {
	self->glPointParameterf(pname, param);
}

void QOpenGLFunctions_4_2_Core_GlMultiDrawElements(QOpenGLFunctions_4_2_Core* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount) {
	self->glMultiDrawElements(mode, count, typeVal, indices, drawcount);
}

void QOpenGLFunctions_4_2_Core_GlMultiDrawArrays(QOpenGLFunctions_4_2_Core* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
	self->glMultiDrawArrays(mode, first, count, drawcount);
}

void QOpenGLFunctions_4_2_Core_GlBlendFuncSeparate(QOpenGLFunctions_4_2_Core* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
	self->glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void QOpenGLFunctions_4_2_Core_GlGetBufferPointerv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, void** params) {
	self->glGetBufferPointerv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetBufferParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetBufferParameteriv(target, pname, params);
}

unsigned char QOpenGLFunctions_4_2_Core_GlUnmapBuffer(QOpenGLFunctions_4_2_Core* self, uint32_t target) {
	return self->glUnmapBuffer(target);
}

void* QOpenGLFunctions_4_2_Core_GlMapBuffer(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t access) {
	return self->glMapBuffer(target, access);
}

void QOpenGLFunctions_4_2_Core_GlGetBufferSubData(QOpenGLFunctions_4_2_Core* self, uint32_t target, int64_t offset, int64_t size, void* data) {
	self->glGetBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_4_2_Core_GlBufferSubData(QOpenGLFunctions_4_2_Core* self, uint32_t target, int64_t offset, int64_t size, const void* data) {
	self->glBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_4_2_Core_GlBufferData(QOpenGLFunctions_4_2_Core* self, uint32_t target, int64_t size, const void* data, uint32_t usage) {
	self->glBufferData(target, size, data, usage);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsBuffer(QOpenGLFunctions_4_2_Core* self, uint32_t buffer) {
	return self->glIsBuffer(buffer);
}

void QOpenGLFunctions_4_2_Core_GlGenBuffers(QOpenGLFunctions_4_2_Core* self, int32_t n, uint32_t* buffers) {
	self->glGenBuffers(n, buffers);
}

void QOpenGLFunctions_4_2_Core_GlDeleteBuffers(QOpenGLFunctions_4_2_Core* self, int32_t n, const uint32_t* buffers) {
	self->glDeleteBuffers(n, buffers);
}

void QOpenGLFunctions_4_2_Core_GlBindBuffer(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t buffer) {
	self->glBindBuffer(target, buffer);
}

void QOpenGLFunctions_4_2_Core_GlGetQueryObjectuiv(QOpenGLFunctions_4_2_Core* self, uint32_t id, uint32_t pname, uint32_t* params) {
	self->glGetQueryObjectuiv(id, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetQueryObjectiv(QOpenGLFunctions_4_2_Core* self, uint32_t id, uint32_t pname, int32_t* params) {
	self->glGetQueryObjectiv(id, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetQueryiv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetQueryiv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlEndQuery(QOpenGLFunctions_4_2_Core* self, uint32_t target) {
	self->glEndQuery(target);
}

void QOpenGLFunctions_4_2_Core_GlBeginQuery(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t id) {
	self->glBeginQuery(target, id);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsQuery(QOpenGLFunctions_4_2_Core* self, uint32_t id) {
	return self->glIsQuery(id);
}

void QOpenGLFunctions_4_2_Core_GlDeleteQueries(QOpenGLFunctions_4_2_Core* self, int32_t n, const uint32_t* ids) {
	self->glDeleteQueries(n, ids);
}

void QOpenGLFunctions_4_2_Core_GlGenQueries(QOpenGLFunctions_4_2_Core* self, int32_t n, uint32_t* ids) {
	self->glGenQueries(n, ids);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribPointer(QOpenGLFunctions_4_2_Core* self, uint32_t index, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* pointer) {
	self->glVertexAttribPointer(index, size, typeVal, normalized, stride, pointer);
}

void QOpenGLFunctions_4_2_Core_GlValidateProgram(QOpenGLFunctions_4_2_Core* self, uint32_t program) {
	self->glValidateProgram(program);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix4fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix3fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix2fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform4iv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform4iv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform3iv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform3iv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform2iv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform2iv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform1iv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform1iv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform4fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const float* value) {
	self->glUniform4fv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform3fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const float* value) {
	self->glUniform3fv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform2fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const float* value) {
	self->glUniform2fv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform1fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const float* value) {
	self->glUniform1fv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform4i(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
	self->glUniform4i(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_2_Core_GlUniform3i(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
	self->glUniform3i(location, v0, v1, v2);
}

void QOpenGLFunctions_4_2_Core_GlUniform2i(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t v0, int32_t v1) {
	self->glUniform2i(location, v0, v1);
}

void QOpenGLFunctions_4_2_Core_GlUniform1i(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t v0) {
	self->glUniform1i(location, v0);
}

void QOpenGLFunctions_4_2_Core_GlUniform4f(QOpenGLFunctions_4_2_Core* self, int32_t location, float v0, float v1, float v2, float v3) {
	self->glUniform4f(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_2_Core_GlUniform3f(QOpenGLFunctions_4_2_Core* self, int32_t location, float v0, float v1, float v2) {
	self->glUniform3f(location, v0, v1, v2);
}

void QOpenGLFunctions_4_2_Core_GlUniform2f(QOpenGLFunctions_4_2_Core* self, int32_t location, float v0, float v1) {
	self->glUniform2f(location, v0, v1);
}

void QOpenGLFunctions_4_2_Core_GlUniform1f(QOpenGLFunctions_4_2_Core* self, int32_t location, float v0) {
	self->glUniform1f(location, v0);
}

void QOpenGLFunctions_4_2_Core_GlUseProgram(QOpenGLFunctions_4_2_Core* self, uint32_t program) {
	self->glUseProgram(program);
}

void QOpenGLFunctions_4_2_Core_GlShaderSource(QOpenGLFunctions_4_2_Core* self, uint32_t shader, int32_t count, const GLchar** stringVal, const int32_t* length) {
	self->glShaderSource(shader, count, stringVal, length);
}

void QOpenGLFunctions_4_2_Core_GlLinkProgram(QOpenGLFunctions_4_2_Core* self, uint32_t program) {
	self->glLinkProgram(program);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsShader(QOpenGLFunctions_4_2_Core* self, uint32_t shader) {
	return self->glIsShader(shader);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsProgram(QOpenGLFunctions_4_2_Core* self, uint32_t program) {
	return self->glIsProgram(program);
}

void QOpenGLFunctions_4_2_Core_GlGetVertexAttribPointerv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t pname, void** pointer) {
	self->glGetVertexAttribPointerv(index, pname, pointer);
}

void QOpenGLFunctions_4_2_Core_GlGetVertexAttribiv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribiv(index, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetVertexAttribfv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t pname, float* params) {
	self->glGetVertexAttribfv(index, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetVertexAttribdv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t pname, double* params) {
	self->glGetVertexAttribdv(index, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetUniformiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t* params) {
	self->glGetUniformiv(program, location, params);
}

void QOpenGLFunctions_4_2_Core_GlGetUniformfv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, float* params) {
	self->glGetUniformfv(program, location, params);
}

int32_t QOpenGLFunctions_4_2_Core_GlGetUniformLocation(QOpenGLFunctions_4_2_Core* self, uint32_t program, const GLchar* name) {
	return self->glGetUniformLocation(program, name);
}

void QOpenGLFunctions_4_2_Core_GlGetShaderSource(QOpenGLFunctions_4_2_Core* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* source) {
	self->glGetShaderSource(shader, bufSize, length, source);
}

void QOpenGLFunctions_4_2_Core_GlGetShaderInfoLog(QOpenGLFunctions_4_2_Core* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void QOpenGLFunctions_4_2_Core_GlGetShaderiv(QOpenGLFunctions_4_2_Core* self, uint32_t shader, uint32_t pname, int32_t* params) {
	self->glGetShaderiv(shader, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetProgramInfoLog(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void QOpenGLFunctions_4_2_Core_GlGetProgramiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t pname, int32_t* params) {
	self->glGetProgramiv(program, pname, params);
}

int32_t QOpenGLFunctions_4_2_Core_GlGetAttribLocation(QOpenGLFunctions_4_2_Core* self, uint32_t program, const GLchar* name) {
	return self->glGetAttribLocation(program, name);
}

void QOpenGLFunctions_4_2_Core_GlGetAttachedShaders(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
	self->glGetAttachedShaders(program, maxCount, count, obj);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveUniform(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t index, int32_t bufSize, int32_t* length, int32_t* size, GL* typeVal, GLchar* name) {
	self->glGetActiveUniform(program, index, bufSize, length, size, typeVal, name);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveAttrib(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t index, int32_t bufSize, int32_t* length, int32_t* size, GL* typeVal, GLchar* name) {
	self->glGetActiveAttrib(program, index, bufSize, length, size, typeVal, name);
}

void QOpenGLFunctions_4_2_Core_GlEnableVertexAttribArray(QOpenGLFunctions_4_2_Core* self, uint32_t index) {
	self->glEnableVertexAttribArray(index);
}

void QOpenGLFunctions_4_2_Core_GlDisableVertexAttribArray(QOpenGLFunctions_4_2_Core* self, uint32_t index) {
	self->glDisableVertexAttribArray(index);
}

void QOpenGLFunctions_4_2_Core_GlDetachShader(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t shader) {
	self->glDetachShader(program, shader);
}

void QOpenGLFunctions_4_2_Core_GlDeleteShader(QOpenGLFunctions_4_2_Core* self, uint32_t shader) {
	self->glDeleteShader(shader);
}

void QOpenGLFunctions_4_2_Core_GlDeleteProgram(QOpenGLFunctions_4_2_Core* self, uint32_t program) {
	self->glDeleteProgram(program);
}

uint32_t QOpenGLFunctions_4_2_Core_GlCreateShader(QOpenGLFunctions_4_2_Core* self, uint32_t typeVal) {
	return self->glCreateShader(typeVal);
}

uint32_t QOpenGLFunctions_4_2_Core_GlCreateProgram(QOpenGLFunctions_4_2_Core* self) {
	return self->glCreateProgram();
}

void QOpenGLFunctions_4_2_Core_GlCompileShader(QOpenGLFunctions_4_2_Core* self, uint32_t shader) {
	self->glCompileShader(shader);
}

void QOpenGLFunctions_4_2_Core_GlBindAttribLocation(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t index, const GLchar* name) {
	self->glBindAttribLocation(program, index, name);
}

void QOpenGLFunctions_4_2_Core_GlAttachShader(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t shader) {
	self->glAttachShader(program, shader);
}

void QOpenGLFunctions_4_2_Core_GlStencilMaskSeparate(QOpenGLFunctions_4_2_Core* self, uint32_t face, uint32_t mask) {
	self->glStencilMaskSeparate(face, mask);
}

void QOpenGLFunctions_4_2_Core_GlStencilFuncSeparate(QOpenGLFunctions_4_2_Core* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFuncSeparate(face, func, ref, mask);
}

void QOpenGLFunctions_4_2_Core_GlStencilOpSeparate(QOpenGLFunctions_4_2_Core* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
	self->glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void QOpenGLFunctions_4_2_Core_GlDrawBuffers(QOpenGLFunctions_4_2_Core* self, int32_t n, const GL* bufs) {
	self->glDrawBuffers(n, bufs);
}

void QOpenGLFunctions_4_2_Core_GlBlendEquationSeparate(QOpenGLFunctions_4_2_Core* self, uint32_t modeRGB, uint32_t modeAlpha) {
	self->glBlendEquationSeparate(modeRGB, modeAlpha);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix4x3fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4x3fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix3x4fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3x4fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix4x2fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4x2fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix2x4fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2x4fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix3x2fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3x2fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix2x3fv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2x3fv(location, count, transpose, value);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsVertexArray(QOpenGLFunctions_4_2_Core* self, uint32_t array) {
	return self->glIsVertexArray(array);
}

void QOpenGLFunctions_4_2_Core_GlGenVertexArrays(QOpenGLFunctions_4_2_Core* self, int32_t n, uint32_t* arrays) {
	self->glGenVertexArrays(n, arrays);
}

void QOpenGLFunctions_4_2_Core_GlDeleteVertexArrays(QOpenGLFunctions_4_2_Core* self, int32_t n, const uint32_t* arrays) {
	self->glDeleteVertexArrays(n, arrays);
}

void QOpenGLFunctions_4_2_Core_GlBindVertexArray(QOpenGLFunctions_4_2_Core* self, uint32_t array) {
	self->glBindVertexArray(array);
}

void QOpenGLFunctions_4_2_Core_GlFlushMappedBufferRange(QOpenGLFunctions_4_2_Core* self, uint32_t target, int64_t offset, int64_t length) {
	self->glFlushMappedBufferRange(target, offset, length);
}

void* QOpenGLFunctions_4_2_Core_GlMapBufferRange(QOpenGLFunctions_4_2_Core* self, uint32_t target, int64_t offset, int64_t length, uint32_t access) {
	return self->glMapBufferRange(target, offset, length, access);
}

void QOpenGLFunctions_4_2_Core_GlFramebufferTextureLayer(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
	self->glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void QOpenGLFunctions_4_2_Core_GlRenderbufferStorageMultisample(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
	self->glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void QOpenGLFunctions_4_2_Core_GlBlitFramebuffer(QOpenGLFunctions_4_2_Core* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
	self->glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void QOpenGLFunctions_4_2_Core_GlGenerateMipmap(QOpenGLFunctions_4_2_Core* self, uint32_t target) {
	self->glGenerateMipmap(target);
}

void QOpenGLFunctions_4_2_Core_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
	self->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlFramebufferRenderbuffer(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
	self->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void QOpenGLFunctions_4_2_Core_GlFramebufferTexture3D(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
	self->glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void QOpenGLFunctions_4_2_Core_GlFramebufferTexture2D(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
	self->glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void QOpenGLFunctions_4_2_Core_GlFramebufferTexture1D(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
	self->glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

GL QOpenGLFunctions_4_2_Core_GlCheckFramebufferStatus(QOpenGLFunctions_4_2_Core* self, uint32_t target) {
	return self->glCheckFramebufferStatus(target);
}

void QOpenGLFunctions_4_2_Core_GlGenFramebuffers(QOpenGLFunctions_4_2_Core* self, int32_t n, uint32_t* framebuffers) {
	self->glGenFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_4_2_Core_GlDeleteFramebuffers(QOpenGLFunctions_4_2_Core* self, int32_t n, const uint32_t* framebuffers) {
	self->glDeleteFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_4_2_Core_GlBindFramebuffer(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t framebuffer) {
	self->glBindFramebuffer(target, framebuffer);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsFramebuffer(QOpenGLFunctions_4_2_Core* self, uint32_t framebuffer) {
	return self->glIsFramebuffer(framebuffer);
}

void QOpenGLFunctions_4_2_Core_GlGetRenderbufferParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetRenderbufferParameteriv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlRenderbufferStorage(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
	self->glRenderbufferStorage(target, internalformat, width, height);
}

void QOpenGLFunctions_4_2_Core_GlGenRenderbuffers(QOpenGLFunctions_4_2_Core* self, int32_t n, uint32_t* renderbuffers) {
	self->glGenRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_4_2_Core_GlDeleteRenderbuffers(QOpenGLFunctions_4_2_Core* self, int32_t n, const uint32_t* renderbuffers) {
	self->glDeleteRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_4_2_Core_GlBindRenderbuffer(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t renderbuffer) {
	self->glBindRenderbuffer(target, renderbuffer);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsRenderbuffer(QOpenGLFunctions_4_2_Core* self, uint32_t renderbuffer) {
	return self->glIsRenderbuffer(renderbuffer);
}

const uint8_t* QOpenGLFunctions_4_2_Core_GlGetStringi(QOpenGLFunctions_4_2_Core* self, uint32_t name, uint32_t index) {
	return self->glGetStringi(name, index);
}

void QOpenGLFunctions_4_2_Core_GlClearBufferfi(QOpenGLFunctions_4_2_Core* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
	self->glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void QOpenGLFunctions_4_2_Core_GlClearBufferfv(QOpenGLFunctions_4_2_Core* self, uint32_t buffer, int32_t drawbuffer, const float* value) {
	self->glClearBufferfv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_2_Core_GlClearBufferuiv(QOpenGLFunctions_4_2_Core* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
	self->glClearBufferuiv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_2_Core_GlClearBufferiv(QOpenGLFunctions_4_2_Core* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
	self->glClearBufferiv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_2_Core_GlGetTexParameterIuiv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, uint32_t* params) {
	self->glGetTexParameterIuiv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetTexParameterIiv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameterIiv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlTexParameterIuiv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, const uint32_t* params) {
	self->glTexParameterIuiv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlTexParameterIiv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameterIiv(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlUniform4uiv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform4uiv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform3uiv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform3uiv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform2uiv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform2uiv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform1uiv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform1uiv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform4ui(QOpenGLFunctions_4_2_Core* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
	self->glUniform4ui(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_2_Core_GlUniform3ui(QOpenGLFunctions_4_2_Core* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
	self->glUniform3ui(location, v0, v1, v2);
}

void QOpenGLFunctions_4_2_Core_GlUniform2ui(QOpenGLFunctions_4_2_Core* self, int32_t location, uint32_t v0, uint32_t v1) {
	self->glUniform2ui(location, v0, v1);
}

void QOpenGLFunctions_4_2_Core_GlUniform1ui(QOpenGLFunctions_4_2_Core* self, int32_t location, uint32_t v0) {
	self->glUniform1ui(location, v0);
}

int32_t QOpenGLFunctions_4_2_Core_GlGetFragDataLocation(QOpenGLFunctions_4_2_Core* self, uint32_t program, const GLchar* name) {
	return self->glGetFragDataLocation(program, name);
}

void QOpenGLFunctions_4_2_Core_GlBindFragDataLocation(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t color, const GLchar* name) {
	self->glBindFragDataLocation(program, color, name);
}

void QOpenGLFunctions_4_2_Core_GlGetUniformuiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, uint32_t* params) {
	self->glGetUniformuiv(program, location, params);
}

void QOpenGLFunctions_4_2_Core_GlGetVertexAttribIuiv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t pname, uint32_t* params) {
	self->glGetVertexAttribIuiv(index, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetVertexAttribIiv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribIiv(index, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribIPointer(QOpenGLFunctions_4_2_Core* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexAttribIPointer(index, size, typeVal, stride, pointer);
}

void QOpenGLFunctions_4_2_Core_GlEndConditionalRender(QOpenGLFunctions_4_2_Core* self) {
	self->glEndConditionalRender();
}

void QOpenGLFunctions_4_2_Core_GlBeginConditionalRender(QOpenGLFunctions_4_2_Core* self, uint32_t id, uint32_t mode) {
	self->glBeginConditionalRender(id, mode);
}

void QOpenGLFunctions_4_2_Core_GlClampColor(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t clamp) {
	self->glClampColor(target, clamp);
}

void QOpenGLFunctions_4_2_Core_GlGetTransformFeedbackVarying(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t index, int32_t bufSize, int32_t* length, int32_t* size, GL* typeVal, GLchar* name) {
	self->glGetTransformFeedbackVarying(program, index, bufSize, length, size, typeVal, name);
}

void QOpenGLFunctions_4_2_Core_GlTransformFeedbackVaryings(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t count, const GLchar** varyings, uint32_t bufferMode) {
	self->glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void QOpenGLFunctions_4_2_Core_GlBindBufferBase(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, uint32_t buffer) {
	self->glBindBufferBase(target, index, buffer);
}

void QOpenGLFunctions_4_2_Core_GlBindBufferRange(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
	self->glBindBufferRange(target, index, buffer, offset, size);
}

void QOpenGLFunctions_4_2_Core_GlEndTransformFeedback(QOpenGLFunctions_4_2_Core* self) {
	self->glEndTransformFeedback();
}

void QOpenGLFunctions_4_2_Core_GlBeginTransformFeedback(QOpenGLFunctions_4_2_Core* self, uint32_t primitiveMode) {
	self->glBeginTransformFeedback(primitiveMode);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsEnabledi(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index) {
	return self->glIsEnabledi(target, index);
}

void QOpenGLFunctions_4_2_Core_GlDisablei(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index) {
	self->glDisablei(target, index);
}

void QOpenGLFunctions_4_2_Core_GlEnablei(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index) {
	self->glEnablei(target, index);
}

void QOpenGLFunctions_4_2_Core_GlGetIntegeriV(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, int32_t* data) {
	self->glGetIntegeri_v(target, index, data);
}

void QOpenGLFunctions_4_2_Core_GlGetBooleaniV(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, unsigned char* data) {
	self->glGetBooleani_v(target, index, data);
}

void QOpenGLFunctions_4_2_Core_GlColorMaski(QOpenGLFunctions_4_2_Core* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	self->glColorMaski(index, r, g, b, a);
}

void QOpenGLFunctions_4_2_Core_GlCopyBufferSubData(QOpenGLFunctions_4_2_Core* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size) {
	self->glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void QOpenGLFunctions_4_2_Core_GlUniformBlockBinding(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
	self->glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveUniformBlockName(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName) {
	self->glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveUniformBlockiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
	self->glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

uint32_t QOpenGLFunctions_4_2_Core_GlGetUniformBlockIndex(QOpenGLFunctions_4_2_Core* self, uint32_t program, const GLchar* uniformBlockName) {
	return self->glGetUniformBlockIndex(program, uniformBlockName);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveUniformName(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, GLchar* uniformName) {
	self->glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveUniformsiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
	self->glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetUniformIndices(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t uniformCount, const GLchar** uniformNames, uint32_t* uniformIndices) {
	self->glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

void QOpenGLFunctions_4_2_Core_GlPrimitiveRestartIndex(QOpenGLFunctions_4_2_Core* self, uint32_t index) {
	self->glPrimitiveRestartIndex(index);
}

void QOpenGLFunctions_4_2_Core_GlTexBuffer(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
	self->glTexBuffer(target, internalformat, buffer);
}

void QOpenGLFunctions_4_2_Core_GlDrawElementsInstanced(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount) {
	self->glDrawElementsInstanced(mode, count, typeVal, indices, instancecount);
}

void QOpenGLFunctions_4_2_Core_GlDrawArraysInstanced(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
	self->glDrawArraysInstanced(mode, first, count, instancecount);
}

void QOpenGLFunctions_4_2_Core_GlSampleMaski(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t mask) {
	self->glSampleMaski(index, mask);
}

void QOpenGLFunctions_4_2_Core_GlGetMultisamplefv(QOpenGLFunctions_4_2_Core* self, uint32_t pname, uint32_t index, float* val) {
	self->glGetMultisamplefv(pname, index, val);
}

void QOpenGLFunctions_4_2_Core_GlTexImage3DMultisample(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
	self->glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void QOpenGLFunctions_4_2_Core_GlTexImage2DMultisample(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
	self->glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void QOpenGLFunctions_4_2_Core_GlGetSynciv(QOpenGLFunctions_4_2_Core* self, GLsync sync, uint32_t pname, int32_t bufSize, int32_t* length, int32_t* values) {
	self->glGetSynciv(sync, pname, bufSize, length, values);
}

void QOpenGLFunctions_4_2_Core_GlGetInteger64v(QOpenGLFunctions_4_2_Core* self, uint32_t pname, int64_t* params) {
	self->glGetInteger64v(pname, params);
}

void QOpenGLFunctions_4_2_Core_GlWaitSync(QOpenGLFunctions_4_2_Core* self, GLsync sync, uint32_t flags, uint64_t timeout) {
	self->glWaitSync(sync, flags, timeout);
}

GL QOpenGLFunctions_4_2_Core_GlClientWaitSync(QOpenGLFunctions_4_2_Core* self, GLsync sync, uint32_t flags, uint64_t timeout) {
	return self->glClientWaitSync(sync, flags, timeout);
}

void QOpenGLFunctions_4_2_Core_GlDeleteSync(QOpenGLFunctions_4_2_Core* self, GLsync sync) {
	self->glDeleteSync(sync);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsSync(QOpenGLFunctions_4_2_Core* self, GLsync sync) {
	return self->glIsSync(sync);
}

GLsync QOpenGLFunctions_4_2_Core_GlFenceSync(QOpenGLFunctions_4_2_Core* self, uint32_t condition, uint32_t flags) {
	return self->glFenceSync(condition, flags);
}

void QOpenGLFunctions_4_2_Core_GlProvokingVertex(QOpenGLFunctions_4_2_Core* self, uint32_t mode) {
	self->glProvokingVertex(mode);
}

void QOpenGLFunctions_4_2_Core_GlMultiDrawElementsBaseVertex(QOpenGLFunctions_4_2_Core* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount, const int32_t* basevertex) {
	self->glMultiDrawElementsBaseVertex(mode, count, typeVal, indices, drawcount, basevertex);
}

void QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseVertex(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex) {
	self->glDrawElementsInstancedBaseVertex(mode, count, typeVal, indices, instancecount, basevertex);
}

void QOpenGLFunctions_4_2_Core_GlDrawRangeElementsBaseVertex(QOpenGLFunctions_4_2_Core* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
	self->glDrawRangeElementsBaseVertex(mode, start, end, count, typeVal, indices, basevertex);
}

void QOpenGLFunctions_4_2_Core_GlDrawElementsBaseVertex(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
	self->glDrawElementsBaseVertex(mode, count, typeVal, indices, basevertex);
}

void QOpenGLFunctions_4_2_Core_GlFramebufferTexture(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
	self->glFramebufferTexture(target, attachment, texture, level);
}

void QOpenGLFunctions_4_2_Core_GlGetBufferParameteri64v(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t pname, int64_t* params) {
	self->glGetBufferParameteri64v(target, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetInteger64iV(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, int64_t* data) {
	self->glGetInteger64i_v(target, index, data);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribP4uiv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP4uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribP4ui(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP4ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribP3uiv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP3uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribP3ui(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP3ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribP2uiv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP2uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribP2ui(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP2ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribP1uiv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP1uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribP1ui(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP1ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_2_Core_GlGetQueryObjectui64v(QOpenGLFunctions_4_2_Core* self, uint32_t id, uint32_t pname, uint64_t* params) {
	self->glGetQueryObjectui64v(id, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetQueryObjecti64v(QOpenGLFunctions_4_2_Core* self, uint32_t id, uint32_t pname, int64_t* params) {
	self->glGetQueryObjecti64v(id, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlQueryCounter(QOpenGLFunctions_4_2_Core* self, uint32_t id, uint32_t target) {
	self->glQueryCounter(id, target);
}

void QOpenGLFunctions_4_2_Core_GlGetSamplerParameterIuiv(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
	self->glGetSamplerParameterIuiv(sampler, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetSamplerParameterfv(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, float* params) {
	self->glGetSamplerParameterfv(sampler, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetSamplerParameterIiv(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, int32_t* params) {
	self->glGetSamplerParameterIiv(sampler, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetSamplerParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, int32_t* params) {
	self->glGetSamplerParameteriv(sampler, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlSamplerParameterIuiv(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, const uint32_t* param) {
	self->glSamplerParameterIuiv(sampler, pname, param);
}

void QOpenGLFunctions_4_2_Core_GlSamplerParameterIiv(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
	self->glSamplerParameterIiv(sampler, pname, param);
}

void QOpenGLFunctions_4_2_Core_GlSamplerParameterfv(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, const float* param) {
	self->glSamplerParameterfv(sampler, pname, param);
}

void QOpenGLFunctions_4_2_Core_GlSamplerParameterf(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, float param) {
	self->glSamplerParameterf(sampler, pname, param);
}

void QOpenGLFunctions_4_2_Core_GlSamplerParameteriv(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
	self->glSamplerParameteriv(sampler, pname, param);
}

void QOpenGLFunctions_4_2_Core_GlSamplerParameteri(QOpenGLFunctions_4_2_Core* self, uint32_t sampler, uint32_t pname, int32_t param) {
	self->glSamplerParameteri(sampler, pname, param);
}

void QOpenGLFunctions_4_2_Core_GlBindSampler(QOpenGLFunctions_4_2_Core* self, uint32_t unit, uint32_t sampler) {
	self->glBindSampler(unit, sampler);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsSampler(QOpenGLFunctions_4_2_Core* self, uint32_t sampler) {
	return self->glIsSampler(sampler);
}

void QOpenGLFunctions_4_2_Core_GlDeleteSamplers(QOpenGLFunctions_4_2_Core* self, int32_t count, const uint32_t* samplers) {
	self->glDeleteSamplers(count, samplers);
}

void QOpenGLFunctions_4_2_Core_GlGenSamplers(QOpenGLFunctions_4_2_Core* self, int32_t count, uint32_t* samplers) {
	self->glGenSamplers(count, samplers);
}

int32_t QOpenGLFunctions_4_2_Core_GlGetFragDataIndex(QOpenGLFunctions_4_2_Core* self, uint32_t program, const GLchar* name) {
	return self->glGetFragDataIndex(program, name);
}

void QOpenGLFunctions_4_2_Core_GlBindFragDataLocationIndexed(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t colorNumber, uint32_t index, const GLchar* name) {
	self->glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribDivisor(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t divisor) {
	self->glVertexAttribDivisor(index, divisor);
}

void QOpenGLFunctions_4_2_Core_GlGetQueryIndexediv(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetQueryIndexediv(target, index, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlEndQueryIndexed(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index) {
	self->glEndQueryIndexed(target, index);
}

void QOpenGLFunctions_4_2_Core_GlBeginQueryIndexed(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, uint32_t id) {
	self->glBeginQueryIndexed(target, index, id);
}

void QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackStream(QOpenGLFunctions_4_2_Core* self, uint32_t mode, uint32_t id, uint32_t stream) {
	self->glDrawTransformFeedbackStream(mode, id, stream);
}

void QOpenGLFunctions_4_2_Core_GlDrawTransformFeedback(QOpenGLFunctions_4_2_Core* self, uint32_t mode, uint32_t id) {
	self->glDrawTransformFeedback(mode, id);
}

void QOpenGLFunctions_4_2_Core_GlResumeTransformFeedback(QOpenGLFunctions_4_2_Core* self) {
	self->glResumeTransformFeedback();
}

void QOpenGLFunctions_4_2_Core_GlPauseTransformFeedback(QOpenGLFunctions_4_2_Core* self) {
	self->glPauseTransformFeedback();
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsTransformFeedback(QOpenGLFunctions_4_2_Core* self, uint32_t id) {
	return self->glIsTransformFeedback(id);
}

void QOpenGLFunctions_4_2_Core_GlGenTransformFeedbacks(QOpenGLFunctions_4_2_Core* self, int32_t n, uint32_t* ids) {
	self->glGenTransformFeedbacks(n, ids);
}

void QOpenGLFunctions_4_2_Core_GlDeleteTransformFeedbacks(QOpenGLFunctions_4_2_Core* self, int32_t n, const uint32_t* ids) {
	self->glDeleteTransformFeedbacks(n, ids);
}

void QOpenGLFunctions_4_2_Core_GlBindTransformFeedback(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t id) {
	self->glBindTransformFeedback(target, id);
}

void QOpenGLFunctions_4_2_Core_GlPatchParameterfv(QOpenGLFunctions_4_2_Core* self, uint32_t pname, const float* values) {
	self->glPatchParameterfv(pname, values);
}

void QOpenGLFunctions_4_2_Core_GlPatchParameteri(QOpenGLFunctions_4_2_Core* self, uint32_t pname, int32_t value) {
	self->glPatchParameteri(pname, value);
}

void QOpenGLFunctions_4_2_Core_GlGetProgramStageiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t shadertype, uint32_t pname, int32_t* values) {
	self->glGetProgramStageiv(program, shadertype, pname, values);
}

void QOpenGLFunctions_4_2_Core_GlGetUniformSubroutineuiv(QOpenGLFunctions_4_2_Core* self, uint32_t shadertype, int32_t location, uint32_t* params) {
	self->glGetUniformSubroutineuiv(shadertype, location, params);
}

void QOpenGLFunctions_4_2_Core_GlUniformSubroutinesuiv(QOpenGLFunctions_4_2_Core* self, uint32_t shadertype, int32_t count, const uint32_t* indices) {
	self->glUniformSubroutinesuiv(shadertype, count, indices);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineName(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, GLchar* name) {
	self->glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineUniformName(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, GLchar* name) {
	self->glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineUniformiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, uint32_t pname, int32_t* values) {
	self->glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

uint32_t QOpenGLFunctions_4_2_Core_GlGetSubroutineIndex(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t shadertype, const GLchar* name) {
	return self->glGetSubroutineIndex(program, shadertype, name);
}

int32_t QOpenGLFunctions_4_2_Core_GlGetSubroutineUniformLocation(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t shadertype, const GLchar* name) {
	return self->glGetSubroutineUniformLocation(program, shadertype, name);
}

void QOpenGLFunctions_4_2_Core_GlGetUniformdv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, double* params) {
	self->glGetUniformdv(program, location, params);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix4x3dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix4x3dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix4x2dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix4x2dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix3x4dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix3x4dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix3x2dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix3x2dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix2x4dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix2x4dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix2x3dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix2x3dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix4dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix4dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix3dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix3dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniformMatrix2dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix2dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform4dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const double* value) {
	self->glUniform4dv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform3dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const double* value) {
	self->glUniform3dv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform2dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const double* value) {
	self->glUniform2dv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform1dv(QOpenGLFunctions_4_2_Core* self, int32_t location, int32_t count, const double* value) {
	self->glUniform1dv(location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlUniform4d(QOpenGLFunctions_4_2_Core* self, int32_t location, double x, double y, double z, double w) {
	self->glUniform4d(location, x, y, z, w);
}

void QOpenGLFunctions_4_2_Core_GlUniform3d(QOpenGLFunctions_4_2_Core* self, int32_t location, double x, double y, double z) {
	self->glUniform3d(location, x, y, z);
}

void QOpenGLFunctions_4_2_Core_GlUniform2d(QOpenGLFunctions_4_2_Core* self, int32_t location, double x, double y) {
	self->glUniform2d(location, x, y);
}

void QOpenGLFunctions_4_2_Core_GlUniform1d(QOpenGLFunctions_4_2_Core* self, int32_t location, double x) {
	self->glUniform1d(location, x);
}

void QOpenGLFunctions_4_2_Core_GlDrawElementsIndirect(QOpenGLFunctions_4_2_Core* self, uint32_t mode, uint32_t typeVal, const void* indirect) {
	self->glDrawElementsIndirect(mode, typeVal, indirect);
}

void QOpenGLFunctions_4_2_Core_GlDrawArraysIndirect(QOpenGLFunctions_4_2_Core* self, uint32_t mode, const void* indirect) {
	self->glDrawArraysIndirect(mode, indirect);
}

void QOpenGLFunctions_4_2_Core_GlBlendFuncSeparatei(QOpenGLFunctions_4_2_Core* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
	self->glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void QOpenGLFunctions_4_2_Core_GlBlendFunci(QOpenGLFunctions_4_2_Core* self, uint32_t buf, uint32_t src, uint32_t dst) {
	self->glBlendFunci(buf, src, dst);
}

void QOpenGLFunctions_4_2_Core_GlBlendEquationSeparatei(QOpenGLFunctions_4_2_Core* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha) {
	self->glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void QOpenGLFunctions_4_2_Core_GlBlendEquationi(QOpenGLFunctions_4_2_Core* self, uint32_t buf, uint32_t mode) {
	self->glBlendEquationi(buf, mode);
}

void QOpenGLFunctions_4_2_Core_GlMinSampleShading(QOpenGLFunctions_4_2_Core* self, float value) {
	self->glMinSampleShading(value);
}

void QOpenGLFunctions_4_2_Core_GlGetDoubleiV(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, double* data) {
	self->glGetDoublei_v(target, index, data);
}

void QOpenGLFunctions_4_2_Core_GlGetFloatiV(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t index, float* data) {
	self->glGetFloati_v(target, index, data);
}

void QOpenGLFunctions_4_2_Core_GlDepthRangeIndexed(QOpenGLFunctions_4_2_Core* self, uint32_t index, double n, double f) {
	self->glDepthRangeIndexed(index, n, f);
}

void QOpenGLFunctions_4_2_Core_GlDepthRangeArrayv(QOpenGLFunctions_4_2_Core* self, uint32_t first, int32_t count, const double* v) {
	self->glDepthRangeArrayv(first, count, v);
}

void QOpenGLFunctions_4_2_Core_GlScissorIndexedv(QOpenGLFunctions_4_2_Core* self, uint32_t index, const int32_t* v) {
	self->glScissorIndexedv(index, v);
}

void QOpenGLFunctions_4_2_Core_GlScissorIndexed(QOpenGLFunctions_4_2_Core* self, uint32_t index, int32_t left, int32_t bottom, int32_t width, int32_t height) {
	self->glScissorIndexed(index, left, bottom, width, height);
}

void QOpenGLFunctions_4_2_Core_GlScissorArrayv(QOpenGLFunctions_4_2_Core* self, uint32_t first, int32_t count, const int32_t* v) {
	self->glScissorArrayv(first, count, v);
}

void QOpenGLFunctions_4_2_Core_GlViewportIndexedfv(QOpenGLFunctions_4_2_Core* self, uint32_t index, const float* v) {
	self->glViewportIndexedfv(index, v);
}

void QOpenGLFunctions_4_2_Core_GlViewportIndexedf(QOpenGLFunctions_4_2_Core* self, uint32_t index, float x, float y, float w, float h) {
	self->glViewportIndexedf(index, x, y, w, h);
}

void QOpenGLFunctions_4_2_Core_GlViewportArrayv(QOpenGLFunctions_4_2_Core* self, uint32_t first, int32_t count, const float* v) {
	self->glViewportArrayv(first, count, v);
}

void QOpenGLFunctions_4_2_Core_GlGetVertexAttribLdv(QOpenGLFunctions_4_2_Core* self, uint32_t index, uint32_t pname, double* params) {
	self->glGetVertexAttribLdv(index, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribLPointer(QOpenGLFunctions_4_2_Core* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexAttribLPointer(index, size, typeVal, stride, pointer);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribL4dv(QOpenGLFunctions_4_2_Core* self, uint32_t index, const double* v) {
	self->glVertexAttribL4dv(index, v);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribL3dv(QOpenGLFunctions_4_2_Core* self, uint32_t index, const double* v) {
	self->glVertexAttribL3dv(index, v);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribL2dv(QOpenGLFunctions_4_2_Core* self, uint32_t index, const double* v) {
	self->glVertexAttribL2dv(index, v);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribL1dv(QOpenGLFunctions_4_2_Core* self, uint32_t index, const double* v) {
	self->glVertexAttribL1dv(index, v);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribL4d(QOpenGLFunctions_4_2_Core* self, uint32_t index, double x, double y, double z, double w) {
	self->glVertexAttribL4d(index, x, y, z, w);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribL3d(QOpenGLFunctions_4_2_Core* self, uint32_t index, double x, double y, double z) {
	self->glVertexAttribL3d(index, x, y, z);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribL2d(QOpenGLFunctions_4_2_Core* self, uint32_t index, double x, double y) {
	self->glVertexAttribL2d(index, x, y);
}

void QOpenGLFunctions_4_2_Core_GlVertexAttribL1d(QOpenGLFunctions_4_2_Core* self, uint32_t index, double x) {
	self->glVertexAttribL1d(index, x);
}

void QOpenGLFunctions_4_2_Core_GlGetProgramPipelineInfoLog(QOpenGLFunctions_4_2_Core* self, uint32_t pipeline, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void QOpenGLFunctions_4_2_Core_GlValidateProgramPipeline(QOpenGLFunctions_4_2_Core* self, uint32_t pipeline) {
	self->glValidateProgramPipeline(pipeline);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x3dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x4dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x2dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x4dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x2dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x3dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x3fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x4fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x2fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x4fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x2fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x3fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform4uiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform4uiv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform4ui(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
	self->glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform4dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
	self->glProgramUniform4dv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform4d(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, double v0, double v1, double v2, double v3) {
	self->glProgramUniform4d(program, location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform4fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform4fv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform4f(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3) {
	self->glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform4iv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform4iv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform4i(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
	self->glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform3uiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform3uiv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform3ui(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
	self->glProgramUniform3ui(program, location, v0, v1, v2);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform3dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
	self->glProgramUniform3dv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform3d(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, double v0, double v1, double v2) {
	self->glProgramUniform3d(program, location, v0, v1, v2);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform3fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform3fv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform3f(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, float v0, float v1, float v2) {
	self->glProgramUniform3f(program, location, v0, v1, v2);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform3iv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform3iv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform3i(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
	self->glProgramUniform3i(program, location, v0, v1, v2);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform2uiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform2uiv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform2ui(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1) {
	self->glProgramUniform2ui(program, location, v0, v1);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform2dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
	self->glProgramUniform2dv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform2d(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, double v0, double v1) {
	self->glProgramUniform2d(program, location, v0, v1);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform2fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform2fv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform2f(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, float v0, float v1) {
	self->glProgramUniform2f(program, location, v0, v1);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform2iv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform2iv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform2i(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1) {
	self->glProgramUniform2i(program, location, v0, v1);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform1uiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform1uiv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform1ui(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, uint32_t v0) {
	self->glProgramUniform1ui(program, location, v0);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform1dv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
	self->glProgramUniform1dv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform1d(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, double v0) {
	self->glProgramUniform1d(program, location, v0);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform1fv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform1fv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform1f(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, float v0) {
	self->glProgramUniform1f(program, location, v0);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform1iv(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform1iv(program, location, count, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramUniform1i(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t location, int32_t v0) {
	self->glProgramUniform1i(program, location, v0);
}

void QOpenGLFunctions_4_2_Core_GlGetProgramPipelineiv(QOpenGLFunctions_4_2_Core* self, uint32_t pipeline, uint32_t pname, int32_t* params) {
	self->glGetProgramPipelineiv(pipeline, pname, params);
}

unsigned char QOpenGLFunctions_4_2_Core_GlIsProgramPipeline(QOpenGLFunctions_4_2_Core* self, uint32_t pipeline) {
	return self->glIsProgramPipeline(pipeline);
}

void QOpenGLFunctions_4_2_Core_GlGenProgramPipelines(QOpenGLFunctions_4_2_Core* self, int32_t n, uint32_t* pipelines) {
	self->glGenProgramPipelines(n, pipelines);
}

void QOpenGLFunctions_4_2_Core_GlDeleteProgramPipelines(QOpenGLFunctions_4_2_Core* self, int32_t n, const uint32_t* pipelines) {
	self->glDeleteProgramPipelines(n, pipelines);
}

void QOpenGLFunctions_4_2_Core_GlBindProgramPipeline(QOpenGLFunctions_4_2_Core* self, uint32_t pipeline) {
	self->glBindProgramPipeline(pipeline);
}

uint32_t QOpenGLFunctions_4_2_Core_GlCreateShaderProgramv(QOpenGLFunctions_4_2_Core* self, uint32_t typeVal, int32_t count, const GLchar** strings) {
	return self->glCreateShaderProgramv(typeVal, count, strings);
}

void QOpenGLFunctions_4_2_Core_GlActiveShaderProgram(QOpenGLFunctions_4_2_Core* self, uint32_t pipeline, uint32_t program) {
	self->glActiveShaderProgram(pipeline, program);
}

void QOpenGLFunctions_4_2_Core_GlUseProgramStages(QOpenGLFunctions_4_2_Core* self, uint32_t pipeline, uint32_t stages, uint32_t program) {
	self->glUseProgramStages(pipeline, stages, program);
}

void QOpenGLFunctions_4_2_Core_GlProgramParameteri(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t pname, int32_t value) {
	self->glProgramParameteri(program, pname, value);
}

void QOpenGLFunctions_4_2_Core_GlProgramBinary(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t binaryFormat, const void* binary, int32_t length) {
	self->glProgramBinary(program, binaryFormat, binary, length);
}

void QOpenGLFunctions_4_2_Core_GlGetProgramBinary(QOpenGLFunctions_4_2_Core* self, uint32_t program, int32_t bufSize, int32_t* length, GL* binaryFormat, void* binary) {
	self->glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void QOpenGLFunctions_4_2_Core_GlClearDepthf(QOpenGLFunctions_4_2_Core* self, float dd) {
	self->glClearDepthf(dd);
}

void QOpenGLFunctions_4_2_Core_GlDepthRangef(QOpenGLFunctions_4_2_Core* self, float n, float f) {
	self->glDepthRangef(n, f);
}

void QOpenGLFunctions_4_2_Core_GlGetShaderPrecisionFormat(QOpenGLFunctions_4_2_Core* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision) {
	self->glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void QOpenGLFunctions_4_2_Core_GlShaderBinary(QOpenGLFunctions_4_2_Core* self, int32_t count, const uint32_t* shaders, uint32_t binaryformat, const void* binary, int32_t length) {
	self->glShaderBinary(count, shaders, binaryformat, binary, length);
}

void QOpenGLFunctions_4_2_Core_GlReleaseShaderCompiler(QOpenGLFunctions_4_2_Core* self) {
	self->glReleaseShaderCompiler();
}

void QOpenGLFunctions_4_2_Core_GlTexStorage3D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth) {
	self->glTexStorage3D(target, levels, internalformat, width, height, depth);
}

void QOpenGLFunctions_4_2_Core_GlTexStorage2D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height) {
	self->glTexStorage2D(target, levels, internalformat, width, height);
}

void QOpenGLFunctions_4_2_Core_GlTexStorage1D(QOpenGLFunctions_4_2_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width) {
	self->glTexStorage1D(target, levels, internalformat, width);
}

void QOpenGLFunctions_4_2_Core_GlMemoryBarrier(QOpenGLFunctions_4_2_Core* self, uint32_t barriers) {
	self->glMemoryBarrier(barriers);
}

void QOpenGLFunctions_4_2_Core_GlBindImageTexture(QOpenGLFunctions_4_2_Core* self, uint32_t unit, uint32_t texture, int32_t level, unsigned char layered, int32_t layer, uint32_t access, uint32_t format) {
	self->glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

void QOpenGLFunctions_4_2_Core_GlGetActiveAtomicCounterBufferiv(QOpenGLFunctions_4_2_Core* self, uint32_t program, uint32_t bufferIndex, uint32_t pname, int32_t* params) {
	self->glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void QOpenGLFunctions_4_2_Core_GlGetInternalformativ(QOpenGLFunctions_4_2_Core* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params) {
	self->glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

void QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackStreamInstanced(QOpenGLFunctions_4_2_Core* self, uint32_t mode, uint32_t id, uint32_t stream, int32_t instancecount) {
	self->glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackInstanced(QOpenGLFunctions_4_2_Core* self, uint32_t mode, uint32_t id, int32_t instancecount) {
	self->glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

void QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseVertexBaseInstance(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex, uint32_t baseinstance) {
	self->glDrawElementsInstancedBaseVertexBaseInstance(mode, count, typeVal, indices, instancecount, basevertex, baseinstance);
}

void QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseInstance(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, uint32_t baseinstance) {
	self->glDrawElementsInstancedBaseInstance(mode, count, typeVal, indices, instancecount, baseinstance);
}

void QOpenGLFunctions_4_2_Core_GlDrawArraysInstancedBaseInstance(QOpenGLFunctions_4_2_Core* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount, uint32_t baseinstance) {
	self->glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

// Base class handler implementation
bool QOpenGLFunctions_4_2_Core_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_4_2_Core* self) {
	auto* vqopenglfunctions_4_2_core = dynamic_cast<VirtualQOpenGLFunctions_4_2_Core*>(self);
	if (vqopenglfunctions_4_2_core && vqopenglfunctions_4_2_core->isVirtualQOpenGLFunctions_4_2_Core) {
vqopenglfunctions_4_2_core->setQOpenGLFunctions_4_2_Core_InitializeOpenGLFunctions_IsBase(true);
	return vqopenglfunctions_4_2_core->initializeOpenGLFunctions();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_4_2_Core_OnInitializeOpenGLFunctions(QOpenGLFunctions_4_2_Core* self, intptr_t slot) {
	auto* vqopenglfunctions_4_2_core = dynamic_cast<VirtualQOpenGLFunctions_4_2_Core*>(self);
	if (vqopenglfunctions_4_2_core && vqopenglfunctions_4_2_core->isVirtualQOpenGLFunctions_4_2_Core) {
vqopenglfunctions_4_2_core->setQOpenGLFunctions_4_2_Core_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_4_2_Core::QOpenGLFunctions_4_2_Core_InitializeOpenGLFunctions_Callback>(slot));
}
}

void QOpenGLFunctions_4_2_Core_Delete(QOpenGLFunctions_4_2_Core* self) {
    delete self;
}

