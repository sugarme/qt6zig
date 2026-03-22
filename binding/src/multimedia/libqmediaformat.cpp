#include <QMediaFormat>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qmediaformat.h>
#include "libqmediaformat.h"
#include "libqmediaformat.hxx"

QMediaFormat* QMediaFormat_new() {
	 return new QMediaFormat();
}

QMediaFormat* QMediaFormat_new2(const QMediaFormat* other) {
	 return new QMediaFormat(*other);
}

QMediaFormat* QMediaFormat_new3(int format) {
	 return new QMediaFormat(static_cast<QMediaFormat::FileFormat>(format));
}

void QMediaFormat_OperatorAssign(QMediaFormat* self, const QMediaFormat* other) {
	self->operator=(*other);
}

void QMediaFormat_Swap(QMediaFormat* self, QMediaFormat* other) {
	self->swap(*other);
}

int QMediaFormat_FileFormat(const QMediaFormat* self) {
	return self->fileFormat();
}

void QMediaFormat_SetFileFormat(QMediaFormat* self, int f) {
	self->setFileFormat(static_cast<QMediaFormat::FileFormat>(f));
}

void QMediaFormat_SetVideoCodec(QMediaFormat* self, int codec) {
	self->setVideoCodec(static_cast<QMediaFormat::VideoCodec>(codec));
}

int QMediaFormat_VideoCodec(const QMediaFormat* self) {
	return self->videoCodec();
}

void QMediaFormat_SetAudioCodec(QMediaFormat* self, int codec) {
	self->setAudioCodec(static_cast<QMediaFormat::AudioCodec>(codec));
}

int QMediaFormat_AudioCodec(const QMediaFormat* self) {
	return self->audioCodec();
}

bool QMediaFormat_IsSupported(const QMediaFormat* self, int mode) {
	return self->isSupported(static_cast<QFlags<QHostAddress::ConversionModeFlag>>(mode));
}

QMimeType* QMediaFormat_MimeType(const QMediaFormat* self) {
	return new QMimeType(self->mimeType());
}

libqt_list QMediaFormat_SupportedFileFormats(QMediaFormat* self, int m) {
	auto _ret = self->supportedFileFormats(static_cast<QFlags<QHostAddress::ConversionModeFlag>>(m));
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

libqt_list QMediaFormat_SupportedVideoCodecs(QMediaFormat* self, int m) {
	auto _ret = self->supportedVideoCodecs(static_cast<QFlags<QHostAddress::ConversionModeFlag>>(m));
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

libqt_list QMediaFormat_SupportedAudioCodecs(QMediaFormat* self, int m) {
	auto _ret = self->supportedAudioCodecs(static_cast<QFlags<QHostAddress::ConversionModeFlag>>(m));
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

libqt_string QMediaFormat_FileFormatName(int fileFormat) {
	QString _ret = QMediaFormat::fileFormatName(static_cast<QMediaFormat::FileFormat>(fileFormat));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaFormat_AudioCodecName(int codec) {
	QString _ret = QMediaFormat::audioCodecName(static_cast<QMediaFormat::AudioCodec>(codec));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaFormat_VideoCodecName(int codec) {
	QString _ret = QMediaFormat::videoCodecName(static_cast<QMediaFormat::VideoCodec>(codec));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaFormat_FileFormatDescription(int fileFormat) {
	QString _ret = QMediaFormat::fileFormatDescription(static_cast<QMediaFormat::FileFormat>(fileFormat));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaFormat_AudioCodecDescription(int codec) {
	QString _ret = QMediaFormat::audioCodecDescription(static_cast<QMediaFormat::AudioCodec>(codec));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaFormat_VideoCodecDescription(int codec) {
	QString _ret = QMediaFormat::videoCodecDescription(static_cast<QMediaFormat::VideoCodec>(codec));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QMediaFormat_OperatorEqual(const QMediaFormat* self, const QMediaFormat* other) {
	return self->operator==(*other);
}

bool QMediaFormat_OperatorNotEqual(const QMediaFormat* self, const QMediaFormat* other) {
	return self->operator!=(*other);
}

void QMediaFormat_ResolveForEncoding(QMediaFormat* self, int flags) {
	self->resolveForEncoding(static_cast<QMediaFormat::ResolveFlags>(flags));
}

void QMediaFormat_Delete(QMediaFormat* self) {
    delete self;
}

