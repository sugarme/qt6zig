#include <QMatrix4x4>
#include <QOpenGLTextureBlitter>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <qopengltextureblitter.h>
#include "libqopengltextureblitter.h"
#include "libqopengltextureblitter.hxx"

QOpenGLTextureBlitter* QOpenGLTextureBlitter_new() {
	 return new QOpenGLTextureBlitter();
}

bool QOpenGLTextureBlitter_Create(QOpenGLTextureBlitter* self) {
	return self->create();
}

bool QOpenGLTextureBlitter_IsCreated(const QOpenGLTextureBlitter* self) {
	return self->isCreated();
}

void QOpenGLTextureBlitter_Destroy(QOpenGLTextureBlitter* self) {
	self->destroy();
}

bool QOpenGLTextureBlitter_SupportsExternalOESTarget(const QOpenGLTextureBlitter* self) {
	return self->supportsExternalOESTarget();
}

bool QOpenGLTextureBlitter_SupportsRectangleTarget(const QOpenGLTextureBlitter* self) {
	return self->supportsRectangleTarget();
}

void QOpenGLTextureBlitter_Bind(QOpenGLTextureBlitter* self) {
	self->bind();
}

void QOpenGLTextureBlitter_Release(QOpenGLTextureBlitter* self) {
	self->release();
}

void QOpenGLTextureBlitter_SetRedBlueSwizzle(QOpenGLTextureBlitter* self, bool swizzle) {
	self->setRedBlueSwizzle(swizzle);
}

void QOpenGLTextureBlitter_SetOpacity(QOpenGLTextureBlitter* self, float opacity) {
	self->setOpacity(opacity);
}

void QOpenGLTextureBlitter_Blit(QOpenGLTextureBlitter* self, uint32_t texture, const QMatrix4x4* targetTransform, int sourceOrigin) {
	self->blit(texture, *targetTransform, static_cast<QOpenGLTextureBlitter::Origin>(sourceOrigin));
}

void QOpenGLTextureBlitter_Blit2(QOpenGLTextureBlitter* self, uint32_t texture, const QMatrix4x4* targetTransform, const QGenericMatrix<3, 3, float>* sourceTransform) {
	self->blit(texture, *targetTransform, *sourceTransform);
}

QMatrix4x4* QOpenGLTextureBlitter_TargetTransform(const QRectF* target, const QRect* viewport) {
	return new QMatrix4x4(QOpenGLTextureBlitter::targetTransform(*target, *viewport));
}

QGenericMatrix<3, 3, float> QOpenGLTextureBlitter_SourceTransform(const QRectF* subTexture, const QSize* textureSize, int origin) {
	return QOpenGLTextureBlitter::sourceTransform(*subTexture, *textureSize, static_cast<QOpenGLTextureBlitter::Origin>(origin));
}

void QOpenGLTextureBlitter_Bind1(QOpenGLTextureBlitter* self, uint32_t target) {
	self->bind(target);
}

void QOpenGLTextureBlitter_Delete(QOpenGLTextureBlitter* self) {
    delete self;
}

