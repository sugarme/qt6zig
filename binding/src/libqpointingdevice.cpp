#include <QDebug>
#include <QEventPoint>
#include <QInputDevice>
#include <QObject>
#include <QPointerEvent>
#include <QPointingDevice>
#include <QPointingDeviceUniqueId>
#include <QScreen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qpointingdevice.h>
#include "libqpointingdevice.h"
#include "libqpointingdevice.hxx"

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new(const QPointingDeviceUniqueId* other) {
	 return new QPointingDeviceUniqueId(*other);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* other) {
	 return new QPointingDeviceUniqueId(*other);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new3() {
	 return new QPointingDeviceUniqueId();
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new4(const QPointingDeviceUniqueId* param1) {
	 return new QPointingDeviceUniqueId(*param1);
}

void QPointingDeviceUniqueId_CopyAssign(QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other) {
    *self = *other;
}

void QPointingDeviceUniqueId_MoveAssign(QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other) {
    *self = std::move(*other);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(long long id) {
	return new QPointingDeviceUniqueId(QPointingDeviceUniqueId::fromNumericId(id));
}

bool QPointingDeviceUniqueId_IsValid(const QPointingDeviceUniqueId* self) {
	return self->isValid();
}

long long QPointingDeviceUniqueId_NumericId(const QPointingDeviceUniqueId* self) {
	return self->numericId();
}

void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self) {
    delete self;
}

QPointingDevice* QPointingDevice_new() {
	 return new QPointingDevice();
}

QPointingDevice* QPointingDevice_new2(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount) {
	 return new QPointingDevice(QString::fromUtf8(name.data, name.len), systemId, static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QFlags<QInputDevice::Capability>>(caps), maxPoints, buttonCount);
}

QPointingDevice* QPointingDevice_new3(QObject* parent) {
	 return new QPointingDevice(parent);
}

QPointingDevice* QPointingDevice_new4(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName) {
	 return new QPointingDevice(QString::fromUtf8(name.data, name.len), systemId, static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QFlags<QInputDevice::Capability>>(caps), maxPoints, buttonCount, QString::fromUtf8(seatName.data, seatName.len));
}

QPointingDevice* QPointingDevice_new5(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName, QPointingDeviceUniqueId* uniqueId) {
	 return new QPointingDevice(QString::fromUtf8(name.data, name.len), systemId, static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QFlags<QInputDevice::Capability>>(caps), maxPoints, buttonCount, QString::fromUtf8(seatName.data, seatName.len), *uniqueId);
}

QPointingDevice* QPointingDevice_new6(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent) {
	 return new QPointingDevice(QString::fromUtf8(name.data, name.len), systemId, static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QFlags<QInputDevice::Capability>>(caps), maxPoints, buttonCount, QString::fromUtf8(seatName.data, seatName.len), *uniqueId, parent);
}

libqt_string QPointingDevice_Tr(const char* s) {
	QString _ret = QPointingDevice::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPointingDevice_SetType(QPointingDevice* self, int devType) {
	self->setType(static_cast<QInputDevice::DeviceType>(devType));
}

void QPointingDevice_SetCapabilities(QPointingDevice* self, int caps) {
	self->setCapabilities(static_cast<QFlags<QInputDevice::Capability>>(caps));
}

void QPointingDevice_SetMaximumTouchPoints(QPointingDevice* self, int c) {
	self->setMaximumTouchPoints(c);
}

int QPointingDevice_PointerType(const QPointingDevice* self) {
	return self->pointerType();
}

int QPointingDevice_MaximumPoints(const QPointingDevice* self) {
	return self->maximumPoints();
}

int QPointingDevice_ButtonCount(const QPointingDevice* self) {
	return self->buttonCount();
}

QPointingDeviceUniqueId* QPointingDevice_UniqueId(const QPointingDevice* self) {
	return new QPointingDeviceUniqueId(self->uniqueId());
}

const QPointingDevice* QPointingDevice_PrimaryPointingDevice() {
	return QPointingDevice::primaryPointingDevice();
}

bool QPointingDevice_OperatorEqual(const QPointingDevice* self, const QPointingDevice* other) {
	return self->operator==(*other);
}

void QPointingDevice_GrabChanged(const QPointingDevice* self, QObject* grabber, int transition, const QPointerEvent* event, const QEventPoint* point) {
	self->grabChanged(grabber, static_cast<QPointingDevice::GrabTransition>(transition), event, *point);
}

void QPointingDevice_Connect_GrabChanged(QPointingDevice* self, intptr_t slot) {
    void (*slotFunc)(QPointingDevice*, QObject*, int, const QPointerEvent*, const QEventPoint*) = reinterpret_cast<void (*)(QPointingDevice*, QObject*, int, const QPointerEvent*, const QEventPoint*)>(slot);
    QPointingDevice::connect(self, &QPointingDevice::grabChanged, [self, slotFunc](QObject* grabber, GrabTransition transition, const QPointerEvent* event, const QEventPoint& point) {
	slotFunc(self, grabber, transition, event, point);
    });
}

libqt_string QPointingDevice_Tr2(const char* s, const char* c) {
	QString _ret = QPointingDevice::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPointingDevice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPointingDevice::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

const QPointingDevice* QPointingDevice_PrimaryPointingDevice1(const libqt_string seatName) {
	return QPointingDevice::primaryPointingDevice(QString::fromUtf8(seatName.data, seatName.len));
}

void QPointingDevice_Delete(QPointingDevice* self) {
    delete self;
}

