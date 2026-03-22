#include <QAbstractSeries>
#include <QBrush>
#include <QCandlestickSeries>
#include <QCandlestickSet>
#include <QColor>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcandlestickseries.h>
#include "libqcandlestickseries.h"
#include "libqcandlestickseries.hxx"

QCandlestickSeries* QCandlestickSeries_new() {
	 return new VirtualQCandlestickSeries();
}

QCandlestickSeries* QCandlestickSeries_new2(QObject* parent) {
	 return new VirtualQCandlestickSeries(parent);
}

libqt_string QCandlestickSeries_Tr(const char* s) {
	QString _ret = QCandlestickSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QCandlestickSeries_Append(QCandlestickSeries* self, QCandlestickSet* set) {
	return self->append(set);
}

bool QCandlestickSeries_Remove(QCandlestickSeries* self, QCandlestickSet* set) {
	return self->remove(set);
}

bool QCandlestickSeries_Append2(QCandlestickSeries* self, const libqt_list sets) {
	return self->append(*sets);
}

bool QCandlestickSeries_Remove2(QCandlestickSeries* self, const libqt_list sets) {
	return self->remove(*sets);
}

bool QCandlestickSeries_Insert(QCandlestickSeries* self, int index, QCandlestickSet* set) {
	return self->insert(index, set);
}

bool QCandlestickSeries_Take(QCandlestickSeries* self, QCandlestickSet* set) {
	return self->take(set);
}

void QCandlestickSeries_Clear(QCandlestickSeries* self) {
	self->clear();
}

libqt_list QCandlestickSeries_Sets(const QCandlestickSeries* self) {
	return self->sets();
}

int QCandlestickSeries_Count(const QCandlestickSeries* self) {
	return self->count();
}

int QCandlestickSeries_Type(const QCandlestickSeries* self) {
	return self->type();
}

void QCandlestickSeries_SetMaximumColumnWidth(QCandlestickSeries* self, double maximumColumnWidth) {
	self->setMaximumColumnWidth(maximumColumnWidth);
}

double QCandlestickSeries_MaximumColumnWidth(const QCandlestickSeries* self) {
	return self->maximumColumnWidth();
}

void QCandlestickSeries_SetMinimumColumnWidth(QCandlestickSeries* self, double minimumColumnWidth) {
	self->setMinimumColumnWidth(minimumColumnWidth);
}

double QCandlestickSeries_MinimumColumnWidth(const QCandlestickSeries* self) {
	return self->minimumColumnWidth();
}

void QCandlestickSeries_SetBodyWidth(QCandlestickSeries* self, double bodyWidth) {
	self->setBodyWidth(bodyWidth);
}

double QCandlestickSeries_BodyWidth(const QCandlestickSeries* self) {
	return self->bodyWidth();
}

void QCandlestickSeries_SetBodyOutlineVisible(QCandlestickSeries* self, bool bodyOutlineVisible) {
	self->setBodyOutlineVisible(bodyOutlineVisible);
}

bool QCandlestickSeries_BodyOutlineVisible(const QCandlestickSeries* self) {
	return self->bodyOutlineVisible();
}

void QCandlestickSeries_SetCapsWidth(QCandlestickSeries* self, double capsWidth) {
	self->setCapsWidth(capsWidth);
}

double QCandlestickSeries_CapsWidth(const QCandlestickSeries* self) {
	return self->capsWidth();
}

void QCandlestickSeries_SetCapsVisible(QCandlestickSeries* self, bool capsVisible) {
	self->setCapsVisible(capsVisible);
}

bool QCandlestickSeries_CapsVisible(const QCandlestickSeries* self) {
	return self->capsVisible();
}

void QCandlestickSeries_SetIncreasingColor(QCandlestickSeries* self, const QColor* increasingColor) {
	self->setIncreasingColor(*increasingColor);
}

QColor* QCandlestickSeries_IncreasingColor(const QCandlestickSeries* self) {
	return new QColor(self->increasingColor());
}

void QCandlestickSeries_SetDecreasingColor(QCandlestickSeries* self, const QColor* decreasingColor) {
	self->setDecreasingColor(*decreasingColor);
}

QColor* QCandlestickSeries_DecreasingColor(const QCandlestickSeries* self) {
	return new QColor(self->decreasingColor());
}

void QCandlestickSeries_SetBrush(QCandlestickSeries* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QCandlestickSeries_Brush(const QCandlestickSeries* self) {
	return new QBrush(self->brush());
}

void QCandlestickSeries_SetPen(QCandlestickSeries* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QCandlestickSeries_Pen(const QCandlestickSeries* self) {
	return new QPen(self->pen());
}

void QCandlestickSeries_Clicked(QCandlestickSeries* self, QCandlestickSet* set) {
	self->clicked(set);
}

void QCandlestickSeries_Connect_Clicked(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::clicked, [self, slotFunc](QCandlestickSet* set) {
	slotFunc(self, set);
    });
}

void QCandlestickSeries_Hovered(QCandlestickSeries* self, bool status, QCandlestickSet* set) {
	self->hovered(status, set);
}

void QCandlestickSeries_Connect_Hovered(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, bool, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, bool, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::hovered, [self, slotFunc](bool status, QCandlestickSet* set) {
	slotFunc(self, status, set);
    });
}

void QCandlestickSeries_Pressed(QCandlestickSeries* self, QCandlestickSet* set) {
	self->pressed(set);
}

void QCandlestickSeries_Connect_Pressed(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::pressed, [self, slotFunc](QCandlestickSet* set) {
	slotFunc(self, set);
    });
}

void QCandlestickSeries_Released(QCandlestickSeries* self, QCandlestickSet* set) {
	self->released(set);
}

void QCandlestickSeries_Connect_Released(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::released, [self, slotFunc](QCandlestickSet* set) {
	slotFunc(self, set);
    });
}

void QCandlestickSeries_DoubleClicked(QCandlestickSeries* self, QCandlestickSet* set) {
	self->doubleClicked(set);
}

void QCandlestickSeries_Connect_DoubleClicked(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::doubleClicked, [self, slotFunc](QCandlestickSet* set) {
	slotFunc(self, set);
    });
}

void QCandlestickSeries_CandlestickSetsAdded(QCandlestickSeries* self, const libqt_list sets) {
	self->candlestickSetsAdded(*sets);
}

void QCandlestickSeries_Connect_CandlestickSetsAdded(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, libqt_list) = reinterpret_cast<void (*)(QCandlestickSeries*, libqt_list)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::candlestickSetsAdded, [self, slotFunc](const QList<QCandlestickSet *>& sets) {
	slotFunc(self, sets);
    });
}

void QCandlestickSeries_CandlestickSetsRemoved(QCandlestickSeries* self, const libqt_list sets) {
	self->candlestickSetsRemoved(*sets);
}

void QCandlestickSeries_Connect_CandlestickSetsRemoved(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, libqt_list) = reinterpret_cast<void (*)(QCandlestickSeries*, libqt_list)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::candlestickSetsRemoved, [self, slotFunc](const QList<QCandlestickSet *>& sets) {
	slotFunc(self, sets);
    });
}

void QCandlestickSeries_CountChanged(QCandlestickSeries* self) {
	self->countChanged();
}

void QCandlestickSeries_Connect_CountChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::countChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_MaximumColumnWidthChanged(QCandlestickSeries* self) {
	self->maximumColumnWidthChanged();
}

void QCandlestickSeries_Connect_MaximumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::maximumColumnWidthChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_MinimumColumnWidthChanged(QCandlestickSeries* self) {
	self->minimumColumnWidthChanged();
}

void QCandlestickSeries_Connect_MinimumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::minimumColumnWidthChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_BodyWidthChanged(QCandlestickSeries* self) {
	self->bodyWidthChanged();
}

void QCandlestickSeries_Connect_BodyWidthChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::bodyWidthChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_BodyOutlineVisibilityChanged(QCandlestickSeries* self) {
	self->bodyOutlineVisibilityChanged();
}

void QCandlestickSeries_Connect_BodyOutlineVisibilityChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::bodyOutlineVisibilityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_CapsWidthChanged(QCandlestickSeries* self) {
	self->capsWidthChanged();
}

void QCandlestickSeries_Connect_CapsWidthChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::capsWidthChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_CapsVisibilityChanged(QCandlestickSeries* self) {
	self->capsVisibilityChanged();
}

void QCandlestickSeries_Connect_CapsVisibilityChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::capsVisibilityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_IncreasingColorChanged(QCandlestickSeries* self) {
	self->increasingColorChanged();
}

void QCandlestickSeries_Connect_IncreasingColorChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::increasingColorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_DecreasingColorChanged(QCandlestickSeries* self) {
	self->decreasingColorChanged();
}

void QCandlestickSeries_Connect_DecreasingColorChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::decreasingColorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_BrushChanged(QCandlestickSeries* self) {
	self->brushChanged();
}

void QCandlestickSeries_Connect_BrushChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::brushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSeries_PenChanged(QCandlestickSeries* self) {
	self->penChanged();
}

void QCandlestickSeries_Connect_PenChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::penChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QCandlestickSeries_Tr2(const char* s, const char* c) {
	QString _ret = QCandlestickSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCandlestickSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCandlestickSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QCandlestickSeries_QBaseType(const QCandlestickSeries* self) {
	auto* vqcandlestickseries = dynamic_cast<const VirtualQCandlestickSeries*>(self);
	if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
vqcandlestickseries->setQCandlestickSeries_Type_IsBase(true);
	return vqcandlestickseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnType(const QCandlestickSeries* self, intptr_t slot) {
	auto* vqcandlestickseries = dynamic_cast<const VirtualQCandlestickSeries*>(self);
	if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
vqcandlestickseries->setQCandlestickSeries_Type_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_Type_Callback>(slot));
}
}

void QCandlestickSeries_Delete(QCandlestickSeries* self) {
    delete self;
}

