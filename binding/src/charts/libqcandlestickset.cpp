#include <QBrush>
#include <QCandlestickSet>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcandlestickset.h>
#include "libqcandlestickset.h"
#include "libqcandlestickset.hxx"

QCandlestickSet* QCandlestickSet_new() {
	 return new QCandlestickSet();
}

QCandlestickSet* QCandlestickSet_new2(double open, double high, double low, double close) {
	 return new QCandlestickSet(open, high, low, close);
}

QCandlestickSet* QCandlestickSet_new3(double timestamp) {
	 return new QCandlestickSet(timestamp);
}

QCandlestickSet* QCandlestickSet_new4(double timestamp, QObject* parent) {
	 return new QCandlestickSet(timestamp, parent);
}

QCandlestickSet* QCandlestickSet_new5(double open, double high, double low, double close, double timestamp) {
	 return new QCandlestickSet(open, high, low, close, timestamp);
}

QCandlestickSet* QCandlestickSet_new6(double open, double high, double low, double close, double timestamp, QObject* parent) {
	 return new QCandlestickSet(open, high, low, close, timestamp, parent);
}

libqt_string QCandlestickSet_Tr(const char* s) {
	QString _ret = QCandlestickSet::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCandlestickSet_SetTimestamp(QCandlestickSet* self, double timestamp) {
	self->setTimestamp(timestamp);
}

double QCandlestickSet_Timestamp(const QCandlestickSet* self) {
	return self->timestamp();
}

void QCandlestickSet_SetOpen(QCandlestickSet* self, double open) {
	self->setOpen(open);
}

double QCandlestickSet_Open(const QCandlestickSet* self) {
	return self->open();
}

void QCandlestickSet_SetHigh(QCandlestickSet* self, double high) {
	self->setHigh(high);
}

double QCandlestickSet_High(const QCandlestickSet* self) {
	return self->high();
}

void QCandlestickSet_SetLow(QCandlestickSet* self, double low) {
	self->setLow(low);
}

double QCandlestickSet_Low(const QCandlestickSet* self) {
	return self->low();
}

void QCandlestickSet_SetClose(QCandlestickSet* self, double close) {
	self->setClose(close);
}

double QCandlestickSet_Close(const QCandlestickSet* self) {
	return self->close();
}

void QCandlestickSet_SetBrush(QCandlestickSet* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QCandlestickSet_Brush(const QCandlestickSet* self) {
	return new QBrush(self->brush());
}

void QCandlestickSet_SetPen(QCandlestickSet* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QCandlestickSet_Pen(const QCandlestickSet* self) {
	return new QPen(self->pen());
}

void QCandlestickSet_Clicked(QCandlestickSet* self) {
	self->clicked();
}

void QCandlestickSet_Connect_Clicked(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::clicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_Hovered(QCandlestickSet* self, bool status) {
	self->hovered(status);
}

void QCandlestickSet_Connect_Hovered(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*, bool) = reinterpret_cast<void (*)(QCandlestickSet*, bool)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::hovered, [self, slotFunc](bool status) {
	slotFunc(self, status);
    });
}

void QCandlestickSet_Pressed(QCandlestickSet* self) {
	self->pressed();
}

void QCandlestickSet_Connect_Pressed(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::pressed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_Released(QCandlestickSet* self) {
	self->released();
}

void QCandlestickSet_Connect_Released(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::released, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_DoubleClicked(QCandlestickSet* self) {
	self->doubleClicked();
}

void QCandlestickSet_Connect_DoubleClicked(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::doubleClicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_TimestampChanged(QCandlestickSet* self) {
	self->timestampChanged();
}

void QCandlestickSet_Connect_TimestampChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::timestampChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_OpenChanged(QCandlestickSet* self) {
	self->openChanged();
}

void QCandlestickSet_Connect_OpenChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::openChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_HighChanged(QCandlestickSet* self) {
	self->highChanged();
}

void QCandlestickSet_Connect_HighChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::highChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_LowChanged(QCandlestickSet* self) {
	self->lowChanged();
}

void QCandlestickSet_Connect_LowChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::lowChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_CloseChanged(QCandlestickSet* self) {
	self->closeChanged();
}

void QCandlestickSet_Connect_CloseChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::closeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_BrushChanged(QCandlestickSet* self) {
	self->brushChanged();
}

void QCandlestickSet_Connect_BrushChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::brushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCandlestickSet_PenChanged(QCandlestickSet* self) {
	self->penChanged();
}

void QCandlestickSet_Connect_PenChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::penChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QCandlestickSet_Tr2(const char* s, const char* c) {
	QString _ret = QCandlestickSet::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCandlestickSet_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCandlestickSet::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCandlestickSet_Delete(QCandlestickSet* self) {
    delete self;
}

