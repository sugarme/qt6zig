#include <QMediaCaptureSession>
#include <QObject>
#include <QScreen>
#include <QScreenCapture>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qscreencapture.h>
#include "libqscreencapture.h"
#include "libqscreencapture.hxx"

QScreenCapture* QScreenCapture_new() {
	 return new QScreenCapture();
}

QScreenCapture* QScreenCapture_new2(QObject* parent) {
	 return new QScreenCapture(parent);
}

libqt_string QScreenCapture_Tr(const char* s) {
	QString _ret = QScreenCapture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QMediaCaptureSession* QScreenCapture_CaptureSession(const QScreenCapture* self) {
	return self->captureSession();
}

void QScreenCapture_SetScreen(QScreenCapture* self, QScreen* screen) {
	self->setScreen(screen);
}

QScreen* QScreenCapture_Screen(const QScreenCapture* self) {
	return self->screen();
}

bool QScreenCapture_IsActive(const QScreenCapture* self) {
	return self->isActive();
}

int QScreenCapture_Error(const QScreenCapture* self) {
	return self->error();
}

libqt_string QScreenCapture_ErrorString(const QScreenCapture* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QScreenCapture_SetActive(QScreenCapture* self, bool active) {
	self->setActive(active);
}

void QScreenCapture_Start(QScreenCapture* self) {
	self->start();
}

void QScreenCapture_Stop(QScreenCapture* self) {
	self->stop();
}

void QScreenCapture_ActiveChanged(QScreenCapture* self, bool param1) {
	self->activeChanged(param1);
}

void QScreenCapture_Connect_ActiveChanged(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*, bool) = reinterpret_cast<void (*)(QScreenCapture*, bool)>(slot);
    QScreenCapture::connect(self, &QScreenCapture::activeChanged, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

void QScreenCapture_ErrorChanged(QScreenCapture* self) {
	self->errorChanged();
}

void QScreenCapture_Connect_ErrorChanged(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*) = reinterpret_cast<void (*)(QScreenCapture*)>(slot);
    QScreenCapture::connect(self, &QScreenCapture::errorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QScreenCapture_ScreenChanged(QScreenCapture* self, QScreen* param1) {
	self->screenChanged(param1);
}

void QScreenCapture_Connect_ScreenChanged(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*, QScreen*) = reinterpret_cast<void (*)(QScreenCapture*, QScreen*)>(slot);
    QScreenCapture::connect(self, &QScreenCapture::screenChanged, [self, slotFunc](QScreen* param1) {
	slotFunc(self, param1);
    });
}

void QScreenCapture_ErrorOccurred(QScreenCapture* self, int errorVal, const libqt_string errorString) {
	self->errorOccurred(static_cast<QScreenCapture::Error>(errorVal), QString::fromUtf8(errorString.data, errorString.len));
}

void QScreenCapture_Connect_ErrorOccurred(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*, int, const char*) = reinterpret_cast<void (*)(QScreenCapture*, int, const char*)>(slot);
    QScreenCapture::connect(self, &QScreenCapture::errorOccurred, [self, slotFunc](QScreenCapture::Error errorVal, const QString& errorString) {
	slotFunc(self, errorVal, errorString);
    });
}

libqt_string QScreenCapture_Tr2(const char* s, const char* c) {
	QString _ret = QScreenCapture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScreenCapture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScreenCapture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QScreenCapture_Delete(QScreenCapture* self) {
    delete self;
}

