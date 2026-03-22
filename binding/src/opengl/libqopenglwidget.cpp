#include <QEvent>
#include <QImage>
#include <QOpenGLContext>
#include <QOpenGLWidget>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPoint>
#include <QResizeEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QSurfaceFormat>
#include <QWidget>
#include <qopenglwidget.h>
#include "libqopenglwidget.h"
#include "libqopenglwidget.hxx"

QOpenGLWidget* QOpenGLWidget_new(QWidget* parent) {
	 return new VirtualQOpenGLWidget(parent);
}

QOpenGLWidget* QOpenGLWidget_new2() {
	 return new VirtualQOpenGLWidget();
}

QOpenGLWidget* QOpenGLWidget_new3(QWidget* parent, int f) {
	 return new VirtualQOpenGLWidget(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QOpenGLWidget_Tr(const char* s) {
	QString _ret = QOpenGLWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLWidget_SetUpdateBehavior(QOpenGLWidget* self, int updateBehavior) {
	self->setUpdateBehavior(static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior));
}

int QOpenGLWidget_UpdateBehavior(const QOpenGLWidget* self) {
	return self->updateBehavior();
}

void QOpenGLWidget_SetFormat(QOpenGLWidget* self, const QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QOpenGLWidget_Format(const QOpenGLWidget* self) {
	return new QSurfaceFormat(self->format());
}

void QOpenGLWidget_SetTextureFormat(QOpenGLWidget* self, uint32_t texFormat) {
	self->setTextureFormat(texFormat);
}

bool QOpenGLWidget_IsValid(const QOpenGLWidget* self) {
	return self->isValid();
}

void QOpenGLWidget_MakeCurrent(QOpenGLWidget* self) {
	self->makeCurrent();
}

void QOpenGLWidget_MakeCurrent2(QOpenGLWidget* self, uint8_t targetBuffer) {
	self->makeCurrent(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer));
}

void QOpenGLWidget_DoneCurrent(QOpenGLWidget* self) {
	self->doneCurrent();
}

QOpenGLContext* QOpenGLWidget_Context(const QOpenGLWidget* self) {
	return self->context();
}

uint32_t QOpenGLWidget_DefaultFramebufferObject(const QOpenGLWidget* self) {
	return self->defaultFramebufferObject();
}

uint32_t QOpenGLWidget_DefaultFramebufferObject2(const QOpenGLWidget* self, uint8_t targetBuffer) {
	return self->defaultFramebufferObject(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer));
}

QImage* QOpenGLWidget_GrabFramebuffer(QOpenGLWidget* self) {
	return new QImage(self->grabFramebuffer());
}

QImage* QOpenGLWidget_GrabFramebuffer2(QOpenGLWidget* self, uint8_t targetBuffer) {
	return new QImage(self->grabFramebuffer(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer)));
}

uint8_t QOpenGLWidget_CurrentTargetBuffer(const QOpenGLWidget* self) {
	return self->currentTargetBuffer();
}

void QOpenGLWidget_AboutToCompose(QOpenGLWidget* self) {
	self->aboutToCompose();
}

void QOpenGLWidget_Connect_AboutToCompose(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::aboutToCompose, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QOpenGLWidget_FrameSwapped(QOpenGLWidget* self) {
	self->frameSwapped();
}

void QOpenGLWidget_Connect_FrameSwapped(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::frameSwapped, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QOpenGLWidget_AboutToResize(QOpenGLWidget* self) {
	self->aboutToResize();
}

void QOpenGLWidget_Connect_AboutToResize(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::aboutToResize, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QOpenGLWidget_Resized(QOpenGLWidget* self) {
	self->resized();
}

void QOpenGLWidget_Connect_Resized(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::resized, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QOpenGLWidget_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLWidget_Delete(QOpenGLWidget* self) {
    delete self;
}

