#include <QAbstractSeries>
#include <QBoxPlotSeries>
#include <QBoxSet>
#include <QBrush>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qboxplotseries.h>
#include "libqboxplotseries.h"
#include "libqboxplotseries.hxx"

QBoxPlotSeries* QBoxPlotSeries_new() {
	 return new VirtualQBoxPlotSeries();
}

QBoxPlotSeries* QBoxPlotSeries_new2(QObject* parent) {
	 return new VirtualQBoxPlotSeries(parent);
}

libqt_string QBoxPlotSeries_Tr(const char* s) {
	QString _ret = QBoxPlotSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QBoxPlotSeries_Append(QBoxPlotSeries* self, QBoxSet* box) {
	return self->append(box);
}

bool QBoxPlotSeries_Remove(QBoxPlotSeries* self, QBoxSet* box) {
	return self->remove(box);
}

bool QBoxPlotSeries_Take(QBoxPlotSeries* self, QBoxSet* box) {
	return self->take(box);
}

bool QBoxPlotSeries_Append2(QBoxPlotSeries* self, const libqt_list boxes) {
	return self->append(QList<QBoxSet *>());
}

bool QBoxPlotSeries_Insert(QBoxPlotSeries* self, int index, QBoxSet* box) {
	return self->insert(index, box);
}

int QBoxPlotSeries_Count(const QBoxPlotSeries* self) {
	return self->count();
}

libqt_list QBoxPlotSeries_BoxSets(const QBoxPlotSeries* self) {
	auto _ret = self->boxSets();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

void QBoxPlotSeries_Clear(QBoxPlotSeries* self) {
	self->clear();
}

int QBoxPlotSeries_Type(const QBoxPlotSeries* self) {
	return self->type();
}

void QBoxPlotSeries_SetBoxOutlineVisible(QBoxPlotSeries* self, bool visible) {
	self->setBoxOutlineVisible(visible);
}

bool QBoxPlotSeries_BoxOutlineVisible(QBoxPlotSeries* self) {
	return self->boxOutlineVisible();
}

void QBoxPlotSeries_SetBoxWidth(QBoxPlotSeries* self, double width) {
	self->setBoxWidth(width);
}

double QBoxPlotSeries_BoxWidth(QBoxPlotSeries* self) {
	return self->boxWidth();
}

void QBoxPlotSeries_SetBrush(QBoxPlotSeries* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QBoxPlotSeries_Brush(const QBoxPlotSeries* self) {
	return new QBrush(self->brush());
}

void QBoxPlotSeries_SetPen(QBoxPlotSeries* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QBoxPlotSeries_Pen(const QBoxPlotSeries* self) {
	return new QPen(self->pen());
}

void QBoxPlotSeries_Clicked(QBoxPlotSeries* self, QBoxSet* boxset) {
	self->clicked(boxset);
}

void QBoxPlotSeries_Connect_Clicked(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::clicked, [self, slotFunc](QBoxSet* boxset) {
	slotFunc(self, boxset);
    });
}

void QBoxPlotSeries_Hovered(QBoxPlotSeries* self, bool status, QBoxSet* boxset) {
	self->hovered(status, boxset);
}

void QBoxPlotSeries_Connect_Hovered(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, bool, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, bool, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::hovered, [self, slotFunc](bool status, QBoxSet* boxset) {
	slotFunc(self, status, boxset);
    });
}

void QBoxPlotSeries_Pressed(QBoxPlotSeries* self, QBoxSet* boxset) {
	self->pressed(boxset);
}

void QBoxPlotSeries_Connect_Pressed(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::pressed, [self, slotFunc](QBoxSet* boxset) {
	slotFunc(self, boxset);
    });
}

void QBoxPlotSeries_Released(QBoxPlotSeries* self, QBoxSet* boxset) {
	self->released(boxset);
}

void QBoxPlotSeries_Connect_Released(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::released, [self, slotFunc](QBoxSet* boxset) {
	slotFunc(self, boxset);
    });
}

void QBoxPlotSeries_DoubleClicked(QBoxPlotSeries* self, QBoxSet* boxset) {
	self->doubleClicked(boxset);
}

void QBoxPlotSeries_Connect_DoubleClicked(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::doubleClicked, [self, slotFunc](QBoxSet* boxset) {
	slotFunc(self, boxset);
    });
}

void QBoxPlotSeries_CountChanged(QBoxPlotSeries* self) {
	self->countChanged();
}

void QBoxPlotSeries_Connect_CountChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::countChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxPlotSeries_PenChanged(QBoxPlotSeries* self) {
	self->penChanged();
}

void QBoxPlotSeries_Connect_PenChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::penChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxPlotSeries_BrushChanged(QBoxPlotSeries* self) {
	self->brushChanged();
}

void QBoxPlotSeries_Connect_BrushChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::brushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxPlotSeries_BoxOutlineVisibilityChanged(QBoxPlotSeries* self) {
	self->boxOutlineVisibilityChanged();
}

void QBoxPlotSeries_Connect_BoxOutlineVisibilityChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::boxOutlineVisibilityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxPlotSeries_BoxWidthChanged(QBoxPlotSeries* self) {
	self->boxWidthChanged();
}

void QBoxPlotSeries_Connect_BoxWidthChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::boxWidthChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxPlotSeries_BoxsetsAdded(QBoxPlotSeries* self, const libqt_list sets) {
	self->boxsetsAdded(QList<QBoxSet *>());
}

void QBoxPlotSeries_Connect_BoxsetsAdded(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, libqt_list) = reinterpret_cast<void (*)(QBoxPlotSeries*, libqt_list)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::boxsetsAdded, [self, slotFunc](const QList<QBoxSet *>& sets) {
	slotFunc(self, sets);
    });
}

void QBoxPlotSeries_BoxsetsRemoved(QBoxPlotSeries* self, const libqt_list sets) {
	self->boxsetsRemoved(QList<QBoxSet *>());
}

void QBoxPlotSeries_Connect_BoxsetsRemoved(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, libqt_list) = reinterpret_cast<void (*)(QBoxPlotSeries*, libqt_list)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::boxsetsRemoved, [self, slotFunc](const QList<QBoxSet *>& sets) {
	slotFunc(self, sets);
    });
}

libqt_string QBoxPlotSeries_Tr2(const char* s, const char* c) {
	QString _ret = QBoxPlotSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBoxPlotSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxPlotSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QBoxPlotSeries_QBaseType(const QBoxPlotSeries* self) {
	auto* vqboxplotseries = dynamic_cast<const VirtualQBoxPlotSeries*>(self);
	if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
vqboxplotseries->setQBoxPlotSeries_Type_IsBase(true);
	return vqboxplotseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnType(const QBoxPlotSeries* self, intptr_t slot) {
	auto* vqboxplotseries = dynamic_cast<const VirtualQBoxPlotSeries*>(self);
	if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
vqboxplotseries->setQBoxPlotSeries_Type_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_Type_Callback>(slot));
}
}

void QBoxPlotSeries_Delete(QBoxPlotSeries* self) {
    delete self;
}

