#include <QAbstractAxis>
#include <QDateTime>
#include <QDateTimeAxis>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdatetimeaxis.h>
#include "libqdatetimeaxis.h"
#include "libqdatetimeaxis.hxx"

QDateTimeAxis* QDateTimeAxis_new() {
	 return new VirtualQDateTimeAxis();
}

QDateTimeAxis* QDateTimeAxis_new2(QObject* parent) {
	 return new VirtualQDateTimeAxis(parent);
}

libqt_string QDateTimeAxis_Tr(const char* s) {
	QString _ret = QDateTimeAxis::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QDateTimeAxis_Type(const QDateTimeAxis* self) {
	return self->type();
}

void QDateTimeAxis_SetMin(QDateTimeAxis* self, QDateTime* min) {
	self->setMin(*min);
}

QDateTime* QDateTimeAxis_Min(const QDateTimeAxis* self) {
	return new QDateTime(self->min());
}

void QDateTimeAxis_SetMax(QDateTimeAxis* self, QDateTime* max) {
	self->setMax(*max);
}

QDateTime* QDateTimeAxis_Max(const QDateTimeAxis* self) {
	return new QDateTime(self->max());
}

void QDateTimeAxis_SetRange(QDateTimeAxis* self, QDateTime* min, QDateTime* max) {
	self->setRange(*min, *max);
}

void QDateTimeAxis_SetFormat(QDateTimeAxis* self, libqt_string format) {
	self->setFormat(QString::fromUtf8(format.data, format.len));
}

libqt_string QDateTimeAxis_Format(const QDateTimeAxis* self) {
	QString _ret = self->format();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDateTimeAxis_SetTickCount(QDateTimeAxis* self, int count) {
	self->setTickCount(count);
}

int QDateTimeAxis_TickCount(const QDateTimeAxis* self) {
	return self->tickCount();
}

void QDateTimeAxis_MinChanged(QDateTimeAxis* self, QDateTime* min) {
	self->minChanged(*min);
}

void QDateTimeAxis_Connect_MinChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeAxis*, QDateTime*)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::minChanged, [self, slotFunc](QDateTime min) {
	slotFunc(self, min);
    });
}

void QDateTimeAxis_MaxChanged(QDateTimeAxis* self, QDateTime* max) {
	self->maxChanged(*max);
}

void QDateTimeAxis_Connect_MaxChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeAxis*, QDateTime*)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::maxChanged, [self, slotFunc](QDateTime max) {
	slotFunc(self, max);
    });
}

void QDateTimeAxis_RangeChanged(QDateTimeAxis* self, QDateTime* min, QDateTime* max) {
	self->rangeChanged(*min, *max);
}

void QDateTimeAxis_Connect_RangeChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, QDateTime*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeAxis*, QDateTime*, QDateTime*)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::rangeChanged, [self, slotFunc](QDateTime min, QDateTime max) {
	slotFunc(self, min, max);
    });
}

void QDateTimeAxis_FormatChanged(QDateTimeAxis* self, libqt_string format) {
	self->formatChanged(QString::fromUtf8(format.data, format.len));
}

void QDateTimeAxis_Connect_FormatChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, const char*) = reinterpret_cast<void (*)(QDateTimeAxis*, const char*)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::formatChanged, [self, slotFunc](QString format) {
	slotFunc(self, format);
    });
}

void QDateTimeAxis_TickCountChanged(QDateTimeAxis* self, int tick) {
	self->tickCountChanged(tick);
}

void QDateTimeAxis_Connect_TickCountChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, int) = reinterpret_cast<void (*)(QDateTimeAxis*, int)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::tickCountChanged, [self, slotFunc](int tick) {
	slotFunc(self, tick);
    });
}

libqt_string QDateTimeAxis_Tr2(const char* s, const char* c) {
	QString _ret = QDateTimeAxis::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDateTimeAxis_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDateTimeAxis::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QDateTimeAxis_QBaseType(const QDateTimeAxis* self) {
	auto* vqdatetimeaxis = dynamic_cast<const VirtualQDateTimeAxis*>(self);
	if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
vqdatetimeaxis->setQDateTimeAxis_Type_IsBase(true);
	return vqdatetimeaxis->type();
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnType(const QDateTimeAxis* self, intptr_t slot) {
	auto* vqdatetimeaxis = dynamic_cast<const VirtualQDateTimeAxis*>(self);
	if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
vqdatetimeaxis->setQDateTimeAxis_Type_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Type_Callback>(slot));
}
}

void QDateTimeAxis_Delete(QDateTimeAxis* self) {
    delete self;
}

