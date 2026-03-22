#include <QOpenGLFunctions_1_1>
#include <qopenglfunctions_1_1.h>
#include "libqopenglfunctions_1_1.h"
#include "libqopenglfunctions_1_1.hxx"

QOpenGLFunctions_1_1* QOpenGLFunctions_1_1_new() {
	 return new VirtualQOpenGLFunctions_1_1();
}

bool QOpenGLFunctions_1_1_InitializeOpenGLFunctions(QOpenGLFunctions_1_1* self) {
	return self->initializeOpenGLFunctions();
}

void QOpenGLFunctions_1_1_GlViewport(QOpenGLFunctions_1_1* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glViewport(x, y, width, height);
}

void QOpenGLFunctions_1_1_GlDepthRange(QOpenGLFunctions_1_1* self, double nearVal, double farVal) {
	self->glDepthRange(nearVal, farVal);
}

unsigned char QOpenGLFunctions_1_1_GlIsEnabled(QOpenGLFunctions_1_1* self, uint32_t cap) {
	return self->glIsEnabled(cap);
}

void QOpenGLFunctions_1_1_GlGetTexLevelParameteriv(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
	self->glGetTexLevelParameteriv(target, level, pname, params);
}

void QOpenGLFunctions_1_1_GlGetTexLevelParameterfv(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
	self->glGetTexLevelParameterfv(target, level, pname, params);
}

void QOpenGLFunctions_1_1_GlGetTexParameteriv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_1_GlGetTexParameterfv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_1_GlGetTexImage(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glGetTexImage(target, level, format, typeVal, pixels);
}

const uint8_t* QOpenGLFunctions_1_1_GlGetString(QOpenGLFunctions_1_1* self, uint32_t name) {
	return self->glGetString(name);
}

void QOpenGLFunctions_1_1_GlGetIntegerv(QOpenGLFunctions_1_1* self, uint32_t pname, int32_t* params) {
	self->glGetIntegerv(pname, params);
}

void QOpenGLFunctions_1_1_GlGetFloatv(QOpenGLFunctions_1_1* self, uint32_t pname, float* params) {
	self->glGetFloatv(pname, params);
}

GL QOpenGLFunctions_1_1_GlGetError(QOpenGLFunctions_1_1* self) {
	return self->glGetError();
}

void QOpenGLFunctions_1_1_GlGetDoublev(QOpenGLFunctions_1_1* self, uint32_t pname, double* params) {
	self->glGetDoublev(pname, params);
}

void QOpenGLFunctions_1_1_GlGetBooleanv(QOpenGLFunctions_1_1* self, uint32_t pname, unsigned char* params) {
	self->glGetBooleanv(pname, params);
}

void QOpenGLFunctions_1_1_GlReadPixels(QOpenGLFunctions_1_1* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
	self->glReadPixels(x, y, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_1_1_GlReadBuffer(QOpenGLFunctions_1_1* self, uint32_t mode) {
	self->glReadBuffer(mode);
}

void QOpenGLFunctions_1_1_GlPixelStorei(QOpenGLFunctions_1_1* self, uint32_t pname, int32_t param) {
	self->glPixelStorei(pname, param);
}

void QOpenGLFunctions_1_1_GlPixelStoref(QOpenGLFunctions_1_1* self, uint32_t pname, float param) {
	self->glPixelStoref(pname, param);
}

void QOpenGLFunctions_1_1_GlDepthFunc(QOpenGLFunctions_1_1* self, uint32_t func) {
	self->glDepthFunc(func);
}

void QOpenGLFunctions_1_1_GlStencilOp(QOpenGLFunctions_1_1* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
	self->glStencilOp(fail, zfail, zpass);
}

void QOpenGLFunctions_1_1_GlStencilFunc(QOpenGLFunctions_1_1* self, uint32_t func, int32_t ref, uint32_t mask) {
	self->glStencilFunc(func, ref, mask);
}

void QOpenGLFunctions_1_1_GlLogicOp(QOpenGLFunctions_1_1* self, uint32_t opcode) {
	self->glLogicOp(opcode);
}

void QOpenGLFunctions_1_1_GlBlendFunc(QOpenGLFunctions_1_1* self, uint32_t sfactor, uint32_t dfactor) {
	self->glBlendFunc(sfactor, dfactor);
}

void QOpenGLFunctions_1_1_GlFlush(QOpenGLFunctions_1_1* self) {
	self->glFlush();
}

void QOpenGLFunctions_1_1_GlFinish(QOpenGLFunctions_1_1* self) {
	self->glFinish();
}

void QOpenGLFunctions_1_1_GlEnable(QOpenGLFunctions_1_1* self, uint32_t cap) {
	self->glEnable(cap);
}

void QOpenGLFunctions_1_1_GlDisable(QOpenGLFunctions_1_1* self, uint32_t cap) {
	self->glDisable(cap);
}

void QOpenGLFunctions_1_1_GlDepthMask(QOpenGLFunctions_1_1* self, unsigned char flag) {
	self->glDepthMask(flag);
}

void QOpenGLFunctions_1_1_GlColorMask(QOpenGLFunctions_1_1* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	self->glColorMask(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlStencilMask(QOpenGLFunctions_1_1* self, uint32_t mask) {
	self->glStencilMask(mask);
}

void QOpenGLFunctions_1_1_GlClearDepth(QOpenGLFunctions_1_1* self, double depth) {
	self->glClearDepth(depth);
}

void QOpenGLFunctions_1_1_GlClearStencil(QOpenGLFunctions_1_1* self, int32_t s) {
	self->glClearStencil(s);
}

void QOpenGLFunctions_1_1_GlClearColor(QOpenGLFunctions_1_1* self, float red, float green, float blue, float alpha) {
	self->glClearColor(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlClear(QOpenGLFunctions_1_1* self, uint32_t mask) {
	self->glClear(mask);
}

void QOpenGLFunctions_1_1_GlDrawBuffer(QOpenGLFunctions_1_1* self, uint32_t mode) {
	self->glDrawBuffer(mode);
}

void QOpenGLFunctions_1_1_GlTexImage2D(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage2D(target, level, internalformat, width, height, border, format, typeVal, pixels);
}

void QOpenGLFunctions_1_1_GlTexImage1D(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage1D(target, level, internalformat, width, border, format, typeVal, pixels);
}

void QOpenGLFunctions_1_1_GlTexParameteriv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameteriv(target, pname, params);
}

void QOpenGLFunctions_1_1_GlTexParameteri(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexParameteri(target, pname, param);
}

void QOpenGLFunctions_1_1_GlTexParameterfv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexParameterfv(target, pname, params);
}

void QOpenGLFunctions_1_1_GlTexParameterf(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, float param) {
	self->glTexParameterf(target, pname, param);
}

void QOpenGLFunctions_1_1_GlScissor(QOpenGLFunctions_1_1* self, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glScissor(x, y, width, height);
}

void QOpenGLFunctions_1_1_GlPolygonMode(QOpenGLFunctions_1_1* self, uint32_t face, uint32_t mode) {
	self->glPolygonMode(face, mode);
}

void QOpenGLFunctions_1_1_GlPointSize(QOpenGLFunctions_1_1* self, float size) {
	self->glPointSize(size);
}

void QOpenGLFunctions_1_1_GlLineWidth(QOpenGLFunctions_1_1* self, float width) {
	self->glLineWidth(width);
}

void QOpenGLFunctions_1_1_GlHint(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t mode) {
	self->glHint(target, mode);
}

void QOpenGLFunctions_1_1_GlFrontFace(QOpenGLFunctions_1_1* self, uint32_t mode) {
	self->glFrontFace(mode);
}

void QOpenGLFunctions_1_1_GlCullFace(QOpenGLFunctions_1_1* self, uint32_t mode) {
	self->glCullFace(mode);
}

void QOpenGLFunctions_1_1_GlIndexubv(QOpenGLFunctions_1_1* self, const uint8_t* c) {
	self->glIndexubv(c);
}

void QOpenGLFunctions_1_1_GlIndexub(QOpenGLFunctions_1_1* self, uint8_t c) {
	self->glIndexub(c);
}

unsigned char QOpenGLFunctions_1_1_GlIsTexture(QOpenGLFunctions_1_1* self, uint32_t texture) {
	return self->glIsTexture(texture);
}

void QOpenGLFunctions_1_1_GlGenTextures(QOpenGLFunctions_1_1* self, int32_t n, uint32_t* textures) {
	self->glGenTextures(n, textures);
}

void QOpenGLFunctions_1_1_GlDeleteTextures(QOpenGLFunctions_1_1* self, int32_t n, const uint32_t* textures) {
	self->glDeleteTextures(n, textures);
}

void QOpenGLFunctions_1_1_GlBindTexture(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t texture) {
	self->glBindTexture(target, texture);
}

void QOpenGLFunctions_1_1_GlTexSubImage2D(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_1_1_GlTexSubImage1D(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage1D(target, level, xoffset, width, format, typeVal, pixels);
}

void QOpenGLFunctions_1_1_GlCopyTexSubImage2D(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void QOpenGLFunctions_1_1_GlCopyTexSubImage1D(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
	self->glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void QOpenGLFunctions_1_1_GlCopyTexImage2D(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
	self->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void QOpenGLFunctions_1_1_GlCopyTexImage1D(QOpenGLFunctions_1_1* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
	self->glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void QOpenGLFunctions_1_1_GlPolygonOffset(QOpenGLFunctions_1_1* self, float factor, float units) {
	self->glPolygonOffset(factor, units);
}

void QOpenGLFunctions_1_1_GlGetPointerv(QOpenGLFunctions_1_1* self, uint32_t pname, void** params) {
	self->glGetPointerv(pname, params);
}

void QOpenGLFunctions_1_1_GlDrawElements(QOpenGLFunctions_1_1* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawElements(mode, count, typeVal, indices);
}

void QOpenGLFunctions_1_1_GlDrawArrays(QOpenGLFunctions_1_1* self, uint32_t mode, int32_t first, int32_t count) {
	self->glDrawArrays(mode, first, count);
}

void QOpenGLFunctions_1_1_GlTranslatef(QOpenGLFunctions_1_1* self, float x, float y, float z) {
	self->glTranslatef(x, y, z);
}

void QOpenGLFunctions_1_1_GlTranslated(QOpenGLFunctions_1_1* self, double x, double y, double z) {
	self->glTranslated(x, y, z);
}

void QOpenGLFunctions_1_1_GlScalef(QOpenGLFunctions_1_1* self, float x, float y, float z) {
	self->glScalef(x, y, z);
}

void QOpenGLFunctions_1_1_GlScaled(QOpenGLFunctions_1_1* self, double x, double y, double z) {
	self->glScaled(x, y, z);
}

void QOpenGLFunctions_1_1_GlRotatef(QOpenGLFunctions_1_1* self, float angle, float x, float y, float z) {
	self->glRotatef(angle, x, y, z);
}

void QOpenGLFunctions_1_1_GlRotated(QOpenGLFunctions_1_1* self, double angle, double x, double y, double z) {
	self->glRotated(angle, x, y, z);
}

void QOpenGLFunctions_1_1_GlPushMatrix(QOpenGLFunctions_1_1* self) {
	self->glPushMatrix();
}

void QOpenGLFunctions_1_1_GlPopMatrix(QOpenGLFunctions_1_1* self) {
	self->glPopMatrix();
}

void QOpenGLFunctions_1_1_GlOrtho(QOpenGLFunctions_1_1* self, double left, double right, double bottom, double top, double zNear, double zFar) {
	self->glOrtho(left, right, bottom, top, zNear, zFar);
}

void QOpenGLFunctions_1_1_GlMultMatrixd(QOpenGLFunctions_1_1* self, const double* m) {
	self->glMultMatrixd(m);
}

void QOpenGLFunctions_1_1_GlMultMatrixf(QOpenGLFunctions_1_1* self, const float* m) {
	self->glMultMatrixf(m);
}

void QOpenGLFunctions_1_1_GlMatrixMode(QOpenGLFunctions_1_1* self, uint32_t mode) {
	self->glMatrixMode(mode);
}

void QOpenGLFunctions_1_1_GlLoadMatrixd(QOpenGLFunctions_1_1* self, const double* m) {
	self->glLoadMatrixd(m);
}

void QOpenGLFunctions_1_1_GlLoadMatrixf(QOpenGLFunctions_1_1* self, const float* m) {
	self->glLoadMatrixf(m);
}

void QOpenGLFunctions_1_1_GlLoadIdentity(QOpenGLFunctions_1_1* self) {
	self->glLoadIdentity();
}

void QOpenGLFunctions_1_1_GlFrustum(QOpenGLFunctions_1_1* self, double left, double right, double bottom, double top, double zNear, double zFar) {
	self->glFrustum(left, right, bottom, top, zNear, zFar);
}

unsigned char QOpenGLFunctions_1_1_GlIsList(QOpenGLFunctions_1_1* self, uint32_t list) {
	return self->glIsList(list);
}

void QOpenGLFunctions_1_1_GlGetTexGeniv(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, int32_t* params) {
	self->glGetTexGeniv(coord, pname, params);
}

void QOpenGLFunctions_1_1_GlGetTexGenfv(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, float* params) {
	self->glGetTexGenfv(coord, pname, params);
}

void QOpenGLFunctions_1_1_GlGetTexGendv(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, double* params) {
	self->glGetTexGendv(coord, pname, params);
}

void QOpenGLFunctions_1_1_GlGetTexEnviv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexEnviv(target, pname, params);
}

void QOpenGLFunctions_1_1_GlGetTexEnvfv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, float* params) {
	self->glGetTexEnvfv(target, pname, params);
}

void QOpenGLFunctions_1_1_GlGetPolygonStipple(QOpenGLFunctions_1_1* self, uint8_t* mask) {
	self->glGetPolygonStipple(mask);
}

void QOpenGLFunctions_1_1_GlGetPixelMapusv(QOpenGLFunctions_1_1* self, uint32_t mapVal, uint16_t* values) {
	self->glGetPixelMapusv(mapVal, values);
}

void QOpenGLFunctions_1_1_GlGetPixelMapuiv(QOpenGLFunctions_1_1* self, uint32_t mapVal, uint32_t* values) {
	self->glGetPixelMapuiv(mapVal, values);
}

void QOpenGLFunctions_1_1_GlGetPixelMapfv(QOpenGLFunctions_1_1* self, uint32_t mapVal, float* values) {
	self->glGetPixelMapfv(mapVal, values);
}

void QOpenGLFunctions_1_1_GlGetMaterialiv(QOpenGLFunctions_1_1* self, uint32_t face, uint32_t pname, int32_t* params) {
	self->glGetMaterialiv(face, pname, params);
}

void QOpenGLFunctions_1_1_GlGetMaterialfv(QOpenGLFunctions_1_1* self, uint32_t face, uint32_t pname, float* params) {
	self->glGetMaterialfv(face, pname, params);
}

void QOpenGLFunctions_1_1_GlGetMapiv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t query, int32_t* v) {
	self->glGetMapiv(target, query, v);
}

void QOpenGLFunctions_1_1_GlGetMapfv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t query, float* v) {
	self->glGetMapfv(target, query, v);
}

void QOpenGLFunctions_1_1_GlGetMapdv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t query, double* v) {
	self->glGetMapdv(target, query, v);
}

void QOpenGLFunctions_1_1_GlGetLightiv(QOpenGLFunctions_1_1* self, uint32_t light, uint32_t pname, int32_t* params) {
	self->glGetLightiv(light, pname, params);
}

void QOpenGLFunctions_1_1_GlGetLightfv(QOpenGLFunctions_1_1* self, uint32_t light, uint32_t pname, float* params) {
	self->glGetLightfv(light, pname, params);
}

void QOpenGLFunctions_1_1_GlGetClipPlane(QOpenGLFunctions_1_1* self, uint32_t plane, double* equation) {
	self->glGetClipPlane(plane, equation);
}

void QOpenGLFunctions_1_1_GlDrawPixels(QOpenGLFunctions_1_1* self, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glDrawPixels(width, height, format, typeVal, pixels);
}

void QOpenGLFunctions_1_1_GlCopyPixels(QOpenGLFunctions_1_1* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t typeVal) {
	self->glCopyPixels(x, y, width, height, typeVal);
}

void QOpenGLFunctions_1_1_GlPixelMapusv(QOpenGLFunctions_1_1* self, uint32_t mapVal, int32_t mapsize, const uint16_t* values) {
	self->glPixelMapusv(mapVal, mapsize, values);
}

void QOpenGLFunctions_1_1_GlPixelMapuiv(QOpenGLFunctions_1_1* self, uint32_t mapVal, int32_t mapsize, const uint32_t* values) {
	self->glPixelMapuiv(mapVal, mapsize, values);
}

void QOpenGLFunctions_1_1_GlPixelMapfv(QOpenGLFunctions_1_1* self, uint32_t mapVal, int32_t mapsize, const float* values) {
	self->glPixelMapfv(mapVal, mapsize, values);
}

void QOpenGLFunctions_1_1_GlPixelTransferi(QOpenGLFunctions_1_1* self, uint32_t pname, int32_t param) {
	self->glPixelTransferi(pname, param);
}

void QOpenGLFunctions_1_1_GlPixelTransferf(QOpenGLFunctions_1_1* self, uint32_t pname, float param) {
	self->glPixelTransferf(pname, param);
}

void QOpenGLFunctions_1_1_GlPixelZoom(QOpenGLFunctions_1_1* self, float xfactor, float yfactor) {
	self->glPixelZoom(xfactor, yfactor);
}

void QOpenGLFunctions_1_1_GlAlphaFunc(QOpenGLFunctions_1_1* self, uint32_t func, float ref) {
	self->glAlphaFunc(func, ref);
}

void QOpenGLFunctions_1_1_GlEvalPoint2(QOpenGLFunctions_1_1* self, int32_t i, int32_t j) {
	self->glEvalPoint2(i, j);
}

void QOpenGLFunctions_1_1_GlEvalMesh2(QOpenGLFunctions_1_1* self, uint32_t mode, int32_t i1Val, int32_t i2Val, int32_t j1, int32_t j2) {
	self->glEvalMesh2(mode, i1Val, i2Val, j1, j2);
}

void QOpenGLFunctions_1_1_GlEvalPoint1(QOpenGLFunctions_1_1* self, int32_t i) {
	self->glEvalPoint1(i);
}

void QOpenGLFunctions_1_1_GlEvalMesh1(QOpenGLFunctions_1_1* self, uint32_t mode, int32_t i1Val, int32_t i2Val) {
	self->glEvalMesh1(mode, i1Val, i2Val);
}

void QOpenGLFunctions_1_1_GlEvalCoord2fv(QOpenGLFunctions_1_1* self, const float* u) {
	self->glEvalCoord2fv(u);
}

void QOpenGLFunctions_1_1_GlEvalCoord2f(QOpenGLFunctions_1_1* self, float u, float v) {
	self->glEvalCoord2f(u, v);
}

void QOpenGLFunctions_1_1_GlEvalCoord2dv(QOpenGLFunctions_1_1* self, const double* u) {
	self->glEvalCoord2dv(u);
}

void QOpenGLFunctions_1_1_GlEvalCoord2d(QOpenGLFunctions_1_1* self, double u, double v) {
	self->glEvalCoord2d(u, v);
}

void QOpenGLFunctions_1_1_GlEvalCoord1fv(QOpenGLFunctions_1_1* self, const float* u) {
	self->glEvalCoord1fv(u);
}

void QOpenGLFunctions_1_1_GlEvalCoord1f(QOpenGLFunctions_1_1* self, float u) {
	self->glEvalCoord1f(u);
}

void QOpenGLFunctions_1_1_GlEvalCoord1dv(QOpenGLFunctions_1_1* self, const double* u) {
	self->glEvalCoord1dv(u);
}

void QOpenGLFunctions_1_1_GlEvalCoord1d(QOpenGLFunctions_1_1* self, double u) {
	self->glEvalCoord1d(u);
}

void QOpenGLFunctions_1_1_GlMapGrid2f(QOpenGLFunctions_1_1* self, int32_t un, float u1Val, float u2Val, int32_t vn, float v1, float v2) {
	self->glMapGrid2f(un, u1Val, u2Val, vn, v1, v2);
}

void QOpenGLFunctions_1_1_GlMapGrid2d(QOpenGLFunctions_1_1* self, int32_t un, double u1Val, double u2Val, int32_t vn, double v1, double v2) {
	self->glMapGrid2d(un, u1Val, u2Val, vn, v1, v2);
}

void QOpenGLFunctions_1_1_GlMapGrid1f(QOpenGLFunctions_1_1* self, int32_t un, float u1Val, float u2Val) {
	self->glMapGrid1f(un, u1Val, u2Val);
}

void QOpenGLFunctions_1_1_GlMapGrid1d(QOpenGLFunctions_1_1* self, int32_t un, double u1Val, double u2Val) {
	self->glMapGrid1d(un, u1Val, u2Val);
}

void QOpenGLFunctions_1_1_GlMap2f(QOpenGLFunctions_1_1* self, uint32_t target, float u1Val, float u2Val, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, const float* points) {
	self->glMap2f(target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, points);
}

void QOpenGLFunctions_1_1_GlMap2d(QOpenGLFunctions_1_1* self, uint32_t target, double u1Val, double u2Val, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, const double* points) {
	self->glMap2d(target, u1Val, u2Val, ustride, uorder, v1, v2, vstride, vorder, points);
}

void QOpenGLFunctions_1_1_GlMap1f(QOpenGLFunctions_1_1* self, uint32_t target, float u1Val, float u2Val, int32_t stride, int32_t order, const float* points) {
	self->glMap1f(target, u1Val, u2Val, stride, order, points);
}

void QOpenGLFunctions_1_1_GlMap1d(QOpenGLFunctions_1_1* self, uint32_t target, double u1Val, double u2Val, int32_t stride, int32_t order, const double* points) {
	self->glMap1d(target, u1Val, u2Val, stride, order, points);
}

void QOpenGLFunctions_1_1_GlPushAttrib(QOpenGLFunctions_1_1* self, uint32_t mask) {
	self->glPushAttrib(mask);
}

void QOpenGLFunctions_1_1_GlPopAttrib(QOpenGLFunctions_1_1* self) {
	self->glPopAttrib();
}

void QOpenGLFunctions_1_1_GlAccum(QOpenGLFunctions_1_1* self, uint32_t op, float value) {
	self->glAccum(op, value);
}

void QOpenGLFunctions_1_1_GlIndexMask(QOpenGLFunctions_1_1* self, uint32_t mask) {
	self->glIndexMask(mask);
}

void QOpenGLFunctions_1_1_GlClearIndex(QOpenGLFunctions_1_1* self, float c) {
	self->glClearIndex(c);
}

void QOpenGLFunctions_1_1_GlClearAccum(QOpenGLFunctions_1_1* self, float red, float green, float blue, float alpha) {
	self->glClearAccum(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlPushName(QOpenGLFunctions_1_1* self, uint32_t name) {
	self->glPushName(name);
}

void QOpenGLFunctions_1_1_GlPopName(QOpenGLFunctions_1_1* self) {
	self->glPopName();
}

void QOpenGLFunctions_1_1_GlPassThrough(QOpenGLFunctions_1_1* self, float token) {
	self->glPassThrough(token);
}

void QOpenGLFunctions_1_1_GlLoadName(QOpenGLFunctions_1_1* self, uint32_t name) {
	self->glLoadName(name);
}

void QOpenGLFunctions_1_1_GlInitNames(QOpenGLFunctions_1_1* self) {
	self->glInitNames();
}

int32_t QOpenGLFunctions_1_1_GlRenderMode(QOpenGLFunctions_1_1* self, uint32_t mode) {
	return self->glRenderMode(mode);
}

void QOpenGLFunctions_1_1_GlSelectBuffer(QOpenGLFunctions_1_1* self, int32_t size, uint32_t* buffer) {
	self->glSelectBuffer(size, buffer);
}

void QOpenGLFunctions_1_1_GlFeedbackBuffer(QOpenGLFunctions_1_1* self, int32_t size, uint32_t typeVal, float* buffer) {
	self->glFeedbackBuffer(size, typeVal, buffer);
}

void QOpenGLFunctions_1_1_GlTexGeniv(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, const int32_t* params) {
	self->glTexGeniv(coord, pname, params);
}

void QOpenGLFunctions_1_1_GlTexGeni(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, int32_t param) {
	self->glTexGeni(coord, pname, param);
}

void QOpenGLFunctions_1_1_GlTexGenfv(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, const float* params) {
	self->glTexGenfv(coord, pname, params);
}

void QOpenGLFunctions_1_1_GlTexGenf(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, float param) {
	self->glTexGenf(coord, pname, param);
}

void QOpenGLFunctions_1_1_GlTexGendv(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, const double* params) {
	self->glTexGendv(coord, pname, params);
}

void QOpenGLFunctions_1_1_GlTexGend(QOpenGLFunctions_1_1* self, uint32_t coord, uint32_t pname, double param) {
	self->glTexGend(coord, pname, param);
}

void QOpenGLFunctions_1_1_GlTexEnviv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexEnviv(target, pname, params);
}

void QOpenGLFunctions_1_1_GlTexEnvi(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glTexEnvi(target, pname, param);
}

void QOpenGLFunctions_1_1_GlTexEnvfv(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, const float* params) {
	self->glTexEnvfv(target, pname, params);
}

void QOpenGLFunctions_1_1_GlTexEnvf(QOpenGLFunctions_1_1* self, uint32_t target, uint32_t pname, float param) {
	self->glTexEnvf(target, pname, param);
}

void QOpenGLFunctions_1_1_GlShadeModel(QOpenGLFunctions_1_1* self, uint32_t mode) {
	self->glShadeModel(mode);
}

void QOpenGLFunctions_1_1_GlPolygonStipple(QOpenGLFunctions_1_1* self, const uint8_t* mask) {
	self->glPolygonStipple(mask);
}

void QOpenGLFunctions_1_1_GlMaterialiv(QOpenGLFunctions_1_1* self, uint32_t face, uint32_t pname, const int32_t* params) {
	self->glMaterialiv(face, pname, params);
}

void QOpenGLFunctions_1_1_GlMateriali(QOpenGLFunctions_1_1* self, uint32_t face, uint32_t pname, int32_t param) {
	self->glMateriali(face, pname, param);
}

void QOpenGLFunctions_1_1_GlMaterialfv(QOpenGLFunctions_1_1* self, uint32_t face, uint32_t pname, const float* params) {
	self->glMaterialfv(face, pname, params);
}

void QOpenGLFunctions_1_1_GlMaterialf(QOpenGLFunctions_1_1* self, uint32_t face, uint32_t pname, float param) {
	self->glMaterialf(face, pname, param);
}

void QOpenGLFunctions_1_1_GlLineStipple(QOpenGLFunctions_1_1* self, int32_t factor, uint16_t pattern) {
	self->glLineStipple(factor, pattern);
}

void QOpenGLFunctions_1_1_GlLightModeliv(QOpenGLFunctions_1_1* self, uint32_t pname, const int32_t* params) {
	self->glLightModeliv(pname, params);
}

void QOpenGLFunctions_1_1_GlLightModeli(QOpenGLFunctions_1_1* self, uint32_t pname, int32_t param) {
	self->glLightModeli(pname, param);
}

void QOpenGLFunctions_1_1_GlLightModelfv(QOpenGLFunctions_1_1* self, uint32_t pname, const float* params) {
	self->glLightModelfv(pname, params);
}

void QOpenGLFunctions_1_1_GlLightModelf(QOpenGLFunctions_1_1* self, uint32_t pname, float param) {
	self->glLightModelf(pname, param);
}

void QOpenGLFunctions_1_1_GlLightiv(QOpenGLFunctions_1_1* self, uint32_t light, uint32_t pname, const int32_t* params) {
	self->glLightiv(light, pname, params);
}

void QOpenGLFunctions_1_1_GlLighti(QOpenGLFunctions_1_1* self, uint32_t light, uint32_t pname, int32_t param) {
	self->glLighti(light, pname, param);
}

void QOpenGLFunctions_1_1_GlLightfv(QOpenGLFunctions_1_1* self, uint32_t light, uint32_t pname, const float* params) {
	self->glLightfv(light, pname, params);
}

void QOpenGLFunctions_1_1_GlLightf(QOpenGLFunctions_1_1* self, uint32_t light, uint32_t pname, float param) {
	self->glLightf(light, pname, param);
}

void QOpenGLFunctions_1_1_GlFogiv(QOpenGLFunctions_1_1* self, uint32_t pname, const int32_t* params) {
	self->glFogiv(pname, params);
}

void QOpenGLFunctions_1_1_GlFogi(QOpenGLFunctions_1_1* self, uint32_t pname, int32_t param) {
	self->glFogi(pname, param);
}

void QOpenGLFunctions_1_1_GlFogfv(QOpenGLFunctions_1_1* self, uint32_t pname, const float* params) {
	self->glFogfv(pname, params);
}

void QOpenGLFunctions_1_1_GlFogf(QOpenGLFunctions_1_1* self, uint32_t pname, float param) {
	self->glFogf(pname, param);
}

void QOpenGLFunctions_1_1_GlColorMaterial(QOpenGLFunctions_1_1* self, uint32_t face, uint32_t mode) {
	self->glColorMaterial(face, mode);
}

void QOpenGLFunctions_1_1_GlClipPlane(QOpenGLFunctions_1_1* self, uint32_t plane, const double* equation) {
	self->glClipPlane(plane, equation);
}

void QOpenGLFunctions_1_1_GlVertex4sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glVertex4sv(v);
}

void QOpenGLFunctions_1_1_GlVertex4s(QOpenGLFunctions_1_1* self, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glVertex4s(x, y, z, w);
}

void QOpenGLFunctions_1_1_GlVertex4iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glVertex4iv(v);
}

void QOpenGLFunctions_1_1_GlVertex4i(QOpenGLFunctions_1_1* self, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glVertex4i(x, y, z, w);
}

void QOpenGLFunctions_1_1_GlVertex4fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glVertex4fv(v);
}

void QOpenGLFunctions_1_1_GlVertex4f(QOpenGLFunctions_1_1* self, float x, float y, float z, float w) {
	self->glVertex4f(x, y, z, w);
}

void QOpenGLFunctions_1_1_GlVertex4dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glVertex4dv(v);
}

void QOpenGLFunctions_1_1_GlVertex4d(QOpenGLFunctions_1_1* self, double x, double y, double z, double w) {
	self->glVertex4d(x, y, z, w);
}

void QOpenGLFunctions_1_1_GlVertex3sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glVertex3sv(v);
}

void QOpenGLFunctions_1_1_GlVertex3s(QOpenGLFunctions_1_1* self, int16_t x, int16_t y, int16_t z) {
	self->glVertex3s(x, y, z);
}

void QOpenGLFunctions_1_1_GlVertex3iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glVertex3iv(v);
}

void QOpenGLFunctions_1_1_GlVertex3i(QOpenGLFunctions_1_1* self, int32_t x, int32_t y, int32_t z) {
	self->glVertex3i(x, y, z);
}

void QOpenGLFunctions_1_1_GlVertex3fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glVertex3fv(v);
}

void QOpenGLFunctions_1_1_GlVertex3f(QOpenGLFunctions_1_1* self, float x, float y, float z) {
	self->glVertex3f(x, y, z);
}

void QOpenGLFunctions_1_1_GlVertex3dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glVertex3dv(v);
}

void QOpenGLFunctions_1_1_GlVertex3d(QOpenGLFunctions_1_1* self, double x, double y, double z) {
	self->glVertex3d(x, y, z);
}

void QOpenGLFunctions_1_1_GlVertex2sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glVertex2sv(v);
}

void QOpenGLFunctions_1_1_GlVertex2s(QOpenGLFunctions_1_1* self, int16_t x, int16_t y) {
	self->glVertex2s(x, y);
}

void QOpenGLFunctions_1_1_GlVertex2iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glVertex2iv(v);
}

void QOpenGLFunctions_1_1_GlVertex2i(QOpenGLFunctions_1_1* self, int32_t x, int32_t y) {
	self->glVertex2i(x, y);
}

void QOpenGLFunctions_1_1_GlVertex2fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glVertex2fv(v);
}

void QOpenGLFunctions_1_1_GlVertex2f(QOpenGLFunctions_1_1* self, float x, float y) {
	self->glVertex2f(x, y);
}

void QOpenGLFunctions_1_1_GlVertex2dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glVertex2dv(v);
}

void QOpenGLFunctions_1_1_GlVertex2d(QOpenGLFunctions_1_1* self, double x, double y) {
	self->glVertex2d(x, y);
}

void QOpenGLFunctions_1_1_GlTexCoord4sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glTexCoord4sv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord4s(QOpenGLFunctions_1_1* self, int16_t s, int16_t t, int16_t r, int16_t q) {
	self->glTexCoord4s(s, t, r, q);
}

void QOpenGLFunctions_1_1_GlTexCoord4iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glTexCoord4iv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord4i(QOpenGLFunctions_1_1* self, int32_t s, int32_t t, int32_t r, int32_t q) {
	self->glTexCoord4i(s, t, r, q);
}

void QOpenGLFunctions_1_1_GlTexCoord4fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glTexCoord4fv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord4f(QOpenGLFunctions_1_1* self, float s, float t, float r, float q) {
	self->glTexCoord4f(s, t, r, q);
}

void QOpenGLFunctions_1_1_GlTexCoord4dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glTexCoord4dv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord4d(QOpenGLFunctions_1_1* self, double s, double t, double r, double q) {
	self->glTexCoord4d(s, t, r, q);
}

void QOpenGLFunctions_1_1_GlTexCoord3sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glTexCoord3sv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord3s(QOpenGLFunctions_1_1* self, int16_t s, int16_t t, int16_t r) {
	self->glTexCoord3s(s, t, r);
}

void QOpenGLFunctions_1_1_GlTexCoord3iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glTexCoord3iv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord3i(QOpenGLFunctions_1_1* self, int32_t s, int32_t t, int32_t r) {
	self->glTexCoord3i(s, t, r);
}

void QOpenGLFunctions_1_1_GlTexCoord3fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glTexCoord3fv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord3f(QOpenGLFunctions_1_1* self, float s, float t, float r) {
	self->glTexCoord3f(s, t, r);
}

void QOpenGLFunctions_1_1_GlTexCoord3dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glTexCoord3dv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord3d(QOpenGLFunctions_1_1* self, double s, double t, double r) {
	self->glTexCoord3d(s, t, r);
}

void QOpenGLFunctions_1_1_GlTexCoord2sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glTexCoord2sv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord2s(QOpenGLFunctions_1_1* self, int16_t s, int16_t t) {
	self->glTexCoord2s(s, t);
}

void QOpenGLFunctions_1_1_GlTexCoord2iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glTexCoord2iv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord2i(QOpenGLFunctions_1_1* self, int32_t s, int32_t t) {
	self->glTexCoord2i(s, t);
}

void QOpenGLFunctions_1_1_GlTexCoord2fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glTexCoord2fv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord2f(QOpenGLFunctions_1_1* self, float s, float t) {
	self->glTexCoord2f(s, t);
}

void QOpenGLFunctions_1_1_GlTexCoord2dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glTexCoord2dv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord2d(QOpenGLFunctions_1_1* self, double s, double t) {
	self->glTexCoord2d(s, t);
}

void QOpenGLFunctions_1_1_GlTexCoord1sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glTexCoord1sv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord1s(QOpenGLFunctions_1_1* self, int16_t s) {
	self->glTexCoord1s(s);
}

void QOpenGLFunctions_1_1_GlTexCoord1iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glTexCoord1iv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord1i(QOpenGLFunctions_1_1* self, int32_t s) {
	self->glTexCoord1i(s);
}

void QOpenGLFunctions_1_1_GlTexCoord1fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glTexCoord1fv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord1f(QOpenGLFunctions_1_1* self, float s) {
	self->glTexCoord1f(s);
}

void QOpenGLFunctions_1_1_GlTexCoord1dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glTexCoord1dv(v);
}

void QOpenGLFunctions_1_1_GlTexCoord1d(QOpenGLFunctions_1_1* self, double s) {
	self->glTexCoord1d(s);
}

void QOpenGLFunctions_1_1_GlRectsv(QOpenGLFunctions_1_1* self, const int16_t* v1, const int16_t* v2) {
	self->glRectsv(v1, v2);
}

void QOpenGLFunctions_1_1_GlRects(QOpenGLFunctions_1_1* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
	self->glRects(x1, y1, x2, y2);
}

void QOpenGLFunctions_1_1_GlRectiv(QOpenGLFunctions_1_1* self, const int32_t* v1, const int32_t* v2) {
	self->glRectiv(v1, v2);
}

void QOpenGLFunctions_1_1_GlRecti(QOpenGLFunctions_1_1* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	self->glRecti(x1, y1, x2, y2);
}

void QOpenGLFunctions_1_1_GlRectfv(QOpenGLFunctions_1_1* self, const float* v1, const float* v2) {
	self->glRectfv(v1, v2);
}

void QOpenGLFunctions_1_1_GlRectf(QOpenGLFunctions_1_1* self, float x1, float y1, float x2, float y2) {
	self->glRectf(x1, y1, x2, y2);
}

void QOpenGLFunctions_1_1_GlRectdv(QOpenGLFunctions_1_1* self, const double* v1, const double* v2) {
	self->glRectdv(v1, v2);
}

void QOpenGLFunctions_1_1_GlRectd(QOpenGLFunctions_1_1* self, double x1, double y1, double x2, double y2) {
	self->glRectd(x1, y1, x2, y2);
}

void QOpenGLFunctions_1_1_GlRasterPos4sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glRasterPos4sv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos4s(QOpenGLFunctions_1_1* self, int16_t x, int16_t y, int16_t z, int16_t w) {
	self->glRasterPos4s(x, y, z, w);
}

void QOpenGLFunctions_1_1_GlRasterPos4iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glRasterPos4iv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos4i(QOpenGLFunctions_1_1* self, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glRasterPos4i(x, y, z, w);
}

void QOpenGLFunctions_1_1_GlRasterPos4fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glRasterPos4fv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos4f(QOpenGLFunctions_1_1* self, float x, float y, float z, float w) {
	self->glRasterPos4f(x, y, z, w);
}

void QOpenGLFunctions_1_1_GlRasterPos4dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glRasterPos4dv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos4d(QOpenGLFunctions_1_1* self, double x, double y, double z, double w) {
	self->glRasterPos4d(x, y, z, w);
}

void QOpenGLFunctions_1_1_GlRasterPos3sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glRasterPos3sv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos3s(QOpenGLFunctions_1_1* self, int16_t x, int16_t y, int16_t z) {
	self->glRasterPos3s(x, y, z);
}

void QOpenGLFunctions_1_1_GlRasterPos3iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glRasterPos3iv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos3i(QOpenGLFunctions_1_1* self, int32_t x, int32_t y, int32_t z) {
	self->glRasterPos3i(x, y, z);
}

void QOpenGLFunctions_1_1_GlRasterPos3fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glRasterPos3fv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos3f(QOpenGLFunctions_1_1* self, float x, float y, float z) {
	self->glRasterPos3f(x, y, z);
}

void QOpenGLFunctions_1_1_GlRasterPos3dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glRasterPos3dv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos3d(QOpenGLFunctions_1_1* self, double x, double y, double z) {
	self->glRasterPos3d(x, y, z);
}

void QOpenGLFunctions_1_1_GlRasterPos2sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glRasterPos2sv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos2s(QOpenGLFunctions_1_1* self, int16_t x, int16_t y) {
	self->glRasterPos2s(x, y);
}

void QOpenGLFunctions_1_1_GlRasterPos2iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glRasterPos2iv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos2i(QOpenGLFunctions_1_1* self, int32_t x, int32_t y) {
	self->glRasterPos2i(x, y);
}

void QOpenGLFunctions_1_1_GlRasterPos2fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glRasterPos2fv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos2f(QOpenGLFunctions_1_1* self, float x, float y) {
	self->glRasterPos2f(x, y);
}

void QOpenGLFunctions_1_1_GlRasterPos2dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glRasterPos2dv(v);
}

void QOpenGLFunctions_1_1_GlRasterPos2d(QOpenGLFunctions_1_1* self, double x, double y) {
	self->glRasterPos2d(x, y);
}

void QOpenGLFunctions_1_1_GlNormal3sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glNormal3sv(v);
}

void QOpenGLFunctions_1_1_GlNormal3s(QOpenGLFunctions_1_1* self, int16_t nx, int16_t ny, int16_t nz) {
	self->glNormal3s(nx, ny, nz);
}

void QOpenGLFunctions_1_1_GlNormal3iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glNormal3iv(v);
}

void QOpenGLFunctions_1_1_GlNormal3i(QOpenGLFunctions_1_1* self, int32_t nx, int32_t ny, int32_t nz) {
	self->glNormal3i(nx, ny, nz);
}

void QOpenGLFunctions_1_1_GlNormal3fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glNormal3fv(v);
}

void QOpenGLFunctions_1_1_GlNormal3f(QOpenGLFunctions_1_1* self, float nx, float ny, float nz) {
	self->glNormal3f(nx, ny, nz);
}

void QOpenGLFunctions_1_1_GlNormal3dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glNormal3dv(v);
}

void QOpenGLFunctions_1_1_GlNormal3d(QOpenGLFunctions_1_1* self, double nx, double ny, double nz) {
	self->glNormal3d(nx, ny, nz);
}

void QOpenGLFunctions_1_1_GlNormal3bv(QOpenGLFunctions_1_1* self, const signed char* v) {
	self->glNormal3bv(v);
}

void QOpenGLFunctions_1_1_GlNormal3b(QOpenGLFunctions_1_1* self, signed char nx, signed char ny, signed char nz) {
	self->glNormal3b(nx, ny, nz);
}

void QOpenGLFunctions_1_1_GlIndexsv(QOpenGLFunctions_1_1* self, const int16_t* c) {
	self->glIndexsv(c);
}

void QOpenGLFunctions_1_1_GlIndexs(QOpenGLFunctions_1_1* self, int16_t c) {
	self->glIndexs(c);
}

void QOpenGLFunctions_1_1_GlIndexiv(QOpenGLFunctions_1_1* self, const int32_t* c) {
	self->glIndexiv(c);
}

void QOpenGLFunctions_1_1_GlIndexi(QOpenGLFunctions_1_1* self, int32_t c) {
	self->glIndexi(c);
}

void QOpenGLFunctions_1_1_GlIndexfv(QOpenGLFunctions_1_1* self, const float* c) {
	self->glIndexfv(c);
}

void QOpenGLFunctions_1_1_GlIndexf(QOpenGLFunctions_1_1* self, float c) {
	self->glIndexf(c);
}

void QOpenGLFunctions_1_1_GlIndexdv(QOpenGLFunctions_1_1* self, const double* c) {
	self->glIndexdv(c);
}

void QOpenGLFunctions_1_1_GlIndexd(QOpenGLFunctions_1_1* self, double c) {
	self->glIndexd(c);
}

void QOpenGLFunctions_1_1_GlEnd(QOpenGLFunctions_1_1* self) {
	self->glEnd();
}

void QOpenGLFunctions_1_1_GlEdgeFlagv(QOpenGLFunctions_1_1* self, const unsigned char* flag) {
	self->glEdgeFlagv(flag);
}

void QOpenGLFunctions_1_1_GlEdgeFlag(QOpenGLFunctions_1_1* self, unsigned char flag) {
	self->glEdgeFlag(flag);
}

void QOpenGLFunctions_1_1_GlColor4usv(QOpenGLFunctions_1_1* self, const uint16_t* v) {
	self->glColor4usv(v);
}

void QOpenGLFunctions_1_1_GlColor4us(QOpenGLFunctions_1_1* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
	self->glColor4us(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlColor4uiv(QOpenGLFunctions_1_1* self, const uint32_t* v) {
	self->glColor4uiv(v);
}

void QOpenGLFunctions_1_1_GlColor4ui(QOpenGLFunctions_1_1* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
	self->glColor4ui(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlColor4ubv(QOpenGLFunctions_1_1* self, const uint8_t* v) {
	self->glColor4ubv(v);
}

void QOpenGLFunctions_1_1_GlColor4ub(QOpenGLFunctions_1_1* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
	self->glColor4ub(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlColor4sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glColor4sv(v);
}

void QOpenGLFunctions_1_1_GlColor4s(QOpenGLFunctions_1_1* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
	self->glColor4s(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlColor4iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glColor4iv(v);
}

void QOpenGLFunctions_1_1_GlColor4i(QOpenGLFunctions_1_1* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
	self->glColor4i(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlColor4fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glColor4fv(v);
}

void QOpenGLFunctions_1_1_GlColor4f(QOpenGLFunctions_1_1* self, float red, float green, float blue, float alpha) {
	self->glColor4f(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlColor4dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glColor4dv(v);
}

void QOpenGLFunctions_1_1_GlColor4d(QOpenGLFunctions_1_1* self, double red, double green, double blue, double alpha) {
	self->glColor4d(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlColor4bv(QOpenGLFunctions_1_1* self, const signed char* v) {
	self->glColor4bv(v);
}

void QOpenGLFunctions_1_1_GlColor4b(QOpenGLFunctions_1_1* self, signed char red, signed char green, signed char blue, signed char alpha) {
	self->glColor4b(red, green, blue, alpha);
}

void QOpenGLFunctions_1_1_GlColor3usv(QOpenGLFunctions_1_1* self, const uint16_t* v) {
	self->glColor3usv(v);
}

void QOpenGLFunctions_1_1_GlColor3us(QOpenGLFunctions_1_1* self, uint16_t red, uint16_t green, uint16_t blue) {
	self->glColor3us(red, green, blue);
}

void QOpenGLFunctions_1_1_GlColor3uiv(QOpenGLFunctions_1_1* self, const uint32_t* v) {
	self->glColor3uiv(v);
}

void QOpenGLFunctions_1_1_GlColor3ui(QOpenGLFunctions_1_1* self, uint32_t red, uint32_t green, uint32_t blue) {
	self->glColor3ui(red, green, blue);
}

void QOpenGLFunctions_1_1_GlColor3ubv(QOpenGLFunctions_1_1* self, const uint8_t* v) {
	self->glColor3ubv(v);
}

void QOpenGLFunctions_1_1_GlColor3ub(QOpenGLFunctions_1_1* self, uint8_t red, uint8_t green, uint8_t blue) {
	self->glColor3ub(red, green, blue);
}

void QOpenGLFunctions_1_1_GlColor3sv(QOpenGLFunctions_1_1* self, const int16_t* v) {
	self->glColor3sv(v);
}

void QOpenGLFunctions_1_1_GlColor3s(QOpenGLFunctions_1_1* self, int16_t red, int16_t green, int16_t blue) {
	self->glColor3s(red, green, blue);
}

void QOpenGLFunctions_1_1_GlColor3iv(QOpenGLFunctions_1_1* self, const int32_t* v) {
	self->glColor3iv(v);
}

void QOpenGLFunctions_1_1_GlColor3i(QOpenGLFunctions_1_1* self, int32_t red, int32_t green, int32_t blue) {
	self->glColor3i(red, green, blue);
}

void QOpenGLFunctions_1_1_GlColor3fv(QOpenGLFunctions_1_1* self, const float* v) {
	self->glColor3fv(v);
}

void QOpenGLFunctions_1_1_GlColor3f(QOpenGLFunctions_1_1* self, float red, float green, float blue) {
	self->glColor3f(red, green, blue);
}

void QOpenGLFunctions_1_1_GlColor3dv(QOpenGLFunctions_1_1* self, const double* v) {
	self->glColor3dv(v);
}

void QOpenGLFunctions_1_1_GlColor3d(QOpenGLFunctions_1_1* self, double red, double green, double blue) {
	self->glColor3d(red, green, blue);
}

void QOpenGLFunctions_1_1_GlColor3bv(QOpenGLFunctions_1_1* self, const signed char* v) {
	self->glColor3bv(v);
}

void QOpenGLFunctions_1_1_GlColor3b(QOpenGLFunctions_1_1* self, signed char red, signed char green, signed char blue) {
	self->glColor3b(red, green, blue);
}

void QOpenGLFunctions_1_1_GlBitmap(QOpenGLFunctions_1_1* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, const uint8_t* bitmap) {
	self->glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void QOpenGLFunctions_1_1_GlBegin(QOpenGLFunctions_1_1* self, uint32_t mode) {
	self->glBegin(mode);
}

void QOpenGLFunctions_1_1_GlListBase(QOpenGLFunctions_1_1* self, uint32_t base) {
	self->glListBase(base);
}

uint32_t QOpenGLFunctions_1_1_GlGenLists(QOpenGLFunctions_1_1* self, int32_t range) {
	return self->glGenLists(range);
}

void QOpenGLFunctions_1_1_GlDeleteLists(QOpenGLFunctions_1_1* self, uint32_t list, int32_t range) {
	self->glDeleteLists(list, range);
}

void QOpenGLFunctions_1_1_GlCallLists(QOpenGLFunctions_1_1* self, int32_t n, uint32_t typeVal, const void* lists) {
	self->glCallLists(n, typeVal, lists);
}

void QOpenGLFunctions_1_1_GlCallList(QOpenGLFunctions_1_1* self, uint32_t list) {
	self->glCallList(list);
}

void QOpenGLFunctions_1_1_GlEndList(QOpenGLFunctions_1_1* self) {
	self->glEndList();
}

void QOpenGLFunctions_1_1_GlNewList(QOpenGLFunctions_1_1* self, uint32_t list, uint32_t mode) {
	self->glNewList(list, mode);
}

void QOpenGLFunctions_1_1_GlPushClientAttrib(QOpenGLFunctions_1_1* self, uint32_t mask) {
	self->glPushClientAttrib(mask);
}

void QOpenGLFunctions_1_1_GlPopClientAttrib(QOpenGLFunctions_1_1* self) {
	self->glPopClientAttrib();
}

void QOpenGLFunctions_1_1_GlPrioritizeTextures(QOpenGLFunctions_1_1* self, int32_t n, const uint32_t* textures, const float* priorities) {
	self->glPrioritizeTextures(n, textures, priorities);
}

unsigned char QOpenGLFunctions_1_1_GlAreTexturesResident(QOpenGLFunctions_1_1* self, int32_t n, const uint32_t* textures, unsigned char* residences) {
	return self->glAreTexturesResident(n, textures, residences);
}

void QOpenGLFunctions_1_1_GlVertexPointer(QOpenGLFunctions_1_1* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_1_1_GlTexCoordPointer(QOpenGLFunctions_1_1* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glTexCoordPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_1_1_GlNormalPointer(QOpenGLFunctions_1_1* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glNormalPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_1_1_GlInterleavedArrays(QOpenGLFunctions_1_1* self, uint32_t format, int32_t stride, const void* pointer) {
	self->glInterleavedArrays(format, stride, pointer);
}

void QOpenGLFunctions_1_1_GlIndexPointer(QOpenGLFunctions_1_1* self, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glIndexPointer(typeVal, stride, pointer);
}

void QOpenGLFunctions_1_1_GlEnableClientState(QOpenGLFunctions_1_1* self, uint32_t array) {
	self->glEnableClientState(array);
}

void QOpenGLFunctions_1_1_GlEdgeFlagPointer(QOpenGLFunctions_1_1* self, int32_t stride, const void* pointer) {
	self->glEdgeFlagPointer(stride, pointer);
}

void QOpenGLFunctions_1_1_GlDisableClientState(QOpenGLFunctions_1_1* self, uint32_t array) {
	self->glDisableClientState(array);
}

void QOpenGLFunctions_1_1_GlColorPointer(QOpenGLFunctions_1_1* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glColorPointer(size, typeVal, stride, pointer);
}

void QOpenGLFunctions_1_1_GlArrayElement(QOpenGLFunctions_1_1* self, int32_t i) {
	self->glArrayElement(i);
}

// Base class handler implementation
bool QOpenGLFunctions_1_1_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_1_1* self) {
	auto* vqopenglfunctions_1_1 = dynamic_cast<VirtualQOpenGLFunctions_1_1*>(self);
	if (vqopenglfunctions_1_1 && vqopenglfunctions_1_1->isVirtualQOpenGLFunctions_1_1) {
vqopenglfunctions_1_1->setQOpenGLFunctions_1_1_InitializeOpenGLFunctions_IsBase(true);
	return vqopenglfunctions_1_1->initializeOpenGLFunctions();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_1_1_OnInitializeOpenGLFunctions(QOpenGLFunctions_1_1* self, intptr_t slot) {
	auto* vqopenglfunctions_1_1 = dynamic_cast<VirtualQOpenGLFunctions_1_1*>(self);
	if (vqopenglfunctions_1_1 && vqopenglfunctions_1_1->isVirtualQOpenGLFunctions_1_1) {
vqopenglfunctions_1_1->setQOpenGLFunctions_1_1_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_1_1::QOpenGLFunctions_1_1_InitializeOpenGLFunctions_Callback>(slot));
}
}

void QOpenGLFunctions_1_1_Delete(QOpenGLFunctions_1_1* self) {
    delete self;
}

