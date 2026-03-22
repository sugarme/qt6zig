#include <QAbstractItemModel>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QHBoxPlotModelMapper>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qhboxplotmodelmapper.h>
#include "libqhboxplotmodelmapper.h"
#include "libqhboxplotmodelmapper.hxx"

QHBoxPlotModelMapper* QHBoxPlotModelMapper_new() {
	 return new QHBoxPlotModelMapper();
}

QHBoxPlotModelMapper* QHBoxPlotModelMapper_new2(QObject* parent) {
	 return new QHBoxPlotModelMapper(parent);
}

libqt_string QHBoxPlotModelMapper_Tr(const char* s) {
	QString _ret = QHBoxPlotModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QHBoxPlotModelMapper_Model(const QHBoxPlotModelMapper* self) {
	return self->model();
}

void QHBoxPlotModelMapper_SetModel(QHBoxPlotModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QBoxPlotSeries* QHBoxPlotModelMapper_Series(const QHBoxPlotModelMapper* self) {
	return self->series();
}

void QHBoxPlotModelMapper_SetSeries(QHBoxPlotModelMapper* self, QBoxPlotSeries* series) {
	self->setSeries(series);
}

int QHBoxPlotModelMapper_FirstBoxSetRow(const QHBoxPlotModelMapper* self) {
	return self->firstBoxSetRow();
}

void QHBoxPlotModelMapper_SetFirstBoxSetRow(QHBoxPlotModelMapper* self, int firstBoxSetRow) {
	self->setFirstBoxSetRow(firstBoxSetRow);
}

int QHBoxPlotModelMapper_LastBoxSetRow(const QHBoxPlotModelMapper* self) {
	return self->lastBoxSetRow();
}

void QHBoxPlotModelMapper_SetLastBoxSetRow(QHBoxPlotModelMapper* self, int lastBoxSetRow) {
	self->setLastBoxSetRow(lastBoxSetRow);
}

int QHBoxPlotModelMapper_FirstColumn(const QHBoxPlotModelMapper* self) {
	return self->firstColumn();
}

void QHBoxPlotModelMapper_SetFirstColumn(QHBoxPlotModelMapper* self, int firstColumn) {
	self->setFirstColumn(firstColumn);
}

int QHBoxPlotModelMapper_ColumnCount(const QHBoxPlotModelMapper* self) {
	return self->columnCount();
}

void QHBoxPlotModelMapper_SetColumnCount(QHBoxPlotModelMapper* self, int rowCount) {
	self->setColumnCount(rowCount);
}

void QHBoxPlotModelMapper_SeriesReplaced(QHBoxPlotModelMapper* self) {
	self->seriesReplaced();
}

void QHBoxPlotModelMapper_Connect_SeriesReplaced(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBoxPlotModelMapper_ModelReplaced(QHBoxPlotModelMapper* self) {
	self->modelReplaced();
}

void QHBoxPlotModelMapper_Connect_ModelReplaced(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBoxPlotModelMapper_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self) {
	self->firstBoxSetRowChanged();
}

void QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::firstBoxSetRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBoxPlotModelMapper_LastBoxSetRowChanged(QHBoxPlotModelMapper* self) {
	self->lastBoxSetRowChanged();
}

void QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::lastBoxSetRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBoxPlotModelMapper_FirstColumnChanged(QHBoxPlotModelMapper* self) {
	self->firstColumnChanged();
}

void QHBoxPlotModelMapper_Connect_FirstColumnChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::firstColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBoxPlotModelMapper_ColumnCountChanged(QHBoxPlotModelMapper* self) {
	self->columnCountChanged();
}

void QHBoxPlotModelMapper_Connect_ColumnCountChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::columnCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QHBoxPlotModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QHBoxPlotModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHBoxPlotModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHBoxPlotModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHBoxPlotModelMapper_Delete(QHBoxPlotModelMapper* self) {
    delete self;
}

