#include <QAbstractItemModel>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVBoxPlotModelMapper>
#include <qvboxplotmodelmapper.h>
#include "libqvboxplotmodelmapper.h"
#include "libqvboxplotmodelmapper.hxx"

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new() {
	 return new QVBoxPlotModelMapper();
}

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new2(QObject* parent) {
	 return new QVBoxPlotModelMapper(parent);
}

libqt_string QVBoxPlotModelMapper_Tr(const char* s) {
	QString _ret = QVBoxPlotModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QVBoxPlotModelMapper_Model(const QVBoxPlotModelMapper* self) {
	return self->model();
}

void QVBoxPlotModelMapper_SetModel(QVBoxPlotModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QBoxPlotSeries* QVBoxPlotModelMapper_Series(const QVBoxPlotModelMapper* self) {
	return self->series();
}

void QVBoxPlotModelMapper_SetSeries(QVBoxPlotModelMapper* self, QBoxPlotSeries* series) {
	self->setSeries(series);
}

int QVBoxPlotModelMapper_FirstBoxSetColumn(const QVBoxPlotModelMapper* self) {
	return self->firstBoxSetColumn();
}

void QVBoxPlotModelMapper_SetFirstBoxSetColumn(QVBoxPlotModelMapper* self, int firstBoxSetColumn) {
	self->setFirstBoxSetColumn(firstBoxSetColumn);
}

int QVBoxPlotModelMapper_LastBoxSetColumn(const QVBoxPlotModelMapper* self) {
	return self->lastBoxSetColumn();
}

void QVBoxPlotModelMapper_SetLastBoxSetColumn(QVBoxPlotModelMapper* self, int lastBoxSetColumn) {
	self->setLastBoxSetColumn(lastBoxSetColumn);
}

int QVBoxPlotModelMapper_FirstRow(const QVBoxPlotModelMapper* self) {
	return self->firstRow();
}

void QVBoxPlotModelMapper_SetFirstRow(QVBoxPlotModelMapper* self, int firstRow) {
	self->setFirstRow(firstRow);
}

int QVBoxPlotModelMapper_RowCount(const QVBoxPlotModelMapper* self) {
	return self->rowCount();
}

void QVBoxPlotModelMapper_SetRowCount(QVBoxPlotModelMapper* self, int rowCount) {
	self->setRowCount(rowCount);
}

void QVBoxPlotModelMapper_SeriesReplaced(QVBoxPlotModelMapper* self) {
	self->seriesReplaced();
}

void QVBoxPlotModelMapper_Connect_SeriesReplaced(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBoxPlotModelMapper_ModelReplaced(QVBoxPlotModelMapper* self) {
	self->modelReplaced();
}

void QVBoxPlotModelMapper_Connect_ModelReplaced(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBoxPlotModelMapper_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self) {
	self->firstBoxSetColumnChanged();
}

void QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::firstBoxSetColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBoxPlotModelMapper_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self) {
	self->lastBoxSetColumnChanged();
}

void QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::lastBoxSetColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBoxPlotModelMapper_FirstRowChanged(QVBoxPlotModelMapper* self) {
	self->firstRowChanged();
}

void QVBoxPlotModelMapper_Connect_FirstRowChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::firstRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBoxPlotModelMapper_RowCountChanged(QVBoxPlotModelMapper* self) {
	self->rowCountChanged();
}

void QVBoxPlotModelMapper_Connect_RowCountChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::rowCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QVBoxPlotModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QVBoxPlotModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVBoxPlotModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVBoxPlotModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVBoxPlotModelMapper_Delete(QVBoxPlotModelMapper* self) {
    delete self;
}

