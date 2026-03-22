#include <QAbstractItemModel>
#include <QHXYModelMapper>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXYModelMapper>
#include <QXYSeries>
#include <qhxymodelmapper.h>
#include "libqhxymodelmapper.h"
#include "libqhxymodelmapper.hxx"

QHXYModelMapper* QHXYModelMapper_new() {
	 return new QHXYModelMapper();
}

QHXYModelMapper* QHXYModelMapper_new2(QObject* parent) {
	 return new QHXYModelMapper(parent);
}

libqt_string QHXYModelMapper_Tr(const char* s) {
	QString _ret = QHXYModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QHXYModelMapper_Model(const QHXYModelMapper* self) {
	return self->model();
}

void QHXYModelMapper_SetModel(QHXYModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QXYSeries* QHXYModelMapper_Series(const QHXYModelMapper* self) {
	return self->series();
}

void QHXYModelMapper_SetSeries(QHXYModelMapper* self, QXYSeries* series) {
	self->setSeries(series);
}

int QHXYModelMapper_XRow(const QHXYModelMapper* self) {
	return self->xRow();
}

void QHXYModelMapper_SetXRow(QHXYModelMapper* self, int xRow) {
	self->setXRow(xRow);
}

int QHXYModelMapper_YRow(const QHXYModelMapper* self) {
	return self->yRow();
}

void QHXYModelMapper_SetYRow(QHXYModelMapper* self, int yRow) {
	self->setYRow(yRow);
}

int QHXYModelMapper_FirstColumn(const QHXYModelMapper* self) {
	return self->firstColumn();
}

void QHXYModelMapper_SetFirstColumn(QHXYModelMapper* self, int firstColumn) {
	self->setFirstColumn(firstColumn);
}

int QHXYModelMapper_ColumnCount(const QHXYModelMapper* self) {
	return self->columnCount();
}

void QHXYModelMapper_SetColumnCount(QHXYModelMapper* self, int columnCount) {
	self->setColumnCount(columnCount);
}

void QHXYModelMapper_SeriesReplaced(QHXYModelMapper* self) {
	self->seriesReplaced();
}

void QHXYModelMapper_Connect_SeriesReplaced(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHXYModelMapper_ModelReplaced(QHXYModelMapper* self) {
	self->modelReplaced();
}

void QHXYModelMapper_Connect_ModelReplaced(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHXYModelMapper_XRowChanged(QHXYModelMapper* self) {
	self->xRowChanged();
}

void QHXYModelMapper_Connect_XRowChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::xRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHXYModelMapper_YRowChanged(QHXYModelMapper* self) {
	self->yRowChanged();
}

void QHXYModelMapper_Connect_YRowChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::yRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHXYModelMapper_FirstColumnChanged(QHXYModelMapper* self) {
	self->firstColumnChanged();
}

void QHXYModelMapper_Connect_FirstColumnChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::firstColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHXYModelMapper_ColumnCountChanged(QHXYModelMapper* self) {
	self->columnCountChanged();
}

void QHXYModelMapper_Connect_ColumnCountChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::columnCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QHXYModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QHXYModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHXYModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHXYModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHXYModelMapper_Delete(QHXYModelMapper* self) {
    delete self;
}

