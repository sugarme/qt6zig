#include <QMediaCaptureSession>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVideoFrame>
#include <QVideoFrameFormat>
#include <QVideoFrameInput>
#include <qvideoframeinput.h>
#include "libqvideoframeinput.h"
#include "libqvideoframeinput.hxx"

QVideoFrameInput* QVideoFrameInput_new() {
	 return new QVideoFrameInput();
}

QVideoFrameInput* QVideoFrameInput_new2(const QVideoFrameFormat* format) {
	 return new QVideoFrameInput(*format);
}

QVideoFrameInput* QVideoFrameInput_new3(QObject* parent) {
	 return new QVideoFrameInput(parent);
}

QVideoFrameInput* QVideoFrameInput_new4(const QVideoFrameFormat* format, QObject* parent) {
	 return new QVideoFrameInput(*format, parent);
}

libqt_string QVideoFrameInput_Tr(const char* s) {
	QString _ret = QVideoFrameInput::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QVideoFrameInput_SendVideoFrame(QVideoFrameInput* self, const QVideoFrame* frame) {
	return self->sendVideoFrame(*frame);
}

QVideoFrameFormat* QVideoFrameInput_Format(const QVideoFrameInput* self) {
	return new QVideoFrameFormat(self->format());
}

QMediaCaptureSession* QVideoFrameInput_CaptureSession(const QVideoFrameInput* self) {
	return self->captureSession();
}

void QVideoFrameInput_ReadyToSendVideoFrame(QVideoFrameInput* self) {
	self->readyToSendVideoFrame();
}

void QVideoFrameInput_Connect_ReadyToSendVideoFrame(QVideoFrameInput* self, intptr_t slot) {
    void (*slotFunc)(QVideoFrameInput*) = reinterpret_cast<void (*)(QVideoFrameInput*)>(slot);
    QVideoFrameInput::connect(self, &QVideoFrameInput::readyToSendVideoFrame, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QVideoFrameInput_Tr2(const char* s, const char* c) {
	QString _ret = QVideoFrameInput::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVideoFrameInput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoFrameInput::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVideoFrameInput_Delete(QVideoFrameInput* self) {
    delete self;
}

