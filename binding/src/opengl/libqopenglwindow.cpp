#include <QImage>
#include <QOpenGLContext>
#include <QOpenGLWindow>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QPoint>
#include <QResizeEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWindow>
#include <qopenglwindow.h>
#include "libqopenglwindow.h"
#include "libqopenglwindow.hxx"

QOpenGLWindow* QOpenGLWindow_new() {
	 return new VirtualQOpenGLWindow();
}

QOpenGLWindow* QOpenGLWindow_new2(QOpenGLContext* shareContext) {
	 return new VirtualQOpenGLWindow(shareContext);
}

QOpenGLWindow* QOpenGLWindow_new3(int updateBehavior) {
	 return new VirtualQOpenGLWindow(static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior));
}

QOpenGLWindow* QOpenGLWindow_new4(int updateBehavior, QWindow* parent) {
	 return new VirtualQOpenGLWindow(static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior), parent);
}

QOpenGLWindow* QOpenGLWindow_new5(QOpenGLContext* shareContext, int updateBehavior) {
	 return new VirtualQOpenGLWindow(shareContext, static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior));
}

QOpenGLWindow* QOpenGLWindow_new6(QOpenGLContext* shareContext, int updateBehavior, QWindow* parent) {
	 return new VirtualQOpenGLWindow(shareContext, static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior), parent);
}

libqt_string QOpenGLWindow_Tr(const char* s) {
	QString _ret = QOpenGLWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QOpenGLWindow_UpdateBehavior(const QOpenGLWindow* self) {
	return self->updateBehavior();
}

bool QOpenGLWindow_IsValid(const QOpenGLWindow* self) {
	return self->isValid();
}

void QOpenGLWindow_MakeCurrent(QOpenGLWindow* self) {
	self->makeCurrent();
}

void QOpenGLWindow_DoneCurrent(QOpenGLWindow* self) {
	self->doneCurrent();
}

QOpenGLContext* QOpenGLWindow_Context(const QOpenGLWindow* self) {
	return self->context();
}

QOpenGLContext* QOpenGLWindow_ShareContext(const QOpenGLWindow* self) {
	return self->shareContext();
}

uint32_t QOpenGLWindow_DefaultFramebufferObject(const QOpenGLWindow* self) {
	return self->defaultFramebufferObject();
}

QImage* QOpenGLWindow_GrabFramebuffer(QOpenGLWindow* self) {
	return new QImage(self->grabFramebuffer());
}

void QOpenGLWindow_FrameSwapped(QOpenGLWindow* self) {
	self->frameSwapped();
}

void QOpenGLWindow_Connect_FrameSwapped(QOpenGLWindow* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWindow*) = reinterpret_cast<void (*)(QOpenGLWindow*)>(slot);
    QOpenGLWindow::connect(self, &QOpenGLWindow::frameSwapped, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QOpenGLWindow_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLWindow_Delete(QOpenGLWindow* self) {
    delete self;
}

