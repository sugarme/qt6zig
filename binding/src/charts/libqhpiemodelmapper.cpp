#include <QAbstractItemModel>
#include <QHPieModelMapper>
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qhpiemodelmapper.h>
#include "libqhpiemodelmapper.h"
#include "libqhpiemodelmapper.hxx"

QHPieModelMapper* QHPieModelMapper_new() {
	 return new QHPieModelMapper();
}

QHPieModelMapper* QHPieModelMapper_new2(QObject* parent) {
	 return new QHPieModelMapper(parent);
}

libqt_string QHPieModelMapper_Tr(const char* s) {
	QString _ret = QHPieModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QHPieModelMapper_Model(const QHPieModelMapper* self) {
	return self->model();
}

void QHPieModelMapper_SetModel(QHPieModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QPieSeries* QHPieModelMapper_Series(const QHPieModelMapper* self) {
	return self->series();
}

void QHPieModelMapper_SetSeries(QHPieModelMapper* self, QPieSeries* series) {
	self->setSeries(series);
}

int QHPieModelMapper_ValuesRow(const QHPieModelMapper* self) {
	return self->valuesRow();
}

void QHPieModelMapper_SetValuesRow(QHPieModelMapper* self, int valuesRow) {
	self->setValuesRow(valuesRow);
}

int QHPieModelMapper_LabelsRow(const QHPieModelMapper* self) {
	return self->labelsRow();
}

void QHPieModelMapper_SetLabelsRow(QHPieModelMapper* self, int labelsRow) {
	self->setLabelsRow(labelsRow);
}

int QHPieModelMapper_FirstColumn(const QHPieModelMapper* self) {
	return self->firstColumn();
}

void QHPieModelMapper_SetFirstColumn(QHPieModelMapper* self, int firstColumn) {
	self->setFirstColumn(firstColumn);
}

int QHPieModelMapper_ColumnCount(const QHPieModelMapper* self) {
	return self->columnCount();
}

void QHPieModelMapper_SetColumnCount(QHPieModelMapper* self, int columnCount) {
	self->setColumnCount(columnCount);
}

void QHPieModelMapper_SeriesReplaced(QHPieModelMapper* self) {
	self->seriesReplaced();
}

void QHPieModelMapper_Connect_SeriesReplaced(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHPieModelMapper_ModelReplaced(QHPieModelMapper* self) {
	self->modelReplaced();
}

void QHPieModelMapper_Connect_ModelReplaced(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHPieModelMapper_ValuesRowChanged(QHPieModelMapper* self) {
	self->valuesRowChanged();
}

void QHPieModelMapper_Connect_ValuesRowChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::valuesRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHPieModelMapper_LabelsRowChanged(QHPieModelMapper* self) {
	self->labelsRowChanged();
}

void QHPieModelMapper_Connect_LabelsRowChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::labelsRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHPieModelMapper_FirstColumnChanged(QHPieModelMapper* self) {
	self->firstColumnChanged();
}

void QHPieModelMapper_Connect_FirstColumnChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::firstColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHPieModelMapper_ColumnCountChanged(QHPieModelMapper* self) {
	self->columnCountChanged();
}

void QHPieModelMapper_Connect_ColumnCountChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::columnCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QHPieModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QHPieModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHPieModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHPieModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHPieModelMapper_Delete(QHPieModelMapper* self) {
    delete self;
}

