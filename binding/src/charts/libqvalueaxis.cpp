#include <QAbstractAxis>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QValueAxis>
#include <qvalueaxis.h>
#include "libqvalueaxis.h"
#include "libqvalueaxis.hxx"

QValueAxis* QValueAxis_new() {
	 return new VirtualQValueAxis();
}

QValueAxis* QValueAxis_new2(QObject* parent) {
	 return new VirtualQValueAxis(parent);
}

libqt_string QValueAxis_Tr(const char* s) {
	QString _ret = QValueAxis::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QValueAxis_Type(const QValueAxis* self) {
	return self->type();
}

void QValueAxis_SetMin(QValueAxis* self, double min) {
	self->setMin(min);
}

double QValueAxis_Min(const QValueAxis* self) {
	return self->min();
}

void QValueAxis_SetMax(QValueAxis* self, double max) {
	self->setMax(max);
}

double QValueAxis_Max(const QValueAxis* self) {
	return self->max();
}

void QValueAxis_SetRange(QValueAxis* self, double min, double max) {
	self->setRange(min, max);
}

void QValueAxis_SetTickCount(QValueAxis* self, int count) {
	self->setTickCount(count);
}

int QValueAxis_TickCount(const QValueAxis* self) {
	return self->tickCount();
}

void QValueAxis_SetMinorTickCount(QValueAxis* self, int count) {
	self->setMinorTickCount(count);
}

int QValueAxis_MinorTickCount(const QValueAxis* self) {
	return self->minorTickCount();
}

void QValueAxis_SetTickAnchor(QValueAxis* self, double anchor) {
	self->setTickAnchor(anchor);
}

double QValueAxis_TickAnchor(const QValueAxis* self) {
	return self->tickAnchor();
}

void QValueAxis_SetTickInterval(QValueAxis* self, double insterval) {
	self->setTickInterval(insterval);
}

double QValueAxis_TickInterval(const QValueAxis* self) {
	return self->tickInterval();
}

void QValueAxis_SetTickType(QValueAxis* self, int typeVal) {
	self->setTickType(static_cast<QValueAxis::TickType>(typeVal));
}

int QValueAxis_TickType(const QValueAxis* self) {
	return self->tickType();
}

void QValueAxis_SetLabelFormat(QValueAxis* self, const libqt_string format) {
	self->setLabelFormat(QString::fromUtf8(format.data, format.len));
}

libqt_string QValueAxis_LabelFormat(const QValueAxis* self) {
	QString _ret = self->labelFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QValueAxis_ApplyNiceNumbers(QValueAxis* self) {
	self->applyNiceNumbers();
}

void QValueAxis_MinChanged(QValueAxis* self, double min) {
	self->minChanged(min);
}

void QValueAxis_Connect_MinChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::minChanged, [self, slotFunc](qreal min) {
	slotFunc(self, min);
    });
}

void QValueAxis_MaxChanged(QValueAxis* self, double max) {
	self->maxChanged(max);
}

void QValueAxis_Connect_MaxChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::maxChanged, [self, slotFunc](qreal max) {
	slotFunc(self, max);
    });
}

void QValueAxis_RangeChanged(QValueAxis* self, double min, double max) {
	self->rangeChanged(min, max);
}

void QValueAxis_Connect_RangeChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double, double) = reinterpret_cast<void (*)(QValueAxis*, double, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::rangeChanged, [self, slotFunc](qreal min, qreal max) {
	slotFunc(self, min, max);
    });
}

void QValueAxis_TickCountChanged(QValueAxis* self, int tickCount) {
	self->tickCountChanged(tickCount);
}

void QValueAxis_Connect_TickCountChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, int) = reinterpret_cast<void (*)(QValueAxis*, int)>(slot);
    QValueAxis::connect(self, &QValueAxis::tickCountChanged, [self, slotFunc](int tickCount) {
	slotFunc(self, tickCount);
    });
}

void QValueAxis_MinorTickCountChanged(QValueAxis* self, int tickCount) {
	self->minorTickCountChanged(tickCount);
}

void QValueAxis_Connect_MinorTickCountChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, int) = reinterpret_cast<void (*)(QValueAxis*, int)>(slot);
    QValueAxis::connect(self, &QValueAxis::minorTickCountChanged, [self, slotFunc](int tickCount) {
	slotFunc(self, tickCount);
    });
}

void QValueAxis_LabelFormatChanged(QValueAxis* self, const libqt_string format) {
	self->labelFormatChanged(QString::fromUtf8(format.data, format.len));
}

void QValueAxis_Connect_LabelFormatChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, const char*) = reinterpret_cast<void (*)(QValueAxis*, const char*)>(slot);
    QValueAxis::connect(self, &QValueAxis::labelFormatChanged, [self, slotFunc](const QString& format) {
	slotFunc(self, format);
    });
}

void QValueAxis_TickIntervalChanged(QValueAxis* self, double interval) {
	self->tickIntervalChanged(interval);
}

void QValueAxis_Connect_TickIntervalChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::tickIntervalChanged, [self, slotFunc](qreal interval) {
	slotFunc(self, interval);
    });
}

void QValueAxis_TickAnchorChanged(QValueAxis* self, double anchor) {
	self->tickAnchorChanged(anchor);
}

void QValueAxis_Connect_TickAnchorChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::tickAnchorChanged, [self, slotFunc](qreal anchor) {
	slotFunc(self, anchor);
    });
}

void QValueAxis_TickTypeChanged(QValueAxis* self, int typeVal) {
	self->tickTypeChanged(static_cast<QValueAxis::TickType>(typeVal));
}

void QValueAxis_Connect_TickTypeChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, int) = reinterpret_cast<void (*)(QValueAxis*, int)>(slot);
    QValueAxis::connect(self, &QValueAxis::tickTypeChanged, [self, slotFunc](QValueAxis::TickType typeVal) {
	slotFunc(self, typeVal);
    });
}

libqt_string QValueAxis_Tr2(const char* s, const char* c) {
	QString _ret = QValueAxis::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QValueAxis_Tr3(const char* s, const char* c, int n) {
	QString _ret = QValueAxis::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QValueAxis_QBaseType(const QValueAxis* self) {
	auto* vqvalueaxis = dynamic_cast<const VirtualQValueAxis*>(self);
	if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
vqvalueaxis->setQValueAxis_Type_IsBase(true);
	return vqvalueaxis->type();
}
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnType(const QValueAxis* self, intptr_t slot) {
	auto* vqvalueaxis = dynamic_cast<const VirtualQValueAxis*>(self);
	if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
vqvalueaxis->setQValueAxis_Type_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_Type_Callback>(slot));
}
}

void QValueAxis_Delete(QValueAxis* self) {
    delete self;
}

