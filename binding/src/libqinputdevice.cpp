#include <QDebug>
#include <QInputDevice>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qinputdevice.h>
#include "libqinputdevice.h"
#include "libqinputdevice.hxx"

QInputDevice* QInputDevice_new() {
	 return new QInputDevice();
}

QInputDevice* QInputDevice_new2(const libqt_string name, long long systemId, int typeVal) {
	 return new QInputDevice(QString::fromUtf8(name.data, name.len), systemId, static_cast<QInputDevice::DeviceType>(typeVal));
}

QInputDevice* QInputDevice_new3(QObject* parent) {
	 return new QInputDevice(parent);
}

QInputDevice* QInputDevice_new4(const libqt_string name, long long systemId, int typeVal, const libqt_string seatName) {
	 return new QInputDevice(QString::fromUtf8(name.data, name.len), systemId, static_cast<QInputDevice::DeviceType>(typeVal), QString::fromUtf8(seatName.data, seatName.len));
}

QInputDevice* QInputDevice_new5(const libqt_string name, long long systemId, int typeVal, const libqt_string seatName, QObject* parent) {
	 return new QInputDevice(QString::fromUtf8(name.data, name.len), systemId, static_cast<QInputDevice::DeviceType>(typeVal), QString::fromUtf8(seatName.data, seatName.len), parent);
}

libqt_string QInputDevice_Tr(const char* s) {
	QString _ret = QInputDevice::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDevice_Name(const QInputDevice* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QInputDevice_Type(const QInputDevice* self) {
	return self->type();
}

int QInputDevice_Capabilities(const QInputDevice* self) {
	return self->capabilities();
}

bool QInputDevice_HasCapability(const QInputDevice* self, int cap) {
	return self->hasCapability(static_cast<QInputDevice::Capability>(cap));
}

long long QInputDevice_SystemId(const QInputDevice* self) {
	return self->systemId();
}

libqt_string QInputDevice_SeatName(const QInputDevice* self) {
	QString _ret = self->seatName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRect* QInputDevice_AvailableVirtualGeometry(const QInputDevice* self) {
	return new QRect(self->availableVirtualGeometry());
}

libqt_list QInputDevice_SeatNames() {
	auto _ret = QInputDevice::seatNames();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QInputDevice_Devices() {
	auto _ret = QInputDevice::devices();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

const QInputDevice* QInputDevice_PrimaryKeyboard() {
	return QInputDevice::primaryKeyboard();
}

bool QInputDevice_OperatorEqual(const QInputDevice* self, const QInputDevice* other) {
	return self->operator==(*other);
}

void QInputDevice_AvailableVirtualGeometryChanged(QInputDevice* self, QRect* area) {
	self->availableVirtualGeometryChanged(*area);
}

void QInputDevice_Connect_AvailableVirtualGeometryChanged(QInputDevice* self, intptr_t slot) {
    void (*slotFunc)(QInputDevice*, QRect*) = reinterpret_cast<void (*)(QInputDevice*, QRect*)>(slot);
    QInputDevice::connect(self, &QInputDevice::availableVirtualGeometryChanged, [self, slotFunc](QRect area) {
	slotFunc(self, area);
    });
}

libqt_string QInputDevice_Tr2(const char* s, const char* c) {
	QString _ret = QInputDevice::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDevice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QInputDevice::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

const QInputDevice* QInputDevice_PrimaryKeyboard1(const libqt_string seatName) {
	return QInputDevice::primaryKeyboard(QString::fromUtf8(seatName.data, seatName.len));
}

void QInputDevice_Delete(QInputDevice* self) {
    delete self;
}

