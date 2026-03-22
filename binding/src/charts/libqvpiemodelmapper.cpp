#include <QAbstractItemModel>
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVPieModelMapper>
#include <qvpiemodelmapper.h>
#include "libqvpiemodelmapper.h"
#include "libqvpiemodelmapper.hxx"

QVPieModelMapper* QVPieModelMapper_new() {
	 return new QVPieModelMapper();
}

QVPieModelMapper* QVPieModelMapper_new2(QObject* parent) {
	 return new QVPieModelMapper(parent);
}

libqt_string QVPieModelMapper_Tr(const char* s) {
	QString _ret = QVPieModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QVPieModelMapper_Model(const QVPieModelMapper* self) {
	return self->model();
}

void QVPieModelMapper_SetModel(QVPieModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QPieSeries* QVPieModelMapper_Series(const QVPieModelMapper* self) {
	return self->series();
}

void QVPieModelMapper_SetSeries(QVPieModelMapper* self, QPieSeries* series) {
	self->setSeries(series);
}

int QVPieModelMapper_ValuesColumn(const QVPieModelMapper* self) {
	return self->valuesColumn();
}

void QVPieModelMapper_SetValuesColumn(QVPieModelMapper* self, int valuesColumn) {
	self->setValuesColumn(valuesColumn);
}

int QVPieModelMapper_LabelsColumn(const QVPieModelMapper* self) {
	return self->labelsColumn();
}

void QVPieModelMapper_SetLabelsColumn(QVPieModelMapper* self, int labelsColumn) {
	self->setLabelsColumn(labelsColumn);
}

int QVPieModelMapper_FirstRow(const QVPieModelMapper* self) {
	return self->firstRow();
}

void QVPieModelMapper_SetFirstRow(QVPieModelMapper* self, int firstRow) {
	self->setFirstRow(firstRow);
}

int QVPieModelMapper_RowCount(const QVPieModelMapper* self) {
	return self->rowCount();
}

void QVPieModelMapper_SetRowCount(QVPieModelMapper* self, int rowCount) {
	self->setRowCount(rowCount);
}

void QVPieModelMapper_SeriesReplaced(QVPieModelMapper* self) {
	self->seriesReplaced();
}

void QVPieModelMapper_Connect_SeriesReplaced(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::seriesReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVPieModelMapper_ModelReplaced(QVPieModelMapper* self) {
	self->modelReplaced();
}

void QVPieModelMapper_Connect_ModelReplaced(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::modelReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVPieModelMapper_ValuesColumnChanged(QVPieModelMapper* self) {
	self->valuesColumnChanged();
}

void QVPieModelMapper_Connect_ValuesColumnChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::valuesColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVPieModelMapper_LabelsColumnChanged(QVPieModelMapper* self) {
	self->labelsColumnChanged();
}

void QVPieModelMapper_Connect_LabelsColumnChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::labelsColumnChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVPieModelMapper_FirstRowChanged(QVPieModelMapper* self) {
	self->firstRowChanged();
}

void QVPieModelMapper_Connect_FirstRowChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::firstRowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QVPieModelMapper_RowCountChanged(QVPieModelMapper* self) {
	self->rowCountChanged();
}

void QVPieModelMapper_Connect_RowCountChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::rowCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QVPieModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QVPieModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVPieModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVPieModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVPieModelMapper_Delete(QVPieModelMapper* self) {
    delete self;
}

