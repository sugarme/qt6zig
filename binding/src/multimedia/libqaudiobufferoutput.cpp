#include <QAudioBuffer>
#include <QAudioBufferOutput>
#include <QAudioFormat>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qaudiobufferoutput.h>
#include "libqaudiobufferoutput.h"
#include "libqaudiobufferoutput.hxx"

QAudioBufferOutput* QAudioBufferOutput_new() {
	 return new QAudioBufferOutput();
}

QAudioBufferOutput* QAudioBufferOutput_new2(const QAudioFormat* format) {
	 return new QAudioBufferOutput(*format);
}

QAudioBufferOutput* QAudioBufferOutput_new3(QObject* parent) {
	 return new QAudioBufferOutput(parent);
}

QAudioBufferOutput* QAudioBufferOutput_new4(const QAudioFormat* format, QObject* parent) {
	 return new QAudioBufferOutput(*format, parent);
}

libqt_string QAudioBufferOutput_Tr(const char* s) {
	QString _ret = QAudioBufferOutput::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAudioFormat* QAudioBufferOutput_Format(const QAudioBufferOutput* self) {
	return new QAudioFormat(self->format());
}

void QAudioBufferOutput_AudioBufferReceived(QAudioBufferOutput* self, const QAudioBuffer* buffer) {
	self->audioBufferReceived(*buffer);
}

void QAudioBufferOutput_Connect_AudioBufferReceived(QAudioBufferOutput* self, intptr_t slot) {
    void (*slotFunc)(QAudioBufferOutput*, const QAudioBuffer*) = reinterpret_cast<void (*)(QAudioBufferOutput*, const QAudioBuffer*)>(slot);
    QAudioBufferOutput::connect(self, &QAudioBufferOutput::audioBufferReceived, [self, slotFunc](const QAudioBuffer& buffer) {
	slotFunc(self, buffer);
    });
}

libqt_string QAudioBufferOutput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioBufferOutput::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioBufferOutput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioBufferOutput::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioBufferOutput_Delete(QAudioBufferOutput* self) {
    delete self;
}

