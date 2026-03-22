#include <QAbstractAxis>
#include <QColorAxis>
#include <QLinearGradient>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcoloraxis.h>
#include "libqcoloraxis.h"
#include "libqcoloraxis.hxx"

QColorAxis* QColorAxis_new() {
	 return new VirtualQColorAxis();
}

QColorAxis* QColorAxis_new2(QObject* parent) {
	 return new VirtualQColorAxis(parent);
}

libqt_string QColorAxis_Tr(const char* s) {
	QString _ret = QColorAxis::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QColorAxis_Type(const QColorAxis* self) {
	return self->type();
}

void QColorAxis_SetMin(QColorAxis* self, double min) {
	self->setMin(min);
}

double QColorAxis_Min(const QColorAxis* self) {
	return self->min();
}

void QColorAxis_SetMax(QColorAxis* self, double max) {
	self->setMax(max);
}

double QColorAxis_Max(const QColorAxis* self) {
	return self->max();
}

void QColorAxis_SetRange(QColorAxis* self, double min, double max) {
	self->setRange(min, max);
}

void QColorAxis_SetTickCount(QColorAxis* self, int count) {
	self->setTickCount(count);
}

int QColorAxis_TickCount(const QColorAxis* self) {
	return self->tickCount();
}

void QColorAxis_SetSize(QColorAxis* self, const double size) {
	self->setSize(size);
}

double QColorAxis_Size(const QColorAxis* self) {
	return self->size();
}

void QColorAxis_SetGradient(QColorAxis* self, const QLinearGradient* gradient) {
	self->setGradient(*gradient);
}

QLinearGradient* QColorAxis_Gradient(const QColorAxis* self) {
	return new QLinearGradient(self->gradient());
}

void QColorAxis_SetAutoRange(QColorAxis* self, bool autoRange) {
	self->setAutoRange(autoRange);
}

bool QColorAxis_AutoRange(const QColorAxis* self) {
	return self->autoRange();
}

void QColorAxis_MinChanged(QColorAxis* self, double min) {
	self->minChanged(min);
}

void QColorAxis_Connect_MinChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, double) = reinterpret_cast<void (*)(QColorAxis*, double)>(slot);
    QColorAxis::connect(self, &QColorAxis::minChanged, [self, slotFunc](qreal min) {
	slotFunc(self, min);
    });
}

void QColorAxis_MaxChanged(QColorAxis* self, double max) {
	self->maxChanged(max);
}

void QColorAxis_Connect_MaxChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, double) = reinterpret_cast<void (*)(QColorAxis*, double)>(slot);
    QColorAxis::connect(self, &QColorAxis::maxChanged, [self, slotFunc](qreal max) {
	slotFunc(self, max);
    });
}

void QColorAxis_RangeChanged(QColorAxis* self, double min, double max) {
	self->rangeChanged(min, max);
}

void QColorAxis_Connect_RangeChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, double, double) = reinterpret_cast<void (*)(QColorAxis*, double, double)>(slot);
    QColorAxis::connect(self, &QColorAxis::rangeChanged, [self, slotFunc](qreal min, qreal max) {
	slotFunc(self, min, max);
    });
}

void QColorAxis_TickCountChanged(QColorAxis* self, int tickCount) {
	self->tickCountChanged(tickCount);
}

void QColorAxis_Connect_TickCountChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, int) = reinterpret_cast<void (*)(QColorAxis*, int)>(slot);
    QColorAxis::connect(self, &QColorAxis::tickCountChanged, [self, slotFunc](int tickCount) {
	slotFunc(self, tickCount);
    });
}

void QColorAxis_GradientChanged(QColorAxis* self, const QLinearGradient* gradient) {
	self->gradientChanged(*gradient);
}

void QColorAxis_Connect_GradientChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, const QLinearGradient*) = reinterpret_cast<void (*)(QColorAxis*, const QLinearGradient*)>(slot);
    QColorAxis::connect(self, &QColorAxis::gradientChanged, [self, slotFunc](const QLinearGradient& gradient) {
	slotFunc(self, gradient);
    });
}

void QColorAxis_SizeChanged(QColorAxis* self, const double size) {
	self->sizeChanged(size);
}

void QColorAxis_Connect_SizeChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, const double) = reinterpret_cast<void (*)(QColorAxis*, const double)>(slot);
    QColorAxis::connect(self, &QColorAxis::sizeChanged, [self, slotFunc](const qreal size) {
	slotFunc(self, size);
    });
}

void QColorAxis_AutoRangeChanged(QColorAxis* self, bool autoRange) {
	self->autoRangeChanged(autoRange);
}

void QColorAxis_Connect_AutoRangeChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, bool) = reinterpret_cast<void (*)(QColorAxis*, bool)>(slot);
    QColorAxis::connect(self, &QColorAxis::autoRangeChanged, [self, slotFunc](bool autoRange) {
	slotFunc(self, autoRange);
    });
}

libqt_string QColorAxis_Tr2(const char* s, const char* c) {
	QString _ret = QColorAxis::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QColorAxis_Tr3(const char* s, const char* c, int n) {
	QString _ret = QColorAxis::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QColorAxis_QBaseType(const QColorAxis* self) {
	auto* vqcoloraxis = dynamic_cast<const VirtualQColorAxis*>(self);
	if (vqcoloraxis && vqcoloraxis->isVirtualQColorAxis) {
vqcoloraxis->setQColorAxis_Type_IsBase(true);
	return vqcoloraxis->type();
}
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnType(const QColorAxis* self, intptr_t slot) {
	auto* vqcoloraxis = dynamic_cast<const VirtualQColorAxis*>(self);
	if (vqcoloraxis && vqcoloraxis->isVirtualQColorAxis) {
vqcoloraxis->setQColorAxis_Type_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_Type_Callback>(slot));
}
}

void QColorAxis_Delete(QColorAxis* self) {
    delete self;
}

