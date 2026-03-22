#include <QAbstractItemModel>
#include <QCandlestickModelMapper>
#include <QCandlestickSeries>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcandlestickmodelmapper.h>
#include "libqcandlestickmodelmapper.h"
#include "libqcandlestickmodelmapper.hxx"

QCandlestickModelMapper* QCandlestickModelMapper_new() {
	 return new VirtualQCandlestickModelMapper();
}

QCandlestickModelMapper* QCandlestickModelMapper_new2(QObject* parent) {
	 return new VirtualQCandlestickModelMapper(parent);
}

libqt_string QCandlestickModelMapper_Tr(const char* s) {
	QString _ret = QCandlestickModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCandlestickModelMapper_SetModel(QCandlestickModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QCandlestickModelMapper_Model(const QCandlestickModelMapper* self) {
	return self->model();
}

void QCandlestickModelMapper_SetSeries(QCandlestickModelMapper* self, QCandlestickSeries* series) {
	self->setSeries(series);
}

QCandlestickSeries* QCandlestickModelMapper_Series(const QCandlestickModelMapper* self) {
	return self->series();
}

int QCandlestickModelMapper_Orientation(const QCandlestickModelMapper* self) {
	return self->orientation();
}

void QCandlestickModelMapper_ModelReplaced(QCandlestickModelMapper* self) {
	self->modelReplaced();
}

void QCandlestickModelMapper_Connect_ModelReplaced(QCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickModelMapper*) = reinterpret_cast<void (*)(QCandlestickModelMapper*)>(slot);
    QCandlestickModelMapper::connect(self, &QCandlestickModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickModelMapper_SeriesReplaced(QCandlestickModelMapper* self) {
	self->seriesReplaced();
}

void QCandlestickModelMapper_Connect_SeriesReplaced(QCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickModelMapper*) = reinterpret_cast<void (*)(QCandlestickModelMapper*)>(slot);
    QCandlestickModelMapper::connect(self, &QCandlestickModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QCandlestickModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QCandlestickModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCandlestickModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCandlestickModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseOrientation(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Orientation_IsBase(true);
	return vqcandlestickmodelmapper->orientation();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnOrientation(const QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Orientation_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Orientation_Callback>(slot));
}
}

// Derived class handler implementation
void QCandlestickModelMapper_SetTimestamp(QCandlestickModelMapper* self, int timestamp) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	vqcandlestickmodelmapper->setTimestamp(timestamp);
	} else {
	self->QCandlestickModelMapper::setTimestamp(timestamp);
}
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetTimestamp(QCandlestickModelMapper* self, int timestamp) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetTimestamp_IsBase(true);
	vqcandlestickmodelmapper->setTimestamp(timestamp);
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetTimestamp(QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetTimestamp_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetTimestamp_Callback>(slot));
}
}

// Derived class handler implementation
int QCandlestickModelMapper_Timestamp(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	return vqcandlestickmodelmapper->timestamp();
	} else {
	return self->QCandlestickModelMapper::timestamp();
}
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseTimestamp(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Timestamp_IsBase(true);
	return vqcandlestickmodelmapper->timestamp();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnTimestamp(const QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Timestamp_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Timestamp_Callback>(slot));
}
}

// Derived class handler implementation
void QCandlestickModelMapper_SetOpen(QCandlestickModelMapper* self, int open) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	vqcandlestickmodelmapper->setOpen(open);
	} else {
	self->QCandlestickModelMapper::setOpen(open);
}
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetOpen(QCandlestickModelMapper* self, int open) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetOpen_IsBase(true);
	vqcandlestickmodelmapper->setOpen(open);
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetOpen(QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetOpen_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetOpen_Callback>(slot));
}
}

// Derived class handler implementation
int QCandlestickModelMapper_Open(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	return vqcandlestickmodelmapper->open();
	} else {
	return self->QCandlestickModelMapper::open();
}
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseOpen(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Open_IsBase(true);
	return vqcandlestickmodelmapper->open();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnOpen(const QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Open_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Open_Callback>(slot));
}
}

// Derived class handler implementation
void QCandlestickModelMapper_SetHigh(QCandlestickModelMapper* self, int high) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	vqcandlestickmodelmapper->setHigh(high);
	} else {
	self->QCandlestickModelMapper::setHigh(high);
}
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetHigh(QCandlestickModelMapper* self, int high) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetHigh_IsBase(true);
	vqcandlestickmodelmapper->setHigh(high);
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetHigh(QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetHigh_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetHigh_Callback>(slot));
}
}

// Derived class handler implementation
int QCandlestickModelMapper_High(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	return vqcandlestickmodelmapper->high();
	} else {
	return self->QCandlestickModelMapper::high();
}
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseHigh(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_High_IsBase(true);
	return vqcandlestickmodelmapper->high();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnHigh(const QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_High_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_High_Callback>(slot));
}
}

// Derived class handler implementation
void QCandlestickModelMapper_SetLow(QCandlestickModelMapper* self, int low) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	vqcandlestickmodelmapper->setLow(low);
	} else {
	self->QCandlestickModelMapper::setLow(low);
}
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetLow(QCandlestickModelMapper* self, int low) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetLow_IsBase(true);
	vqcandlestickmodelmapper->setLow(low);
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetLow(QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetLow_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetLow_Callback>(slot));
}
}

// Derived class handler implementation
int QCandlestickModelMapper_Low(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	return vqcandlestickmodelmapper->low();
	} else {
	return self->QCandlestickModelMapper::low();
}
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseLow(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Low_IsBase(true);
	return vqcandlestickmodelmapper->low();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnLow(const QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Low_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Low_Callback>(slot));
}
}

// Derived class handler implementation
void QCandlestickModelMapper_SetClose(QCandlestickModelMapper* self, int close) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	vqcandlestickmodelmapper->setClose(close);
	} else {
	self->QCandlestickModelMapper::setClose(close);
}
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetClose(QCandlestickModelMapper* self, int close) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetClose_IsBase(true);
	vqcandlestickmodelmapper->setClose(close);
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetClose(QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetClose_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetClose_Callback>(slot));
}
}

// Derived class handler implementation
int QCandlestickModelMapper_Close(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	return vqcandlestickmodelmapper->close();
	} else {
	return self->QCandlestickModelMapper::close();
}
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseClose(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Close_IsBase(true);
	return vqcandlestickmodelmapper->close();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnClose(const QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_Close_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Close_Callback>(slot));
}
}

// Derived class handler implementation
void QCandlestickModelMapper_SetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	vqcandlestickmodelmapper->setFirstSetSection(firstSetSection);
	} else {
	self->QCandlestickModelMapper::setFirstSetSection(firstSetSection);
}
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetFirstSetSection_IsBase(true);
	vqcandlestickmodelmapper->setFirstSetSection(firstSetSection);
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetFirstSetSection(QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetFirstSetSection_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetFirstSetSection_Callback>(slot));
}
}

// Derived class handler implementation
int QCandlestickModelMapper_FirstSetSection(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	return vqcandlestickmodelmapper->firstSetSection();
	} else {
	return self->QCandlestickModelMapper::firstSetSection();
}
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseFirstSetSection(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_FirstSetSection_IsBase(true);
	return vqcandlestickmodelmapper->firstSetSection();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnFirstSetSection(const QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_FirstSetSection_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_FirstSetSection_Callback>(slot));
}
}

// Derived class handler implementation
void QCandlestickModelMapper_SetLastSetSection(QCandlestickModelMapper* self, int lastSetSection) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	vqcandlestickmodelmapper->setLastSetSection(lastSetSection);
	} else {
	self->QCandlestickModelMapper::setLastSetSection(lastSetSection);
}
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetLastSetSection(QCandlestickModelMapper* self, int lastSetSection) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetLastSetSection_IsBase(true);
	vqcandlestickmodelmapper->setLastSetSection(lastSetSection);
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetLastSetSection(QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_SetLastSetSection_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetLastSetSection_Callback>(slot));
}
}

// Derived class handler implementation
int QCandlestickModelMapper_LastSetSection(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
	return vqcandlestickmodelmapper->lastSetSection();
	} else {
	return self->QCandlestickModelMapper::lastSetSection();
}
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseLastSetSection(const QCandlestickModelMapper* self) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_LastSetSection_IsBase(true);
	return vqcandlestickmodelmapper->lastSetSection();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnLastSetSection(const QCandlestickModelMapper* self, intptr_t slot) {
	auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
	if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
vqcandlestickmodelmapper->setQCandlestickModelMapper_LastSetSection_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_LastSetSection_Callback>(slot));
}
}

void QCandlestickModelMapper_Delete(QCandlestickModelMapper* self) {
    delete self;
}

