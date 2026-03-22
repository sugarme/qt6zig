#include <QOpenGLFunctions_1_4>
#include <qopenglfunctions_1_4.h>
#include "libqopenglfunctions_1_4.h"
#include "libqopenglfunctions_1_4.hxx"

QOpenGLFunctions_1_4* QOpenGLFunctions_1_4_new() {
	 return new VirtualQOpenGLFunctions_1_4();
}

bool QOpenGLFunctions_1_4_InitializeOpenGLFunctions(QOpenGLFunctions_1_4* self) {
	return self->initializeOpenGLFunctions();
}

void QOpenGLFunctions_1_4_GlViewport(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glViewport(x, y, width, height);
}

void QOpenGLFunctions_1_4_GlDepthRange(QOpenGLFunctions_1_4* self, double nearVal, double farVal) {
	self->glDepthRange(nearVal, farVal);
}

unsigned char QOpenGLFunctions_1_4_GlIsEnabled(QOpenGLFunctions_1_4* self, uint32_t cap) {
	return self->glIsEnabled(cap);
}

void QOpenGLFunctions_1_4_GlGetTexLevelParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
	self->glGetTexLevelParameteriv(target, level, pname, params);
}

void QOpenGLFunctions_1_4_GlGetTexLevelParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
	self->glGetTexLevelParameterfv(target, level, pname, params);
}

void QOpenGLFunctions_1_4_GlGetTexParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetTexParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetTexImage(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glGetTexImage(target, level, format, typeVal, pixels);
}

const uint8_t* QOpenGLFunctions_1_4_GlGetString(QOpenGLFunctions_1_4* self, uint32_t name) {
	return self->glGetString(name);
}

void QOpenGLFunctions_1_4_GlGetIntegerv(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t* params) {
	self->glGetIntegerv(pname, params);
}

void QOpenGLFunctions_1_4_GlGetFloatv(QOpenGLFunctions_1_4* self, uint32_t pname, float* params) {
	self->glGetFloatv(pname, params);
}

GL QOpenGLFunctions_1_4_GlGetError(QOpenGLFunctions_1_4* self) {
	return self->glGetError();
}

void QOpenGLFunctions_1_4_GlGetDoublev(QOpenGLFunctions_1_4* self, uint32_t pname, double* params) {
	self->glGetDoublev(pname, params);
}

void QOpenGLFunctions_1_4_GlGetBooleanv(QOpenGLFunctions_1_4* self, uint32_t pname, unsigned char* params) {
	self->glGetBooleanv(pname, params);
}

void QOpenGLFunctions_1_4_GlReadPixels(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glReadPixels(x, y, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_1_4_GlReadBuffer(QOpenGLFunctions_1_4* self, uint32_t mode) {
	self->glReadBuffer(mode);
}

void QOpenGLFunctions_1_4_GlPixelStorei(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
	self->glPixelStorei(pname, param);
}

void QOpenGLFunctions_1_4_GlPixelStoref(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
	self->glPixelStoref(pname, param);
}

void QOpenGLFunctions_1_4_GlDepthFunc(QOpenGLFunctions_1_4* self, uint32_t func) {
	self->glDepthFunc(func);
}

void QOpenGLFunctions_1_4_GlStencilOp(QOpenGLFunctions_1_4* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
	self->glStencilOp(fail, zfail, zpass);
}

void QOpenGLFunctions_1_4_GlStencilFunc(QOpenGLFunctions_1_4* self, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFunc(func, ref, mask);
}

void QOpenGLFunctions_1_4_GlLogicOp(QOpenGLFunctions_1_4* self, uint32_t opcode) {
	self->glLogicOp(opcode);
}

void QOpenGLFunctions_1_4_GlBlendFunc(QOpenGLFunctions_1_4* self, uint32_t sfactor, uint32_t dfactor) {
	self->glBlendFunc(sfactor, dfactor);
}

void QOpenGLFunctions_1_4_GlFlush(QOpenGLFunctions_1_4* self) {
	self->glFlush();
}

void QOpenGLFunctions_1_4_GlFinish(QOpenGLFunctions_1_4* self) {
	self->glFinish();
}

void QOpenGLFunctions_1_4_GlEnable(QOpenGLFunctions_1_4* self, uint32_t cap) {
	self->glEnable(cap);
}

void QOpenGLFunctions_1_4_GlDisable(QOpenGLFunctions_1_4* self, uint32_t cap) {
	self->glDisable(cap);
}

void QOpenGLFunctions_1_4_GlDepthMask(QOpenGLFunctions_1_4* self, unsigned char flag) {
	self->glDepthMask(flag);
}

void QOpenGLFunctions_1_4_GlColorMask(QOpenGLFunctions_1_4* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	self->glColorMask(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlStencilMask(QOpenGLFunctions_1_4* self, uint32_t mask) {
	self->glStencilMask(mask);
}

void QOpenGLFunctions_1_4_GlClearDepth(QOpenGLFunctions_1_4* self, double depth) {
	self->glClearDepth(depth);
}

void QOpenGLFunctions_1_4_GlClearStencil(QOpenGLFunctions_1_4* self, int32_t s) {
	self->glClearStencil(s);
}

void QOpenGLFunctions_1_4_GlClearColor(QOpenGLFunctions_1_4* self, float red, float green, float blue, float alpha) {
	self->glClearColor(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlClear(QOpenGLFunctions_1_4* self, uint32_t mask) {
	self->glClear(mask);
}

void QOpenGLFunctions_1_4_GlDrawBuffer(QOpenGLFunctions_1_4* self, uint32_t mode) {
	self->glDrawBuffer(mode);
}

void QOpenGLFunctions_1_4_GlTexImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage2D(target, level, internalformat, width, height, border, format, typeVal, pixels);
}

void QOpenGLFunctions_1_4_GlTexImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage1D(target, level, internalformat, width, border, format, typeVal, pixels);
}

void QOpenGLFunctions_1_4_GlTexParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlTexParameteri(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexParameteri(target, pname, param);
}

void QOpenGLFunctions_1_4_GlTexParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlTexParameterf(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float param) {
	self->glTexParameterf(target, pname, param);
}

void QOpenGLFunctions_1_4_GlScissor(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glScissor(x, y, width, height);
}

void QOpenGLFunctions_1_4_GlPolygonMode(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t mode) {
	self->glPolygonMode(face, mode);
}

void QOpenGLFunctions_1_4_GlPointSize(QOpenGLFunctions_1_4* self, float size) {
	self->glPointSize(size);
}

void QOpenGLFunctions_1_4_GlLineWidth(QOpenGLFunctions_1_4* self, float width) {
	self->glLineWidth(width);
}

void QOpenGLFunctions_1_4_GlHint(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t mode) {
	self->glHint(target, mode);
}

void QOpenGLFunctions_1_4_GlFrontFace(QOpenGLFunctions_1_4* self, uint32_t mode) {
	self->glFrontFace(mode);
}

void QOpenGLFunctions_1_4_GlCullFace(QOpenGLFunctions_1_4* self, uint32_t mode) {
	self->glCullFace(mode);
}

void QOpenGLFunctions_1_4_GlIndexubv(QOpenGLFunctions_1_4* self, const uint8_t* c) {
	self->glIndexubv(c);
}

void QOpenGLFunctions_1_4_GlIndexub(QOpenGLFunctions_1_4* self, uint8_t c) {
	self->glIndexub(c);
}

unsigned char QOpenGLFunctions_1_4_GlIsTexture(QOpenGLFunctions_1_4* self, uint32_t texture) {
	return self->glIsTexture(texture);
}

void QOpenGLFunctions_1_4_GlGenTextures(QOpenGLFunctions_1_4* self, int32_t n, uint32_t* textures) {
	self->glGenTextures(n, textures);
}

void QOpenGLFunctions_1_4_GlDeleteTextures(QOpenGLFunctions_1_4* self, int32_t n, const uint32_t* textures) {
	self->glDeleteTextures(n, textures);
}

void QOpenGLFunctions_1_4_GlBindTexture(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t texture) {
	self->glBindTexture(target, texture);
}

void QOpenGLFunctions_1_4_GlTexSubImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_1_4_GlTexSubImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage1D(target, level, xoffset, width, format, typeVal, pixels);
}

void QOpenGLFunctions_1_4_GlCopyTexSubImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void QOpenGLFunctions_1_4_GlCopyTexSubImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
	self->glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void QOpenGLFunctions_1_4_GlCopyTexImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
	self->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void QOpenGLFunctions_1_4_GlCopyTexImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
	self->glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void QOpenGLFunctions_1_4_GlPolygonOffset(QOpenGLFunctions_1_4* self, float factor, float units) {
	self->glPolygonOffset(factor, units);
}

void QOpenGLFunctions_1_4_GlGetPointerv(QOpenGLFunctions_1_4* self, uint32_t pname, void** params) {
	self->glGetPointerv(pname, params);
}

void QOpenGLFunctions_1_4_GlDrawElements(QOpenGLFunctions_1_4* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawElements(mode, count, typeVal, indices);
}

void QOpenGLFunctions_1_4_GlDrawArrays(QOpenGLFunctions_1_4* self, uint32_t mode, int32_t first, int32_t count) {
	self->glDrawArrays(mode, first, count);
}

void QOpenGLFunctions_1_4_GlCopyTexSubImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void QOpenGLFunctions_1_4_GlTexSubImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, pixels);
}

void QOpenGLFunctions_1_4_GlTexImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage3D(target, level, internalformat, width, height, depth, border, format, typeVal, pixels);
}

void QOpenGLFunctions_1_4_GlDrawRangeElements(QOpenGLFunctions_1_4* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawRangeElements(mode, start, end, count, typeVal, indices);
}

void QOpenGLFunctions_1_4_GlBlendEquation(QOpenGLFunctions_1_4* self, uint32_t mode) {
	self->glBlendEquation(mode);
}

void QOpenGLFunctions_1_4_GlBlendColor(QOpenGLFunctions_1_4* self, float red, float green, float blue, float alpha) {
	self->glBlendColor(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlGetCompressedTexImage(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, void* img) {
	self->glGetCompressedTexImage(target, level, img);
}

void QOpenGLFunctions_1_4_GlCompressedTexSubImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void QOpenGLFunctions_1_4_GlCompressedTexSubImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void QOpenGLFunctions_1_4_GlCompressedTexSubImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void QOpenGLFunctions_1_4_GlCompressedTexImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void QOpenGLFunctions_1_4_GlCompressedTexImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void QOpenGLFunctions_1_4_GlCompressedTexImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void QOpenGLFunctions_1_4_GlSampleCoverage(QOpenGLFunctions_1_4* self, float value, unsigned char invert) {
	self->glSampleCoverage(value, invert);
}

void QOpenGLFunctions_1_4_GlActiveTexture(QOpenGLFunctions_1_4* self, uint32_t texture) {
	self->glActiveTexture(texture);
}

void QOpenGLFunctions_1_4_GlPointParameteriv(QOpenGLFunctions_1_4* self, uint32_t pname, const int32_t* params) {
	self->glPointParameteriv(pname, params);
}

void QOpenGLFunctions_1_4_GlPointParameteri(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
	self->glPointParameteri(pname, param);
}

void QOpenGLFunctions_1_4_GlPointParameterfv(QOpenGLFunctions_1_4* self, uint32_t pname, const float* params) {
	self->glPointParameterfv(pname, params);
}

void QOpenGLFunctions_1_4_GlPointParameterf(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
	self->glPointParameterf(pname, param);
}

void QOpenGLFunctions_1_4_GlMultiDrawElements(QOpenGLFunctions_1_4* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount) {
	self->glMultiDrawElements(mode, count, typeVal, indices, drawcount);
}

void QOpenGLFunctions_1_4_GlMultiDrawArrays(QOpenGLFunctions_1_4* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
	self->glMultiDrawArrays(mode, first, count, drawcount);
}

void QOpenGLFunctions_1_4_GlBlendFuncSeparate(QOpenGLFunctions_1_4* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
	self->glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void QOpenGLFunctions_1_4_GlTranslatef(QOpenGLFunctions_1_4* self, float x, float y, float z) {
	self->glTranslatef(x, y, z);
}

void QOpenGLFunctions_1_4_GlTranslated(QOpenGLFunctions_1_4* self, double x, double y, double z) {
	self->glTranslated(x, y, z);
}

void QOpenGLFunctions_1_4_GlScalef(QOpenGLFunctions_1_4* self, float x, float y, float z) {
	self->glScalef(x, y, z);
}

void QOpenGLFunctions_1_4_GlScaled(QOpenGLFunctions_1_4* self, double x, double y, double z) {
	self->glScaled(x, y, z);
}

void QOpenGLFunctions_1_4_GlRotatef(QOpenGLFunctions_1_4* self, float angle, float x, float y, float z) {
	self->glRotatef(angle, x, y, z);
}

void QOpenGLFunctions_1_4_GlRotated(QOpenGLFunctions_1_4* self, double angle, double x, double y, double z) {
	self->glRotated(angle, x, y, z);
}

void QOpenGLFunctions_1_4_GlPushMatrix(QOpenGLFunctions_1_4* self) {
	self->glPushMatrix();
}

void QOpenGLFunctions_1_4_GlPopMatrix(QOpenGLFunctions_1_4* self) {
	self->glPopMatrix();
}

void QOpenGLFunctions_1_4_GlOrtho(QOpenGLFunctions_1_4* self, double left, double right, double bottom, double top, double zNear, double zFar) {
	self->glOrtho(left, right, bottom, top, zNear, zFar);
}

void QOpenGLFunctions_1_4_GlMultMatrixd(QOpenGLFunctions_1_4* self, const double* m) {
	self->glMultMatrixd(m);
}

void QOpenGLFunctions_1_4_GlMultMatrixf(QOpenGLFunctions_1_4* self, const float* m) {
	self->glMultMatrixf(m);
}

void QOpenGLFunctions_1_4_GlMatrixMode(QOpenGLFunctions_1_4* self, uint32_t mode) {
	self->glMatrixMode(mode);
}

void QOpenGLFunctions_1_4_GlLoadMatrixd(QOpenGLFunctions_1_4* self, const double* m) {
	self->glLoadMatrixd(m);
}

void QOpenGLFunctions_1_4_GlLoadMatrixf(QOpenGLFunctions_1_4* self, const float* m) {
	self->glLoadMatrixf(m);
}

void QOpenGLFunctions_1_4_GlLoadIdentity(QOpenGLFunctions_1_4* self) {
	self->glLoadIdentity();
}

void QOpenGLFunctions_1_4_GlFrustum(QOpenGLFunctions_1_4* self, double left, double right, double bottom, double top, double zNear, double zFar) {
	self->glFrustum(left, right, bottom, top, zNear, zFar);
}

unsigned char QOpenGLFunctions_1_4_GlIsList(QOpenGLFunctions_1_4* self, uint32_t list) {
	return self->glIsList(list);
}

void QOpenGLFunctions_1_4_GlGetTexGeniv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, int32_t* params) {
	self->glGetTexGeniv(coord, pname, params);
}

void QOpenGLFunctions_1_4_GlGetTexGenfv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, float* params) {
	self->glGetTexGenfv(coord, pname, params);
}

void QOpenGLFunctions_1_4_GlGetTexGendv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, double* params) {
	self->glGetTexGendv(coord, pname, params);
}

void QOpenGLFunctions_1_4_GlGetTexEnviv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexEnviv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetTexEnvfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexEnvfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetPolygonStipple(QOpenGLFunctions_1_4* self, uint8_t* mask) {
	self->glGetPolygonStipple(mask);
}

void QOpenGLFunctions_1_4_GlGetPixelMapusv(QOpenGLFunctions_1_4* self, uint32_t mapVal, uint16_t* values) {
	self->glGetPixelMapusv(mapVal, values);
}

void QOpenGLFunctions_1_4_GlGetPixelMapuiv(QOpenGLFunctions_1_4* self, uint32_t mapVal, uint32_t* values) {
	self->glGetPixelMapuiv(mapVal, values);
}

void QOpenGLFunctions_1_4_GlGetPixelMapfv(QOpenGLFunctions_1_4* self, uint32_t mapVal, float* values) {
	self->glGetPixelMapfv(mapVal, values);
}

void QOpenGLFunctions_1_4_GlGetMaterialiv(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, int32_t* params) {
	self->glGetMaterialiv(face, pname, params);
}

void QOpenGLFunctions_1_4_GlGetMaterialfv(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, float* params) {
	self->glGetMaterialfv(face, pname, params);
}

void QOpenGLFunctions_1_4_GlGetMapiv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t query, int32_t* v) {
	self->glGetMapiv(target, query, v);
}

void QOpenGLFunctions_1_4_GlGetMapfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t query, float* v) {
	self->glGetMapfv(target, query, v);
}

void QOpenGLFunctions_1_4_GlGetMapdv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t query, double* v) {
	self->glGetMapdv(target, query, v);
}

void QOpenGLFunctions_1_4_GlGetLightiv(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, int32_t* params) {
	self->glGetLightiv(light, pname, params);
}

void QOpenGLFunctions_1_4_GlGetLightfv(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, float* params) {
	self->glGetLightfv(light, pname, params);
}

void QOpenGLFunctions_1_4_GlGetClipPlane(QOpenGLFunctions_1_4* self, uint32_t plane, double* equation) {
	self->glGetClipPlane(plane, equation);
}

void QOpenGLFunctions_1_4_GlDrawPixels(QOpenGLFunctions_1_4* self, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glDrawPixels(width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_1_4_GlCopyPixels(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t typeVal) {
	self->glCopyPixels(x, y, width, height, typeVal);
}

void QOpenGLFunctions_1_4_GlPixelMapusv(QOpenGLFunctions_1_4* self, uint32_t mapVal, int32_t mapsize, const uint16_t* values) {
	self->glPixelMapusv(mapVal, mapsize, values);
}

void QOpenGLFunctions_1_4_GlPixelMapuiv(QOpenGLFunctions_1_4* self, uint32_t mapVal, int32_t mapsize, const uint32_t* values) {
	self->glPixelMapuiv(mapVal, mapsize, values);
}

void QOpenGLFunctions_1_4_GlPixelMapfv(QOpenGLFunctions_1_4* self, uint32_t mapVal, int32_t mapsize, const float* values) {
	self->glPixelMapfv(mapVal, mapsize, values);
}

void QOpenGLFunctions_1_4_GlPixelTransferi(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
	self->glPixelTransferi(pname, param);
}

void QOpenGLFunctions_1_4_GlPixelTransferf(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
	self->glPixelTransferf(pname, param);
}

void QOpenGLFunctions_1_4_GlPixelZoom(QOpenGLFunctions_1_4* self, float xfactor, float yfactor) {
	self->glPixelZoom(xfactor, yfactor);
}

void QOpenGLFunctions_1_4_GlAlphaFunc(QOpenGLFunctions_1_4* self, uint32_t func, float ref) {
	self->glAlphaFunc(func, ref);
}

void QOpenGLFunctions_1_4_GlEvalPoint2(QOpenGLFunctions_1_4* self, int32_t i, int32_t j) {
	self->glEvalPoint2(i, j);
}

void QOpenGLFunctions_1_4_GlEvalMesh2(QOpenGLFunctions_1_4* self, uint32_t mode, int32_t i1Val, int32_t i2Val, int32_t j1, int32_t j2) {
	self->glEvalMesh2(mode, i1Val, i2Val, j1, j2);
}

void QOpenGLFunctions_1_4_GlEvalPoint1(QOpenGLFunctions_1_4* self, int32_t i) {
	self->glEvalPoint1(i);
}

void QOpenGLFunctions_1_4_GlEvalMesh1(QOpenGLFunctions_1_4* self, uint32_t mode, int32_t i1Val, int32_t i2Val) {
	self->glEvalMesh1(mode, i1Val, i2Val);
}

void QOpenGLFunctions_1_4_GlEvalCoord2fv(QOpenGLFunctions_1_4* self, const float* u) {
	self->glEvalCoord2fv(u);
}

void QOpenGLFunctions_1_4_GlEvalCoord2f(QOpenGLFunctions_1_4* self, float u, float v) {
	self->glEvalCoord2f(u, v);
}

void QOpenGLFunctions_1_4_GlEvalCoord2dv(QOpenGLFunctions_1_4* self, const double* u) {
	self->glEvalCoord2dv(u);
}

void QOpenGLFunctions_1_4_GlEvalCoord2d(QOpenGLFunctions_1_4* self, double u, double v) {
	self->glEvalCoord2d(u, v);
}

void QOpenGLFunctions_1_4_GlEvalCoord1fv(QOpenGLFunctions_1_4* self, const float* u) {
	self->glEvalCoord1fv(u);
}

void QOpenGLFunctions_1_4_GlEvalCoord1f(QOpenGLFunctions_1_4* self, float u) {
	self->glEvalCoord1f(u);
}

void QOpenGLFunctions_1_4_GlEvalCoord1dv(QOpenGLFunctions_1_4* self, const double* u) {
	self->glEvalCoord1dv(u);
}

void QOpenGLFunctions_1_4_GlEvalCoord1d(QOpenGLFunctions_1_4* self, double u) {
	self->glEvalCoord1d(u);
}

void QOpenGLFunctions_1_4_GlMapGrid2f(QOpenGLFunctions_1_4* self, int32_t un, float u1Val, float u2Val, int32_t vn, float v1, float v2) {
	self->glMapGrid2f(un, u1Val, u2Val, vn, v1, v2);
}

void QOpenGLFunctions_1_4_GlMapGrid2d(QOpenGLFunctions_1_4* self, int32_t un, double u1Val, double u2Val, int32_t vn, double v1, double v2) {
	self->glMapGrid2d(un, u1Val, u2Val, vn, v1, v2);
}

void QOpenGLFunctions_1_4_GlMapGrid1f(QOpenGLFunctions_1_4* self, int32_t un, float u1Val, float u2Val) {
	self->glMapGrid1f(un, u1Val, u2Val);
}

void QOpenGLFunctions_1_4_GlMapGrid1d(QOpenGLFunctions_1_4* self, int32_t un, double u1Val, double u2Val) {
	self->glMapGrid1d(un, u1Val, u2Val);
}

void QOpenGLFunctions_1_4_GlMap2f(QOpenGLFunctions_1_4* self, uint32_t target, float u1Val, float u2Val, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, const float* points) {
	self->glMap2f(target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, points);
}

void QOpenGLFunctions_1_4_GlMap2d(QOpenGLFunctions_1_4* self, uint32_t target, double u1Val, double u2Val, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, const double* points) {
	self->glMap2d(target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, points);
}

void QOpenGLFunctions_1_4_GlMap1f(QOpenGLFunctions_1_4* self, uint32_t target, float u1Val, float u2Val, int32_t stride, int32_t order, const float* points) {
	self->glMap1f(target, u1Val, u2Val, stride, order, points);
}

void QOpenGLFunctions_1_4_GlMap1d(QOpenGLFunctions_1_4* self, uint32_t target, double u1Val, double u2Val, int32_t stride, int32_t order, const double* points) {
	self->glMap1d(target, u1Val, u2Val, stride, order, points);
}

void QOpenGLFunctions_1_4_GlPushAttrib(QOpenGLFunctions_1_4* self, uint32_t mask) {
	self->glPushAttrib(mask);
}

void QOpenGLFunctions_1_4_GlPopAttrib(QOpenGLFunctions_1_4* self) {
	self->glPopAttrib();
}

void QOpenGLFunctions_1_4_GlAccum(QOpenGLFunctions_1_4* self, uint32_t op, float value) {
	self->glAccum(op, value);
}

void QOpenGLFunctions_1_4_GlIndexMask(QOpenGLFunctions_1_4* self, uint32_t mask) {
	self->glIndexMask(mask);
}

void QOpenGLFunctions_1_4_GlClearIndex(QOpenGLFunctions_1_4* self, float c) {
	self->glClearIndex(c);
}

void QOpenGLFunctions_1_4_GlClearAccum(QOpenGLFunctions_1_4* self, float red, float green, float blue, float alpha) {
	self->glClearAccum(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlPushName(QOpenGLFunctions_1_4* self, uint32_t name) {
	self->glPushName(name);
}

void QOpenGLFunctions_1_4_GlPopName(QOpenGLFunctions_1_4* self) {
	self->glPopName();
}

void QOpenGLFunctions_1_4_GlPassThrough(QOpenGLFunctions_1_4* self, float token) {
	self->glPassThrough(token);
}

void QOpenGLFunctions_1_4_GlLoadName(QOpenGLFunctions_1_4* self, uint32_t name) {
	self->glLoadName(name);
}

void QOpenGLFunctions_1_4_GlInitNames(QOpenGLFunctions_1_4* self) {
	self->glInitNames();
}

int32_t QOpenGLFunctions_1_4_GlRenderMode(QOpenGLFunctions_1_4* self, uint32_t mode) {
	return self->glRenderMode(mode);
}

void QOpenGLFunctions_1_4_GlSelectBuffer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t* buffer) {
	self->glSelectBuffer(size, buffer);
}

void QOpenGLFunctions_1_4_GlFeedbackBuffer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, float* buffer) {
	self->glFeedbackBuffer(size, typeVal, buffer);
}

void QOpenGLFunctions_1_4_GlTexGeniv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, const int32_t* params) {
	self->glTexGeniv(coord, pname, params);
}

void QOpenGLFunctions_1_4_GlTexGeni(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, int32_t param) {
	self->glTexGeni(coord, pname, param);
}

void QOpenGLFunctions_1_4_GlTexGenfv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, const float* params) {
	self->glTexGenfv(coord, pname, params);
}

void QOpenGLFunctions_1_4_GlTexGenf(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, float param) {
	self->glTexGenf(coord, pname, param);
}

void QOpenGLFunctions_1_4_GlTexGendv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, const double* params) {
	self->glTexGendv(coord, pname, params);
}

void QOpenGLFunctions_1_4_GlTexGend(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, double param) {
	self->glTexGend(coord, pname, param);
}

void QOpenGLFunctions_1_4_GlTexEnviv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexEnviv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlTexEnvi(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexEnvi(target, pname, param);
}

void QOpenGLFunctions_1_4_GlTexEnvfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexEnvfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlTexEnvf(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float param) {
	self->glTexEnvf(target, pname, param);
}

void QOpenGLFunctions_1_4_GlShadeModel(QOpenGLFunctions_1_4* self, uint32_t mode) {
	self->glShadeModel(mode);
}

void QOpenGLFunctions_1_4_GlPolygonStipple(QOpenGLFunctions_1_4* self, const uint8_t* mask) {
	self->glPolygonStipple(mask);
}

void QOpenGLFunctions_1_4_GlMaterialiv(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, const int32_t* params) {
	self->glMaterialiv(face, pname, params);
}

void QOpenGLFunctions_1_4_GlMateriali(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, int32_t param) {
	self->glMateriali(face, pname, param);
}

void QOpenGLFunctions_1_4_GlMaterialfv(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, const float* params) {
	self->glMaterialfv(face, pname, params);
}

void QOpenGLFunctions_1_4_GlMaterialf(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, float param) {
	self->glMaterialf(face, pname, param);
}

void QOpenGLFunctions_1_4_GlLineStipple(QOpenGLFunctions_1_4* self, int32_t factor, uint16_t pattern) {
	self->glLineStipple(factor, pattern);
}

void QOpenGLFunctions_1_4_GlLightModeliv(QOpenGLFunctions_1_4* self, uint32_t pname, const int32_t* params) {
	self->glLightModeliv(pname, params);
}

void QOpenGLFunctions_1_4_GlLightModeli(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
	self->glLightModeli(pname, param);
}

void QOpenGLFunctions_1_4_GlLightModelfv(QOpenGLFunctions_1_4* self, uint32_t pname, const float* params) {
	self->glLightModelfv(pname, params);
}

void QOpenGLFunctions_1_4_GlLightModelf(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
	self->glLightModelf(pname, param);
}

void QOpenGLFunctions_1_4_GlLightiv(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, const int32_t* params) {
	self->glLightiv(light, pname, params);
}

void QOpenGLFunctions_1_4_GlLighti(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, int32_t param) {
	self->glLighti(light, pname, param);
}

void QOpenGLFunctions_1_4_GlLightfv(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, const float* params) {
	self->glLightfv(light, pname, params);
}

void QOpenGLFunctions_1_4_GlLightf(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, float param) {
	self->glLightf(light, pname, param);
}

void QOpenGLFunctions_1_4_GlFogiv(QOpenGLFunctions_1_4* self, uint32_t pname, const int32_t* params) {
	self->glFogiv(pname, params);
}

void QOpenGLFunctions_1_4_GlFogi(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
	self->glFogi(pname, param);
}

void QOpenGLFunctions_1_4_GlFogfv(QOpenGLFunctions_1_4* self, uint32_t pname, const float* params) {
	self->glFogfv(pname, params);
}

void QOpenGLFunctions_1_4_GlFogf(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
	self->glFogf(pname, param);
}

void QOpenGLFunctions_1_4_GlColorMaterial(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t mode) {
	self->glColorMaterial(face, mode);
}

void QOpenGLFunctions_1_4_GlClipPlane(QOpenGLFunctions_1_4* self, uint32_t plane, const double* equation) {
	self->glClipPlane(plane, equation);
}

void QOpenGLFunctions_1_4_GlVertex4sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glVertex4sv(v);
}

void QOpenGLFunctions_1_4_GlVertex4s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glVertex4s(x, y, z, w);
}

void QOpenGLFunctions_1_4_GlVertex4iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glVertex4iv(v);
}

void QOpenGLFunctions_1_4_GlVertex4i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glVertex4i(x, y, z, w);
}

void QOpenGLFunctions_1_4_GlVertex4fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glVertex4fv(v);
}

void QOpenGLFunctions_1_4_GlVertex4f(QOpenGLFunctions_1_4* self, float x, float y, float z, float w) {
	self->glVertex4f(x, y, z, w);
}

void QOpenGLFunctions_1_4_GlVertex4dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glVertex4dv(v);
}

void QOpenGLFunctions_1_4_GlVertex4d(QOpenGLFunctions_1_4* self, double x, double y, double z, double w) {
	self->glVertex4d(x, y, z, w);
}

void QOpenGLFunctions_1_4_GlVertex3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glVertex3sv(v);
}

void QOpenGLFunctions_1_4_GlVertex3s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z) {
	self->glVertex3s(x, y, z);
}

void QOpenGLFunctions_1_4_GlVertex3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glVertex3iv(v);
}

void QOpenGLFunctions_1_4_GlVertex3i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z) {
	self->glVertex3i(x, y, z);
}

void QOpenGLFunctions_1_4_GlVertex3fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glVertex3fv(v);
}

void QOpenGLFunctions_1_4_GlVertex3f(QOpenGLFunctions_1_4* self, float x, float y, float z) {
	self->glVertex3f(x, y, z);
}

void QOpenGLFunctions_1_4_GlVertex3dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glVertex3dv(v);
}

void QOpenGLFunctions_1_4_GlVertex3d(QOpenGLFunctions_1_4* self, double x, double y, double z) {
	self->glVertex3d(x, y, z);
}

void QOpenGLFunctions_1_4_GlVertex2sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glVertex2sv(v);
}

void QOpenGLFunctions_1_4_GlVertex2s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y) {
	self->glVertex2s(x, y);
}

void QOpenGLFunctions_1_4_GlVertex2iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glVertex2iv(v);
}

void QOpenGLFunctions_1_4_GlVertex2i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y) {
	self->glVertex2i(x, y);
}

void QOpenGLFunctions_1_4_GlVertex2fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glVertex2fv(v);
}

void QOpenGLFunctions_1_4_GlVertex2f(QOpenGLFunctions_1_4* self, float x, float y) {
	self->glVertex2f(x, y);
}

void QOpenGLFunctions_1_4_GlVertex2dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glVertex2dv(v);
}

void QOpenGLFunctions_1_4_GlVertex2d(QOpenGLFunctions_1_4* self, double x, double y) {
	self->glVertex2d(x, y);
}

void QOpenGLFunctions_1_4_GlTexCoord4sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glTexCoord4sv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord4s(QOpenGLFunctions_1_4* self, int16_t s, int16_t t, int16_t r, int16_t q) {
	self->glTexCoord4s(s, t, r, q);
}

void QOpenGLFunctions_1_4_GlTexCoord4iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glTexCoord4iv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord4i(QOpenGLFunctions_1_4* self, int32_t s, int32_t t, int32_t r, int32_t q) {
	self->glTexCoord4i(s, t, r, q);
}

void QOpenGLFunctions_1_4_GlTexCoord4fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glTexCoord4fv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord4f(QOpenGLFunctions_1_4* self, float s, float t, float r, float q) {
	self->glTexCoord4f(s, t, r, q);
}

void QOpenGLFunctions_1_4_GlTexCoord4dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glTexCoord4dv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord4d(QOpenGLFunctions_1_4* self, double s, double t, double r, double q) {
	self->glTexCoord4d(s, t, r, q);
}

void QOpenGLFunctions_1_4_GlTexCoord3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glTexCoord3sv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord3s(QOpenGLFunctions_1_4* self, int16_t s, int16_t t, int16_t r) {
	self->glTexCoord3s(s, t, r);
}

void QOpenGLFunctions_1_4_GlTexCoord3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glTexCoord3iv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord3i(QOpenGLFunctions_1_4* self, int32_t s, int32_t t, int32_t r) {
	self->glTexCoord3i(s, t, r);
}

void QOpenGLFunctions_1_4_GlTexCoord3fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glTexCoord3fv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord3f(QOpenGLFunctions_1_4* self, float s, float t, float r) {
	self->glTexCoord3f(s, t, r);
}

void QOpenGLFunctions_1_4_GlTexCoord3dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glTexCoord3dv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord3d(QOpenGLFunctions_1_4* self, double s, double t, double r) {
	self->glTexCoord3d(s, t, r);
}

void QOpenGLFunctions_1_4_GlTexCoord2sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glTexCoord2sv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord2s(QOpenGLFunctions_1_4* self, int16_t s, int16_t t) {
	self->glTexCoord2s(s, t);
}

void QOpenGLFunctions_1_4_GlTexCoord2iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glTexCoord2iv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord2i(QOpenGLFunctions_1_4* self, int32_t s, int32_t t) {
	self->glTexCoord2i(s, t);
}

void QOpenGLFunctions_1_4_GlTexCoord2fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glTexCoord2fv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord2f(QOpenGLFunctions_1_4* self, float s, float t) {
	self->glTexCoord2f(s, t);
}

void QOpenGLFunctions_1_4_GlTexCoord2dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glTexCoord2dv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord2d(QOpenGLFunctions_1_4* self, double s, double t) {
	self->glTexCoord2d(s, t);
}

void QOpenGLFunctions_1_4_GlTexCoord1sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glTexCoord1sv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord1s(QOpenGLFunctions_1_4* self, int16_t s) {
	self->glTexCoord1s(s);
}

void QOpenGLFunctions_1_4_GlTexCoord1iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glTexCoord1iv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord1i(QOpenGLFunctions_1_4* self, int32_t s) {
	self->glTexCoord1i(s);
}

void QOpenGLFunctions_1_4_GlTexCoord1fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glTexCoord1fv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord1f(QOpenGLFunctions_1_4* self, float s) {
	self->glTexCoord1f(s);
}

void QOpenGLFunctions_1_4_GlTexCoord1dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glTexCoord1dv(v);
}

void QOpenGLFunctions_1_4_GlTexCoord1d(QOpenGLFunctions_1_4* self, double s) {
	self->glTexCoord1d(s);
}

void QOpenGLFunctions_1_4_GlRectsv(QOpenGLFunctions_1_4* self, const int16_t* v1, const int16_t* v2) {
	self->glRectsv(v1, v2);
}

void QOpenGLFunctions_1_4_GlRects(QOpenGLFunctions_1_4* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
	self->glRects(x1, y1, x2, y2);
}

void QOpenGLFunctions_1_4_GlRectiv(QOpenGLFunctions_1_4* self, const int32_t* v1, const int32_t* v2) {
	self->glRectiv(v1, v2);
}

void QOpenGLFunctions_1_4_GlRecti(QOpenGLFunctions_1_4* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	self->glRecti(x1, y1, x2, y2);
}

void QOpenGLFunctions_1_4_GlRectfv(QOpenGLFunctions_1_4* self, const float* v1, const float* v2) {
	self->glRectfv(v1, v2);
}

void QOpenGLFunctions_1_4_GlRectf(QOpenGLFunctions_1_4* self, float x1, float y1, float x2, float y2) {
	self->glRectf(x1, y1, x2, y2);
}

void QOpenGLFunctions_1_4_GlRectdv(QOpenGLFunctions_1_4* self, const double* v1, const double* v2) {
	self->glRectdv(v1, v2);
}

void QOpenGLFunctions_1_4_GlRectd(QOpenGLFunctions_1_4* self, double x1, double y1, double x2, double y2) {
	self->glRectd(x1, y1, x2, y2);
}

void QOpenGLFunctions_1_4_GlRasterPos4sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glRasterPos4sv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos4s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glRasterPos4s(x, y, z, w);
}

void QOpenGLFunctions_1_4_GlRasterPos4iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glRasterPos4iv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos4i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glRasterPos4i(x, y, z, w);
}

void QOpenGLFunctions_1_4_GlRasterPos4fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glRasterPos4fv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos4f(QOpenGLFunctions_1_4* self, float x, float y, float z, float w) {
	self->glRasterPos4f(x, y, z, w);
}

void QOpenGLFunctions_1_4_GlRasterPos4dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glRasterPos4dv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos4d(QOpenGLFunctions_1_4* self, double x, double y, double z, double w) {
	self->glRasterPos4d(x, y, z, w);
}

void QOpenGLFunctions_1_4_GlRasterPos3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glRasterPos3sv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos3s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z) {
	self->glRasterPos3s(x, y, z);
}

void QOpenGLFunctions_1_4_GlRasterPos3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glRasterPos3iv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos3i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z) {
	self->glRasterPos3i(x, y, z);
}

void QOpenGLFunctions_1_4_GlRasterPos3fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glRasterPos3fv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos3f(QOpenGLFunctions_1_4* self, float x, float y, float z) {
	self->glRasterPos3f(x, y, z);
}

void QOpenGLFunctions_1_4_GlRasterPos3dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glRasterPos3dv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos3d(QOpenGLFunctions_1_4* self, double x, double y, double z) {
	self->glRasterPos3d(x, y, z);
}

void QOpenGLFunctions_1_4_GlRasterPos2sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glRasterPos2sv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos2s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y) {
	self->glRasterPos2s(x, y);
}

void QOpenGLFunctions_1_4_GlRasterPos2iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glRasterPos2iv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos2i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y) {
	self->glRasterPos2i(x, y);
}

void QOpenGLFunctions_1_4_GlRasterPos2fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glRasterPos2fv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos2f(QOpenGLFunctions_1_4* self, float x, float y) {
	self->glRasterPos2f(x, y);
}

void QOpenGLFunctions_1_4_GlRasterPos2dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glRasterPos2dv(v);
}

void QOpenGLFunctions_1_4_GlRasterPos2d(QOpenGLFunctions_1_4* self, double x, double y) {
	self->glRasterPos2d(x, y);
}

void QOpenGLFunctions_1_4_GlNormal3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glNormal3sv(v);
}

void QOpenGLFunctions_1_4_GlNormal3s(QOpenGLFunctions_1_4* self, int16_t nx, int16_t ny, int16_t nz) {
	self->glNormal3s(nx, ny, nz);
}

void QOpenGLFunctions_1_4_GlNormal3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glNormal3iv(v);
}

void QOpenGLFunctions_1_4_GlNormal3i(QOpenGLFunctions_1_4* self, int32_t nx, int32_t ny, int32_t nz) {
	self->glNormal3i(nx, ny, nz);
}

void QOpenGLFunctions_1_4_GlNormal3fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glNormal3fv(v);
}

void QOpenGLFunctions_1_4_GlNormal3f(QOpenGLFunctions_1_4* self, float nx, float ny, float nz) {
	self->glNormal3f(nx, ny, nz);
}

void QOpenGLFunctions_1_4_GlNormal3dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glNormal3dv(v);
}

void QOpenGLFunctions_1_4_GlNormal3d(QOpenGLFunctions_1_4* self, double nx, double ny, double nz) {
	self->glNormal3d(nx, ny, nz);
}

void QOpenGLFunctions_1_4_GlNormal3bv(QOpenGLFunctions_1_4* self, const signed char* v) {
	self->glNormal3bv(v);
}

void QOpenGLFunctions_1_4_GlNormal3b(QOpenGLFunctions_1_4* self, signed char nx, signed char ny, signed char nz) {
	self->glNormal3b(nx, ny, nz);
}

void QOpenGLFunctions_1_4_GlIndexsv(QOpenGLFunctions_1_4* self, const int16_t* c) {
	self->glIndexsv(c);
}

void QOpenGLFunctions_1_4_GlIndexs(QOpenGLFunctions_1_4* self, int16_t c) {
	self->glIndexs(c);
}

void QOpenGLFunctions_1_4_GlIndexiv(QOpenGLFunctions_1_4* self, const int32_t* c) {
	self->glIndexiv(c);
}

void QOpenGLFunctions_1_4_GlIndexi(QOpenGLFunctions_1_4* self, int32_t c) {
	self->glIndexi(c);
}

void QOpenGLFunctions_1_4_GlIndexfv(QOpenGLFunctions_1_4* self, const float* c) {
	self->glIndexfv(c);
}

void QOpenGLFunctions_1_4_GlIndexf(QOpenGLFunctions_1_4* self, float c) {
	self->glIndexf(c);
}

void QOpenGLFunctions_1_4_GlIndexdv(QOpenGLFunctions_1_4* self, const double* c) {
	self->glIndexdv(c);
}

void QOpenGLFunctions_1_4_GlIndexd(QOpenGLFunctions_1_4* self, double c) {
	self->glIndexd(c);
}

void QOpenGLFunctions_1_4_GlEnd(QOpenGLFunctions_1_4* self) {
	self->glEnd();
}

void QOpenGLFunctions_1_4_GlEdgeFlagv(QOpenGLFunctions_1_4* self, const unsigned char* flag) {
	self->glEdgeFlagv(flag);
}

void QOpenGLFunctions_1_4_GlEdgeFlag(QOpenGLFunctions_1_4* self, unsigned char flag) {
	self->glEdgeFlag(flag);
}

void QOpenGLFunctions_1_4_GlColor4usv(QOpenGLFunctions_1_4* self, const uint16_t* v) {
	self->glColor4usv(v);
}

void QOpenGLFunctions_1_4_GlColor4us(QOpenGLFunctions_1_4* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
	self->glColor4us(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlColor4uiv(QOpenGLFunctions_1_4* self, const uint32_t* v) {
	self->glColor4uiv(v);
}

void QOpenGLFunctions_1_4_GlColor4ui(QOpenGLFunctions_1_4* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
	self->glColor4ui(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlColor4ubv(QOpenGLFunctions_1_4* self, const uint8_t* v) {
	self->glColor4ubv(v);
}

void QOpenGLFunctions_1_4_GlColor4ub(QOpenGLFunctions_1_4* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
	self->glColor4ub(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlColor4sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glColor4sv(v);
}

void QOpenGLFunctions_1_4_GlColor4s(QOpenGLFunctions_1_4* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
	self->glColor4s(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlColor4iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glColor4iv(v);
}

void QOpenGLFunctions_1_4_GlColor4i(QOpenGLFunctions_1_4* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
	self->glColor4i(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlColor4fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glColor4fv(v);
}

void QOpenGLFunctions_1_4_GlColor4f(QOpenGLFunctions_1_4* self, float red, float green, float blue, float alpha) {
	self->glColor4f(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlColor4dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glColor4dv(v);
}

void QOpenGLFunctions_1_4_GlColor4d(QOpenGLFunctions_1_4* self, double red, double green, double blue, double alpha) {
	self->glColor4d(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlColor4bv(QOpenGLFunctions_1_4* self, const signed char* v) {
	self->glColor4bv(v);
}

void QOpenGLFunctions_1_4_GlColor4b(QOpenGLFunctions_1_4* self, signed char red, signed char green, signed char blue, signed char alpha) {
	self->glColor4b(red, green, blue, alpha);
}

void QOpenGLFunctions_1_4_GlColor3usv(QOpenGLFunctions_1_4* self, const uint16_t* v) {
	self->glColor3usv(v);
}

void QOpenGLFunctions_1_4_GlColor3us(QOpenGLFunctions_1_4* self, uint16_t red, uint16_t green, uint16_t blue) {
	self->glColor3us(red, green, blue);
}

void QOpenGLFunctions_1_4_GlColor3uiv(QOpenGLFunctions_1_4* self, const uint32_t* v) {
	self->glColor3uiv(v);
}

void QOpenGLFunctions_1_4_GlColor3ui(QOpenGLFunctions_1_4* self, uint32_t red, uint32_t green, uint32_t blue) {
	self->glColor3ui(red, green, blue);
}

void QOpenGLFunctions_1_4_GlColor3ubv(QOpenGLFunctions_1_4* self, const uint8_t* v) {
	self->glColor3ubv(v);
}

void QOpenGLFunctions_1_4_GlColor3ub(QOpenGLFunctions_1_4* self, uint8_t red, uint8_t green, uint8_t blue) {
	self->glColor3ub(red, green, blue);
}

void QOpenGLFunctions_1_4_GlColor3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glColor3sv(v);
}

void QOpenGLFunctions_1_4_GlColor3s(QOpenGLFunctions_1_4* self, int16_t red, int16_t green, int16_t blue) {
	self->glColor3s(red, green, blue);
}

void QOpenGLFunctions_1_4_GlColor3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glColor3iv(v);
}

void QOpenGLFunctions_1_4_GlColor3i(QOpenGLFunctions_1_4* self, int32_t red, int32_t green, int32_t blue) {
	self->glColor3i(red, green, blue);
}

void QOpenGLFunctions_1_4_GlColor3fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glColor3fv(v);
}

void QOpenGLFunctions_1_4_GlColor3f(QOpenGLFunctions_1_4* self, float red, float green, float blue) {
	self->glColor3f(red, green, blue);
}

void QOpenGLFunctions_1_4_GlColor3dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glColor3dv(v);
}

void QOpenGLFunctions_1_4_GlColor3d(QOpenGLFunctions_1_4* self, double red, double green, double blue) {
	self->glColor3d(red, green, blue);
}

void QOpenGLFunctions_1_4_GlColor3bv(QOpenGLFunctions_1_4* self, const signed char* v) {
	self->glColor3bv(v);
}

void QOpenGLFunctions_1_4_GlColor3b(QOpenGLFunctions_1_4* self, signed char red, signed char green, signed char blue) {
	self->glColor3b(red, green, blue);
}

void QOpenGLFunctions_1_4_GlBitmap(QOpenGLFunctions_1_4* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, const uint8_t* bitmap) {
	self->glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void QOpenGLFunctions_1_4_GlBegin(QOpenGLFunctions_1_4* self, uint32_t mode) {
	self->glBegin(mode);
}

void QOpenGLFunctions_1_4_GlListBase(QOpenGLFunctions_1_4* self, uint32_t base) {
	self->glListBase(base);
}

uint32_t QOpenGLFunctions_1_4_GlGenLists(QOpenGLFunctions_1_4* self, int32_t range) {
	return self->glGenLists(range);
}

void QOpenGLFunctions_1_4_GlDeleteLists(QOpenGLFunctions_1_4* self, uint32_t list, int32_t range) {
	self->glDeleteLists(list, range);
}

void QOpenGLFunctions_1_4_GlCallLists(QOpenGLFunctions_1_4* self, int32_t n, uint32_t typeVal, const void* lists) {
	self->glCallLists(n, typeVal, lists);
}

void QOpenGLFunctions_1_4_GlCallList(QOpenGLFunctions_1_4* self, uint32_t list) {
	self->glCallList(list);
}

void QOpenGLFunctions_1_4_GlEndList(QOpenGLFunctions_1_4* self) {
	self->glEndList();
}

void QOpenGLFunctions_1_4_GlNewList(QOpenGLFunctions_1_4* self, uint32_t list, uint32_t mode) {
	self->glNewList(list, mode);
}

void QOpenGLFunctions_1_4_GlPushClientAttrib(QOpenGLFunctions_1_4* self, uint32_t mask) {
	self->glPushClientAttrib(mask);
}

void QOpenGLFunctions_1_4_GlPopClientAttrib(QOpenGLFunctions_1_4* self) {
	self->glPopClientAttrib();
}

void QOpenGLFunctions_1_4_GlPrioritizeTextures(QOpenGLFunctions_1_4* self, int32_t n, const uint32_t* textures, const float* priorities) {
	self->glPrioritizeTextures(n, textures, priorities);
}

unsigned char QOpenGLFunctions_1_4_GlAreTexturesResident(QOpenGLFunctions_1_4* self, int32_t n, const uint32_t* textures, unsigned char* residences) {
	return self->glAreTexturesResident(n, textures, residences);
}

void QOpenGLFunctions_1_4_GlVertexPointer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_1_4_GlTexCoordPointer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glTexCoordPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_1_4_GlNormalPointer(QOpenGLFunctions_1_4* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glNormalPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_1_4_GlInterleavedArrays(QOpenGLFunctions_1_4* self, uint32_t format, int32_t stride, const void* pointer) {
	self->glInterleavedArrays(format, stride, pointer);
}

void QOpenGLFunctions_1_4_GlIndexPointer(QOpenGLFunctions_1_4* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glIndexPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_1_4_GlEnableClientState(QOpenGLFunctions_1_4* self, uint32_t array) {
	self->glEnableClientState(array);
}

void QOpenGLFunctions_1_4_GlEdgeFlagPointer(QOpenGLFunctions_1_4* self, int32_t stride, const void* pointer) {
	self->glEdgeFlagPointer(stride, pointer);
}

void QOpenGLFunctions_1_4_GlDisableClientState(QOpenGLFunctions_1_4* self, uint32_t array) {
	self->glDisableClientState(array);
}

void QOpenGLFunctions_1_4_GlColorPointer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glColorPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_1_4_GlArrayElement(QOpenGLFunctions_1_4* self, int32_t i) {
	self->glArrayElement(i);
}

void QOpenGLFunctions_1_4_GlResetMinmax(QOpenGLFunctions_1_4* self, uint32_t target) {
	self->glResetMinmax(target);
}

void QOpenGLFunctions_1_4_GlResetHistogram(QOpenGLFunctions_1_4* self, uint32_t target) {
	self->glResetHistogram(target);
}

void QOpenGLFunctions_1_4_GlMinmax(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, unsigned char sink) {
	self->glMinmax(target, internalformat, sink);
}

void QOpenGLFunctions_1_4_GlHistogram(QOpenGLFunctions_1_4* self, uint32_t target, int32_t width, uint32_t internalformat, unsigned char sink) {
	self->glHistogram(target, width, internalformat, sink);
}

void QOpenGLFunctions_1_4_GlGetMinmaxParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetMinmaxParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetMinmaxParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetMinmaxParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetMinmax(QOpenGLFunctions_1_4* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
	self->glGetMinmax(target, reset, format, typeVal, values);
}

void QOpenGLFunctions_1_4_GlGetHistogramParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetHistogramParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetHistogramParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetHistogramParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetHistogram(QOpenGLFunctions_1_4* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
	self->glGetHistogram(target, reset, format, typeVal, values);
}

void QOpenGLFunctions_1_4_GlSeparableFilter2D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* row, const void* column) {
	self->glSeparableFilter2D(target, internalformat, width, height, format, typeVal, row, column);
}

void QOpenGLFunctions_1_4_GlGetSeparableFilter(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t format, uint32_t typeVal, void* row, void* column, void* span) {
	self->glGetSeparableFilter(target, format, typeVal, row, column, span);
}

void QOpenGLFunctions_1_4_GlGetConvolutionParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetConvolutionParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetConvolutionParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetConvolutionParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetConvolutionFilter(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t format, uint32_t typeVal, void* image) {
	self->glGetConvolutionFilter(target, format, typeVal, image);
}

void QOpenGLFunctions_1_4_GlCopyConvolutionFilter2D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void QOpenGLFunctions_1_4_GlCopyConvolutionFilter1D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
	self->glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void QOpenGLFunctions_1_4_GlConvolutionParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glConvolutionParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlConvolutionParameteri(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t params) {
	self->glConvolutionParameteri(target, pname, params);
}

void QOpenGLFunctions_1_4_GlConvolutionParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const float* params) {
	self->glConvolutionParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlConvolutionParameterf(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float params) {
	self->glConvolutionParameterf(target, pname, params);
}

void QOpenGLFunctions_1_4_GlConvolutionFilter2D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* image) {
	self->glConvolutionFilter2D(target, internalformat, width, height, format, typeVal, image);
}

void QOpenGLFunctions_1_4_GlConvolutionFilter1D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* image) {
	self->glConvolutionFilter1D(target, internalformat, width, format, typeVal, image);
}

void QOpenGLFunctions_1_4_GlCopyColorSubTable(QOpenGLFunctions_1_4* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width) {
	self->glCopyColorSubTable(target, start, x, y, width);
}

void QOpenGLFunctions_1_4_GlColorSubTable(QOpenGLFunctions_1_4* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t typeVal, const void* data) {
	self->glColorSubTable(target, start, count, format, typeVal, data);
}

void QOpenGLFunctions_1_4_GlGetColorTableParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetColorTableParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetColorTableParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetColorTableParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlGetColorTable(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t format, uint32_t typeVal, void* table) {
	self->glGetColorTable(target, format, typeVal, table);
}

void QOpenGLFunctions_1_4_GlCopyColorTable(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
	self->glCopyColorTable(target, internalformat, x, y, width);
}

void QOpenGLFunctions_1_4_GlColorTableParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glColorTableParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlColorTableParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const float* params) {
	self->glColorTableParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_4_GlColorTable(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* table) {
	self->glColorTable(target, internalformat, width, format, typeVal, table);
}

void QOpenGLFunctions_1_4_GlMultTransposeMatrixd(QOpenGLFunctions_1_4* self, const double* m) {
	self->glMultTransposeMatrixd(m);
}

void QOpenGLFunctions_1_4_GlMultTransposeMatrixf(QOpenGLFunctions_1_4* self, const float* m) {
	self->glMultTransposeMatrixf(m);
}

void QOpenGLFunctions_1_4_GlLoadTransposeMatrixd(QOpenGLFunctions_1_4* self, const double* m) {
	self->glLoadTransposeMatrixd(m);
}

void QOpenGLFunctions_1_4_GlLoadTransposeMatrixf(QOpenGLFunctions_1_4* self, const float* m) {
	self->glLoadTransposeMatrixf(m);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4sv(QOpenGLFunctions_1_4* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord4sv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4s(QOpenGLFunctions_1_4* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q) {
	self->glMultiTexCoord4s(target, s, t, r, q);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4iv(QOpenGLFunctions_1_4* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord4iv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4i(QOpenGLFunctions_1_4* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q) {
	self->glMultiTexCoord4i(target, s, t, r, q);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4fv(QOpenGLFunctions_1_4* self, uint32_t target, const float* v) {
	self->glMultiTexCoord4fv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4f(QOpenGLFunctions_1_4* self, uint32_t target, float s, float t, float r, float q) {
	self->glMultiTexCoord4f(target, s, t, r, q);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4dv(QOpenGLFunctions_1_4* self, uint32_t target, const double* v) {
	self->glMultiTexCoord4dv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4d(QOpenGLFunctions_1_4* self, uint32_t target, double s, double t, double r, double q) {
	self->glMultiTexCoord4d(target, s, t, r, q);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3sv(QOpenGLFunctions_1_4* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord3sv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3s(QOpenGLFunctions_1_4* self, uint32_t target, int16_t s, int16_t t, int16_t r) {
	self->glMultiTexCoord3s(target, s, t, r);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3iv(QOpenGLFunctions_1_4* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord3iv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3i(QOpenGLFunctions_1_4* self, uint32_t target, int32_t s, int32_t t, int32_t r) {
	self->glMultiTexCoord3i(target, s, t, r);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3fv(QOpenGLFunctions_1_4* self, uint32_t target, const float* v) {
	self->glMultiTexCoord3fv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3f(QOpenGLFunctions_1_4* self, uint32_t target, float s, float t, float r) {
	self->glMultiTexCoord3f(target, s, t, r);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3dv(QOpenGLFunctions_1_4* self, uint32_t target, const double* v) {
	self->glMultiTexCoord3dv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3d(QOpenGLFunctions_1_4* self, uint32_t target, double s, double t, double r) {
	self->glMultiTexCoord3d(target, s, t, r);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2sv(QOpenGLFunctions_1_4* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord2sv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2s(QOpenGLFunctions_1_4* self, uint32_t target, int16_t s, int16_t t) {
	self->glMultiTexCoord2s(target, s, t);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2iv(QOpenGLFunctions_1_4* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord2iv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2i(QOpenGLFunctions_1_4* self, uint32_t target, int32_t s, int32_t t) {
	self->glMultiTexCoord2i(target, s, t);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2fv(QOpenGLFunctions_1_4* self, uint32_t target, const float* v) {
	self->glMultiTexCoord2fv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2f(QOpenGLFunctions_1_4* self, uint32_t target, float s, float t) {
	self->glMultiTexCoord2f(target, s, t);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2dv(QOpenGLFunctions_1_4* self, uint32_t target, const double* v) {
	self->glMultiTexCoord2dv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2d(QOpenGLFunctions_1_4* self, uint32_t target, double s, double t) {
	self->glMultiTexCoord2d(target, s, t);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1sv(QOpenGLFunctions_1_4* self, uint32_t target, const int16_t* v) {
	self->glMultiTexCoord1sv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1s(QOpenGLFunctions_1_4* self, uint32_t target, int16_t s) {
	self->glMultiTexCoord1s(target, s);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1iv(QOpenGLFunctions_1_4* self, uint32_t target, const int32_t* v) {
	self->glMultiTexCoord1iv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1i(QOpenGLFunctions_1_4* self, uint32_t target, int32_t s) {
	self->glMultiTexCoord1i(target, s);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1fv(QOpenGLFunctions_1_4* self, uint32_t target, const float* v) {
	self->glMultiTexCoord1fv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1f(QOpenGLFunctions_1_4* self, uint32_t target, float s) {
	self->glMultiTexCoord1f(target, s);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1dv(QOpenGLFunctions_1_4* self, uint32_t target, const double* v) {
	self->glMultiTexCoord1dv(target, v);
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1d(QOpenGLFunctions_1_4* self, uint32_t target, double s) {
	self->glMultiTexCoord1d(target, s);
}

void QOpenGLFunctions_1_4_GlClientActiveTexture(QOpenGLFunctions_1_4* self, uint32_t texture) {
	self->glClientActiveTexture(texture);
}

void QOpenGLFunctions_1_4_GlWindowPos3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glWindowPos3sv(v);
}

void QOpenGLFunctions_1_4_GlWindowPos3s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z) {
	self->glWindowPos3s(x, y, z);
}

void QOpenGLFunctions_1_4_GlWindowPos3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glWindowPos3iv(v);
}

void QOpenGLFunctions_1_4_GlWindowPos3i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z) {
	self->glWindowPos3i(x, y, z);
}

void QOpenGLFunctions_1_4_GlWindowPos3fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glWindowPos3fv(v);
}

void QOpenGLFunctions_1_4_GlWindowPos3f(QOpenGLFunctions_1_4* self, float x, float y, float z) {
	self->glWindowPos3f(x, y, z);
}

void QOpenGLFunctions_1_4_GlWindowPos3dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glWindowPos3dv(v);
}

void QOpenGLFunctions_1_4_GlWindowPos3d(QOpenGLFunctions_1_4* self, double x, double y, double z) {
	self->glWindowPos3d(x, y, z);
}

void QOpenGLFunctions_1_4_GlWindowPos2sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glWindowPos2sv(v);
}

void QOpenGLFunctions_1_4_GlWindowPos2s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y) {
	self->glWindowPos2s(x, y);
}

void QOpenGLFunctions_1_4_GlWindowPos2iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glWindowPos2iv(v);
}

void QOpenGLFunctions_1_4_GlWindowPos2i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y) {
	self->glWindowPos2i(x, y);
}

void QOpenGLFunctions_1_4_GlWindowPos2fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glWindowPos2fv(v);
}

void QOpenGLFunctions_1_4_GlWindowPos2f(QOpenGLFunctions_1_4* self, float x, float y) {
	self->glWindowPos2f(x, y);
}

void QOpenGLFunctions_1_4_GlWindowPos2dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glWindowPos2dv(v);
}

void QOpenGLFunctions_1_4_GlWindowPos2d(QOpenGLFunctions_1_4* self, double x, double y) {
	self->glWindowPos2d(x, y);
}

void QOpenGLFunctions_1_4_GlSecondaryColorPointer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glSecondaryColorPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3usv(QOpenGLFunctions_1_4* self, const uint16_t* v) {
	self->glSecondaryColor3usv(v);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3us(QOpenGLFunctions_1_4* self, uint16_t red, uint16_t green, uint16_t blue) {
	self->glSecondaryColor3us(red, green, blue);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3uiv(QOpenGLFunctions_1_4* self, const uint32_t* v) {
	self->glSecondaryColor3uiv(v);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3ui(QOpenGLFunctions_1_4* self, uint32_t red, uint32_t green, uint32_t blue) {
	self->glSecondaryColor3ui(red, green, blue);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3ubv(QOpenGLFunctions_1_4* self, const uint8_t* v) {
	self->glSecondaryColor3ubv(v);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3ub(QOpenGLFunctions_1_4* self, uint8_t red, uint8_t green, uint8_t blue) {
	self->glSecondaryColor3ub(red, green, blue);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
	self->glSecondaryColor3sv(v);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3s(QOpenGLFunctions_1_4* self, int16_t red, int16_t green, int16_t blue) {
	self->glSecondaryColor3s(red, green, blue);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
	self->glSecondaryColor3iv(v);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3i(QOpenGLFunctions_1_4* self, int32_t red, int32_t green, int32_t blue) {
	self->glSecondaryColor3i(red, green, blue);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3fv(QOpenGLFunctions_1_4* self, const float* v) {
	self->glSecondaryColor3fv(v);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3f(QOpenGLFunctions_1_4* self, float red, float green, float blue) {
	self->glSecondaryColor3f(red, green, blue);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3dv(QOpenGLFunctions_1_4* self, const double* v) {
	self->glSecondaryColor3dv(v);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3d(QOpenGLFunctions_1_4* self, double red, double green, double blue) {
	self->glSecondaryColor3d(red, green, blue);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3bv(QOpenGLFunctions_1_4* self, const signed char* v) {
	self->glSecondaryColor3bv(v);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3b(QOpenGLFunctions_1_4* self, signed char red, signed char green, signed char blue) {
	self->glSecondaryColor3b(red, green, blue);
}

void QOpenGLFunctions_1_4_GlFogCoordPointer(QOpenGLFunctions_1_4* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glFogCoordPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_1_4_GlFogCoorddv(QOpenGLFunctions_1_4* self, const double* coord) {
	self->glFogCoorddv(coord);
}

void QOpenGLFunctions_1_4_GlFogCoordd(QOpenGLFunctions_1_4* self, double coord) {
	self->glFogCoordd(coord);
}

void QOpenGLFunctions_1_4_GlFogCoordfv(QOpenGLFunctions_1_4* self, const float* coord) {
	self->glFogCoordfv(coord);
}

void QOpenGLFunctions_1_4_GlFogCoordf(QOpenGLFunctions_1_4* self, float coord) {
	self->glFogCoordf(coord);
}

// Base class handler implementation
bool QOpenGLFunctions_1_4_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_1_4* self) {
	auto* vqopenglfunctions_1_4 = dynamic_cast<VirtualQOpenGLFunctions_1_4*>(self);
	if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_InitializeOpenGLFunctions_IsBase(true);
	return vqopenglfunctions_1_4->initializeOpenGLFunctions();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_1_4_OnInitializeOpenGLFunctions(QOpenGLFunctions_1_4* self, intptr_t slot) {
	auto* vqopenglfunctions_1_4 = dynamic_cast<VirtualQOpenGLFunctions_1_4*>(self);
	if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_1_4::QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback>(slot));
}
}

void QOpenGLFunctions_1_4_Delete(QOpenGLFunctions_1_4* self) {
    delete self;
}

