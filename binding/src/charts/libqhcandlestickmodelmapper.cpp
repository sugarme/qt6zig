#include <QCandlestickModelMapper>
#include <QHCandlestickModelMapper>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qhcandlestickmodelmapper.h>
#include "libqhcandlestickmodelmapper.h"
#include "libqhcandlestickmodelmapper.hxx"

QHCandlestickModelMapper* QHCandlestickModelMapper_new() {
	 return new VirtualQHCandlestickModelMapper();
}

QHCandlestickModelMapper* QHCandlestickModelMapper_new2(QObject* parent) {
	 return new VirtualQHCandlestickModelMapper(parent);
}

libqt_string QHCandlestickModelMapper_Tr(const char* s) {
	QString _ret = QHCandlestickModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QHCandlestickModelMapper_Orientation(const QHCandlestickModelMapper* self) {
	return self->orientation();
}

void QHCandlestickModelMapper_SetTimestampColumn(QHCandlestickModelMapper* self, int timestampColumn) {
	self->setTimestampColumn(timestampColumn);
}

int QHCandlestickModelMapper_TimestampColumn(const QHCandlestickModelMapper* self) {
	return self->timestampColumn();
}

void QHCandlestickModelMapper_SetOpenColumn(QHCandlestickModelMapper* self, int openColumn) {
	self->setOpenColumn(openColumn);
}

int QHCandlestickModelMapper_OpenColumn(const QHCandlestickModelMapper* self) {
	return self->openColumn();
}

void QHCandlestickModelMapper_SetHighColumn(QHCandlestickModelMapper* self, int highColumn) {
	self->setHighColumn(highColumn);
}

int QHCandlestickModelMapper_HighColumn(const QHCandlestickModelMapper* self) {
	return self->highColumn();
}

void QHCandlestickModelMapper_SetLowColumn(QHCandlestickModelMapper* self, int lowColumn) {
	self->setLowColumn(lowColumn);
}

int QHCandlestickModelMapper_LowColumn(const QHCandlestickModelMapper* self) {
	return self->lowColumn();
}

void QHCandlestickModelMapper_SetCloseColumn(QHCandlestickModelMapper* self, int closeColumn) {
	self->setCloseColumn(closeColumn);
}

int QHCandlestickModelMapper_CloseColumn(const QHCandlestickModelMapper* self) {
	return self->closeColumn();
}

void QHCandlestickModelMapper_SetFirstSetRow(QHCandlestickModelMapper* self, int firstSetRow) {
	self->setFirstSetRow(firstSetRow);
}

int QHCandlestickModelMapper_FirstSetRow(const QHCandlestickModelMapper* self) {
	return self->firstSetRow();
}

void QHCandlestickModelMapper_SetLastSetRow(QHCandlestickModelMapper* self, int lastSetRow) {
	self->setLastSetRow(lastSetRow);
}

int QHCandlestickModelMapper_LastSetRow(const QHCandlestickModelMapper* self) {
	return self->lastSetRow();
}

void QHCandlestickModelMapper_TimestampColumnChanged(QHCandlestickModelMapper* self) {
	self->timestampColumnChanged();
}

void QHCandlestickModelMapper_Connect_TimestampColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::timestampColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHCandlestickModelMapper_OpenColumnChanged(QHCandlestickModelMapper* self) {
	self->openColumnChanged();
}

void QHCandlestickModelMapper_Connect_OpenColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::openColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHCandlestickModelMapper_HighColumnChanged(QHCandlestickModelMapper* self) {
	self->highColumnChanged();
}

void QHCandlestickModelMapper_Connect_HighColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::highColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHCandlestickModelMapper_LowColumnChanged(QHCandlestickModelMapper* self) {
	self->lowColumnChanged();
}

void QHCandlestickModelMapper_Connect_LowColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::lowColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHCandlestickModelMapper_CloseColumnChanged(QHCandlestickModelMapper* self) {
	self->closeColumnChanged();
}

void QHCandlestickModelMapper_Connect_CloseColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::closeColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHCandlestickModelMapper_FirstSetRowChanged(QHCandlestickModelMapper* self) {
	self->firstSetRowChanged();
}

void QHCandlestickModelMapper_Connect_FirstSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::firstSetRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHCandlestickModelMapper_LastSetRowChanged(QHCandlestickModelMapper* self) {
	self->lastSetRowChanged();
}

void QHCandlestickModelMapper_Connect_LastSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::lastSetRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QHCandlestickModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QHCandlestickModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHCandlestickModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHCandlestickModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseOrientation(const QHCandlestickModelMapper* self) {
	auto* vqhcandlestickmodelmapper = dynamic_cast<const VirtualQHCandlestickModelMapper*>(self);
	if (vqhcandlestickmodelmapper && vqhcandlestickmodelmapper->isVirtualQHCandlestickModelMapper) {
vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Orientation_IsBase(true);
	return vqhcandlestickmodelmapper->orientation();
}
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnOrientation(const QHCandlestickModelMapper* self, intptr_t slot) {
	auto* vqhcandlestickmodelmapper = dynamic_cast<const VirtualQHCandlestickModelMapper*>(self);
	if (vqhcandlestickmodelmapper && vqhcandlestickmodelmapper->isVirtualQHCandlestickModelMapper) {
vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Orientation_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Orientation_Callback>(slot));
}
}

void QHCandlestickModelMapper_Delete(QHCandlestickModelMapper* self) {
    delete self;
}

