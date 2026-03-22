#include <QBoxSet>
#include <QBrush>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qboxset.h>
#include "libqboxset.h"
#include "libqboxset.hxx"

QBoxSet* QBoxSet_new() {
	 return new QBoxSet();
}

QBoxSet* QBoxSet_new2(const double le, const double lq, const double m, const double uq, const double ue) {
	 return new QBoxSet(le, lq, m, uq, ue);
}

QBoxSet* QBoxSet_new3(const libqt_string label) {
	 return new QBoxSet(QString::fromUtf8(label.data, label.len));
}

QBoxSet* QBoxSet_new4(const libqt_string label, QObject* parent) {
	 return new QBoxSet(QString::fromUtf8(label.data, label.len), parent);
}

QBoxSet* QBoxSet_new5(const double le, const double lq, const double m, const double uq, const double ue, const libqt_string label) {
	 return new QBoxSet(le, lq, m, uq, ue, QString::fromUtf8(label.data, label.len));
}

QBoxSet* QBoxSet_new6(const double le, const double lq, const double m, const double uq, const double ue, const libqt_string label, QObject* parent) {
	 return new QBoxSet(le, lq, m, uq, ue, QString::fromUtf8(label.data, label.len), parent);
}

libqt_string QBoxSet_Tr(const char* s) {
	QString _ret = QBoxSet::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBoxSet_Append(QBoxSet* self, const double value) {
	self->append(value);
}

void QBoxSet_Append2(QBoxSet* self, const libqt_list values) {
	self->append(*values);
}

void QBoxSet_Clear(QBoxSet* self) {
	self->clear();
}

void QBoxSet_SetLabel(QBoxSet* self, const libqt_string label) {
	self->setLabel(QString::fromUtf8(label.data, label.len));
}

libqt_string QBoxSet_Label(const QBoxSet* self) {
	QString _ret = self->label();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QBoxSet* QBoxSet_OperatorShiftLeft(QBoxSet* self, const double* value) {
	return new QBoxSet(self->operator<<(*value));
}

void QBoxSet_SetValue(QBoxSet* self, const int index, const double value) {
	self->setValue(index, value);
}

double QBoxSet_At(const QBoxSet* self, const int index) {
	return self->at(index);
}

double QBoxSet_OperatorSubscript(const QBoxSet* self, const int index) {
	return self->operator[](index);
}

int QBoxSet_Count(const QBoxSet* self) {
	return self->count();
}

void QBoxSet_SetPen(QBoxSet* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QBoxSet_Pen(const QBoxSet* self) {
	return new QPen(self->pen());
}

void QBoxSet_SetBrush(QBoxSet* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QBoxSet_Brush(const QBoxSet* self) {
	return new QBrush(self->brush());
}

void QBoxSet_Clicked(QBoxSet* self) {
	self->clicked();
}

void QBoxSet_Connect_Clicked(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::clicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxSet_Hovered(QBoxSet* self, bool status) {
	self->hovered(status);
}

void QBoxSet_Connect_Hovered(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*, bool) = reinterpret_cast<void (*)(QBoxSet*, bool)>(slot);
    QBoxSet::connect(self, &QBoxSet::hovered, [self, slotFunc](bool status) {
	slotFunc(self, status);
    });
}

void QBoxSet_Pressed(QBoxSet* self) {
	self->pressed();
}

void QBoxSet_Connect_Pressed(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::pressed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxSet_Released(QBoxSet* self) {
	self->released();
}

void QBoxSet_Connect_Released(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::released, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxSet_DoubleClicked(QBoxSet* self) {
	self->doubleClicked();
}

void QBoxSet_Connect_DoubleClicked(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::doubleClicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxSet_PenChanged(QBoxSet* self) {
	self->penChanged();
}

void QBoxSet_Connect_PenChanged(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::penChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxSet_BrushChanged(QBoxSet* self) {
	self->brushChanged();
}

void QBoxSet_Connect_BrushChanged(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::brushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxSet_ValuesChanged(QBoxSet* self) {
	self->valuesChanged();
}

void QBoxSet_Connect_ValuesChanged(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::valuesChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBoxSet_ValueChanged(QBoxSet* self, int index) {
	self->valueChanged(index);
}

void QBoxSet_Connect_ValueChanged(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*, int) = reinterpret_cast<void (*)(QBoxSet*, int)>(slot);
    QBoxSet::connect(self, &QBoxSet::valueChanged, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QBoxSet_Cleared(QBoxSet* self) {
	self->cleared();
}

void QBoxSet_Connect_Cleared(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::cleared, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QBoxSet_Tr2(const char* s, const char* c) {
	QString _ret = QBoxSet::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBoxSet_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxSet::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBoxSet_Delete(QBoxSet* self) {
    delete self;
}

