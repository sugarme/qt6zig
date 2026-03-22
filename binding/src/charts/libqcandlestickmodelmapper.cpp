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

void QCandlestickModelMapper_Delete(QCandlestickModelMapper* self) {
    delete self;
}

