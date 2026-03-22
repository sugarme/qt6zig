#include <QEvent>
#include <QFrame>
#include <QLCDNumber>
#include <QPaintEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qlcdnumber.h>
#include "libqlcdnumber.h"
#include "libqlcdnumber.hxx"

QLCDNumber* QLCDNumber_new(QWidget* parent) {
	 return new VirtualQLCDNumber(parent);
}

QLCDNumber* QLCDNumber_new2() {
	 return new VirtualQLCDNumber();
}

QLCDNumber* QLCDNumber_new3(unsigned int numDigits) {
	 return new VirtualQLCDNumber(numDigits);
}

QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent) {
	 return new VirtualQLCDNumber(numDigits, parent);
}

libqt_string QLCDNumber_Tr(const char* s) {
	QString _ret = QLCDNumber::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self) {
	return self->smallDecimalPoint();
}

int QLCDNumber_DigitCount(const QLCDNumber* self) {
	return self->digitCount();
}

void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits) {
	self->setDigitCount(nDigits);
}

bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num) {
	return self->checkOverflow(num);
}

bool QLCDNumber_CheckOverflow2(const QLCDNumber* self, int num) {
	return self->checkOverflow(num);
}

int QLCDNumber_Mode(const QLCDNumber* self) {
	return self->mode();
}

void QLCDNumber_SetMode(QLCDNumber* self, int mode) {
	self->setMode(static_cast<QLCDNumber::Mode>(mode));
}

int QLCDNumber_SegmentStyle(const QLCDNumber* self) {
	return self->segmentStyle();
}

void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle) {
	self->setSegmentStyle(static_cast<QLCDNumber::SegmentStyle>(segmentStyle));
}

double QLCDNumber_Value(const QLCDNumber* self) {
	return self->value();
}

int QLCDNumber_IntValue(const QLCDNumber* self) {
	return self->intValue();
}

QSize* QLCDNumber_SizeHint(const QLCDNumber* self) {
	return new QSize(self->sizeHint());
}

void QLCDNumber_Display(QLCDNumber* self, const libqt_string str) {
	self->display(QString::fromUtf8(str.data, str.len));
}

void QLCDNumber_Display2(QLCDNumber* self, int num) {
	self->display(num);
}

void QLCDNumber_Display3(QLCDNumber* self, double num) {
	self->display(num);
}

void QLCDNumber_SetHexMode(QLCDNumber* self) {
	self->setHexMode();
}

void QLCDNumber_SetDecMode(QLCDNumber* self) {
	self->setDecMode();
}

void QLCDNumber_SetOctMode(QLCDNumber* self) {
	self->setOctMode();
}

void QLCDNumber_SetBinMode(QLCDNumber* self) {
	self->setBinMode();
}

void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint) {
	self->setSmallDecimalPoint(smallDecimalPoint);
}

void QLCDNumber_Overflow(QLCDNumber* self) {
	self->overflow();
}

void QLCDNumber_Connect_Overflow(QLCDNumber* self, intptr_t slot) {
    void (*slotFunc)(QLCDNumber*) = reinterpret_cast<void (*)(QLCDNumber*)>(slot);
    QLCDNumber::connect(self, &QLCDNumber::overflow, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QLCDNumber_Tr2(const char* s, const char* c) {
	QString _ret = QLCDNumber::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLCDNumber_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLCDNumber::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QLCDNumber_QBaseSizeHint(const QLCDNumber* self) {
	auto* vqlcdnumber = dynamic_cast<const VirtualQLCDNumber*>(self);
	if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
vqlcdnumber->setQLCDNumber_SizeHint_IsBase(true);
	return new QSize(vqlcdnumber->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSizeHint(const QLCDNumber* self, intptr_t slot) {
	auto* vqlcdnumber = dynamic_cast<const VirtualQLCDNumber*>(self);
	if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
vqlcdnumber->setQLCDNumber_SizeHint_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SizeHint_Callback>(slot));
}
}

void QLCDNumber_Delete(QLCDNumber* self) {
    delete self;
}

