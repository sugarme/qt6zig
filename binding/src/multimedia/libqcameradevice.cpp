#include <QByteArray>
#include <QCameraDevice>
#include <QCameraFormat>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcameradevice.h>
#include "libqcameradevice.h"
#include "libqcameradevice.hxx"

QCameraFormat* QCameraFormat_new() {
	 return new QCameraFormat();
}

QCameraFormat* QCameraFormat_new2(const QCameraFormat* other) {
	 return new QCameraFormat(*other);
}

void QCameraFormat_OperatorAssign(QCameraFormat* self, const QCameraFormat* other) {
	self->operator=(*other);
}

int QCameraFormat_PixelFormat(const QCameraFormat* self) {
	return self->pixelFormat();
}

QSize* QCameraFormat_Resolution(const QCameraFormat* self) {
	return new QSize(self->resolution());
}

float QCameraFormat_MinFrameRate(const QCameraFormat* self) {
	return self->minFrameRate();
}

float QCameraFormat_MaxFrameRate(const QCameraFormat* self) {
	return self->maxFrameRate();
}

bool QCameraFormat_IsNull(const QCameraFormat* self) {
	return self->isNull();
}

bool QCameraFormat_OperatorEqual(const QCameraFormat* self, const QCameraFormat* other) {
	return self->operator==(*other);
}

bool QCameraFormat_OperatorNotEqual(const QCameraFormat* self, const QCameraFormat* other) {
	return self->operator!=(*other);
}

void QCameraFormat_Delete(QCameraFormat* self) {
    delete self;
}

QCameraDevice* QCameraDevice_new() {
	 return new QCameraDevice();
}

QCameraDevice* QCameraDevice_new2(const QCameraDevice* other) {
	 return new QCameraDevice(*other);
}

void QCameraDevice_OperatorAssign(QCameraDevice* self, const QCameraDevice* other) {
	self->operator=(*other);
}

bool QCameraDevice_OperatorEqual(const QCameraDevice* self, const QCameraDevice* other) {
	return self->operator==(*other);
}

bool QCameraDevice_OperatorNotEqual(const QCameraDevice* self, const QCameraDevice* other) {
	return self->operator!=(*other);
}

bool QCameraDevice_IsNull(const QCameraDevice* self) {
	return self->isNull();
}

libqt_string QCameraDevice_Id(const QCameraDevice* self) {
	QByteArray _qb = self->id();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCameraDevice_Description(const QCameraDevice* self) {
	QString _ret = self->description();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QCameraDevice_IsDefault(const QCameraDevice* self) {
	return self->isDefault();
}

int QCameraDevice_Position(const QCameraDevice* self) {
	return self->position();
}

libqt_list QCameraDevice_PhotoResolutions(const QCameraDevice* self) {
	auto _ret = self->photoResolutions();
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

libqt_list QCameraDevice_VideoFormats(const QCameraDevice* self) {
	auto _ret = self->videoFormats();
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

int QCameraDevice_CorrectionAngle(const QCameraDevice* self) {
	return self->correctionAngle();
}

void QCameraDevice_Delete(QCameraDevice* self) {
    delete self;
}

