#include <QBluetoothPermission>
#include <QCalendarPermission>
#include <QContactsPermission>
#include <QDebug>
#include <QLocationPermission>
#include <QMetaObject>
#include <QMetaType>
#include <QPermission>
#include <qpermissions.h>
#include "libqpermissions.h"
#include "libqpermissions.hxx"

QPermission* QPermission_new() {
	 return new QPermission();
}

QPermission* QPermission_new2(const QPermission* param1) {
	 return new QPermission(*param1);
}

int QPermission_Status(const QPermission* self) {
	return self->status();
}

QMetaType* QPermission_Type(const QPermission* self) {
	return new QMetaType(self->type());
}

void QPermission_Delete(QPermission* self) {
    delete self;
}

QLocationPermission* QLocationPermission_new() {
	 return new QLocationPermission();
}

QLocationPermission* QLocationPermission_new2(const QLocationPermission* other) {
	 return new QLocationPermission(*other);
}

void QLocationPermission_SetAccuracy(QLocationPermission* self, quint8 accuracy) {
	self->setAccuracy(static_cast<QLocationPermission::Accuracy>(accuracy));
}

quint8 QLocationPermission_Accuracy(const QLocationPermission* self) {
	return self->accuracy();
}

void QLocationPermission_SetAvailability(QLocationPermission* self, quint8 availability) {
	self->setAvailability(static_cast<QLocationPermission::Availability>(availability));
}

quint8 QLocationPermission_Availability(const QLocationPermission* self) {
	return self->availability();
}

void QLocationPermission_OperatorAssign(QLocationPermission* self, const QLocationPermission* other) {
	self->operator=(*other);
}

void QLocationPermission_Swap(QLocationPermission* self, QLocationPermission* other) {
	self->swap(*other);
}

void QLocationPermission_Delete(QLocationPermission* self) {
    delete self;
}

QCalendarPermission* QCalendarPermission_new() {
	 return new QCalendarPermission();
}

QCalendarPermission* QCalendarPermission_new2(const QCalendarPermission* other) {
	 return new QCalendarPermission(*other);
}

void QCalendarPermission_SetAccessMode(QCalendarPermission* self, int mode) {
	self->setAccessMode(static_cast<QSystemSemaphore::AccessMode>(mode));
}

int QCalendarPermission_AccessMode(const QCalendarPermission* self) {
	return self->accessMode();
}

void QCalendarPermission_OperatorAssign(QCalendarPermission* self, const QCalendarPermission* other) {
	self->operator=(*other);
}

void QCalendarPermission_Swap(QCalendarPermission* self, QCalendarPermission* other) {
	self->swap(*other);
}

void QCalendarPermission_Delete(QCalendarPermission* self) {
    delete self;
}

QContactsPermission* QContactsPermission_new() {
	 return new QContactsPermission();
}

QContactsPermission* QContactsPermission_new2(const QContactsPermission* other) {
	 return new QContactsPermission(*other);
}

void QContactsPermission_SetAccessMode(QContactsPermission* self, int mode) {
	self->setAccessMode(static_cast<QSystemSemaphore::AccessMode>(mode));
}

int QContactsPermission_AccessMode(const QContactsPermission* self) {
	return self->accessMode();
}

void QContactsPermission_OperatorAssign(QContactsPermission* self, const QContactsPermission* other) {
	self->operator=(*other);
}

void QContactsPermission_Swap(QContactsPermission* self, QContactsPermission* other) {
	self->swap(*other);
}

void QContactsPermission_Delete(QContactsPermission* self) {
    delete self;
}

QBluetoothPermission* QBluetoothPermission_new() {
	 return new QBluetoothPermission();
}

QBluetoothPermission* QBluetoothPermission_new2(const QBluetoothPermission* other) {
	 return new QBluetoothPermission(*other);
}

void QBluetoothPermission_SetCommunicationModes(QBluetoothPermission* self, quint8 modes) {
	self->setCommunicationModes(static_cast<QFlags<QBluetoothPermission::CommunicationMode>>(modes));
}

quint8 QBluetoothPermission_CommunicationModes(const QBluetoothPermission* self) {
	return self->communicationModes();
}

void QBluetoothPermission_OperatorAssign(QBluetoothPermission* self, const QBluetoothPermission* other) {
	self->operator=(*other);
}

void QBluetoothPermission_Swap(QBluetoothPermission* self, QBluetoothPermission* other) {
	self->swap(*other);
}

void QBluetoothPermission_Delete(QBluetoothPermission* self) {
    delete self;
}

QCameraPermission* QCameraPermission_new() {
	 return new QCameraPermission();
}

QCameraPermission* QCameraPermission_new2(const QCameraPermission* other) {
	 return new QCameraPermission(*other);
}

void QCameraPermission_OperatorAssign(QCameraPermission* self, const QCameraPermission* other) {
	self->operator=(*other);
}

void QCameraPermission_Swap(QCameraPermission* self, QCameraPermission* other) {
	self->swap(*other);
}

void QCameraPermission_Delete(QCameraPermission* self) {
    delete self;
}

QMicrophonePermission* QMicrophonePermission_new() {
	 return new QMicrophonePermission();
}

QMicrophonePermission* QMicrophonePermission_new2(const QMicrophonePermission* other) {
	 return new QMicrophonePermission(*other);
}

void QMicrophonePermission_OperatorAssign(QMicrophonePermission* self, const QMicrophonePermission* other) {
	self->operator=(*other);
}

void QMicrophonePermission_Swap(QMicrophonePermission* self, QMicrophonePermission* other) {
	self->swap(*other);
}

void QMicrophonePermission_Delete(QMicrophonePermission* self) {
    delete self;
}

