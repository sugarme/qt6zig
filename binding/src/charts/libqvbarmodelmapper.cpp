#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVBarModelMapper>
#include <qvbarmodelmapper.h>
#include "libqvbarmodelmapper.h"
#include "libqvbarmodelmapper.hxx"

QVBarModelMapper* QVBarModelMapper_new() {
	 return new QVBarModelMapper();
}

QVBarModelMapper* QVBarModelMapper_new2(QObject* parent) {
	 return new QVBarModelMapper(parent);
}

libqt_string QVBarModelMapper_Tr(const char* s) {
	QString _ret = QVBarModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QVBarModelMapper_Model(const QVBarModelMapper* self) {
	return self->model();
}

void QVBarModelMapper_SetModel(QVBarModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractBarSeries* QVBarModelMapper_Series(const QVBarModelMapper* self) {
	return self->series();
}

void QVBarModelMapper_SetSeries(QVBarModelMapper* self, QAbstractBarSeries* series) {
	self->setSeries(series);
}

int QVBarModelMapper_FirstBarSetColumn(const QVBarModelMapper* self) {
	return self->firstBarSetColumn();
}

void QVBarModelMapper_SetFirstBarSetColumn(QVBarModelMapper* self, int firstBarSetColumn) {
	self->setFirstBarSetColumn(firstBarSetColumn);
}

int QVBarModelMapper_LastBarSetColumn(const QVBarModelMapper* self) {
	return self->lastBarSetColumn();
}

void QVBarModelMapper_SetLastBarSetColumn(QVBarModelMapper* self, int lastBarSetColumn) {
	self->setLastBarSetColumn(lastBarSetColumn);
}

int QVBarModelMapper_FirstRow(const QVBarModelMapper* self) {
	return self->firstRow();
}

void QVBarModelMapper_SetFirstRow(QVBarModelMapper* self, int firstRow) {
	self->setFirstRow(firstRow);
}

int QVBarModelMapper_RowCount(const QVBarModelMapper* self) {
	return self->rowCount();
}

void QVBarModelMapper_SetRowCount(QVBarModelMapper* self, int rowCount) {
	self->setRowCount(rowCount);
}

void QVBarModelMapper_SeriesReplaced(QVBarModelMapper* self) {
	self->seriesReplaced();
}

void QVBarModelMapper_Connect_SeriesReplaced(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBarModelMapper_ModelReplaced(QVBarModelMapper* self) {
	self->modelReplaced();
}

void QVBarModelMapper_Connect_ModelReplaced(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBarModelMapper_FirstBarSetColumnChanged(QVBarModelMapper* self) {
	self->firstBarSetColumnChanged();
}

void QVBarModelMapper_Connect_FirstBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::firstBarSetColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBarModelMapper_LastBarSetColumnChanged(QVBarModelMapper* self) {
	self->lastBarSetColumnChanged();
}

void QVBarModelMapper_Connect_LastBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::lastBarSetColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBarModelMapper_FirstRowChanged(QVBarModelMapper* self) {
	self->firstRowChanged();
}

void QVBarModelMapper_Connect_FirstRowChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::firstRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVBarModelMapper_RowCountChanged(QVBarModelMapper* self) {
	self->rowCountChanged();
}

void QVBarModelMapper_Connect_RowCountChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::rowCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QVBarModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QVBarModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVBarModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVBarModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVBarModelMapper_Delete(QVBarModelMapper* self) {
    delete self;
}

