#include <QOpenGLFunctions_3_3_Compatibility>
#include <qopenglfunctions_3_3_compatibility.h>
#include "libqopenglfunctions_3_3_compatibility.h"
#include "libqopenglfunctions_3_3_compatibility.hxx"

QOpenGLFunctions_3_3_Compatibility* QOpenGLFunctions_3_3_Compatibility_new() {
	 return new VirtualQOpenGLFunctions_3_3_Compatibility();
}

bool QOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions(QOpenGLFunctions_3_3_Compatibility* self) {
	return self->initializeOpenGLFunctions();
}

void QOpenGLFunctions_3_3_Compatibility_GlViewport(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glViewport(x, y, width, height);
}

void QOpenGLFunctions_3_3_Compatibility_GlDepthRange(QOpenGLFunctions_3_3_Compatibility* self, double nearVal, double farVal) {
	self->glDepthRange(nearVal, farVal);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsEnabled(QOpenGLFunctions_3_3_Compatibility* self, uint32_t cap) {
	return self->glIsEnabled(cap);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexLevelParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
	self->glGetTexLevelParameteriv(target, level, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexLevelParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
	self->glGetTexLevelParameterfv(target, level, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexImage(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glGetTexImage(target, level, format, typeVal, pixels);
}

const uint8_t* QOpenGLFunctions_3_3_Compatibility_GlGetString(QOpenGLFunctions_3_3_Compatibility* self, uint32_t name) {
	return self->glGetString(name);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetIntegerv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, int32_t* params) {
	self->glGetIntegerv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetFloatv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, float* params) {
	self->glGetFloatv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetDoublev(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, double* params) {
	self->glGetDoublev(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetBooleanv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, unsigned char* params) {
	self->glGetBooleanv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlReadPixels(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glReadPixels(x, y, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_3_3_Compatibility_GlReadBuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glReadBuffer(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlPixelStorei(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, int32_t param) {
	self->glPixelStorei(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlPixelStoref(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, float param) {
	self->glPixelStoref(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlDepthFunc(QOpenGLFunctions_3_3_Compatibility* self, uint32_t func) {
	self->glDepthFunc(func);
}

void QOpenGLFunctions_3_3_Compatibility_GlStencilOp(QOpenGLFunctions_3_3_Compatibility* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
	self->glStencilOp(fail, zfail, zpass);
}

void QOpenGLFunctions_3_3_Compatibility_GlStencilFunc(QOpenGLFunctions_3_3_Compatibility* self, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFunc(func, ref, mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlLogicOp(QOpenGLFunctions_3_3_Compatibility* self, uint32_t opcode) {
	self->glLogicOp(opcode);
}

void QOpenGLFunctions_3_3_Compatibility_GlBlendFunc(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sfactor, uint32_t dfactor) {
	self->glBlendFunc(sfactor, dfactor);
}

void QOpenGLFunctions_3_3_Compatibility_GlFlush(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glFlush();
}

void QOpenGLFunctions_3_3_Compatibility_GlFinish(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glFinish();
}

void QOpenGLFunctions_3_3_Compatibility_GlEnable(QOpenGLFunctions_3_3_Compatibility* self, uint32_t cap) {
	self->glEnable(cap);
}

void QOpenGLFunctions_3_3_Compatibility_GlDisable(QOpenGLFunctions_3_3_Compatibility* self, uint32_t cap) {
	self->glDisable(cap);
}

void QOpenGLFunctions_3_3_Compatibility_GlDepthMask(QOpenGLFunctions_3_3_Compatibility* self, unsigned char flag) {
	self->glDepthMask(flag);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorMask(QOpenGLFunctions_3_3_Compatibility* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	self->glColorMask(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlStencilMask(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mask) {
	self->glStencilMask(mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearDepth(QOpenGLFunctions_3_3_Compatibility* self, double depth) {
	self->glClearDepth(depth);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearStencil(QOpenGLFunctions_3_3_Compatibility* self, int32_t s) {
	self->glClearStencil(s);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearColor(QOpenGLFunctions_3_3_Compatibility* self, float red, float green, float blue, float alpha) {
	self->glClearColor(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlClear(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mask) {
	self->glClear(mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawBuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glDrawBuffer(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexImage2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage2D(target, level, internalformat, width, height, border, format, typeVal, pixels);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexImage1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage1D(target, level, internalformat, width, border, format, typeVal, pixels);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexParameteri(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexParameteri(target, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexParameterf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float param) {
	self->glTexParameterf(target, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlScissor(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glScissor(x, y, width, height);
}

void QOpenGLFunctions_3_3_Compatibility_GlPolygonMode(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t mode) {
	self->glPolygonMode(face, mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlPointSize(QOpenGLFunctions_3_3_Compatibility* self, float size) {
	self->glPointSize(size);
}

void QOpenGLFunctions_3_3_Compatibility_GlLineWidth(QOpenGLFunctions_3_3_Compatibility* self, float width) {
	self->glLineWidth(width);
}

void QOpenGLFunctions_3_3_Compatibility_GlHint(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t mode) {
	self->glHint(target, mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlFrontFace(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glFrontFace(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlCullFace(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glCullFace(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexubv(QOpenGLFunctions_3_3_Compatibility* self, const uint8_t* c) {
	self->glIndexubv(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexub(QOpenGLFunctions_3_3_Compatibility* self, uint8_t c) {
	self->glIndexub(c);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsTexture(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture) {
	return self->glIsTexture(texture);
}

void QOpenGLFunctions_3_3_Compatibility_GlGenTextures(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, uint32_t* textures) {
	self->glGenTextures(n, textures);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteTextures(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, const uint32_t* textures) {
	self->glDeleteTextures(n, textures);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindTexture(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t texture) {
	self->glBindTexture(target, texture);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexSubImage2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexSubImage1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage1D(target, level, xoffset, width, format, typeVal, pixels);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyTexSubImage2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyTexSubImage1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
	self->glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyTexImage2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
	self->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyTexImage1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
	self->glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void QOpenGLFunctions_3_3_Compatibility_GlPolygonOffset(QOpenGLFunctions_3_3_Compatibility* self, float factor, float units) {
	self->glPolygonOffset(factor, units);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetPointerv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, void** params) {
	self->glGetPointerv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawElements(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawElements(mode, count, typeVal, indices);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawArrays(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, int32_t first, int32_t count) {
	self->glDrawArrays(mode, first, count);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyTexSubImage3D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexSubImage3D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, pixels);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexImage3D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage3D(target, level, internalformat, width, height, depth, border, format, typeVal, pixels);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawRangeElements(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawRangeElements(mode, start, end, count, typeVal, indices);
}

void QOpenGLFunctions_3_3_Compatibility_GlBlendEquation(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glBlendEquation(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlBlendColor(QOpenGLFunctions_3_3_Compatibility* self, float red, float green, float blue, float alpha) {
	self->glBlendColor(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetCompressedTexImage(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, void* img) {
	self->glGetCompressedTexImage(target, level, img);
}

void QOpenGLFunctions_3_3_Compatibility_GlCompressedTexSubImage1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlCompressedTexSubImage2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlCompressedTexSubImage3D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlCompressedTexImage1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlCompressedTexImage2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlCompressedTexImage3D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlSampleCoverage(QOpenGLFunctions_3_3_Compatibility* self, float value, unsigned char invert) {
	self->glSampleCoverage(value, invert);
}

void QOpenGLFunctions_3_3_Compatibility_GlActiveTexture(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture) {
	self->glActiveTexture(texture);
}

void QOpenGLFunctions_3_3_Compatibility_GlPointParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, const int32_t* params) {
	self->glPointParameteriv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlPointParameteri(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, int32_t param) {
	self->glPointParameteri(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlPointParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, const float* params) {
	self->glPointParameterfv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlPointParameterf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, float param) {
	self->glPointParameterf(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiDrawElements(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount) {
	self->glMultiDrawElements(mode, count, typeVal, indices, drawcount);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiDrawArrays(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
	self->glMultiDrawArrays(mode, first, count, drawcount);
}

void QOpenGLFunctions_3_3_Compatibility_GlBlendFuncSeparate(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
	self->glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetBufferPointerv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, void** params) {
	self->glGetBufferPointerv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetBufferParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetBufferParameteriv(target, pname, params);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlUnmapBuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target) {
	return self->glUnmapBuffer(target);
}

void* QOpenGLFunctions_3_3_Compatibility_GlMapBuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t access) {
	return self->glMapBuffer(target, access);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetBufferSubData(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int64_t offset, int64_t size, void* data) {
	self->glGetBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlBufferSubData(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int64_t offset, int64_t size, const void* data) {
	self->glBufferSubData(target, offset, size, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlBufferData(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int64_t size, const void* data, uint32_t usage) {
	self->glBufferData(target, size, data, usage);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsBuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t buffer) {
	return self->glIsBuffer(buffer);
}

void QOpenGLFunctions_3_3_Compatibility_GlGenBuffers(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, uint32_t* buffers) {
	self->glGenBuffers(n, buffers);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteBuffers(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, const uint32_t* buffers) {
	self->glDeleteBuffers(n, buffers);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindBuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t buffer) {
	self->glBindBuffer(target, buffer);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetQueryObjectuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t id, uint32_t pname, uint32_t* params) {
	self->glGetQueryObjectuiv(id, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetQueryObjectiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t id, uint32_t pname, int32_t* params) {
	self->glGetQueryObjectiv(id, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetQueryiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetQueryiv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlEndQuery(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target) {
	self->glEndQuery(target);
}

void QOpenGLFunctions_3_3_Compatibility_GlBeginQuery(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t id) {
	self->glBeginQuery(target, id);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsQuery(QOpenGLFunctions_3_3_Compatibility* self, uint32_t id) {
	return self->glIsQuery(id);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteQueries(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, const uint32_t* ids) {
	self->glDeleteQueries(n, ids);
}

void QOpenGLFunctions_3_3_Compatibility_GlGenQueries(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, uint32_t* ids) {
	self->glGenQueries(n, ids);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribPointer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* pointer) {
	self->glVertexAttribPointer(index, size, typeVal, normalized, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlValidateProgram(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program) {
	self->glValidateProgram(program);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix4fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4fv(location, count, transpose, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix3fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3fv(location, count, transpose, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix2fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2fv(location, count, transpose, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform4iv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform4iv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform3iv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform3iv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform2iv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform2iv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform1iv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const int32_t* value) {
	self->glUniform1iv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform4fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const float* value) {
	self->glUniform4fv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform3fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const float* value) {
	self->glUniform3fv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform2fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const float* value) {
	self->glUniform2fv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform1fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const float* value) {
	self->glUniform1fv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform4i(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
	self->glUniform4i(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform3i(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
	self->glUniform3i(location, v0, v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform2i(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t v0, int32_t v1) {
	self->glUniform2i(location, v0, v1);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform1i(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t v0) {
	self->glUniform1i(location, v0);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform4f(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, float v0, float v1, float v2, float v3) {
	self->glUniform4f(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform3f(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, float v0, float v1, float v2) {
	self->glUniform3f(location, v0, v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform2f(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, float v0, float v1) {
	self->glUniform2f(location, v0, v1);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform1f(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, float v0) {
	self->glUniform1f(location, v0);
}

void QOpenGLFunctions_3_3_Compatibility_GlUseProgram(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program) {
	self->glUseProgram(program);
}

void QOpenGLFunctions_3_3_Compatibility_GlShaderSource(QOpenGLFunctions_3_3_Compatibility* self, uint32_t shader, int32_t count, const GLchar** stringVal, const int32_t* length) {
	self->glShaderSource(shader, count, stringVal, length);
}

void QOpenGLFunctions_3_3_Compatibility_GlLinkProgram(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program) {
	self->glLinkProgram(program);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsShader(QOpenGLFunctions_3_3_Compatibility* self, uint32_t shader) {
	return self->glIsShader(shader);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsProgram(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program) {
	return self->glIsProgram(program);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribPointerv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t pname, void** pointer) {
	self->glGetVertexAttribPointerv(index, pname, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribiv(index, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t pname, float* params) {
	self->glGetVertexAttribfv(index, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribdv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t pname, double* params) {
	self->glGetVertexAttribdv(index, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetUniformiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, int32_t location, int32_t* params) {
	self->glGetUniformiv(program, location, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetUniformfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, int32_t location, float* params) {
	self->glGetUniformfv(program, location, params);
}

int32_t QOpenGLFunctions_3_3_Compatibility_GlGetUniformLocation(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, const GLchar* name) {
	return self->glGetUniformLocation(program, name);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetShaderSource(QOpenGLFunctions_3_3_Compatibility* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* source) {
	self->glGetShaderSource(shader, bufSize, length, source);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetShaderInfoLog(QOpenGLFunctions_3_3_Compatibility* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetShaderiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t shader, uint32_t pname, int32_t* params) {
	self->glGetShaderiv(shader, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetProgramInfoLog(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetProgramiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t pname, int32_t* params) {
	self->glGetProgramiv(program, pname, params);
}

int32_t QOpenGLFunctions_3_3_Compatibility_GlGetAttribLocation(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, const GLchar* name) {
	return self->glGetAttribLocation(program, name);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetAttachedShaders(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
	self->glGetAttachedShaders(program, maxCount, count, obj);
}

void QOpenGLFunctions_3_3_Compatibility_GlEnableVertexAttribArray(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index) {
	self->glEnableVertexAttribArray(index);
}

void QOpenGLFunctions_3_3_Compatibility_GlDisableVertexAttribArray(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index) {
	self->glDisableVertexAttribArray(index);
}

void QOpenGLFunctions_3_3_Compatibility_GlDetachShader(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t shader) {
	self->glDetachShader(program, shader);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteShader(QOpenGLFunctions_3_3_Compatibility* self, uint32_t shader) {
	self->glDeleteShader(shader);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteProgram(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program) {
	self->glDeleteProgram(program);
}

uint32_t QOpenGLFunctions_3_3_Compatibility_GlCreateShader(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal) {
	return self->glCreateShader(typeVal);
}

uint32_t QOpenGLFunctions_3_3_Compatibility_GlCreateProgram(QOpenGLFunctions_3_3_Compatibility* self) {
	return self->glCreateProgram();
}

void QOpenGLFunctions_3_3_Compatibility_GlCompileShader(QOpenGLFunctions_3_3_Compatibility* self, uint32_t shader) {
	self->glCompileShader(shader);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindAttribLocation(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t index, const GLchar* name) {
	self->glBindAttribLocation(program, index, name);
}

void QOpenGLFunctions_3_3_Compatibility_GlAttachShader(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t shader) {
	self->glAttachShader(program, shader);
}

void QOpenGLFunctions_3_3_Compatibility_GlStencilMaskSeparate(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t mask) {
	self->glStencilMaskSeparate(face, mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlStencilFuncSeparate(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFuncSeparate(face, func, ref, mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlStencilOpSeparate(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
	self->glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void QOpenGLFunctions_3_3_Compatibility_GlBlendEquationSeparate(QOpenGLFunctions_3_3_Compatibility* self, uint32_t modeRGB, uint32_t modeAlpha) {
	self->glBlendEquationSeparate(modeRGB, modeAlpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix4x3fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4x3fv(location, count, transpose, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix3x4fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3x4fv(location, count, transpose, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix4x2fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4x2fv(location, count, transpose, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix2x4fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2x4fv(location, count, transpose, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix3x2fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3x2fv(location, count, transpose, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix2x3fv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2x3fv(location, count, transpose, value);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsVertexArray(QOpenGLFunctions_3_3_Compatibility* self, uint32_t array) {
	return self->glIsVertexArray(array);
}

void QOpenGLFunctions_3_3_Compatibility_GlGenVertexArrays(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, uint32_t* arrays) {
	self->glGenVertexArrays(n, arrays);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteVertexArrays(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, const uint32_t* arrays) {
	self->glDeleteVertexArrays(n, arrays);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindVertexArray(QOpenGLFunctions_3_3_Compatibility* self, uint32_t array) {
	self->glBindVertexArray(array);
}

void QOpenGLFunctions_3_3_Compatibility_GlFlushMappedBufferRange(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int64_t offset, int64_t length) {
	self->glFlushMappedBufferRange(target, offset, length);
}

void* QOpenGLFunctions_3_3_Compatibility_GlMapBufferRange(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int64_t offset, int64_t length, uint32_t access) {
	return self->glMapBufferRange(target, offset, length, access);
}

void QOpenGLFunctions_3_3_Compatibility_GlFramebufferTextureLayer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
	self->glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void QOpenGLFunctions_3_3_Compatibility_GlRenderbufferStorageMultisample(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
	self->glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void QOpenGLFunctions_3_3_Compatibility_GlBlitFramebuffer(QOpenGLFunctions_3_3_Compatibility* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
	self->glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void QOpenGLFunctions_3_3_Compatibility_GlGenerateMipmap(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target) {
	self->glGenerateMipmap(target);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
	self->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlFramebufferRenderbuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
	self->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void QOpenGLFunctions_3_3_Compatibility_GlFramebufferTexture3D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
	self->glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void QOpenGLFunctions_3_3_Compatibility_GlFramebufferTexture2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
	self->glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void QOpenGLFunctions_3_3_Compatibility_GlFramebufferTexture1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
	self->glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

void QOpenGLFunctions_3_3_Compatibility_GlGenFramebuffers(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, uint32_t* framebuffers) {
	self->glGenFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteFramebuffers(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, const uint32_t* framebuffers) {
	self->glDeleteFramebuffers(n, framebuffers);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindFramebuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t framebuffer) {
	self->glBindFramebuffer(target, framebuffer);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsFramebuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t framebuffer) {
	return self->glIsFramebuffer(framebuffer);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetRenderbufferParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetRenderbufferParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlRenderbufferStorage(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
	self->glRenderbufferStorage(target, internalformat, width, height);
}

void QOpenGLFunctions_3_3_Compatibility_GlGenRenderbuffers(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, uint32_t* renderbuffers) {
	self->glGenRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteRenderbuffers(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, const uint32_t* renderbuffers) {
	self->glDeleteRenderbuffers(n, renderbuffers);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindRenderbuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t renderbuffer) {
	self->glBindRenderbuffer(target, renderbuffer);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsRenderbuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t renderbuffer) {
	return self->glIsRenderbuffer(renderbuffer);
}

const uint8_t* QOpenGLFunctions_3_3_Compatibility_GlGetStringi(QOpenGLFunctions_3_3_Compatibility* self, uint32_t name, uint32_t index) {
	return self->glGetStringi(name, index);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearBufferfi(QOpenGLFunctions_3_3_Compatibility* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
	self->glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearBufferfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t buffer, int32_t drawbuffer, const float* value) {
	self->glClearBufferfv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearBufferuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
	self->glClearBufferuiv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearBufferiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
	self->glClearBufferiv(buffer, drawbuffer, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexParameterIuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, uint32_t* params) {
	self->glGetTexParameterIuiv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexParameterIiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameterIiv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexParameterIuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const uint32_t* params) {
	self->glTexParameterIuiv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexParameterIiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameterIiv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform4uiv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform4uiv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform3uiv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform3uiv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform2uiv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform2uiv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform1uiv(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform1uiv(location, count, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform4ui(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
	self->glUniform4ui(location, v0, v1, v2, v3);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform3ui(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
	self->glUniform3ui(location, v0, v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform2ui(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, uint32_t v0, uint32_t v1) {
	self->glUniform2ui(location, v0, v1);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniform1ui(QOpenGLFunctions_3_3_Compatibility* self, int32_t location, uint32_t v0) {
	self->glUniform1ui(location, v0);
}

int32_t QOpenGLFunctions_3_3_Compatibility_GlGetFragDataLocation(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, const GLchar* name) {
	return self->glGetFragDataLocation(program, name);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindFragDataLocation(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t color, const GLchar* name) {
	self->glBindFragDataLocation(program, color, name);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetUniformuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, int32_t location, uint32_t* params) {
	self->glGetUniformuiv(program, location, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribIuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t pname, uint32_t* params) {
	self->glGetVertexAttribIuiv(index, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribIiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribIiv(index, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribIPointer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexAttribIPointer(index, size, typeVal, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlEndConditionalRender(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glEndConditionalRender();
}

void QOpenGLFunctions_3_3_Compatibility_GlBeginConditionalRender(QOpenGLFunctions_3_3_Compatibility* self, uint32_t id, uint32_t mode) {
	self->glBeginConditionalRender(id, mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlClampColor(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t clamp) {
	self->glClampColor(target, clamp);
}

void QOpenGLFunctions_3_3_Compatibility_GlTransformFeedbackVaryings(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, int32_t count, const GLchar** varyings, uint32_t bufferMode) {
	self->glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindBufferBase(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t index, uint32_t buffer) {
	self->glBindBufferBase(target, index, buffer);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindBufferRange(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
	self->glBindBufferRange(target, index, buffer, offset, size);
}

void QOpenGLFunctions_3_3_Compatibility_GlEndTransformFeedback(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glEndTransformFeedback();
}

void QOpenGLFunctions_3_3_Compatibility_GlBeginTransformFeedback(QOpenGLFunctions_3_3_Compatibility* self, uint32_t primitiveMode) {
	self->glBeginTransformFeedback(primitiveMode);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsEnabledi(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t index) {
	return self->glIsEnabledi(target, index);
}

void QOpenGLFunctions_3_3_Compatibility_GlDisablei(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t index) {
	self->glDisablei(target, index);
}

void QOpenGLFunctions_3_3_Compatibility_GlEnablei(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t index) {
	self->glEnablei(target, index);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetIntegeriV(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t index, int32_t* data) {
	self->glGetIntegeri_v(target, index, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetBooleaniV(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t index, unsigned char* data) {
	self->glGetBooleani_v(target, index, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorMaski(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	self->glColorMaski(index, r, g, b, a);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyBufferSubData(QOpenGLFunctions_3_3_Compatibility* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size) {
	self->glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void QOpenGLFunctions_3_3_Compatibility_GlUniformBlockBinding(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
	self->glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetActiveUniformBlockName(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName) {
	self->glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetActiveUniformBlockiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
	self->glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

uint32_t QOpenGLFunctions_3_3_Compatibility_GlGetUniformBlockIndex(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, const GLchar* uniformBlockName) {
	return self->glGetUniformBlockIndex(program, uniformBlockName);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetActiveUniformName(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, GLchar* uniformName) {
	self->glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetActiveUniformsiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
	self->glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetUniformIndices(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, int32_t uniformCount, const GLchar** uniformNames, uint32_t* uniformIndices) {
	self->glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

void QOpenGLFunctions_3_3_Compatibility_GlPrimitiveRestartIndex(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index) {
	self->glPrimitiveRestartIndex(index);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexBuffer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
	self->glTexBuffer(target, internalformat, buffer);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawElementsInstanced(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount) {
	self->glDrawElementsInstanced(mode, count, typeVal, indices, instancecount);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawArraysInstanced(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
	self->glDrawArraysInstanced(mode, first, count, instancecount);
}

void QOpenGLFunctions_3_3_Compatibility_GlSampleMaski(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t mask) {
	self->glSampleMaski(index, mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMultisamplefv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, uint32_t index, float* val) {
	self->glGetMultisamplefv(pname, index, val);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexImage3DMultisample(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
	self->glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexImage2DMultisample(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
	self->glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetInteger64v(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, int64_t* params) {
	self->glGetInteger64v(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlProvokingVertex(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glProvokingVertex(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiDrawElementsBaseVertex(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount, const int32_t* basevertex) {
	self->glMultiDrawElementsBaseVertex(mode, count, typeVal, indices, drawcount, basevertex);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawElementsInstancedBaseVertex(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex) {
	self->glDrawElementsInstancedBaseVertex(mode, count, typeVal, indices, instancecount, basevertex);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawRangeElementsBaseVertex(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
	self->glDrawRangeElementsBaseVertex(mode, start, end, count, typeVal, indices, basevertex);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawElementsBaseVertex(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
	self->glDrawElementsBaseVertex(mode, count, typeVal, indices, basevertex);
}

void QOpenGLFunctions_3_3_Compatibility_GlFramebufferTexture(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
	self->glFramebufferTexture(target, attachment, texture, level);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetBufferParameteri64v(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int64_t* params) {
	self->glGetBufferParameteri64v(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetInteger64iV(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t index, int64_t* data) {
	self->glGetInteger64i_v(target, index, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP4uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP4uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP4ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP4ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP3uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP3uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP3ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP2uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP2uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP2ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP2ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP1uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
	self->glVertexAttribP1uiv(index, typeVal, normalized, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP1ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
	self->glVertexAttribP1ui(index, typeVal, normalized, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColorP3uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* color) {
	self->glSecondaryColorP3uiv(typeVal, color);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColorP3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t color) {
	self->glSecondaryColorP3ui(typeVal, color);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorP4uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* color) {
	self->glColorP4uiv(typeVal, color);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorP4ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t color) {
	self->glColorP4ui(typeVal, color);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorP3uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* color) {
	self->glColorP3uiv(typeVal, color);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorP3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t color) {
	self->glColorP3ui(typeVal, color);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormalP3uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* coords) {
	self->glNormalP3uiv(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormalP3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t coords) {
	self->glNormalP3ui(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP4uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture, uint32_t typeVal, const uint32_t* coords) {
	self->glMultiTexCoordP4uiv(texture, typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP4ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture, uint32_t typeVal, uint32_t coords) {
	self->glMultiTexCoordP4ui(texture, typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP3uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture, uint32_t typeVal, const uint32_t* coords) {
	self->glMultiTexCoordP3uiv(texture, typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture, uint32_t typeVal, uint32_t coords) {
	self->glMultiTexCoordP3ui(texture, typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP2uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture, uint32_t typeVal, const uint32_t* coords) {
	self->glMultiTexCoordP2uiv(texture, typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP2ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture, uint32_t typeVal, uint32_t coords) {
	self->glMultiTexCoordP2ui(texture, typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP1uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture, uint32_t typeVal, const uint32_t* coords) {
	self->glMultiTexCoordP1uiv(texture, typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP1ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture, uint32_t typeVal, uint32_t coords) {
	self->glMultiTexCoordP1ui(texture, typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordP4uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* coords) {
	self->glTexCoordP4uiv(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordP4ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t coords) {
	self->glTexCoordP4ui(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordP3uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* coords) {
	self->glTexCoordP3uiv(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordP3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t coords) {
	self->glTexCoordP3ui(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordP2uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* coords) {
	self->glTexCoordP2uiv(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordP2ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t coords) {
	self->glTexCoordP2ui(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordP1uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* coords) {
	self->glTexCoordP1uiv(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordP1ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t coords) {
	self->glTexCoordP1ui(typeVal, coords);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexP4uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* value) {
	self->glVertexP4uiv(typeVal, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexP4ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t value) {
	self->glVertexP4ui(typeVal, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexP3uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* value) {
	self->glVertexP3uiv(typeVal, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexP3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t value) {
	self->glVertexP3ui(typeVal, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexP2uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, const uint32_t* value) {
	self->glVertexP2uiv(typeVal, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexP2ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, uint32_t value) {
	self->glVertexP2ui(typeVal, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetQueryObjectui64v(QOpenGLFunctions_3_3_Compatibility* self, uint32_t id, uint32_t pname, uint64_t* params) {
	self->glGetQueryObjectui64v(id, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetQueryObjecti64v(QOpenGLFunctions_3_3_Compatibility* self, uint32_t id, uint32_t pname, int64_t* params) {
	self->glGetQueryObjecti64v(id, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlQueryCounter(QOpenGLFunctions_3_3_Compatibility* self, uint32_t id, uint32_t target) {
	self->glQueryCounter(id, target);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetSamplerParameterIuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
	self->glGetSamplerParameterIuiv(sampler, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetSamplerParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, float* params) {
	self->glGetSamplerParameterfv(sampler, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetSamplerParameterIiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, int32_t* params) {
	self->glGetSamplerParameterIiv(sampler, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetSamplerParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, int32_t* params) {
	self->glGetSamplerParameteriv(sampler, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlSamplerParameterIuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, const uint32_t* param) {
	self->glSamplerParameterIuiv(sampler, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlSamplerParameterIiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
	self->glSamplerParameterIiv(sampler, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlSamplerParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, const float* param) {
	self->glSamplerParameterfv(sampler, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlSamplerParameterf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, float param) {
	self->glSamplerParameterf(sampler, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlSamplerParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
	self->glSamplerParameteriv(sampler, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlSamplerParameteri(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler, uint32_t pname, int32_t param) {
	self->glSamplerParameteri(sampler, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindSampler(QOpenGLFunctions_3_3_Compatibility* self, uint32_t unit, uint32_t sampler) {
	self->glBindSampler(unit, sampler);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsSampler(QOpenGLFunctions_3_3_Compatibility* self, uint32_t sampler) {
	return self->glIsSampler(sampler);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteSamplers(QOpenGLFunctions_3_3_Compatibility* self, int32_t count, const uint32_t* samplers) {
	self->glDeleteSamplers(count, samplers);
}

void QOpenGLFunctions_3_3_Compatibility_GlGenSamplers(QOpenGLFunctions_3_3_Compatibility* self, int32_t count, uint32_t* samplers) {
	self->glGenSamplers(count, samplers);
}

int32_t QOpenGLFunctions_3_3_Compatibility_GlGetFragDataIndex(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, const GLchar* name) {
	return self->glGetFragDataIndex(program, name);
}

void QOpenGLFunctions_3_3_Compatibility_GlBindFragDataLocationIndexed(QOpenGLFunctions_3_3_Compatibility* self, uint32_t program, uint32_t colorNumber, uint32_t index, const GLchar* name) {
	self->glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribDivisor(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t divisor) {
	self->glVertexAttribDivisor(index, divisor);
}

void QOpenGLFunctions_3_3_Compatibility_GlTranslatef(QOpenGLFunctions_3_3_Compatibility* self, float x, float y, float z) {
	self->glTranslatef(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlTranslated(QOpenGLFunctions_3_3_Compatibility* self, double x, double y, double z) {
	self->glTranslated(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlScalef(QOpenGLFunctions_3_3_Compatibility* self, float x, float y, float z) {
	self->glScalef(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlScaled(QOpenGLFunctions_3_3_Compatibility* self, double x, double y, double z) {
	self->glScaled(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlRotatef(QOpenGLFunctions_3_3_Compatibility* self, float angle, float x, float y, float z) {
	self->glRotatef(angle, x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlRotated(QOpenGLFunctions_3_3_Compatibility* self, double angle, double x, double y, double z) {
	self->glRotated(angle, x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlPushMatrix(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glPushMatrix();
}

void QOpenGLFunctions_3_3_Compatibility_GlPopMatrix(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glPopMatrix();
}

void QOpenGLFunctions_3_3_Compatibility_GlOrtho(QOpenGLFunctions_3_3_Compatibility* self, double left, double right, double bottom, double top, double zNear, double zFar) {
	self->glOrtho(left, right, bottom, top, zNear, zFar);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultMatrixd(QOpenGLFunctions_3_3_Compatibility* self, const double* m) {
	self->glMultMatrixd(m);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultMatrixf(QOpenGLFunctions_3_3_Compatibility* self, const float* m) {
	self->glMultMatrixf(m);
}

void QOpenGLFunctions_3_3_Compatibility_GlMatrixMode(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glMatrixMode(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlLoadMatrixd(QOpenGLFunctions_3_3_Compatibility* self, const double* m) {
	self->glLoadMatrixd(m);
}

void QOpenGLFunctions_3_3_Compatibility_GlLoadMatrixf(QOpenGLFunctions_3_3_Compatibility* self, const float* m) {
	self->glLoadMatrixf(m);
}

void QOpenGLFunctions_3_3_Compatibility_GlLoadIdentity(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glLoadIdentity();
}

void QOpenGLFunctions_3_3_Compatibility_GlFrustum(QOpenGLFunctions_3_3_Compatibility* self, double left, double right, double bottom, double top, double zNear, double zFar) {
	self->glFrustum(left, right, bottom, top, zNear, zFar);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlIsList(QOpenGLFunctions_3_3_Compatibility* self, uint32_t list) {
	return self->glIsList(list);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexGeniv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, int32_t* params) {
	self->glGetTexGeniv(coord, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexGenfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, float* params) {
	self->glGetTexGenfv(coord, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexGendv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, double* params) {
	self->glGetTexGendv(coord, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexEnviv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexEnviv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetTexEnvfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexEnvfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetPolygonStipple(QOpenGLFunctions_3_3_Compatibility* self, uint8_t* mask) {
	self->glGetPolygonStipple(mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetPixelMapusv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mapVal, uint16_t* values) {
	self->glGetPixelMapusv(mapVal, values);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetPixelMapuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mapVal, uint32_t* values) {
	self->glGetPixelMapuiv(mapVal, values);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetPixelMapfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mapVal, float* values) {
	self->glGetPixelMapfv(mapVal, values);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMaterialiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t pname, int32_t* params) {
	self->glGetMaterialiv(face, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMaterialfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t pname, float* params) {
	self->glGetMaterialfv(face, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMapiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t query, int32_t* v) {
	self->glGetMapiv(target, query, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMapfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t query, float* v) {
	self->glGetMapfv(target, query, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMapdv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t query, double* v) {
	self->glGetMapdv(target, query, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetLightiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t light, uint32_t pname, int32_t* params) {
	self->glGetLightiv(light, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetLightfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t light, uint32_t pname, float* params) {
	self->glGetLightfv(light, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetClipPlane(QOpenGLFunctions_3_3_Compatibility* self, uint32_t plane, double* equation) {
	self->glGetClipPlane(plane, equation);
}

void QOpenGLFunctions_3_3_Compatibility_GlDrawPixels(QOpenGLFunctions_3_3_Compatibility* self, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glDrawPixels(width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyPixels(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t typeVal) {
	self->glCopyPixels(x, y, width, height, typeVal);
}

void QOpenGLFunctions_3_3_Compatibility_GlPixelMapusv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mapVal, int32_t mapsize, const uint16_t* values) {
	self->glPixelMapusv(mapVal, mapsize, values);
}

void QOpenGLFunctions_3_3_Compatibility_GlPixelMapuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mapVal, int32_t mapsize, const uint32_t* values) {
	self->glPixelMapuiv(mapVal, mapsize, values);
}

void QOpenGLFunctions_3_3_Compatibility_GlPixelMapfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mapVal, int32_t mapsize, const float* values) {
	self->glPixelMapfv(mapVal, mapsize, values);
}

void QOpenGLFunctions_3_3_Compatibility_GlPixelTransferi(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, int32_t param) {
	self->glPixelTransferi(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlPixelTransferf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, float param) {
	self->glPixelTransferf(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlPixelZoom(QOpenGLFunctions_3_3_Compatibility* self, float xfactor, float yfactor) {
	self->glPixelZoom(xfactor, yfactor);
}

void QOpenGLFunctions_3_3_Compatibility_GlAlphaFunc(QOpenGLFunctions_3_3_Compatibility* self, uint32_t func, float ref) {
	self->glAlphaFunc(func, ref);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalPoint2(QOpenGLFunctions_3_3_Compatibility* self, int32_t i, int32_t j) {
	self->glEvalPoint2(i, j);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalMesh2(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, int32_t i1Val, int32_t i2Val, int32_t j1, int32_t j2) {
	self->glEvalMesh2(mode, i1Val, i2Val, j1, j2);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalPoint1(QOpenGLFunctions_3_3_Compatibility* self, int32_t i) {
	self->glEvalPoint1(i);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalMesh1(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode, int32_t i1Val, int32_t i2Val) {
	self->glEvalMesh1(mode, i1Val, i2Val);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalCoord2fv(QOpenGLFunctions_3_3_Compatibility* self, const float* u) {
	self->glEvalCoord2fv(u);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalCoord2f(QOpenGLFunctions_3_3_Compatibility* self, float u, float v) {
	self->glEvalCoord2f(u, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalCoord2dv(QOpenGLFunctions_3_3_Compatibility* self, const double* u) {
	self->glEvalCoord2dv(u);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalCoord2d(QOpenGLFunctions_3_3_Compatibility* self, double u, double v) {
	self->glEvalCoord2d(u, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalCoord1fv(QOpenGLFunctions_3_3_Compatibility* self, const float* u) {
	self->glEvalCoord1fv(u);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalCoord1f(QOpenGLFunctions_3_3_Compatibility* self, float u) {
	self->glEvalCoord1f(u);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalCoord1dv(QOpenGLFunctions_3_3_Compatibility* self, const double* u) {
	self->glEvalCoord1dv(u);
}

void QOpenGLFunctions_3_3_Compatibility_GlEvalCoord1d(QOpenGLFunctions_3_3_Compatibility* self, double u) {
	self->glEvalCoord1d(u);
}

void QOpenGLFunctions_3_3_Compatibility_GlMapGrid2f(QOpenGLFunctions_3_3_Compatibility* self, int32_t un, float u1Val, float u2Val, int32_t vn, float v1, float v2) {
	self->glMapGrid2f(un, u1Val, u2Val, vn, v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlMapGrid2d(QOpenGLFunctions_3_3_Compatibility* self, int32_t un, double u1Val, double u2Val, int32_t vn, double v1, double v2) {
	self->glMapGrid2d(un, u1Val, u2Val, vn, v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlMapGrid1f(QOpenGLFunctions_3_3_Compatibility* self, int32_t un, float u1Val, float u2Val) {
	self->glMapGrid1f(un, u1Val, u2Val);
}

void QOpenGLFunctions_3_3_Compatibility_GlMapGrid1d(QOpenGLFunctions_3_3_Compatibility* self, int32_t un, double u1Val, double u2Val) {
	self->glMapGrid1d(un, u1Val, u2Val);
}

void QOpenGLFunctions_3_3_Compatibility_GlMap2f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, float u1Val, float u2Val, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, const float* points) {
	self->glMap2f(target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, points);
}

void QOpenGLFunctions_3_3_Compatibility_GlMap2d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, double u1Val, double u2Val, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, const double* points) {
	self->glMap2d(target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, points);
}

void QOpenGLFunctions_3_3_Compatibility_GlMap1f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, float u1Val, float u2Val, int32_t stride, int32_t order, const float* points) {
	self->glMap1f(target, u1Val, u2Val, stride, order, points);
}

void QOpenGLFunctions_3_3_Compatibility_GlMap1d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, double u1Val, double u2Val, int32_t stride, int32_t order, const double* points) {
	self->glMap1d(target, u1Val, u2Val, stride, order, points);
}

void QOpenGLFunctions_3_3_Compatibility_GlPushAttrib(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mask) {
	self->glPushAttrib(mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlPopAttrib(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glPopAttrib();
}

void QOpenGLFunctions_3_3_Compatibility_GlAccum(QOpenGLFunctions_3_3_Compatibility* self, uint32_t op, float value) {
	self->glAccum(op, value);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexMask(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mask) {
	self->glIndexMask(mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearIndex(QOpenGLFunctions_3_3_Compatibility* self, float c) {
	self->glClearIndex(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlClearAccum(QOpenGLFunctions_3_3_Compatibility* self, float red, float green, float blue, float alpha) {
	self->glClearAccum(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlPushName(QOpenGLFunctions_3_3_Compatibility* self, uint32_t name) {
	self->glPushName(name);
}

void QOpenGLFunctions_3_3_Compatibility_GlPopName(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glPopName();
}

void QOpenGLFunctions_3_3_Compatibility_GlPassThrough(QOpenGLFunctions_3_3_Compatibility* self, float token) {
	self->glPassThrough(token);
}

void QOpenGLFunctions_3_3_Compatibility_GlLoadName(QOpenGLFunctions_3_3_Compatibility* self, uint32_t name) {
	self->glLoadName(name);
}

void QOpenGLFunctions_3_3_Compatibility_GlInitNames(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glInitNames();
}

int32_t QOpenGLFunctions_3_3_Compatibility_GlRenderMode(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	return self->glRenderMode(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlSelectBuffer(QOpenGLFunctions_3_3_Compatibility* self, int32_t size, uint32_t* buffer) {
	self->glSelectBuffer(size, buffer);
}

void QOpenGLFunctions_3_3_Compatibility_GlFeedbackBuffer(QOpenGLFunctions_3_3_Compatibility* self, int32_t size, uint32_t typeVal, float* buffer) {
	self->glFeedbackBuffer(size, typeVal, buffer);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexGeniv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, const int32_t* params) {
	self->glTexGeniv(coord, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexGeni(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, int32_t param) {
	self->glTexGeni(coord, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexGenfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, const float* params) {
	self->glTexGenfv(coord, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexGenf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, float param) {
	self->glTexGenf(coord, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexGendv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, const double* params) {
	self->glTexGendv(coord, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexGend(QOpenGLFunctions_3_3_Compatibility* self, uint32_t coord, uint32_t pname, double param) {
	self->glTexGend(coord, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexEnviv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexEnviv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexEnvi(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexEnvi(target, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexEnvfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexEnvfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexEnvf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float param) {
	self->glTexEnvf(target, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlShadeModel(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glShadeModel(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlPolygonStipple(QOpenGLFunctions_3_3_Compatibility* self, const uint8_t* mask) {
	self->glPolygonStipple(mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlMaterialiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t pname, const int32_t* params) {
	self->glMaterialiv(face, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlMateriali(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t pname, int32_t param) {
	self->glMateriali(face, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlMaterialfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t pname, const float* params) {
	self->glMaterialfv(face, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlMaterialf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t pname, float param) {
	self->glMaterialf(face, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlLineStipple(QOpenGLFunctions_3_3_Compatibility* self, int32_t factor, uint16_t pattern) {
	self->glLineStipple(factor, pattern);
}

void QOpenGLFunctions_3_3_Compatibility_GlLightModeliv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, const int32_t* params) {
	self->glLightModeliv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlLightModeli(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, int32_t param) {
	self->glLightModeli(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlLightModelfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, const float* params) {
	self->glLightModelfv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlLightModelf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, float param) {
	self->glLightModelf(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlLightiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t light, uint32_t pname, const int32_t* params) {
	self->glLightiv(light, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlLighti(QOpenGLFunctions_3_3_Compatibility* self, uint32_t light, uint32_t pname, int32_t param) {
	self->glLighti(light, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlLightfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t light, uint32_t pname, const float* params) {
	self->glLightfv(light, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlLightf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t light, uint32_t pname, float param) {
	self->glLightf(light, pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, const int32_t* params) {
	self->glFogiv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogi(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, int32_t param) {
	self->glFogi(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, const float* params) {
	self->glFogfv(pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t pname, float param) {
	self->glFogf(pname, param);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorMaterial(QOpenGLFunctions_3_3_Compatibility* self, uint32_t face, uint32_t mode) {
	self->glColorMaterial(face, mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlClipPlane(QOpenGLFunctions_3_3_Compatibility* self, uint32_t plane, const double* equation) {
	self->glClipPlane(plane, equation);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex4sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glVertex4sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex4s(QOpenGLFunctions_3_3_Compatibility* self, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glVertex4s(x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex4iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glVertex4iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex4i(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glVertex4i(x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex4fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glVertex4fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex4f(QOpenGLFunctions_3_3_Compatibility* self, float x, float y, float z, float w) {
	self->glVertex4f(x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex4dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glVertex4dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex4d(QOpenGLFunctions_3_3_Compatibility* self, double x, double y, double z, double w) {
	self->glVertex4d(x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex3sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glVertex3sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex3s(QOpenGLFunctions_3_3_Compatibility* self, int16_t x, int16_t y, int16_t z) {
	self->glVertex3s(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex3iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glVertex3iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex3i(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t z) {
	self->glVertex3i(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex3fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glVertex3fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex3f(QOpenGLFunctions_3_3_Compatibility* self, float x, float y, float z) {
	self->glVertex3f(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex3dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glVertex3dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex3d(QOpenGLFunctions_3_3_Compatibility* self, double x, double y, double z) {
	self->glVertex3d(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex2sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glVertex2sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex2s(QOpenGLFunctions_3_3_Compatibility* self, int16_t x, int16_t y) {
	self->glVertex2s(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex2iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glVertex2iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex2i(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y) {
	self->glVertex2i(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex2fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glVertex2fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex2f(QOpenGLFunctions_3_3_Compatibility* self, float x, float y) {
	self->glVertex2f(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex2dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glVertex2dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertex2d(QOpenGLFunctions_3_3_Compatibility* self, double x, double y) {
	self->glVertex2d(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord4sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glTexCoord4sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord4s(QOpenGLFunctions_3_3_Compatibility* self, int16_t s, int16_t t, int16_t r, int16_t q) {
	self->glTexCoord4s(s, t, r, q);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord4iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glTexCoord4iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord4i(QOpenGLFunctions_3_3_Compatibility* self, int32_t s, int32_t t, int32_t r, int32_t q) {
	self->glTexCoord4i(s, t, r, q);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord4fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glTexCoord4fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord4f(QOpenGLFunctions_3_3_Compatibility* self, float s, float t, float r, float q) {
	self->glTexCoord4f(s, t, r, q);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord4dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glTexCoord4dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord4d(QOpenGLFunctions_3_3_Compatibility* self, double s, double t, double r, double q) {
	self->glTexCoord4d(s, t, r, q);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord3sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glTexCoord3sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord3s(QOpenGLFunctions_3_3_Compatibility* self, int16_t s, int16_t t, int16_t r) {
	self->glTexCoord3s(s, t, r);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord3iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glTexCoord3iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord3i(QOpenGLFunctions_3_3_Compatibility* self, int32_t s, int32_t t, int32_t r) {
	self->glTexCoord3i(s, t, r);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord3fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glTexCoord3fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord3f(QOpenGLFunctions_3_3_Compatibility* self, float s, float t, float r) {
	self->glTexCoord3f(s, t, r);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord3dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glTexCoord3dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord3d(QOpenGLFunctions_3_3_Compatibility* self, double s, double t, double r) {
	self->glTexCoord3d(s, t, r);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord2sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glTexCoord2sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord2s(QOpenGLFunctions_3_3_Compatibility* self, int16_t s, int16_t t) {
	self->glTexCoord2s(s, t);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord2iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glTexCoord2iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord2i(QOpenGLFunctions_3_3_Compatibility* self, int32_t s, int32_t t) {
	self->glTexCoord2i(s, t);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord2fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glTexCoord2fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord2f(QOpenGLFunctions_3_3_Compatibility* self, float s, float t) {
	self->glTexCoord2f(s, t);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord2dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glTexCoord2dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord2d(QOpenGLFunctions_3_3_Compatibility* self, double s, double t) {
	self->glTexCoord2d(s, t);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord1sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glTexCoord1sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord1s(QOpenGLFunctions_3_3_Compatibility* self, int16_t s) {
	self->glTexCoord1s(s);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord1iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glTexCoord1iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord1i(QOpenGLFunctions_3_3_Compatibility* self, int32_t s) {
	self->glTexCoord1i(s);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord1fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glTexCoord1fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord1f(QOpenGLFunctions_3_3_Compatibility* self, float s) {
	self->glTexCoord1f(s);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord1dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glTexCoord1dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoord1d(QOpenGLFunctions_3_3_Compatibility* self, double s) {
	self->glTexCoord1d(s);
}

void QOpenGLFunctions_3_3_Compatibility_GlRectsv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v1, const int16_t* v2) {
	self->glRectsv(v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlRects(QOpenGLFunctions_3_3_Compatibility* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
	self->glRects(x1, y1, x2, y2);
}

void QOpenGLFunctions_3_3_Compatibility_GlRectiv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v1, const int32_t* v2) {
	self->glRectiv(v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlRecti(QOpenGLFunctions_3_3_Compatibility* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	self->glRecti(x1, y1, x2, y2);
}

void QOpenGLFunctions_3_3_Compatibility_GlRectfv(QOpenGLFunctions_3_3_Compatibility* self, const float* v1, const float* v2) {
	self->glRectfv(v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlRectf(QOpenGLFunctions_3_3_Compatibility* self, float x1, float y1, float x2, float y2) {
	self->glRectf(x1, y1, x2, y2);
}

void QOpenGLFunctions_3_3_Compatibility_GlRectdv(QOpenGLFunctions_3_3_Compatibility* self, const double* v1, const double* v2) {
	self->glRectdv(v1, v2);
}

void QOpenGLFunctions_3_3_Compatibility_GlRectd(QOpenGLFunctions_3_3_Compatibility* self, double x1, double y1, double x2, double y2) {
	self->glRectd(x1, y1, x2, y2);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos4sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glRasterPos4sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos4s(QOpenGLFunctions_3_3_Compatibility* self, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glRasterPos4s(x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos4iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glRasterPos4iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos4i(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glRasterPos4i(x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos4fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glRasterPos4fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos4f(QOpenGLFunctions_3_3_Compatibility* self, float x, float y, float z, float w) {
	self->glRasterPos4f(x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos4dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glRasterPos4dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos4d(QOpenGLFunctions_3_3_Compatibility* self, double x, double y, double z, double w) {
	self->glRasterPos4d(x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos3sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glRasterPos3sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos3s(QOpenGLFunctions_3_3_Compatibility* self, int16_t x, int16_t y, int16_t z) {
	self->glRasterPos3s(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos3iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glRasterPos3iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos3i(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t z) {
	self->glRasterPos3i(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos3fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glRasterPos3fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos3f(QOpenGLFunctions_3_3_Compatibility* self, float x, float y, float z) {
	self->glRasterPos3f(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos3dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glRasterPos3dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos3d(QOpenGLFunctions_3_3_Compatibility* self, double x, double y, double z) {
	self->glRasterPos3d(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos2sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glRasterPos2sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos2s(QOpenGLFunctions_3_3_Compatibility* self, int16_t x, int16_t y) {
	self->glRasterPos2s(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos2iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glRasterPos2iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos2i(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y) {
	self->glRasterPos2i(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos2fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glRasterPos2fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos2f(QOpenGLFunctions_3_3_Compatibility* self, float x, float y) {
	self->glRasterPos2f(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos2dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glRasterPos2dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlRasterPos2d(QOpenGLFunctions_3_3_Compatibility* self, double x, double y) {
	self->glRasterPos2d(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glNormal3sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3s(QOpenGLFunctions_3_3_Compatibility* self, int16_t nx, int16_t ny, int16_t nz) {
	self->glNormal3s(nx, ny, nz);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glNormal3iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3i(QOpenGLFunctions_3_3_Compatibility* self, int32_t nx, int32_t ny, int32_t nz) {
	self->glNormal3i(nx, ny, nz);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glNormal3fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3f(QOpenGLFunctions_3_3_Compatibility* self, float nx, float ny, float nz) {
	self->glNormal3f(nx, ny, nz);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glNormal3dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3d(QOpenGLFunctions_3_3_Compatibility* self, double nx, double ny, double nz) {
	self->glNormal3d(nx, ny, nz);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3bv(QOpenGLFunctions_3_3_Compatibility* self, const signed char* v) {
	self->glNormal3bv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormal3b(QOpenGLFunctions_3_3_Compatibility* self, signed char nx, signed char ny, signed char nz) {
	self->glNormal3b(nx, ny, nz);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexsv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* c) {
	self->glIndexsv(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexs(QOpenGLFunctions_3_3_Compatibility* self, int16_t c) {
	self->glIndexs(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexiv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* c) {
	self->glIndexiv(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexi(QOpenGLFunctions_3_3_Compatibility* self, int32_t c) {
	self->glIndexi(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexfv(QOpenGLFunctions_3_3_Compatibility* self, const float* c) {
	self->glIndexfv(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexf(QOpenGLFunctions_3_3_Compatibility* self, float c) {
	self->glIndexf(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexdv(QOpenGLFunctions_3_3_Compatibility* self, const double* c) {
	self->glIndexdv(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexd(QOpenGLFunctions_3_3_Compatibility* self, double c) {
	self->glIndexd(c);
}

void QOpenGLFunctions_3_3_Compatibility_GlEnd(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glEnd();
}

void QOpenGLFunctions_3_3_Compatibility_GlEdgeFlagv(QOpenGLFunctions_3_3_Compatibility* self, const unsigned char* flag) {
	self->glEdgeFlagv(flag);
}

void QOpenGLFunctions_3_3_Compatibility_GlEdgeFlag(QOpenGLFunctions_3_3_Compatibility* self, unsigned char flag) {
	self->glEdgeFlag(flag);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4usv(QOpenGLFunctions_3_3_Compatibility* self, const uint16_t* v) {
	self->glColor4usv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4us(QOpenGLFunctions_3_3_Compatibility* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
	self->glColor4us(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4uiv(QOpenGLFunctions_3_3_Compatibility* self, const uint32_t* v) {
	self->glColor4uiv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
	self->glColor4ui(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4ubv(QOpenGLFunctions_3_3_Compatibility* self, const uint8_t* v) {
	self->glColor4ubv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4ub(QOpenGLFunctions_3_3_Compatibility* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
	self->glColor4ub(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glColor4sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4s(QOpenGLFunctions_3_3_Compatibility* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
	self->glColor4s(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glColor4iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4i(QOpenGLFunctions_3_3_Compatibility* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
	self->glColor4i(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glColor4fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4f(QOpenGLFunctions_3_3_Compatibility* self, float red, float green, float blue, float alpha) {
	self->glColor4f(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glColor4dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4d(QOpenGLFunctions_3_3_Compatibility* self, double red, double green, double blue, double alpha) {
	self->glColor4d(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4bv(QOpenGLFunctions_3_3_Compatibility* self, const signed char* v) {
	self->glColor4bv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor4b(QOpenGLFunctions_3_3_Compatibility* self, signed char red, signed char green, signed char blue, signed char alpha) {
	self->glColor4b(red, green, blue, alpha);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3usv(QOpenGLFunctions_3_3_Compatibility* self, const uint16_t* v) {
	self->glColor3usv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3us(QOpenGLFunctions_3_3_Compatibility* self, uint16_t red, uint16_t green, uint16_t blue) {
	self->glColor3us(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3uiv(QOpenGLFunctions_3_3_Compatibility* self, const uint32_t* v) {
	self->glColor3uiv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t red, uint32_t green, uint32_t blue) {
	self->glColor3ui(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3ubv(QOpenGLFunctions_3_3_Compatibility* self, const uint8_t* v) {
	self->glColor3ubv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3ub(QOpenGLFunctions_3_3_Compatibility* self, uint8_t red, uint8_t green, uint8_t blue) {
	self->glColor3ub(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glColor3sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3s(QOpenGLFunctions_3_3_Compatibility* self, int16_t red, int16_t green, int16_t blue) {
	self->glColor3s(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glColor3iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3i(QOpenGLFunctions_3_3_Compatibility* self, int32_t red, int32_t green, int32_t blue) {
	self->glColor3i(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glColor3fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3f(QOpenGLFunctions_3_3_Compatibility* self, float red, float green, float blue) {
	self->glColor3f(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glColor3dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3d(QOpenGLFunctions_3_3_Compatibility* self, double red, double green, double blue) {
	self->glColor3d(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3bv(QOpenGLFunctions_3_3_Compatibility* self, const signed char* v) {
	self->glColor3bv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlColor3b(QOpenGLFunctions_3_3_Compatibility* self, signed char red, signed char green, signed char blue) {
	self->glColor3b(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlBitmap(QOpenGLFunctions_3_3_Compatibility* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, const uint8_t* bitmap) {
	self->glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void QOpenGLFunctions_3_3_Compatibility_GlBegin(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mode) {
	self->glBegin(mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlListBase(QOpenGLFunctions_3_3_Compatibility* self, uint32_t base) {
	self->glListBase(base);
}

uint32_t QOpenGLFunctions_3_3_Compatibility_GlGenLists(QOpenGLFunctions_3_3_Compatibility* self, int32_t range) {
	return self->glGenLists(range);
}

void QOpenGLFunctions_3_3_Compatibility_GlDeleteLists(QOpenGLFunctions_3_3_Compatibility* self, uint32_t list, int32_t range) {
	self->glDeleteLists(list, range);
}

void QOpenGLFunctions_3_3_Compatibility_GlCallLists(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, uint32_t typeVal, const void* lists) {
	self->glCallLists(n, typeVal, lists);
}

void QOpenGLFunctions_3_3_Compatibility_GlCallList(QOpenGLFunctions_3_3_Compatibility* self, uint32_t list) {
	self->glCallList(list);
}

void QOpenGLFunctions_3_3_Compatibility_GlEndList(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glEndList();
}

void QOpenGLFunctions_3_3_Compatibility_GlNewList(QOpenGLFunctions_3_3_Compatibility* self, uint32_t list, uint32_t mode) {
	self->glNewList(list, mode);
}

void QOpenGLFunctions_3_3_Compatibility_GlPushClientAttrib(QOpenGLFunctions_3_3_Compatibility* self, uint32_t mask) {
	self->glPushClientAttrib(mask);
}

void QOpenGLFunctions_3_3_Compatibility_GlPopClientAttrib(QOpenGLFunctions_3_3_Compatibility* self) {
	self->glPopClientAttrib();
}

void QOpenGLFunctions_3_3_Compatibility_GlPrioritizeTextures(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, const uint32_t* textures, const float* priorities) {
	self->glPrioritizeTextures(n, textures, priorities);
}

unsigned char QOpenGLFunctions_3_3_Compatibility_GlAreTexturesResident(QOpenGLFunctions_3_3_Compatibility* self, int32_t n, const uint32_t* textures, unsigned char* residences) {
	return self->glAreTexturesResident(n, textures, residences);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexPointer(QOpenGLFunctions_3_3_Compatibility* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlTexCoordPointer(QOpenGLFunctions_3_3_Compatibility* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glTexCoordPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlNormalPointer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glNormalPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlInterleavedArrays(QOpenGLFunctions_3_3_Compatibility* self, uint32_t format, int32_t stride, const void* pointer) {
	self->glInterleavedArrays(format, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlIndexPointer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glIndexPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlEnableClientState(QOpenGLFunctions_3_3_Compatibility* self, uint32_t array) {
	self->glEnableClientState(array);
}

void QOpenGLFunctions_3_3_Compatibility_GlEdgeFlagPointer(QOpenGLFunctions_3_3_Compatibility* self, int32_t stride, const void* pointer) {
	self->glEdgeFlagPointer(stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlDisableClientState(QOpenGLFunctions_3_3_Compatibility* self, uint32_t array) {
	self->glDisableClientState(array);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorPointer(QOpenGLFunctions_3_3_Compatibility* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glColorPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlArrayElement(QOpenGLFunctions_3_3_Compatibility* self, int32_t i) {
	self->glArrayElement(i);
}

void QOpenGLFunctions_3_3_Compatibility_GlResetMinmax(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target) {
	self->glResetMinmax(target);
}

void QOpenGLFunctions_3_3_Compatibility_GlResetHistogram(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target) {
	self->glResetHistogram(target);
}

void QOpenGLFunctions_3_3_Compatibility_GlMinmax(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, unsigned char sink) {
	self->glMinmax(target, internalformat, sink);
}

void QOpenGLFunctions_3_3_Compatibility_GlHistogram(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t width, uint32_t internalformat, unsigned char sink) {
	self->glHistogram(target, width, internalformat, sink);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMinmaxParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetMinmaxParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMinmaxParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetMinmaxParameterfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetMinmax(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
	self->glGetMinmax(target, reset, format, typeVal, values);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetHistogramParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetHistogramParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetHistogramParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetHistogramParameterfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetHistogram(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
	self->glGetHistogram(target, reset, format, typeVal, values);
}

void QOpenGLFunctions_3_3_Compatibility_GlSeparableFilter2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* row, const void* column) {
	self->glSeparableFilter2D(target, internalformat, width, height, format, typeVal, row, column);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetSeparableFilter(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t format, uint32_t typeVal, void* row, void* column, void* span) {
	self->glGetSeparableFilter(target, format, typeVal, row, column, span);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetConvolutionParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetConvolutionParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetConvolutionParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetConvolutionParameterfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetConvolutionFilter(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t format, uint32_t typeVal, void* image) {
	self->glGetConvolutionFilter(target, format, typeVal, image);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyConvolutionFilter2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyConvolutionFilter1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
	self->glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void QOpenGLFunctions_3_3_Compatibility_GlConvolutionParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glConvolutionParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlConvolutionParameteri(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t params) {
	self->glConvolutionParameteri(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlConvolutionParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const float* params) {
	self->glConvolutionParameterfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlConvolutionParameterf(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float params) {
	self->glConvolutionParameterf(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlConvolutionFilter2D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* image) {
	self->glConvolutionFilter2D(target, internalformat, width, height, format, typeVal, image);
}

void QOpenGLFunctions_3_3_Compatibility_GlConvolutionFilter1D(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* image) {
	self->glConvolutionFilter1D(target, internalformat, width, format, typeVal, image);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyColorSubTable(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width) {
	self->glCopyColorSubTable(target, start, x, y, width);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorSubTable(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t typeVal, const void* data) {
	self->glColorSubTable(target, start, count, format, typeVal, data);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetColorTableParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetColorTableParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetColorTableParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetColorTableParameterfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlGetColorTable(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t format, uint32_t typeVal, void* table) {
	self->glGetColorTable(target, format, typeVal, table);
}

void QOpenGLFunctions_3_3_Compatibility_GlCopyColorTable(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
	self->glCopyColorTable(target, internalformat, x, y, width);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorTableParameteriv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glColorTableParameteriv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorTableParameterfv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t pname, const float* params) {
	self->glColorTableParameterfv(target, pname, params);
}

void QOpenGLFunctions_3_3_Compatibility_GlColorTable(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* table) {
	self->glColorTable(target, internalformat, width, format, typeVal, table);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultTransposeMatrixd(QOpenGLFunctions_3_3_Compatibility* self, const double* m) {
	self->glMultTransposeMatrixd(m);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultTransposeMatrixf(QOpenGLFunctions_3_3_Compatibility* self, const float* m) {
	self->glMultTransposeMatrixf(m);
}

void QOpenGLFunctions_3_3_Compatibility_GlLoadTransposeMatrixd(QOpenGLFunctions_3_3_Compatibility* self, const double* m) {
	self->glLoadTransposeMatrixd(m);
}

void QOpenGLFunctions_3_3_Compatibility_GlLoadTransposeMatrixf(QOpenGLFunctions_3_3_Compatibility* self, const float* m) {
	self->glLoadTransposeMatrixf(m);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord4sv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4s(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q) {
	self->glMultiTexCoord4s(target, s, t, r, q);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord4iv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4i(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q) {
	self->glMultiTexCoord4i(target, s, t, r, q);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4fv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const float* v) {
	self->glMultiTexCoord4fv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, float s, float t, float r, float q) {
	self->glMultiTexCoord4f(target, s, t, r, q);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4dv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const double* v) {
	self->glMultiTexCoord4dv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, double s, double t, double r, double q) {
	self->glMultiTexCoord4d(target, s, t, r, q);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord3sv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3s(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int16_t s, int16_t t, int16_t r) {
	self->glMultiTexCoord3s(target, s, t, r);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord3iv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3i(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t s, int32_t t, int32_t r) {
	self->glMultiTexCoord3i(target, s, t, r);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3fv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const float* v) {
	self->glMultiTexCoord3fv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, float s, float t, float r) {
	self->glMultiTexCoord3f(target, s, t, r);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3dv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const double* v) {
	self->glMultiTexCoord3dv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, double s, double t, double r) {
	self->glMultiTexCoord3d(target, s, t, r);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord2sv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2s(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int16_t s, int16_t t) {
	self->glMultiTexCoord2s(target, s, t);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord2iv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2i(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t s, int32_t t) {
	self->glMultiTexCoord2i(target, s, t);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2fv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const float* v) {
	self->glMultiTexCoord2fv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, float s, float t) {
	self->glMultiTexCoord2f(target, s, t);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2dv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const double* v) {
	self->glMultiTexCoord2dv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, double s, double t) {
	self->glMultiTexCoord2d(target, s, t);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord1sv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1s(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int16_t s) {
	self->glMultiTexCoord1s(target, s);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord1iv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1i(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, int32_t s) {
	self->glMultiTexCoord1i(target, s);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1fv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const float* v) {
	self->glMultiTexCoord1fv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, float s) {
	self->glMultiTexCoord1f(target, s);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1dv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, const double* v) {
	self->glMultiTexCoord1dv(target, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t target, double s) {
	self->glMultiTexCoord1d(target, s);
}

void QOpenGLFunctions_3_3_Compatibility_GlClientActiveTexture(QOpenGLFunctions_3_3_Compatibility* self, uint32_t texture) {
	self->glClientActiveTexture(texture);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos3sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glWindowPos3sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos3s(QOpenGLFunctions_3_3_Compatibility* self, int16_t x, int16_t y, int16_t z) {
	self->glWindowPos3s(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos3iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glWindowPos3iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos3i(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y, int32_t z) {
	self->glWindowPos3i(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos3fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glWindowPos3fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos3f(QOpenGLFunctions_3_3_Compatibility* self, float x, float y, float z) {
	self->glWindowPos3f(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos3dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glWindowPos3dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos3d(QOpenGLFunctions_3_3_Compatibility* self, double x, double y, double z) {
	self->glWindowPos3d(x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos2sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glWindowPos2sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos2s(QOpenGLFunctions_3_3_Compatibility* self, int16_t x, int16_t y) {
	self->glWindowPos2s(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos2iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glWindowPos2iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos2i(QOpenGLFunctions_3_3_Compatibility* self, int32_t x, int32_t y) {
	self->glWindowPos2i(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos2fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glWindowPos2fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos2f(QOpenGLFunctions_3_3_Compatibility* self, float x, float y) {
	self->glWindowPos2f(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos2dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glWindowPos2dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlWindowPos2d(QOpenGLFunctions_3_3_Compatibility* self, double x, double y) {
	self->glWindowPos2d(x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColorPointer(QOpenGLFunctions_3_3_Compatibility* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glSecondaryColorPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3usv(QOpenGLFunctions_3_3_Compatibility* self, const uint16_t* v) {
	self->glSecondaryColor3usv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3us(QOpenGLFunctions_3_3_Compatibility* self, uint16_t red, uint16_t green, uint16_t blue) {
	self->glSecondaryColor3us(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3uiv(QOpenGLFunctions_3_3_Compatibility* self, const uint32_t* v) {
	self->glSecondaryColor3uiv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t red, uint32_t green, uint32_t blue) {
	self->glSecondaryColor3ui(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3ubv(QOpenGLFunctions_3_3_Compatibility* self, const uint8_t* v) {
	self->glSecondaryColor3ubv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3ub(QOpenGLFunctions_3_3_Compatibility* self, uint8_t red, uint8_t green, uint8_t blue) {
	self->glSecondaryColor3ub(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3sv(QOpenGLFunctions_3_3_Compatibility* self, const int16_t* v) {
	self->glSecondaryColor3sv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3s(QOpenGLFunctions_3_3_Compatibility* self, int16_t red, int16_t green, int16_t blue) {
	self->glSecondaryColor3s(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3iv(QOpenGLFunctions_3_3_Compatibility* self, const int32_t* v) {
	self->glSecondaryColor3iv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3i(QOpenGLFunctions_3_3_Compatibility* self, int32_t red, int32_t green, int32_t blue) {
	self->glSecondaryColor3i(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3fv(QOpenGLFunctions_3_3_Compatibility* self, const float* v) {
	self->glSecondaryColor3fv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3f(QOpenGLFunctions_3_3_Compatibility* self, float red, float green, float blue) {
	self->glSecondaryColor3f(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3dv(QOpenGLFunctions_3_3_Compatibility* self, const double* v) {
	self->glSecondaryColor3dv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3d(QOpenGLFunctions_3_3_Compatibility* self, double red, double green, double blue) {
	self->glSecondaryColor3d(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3bv(QOpenGLFunctions_3_3_Compatibility* self, const signed char* v) {
	self->glSecondaryColor3bv(v);
}

void QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3b(QOpenGLFunctions_3_3_Compatibility* self, signed char red, signed char green, signed char blue) {
	self->glSecondaryColor3b(red, green, blue);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogCoordPointer(QOpenGLFunctions_3_3_Compatibility* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glFogCoordPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogCoorddv(QOpenGLFunctions_3_3_Compatibility* self, const double* coord) {
	self->glFogCoorddv(coord);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogCoordd(QOpenGLFunctions_3_3_Compatibility* self, double coord) {
	self->glFogCoordd(coord);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogCoordfv(QOpenGLFunctions_3_3_Compatibility* self, const float* coord) {
	self->glFogCoordfv(coord);
}

void QOpenGLFunctions_3_3_Compatibility_GlFogCoordf(QOpenGLFunctions_3_3_Compatibility* self, float coord) {
	self->glFogCoordf(coord);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4usv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint16_t* v) {
	self->glVertexAttrib4usv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttrib4uiv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4ubv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint8_t* v) {
	self->glVertexAttrib4ubv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib4sv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4s(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glVertexAttrib4s(index, x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int32_t* v) {
	self->glVertexAttrib4iv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4fv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const float* v) {
	self->glVertexAttrib4fv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, float x, float y, float z, float w) {
	self->glVertexAttrib4f(index, x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4dv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const double* v) {
	self->glVertexAttrib4dv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, double x, double y, double z, double w) {
	self->glVertexAttrib4d(index, x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4bv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const signed char* v) {
	self->glVertexAttrib4bv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nusv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint16_t* v) {
	self->glVertexAttrib4Nusv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nuiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttrib4Nuiv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nubv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint8_t* v) {
	self->glVertexAttrib4Nubv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nub(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w) {
	self->glVertexAttrib4Nub(index, x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nsv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib4Nsv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Niv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int32_t* v) {
	self->glVertexAttrib4Niv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nbv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const signed char* v) {
	self->glVertexAttrib4Nbv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib3sv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3s(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int16_t x, int16_t y, int16_t z) {
	self->glVertexAttrib3s(index, x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3fv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const float* v) {
	self->glVertexAttrib3fv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, float x, float y, float z) {
	self->glVertexAttrib3f(index, x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3dv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const double* v) {
	self->glVertexAttrib3dv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, double x, double y, double z) {
	self->glVertexAttrib3d(index, x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib2sv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2s(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int16_t x, int16_t y) {
	self->glVertexAttrib2s(index, x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2fv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const float* v) {
	self->glVertexAttrib2fv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, float x, float y) {
	self->glVertexAttrib2f(index, x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2dv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const double* v) {
	self->glVertexAttrib2dv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, double x, double y) {
	self->glVertexAttrib2d(index, x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int16_t* v) {
	self->glVertexAttrib1sv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1s(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int16_t x) {
	self->glVertexAttrib1s(index, x);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1fv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const float* v) {
	self->glVertexAttrib1fv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1f(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, float x) {
	self->glVertexAttrib1f(index, x);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1dv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const double* v) {
	self->glVertexAttrib1dv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1d(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, double x) {
	self->glVertexAttrib1d(index, x);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4usv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint16_t* v) {
	self->glVertexAttribI4usv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4ubv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint8_t* v) {
	self->glVertexAttribI4ubv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4sv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int16_t* v) {
	self->glVertexAttribI4sv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4bv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const signed char* v) {
	self->glVertexAttribI4bv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI4uiv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI3uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI3uiv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI2uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI2uiv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI1uiv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI1uiv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI4iv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI3iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI3iv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI2iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI2iv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI1iv(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI1iv(index, v);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
	self->glVertexAttribI4ui(index, x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI3ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z) {
	self->glVertexAttribI3ui(index, x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI2ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t x, uint32_t y) {
	self->glVertexAttribI2ui(index, x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI1ui(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, uint32_t x) {
	self->glVertexAttribI1ui(index, x);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4i(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glVertexAttribI4i(index, x, y, z, w);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI3i(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int32_t x, int32_t y, int32_t z) {
	self->glVertexAttribI3i(index, x, y, z);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI2i(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int32_t x, int32_t y) {
	self->glVertexAttribI2i(index, x, y);
}

void QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI1i(QOpenGLFunctions_3_3_Compatibility* self, uint32_t index, int32_t x) {
	self->glVertexAttribI1i(index, x);
}

// Base class handler implementation
bool QOpenGLFunctions_3_3_Compatibility_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_3_3_Compatibility* self) {
	auto* vqopenglfunctions_3_3_compatibility = dynamic_cast<VirtualQOpenGLFunctions_3_3_Compatibility*>(self);
	if (vqopenglfunctions_3_3_compatibility && vqopenglfunctions_3_3_compatibility->isVirtualQOpenGLFunctions_3_3_Compatibility) {
vqopenglfunctions_3_3_compatibility->setQOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions_IsBase(true);
	return vqopenglfunctions_3_3_compatibility->initializeOpenGLFunctions();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_3_Compatibility_OnInitializeOpenGLFunctions(QOpenGLFunctions_3_3_Compatibility* self, intptr_t slot) {
	auto* vqopenglfunctions_3_3_compatibility = dynamic_cast<VirtualQOpenGLFunctions_3_3_Compatibility*>(self);
	if (vqopenglfunctions_3_3_compatibility && vqopenglfunctions_3_3_compatibility->isVirtualQOpenGLFunctions_3_3_Compatibility) {
vqopenglfunctions_3_3_compatibility->setQOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_3_Compatibility::QOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions_Callback>(slot));
}
}

void QOpenGLFunctions_3_3_Compatibility_Delete(QOpenGLFunctions_3_3_Compatibility* self) {
    delete self;
}

