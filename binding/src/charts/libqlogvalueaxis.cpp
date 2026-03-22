#include <QAbstractAxis>
#include <QLogValueAxis>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qlogvalueaxis.h>
#include "libqlogvalueaxis.h"
#include "libqlogvalueaxis.hxx"

QLogValueAxis* QLogValueAxis_new() {
	 return new VirtualQLogValueAxis();
}

QLogValueAxis* QLogValueAxis_new2(QObject* parent) {
	 return new VirtualQLogValueAxis(parent);
}

libqt_string QLogValueAxis_Tr(const char* s) {
	QString _ret = QLogValueAxis::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QLogValueAxis_Type(const QLogValueAxis* self) {
	return self->type();
}

void QLogValueAxis_SetMin(QLogValueAxis* self, double min) {
	self->setMin(min);
}

double QLogValueAxis_Min(const QLogValueAxis* self) {
	return self->min();
}

void QLogValueAxis_SetMax(QLogValueAxis* self, double max) {
	self->setMax(max);
}

double QLogValueAxis_Max(const QLogValueAxis* self) {
	return self->max();
}

void QLogValueAxis_SetRange(QLogValueAxis* self, double min, double max) {
	self->setRange(min, max);
}

void QLogValueAxis_SetLabelFormat(QLogValueAxis* self, const libqt_string format) {
	self->setLabelFormat(QString::fromUtf8(format.data, format.len));
}

libqt_string QLogValueAxis_LabelFormat(const QLogValueAxis* self) {
	QString _ret = self->labelFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLogValueAxis_SetBase(QLogValueAxis* self, double base) {
	self->setBase(base);
}

double QLogValueAxis_Base(const QLogValueAxis* self) {
	return self->base();
}

int QLogValueAxis_TickCount(const QLogValueAxis* self) {
	return self->tickCount();
}

void QLogValueAxis_SetMinorTickCount(QLogValueAxis* self, int minorTickCount) {
	self->setMinorTickCount(minorTickCount);
}

int QLogValueAxis_MinorTickCount(const QLogValueAxis* self) {
	return self->minorTickCount();
}

void QLogValueAxis_MinChanged(QLogValueAxis* self, double min) {
	self->minChanged(min);
}

void QLogValueAxis_Connect_MinChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double) = reinterpret_cast<void (*)(QLogValueAxis*, double)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::minChanged, [self, slotFunc](qreal min) {
	slotFunc(self, min);
    });
}

void QLogValueAxis_MaxChanged(QLogValueAxis* self, double max) {
	self->maxChanged(max);
}

void QLogValueAxis_Connect_MaxChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double) = reinterpret_cast<void (*)(QLogValueAxis*, double)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::maxChanged, [self, slotFunc](qreal max) {
	slotFunc(self, max);
    });
}

void QLogValueAxis_RangeChanged(QLogValueAxis* self, double min, double max) {
	self->rangeChanged(min, max);
}

void QLogValueAxis_Connect_RangeChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double, double) = reinterpret_cast<void (*)(QLogValueAxis*, double, double)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::rangeChanged, [self, slotFunc](qreal min, qreal max) {
	slotFunc(self, min, max);
    });
}

void QLogValueAxis_LabelFormatChanged(QLogValueAxis* self, const libqt_string format) {
	self->labelFormatChanged(QString::fromUtf8(format.data, format.len));
}

void QLogValueAxis_Connect_LabelFormatChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, const char*) = reinterpret_cast<void (*)(QLogValueAxis*, const char*)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::labelFormatChanged, [self, slotFunc](const QString& format) {
	slotFunc(self, format);
    });
}

void QLogValueAxis_BaseChanged(QLogValueAxis* self, double base) {
	self->baseChanged(base);
}

void QLogValueAxis_Connect_BaseChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double) = reinterpret_cast<void (*)(QLogValueAxis*, double)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::baseChanged, [self, slotFunc](qreal base) {
	slotFunc(self, base);
    });
}

void QLogValueAxis_TickCountChanged(QLogValueAxis* self, int tickCount) {
	self->tickCountChanged(tickCount);
}

void QLogValueAxis_Connect_TickCountChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, int) = reinterpret_cast<void (*)(QLogValueAxis*, int)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::tickCountChanged, [self, slotFunc](int tickCount) {
	slotFunc(self, tickCount);
    });
}

void QLogValueAxis_MinorTickCountChanged(QLogValueAxis* self, int minorTickCount) {
	self->minorTickCountChanged(minorTickCount);
}

void QLogValueAxis_Connect_MinorTickCountChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, int) = reinterpret_cast<void (*)(QLogValueAxis*, int)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::minorTickCountChanged, [self, slotFunc](int minorTickCount) {
	slotFunc(self, minorTickCount);
    });
}

libqt_string QLogValueAxis_Tr2(const char* s, const char* c) {
	QString _ret = QLogValueAxis::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLogValueAxis_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLogValueAxis::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QLogValueAxis_QBaseType(const QLogValueAxis* self) {
	auto* vqlogvalueaxis = dynamic_cast<const VirtualQLogValueAxis*>(self);
	if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
vqlogvalueaxis->setQLogValueAxis_Type_IsBase(true);
	return vqlogvalueaxis->type();
}
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnType(const QLogValueAxis* self, intptr_t slot) {
	auto* vqlogvalueaxis = dynamic_cast<const VirtualQLogValueAxis*>(self);
	if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
vqlogvalueaxis->setQLogValueAxis_Type_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Type_Callback>(slot));
}
}

void QLogValueAxis_Delete(QLogValueAxis* self) {
    delete self;
}

