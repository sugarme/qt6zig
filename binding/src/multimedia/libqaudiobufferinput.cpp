#include <QAudioBuffer>
#include <QAudioBufferInput>
#include <QAudioFormat>
#include <QMediaCaptureSession>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiobufferinput.h>
#include "libqaudiobufferinput.h"
#include "libqaudiobufferinput.hxx"

QAudioBufferInput* QAudioBufferInput_new() {
	 return new QAudioBufferInput();
}

QAudioBufferInput* QAudioBufferInput_new2(const QAudioFormat* format) {
	 return new QAudioBufferInput(*format);
}

QAudioBufferInput* QAudioBufferInput_new3(QObject* parent) {
	 return new QAudioBufferInput(parent);
}

QAudioBufferInput* QAudioBufferInput_new4(const QAudioFormat* format, QObject* parent) {
	 return new QAudioBufferInput(*format, parent);
}

libqt_string QAudioBufferInput_Tr(const char* s) {
	QString _ret = QAudioBufferInput::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAudioBufferInput_SendAudioBuffer(QAudioBufferInput* self, const QAudioBuffer* audioBuffer) {
	return self->sendAudioBuffer(*audioBuffer);
}

QAudioFormat* QAudioBufferInput_Format(const QAudioBufferInput* self) {
	return new QAudioFormat(self->format());
}

QMediaCaptureSession* QAudioBufferInput_CaptureSession(const QAudioBufferInput* self) {
	return self->captureSession();
}

void QAudioBufferInput_ReadyToSendAudioBuffer(QAudioBufferInput* self) {
	self->readyToSendAudioBuffer();
}

void QAudioBufferInput_Connect_ReadyToSendAudioBuffer(QAudioBufferInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioBufferInput*) = reinterpret_cast<void (*)(QAudioBufferInput*)>(slot);
    QAudioBufferInput::connect(self, &QAudioBufferInput::readyToSendAudioBuffer, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QAudioBufferInput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioBufferInput::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioBufferInput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioBufferInput::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioBufferInput_Delete(QAudioBufferInput* self) {
    delete self;
}

