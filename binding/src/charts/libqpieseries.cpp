#include <QAbstractSeries>
#include <QObject>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpieseries.h>
#include "libqpieseries.h"
#include "libqpieseries.hxx"

QPieSeries* QPieSeries_new() {
	 return new VirtualQPieSeries();
}

QPieSeries* QPieSeries_new2(QObject* parent) {
	 return new VirtualQPieSeries(parent);
}

libqt_string QPieSeries_Tr(const char* s) {
	QString _ret = QPieSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QPieSeries_Type(const QPieSeries* self) {
	return self->type();
}

bool QPieSeries_Append(QPieSeries* self, QPieSlice* slice) {
	return self->append(slice);
}

bool QPieSeries_Append2(QPieSeries* self, const libqt_list slices) {
	return self->append(*slices);
}

QPieSeries* QPieSeries_OperatorShiftLeft(QPieSeries* self, QPieSlice* slice) {
	return new QPieSeries(self->operator<<(slice));
}

QPieSlice* QPieSeries_Append3(QPieSeries* self, const libqt_string label, double value) {
	return self->append(QString::fromUtf8(label.data, label.len), value);
}

bool QPieSeries_Insert(QPieSeries* self, int index, QPieSlice* slice) {
	return self->insert(index, slice);
}

bool QPieSeries_Remove(QPieSeries* self, QPieSlice* slice) {
	return self->remove(slice);
}

bool QPieSeries_Take(QPieSeries* self, QPieSlice* slice) {
	return self->take(slice);
}

void QPieSeries_Clear(QPieSeries* self) {
	self->clear();
}

libqt_list QPieSeries_Slices(const QPieSeries* self) {
	return self->slices();
}

int QPieSeries_Count(const QPieSeries* self) {
	return self->count();
}

bool QPieSeries_IsEmpty(const QPieSeries* self) {
	return self->isEmpty();
}

double QPieSeries_Sum(const QPieSeries* self) {
	return self->sum();
}

void QPieSeries_SetHoleSize(QPieSeries* self, double holeSize) {
	self->setHoleSize(holeSize);
}

double QPieSeries_HoleSize(const QPieSeries* self) {
	return self->holeSize();
}

void QPieSeries_SetHorizontalPosition(QPieSeries* self, double relativePosition) {
	self->setHorizontalPosition(relativePosition);
}

double QPieSeries_HorizontalPosition(const QPieSeries* self) {
	return self->horizontalPosition();
}

void QPieSeries_SetVerticalPosition(QPieSeries* self, double relativePosition) {
	self->setVerticalPosition(relativePosition);
}

double QPieSeries_VerticalPosition(const QPieSeries* self) {
	return self->verticalPosition();
}

void QPieSeries_SetPieSize(QPieSeries* self, double relativeSize) {
	self->setPieSize(relativeSize);
}

double QPieSeries_PieSize(const QPieSeries* self) {
	return self->pieSize();
}

void QPieSeries_SetPieStartAngle(QPieSeries* self, double startAngle) {
	self->setPieStartAngle(startAngle);
}

double QPieSeries_PieStartAngle(const QPieSeries* self) {
	return self->pieStartAngle();
}

void QPieSeries_SetPieEndAngle(QPieSeries* self, double endAngle) {
	self->setPieEndAngle(endAngle);
}

double QPieSeries_PieEndAngle(const QPieSeries* self) {
	return self->pieEndAngle();
}

void QPieSeries_SetLabelsVisible(QPieSeries* self) {
	self->setLabelsVisible();
}

void QPieSeries_SetLabelsPosition(QPieSeries* self, int position) {
	self->setLabelsPosition(static_cast<QPieSlice::LabelPosition>(position));
}

void QPieSeries_Added(QPieSeries* self, const libqt_list slices) {
	self->added(*slices);
}

void QPieSeries_Connect_Added(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, libqt_list) = reinterpret_cast<void (*)(QPieSeries*, libqt_list)>(slot);
    QPieSeries::connect(self, &QPieSeries::added, [self, slotFunc](const QList<QPieSlice *>& slices) {
	slotFunc(self, slices);
    });
}

void QPieSeries_Removed(QPieSeries* self, const libqt_list slices) {
	self->removed(*slices);
}

void QPieSeries_Connect_Removed(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, libqt_list) = reinterpret_cast<void (*)(QPieSeries*, libqt_list)>(slot);
    QPieSeries::connect(self, &QPieSeries::removed, [self, slotFunc](const QList<QPieSlice *>& slices) {
	slotFunc(self, slices);
    });
}

void QPieSeries_Clicked(QPieSeries* self, QPieSlice* slice) {
	self->clicked(slice);
}

void QPieSeries_Connect_Clicked(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self, &QPieSeries::clicked, [self, slotFunc](QPieSlice* slice) {
	slotFunc(self, slice);
    });
}

void QPieSeries_Hovered(QPieSeries* self, QPieSlice* slice, bool state) {
	self->hovered(slice, state);
}

void QPieSeries_Connect_Hovered(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*, bool) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*, bool)>(slot);
    QPieSeries::connect(self, &QPieSeries::hovered, [self, slotFunc](QPieSlice* slice, bool state) {
	slotFunc(self, slice, state);
    });
}

void QPieSeries_Pressed(QPieSeries* self, QPieSlice* slice) {
	self->pressed(slice);
}

void QPieSeries_Connect_Pressed(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self, &QPieSeries::pressed, [self, slotFunc](QPieSlice* slice) {
	slotFunc(self, slice);
    });
}

void QPieSeries_Released(QPieSeries* self, QPieSlice* slice) {
	self->released(slice);
}

void QPieSeries_Connect_Released(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self, &QPieSeries::released, [self, slotFunc](QPieSlice* slice) {
	slotFunc(self, slice);
    });
}

void QPieSeries_DoubleClicked(QPieSeries* self, QPieSlice* slice) {
	self->doubleClicked(slice);
}

void QPieSeries_Connect_DoubleClicked(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self, &QPieSeries::doubleClicked, [self, slotFunc](QPieSlice* slice) {
	slotFunc(self, slice);
    });
}

void QPieSeries_CountChanged(QPieSeries* self) {
	self->countChanged();
}

void QPieSeries_Connect_CountChanged(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*) = reinterpret_cast<void (*)(QPieSeries*)>(slot);
    QPieSeries::connect(self, &QPieSeries::countChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSeries_SumChanged(QPieSeries* self) {
	self->sumChanged();
}

void QPieSeries_Connect_SumChanged(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*) = reinterpret_cast<void (*)(QPieSeries*)>(slot);
    QPieSeries::connect(self, &QPieSeries::sumChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QPieSeries_Tr2(const char* s, const char* c) {
	QString _ret = QPieSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPieSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPieSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPieSeries_SetLabelsVisible1(QPieSeries* self, bool visible) {
	self->setLabelsVisible(visible);
}

// Base class handler implementation
int QPieSeries_QBaseType(const QPieSeries* self) {
	auto* vqpieseries = dynamic_cast<const VirtualQPieSeries*>(self);
	if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
vqpieseries->setQPieSeries_Type_IsBase(true);
	return vqpieseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnType(const QPieSeries* self, intptr_t slot) {
	auto* vqpieseries = dynamic_cast<const VirtualQPieSeries*>(self);
	if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
vqpieseries->setQPieSeries_Type_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Type_Callback>(slot));
}
}

void QPieSeries_Delete(QPieSeries* self) {
    delete self;
}

