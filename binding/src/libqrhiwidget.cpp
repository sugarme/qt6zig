#include <QEvent>
#include <QImage>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QRhiWidget>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qrhiwidget.h>
#include "libqrhiwidget.h"
#include "libqrhiwidget.hxx"

QRhiWidget* QRhiWidget_new(QWidget* parent) {
	 return new VirtualQRhiWidget(parent);
}

QRhiWidget* QRhiWidget_new2() {
	 return new VirtualQRhiWidget();
}

QRhiWidget* QRhiWidget_new3(QWidget* parent, int f) {
	 return new VirtualQRhiWidget(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QRhiWidget_Tr(const char* s) {
	QString _ret = QRhiWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QRhiWidget_Api(const QRhiWidget* self) {
	return self->api();
}

void QRhiWidget_SetApi(QRhiWidget* self, int api) {
	self->setApi(static_cast<QRhiWidget::Api>(api));
}

bool QRhiWidget_IsDebugLayerEnabled(const QRhiWidget* self) {
	return self->isDebugLayerEnabled();
}

void QRhiWidget_SetDebugLayerEnabled(QRhiWidget* self, bool enable) {
	self->setDebugLayerEnabled(enable);
}

int QRhiWidget_SampleCount(const QRhiWidget* self) {
	return self->sampleCount();
}

void QRhiWidget_SetSampleCount(QRhiWidget* self, int samples) {
	self->setSampleCount(samples);
}

int QRhiWidget_ColorBufferFormat(const QRhiWidget* self) {
	return self->colorBufferFormat();
}

void QRhiWidget_SetColorBufferFormat(QRhiWidget* self, int format) {
	self->setColorBufferFormat(static_cast<QRhiWidget::TextureFormat>(format));
}

QSize* QRhiWidget_FixedColorBufferSize(const QRhiWidget* self) {
	return new QSize(self->fixedColorBufferSize());
}

void QRhiWidget_SetFixedColorBufferSize(QRhiWidget* self, QSize* pixelSize) {
	self->setFixedColorBufferSize(*pixelSize);
}

void QRhiWidget_SetFixedColorBufferSize2(QRhiWidget* self, int w, int h) {
	self->setFixedColorBufferSize(w, h);
}

bool QRhiWidget_IsMirrorVerticallyEnabled(const QRhiWidget* self) {
	return self->isMirrorVerticallyEnabled();
}

void QRhiWidget_SetMirrorVertically(QRhiWidget* self, bool enabled) {
	self->setMirrorVertically(enabled);
}

QImage* QRhiWidget_GrabFramebuffer(const QRhiWidget* self) {
	return new QImage(self->grabFramebuffer());
}

void QRhiWidget_FrameSubmitted(QRhiWidget* self) {
	self->frameSubmitted();
}

void QRhiWidget_Connect_FrameSubmitted(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*) = reinterpret_cast<void (*)(QRhiWidget*)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::frameSubmitted, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QRhiWidget_RenderFailed(QRhiWidget* self) {
	self->renderFailed();
}

void QRhiWidget_Connect_RenderFailed(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*) = reinterpret_cast<void (*)(QRhiWidget*)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::renderFailed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QRhiWidget_SampleCountChanged(QRhiWidget* self, int samples) {
	self->sampleCountChanged(samples);
}

void QRhiWidget_Connect_SampleCountChanged(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*, int) = reinterpret_cast<void (*)(QRhiWidget*, int)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::sampleCountChanged, [self, slotFunc](int samples) {
	slotFunc(self, samples);
    });
}

void QRhiWidget_ColorBufferFormatChanged(QRhiWidget* self, int format) {
	self->colorBufferFormatChanged(static_cast<QRhiWidget::TextureFormat>(format));
}

void QRhiWidget_Connect_ColorBufferFormatChanged(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*, int) = reinterpret_cast<void (*)(QRhiWidget*, int)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::colorBufferFormatChanged, [self, slotFunc](TextureFormat format) {
	slotFunc(self, format);
    });
}

void QRhiWidget_FixedColorBufferSizeChanged(QRhiWidget* self, const QSize* pixelSize) {
	self->fixedColorBufferSizeChanged(*pixelSize);
}

void QRhiWidget_Connect_FixedColorBufferSizeChanged(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*, const QSize*) = reinterpret_cast<void (*)(QRhiWidget*, const QSize*)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::fixedColorBufferSizeChanged, [self, slotFunc](const QSize& pixelSize) {
	slotFunc(self, pixelSize);
    });
}

void QRhiWidget_MirrorVerticallyChanged(QRhiWidget* self, bool enabled) {
	self->mirrorVerticallyChanged(enabled);
}

void QRhiWidget_Connect_MirrorVerticallyChanged(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*, bool) = reinterpret_cast<void (*)(QRhiWidget*, bool)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::mirrorVerticallyChanged, [self, slotFunc](bool enabled) {
	slotFunc(self, enabled);
    });
}

libqt_string QRhiWidget_Tr2(const char* s, const char* c) {
	QString _ret = QRhiWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRhiWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRhiWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QRhiWidget_Delete(QRhiWidget* self) {
    delete self;
}

