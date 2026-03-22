#include <QImage>
#include <QOpenGLFramebufferObject>
#include <QOpenGLFramebufferObjectFormat>
#include <QRect>
#include <QSize>
#include <qopenglframebufferobject.h>
#include "libqopenglframebufferobject.h"
#include "libqopenglframebufferobject.hxx"

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new(const QSize* size) {
	 return new QOpenGLFramebufferObject(*size);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new2(int width, int height) {
	 return new QOpenGLFramebufferObject(width, height);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new3(const QSize* size, int attachment) {
	 return new QOpenGLFramebufferObject(*size, static_cast<QOpenGLFramebufferObject::Attachment>(attachment));
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new4(int width, int height, int attachment) {
	 return new QOpenGLFramebufferObject(width, height, static_cast<QOpenGLFramebufferObject::Attachment>(attachment));
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new5(const QSize* size, const QOpenGLFramebufferObjectFormat* format) {
	 return new QOpenGLFramebufferObject(*size, *format);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new6(int width, int height, const QOpenGLFramebufferObjectFormat* format) {
	 return new QOpenGLFramebufferObject(width, height, *format);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new7(const QSize* size, uint32_t target) {
	 return new QOpenGLFramebufferObject(*size, target);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new8(int width, int height, uint32_t target) {
	 return new QOpenGLFramebufferObject(width, height, target);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new9(const QSize* size, int attachment, uint32_t target) {
	 return new QOpenGLFramebufferObject(*size, static_cast<QOpenGLFramebufferObject::Attachment>(attachment), target);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new10(const QSize* size, int attachment, uint32_t target, uint32_t internalFormat) {
	 return new QOpenGLFramebufferObject(*size, static_cast<QOpenGLFramebufferObject::Attachment>(attachment), target, internalFormat);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new11(int width, int height, int attachment, uint32_t target) {
	 return new QOpenGLFramebufferObject(width, height, static_cast<QOpenGLFramebufferObject::Attachment>(attachment), target);
}

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new12(int width, int height, int attachment, uint32_t target, uint32_t internalFormat) {
	 return new QOpenGLFramebufferObject(width, height, static_cast<QOpenGLFramebufferObject::Attachment>(attachment), target, internalFormat);
}

void QOpenGLFramebufferObject_AddColorAttachment(QOpenGLFramebufferObject* self, const QSize* size) {
	self->addColorAttachment(*size);
}

void QOpenGLFramebufferObject_AddColorAttachment2(QOpenGLFramebufferObject* self, int width, int height) {
	self->addColorAttachment(width, height);
}

QOpenGLFramebufferObjectFormat* QOpenGLFramebufferObject_Format(const QOpenGLFramebufferObject* self) {
	return new QOpenGLFramebufferObjectFormat(self->format());
}

bool QOpenGLFramebufferObject_IsValid(const QOpenGLFramebufferObject* self) {
	return self->isValid();
}

bool QOpenGLFramebufferObject_IsBound(const QOpenGLFramebufferObject* self) {
	return self->isBound();
}

bool QOpenGLFramebufferObject_Bind(QOpenGLFramebufferObject* self) {
	return self->bind();
}

bool QOpenGLFramebufferObject_Release(QOpenGLFramebufferObject* self) {
	return self->release();
}

int QOpenGLFramebufferObject_Width(const QOpenGLFramebufferObject* self) {
	return self->width();
}

int QOpenGLFramebufferObject_Height(const QOpenGLFramebufferObject* self) {
	return self->height();
}

uint32_t QOpenGLFramebufferObject_Texture(const QOpenGLFramebufferObject* self) {
	return self->texture();
}

libqt_list QOpenGLFramebufferObject_Textures(const QOpenGLFramebufferObject* self) {
	auto _ret = self->textures();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

uint32_t QOpenGLFramebufferObject_TakeTexture(QOpenGLFramebufferObject* self) {
	return self->takeTexture();
}

uint32_t QOpenGLFramebufferObject_TakeTexture2(QOpenGLFramebufferObject* self, int colorAttachmentIndex) {
	return self->takeTexture(colorAttachmentIndex);
}

QSize* QOpenGLFramebufferObject_Size(const QOpenGLFramebufferObject* self) {
	return new QSize(self->size());
}

libqt_list QOpenGLFramebufferObject_Sizes(const QOpenGLFramebufferObject* self) {
	auto _ret = self->sizes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

QImage* QOpenGLFramebufferObject_ToImage(const QOpenGLFramebufferObject* self) {
	return new QImage(self->toImage());
}

QImage* QOpenGLFramebufferObject_ToImage2(const QOpenGLFramebufferObject* self, bool flipped, int colorAttachmentIndex) {
	return new QImage(self->toImage(flipped, colorAttachmentIndex));
}

int QOpenGLFramebufferObject_Attachment(const QOpenGLFramebufferObject* self) {
	return self->attachment();
}

void QOpenGLFramebufferObject_SetAttachment(QOpenGLFramebufferObject* self, int attachment) {
	self->setAttachment(static_cast<QOpenGLFramebufferObject::Attachment>(attachment));
}

uint32_t QOpenGLFramebufferObject_Handle(const QOpenGLFramebufferObject* self) {
	return self->handle();
}

bool QOpenGLFramebufferObject_BindDefault() {
	return QOpenGLFramebufferObject::bindDefault();
}

bool QOpenGLFramebufferObject_HasOpenGLFramebufferObjects() {
	return QOpenGLFramebufferObject::hasOpenGLFramebufferObjects();
}

bool QOpenGLFramebufferObject_HasOpenGLFramebufferBlit() {
	return QOpenGLFramebufferObject::hasOpenGLFramebufferBlit();
}

void QOpenGLFramebufferObject_BlitFramebuffer(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect, uint32_t buffers, uint32_t filter, int readColorAttachmentIndex, int drawColorAttachmentIndex, int restorePolicy) {
	QOpenGLFramebufferObject::blitFramebuffer(target, *targetRect, source, *sourceRect, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex, static_cast<QOpenGLFramebufferObject::FramebufferRestorePolicy>(restorePolicy));
}

void QOpenGLFramebufferObject_BlitFramebuffer2(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect, uint32_t buffers, uint32_t filter, int readColorAttachmentIndex, int drawColorAttachmentIndex) {
	QOpenGLFramebufferObject::blitFramebuffer(target, *targetRect, source, *sourceRect, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex);
}

void QOpenGLFramebufferObject_BlitFramebuffer3(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect) {
	QOpenGLFramebufferObject::blitFramebuffer(target, *targetRect, source, *sourceRect);
}

void QOpenGLFramebufferObject_BlitFramebuffer4(QOpenGLFramebufferObject* target, QOpenGLFramebufferObject* source) {
	QOpenGLFramebufferObject::blitFramebuffer(target, source);
}

void QOpenGLFramebufferObject_AddColorAttachment22(QOpenGLFramebufferObject* self, const QSize* size, uint32_t internalFormat) {
	self->addColorAttachment(*size, internalFormat);
}

void QOpenGLFramebufferObject_AddColorAttachment3(QOpenGLFramebufferObject* self, int width, int height, uint32_t internalFormat) {
	self->addColorAttachment(width, height, internalFormat);
}

QImage* QOpenGLFramebufferObject_ToImage1(const QOpenGLFramebufferObject* self, bool flipped) {
	return new QImage(self->toImage(flipped));
}

void QOpenGLFramebufferObject_BlitFramebuffer5(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect, uint32_t buffers) {
	QOpenGLFramebufferObject::blitFramebuffer(target, *targetRect, source, *sourceRect, buffers);
}

void QOpenGLFramebufferObject_BlitFramebuffer6(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect, uint32_t buffers, uint32_t filter) {
	QOpenGLFramebufferObject::blitFramebuffer(target, *targetRect, source, *sourceRect, buffers, filter);
}

void QOpenGLFramebufferObject_BlitFramebuffer32(QOpenGLFramebufferObject* target, QOpenGLFramebufferObject* source, uint32_t buffers) {
	QOpenGLFramebufferObject::blitFramebuffer(target, source, buffers);
}

void QOpenGLFramebufferObject_BlitFramebuffer42(QOpenGLFramebufferObject* target, QOpenGLFramebufferObject* source, uint32_t buffers, uint32_t filter) {
	QOpenGLFramebufferObject::blitFramebuffer(target, source, buffers, filter);
}

void QOpenGLFramebufferObject_Delete(QOpenGLFramebufferObject* self) {
    delete self;
}

QOpenGLFramebufferObjectFormat* QOpenGLFramebufferObjectFormat_new() {
	 return new QOpenGLFramebufferObjectFormat();
}

QOpenGLFramebufferObjectFormat* QOpenGLFramebufferObjectFormat_new2(const QOpenGLFramebufferObjectFormat* other) {
	 return new QOpenGLFramebufferObjectFormat(*other);
}

void QOpenGLFramebufferObjectFormat_OperatorAssign(QOpenGLFramebufferObjectFormat* self, const QOpenGLFramebufferObjectFormat* other) {
	self->operator=(*other);
}

void QOpenGLFramebufferObjectFormat_SetSamples(QOpenGLFramebufferObjectFormat* self, int samples) {
	self->setSamples(samples);
}

int QOpenGLFramebufferObjectFormat_Samples(const QOpenGLFramebufferObjectFormat* self) {
	return self->samples();
}

void QOpenGLFramebufferObjectFormat_SetMipmap(QOpenGLFramebufferObjectFormat* self, bool enabled) {
	self->setMipmap(enabled);
}

bool QOpenGLFramebufferObjectFormat_Mipmap(const QOpenGLFramebufferObjectFormat* self) {
	return self->mipmap();
}

void QOpenGLFramebufferObjectFormat_SetAttachment(QOpenGLFramebufferObjectFormat* self, int attachment) {
	self->setAttachment(static_cast<QOpenGLFramebufferObject::Attachment>(attachment));
}

int QOpenGLFramebufferObjectFormat_Attachment(const QOpenGLFramebufferObjectFormat* self) {
	return self->attachment();
}

void QOpenGLFramebufferObjectFormat_SetTextureTarget(QOpenGLFramebufferObjectFormat* self, uint32_t target) {
	self->setTextureTarget(target);
}

void QOpenGLFramebufferObjectFormat_SetInternalTextureFormat(QOpenGLFramebufferObjectFormat* self, uint32_t internalTextureFormat) {
	self->setInternalTextureFormat(internalTextureFormat);
}

bool QOpenGLFramebufferObjectFormat_OperatorEqual(const QOpenGLFramebufferObjectFormat* self, const QOpenGLFramebufferObjectFormat* other) {
	return self->operator==(*other);
}

bool QOpenGLFramebufferObjectFormat_OperatorNotEqual(const QOpenGLFramebufferObjectFormat* self, const QOpenGLFramebufferObjectFormat* other) {
	return self->operator!=(*other);
}

void QOpenGLFramebufferObjectFormat_Delete(QOpenGLFramebufferObjectFormat* self) {
    delete self;
}

