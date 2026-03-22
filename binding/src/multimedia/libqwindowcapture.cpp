#include <QCapturableWindow>
#include <QMediaCaptureSession>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindowCapture>
#include <qwindowcapture.h>
#include "libqwindowcapture.h"
#include "libqwindowcapture.hxx"

QWindowCapture* QWindowCapture_new() {
	 return new QWindowCapture();
}

QWindowCapture* QWindowCapture_new2(QObject* parent) {
	 return new QWindowCapture(parent);
}

libqt_string QWindowCapture_Tr(const char* s) {
	QString _ret = QWindowCapture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QWindowCapture_CapturableWindows() {
	return QWindowCapture::capturableWindows();
}

QMediaCaptureSession* QWindowCapture_CaptureSession(const QWindowCapture* self) {
	return self->captureSession();
}

void QWindowCapture_SetWindow(QWindowCapture* self, QCapturableWindow* window) {
	self->setWindow(*window);
}

QCapturableWindow* QWindowCapture_Window(const QWindowCapture* self) {
	return new QCapturableWindow(self->window());
}

bool QWindowCapture_IsActive(const QWindowCapture* self) {
	return self->isActive();
}

int QWindowCapture_Error(const QWindowCapture* self) {
	return self->error();
}

libqt_string QWindowCapture_ErrorString(const QWindowCapture* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWindowCapture_SetActive(QWindowCapture* self, bool active) {
	self->setActive(active);
}

void QWindowCapture_Start(QWindowCapture* self) {
	self->start();
}

void QWindowCapture_Stop(QWindowCapture* self) {
	self->stop();
}

void QWindowCapture_ActiveChanged(QWindowCapture* self, bool param1) {
	self->activeChanged(param1);
}

void QWindowCapture_Connect_ActiveChanged(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*, bool) = reinterpret_cast<void (*)(QWindowCapture*, bool)>(slot);
    QWindowCapture::connect(self, &QWindowCapture::activeChanged, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

void QWindowCapture_WindowChanged(QWindowCapture* self, QCapturableWindow* window) {
	self->windowChanged(*window);
}

void QWindowCapture_Connect_WindowChanged(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*, QCapturableWindow*) = reinterpret_cast<void (*)(QWindowCapture*, QCapturableWindow*)>(slot);
    QWindowCapture::connect(self, &QWindowCapture::windowChanged, [self, slotFunc](QCapturableWindow window) {
	slotFunc(self, window);
    });
}

void QWindowCapture_ErrorChanged(QWindowCapture* self) {
	self->errorChanged();
}

void QWindowCapture_Connect_ErrorChanged(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*) = reinterpret_cast<void (*)(QWindowCapture*)>(slot);
    QWindowCapture::connect(self, &QWindowCapture::errorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QWindowCapture_ErrorOccurred(QWindowCapture* self, int errorVal, const libqt_string errorString) {
	self->errorOccurred(static_cast<QWindowCapture::Error>(errorVal), QString::fromUtf8(errorString.data, errorString.len));
}

void QWindowCapture_Connect_ErrorOccurred(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*, int, const char*) = reinterpret_cast<void (*)(QWindowCapture*, int, const char*)>(slot);
    QWindowCapture::connect(self, &QWindowCapture::errorOccurred, [self, slotFunc](QWindowCapture::Error errorVal, const QString& errorString) {
	slotFunc(self, errorVal, errorString);
    });
}

libqt_string QWindowCapture_Tr2(const char* s, const char* c) {
	QString _ret = QWindowCapture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWindowCapture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWindowCapture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWindowCapture_Delete(QWindowCapture* self) {
    delete self;
}

