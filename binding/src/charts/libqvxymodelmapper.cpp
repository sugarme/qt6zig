#include <QAbstractItemModel>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVXYModelMapper>
#include <QXYModelMapper>
#include <QXYSeries>
#include <qvxymodelmapper.h>
#include "libqvxymodelmapper.h"
#include "libqvxymodelmapper.hxx"

QVXYModelMapper* QVXYModelMapper_new() {
	 return new QVXYModelMapper();
}

QVXYModelMapper* QVXYModelMapper_new2(QObject* parent) {
	 return new QVXYModelMapper(parent);
}

libqt_string QVXYModelMapper_Tr(const char* s) {
	QString _ret = QVXYModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QVXYModelMapper_Model(const QVXYModelMapper* self) {
	return self->model();
}

void QVXYModelMapper_SetModel(QVXYModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QXYSeries* QVXYModelMapper_Series(const QVXYModelMapper* self) {
	return self->series();
}

void QVXYModelMapper_SetSeries(QVXYModelMapper* self, QXYSeries* series) {
	self->setSeries(series);
}

int QVXYModelMapper_XColumn(const QVXYModelMapper* self) {
	return self->xColumn();
}

void QVXYModelMapper_SetXColumn(QVXYModelMapper* self, int xColumn) {
	self->setXColumn(xColumn);
}

int QVXYModelMapper_YColumn(const QVXYModelMapper* self) {
	return self->yColumn();
}

void QVXYModelMapper_SetYColumn(QVXYModelMapper* self, int yColumn) {
	self->setYColumn(yColumn);
}

int QVXYModelMapper_FirstRow(const QVXYModelMapper* self) {
	return self->firstRow();
}

void QVXYModelMapper_SetFirstRow(QVXYModelMapper* self, int firstRow) {
	self->setFirstRow(firstRow);
}

int QVXYModelMapper_RowCount(const QVXYModelMapper* self) {
	return self->rowCount();
}

void QVXYModelMapper_SetRowCount(QVXYModelMapper* self, int rowCount) {
	self->setRowCount(rowCount);
}

void QVXYModelMapper_SeriesReplaced(QVXYModelMapper* self) {
	self->seriesReplaced();
}

void QVXYModelMapper_Connect_SeriesReplaced(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVXYModelMapper_ModelReplaced(QVXYModelMapper* self) {
	self->modelReplaced();
}

void QVXYModelMapper_Connect_ModelReplaced(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVXYModelMapper_XColumnChanged(QVXYModelMapper* self) {
	self->xColumnChanged();
}

void QVXYModelMapper_Connect_XColumnChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::xColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVXYModelMapper_YColumnChanged(QVXYModelMapper* self) {
	self->yColumnChanged();
}

void QVXYModelMapper_Connect_YColumnChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::yColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVXYModelMapper_FirstRowChanged(QVXYModelMapper* self) {
	self->firstRowChanged();
}

void QVXYModelMapper_Connect_FirstRowChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::firstRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVXYModelMapper_RowCountChanged(QVXYModelMapper* self) {
	self->rowCountChanged();
}

void QVXYModelMapper_Connect_RowCountChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::rowCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QVXYModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QVXYModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVXYModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVXYModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVXYModelMapper_Delete(QVXYModelMapper* self) {
    delete self;
}

