#include <QCandlestickModelMapper>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVCandlestickModelMapper>
#include <qvcandlestickmodelmapper.h>
#include "libqvcandlestickmodelmapper.h"
#include "libqvcandlestickmodelmapper.hxx"

QVCandlestickModelMapper* QVCandlestickModelMapper_new() {
	 return new VirtualQVCandlestickModelMapper();
}

QVCandlestickModelMapper* QVCandlestickModelMapper_new2(QObject* parent) {
	 return new VirtualQVCandlestickModelMapper(parent);
}

libqt_string QVCandlestickModelMapper_Tr(const char* s) {
	QString _ret = QVCandlestickModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QVCandlestickModelMapper_Orientation(const QVCandlestickModelMapper* self) {
	return self->orientation();
}

void QVCandlestickModelMapper_SetTimestampRow(QVCandlestickModelMapper* self, int timestampRow) {
	self->setTimestampRow(timestampRow);
}

int QVCandlestickModelMapper_TimestampRow(const QVCandlestickModelMapper* self) {
	return self->timestampRow();
}

void QVCandlestickModelMapper_SetOpenRow(QVCandlestickModelMapper* self, int openRow) {
	self->setOpenRow(openRow);
}

int QVCandlestickModelMapper_OpenRow(const QVCandlestickModelMapper* self) {
	return self->openRow();
}

void QVCandlestickModelMapper_SetHighRow(QVCandlestickModelMapper* self, int highRow) {
	self->setHighRow(highRow);
}

int QVCandlestickModelMapper_HighRow(const QVCandlestickModelMapper* self) {
	return self->highRow();
}

void QVCandlestickModelMapper_SetLowRow(QVCandlestickModelMapper* self, int lowRow) {
	self->setLowRow(lowRow);
}

int QVCandlestickModelMapper_LowRow(const QVCandlestickModelMapper* self) {
	return self->lowRow();
}

void QVCandlestickModelMapper_SetCloseRow(QVCandlestickModelMapper* self, int closeRow) {
	self->setCloseRow(closeRow);
}

int QVCandlestickModelMapper_CloseRow(const QVCandlestickModelMapper* self) {
	return self->closeRow();
}

void QVCandlestickModelMapper_SetFirstSetColumn(QVCandlestickModelMapper* self, int firstSetColumn) {
	self->setFirstSetColumn(firstSetColumn);
}

int QVCandlestickModelMapper_FirstSetColumn(const QVCandlestickModelMapper* self) {
	return self->firstSetColumn();
}

void QVCandlestickModelMapper_SetLastSetColumn(QVCandlestickModelMapper* self, int lastSetColumn) {
	self->setLastSetColumn(lastSetColumn);
}

int QVCandlestickModelMapper_LastSetColumn(const QVCandlestickModelMapper* self) {
	return self->lastSetColumn();
}

void QVCandlestickModelMapper_TimestampRowChanged(QVCandlestickModelMapper* self) {
	self->timestampRowChanged();
}

void QVCandlestickModelMapper_Connect_TimestampRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::timestampRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVCandlestickModelMapper_OpenRowChanged(QVCandlestickModelMapper* self) {
	self->openRowChanged();
}

void QVCandlestickModelMapper_Connect_OpenRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::openRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVCandlestickModelMapper_HighRowChanged(QVCandlestickModelMapper* self) {
	self->highRowChanged();
}

void QVCandlestickModelMapper_Connect_HighRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::highRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVCandlestickModelMapper_LowRowChanged(QVCandlestickModelMapper* self) {
	self->lowRowChanged();
}

void QVCandlestickModelMapper_Connect_LowRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::lowRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVCandlestickModelMapper_CloseRowChanged(QVCandlestickModelMapper* self) {
	self->closeRowChanged();
}

void QVCandlestickModelMapper_Connect_CloseRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::closeRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVCandlestickModelMapper_FirstSetColumnChanged(QVCandlestickModelMapper* self) {
	self->firstSetColumnChanged();
}

void QVCandlestickModelMapper_Connect_FirstSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::firstSetColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVCandlestickModelMapper_LastSetColumnChanged(QVCandlestickModelMapper* self) {
	self->lastSetColumnChanged();
}

void QVCandlestickModelMapper_Connect_LastSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::lastSetColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QVCandlestickModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QVCandlestickModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVCandlestickModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVCandlestickModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseOrientation(const QVCandlestickModelMapper* self) {
	auto* vqvcandlestickmodelmapper = dynamic_cast<const VirtualQVCandlestickModelMapper*>(self);
	if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Orientation_IsBase(true);
	return vqvcandlestickmodelmapper->orientation();
}
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnOrientation(const QVCandlestickModelMapper* self, intptr_t slot) {
	auto* vqvcandlestickmodelmapper = dynamic_cast<const VirtualQVCandlestickModelMapper*>(self);
	if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Orientation_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Orientation_Callback>(slot));
}
}

void QVCandlestickModelMapper_Delete(QVCandlestickModelMapper* self) {
    delete self;
}

