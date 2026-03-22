#include <QOpenGLFunctions_4_5_Core>
#include <qopenglfunctions_4_5_core.h>
#include "libqopenglfunctions_4_5_core.h"
#include "libqopenglfunctions_4_5_core.hxx"

QOpenGLFunctions_4_5_Core* QOpenGLFunctions_4_5_Core_new() {
	 return new VirtualQOpenGLFunctions_4_5_Core();
}

bool QOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions(QOpenGLFunctions_4_5_Core* self) {
	return self->initializeOpenGLFunctions();
}

void QOpenGLFunctions_4_5_Core_GlViewport(QOpenGLFunctions_4_5_Core* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glViewport(x, y, width, height);
}

void QOpenGLFunctions_4_5_Core_GlDepthRange(QOpenGLFunctions_4_5_Core* self, double nearVal, double farVal) {
	self->glDepthRange(nearVal, farVal);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsEnabled(QOpenGLFunctions_4_5_Core* self, uint32_t cap) {
	return self->glIsEnabled(cap);
}

void QOpenGLFunctions_4_5_Core_GlGetTexLevelParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
	self->glGetTexLevelParameteriv(target, level, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTexLevelParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
	self->glGetTexLevelParameterfv(target, level, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTexParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTexParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glGetTexImage(target, level, format, typeVal, pixels);
}

const uint8_t* QOpenGLFunctions_4_5_Core_GlGetString(QOpenGLFunctions_4_5_Core* self, uint32_t name) {
	return self->glGetString(name);
}

void QOpenGLFunctions_4_5_Core_GlGetIntegerv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int32_t* data) {
	self->glGetIntegerv(pname, data);
}

void QOpenGLFunctions_4_5_Core_GlGetFloatv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, float* data) {
	self->glGetFloatv(pname, data);
}

void QOpenGLFunctions_4_5_Core_GlGetDoublev(QOpenGLFunctions_4_5_Core* self, uint32_t pname, double* data) {
	self->glGetDoublev(pname, data);
}

void QOpenGLFunctions_4_5_Core_GlGetBooleanv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, unsigned char* data) {
	self->glGetBooleanv(pname, data);
}

void QOpenGLFunctions_4_5_Core_GlReadPixels(QOpenGLFunctions_4_5_Core* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glReadPixels(x, y, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlReadBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t src) {
	self->glReadBuffer(src);
}

void QOpenGLFunctions_4_5_Core_GlPixelStorei(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int32_t param) {
	self->glPixelStorei(pname, param);
}

void QOpenGLFunctions_4_5_Core_GlPixelStoref(QOpenGLFunctions_4_5_Core* self, uint32_t pname, float param) {
	self->glPixelStoref(pname, param);
}

void QOpenGLFunctions_4_5_Core_GlDepthFunc(QOpenGLFunctions_4_5_Core* self, uint32_t func) {
	self->glDepthFunc(func);
}

void QOpenGLFunctions_4_5_Core_GlStencilOp(QOpenGLFunctions_4_5_Core* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
	self->glStencilOp(fail, zfail, zpass);
}

void QOpenGLFunctions_4_5_Core_GlStencilFunc(QOpenGLFunctions_4_5_Core* self, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFunc(func, ref, mask);
}

void QOpenGLFunctions_4_5_Core_GlLogicOp(QOpenGLFunctions_4_5_Core* self, uint32_t opcode) {
	self->glLogicOp(opcode);
}

void QOpenGLFunctions_4_5_Core_GlBlendFunc(QOpenGLFunctions_4_5_Core* self, uint32_t sfactor, uint32_t dfactor) {
	self->glBlendFunc(sfactor, dfactor);
}

void QOpenGLFunctions_4_5_Core_GlFlush(QOpenGLFunctions_4_5_Core* self) {
	self->glFlush();
}

void QOpenGLFunctions_4_5_Core_GlFinish(QOpenGLFunctions_4_5_Core* self) {
	self->glFinish();
}

void QOpenGLFunctions_4_5_Core_GlEnable(QOpenGLFunctions_4_5_Core* self, uint32_t cap) {
	self->glEnable(cap);
}

void QOpenGLFunctions_4_5_Core_GlDisable(QOpenGLFunctions_4_5_Core* self, uint32_t cap) {
	self->glDisable(cap);
}

void QOpenGLFunctions_4_5_Core_GlDepthMask(QOpenGLFunctions_4_5_Core* self, unsigned char flag) {
	self->glDepthMask(flag);
}

void QOpenGLFunctions_4_5_Core_GlColorMask(QOpenGLFunctions_4_5_Core* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	self->glColorMask(red, green, blue, alpha);
}

void QOpenGLFunctions_4_5_Core_GlStencilMask(QOpenGLFunctions_4_5_Core* self, uint32_t mask) {
	self->glStencilMask(mask);
}

void QOpenGLFunctions_4_5_Core_GlClearDepth(QOpenGLFunctions_4_5_Core* self, double depth) {
	self->glClearDepth(depth);
}

void QOpenGLFunctions_4_5_Core_GlClearStencil(QOpenGLFunctions_4_5_Core* self, int32_t s) {
	self->glClearStencil(s);
}

void QOpenGLFunctions_4_5_Core_GlClearColor(QOpenGLFunctions_4_5_Core* self, float red, float green, float blue, float alpha) {
	self->glClearColor(red, green, blue, alpha);
}

void QOpenGLFunctions_4_5_Core_GlClear(QOpenGLFunctions_4_5_Core* self, uint32_t mask) {
	self->glClear(mask);
}

void QOpenGLFunctions_4_5_Core_GlDrawBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t buf) {
	self->glDrawBuffer(buf);
}

void QOpenGLFunctions_4_5_Core_GlTexImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage2D(target, level, internalformat, width, height, border, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlTexImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage1D(target, level, internalformat, width, border, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlTexParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlTexParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexParameteri(target, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlTexParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlTexParameterf(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, float param) {
	self->glTexParameterf(target, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlScissor(QOpenGLFunctions_4_5_Core* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glScissor(x, y, width, height);
}

void QOpenGLFunctions_4_5_Core_GlPolygonMode(QOpenGLFunctions_4_5_Core* self, uint32_t face, uint32_t mode) {
	self->glPolygonMode(face, mode);
}

void QOpenGLFunctions_4_5_Core_GlPointSize(QOpenGLFunctions_4_5_Core* self, float size) {
	self->glPointSize(size);
}

void QOpenGLFunctions_4_5_Core_GlLineWidth(QOpenGLFunctions_4_5_Core* self, float width) {
	self->glLineWidth(width);
}

void QOpenGLFunctions_4_5_Core_GlHint(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t mode) {
	self->glHint(target, mode);
}

void QOpenGLFunctions_4_5_Core_GlFrontFace(QOpenGLFunctions_4_5_Core* self, uint32_t mode) {
	self->glFrontFace(mode);
}

void QOpenGLFunctions_4_5_Core_GlCullFace(QOpenGLFunctions_4_5_Core* self, uint32_t mode) {
	self->glCullFace(mode);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsTexture(QOpenGLFunctions_4_5_Core* self, uint32_t texture) {
	return self->glIsTexture(texture);
}

void QOpenGLFunctions_4_5_Core_GlGenTextures(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* textures) {
	self->glGenTextures(n, textures);
}

void QOpenGLFunctions_4_5_Core_GlDeleteTextures(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* textures) {
	self->glDeleteTextures(n, textures);
}

void QOpenGLFunctions_4_5_Core_GlBindTexture(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t texture) {
	self->glBindTexture(target, texture);
}

void QOpenGLFunctions_4_5_Core_GlTexSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlTexSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage1D(target, level, xoffset, width, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlCopyTexSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void QOpenGLFunctions_4_5_Core_GlCopyTexSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
	self->glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void QOpenGLFunctions_4_5_Core_GlCopyTexImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
	self->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void QOpenGLFunctions_4_5_Core_GlCopyTexImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
	self->glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void QOpenGLFunctions_4_5_Core_GlPolygonOffset(QOpenGLFunctions_4_5_Core* self, float factor, float units) {
	self->glPolygonOffset(factor, units);
}

void QOpenGLFunctions_4_5_Core_GlDrawElements(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawElements(mode, count, typeVal, indices);
}

void QOpenGLFunctions_4_5_Core_GlDrawArrays(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t first, int32_t count) {
	self->glDrawArrays(mode, first, count);
}

void QOpenGLFunctions_4_5_Core_GlBlendColor(QOpenGLFunctions_4_5_Core* self, float red, float green, float blue, float alpha) {
	self->glBlendColor(red, green, blue, alpha);
}

void QOpenGLFunctions_4_5_Core_GlBlendEquation(QOpenGLFunctions_4_5_Core* self, uint32_t mode) {
	self->glBlendEquation(mode);
}

void QOpenGLFunctions_4_5_Core_GlCopyTexSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void QOpenGLFunctions_4_5_Core_GlTexSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlTexImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage3D(target, level, internalformat, width, height, depth, border, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlDrawRangeElements(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawRangeElements(mode, start, end, count, typeVal, indices);
}

void QOpenGLFunctions_4_5_Core_GlGetCompressedTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, void* img) {
	self->glGetCompressedTexImage(target, level, img);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlSampleCoverage(QOpenGLFunctions_4_5_Core* self, float value, unsigned char invert) {
	self->glSampleCoverage(value, invert);
}

void QOpenGLFunctions_4_5_Core_GlActiveTexture(QOpenGLFunctions_4_5_Core* self, uint32_t texture) {
	self->glActiveTexture(texture);
}

void QOpenGLFunctions_4_5_Core_GlPointParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, const int32_t* params) {
	self->glPointParameteriv(pname, params);
}

void QOpenGLFunctions_4_5_Core_GlPointParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int32_t param) {
	self->glPointParameteri(pname, param);
}

void QOpenGLFunctions_4_5_Core_GlPointParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, const float* params) {
	self->glPointParameterfv(pname, params);
}

void QOpenGLFunctions_4_5_Core_GlPointParameterf(QOpenGLFunctions_4_5_Core* self, uint32_t pname, float param) {
	self->glPointParameterf(pname, param);
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawElements(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount) {
	self->glMultiDrawElements(mode, count, typeVal, indices, drawcount);
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawArrays(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
	self->glMultiDrawArrays(mode, first, count, drawcount);
}

void QOpenGLFunctions_4_5_Core_GlBlendFuncSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
	self->glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void QOpenGLFunctions_4_5_Core_GlGetBufferPointerv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, void** params) {
	self->glGetBufferPointerv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetBufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetBufferParameteriv(target, pname, params);
}

unsigned char QOpenGLFunctions_4_5_Core_GlUnmapBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target) {
	return self->glUnmapBuffer(target);
}

void* QOpenGLFunctions_4_5_Core_GlMapBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t access) {
	return self->glMapBuffer(target, access);
}

void QOpenGLFunctions_4_5_Core_GlGetBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t offset, int64_t size, void* data) {
	self->glGetBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_4_5_Core_GlBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t offset, int64_t size, const void* data) {
	self->glBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_4_5_Core_GlBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t size, const void* data, uint32_t usage) {
	self->glBufferData(target, size, data, usage);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t buffer) {
	return self->glIsBuffer(buffer);
}

void QOpenGLFunctions_4_5_Core_GlGenBuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* buffers) {
	self->glGenBuffers(n, buffers);
}

void QOpenGLFunctions_4_5_Core_GlDeleteBuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* buffers) {
	self->glDeleteBuffers(n, buffers);
}

void QOpenGLFunctions_4_5_Core_GlBindBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t buffer) {
	self->glBindBuffer(target, buffer);
}

void QOpenGLFunctions_4_5_Core_GlGetQueryObjectuiv(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t pname, uint32_t* params) {
	self->glGetQueryObjectuiv(id, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetQueryObjectiv(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t pname, int32_t* params) {
	self->glGetQueryObjectiv(id, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetQueryiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetQueryiv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlEndQuery(QOpenGLFunctions_4_5_Core* self, uint32_t target) {
	self->glEndQuery(target);
}

void QOpenGLFunctions_4_5_Core_GlBeginQuery(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t id) {
	self->glBeginQuery(target, id);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsQuery(QOpenGLFunctions_4_5_Core* self, uint32_t id) {
	return self->glIsQuery(id);
}

void QOpenGLFunctions_4_5_Core_GlDeleteQueries(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* ids) {
	self->glDeleteQueries(n, ids);
}

void QOpenGLFunctions_4_5_Core_GlGenQueries(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* ids) {
	self->glGenQueries(n, ids);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribPointer(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* pointer) {
	self->glVertexAttribPointer(index, size, typeVal, normalized, stride, pointer);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4usv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint16_t* v) {
	self->glVertexAttrib4usv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttrib4uiv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4ubv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint8_t* v) {
	self->glVertexAttrib4ubv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib4sv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4s(QOpenGLFunctions_4_5_Core* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glVertexAttrib4s(index, x, y, z, w);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
	self->glVertexAttrib4iv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4fv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
	self->glVertexAttrib4fv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4f(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x, float y, float z, float w) {
	self->glVertexAttrib4f(index, x, y, z, w);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
	self->glVertexAttrib4dv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y, double z, double w) {
	self->glVertexAttrib4d(index, x, y, z, w);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4bv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const signed char* v) {
	self->glVertexAttrib4bv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nusv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint16_t* v) {
	self->glVertexAttrib4Nusv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nuiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttrib4Nuiv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nubv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint8_t* v) {
	self->glVertexAttrib4Nubv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nub(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w) {
	self->glVertexAttrib4Nub(index, x, y, z, w);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nsv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib4Nsv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Niv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
	self->glVertexAttrib4Niv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nbv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const signed char* v) {
	self->glVertexAttrib4Nbv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib3sv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3s(QOpenGLFunctions_4_5_Core* self, uint32_t index, int16_t x, int16_t y, int16_t z) {
	self->glVertexAttrib3s(index, x, y, z);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3fv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
	self->glVertexAttrib3fv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3f(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x, float y, float z) {
	self->glVertexAttrib3f(index, x, y, z);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
	self->glVertexAttrib3dv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y, double z) {
	self->glVertexAttrib3d(index, x, y, z);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib2sv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2s(QOpenGLFunctions_4_5_Core* self, uint32_t index, int16_t x, int16_t y) {
	self->glVertexAttrib2s(index, x, y);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2fv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
	self->glVertexAttrib2fv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2f(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x, float y) {
	self->glVertexAttrib2f(index, x, y);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
	self->glVertexAttrib2dv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y) {
	self->glVertexAttrib2d(index, x, y);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib1sv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1s(QOpenGLFunctions_4_5_Core* self, uint32_t index, int16_t x) {
	self->glVertexAttrib1s(index, x);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1fv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
	self->glVertexAttrib1fv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1f(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x) {
	self->glVertexAttrib1f(index, x);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
	self->glVertexAttrib1dv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x) {
	self->glVertexAttrib1d(index, x);
}

void QOpenGLFunctions_4_5_Core_GlValidateProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
	self->glValidateProgram(program);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform4iv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform4iv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform3iv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform3iv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform2iv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform2iv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform1iv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform1iv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform4fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const float* value) {
	self->glUniform4fv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform3fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const float* value) {
	self->glUniform3fv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform2fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const float* value) {
	self->glUniform2fv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform1fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const float* value) {
	self->glUniform1fv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform4i(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
	self->glUniform4i(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_5_Core_GlUniform3i(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
	self->glUniform3i(location, v0, v1, v2);
}

void QOpenGLFunctions_4_5_Core_GlUniform2i(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t v0, int32_t v1) {
	self->glUniform2i(location, v0, v1);
}

void QOpenGLFunctions_4_5_Core_GlUniform1i(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t v0) {
	self->glUniform1i(location, v0);
}

void QOpenGLFunctions_4_5_Core_GlUniform4f(QOpenGLFunctions_4_5_Core* self, int32_t location, float v0, float v1, float v2, float v3) {
	self->glUniform4f(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_5_Core_GlUniform3f(QOpenGLFunctions_4_5_Core* self, int32_t location, float v0, float v1, float v2) {
	self->glUniform3f(location, v0, v1, v2);
}

void QOpenGLFunctions_4_5_Core_GlUniform2f(QOpenGLFunctions_4_5_Core* self, int32_t location, float v0, float v1) {
	self->glUniform2f(location, v0, v1);
}

void QOpenGLFunctions_4_5_Core_GlUniform1f(QOpenGLFunctions_4_5_Core* self, int32_t location, float v0) {
	self->glUniform1f(location, v0);
}

void QOpenGLFunctions_4_5_Core_GlUseProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
	self->glUseProgram(program);
}

void QOpenGLFunctions_4_5_Core_GlShaderSource(QOpenGLFunctions_4_5_Core* self, uint32_t shader, int32_t count, const GLchar** stringVal, const int32_t* length) {
	self->glShaderSource(shader, count, stringVal, length);
}

void QOpenGLFunctions_4_5_Core_GlLinkProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
	self->glLinkProgram(program);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsShader(QOpenGLFunctions_4_5_Core* self, uint32_t shader) {
	return self->glIsShader(shader);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
	return self->glIsProgram(program);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribPointerv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, void** pointer) {
	self->glGetVertexAttribPointerv(index, pname, pointer);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribiv(index, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribfv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, float* params) {
	self->glGetVertexAttribfv(index, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribdv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, double* params) {
	self->glGetVertexAttribdv(index, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetUniformiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t* params) {
	self->glGetUniformiv(program, location, params);
}

void QOpenGLFunctions_4_5_Core_GlGetUniformfv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float* params) {
	self->glGetUniformfv(program, location, params);
}

int32_t QOpenGLFunctions_4_5_Core_GlGetUniformLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* name) {
	return self->glGetUniformLocation(program, name);
}

void QOpenGLFunctions_4_5_Core_GlGetShaderSource(QOpenGLFunctions_4_5_Core* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* source) {
	self->glGetShaderSource(shader, bufSize, length, source);
}

void QOpenGLFunctions_4_5_Core_GlGetShaderInfoLog(QOpenGLFunctions_4_5_Core* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void QOpenGLFunctions_4_5_Core_GlGetShaderiv(QOpenGLFunctions_4_5_Core* self, uint32_t shader, uint32_t pname, int32_t* params) {
	self->glGetShaderiv(shader, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetProgramInfoLog(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void QOpenGLFunctions_4_5_Core_GlGetProgramiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t pname, int32_t* params) {
	self->glGetProgramiv(program, pname, params);
}

int32_t QOpenGLFunctions_4_5_Core_GlGetAttribLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* name) {
	return self->glGetAttribLocation(program, name);
}

void QOpenGLFunctions_4_5_Core_GlGetAttachedShaders(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* shaders) {
	self->glGetAttachedShaders(program, maxCount, count, shaders);
}

void QOpenGLFunctions_4_5_Core_GlEnableVertexAttribArray(QOpenGLFunctions_4_5_Core* self, uint32_t index) {
	self->glEnableVertexAttribArray(index);
}

void QOpenGLFunctions_4_5_Core_GlDisableVertexAttribArray(QOpenGLFunctions_4_5_Core* self, uint32_t index) {
	self->glDisableVertexAttribArray(index);
}

void QOpenGLFunctions_4_5_Core_GlDetachShader(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shader) {
	self->glDetachShader(program, shader);
}

void QOpenGLFunctions_4_5_Core_GlDeleteShader(QOpenGLFunctions_4_5_Core* self, uint32_t shader) {
	self->glDeleteShader(shader);
}

void QOpenGLFunctions_4_5_Core_GlDeleteProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
	self->glDeleteProgram(program);
}

uint32_t QOpenGLFunctions_4_5_Core_GlCreateShader(QOpenGLFunctions_4_5_Core* self, uint32_t typeVal) {
	return self->glCreateShader(typeVal);
}

uint32_t QOpenGLFunctions_4_5_Core_GlCreateProgram(QOpenGLFunctions_4_5_Core* self) {
	return self->glCreateProgram();
}

void QOpenGLFunctions_4_5_Core_GlCompileShader(QOpenGLFunctions_4_5_Core* self, uint32_t shader) {
	self->glCompileShader(shader);
}

void QOpenGLFunctions_4_5_Core_GlBindAttribLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t index, const GLchar* name) {
	self->glBindAttribLocation(program, index, name);
}

void QOpenGLFunctions_4_5_Core_GlAttachShader(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shader) {
	self->glAttachShader(program, shader);
}

void QOpenGLFunctions_4_5_Core_GlStencilMaskSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t face, uint32_t mask) {
	self->glStencilMaskSeparate(face, mask);
}

void QOpenGLFunctions_4_5_Core_GlStencilFuncSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFuncSeparate(face, func, ref, mask);
}

void QOpenGLFunctions_4_5_Core_GlStencilOpSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
	self->glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void QOpenGLFunctions_4_5_Core_GlBlendEquationSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t modeRGB, uint32_t modeAlpha) {
	self->glBlendEquationSeparate(modeRGB, modeAlpha);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4x3fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4x3fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3x4fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3x4fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4x2fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4x2fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2x4fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2x4fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3x2fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3x2fv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2x3fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2x3fv(location, count, transpose, value);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsVertexArray(QOpenGLFunctions_4_5_Core* self, uint32_t array) {
	return self->glIsVertexArray(array);
}

void QOpenGLFunctions_4_5_Core_GlGenVertexArrays(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* arrays) {
	self->glGenVertexArrays(n, arrays);
}

void QOpenGLFunctions_4_5_Core_GlDeleteVertexArrays(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* arrays) {
	self->glDeleteVertexArrays(n, arrays);
}

void QOpenGLFunctions_4_5_Core_GlBindVertexArray(QOpenGLFunctions_4_5_Core* self, uint32_t array) {
	self->glBindVertexArray(array);
}

void QOpenGLFunctions_4_5_Core_GlFlushMappedBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t offset, int64_t length) {
	self->glFlushMappedBufferRange(target, offset, length);
}

void* QOpenGLFunctions_4_5_Core_GlMapBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t offset, int64_t length, uint32_t access) {
	return self->glMapBufferRange(target, offset, length, access);
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTextureLayer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
	self->glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void QOpenGLFunctions_4_5_Core_GlRenderbufferStorageMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
	self->glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void QOpenGLFunctions_4_5_Core_GlBlitFramebuffer(QOpenGLFunctions_4_5_Core* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
	self->glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void QOpenGLFunctions_4_5_Core_GlGenerateMipmap(QOpenGLFunctions_4_5_Core* self, uint32_t target) {
	self->glGenerateMipmap(target);
}

void QOpenGLFunctions_4_5_Core_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
	self->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlFramebufferRenderbuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
	self->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTexture3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
	self->glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTexture2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
	self->glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTexture1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
	self->glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

void QOpenGLFunctions_4_5_Core_GlGenFramebuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* framebuffers) {
	self->glGenFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_4_5_Core_GlDeleteFramebuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* framebuffers) {
	self->glDeleteFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_4_5_Core_GlBindFramebuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t framebuffer) {
	self->glBindFramebuffer(target, framebuffer);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsFramebuffer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer) {
	return self->glIsFramebuffer(framebuffer);
}

void QOpenGLFunctions_4_5_Core_GlGetRenderbufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetRenderbufferParameteriv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlRenderbufferStorage(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
	self->glRenderbufferStorage(target, internalformat, width, height);
}

void QOpenGLFunctions_4_5_Core_GlGenRenderbuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* renderbuffers) {
	self->glGenRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_4_5_Core_GlDeleteRenderbuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* renderbuffers) {
	self->glDeleteRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_4_5_Core_GlBindRenderbuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t renderbuffer) {
	self->glBindRenderbuffer(target, renderbuffer);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsRenderbuffer(QOpenGLFunctions_4_5_Core* self, uint32_t renderbuffer) {
	return self->glIsRenderbuffer(renderbuffer);
}

const uint8_t* QOpenGLFunctions_4_5_Core_GlGetStringi(QOpenGLFunctions_4_5_Core* self, uint32_t name, uint32_t index) {
	return self->glGetStringi(name, index);
}

void QOpenGLFunctions_4_5_Core_GlClearBufferfi(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
	self->glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void QOpenGLFunctions_4_5_Core_GlClearBufferfv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int32_t drawbuffer, const float* value) {
	self->glClearBufferfv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_5_Core_GlClearBufferuiv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
	self->glClearBufferuiv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_5_Core_GlClearBufferiv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
	self->glClearBufferiv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_5_Core_GlGetTexParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, uint32_t* params) {
	self->glGetTexParameterIuiv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTexParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameterIiv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlTexParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, const uint32_t* params) {
	self->glTexParameterIuiv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlTexParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameterIiv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlUniform4uiv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform4uiv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform3uiv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform3uiv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform2uiv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform2uiv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform1uiv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform1uiv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform4ui(QOpenGLFunctions_4_5_Core* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
	self->glUniform4ui(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_5_Core_GlUniform3ui(QOpenGLFunctions_4_5_Core* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
	self->glUniform3ui(location, v0, v1, v2);
}

void QOpenGLFunctions_4_5_Core_GlUniform2ui(QOpenGLFunctions_4_5_Core* self, int32_t location, uint32_t v0, uint32_t v1) {
	self->glUniform2ui(location, v0, v1);
}

void QOpenGLFunctions_4_5_Core_GlUniform1ui(QOpenGLFunctions_4_5_Core* self, int32_t location, uint32_t v0) {
	self->glUniform1ui(location, v0);
}

int32_t QOpenGLFunctions_4_5_Core_GlGetFragDataLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* name) {
	return self->glGetFragDataLocation(program, name);
}

void QOpenGLFunctions_4_5_Core_GlBindFragDataLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t color, const GLchar* name) {
	self->glBindFragDataLocation(program, color, name);
}

void QOpenGLFunctions_4_5_Core_GlGetUniformuiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t* params) {
	self->glGetUniformuiv(program, location, params);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4usv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint16_t* v) {
	self->glVertexAttribI4usv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4ubv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint8_t* v) {
	self->glVertexAttribI4ubv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
	self->glVertexAttribI4sv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4bv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const signed char* v) {
	self->glVertexAttribI4bv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI4uiv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI3uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI3uiv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI2uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI2uiv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI1uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI1uiv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI4iv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI3iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI3iv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI2iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI2iv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI1iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI1iv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
	self->glVertexAttribI4ui(index, x, y, z, w);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI3ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z) {
	self->glVertexAttribI3ui(index, x, y, z);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI2ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t x, uint32_t y) {
	self->glVertexAttribI2ui(index, x, y);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI1ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t x) {
	self->glVertexAttribI1ui(index, x);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4i(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glVertexAttribI4i(index, x, y, z, w);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI3i(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t x, int32_t y, int32_t z) {
	self->glVertexAttribI3i(index, x, y, z);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI2i(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t x, int32_t y) {
	self->glVertexAttribI2i(index, x, y);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI1i(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t x) {
	self->glVertexAttribI1i(index, x);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, uint32_t* params) {
	self->glGetVertexAttribIuiv(index, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribIiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribIiv(index, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribIPointer(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexAttribIPointer(index, size, typeVal, stride, pointer);
}

void QOpenGLFunctions_4_5_Core_GlEndConditionalRender(QOpenGLFunctions_4_5_Core* self) {
	self->glEndConditionalRender();
}

void QOpenGLFunctions_4_5_Core_GlBeginConditionalRender(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t mode) {
	self->glBeginConditionalRender(id, mode);
}

void QOpenGLFunctions_4_5_Core_GlClampColor(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t clamp) {
	self->glClampColor(target, clamp);
}

void QOpenGLFunctions_4_5_Core_GlTransformFeedbackVaryings(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t count, const GLchar** varyings, uint32_t bufferMode) {
	self->glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void QOpenGLFunctions_4_5_Core_GlBindBufferBase(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, uint32_t buffer) {
	self->glBindBufferBase(target, index, buffer);
}

void QOpenGLFunctions_4_5_Core_GlBindBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
	self->glBindBufferRange(target, index, buffer, offset, size);
}

void QOpenGLFunctions_4_5_Core_GlEndTransformFeedback(QOpenGLFunctions_4_5_Core* self) {
	self->glEndTransformFeedback();
}

void QOpenGLFunctions_4_5_Core_GlBeginTransformFeedback(QOpenGLFunctions_4_5_Core* self, uint32_t primitiveMode) {
	self->glBeginTransformFeedback(primitiveMode);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsEnabledi(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index) {
	return self->glIsEnabledi(target, index);
}

void QOpenGLFunctions_4_5_Core_GlDisablei(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index) {
	self->glDisablei(target, index);
}

void QOpenGLFunctions_4_5_Core_GlEnablei(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index) {
	self->glEnablei(target, index);
}

void QOpenGLFunctions_4_5_Core_GlGetIntegeriV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, int32_t* data) {
	self->glGetIntegeri_v(target, index, data);
}

void QOpenGLFunctions_4_5_Core_GlGetBooleaniV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, unsigned char* data) {
	self->glGetBooleani_v(target, index, data);
}

void QOpenGLFunctions_4_5_Core_GlColorMaski(QOpenGLFunctions_4_5_Core* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	self->glColorMaski(index, r, g, b, a);
}

void QOpenGLFunctions_4_5_Core_GlUniformBlockBinding(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
	self->glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void QOpenGLFunctions_4_5_Core_GlGetActiveUniformBlockName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName) {
	self->glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void QOpenGLFunctions_4_5_Core_GlGetActiveUniformBlockiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
	self->glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

uint32_t QOpenGLFunctions_4_5_Core_GlGetUniformBlockIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* uniformBlockName) {
	return self->glGetUniformBlockIndex(program, uniformBlockName);
}

void QOpenGLFunctions_4_5_Core_GlGetActiveUniformName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, GLchar* uniformName) {
	self->glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void QOpenGLFunctions_4_5_Core_GlGetActiveUniformsiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
	self->glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetUniformIndices(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t uniformCount, const GLchar** uniformNames, uint32_t* uniformIndices) {
	self->glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

void QOpenGLFunctions_4_5_Core_GlCopyBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size) {
	self->glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void QOpenGLFunctions_4_5_Core_GlPrimitiveRestartIndex(QOpenGLFunctions_4_5_Core* self, uint32_t index) {
	self->glPrimitiveRestartIndex(index);
}

void QOpenGLFunctions_4_5_Core_GlTexBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
	self->glTexBuffer(target, internalformat, buffer);
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsInstanced(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount) {
	self->glDrawElementsInstanced(mode, count, typeVal, indices, instancecount);
}

void QOpenGLFunctions_4_5_Core_GlDrawArraysInstanced(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
	self->glDrawArraysInstanced(mode, first, count, instancecount);
}

void QOpenGLFunctions_4_5_Core_GlSampleMaski(QOpenGLFunctions_4_5_Core* self, uint32_t maskNumber, uint32_t mask) {
	self->glSampleMaski(maskNumber, mask);
}

void QOpenGLFunctions_4_5_Core_GlGetMultisamplefv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, uint32_t index, float* val) {
	self->glGetMultisamplefv(pname, index, val);
}

void QOpenGLFunctions_4_5_Core_GlTexImage3DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
	self->glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void QOpenGLFunctions_4_5_Core_GlTexImage2DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
	self->glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTexture(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
	self->glFramebufferTexture(target, attachment, texture, level);
}

void QOpenGLFunctions_4_5_Core_GlGetBufferParameteri64v(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int64_t* params) {
	self->glGetBufferParameteri64v(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetInteger64iV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, int64_t* data) {
	self->glGetInteger64i_v(target, index, data);
}

void QOpenGLFunctions_4_5_Core_GlGetInteger64v(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int64_t* data) {
	self->glGetInteger64v(pname, data);
}

void QOpenGLFunctions_4_5_Core_GlProvokingVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode) {
	self->glProvokingVertex(mode);
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawElementsBaseVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount, const int32_t* basevertex) {
	self->glMultiDrawElementsBaseVertex(mode, count, typeVal, indices, drawcount, basevertex);
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsInstancedBaseVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex) {
	self->glDrawElementsInstancedBaseVertex(mode, count, typeVal, indices, instancecount, basevertex);
}

void QOpenGLFunctions_4_5_Core_GlDrawRangeElementsBaseVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
	self->glDrawRangeElementsBaseVertex(mode, start, end, count, typeVal, indices, basevertex);
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsBaseVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
	self->glDrawElementsBaseVertex(mode, count, typeVal, indices, basevertex);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP4uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP4uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP4ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP4ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP3uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP3uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP3ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP3ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP2uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP2uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP2ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP2ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP1uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP1uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP1ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP1ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribDivisor(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t divisor) {
	self->glVertexAttribDivisor(index, divisor);
}

void QOpenGLFunctions_4_5_Core_GlGetQueryObjectui64v(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t pname, uint64_t* params) {
	self->glGetQueryObjectui64v(id, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetQueryObjecti64v(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t pname, int64_t* params) {
	self->glGetQueryObjecti64v(id, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlQueryCounter(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t target) {
	self->glQueryCounter(id, target);
}

void QOpenGLFunctions_4_5_Core_GlGetSamplerParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
	self->glGetSamplerParameterIuiv(sampler, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetSamplerParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, float* params) {
	self->glGetSamplerParameterfv(sampler, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetSamplerParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, int32_t* params) {
	self->glGetSamplerParameterIiv(sampler, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetSamplerParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, int32_t* params) {
	self->glGetSamplerParameteriv(sampler, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, const uint32_t* param) {
	self->glSamplerParameterIuiv(sampler, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
	self->glSamplerParameterIiv(sampler, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, const float* param) {
	self->glSamplerParameterfv(sampler, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameterf(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, float param) {
	self->glSamplerParameterf(sampler, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
	self->glSamplerParameteriv(sampler, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, int32_t param) {
	self->glSamplerParameteri(sampler, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlBindSampler(QOpenGLFunctions_4_5_Core* self, uint32_t unit, uint32_t sampler) {
	self->glBindSampler(unit, sampler);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsSampler(QOpenGLFunctions_4_5_Core* self, uint32_t sampler) {
	return self->glIsSampler(sampler);
}

void QOpenGLFunctions_4_5_Core_GlDeleteSamplers(QOpenGLFunctions_4_5_Core* self, int32_t count, const uint32_t* samplers) {
	self->glDeleteSamplers(count, samplers);
}

void QOpenGLFunctions_4_5_Core_GlGenSamplers(QOpenGLFunctions_4_5_Core* self, int32_t count, uint32_t* samplers) {
	self->glGenSamplers(count, samplers);
}

int32_t QOpenGLFunctions_4_5_Core_GlGetFragDataIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* name) {
	return self->glGetFragDataIndex(program, name);
}

void QOpenGLFunctions_4_5_Core_GlBindFragDataLocationIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t colorNumber, uint32_t index, const GLchar* name) {
	self->glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

void QOpenGLFunctions_4_5_Core_GlGetQueryIndexediv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetQueryIndexediv(target, index, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlEndQueryIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index) {
	self->glEndQueryIndexed(target, index);
}

void QOpenGLFunctions_4_5_Core_GlBeginQueryIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, uint32_t id) {
	self->glBeginQueryIndexed(target, index, id);
}

void QOpenGLFunctions_4_5_Core_GlDrawTransformFeedbackStream(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t id, uint32_t stream) {
	self->glDrawTransformFeedbackStream(mode, id, stream);
}

void QOpenGLFunctions_4_5_Core_GlDrawTransformFeedback(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t id) {
	self->glDrawTransformFeedback(mode, id);
}

void QOpenGLFunctions_4_5_Core_GlResumeTransformFeedback(QOpenGLFunctions_4_5_Core* self) {
	self->glResumeTransformFeedback();
}

void QOpenGLFunctions_4_5_Core_GlPauseTransformFeedback(QOpenGLFunctions_4_5_Core* self) {
	self->glPauseTransformFeedback();
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsTransformFeedback(QOpenGLFunctions_4_5_Core* self, uint32_t id) {
	return self->glIsTransformFeedback(id);
}

void QOpenGLFunctions_4_5_Core_GlGenTransformFeedbacks(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* ids) {
	self->glGenTransformFeedbacks(n, ids);
}

void QOpenGLFunctions_4_5_Core_GlDeleteTransformFeedbacks(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* ids) {
	self->glDeleteTransformFeedbacks(n, ids);
}

void QOpenGLFunctions_4_5_Core_GlBindTransformFeedback(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t id) {
	self->glBindTransformFeedback(target, id);
}

void QOpenGLFunctions_4_5_Core_GlPatchParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, const float* values) {
	self->glPatchParameterfv(pname, values);
}

void QOpenGLFunctions_4_5_Core_GlPatchParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int32_t value) {
	self->glPatchParameteri(pname, value);
}

void QOpenGLFunctions_4_5_Core_GlGetProgramStageiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, uint32_t pname, int32_t* values) {
	self->glGetProgramStageiv(program, shadertype, pname, values);
}

void QOpenGLFunctions_4_5_Core_GlGetUniformSubroutineuiv(QOpenGLFunctions_4_5_Core* self, uint32_t shadertype, int32_t location, uint32_t* params) {
	self->glGetUniformSubroutineuiv(shadertype, location, params);
}

void QOpenGLFunctions_4_5_Core_GlUniformSubroutinesuiv(QOpenGLFunctions_4_5_Core* self, uint32_t shadertype, int32_t count, const uint32_t* indices) {
	self->glUniformSubroutinesuiv(shadertype, count, indices);
}

void QOpenGLFunctions_4_5_Core_GlGetActiveSubroutineName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, GLchar* name) {
	self->glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

void QOpenGLFunctions_4_5_Core_GlGetActiveSubroutineUniformName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, GLchar* name) {
	self->glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

void QOpenGLFunctions_4_5_Core_GlGetActiveSubroutineUniformiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, uint32_t pname, int32_t* values) {
	self->glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

uint32_t QOpenGLFunctions_4_5_Core_GlGetSubroutineIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, const GLchar* name) {
	return self->glGetSubroutineIndex(program, shadertype, name);
}

int32_t QOpenGLFunctions_4_5_Core_GlGetSubroutineUniformLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, const GLchar* name) {
	return self->glGetSubroutineUniformLocation(program, shadertype, name);
}

void QOpenGLFunctions_4_5_Core_GlGetUniformdv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double* params) {
	self->glGetUniformdv(program, location, params);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4x3dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix4x3dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4x2dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix4x2dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3x4dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix3x4dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3x2dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix3x2dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2x4dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix2x4dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2x3dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix2x3dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix4dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix3dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glUniformMatrix2dv(location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform4dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const double* value) {
	self->glUniform4dv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform3dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const double* value) {
	self->glUniform3dv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform2dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const double* value) {
	self->glUniform2dv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform1dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const double* value) {
	self->glUniform1dv(location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlUniform4d(QOpenGLFunctions_4_5_Core* self, int32_t location, double x, double y, double z, double w) {
	self->glUniform4d(location, x, y, z, w);
}

void QOpenGLFunctions_4_5_Core_GlUniform3d(QOpenGLFunctions_4_5_Core* self, int32_t location, double x, double y, double z) {
	self->glUniform3d(location, x, y, z);
}

void QOpenGLFunctions_4_5_Core_GlUniform2d(QOpenGLFunctions_4_5_Core* self, int32_t location, double x, double y) {
	self->glUniform2d(location, x, y);
}

void QOpenGLFunctions_4_5_Core_GlUniform1d(QOpenGLFunctions_4_5_Core* self, int32_t location, double x) {
	self->glUniform1d(location, x);
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsIndirect(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t typeVal, const void* indirect) {
	self->glDrawElementsIndirect(mode, typeVal, indirect);
}

void QOpenGLFunctions_4_5_Core_GlDrawArraysIndirect(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const void* indirect) {
	self->glDrawArraysIndirect(mode, indirect);
}

void QOpenGLFunctions_4_5_Core_GlBlendFuncSeparatei(QOpenGLFunctions_4_5_Core* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
	self->glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void QOpenGLFunctions_4_5_Core_GlBlendFunci(QOpenGLFunctions_4_5_Core* self, uint32_t buf, uint32_t src, uint32_t dst) {
	self->glBlendFunci(buf, src, dst);
}

void QOpenGLFunctions_4_5_Core_GlBlendEquationSeparatei(QOpenGLFunctions_4_5_Core* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha) {
	self->glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void QOpenGLFunctions_4_5_Core_GlBlendEquationi(QOpenGLFunctions_4_5_Core* self, uint32_t buf, uint32_t mode) {
	self->glBlendEquationi(buf, mode);
}

void QOpenGLFunctions_4_5_Core_GlMinSampleShading(QOpenGLFunctions_4_5_Core* self, float value) {
	self->glMinSampleShading(value);
}

void QOpenGLFunctions_4_5_Core_GlGetDoubleiV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, double* data) {
	self->glGetDoublei_v(target, index, data);
}

void QOpenGLFunctions_4_5_Core_GlGetFloatiV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, float* data) {
	self->glGetFloati_v(target, index, data);
}

void QOpenGLFunctions_4_5_Core_GlDepthRangeIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t index, double n, double f) {
	self->glDepthRangeIndexed(index, n, f);
}

void QOpenGLFunctions_4_5_Core_GlDepthRangeArrayv(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const double* v) {
	self->glDepthRangeArrayv(first, count, v);
}

void QOpenGLFunctions_4_5_Core_GlScissorIndexedv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
	self->glScissorIndexedv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlScissorIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t left, int32_t bottom, int32_t width, int32_t height) {
	self->glScissorIndexed(index, left, bottom, width, height);
}

void QOpenGLFunctions_4_5_Core_GlScissorArrayv(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const int32_t* v) {
	self->glScissorArrayv(first, count, v);
}

void QOpenGLFunctions_4_5_Core_GlViewportIndexedfv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
	self->glViewportIndexedfv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlViewportIndexedf(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x, float y, float w, float h) {
	self->glViewportIndexedf(index, x, y, w, h);
}

void QOpenGLFunctions_4_5_Core_GlViewportArrayv(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const float* v) {
	self->glViewportArrayv(first, count, v);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribLdv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, double* params) {
	self->glGetVertexAttribLdv(index, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribLPointer(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexAttribLPointer(index, size, typeVal, stride, pointer);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL4dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
	self->glVertexAttribL4dv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL3dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
	self->glVertexAttribL3dv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL2dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
	self->glVertexAttribL2dv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL1dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
	self->glVertexAttribL1dv(index, v);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL4d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y, double z, double w) {
	self->glVertexAttribL4d(index, x, y, z, w);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL3d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y, double z) {
	self->glVertexAttribL3d(index, x, y, z);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL2d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y) {
	self->glVertexAttribL2d(index, x, y);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL1d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x) {
	self->glVertexAttribL1d(index, x);
}

void QOpenGLFunctions_4_5_Core_GlGetProgramPipelineInfoLog(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void QOpenGLFunctions_4_5_Core_GlValidateProgramPipeline(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline) {
	self->glValidateProgramPipeline(pipeline);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4x3dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3x4dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4x2dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2x4dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3x2dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2x3dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4x3fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3x4fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4x2fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2x4fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3x2fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2x3fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
	self->glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4uiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform4uiv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4ui(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
	self->glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
	self->glProgramUniform4dv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4d(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double v0, double v1, double v2, double v3) {
	self->glProgramUniform4d(program, location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform4fv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4f(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3) {
	self->glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4iv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform4iv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4i(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
	self->glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3uiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform3uiv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3ui(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
	self->glProgramUniform3ui(program, location, v0, v1, v2);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
	self->glProgramUniform3dv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3d(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double v0, double v1, double v2) {
	self->glProgramUniform3d(program, location, v0, v1, v2);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform3fv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3f(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float v0, float v1, float v2) {
	self->glProgramUniform3f(program, location, v0, v1, v2);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3iv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform3iv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3i(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
	self->glProgramUniform3i(program, location, v0, v1, v2);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2uiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform2uiv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2ui(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1) {
	self->glProgramUniform2ui(program, location, v0, v1);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
	self->glProgramUniform2dv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2d(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double v0, double v1) {
	self->glProgramUniform2d(program, location, v0, v1);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform2fv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2f(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float v0, float v1) {
	self->glProgramUniform2f(program, location, v0, v1);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2iv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform2iv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2i(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1) {
	self->glProgramUniform2i(program, location, v0, v1);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1uiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform1uiv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1ui(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t v0) {
	self->glProgramUniform1ui(program, location, v0);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
	self->glProgramUniform1dv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1d(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double v0) {
	self->glProgramUniform1d(program, location, v0);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform1fv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1f(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float v0) {
	self->glProgramUniform1f(program, location, v0);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1iv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform1iv(program, location, count, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1i(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t v0) {
	self->glProgramUniform1i(program, location, v0);
}

void QOpenGLFunctions_4_5_Core_GlGetProgramPipelineiv(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline, uint32_t pname, int32_t* params) {
	self->glGetProgramPipelineiv(pipeline, pname, params);
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsProgramPipeline(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline) {
	return self->glIsProgramPipeline(pipeline);
}

void QOpenGLFunctions_4_5_Core_GlGenProgramPipelines(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* pipelines) {
	self->glGenProgramPipelines(n, pipelines);
}

void QOpenGLFunctions_4_5_Core_GlDeleteProgramPipelines(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* pipelines) {
	self->glDeleteProgramPipelines(n, pipelines);
}

void QOpenGLFunctions_4_5_Core_GlBindProgramPipeline(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline) {
	self->glBindProgramPipeline(pipeline);
}

uint32_t QOpenGLFunctions_4_5_Core_GlCreateShaderProgramv(QOpenGLFunctions_4_5_Core* self, uint32_t typeVal, int32_t count, const GLchar** strings) {
	return self->glCreateShaderProgramv(typeVal, count, strings);
}

void QOpenGLFunctions_4_5_Core_GlActiveShaderProgram(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline, uint32_t program) {
	self->glActiveShaderProgram(pipeline, program);
}

void QOpenGLFunctions_4_5_Core_GlUseProgramStages(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline, uint32_t stages, uint32_t program) {
	self->glUseProgramStages(pipeline, stages, program);
}

void QOpenGLFunctions_4_5_Core_GlProgramParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t pname, int32_t value) {
	self->glProgramParameteri(program, pname, value);
}

void QOpenGLFunctions_4_5_Core_GlProgramBinary(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t binaryFormat, const void* binary, int32_t length) {
	self->glProgramBinary(program, binaryFormat, binary, length);
}

void QOpenGLFunctions_4_5_Core_GlClearDepthf(QOpenGLFunctions_4_5_Core* self, float dd) {
	self->glClearDepthf(dd);
}

void QOpenGLFunctions_4_5_Core_GlDepthRangef(QOpenGLFunctions_4_5_Core* self, float n, float f) {
	self->glDepthRangef(n, f);
}

void QOpenGLFunctions_4_5_Core_GlGetShaderPrecisionFormat(QOpenGLFunctions_4_5_Core* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision) {
	self->glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void QOpenGLFunctions_4_5_Core_GlShaderBinary(QOpenGLFunctions_4_5_Core* self, int32_t count, const uint32_t* shaders, uint32_t binaryformat, const void* binary, int32_t length) {
	self->glShaderBinary(count, shaders, binaryformat, binary, length);
}

void QOpenGLFunctions_4_5_Core_GlReleaseShaderCompiler(QOpenGLFunctions_4_5_Core* self) {
	self->glReleaseShaderCompiler();
}

void QOpenGLFunctions_4_5_Core_GlDrawTransformFeedbackStreamInstanced(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t id, uint32_t stream, int32_t instancecount) {
	self->glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void QOpenGLFunctions_4_5_Core_GlDrawTransformFeedbackInstanced(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t id, int32_t instancecount) {
	self->glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

void QOpenGLFunctions_4_5_Core_GlTexStorage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth) {
	self->glTexStorage3D(target, levels, internalformat, width, height, depth);
}

void QOpenGLFunctions_4_5_Core_GlTexStorage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height) {
	self->glTexStorage2D(target, levels, internalformat, width, height);
}

void QOpenGLFunctions_4_5_Core_GlTexStorage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width) {
	self->glTexStorage1D(target, levels, internalformat, width);
}

void QOpenGLFunctions_4_5_Core_GlMemoryBarrier(QOpenGLFunctions_4_5_Core* self, uint32_t barriers) {
	self->glMemoryBarrier(barriers);
}

void QOpenGLFunctions_4_5_Core_GlBindImageTexture(QOpenGLFunctions_4_5_Core* self, uint32_t unit, uint32_t texture, int32_t level, unsigned char layered, int32_t layer, uint32_t access, uint32_t format) {
	self->glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

void QOpenGLFunctions_4_5_Core_GlGetActiveAtomicCounterBufferiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t bufferIndex, uint32_t pname, int32_t* params) {
	self->glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetInternalformativ(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params) {
	self->glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsInstancedBaseVertexBaseInstance(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex, uint32_t baseinstance) {
	self->glDrawElementsInstancedBaseVertexBaseInstance(mode, count, typeVal, indices, instancecount, basevertex, baseinstance);
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsInstancedBaseInstance(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, uint32_t baseinstance) {
	self->glDrawElementsInstancedBaseInstance(mode, count, typeVal, indices, instancecount, baseinstance);
}

void QOpenGLFunctions_4_5_Core_GlDrawArraysInstancedBaseInstance(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount, uint32_t baseinstance) {
	self->glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void QOpenGLFunctions_4_5_Core_GlGetObjectPtrLabel(QOpenGLFunctions_4_5_Core* self, const void* ptr, int32_t bufSize, int32_t* length, GLchar* label) {
	self->glGetObjectPtrLabel(ptr, bufSize, length, label);
}

void QOpenGLFunctions_4_5_Core_GlObjectPtrLabel(QOpenGLFunctions_4_5_Core* self, const void* ptr, int32_t length, const GLchar* label) {
	self->glObjectPtrLabel(ptr, length, label);
}

void QOpenGLFunctions_4_5_Core_GlGetObjectLabel(QOpenGLFunctions_4_5_Core* self, uint32_t identifier, uint32_t name, int32_t bufSize, int32_t* length, GLchar* label) {
	self->glGetObjectLabel(identifier, name, bufSize, length, label);
}

void QOpenGLFunctions_4_5_Core_GlObjectLabel(QOpenGLFunctions_4_5_Core* self, uint32_t identifier, uint32_t name, int32_t length, const GLchar* label) {
	self->glObjectLabel(identifier, name, length, label);
}

void QOpenGLFunctions_4_5_Core_GlPopDebugGroup(QOpenGLFunctions_4_5_Core* self) {
	self->glPopDebugGroup();
}

void QOpenGLFunctions_4_5_Core_GlPushDebugGroup(QOpenGLFunctions_4_5_Core* self, uint32_t source, uint32_t id, int32_t length, const GLchar* message) {
	self->glPushDebugGroup(source, id, length, message);
}

void QOpenGLFunctions_4_5_Core_GlDebugMessageInsert(QOpenGLFunctions_4_5_Core* self, uint32_t source, uint32_t typeVal, uint32_t id, uint32_t severity, int32_t length, const GLchar* buf) {
	self->glDebugMessageInsert(source, typeVal, id, severity, length, buf);
}

void QOpenGLFunctions_4_5_Core_GlDebugMessageControl(QOpenGLFunctions_4_5_Core* self, uint32_t source, uint32_t typeVal, uint32_t severity, int32_t count, const uint32_t* ids, unsigned char enabled) {
	self->glDebugMessageControl(source, typeVal, severity, count, ids, enabled);
}

void QOpenGLFunctions_4_5_Core_GlVertexBindingDivisor(QOpenGLFunctions_4_5_Core* self, uint32_t bindingindex, uint32_t divisor) {
	self->glVertexBindingDivisor(bindingindex, divisor);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribBinding(QOpenGLFunctions_4_5_Core* self, uint32_t attribindex, uint32_t bindingindex) {
	self->glVertexAttribBinding(attribindex, bindingindex);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribLFormat(QOpenGLFunctions_4_5_Core* self, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
	self->glVertexAttribLFormat(attribindex, size, typeVal, relativeoffset);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribIFormat(QOpenGLFunctions_4_5_Core* self, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
	self->glVertexAttribIFormat(attribindex, size, typeVal, relativeoffset);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribFormat(QOpenGLFunctions_4_5_Core* self, uint32_t attribindex, int32_t size, uint32_t typeVal, unsigned char normalized, uint32_t relativeoffset) {
	self->glVertexAttribFormat(attribindex, size, typeVal, normalized, relativeoffset);
}

void QOpenGLFunctions_4_5_Core_GlBindVertexBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t bindingindex, uint32_t buffer, int64_t offset, int32_t stride) {
	self->glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

void QOpenGLFunctions_4_5_Core_GlTextureView(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t target, uint32_t origtexture, uint32_t internalformat, uint32_t minlevel, uint32_t numlevels, uint32_t minlayer, uint32_t numlayers) {
	self->glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void QOpenGLFunctions_4_5_Core_GlTexStorage3DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
	self->glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void QOpenGLFunctions_4_5_Core_GlTexStorage2DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
	self->glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void QOpenGLFunctions_4_5_Core_GlTexBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t buffer, int64_t offset, int64_t size) {
	self->glTexBufferRange(target, internalformat, buffer, offset, size);
}

void QOpenGLFunctions_4_5_Core_GlShaderStorageBlockBinding(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t storageBlockIndex, uint32_t storageBlockBinding) {
	self->glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

int32_t QOpenGLFunctions_4_5_Core_GlGetProgramResourceLocationIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
	return self->glGetProgramResourceLocationIndex(program, programInterface, name);
}

int32_t QOpenGLFunctions_4_5_Core_GlGetProgramResourceLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
	return self->glGetProgramResourceLocation(program, programInterface, name);
}

void QOpenGLFunctions_4_5_Core_GlGetProgramResourceName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, GLchar* name) {
	self->glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

uint32_t QOpenGLFunctions_4_5_Core_GlGetProgramResourceIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
	return self->glGetProgramResourceIndex(program, programInterface, name);
}

void QOpenGLFunctions_4_5_Core_GlGetProgramInterfaceiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params) {
	self->glGetProgramInterfaceiv(program, programInterface, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawElementsIndirect(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t typeVal, const void* indirect, int32_t drawcount, int32_t stride) {
	self->glMultiDrawElementsIndirect(mode, typeVal, indirect, drawcount, stride);
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawArraysIndirect(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const void* indirect, int32_t drawcount, int32_t stride) {
	self->glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void QOpenGLFunctions_4_5_Core_GlInvalidateBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer) {
	self->glInvalidateBufferData(buffer);
}

void QOpenGLFunctions_4_5_Core_GlInvalidateBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t length) {
	self->glInvalidateBufferSubData(buffer, offset, length);
}

void QOpenGLFunctions_4_5_Core_GlInvalidateTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level) {
	self->glInvalidateTexImage(texture, level);
}

void QOpenGLFunctions_4_5_Core_GlInvalidateTexSubImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth) {
	self->glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

void QOpenGLFunctions_4_5_Core_GlGetInternalformati64v(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int64_t* params) {
	self->glGetInternalformati64v(target, internalformat, pname, bufSize, params);
}

void QOpenGLFunctions_4_5_Core_GlGetFramebufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetFramebufferParameteriv(target, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlFramebufferParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glFramebufferParameteri(target, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlCopyImageSubData(QOpenGLFunctions_4_5_Core* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth) {
	self->glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void QOpenGLFunctions_4_5_Core_GlDispatchComputeIndirect(QOpenGLFunctions_4_5_Core* self, int64_t indirect) {
	self->glDispatchComputeIndirect(indirect);
}

void QOpenGLFunctions_4_5_Core_GlDispatchCompute(QOpenGLFunctions_4_5_Core* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z) {
	self->glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void QOpenGLFunctions_4_5_Core_GlClearBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, int64_t offset, int64_t size, uint32_t format, uint32_t typeVal, const void* data) {
	self->glClearBufferSubData(target, internalformat, offset, size, format, typeVal, data);
}

void QOpenGLFunctions_4_5_Core_GlClearBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t format, uint32_t typeVal, const void* data) {
	self->glClearBufferData(target, internalformat, format, typeVal, data);
}

void QOpenGLFunctions_4_5_Core_GlBindVertexBuffers(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const uint32_t* buffers, const int64_t* offsets, const int32_t* strides) {
	self->glBindVertexBuffers(first, count, buffers, offsets, strides);
}

void QOpenGLFunctions_4_5_Core_GlBindImageTextures(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const uint32_t* textures) {
	self->glBindImageTextures(first, count, textures);
}

void QOpenGLFunctions_4_5_Core_GlBindSamplers(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const uint32_t* samplers) {
	self->glBindSamplers(first, count, samplers);
}

void QOpenGLFunctions_4_5_Core_GlBindTextures(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const uint32_t* textures) {
	self->glBindTextures(first, count, textures);
}

void QOpenGLFunctions_4_5_Core_GlBindBuffersRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t first, int32_t count, const uint32_t* buffers, const int64_t* offsets, const int64_t* sizes) {
	self->glBindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void QOpenGLFunctions_4_5_Core_GlBindBuffersBase(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t first, int32_t count, const uint32_t* buffers) {
	self->glBindBuffersBase(target, first, count, buffers);
}

void QOpenGLFunctions_4_5_Core_GlClearTexSubImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* data) {
	self->glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, data);
}

void QOpenGLFunctions_4_5_Core_GlClearTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, uint32_t format, uint32_t typeVal, const void* data) {
	self->glClearTexImage(texture, level, format, typeVal, data);
}

void QOpenGLFunctions_4_5_Core_GlBufferStorage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t size, const void* data, uint32_t flags) {
	self->glBufferStorage(target, size, data, flags);
}

void QOpenGLFunctions_4_5_Core_GlTextureBarrier(QOpenGLFunctions_4_5_Core* self) {
	self->glTextureBarrier();
}

void QOpenGLFunctions_4_5_Core_GlReadnPixels(QOpenGLFunctions_4_5_Core* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, int32_t bufSize, void* data) {
	self->glReadnPixels(x, y, width, height, format, typeVal, bufSize, data);
}

void QOpenGLFunctions_4_5_Core_GlGetnUniformuiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t bufSize, uint32_t* params) {
	self->glGetnUniformuiv(program, location, bufSize, params);
}

void QOpenGLFunctions_4_5_Core_GlGetnUniformiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t bufSize, int32_t* params) {
	self->glGetnUniformiv(program, location, bufSize, params);
}

void QOpenGLFunctions_4_5_Core_GlGetnUniformfv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t bufSize, float* params) {
	self->glGetnUniformfv(program, location, bufSize, params);
}

void QOpenGLFunctions_4_5_Core_GlGetnUniformdv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t bufSize, double* params) {
	self->glGetnUniformdv(program, location, bufSize, params);
}

void QOpenGLFunctions_4_5_Core_GlGetnTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, int32_t bufSize, void* pixels) {
	self->glGetnTexImage(target, level, format, typeVal, bufSize, pixels);
}

void QOpenGLFunctions_4_5_Core_GlGetnCompressedTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t lod, int32_t bufSize, void* pixels) {
	self->glGetnCompressedTexImage(target, lod, bufSize, pixels);
}

void QOpenGLFunctions_4_5_Core_GlGetCompressedTextureSubImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, int32_t bufSize, void* pixels) {
	self->glGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureSubImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, int32_t bufSize, void* pixels) {
	self->glGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, bufSize, pixels);
}

void QOpenGLFunctions_4_5_Core_GlMemoryBarrierByRegion(QOpenGLFunctions_4_5_Core* self, uint32_t barriers) {
	self->glMemoryBarrierByRegion(barriers);
}

void QOpenGLFunctions_4_5_Core_GlCreateQueries(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t n, uint32_t* ids) {
	self->glCreateQueries(target, n, ids);
}

void QOpenGLFunctions_4_5_Core_GlCreateProgramPipelines(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* pipelines) {
	self->glCreateProgramPipelines(n, pipelines);
}

void QOpenGLFunctions_4_5_Core_GlCreateSamplers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* samplers) {
	self->glCreateSamplers(n, samplers);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexArrayIndexed64iv(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t index, uint32_t pname, int64_t* param) {
	self->glGetVertexArrayIndexed64iv(vaobj, index, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexArrayIndexediv(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t index, uint32_t pname, int32_t* param) {
	self->glGetVertexArrayIndexediv(vaobj, index, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexArrayiv(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t pname, int32_t* param) {
	self->glGetVertexArrayiv(vaobj, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayBindingDivisor(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t bindingindex, uint32_t divisor) {
	self->glVertexArrayBindingDivisor(vaobj, bindingindex, divisor);
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayAttribLFormat(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
	self->glVertexArrayAttribLFormat(vaobj, attribindex, size, typeVal, relativeoffset);
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayAttribIFormat(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
	self->glVertexArrayAttribIFormat(vaobj, attribindex, size, typeVal, relativeoffset);
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayAttribFormat(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t typeVal, unsigned char normalized, uint32_t relativeoffset) {
	self->glVertexArrayAttribFormat(vaobj, attribindex, size, typeVal, normalized, relativeoffset);
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayAttribBinding(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t attribindex, uint32_t bindingindex) {
	self->glVertexArrayAttribBinding(vaobj, attribindex, bindingindex);
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayVertexBuffers(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t first, int32_t count, const uint32_t* buffers, const int64_t* offsets, const int32_t* strides) {
	self->glVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayVertexBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t bindingindex, uint32_t buffer, int64_t offset, int32_t stride) {
	self->glVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayElementBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t buffer) {
	self->glVertexArrayElementBuffer(vaobj, buffer);
}

void QOpenGLFunctions_4_5_Core_GlEnableVertexArrayAttrib(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t index) {
	self->glEnableVertexArrayAttrib(vaobj, index);
}

void QOpenGLFunctions_4_5_Core_GlDisableVertexArrayAttrib(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t index) {
	self->glDisableVertexArrayAttrib(vaobj, index);
}

void QOpenGLFunctions_4_5_Core_GlCreateVertexArrays(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* arrays) {
	self->glCreateVertexArrays(n, arrays);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, int32_t* params) {
	self->glGetTextureParameteriv(texture, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, uint32_t* params) {
	self->glGetTextureParameterIuiv(texture, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, int32_t* params) {
	self->glGetTextureParameterIiv(texture, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, float* params) {
	self->glGetTextureParameterfv(texture, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureLevelParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, uint32_t pname, int32_t* params) {
	self->glGetTextureLevelParameteriv(texture, level, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureLevelParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, uint32_t pname, float* params) {
	self->glGetTextureLevelParameterfv(texture, level, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetCompressedTextureImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t bufSize, void* pixels) {
	self->glGetCompressedTextureImage(texture, level, bufSize, pixels);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, uint32_t format, uint32_t typeVal, int32_t bufSize, void* pixels) {
	self->glGetTextureImage(texture, level, format, typeVal, bufSize, pixels);
}

void QOpenGLFunctions_4_5_Core_GlBindTextureUnit(QOpenGLFunctions_4_5_Core* self, uint32_t unit, uint32_t texture) {
	self->glBindTextureUnit(unit, texture);
}

void QOpenGLFunctions_4_5_Core_GlGenerateTextureMipmap(QOpenGLFunctions_4_5_Core* self, uint32_t texture) {
	self->glGenerateTextureMipmap(texture);
}

void QOpenGLFunctions_4_5_Core_GlTextureParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, const int32_t* param) {
	self->glTextureParameteriv(texture, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlTextureParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, const uint32_t* params) {
	self->glTextureParameterIuiv(texture, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlTextureParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, const int32_t* params) {
	self->glTextureParameterIiv(texture, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlTextureParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, int32_t param) {
	self->glTextureParameteri(texture, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlTextureParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, const float* param) {
	self->glTextureParameterfv(texture, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlTextureParameterf(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, float param) {
	self->glTextureParameterf(texture, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlCopyTextureSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void QOpenGLFunctions_4_5_Core_GlCopyTextureSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
}

void QOpenGLFunctions_4_5_Core_GlCopyTextureSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
	self->glCopyTextureSubImage1D(texture, level, xoffset, x, y, width);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTextureSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTextureSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTextureSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
}

void QOpenGLFunctions_4_5_Core_GlTextureSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlTextureSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlTextureSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTextureSubImage1D(texture, level, xoffset, width, format, typeVal, pixels);
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage3DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
	self->glTextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage2DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
	self->glTextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage3D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth) {
	self->glTextureStorage3D(texture, levels, internalformat, width, height, depth);
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage2D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width, int32_t height) {
	self->glTextureStorage2D(texture, levels, internalformat, width, height);
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage1D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width) {
	self->glTextureStorage1D(texture, levels, internalformat, width);
}

void QOpenGLFunctions_4_5_Core_GlTextureBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t internalformat, uint32_t buffer, int64_t offset, int32_t size) {
	self->glTextureBufferRange(texture, internalformat, buffer, offset, size);
}

void QOpenGLFunctions_4_5_Core_GlTextureBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t internalformat, uint32_t buffer) {
	self->glTextureBuffer(texture, internalformat, buffer);
}

void QOpenGLFunctions_4_5_Core_GlCreateTextures(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t n, uint32_t* textures) {
	self->glCreateTextures(target, n, textures);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedRenderbufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t renderbuffer, uint32_t pname, int32_t* params) {
	self->glGetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlNamedRenderbufferStorageMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t renderbuffer, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
	self->glNamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
}

void QOpenGLFunctions_4_5_Core_GlNamedRenderbufferStorage(QOpenGLFunctions_4_5_Core* self, uint32_t renderbuffer, uint32_t internalformat, int32_t width, int32_t height) {
	self->glNamedRenderbufferStorage(renderbuffer, internalformat, width, height);
}

void QOpenGLFunctions_4_5_Core_GlCreateRenderbuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* renderbuffers) {
	self->glCreateRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedFramebufferAttachmentParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t attachment, uint32_t pname, int32_t* params) {
	self->glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedFramebufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t pname, int32_t* param) {
	self->glGetNamedFramebufferParameteriv(framebuffer, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlBlitNamedFramebuffer(QOpenGLFunctions_4_5_Core* self, uint32_t readFramebuffer, uint32_t drawFramebuffer, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
	self->glBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void QOpenGLFunctions_4_5_Core_GlClearNamedFramebufferfi(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buffer, float depth, int32_t stencil) {
	self->glClearNamedFramebufferfi(framebuffer, buffer, depth, stencil);
}

void QOpenGLFunctions_4_5_Core_GlClearNamedFramebufferfv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, const float* value) {
	self->glClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_5_Core_GlClearNamedFramebufferuiv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
	self->glClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_5_Core_GlClearNamedFramebufferiv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
	self->glClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferReadBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t src) {
	self->glNamedFramebufferReadBuffer(framebuffer, src);
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferDrawBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buf) {
	self->glNamedFramebufferDrawBuffer(framebuffer, buf);
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferTextureLayer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
	self->glNamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferTexture(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t attachment, uint32_t texture, int32_t level) {
	self->glNamedFramebufferTexture(framebuffer, attachment, texture, level);
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t pname, int32_t param) {
	self->glNamedFramebufferParameteri(framebuffer, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferRenderbuffer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
	self->glNamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void QOpenGLFunctions_4_5_Core_GlCreateFramebuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* framebuffers) {
	self->glCreateFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t size, void* data) {
	self->glGetNamedBufferSubData(buffer, offset, size, data);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedBufferPointerv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t pname, void** params) {
	self->glGetNamedBufferPointerv(buffer, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedBufferParameteri64v(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t pname, int64_t* params) {
	self->glGetNamedBufferParameteri64v(buffer, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedBufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t pname, int32_t* params) {
	self->glGetNamedBufferParameteriv(buffer, pname, params);
}

void QOpenGLFunctions_4_5_Core_GlFlushMappedNamedBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t length) {
	self->glFlushMappedNamedBufferRange(buffer, offset, length);
}

unsigned char QOpenGLFunctions_4_5_Core_GlUnmapNamedBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t buffer) {
	return self->glUnmapNamedBuffer(buffer);
}

void* QOpenGLFunctions_4_5_Core_GlMapNamedBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t length, uint32_t access) {
	return self->glMapNamedBufferRange(buffer, offset, length, access);
}

void* QOpenGLFunctions_4_5_Core_GlMapNamedBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t access) {
	return self->glMapNamedBuffer(buffer, access);
}

void QOpenGLFunctions_4_5_Core_GlClearNamedBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t internalformat, int64_t offset, int64_t size, uint32_t format, uint32_t typeVal, const void* data) {
	self->glClearNamedBufferSubData(buffer, internalformat, offset, size, format, typeVal, data);
}

void QOpenGLFunctions_4_5_Core_GlClearNamedBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t internalformat, uint32_t format, uint32_t typeVal, const void* data) {
	self->glClearNamedBufferData(buffer, internalformat, format, typeVal, data);
}

void QOpenGLFunctions_4_5_Core_GlCopyNamedBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t readBuffer, uint32_t writeBuffer, int64_t readOffset, int64_t writeOffset, int64_t size) {
	self->glCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void QOpenGLFunctions_4_5_Core_GlNamedBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t size, const void* data) {
	self->glNamedBufferSubData(buffer, offset, size, data);
}

void QOpenGLFunctions_4_5_Core_GlNamedBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t size, const void* data, uint32_t usage) {
	self->glNamedBufferData(buffer, size, data, usage);
}

void QOpenGLFunctions_4_5_Core_GlNamedBufferStorage(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t size, const void* data, uint32_t flags) {
	self->glNamedBufferStorage(buffer, size, data, flags);
}

void QOpenGLFunctions_4_5_Core_GlCreateBuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* buffers) {
	self->glCreateBuffers(n, buffers);
}

void QOpenGLFunctions_4_5_Core_GlGetTransformFeedbacki64V(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t pname, uint32_t index, int64_t* param) {
	self->glGetTransformFeedbacki64_v(xfb, pname, index, param);
}

void QOpenGLFunctions_4_5_Core_GlGetTransformFeedbackiV(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t pname, uint32_t index, int32_t* param) {
	self->glGetTransformFeedbacki_v(xfb, pname, index, param);
}

void QOpenGLFunctions_4_5_Core_GlGetTransformFeedbackiv(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t pname, int32_t* param) {
	self->glGetTransformFeedbackiv(xfb, pname, param);
}

void QOpenGLFunctions_4_5_Core_GlTransformFeedbackBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
	self->glTransformFeedbackBufferRange(xfb, index, buffer, offset, size);
}

void QOpenGLFunctions_4_5_Core_GlTransformFeedbackBufferBase(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t index, uint32_t buffer) {
	self->glTransformFeedbackBufferBase(xfb, index, buffer);
}

void QOpenGLFunctions_4_5_Core_GlCreateTransformFeedbacks(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* ids) {
	self->glCreateTransformFeedbacks(n, ids);
}

void QOpenGLFunctions_4_5_Core_GlClipControl(QOpenGLFunctions_4_5_Core* self, uint32_t origin, uint32_t depth) {
	self->glClipControl(origin, depth);
}

// Base class handler implementation
bool QOpenGLFunctions_4_5_Core_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_4_5_Core* self) {
	auto* vqopenglfunctions_4_5_core = dynamic_cast<VirtualQOpenGLFunctions_4_5_Core*>(self);
	if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions_IsBase(true);
	return vqopenglfunctions_4_5_core->initializeOpenGLFunctions();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_4_5_Core_OnInitializeOpenGLFunctions(QOpenGLFunctions_4_5_Core* self, intptr_t slot) {
	auto* vqopenglfunctions_4_5_core = dynamic_cast<VirtualQOpenGLFunctions_4_5_Core*>(self);
	if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_4_5_Core::QOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions_Callback>(slot));
}
}

void QOpenGLFunctions_4_5_Core_Delete(QOpenGLFunctions_4_5_Core* self) {
    delete self;
}

