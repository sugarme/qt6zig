#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QHBarModelMapper>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhbarmodelmapper.h>
#include "libqhbarmodelmapper.h"
#include "libqhbarmodelmapper.hxx"

QHBarModelMapper* QHBarModelMapper_new() {
	 return new QHBarModelMapper();
}

QHBarModelMapper* QHBarModelMapper_new2(QObject* parent) {
	 return new QHBarModelMapper(parent);
}

libqt_string QHBarModelMapper_Tr(const char* s) {
	QString _ret = QHBarModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QHBarModelMapper_Model(const QHBarModelMapper* self) {
	return self->model();
}

void QHBarModelMapper_SetModel(QHBarModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractBarSeries* QHBarModelMapper_Series(const QHBarModelMapper* self) {
	return self->series();
}

void QHBarModelMapper_SetSeries(QHBarModelMapper* self, QAbstractBarSeries* series) {
	self->setSeries(series);
}

int QHBarModelMapper_FirstBarSetRow(const QHBarModelMapper* self) {
	return self->firstBarSetRow();
}

void QHBarModelMapper_SetFirstBarSetRow(QHBarModelMapper* self, int firstBarSetRow) {
	self->setFirstBarSetRow(firstBarSetRow);
}

int QHBarModelMapper_LastBarSetRow(const QHBarModelMapper* self) {
	return self->lastBarSetRow();
}

void QHBarModelMapper_SetLastBarSetRow(QHBarModelMapper* self, int lastBarSetRow) {
	self->setLastBarSetRow(lastBarSetRow);
}

int QHBarModelMapper_FirstColumn(const QHBarModelMapper* self) {
	return self->firstColumn();
}

void QHBarModelMapper_SetFirstColumn(QHBarModelMapper* self, int firstColumn) {
	self->setFirstColumn(firstColumn);
}

int QHBarModelMapper_ColumnCount(const QHBarModelMapper* self) {
	return self->columnCount();
}

void QHBarModelMapper_SetColumnCount(QHBarModelMapper* self, int columnCount) {
	self->setColumnCount(columnCount);
}

void QHBarModelMapper_SeriesReplaced(QHBarModelMapper* self) {
	self->seriesReplaced();
}

void QHBarModelMapper_Connect_SeriesReplaced(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBarModelMapper_ModelReplaced(QHBarModelMapper* self) {
	self->modelReplaced();
}

void QHBarModelMapper_Connect_ModelReplaced(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBarModelMapper_FirstBarSetRowChanged(QHBarModelMapper* self) {
	self->firstBarSetRowChanged();
}

void QHBarModelMapper_Connect_FirstBarSetRowChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::firstBarSetRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBarModelMapper_LastBarSetRowChanged(QHBarModelMapper* self) {
	self->lastBarSetRowChanged();
}

void QHBarModelMapper_Connect_LastBarSetRowChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::lastBarSetRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBarModelMapper_FirstColumnChanged(QHBarModelMapper* self) {
	self->firstColumnChanged();
}

void QHBarModelMapper_Connect_FirstColumnChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::firstColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHBarModelMapper_ColumnCountChanged(QHBarModelMapper* self) {
	self->columnCountChanged();
}

void QHBarModelMapper_Connect_ColumnCountChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::columnCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QHBarModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QHBarModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHBarModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHBarModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHBarModelMapper_Delete(QHBarModelMapper* self) {
    delete self;
}

