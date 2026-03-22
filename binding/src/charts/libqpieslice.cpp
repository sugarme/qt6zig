#include <QBrush>
#include <QColor>
#include <QFont>
#include <QObject>
#include <QPen>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpieslice.h>
#include "libqpieslice.h"
#include "libqpieslice.hxx"

QPieSlice* QPieSlice_new() {
	 return new QPieSlice();
}

QPieSlice* QPieSlice_new2(libqt_string label, double value) {
	 return new QPieSlice(QString::fromUtf8(label.data, label.len), value);
}

QPieSlice* QPieSlice_new3(QObject* parent) {
	 return new QPieSlice(parent);
}

QPieSlice* QPieSlice_new4(libqt_string label, double value, QObject* parent) {
	 return new QPieSlice(QString::fromUtf8(label.data, label.len), value, parent);
}

libqt_string QPieSlice_Tr(const char* s) {
	QString _ret = QPieSlice::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPieSlice_SetLabel(QPieSlice* self, libqt_string label) {
	self->setLabel(QString::fromUtf8(label.data, label.len));
}

libqt_string QPieSlice_Label(const QPieSlice* self) {
	QString _ret = self->label();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPieSlice_SetValue(QPieSlice* self, double value) {
	self->setValue(value);
}

double QPieSlice_Value(const QPieSlice* self) {
	return self->value();
}

void QPieSlice_SetLabelVisible(QPieSlice* self) {
	self->setLabelVisible();
}

bool QPieSlice_IsLabelVisible(const QPieSlice* self) {
	return self->isLabelVisible();
}

int QPieSlice_LabelPosition(QPieSlice* self) {
	return self->labelPosition();
}

void QPieSlice_SetLabelPosition(QPieSlice* self, int position) {
	self->setLabelPosition(static_cast<QPieSlice::LabelPosition>(position));
}

void QPieSlice_SetExploded(QPieSlice* self) {
	self->setExploded();
}

bool QPieSlice_IsExploded(const QPieSlice* self) {
	return self->isExploded();
}

void QPieSlice_SetPen(QPieSlice* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QPieSlice_Pen(const QPieSlice* self) {
	return new QPen(self->pen());
}

QColor* QPieSlice_BorderColor(QPieSlice* self) {
	return new QColor(self->borderColor());
}

void QPieSlice_SetBorderColor(QPieSlice* self, QColor* color) {
	self->setBorderColor(*color);
}

int QPieSlice_BorderWidth(QPieSlice* self) {
	return self->borderWidth();
}

void QPieSlice_SetBorderWidth(QPieSlice* self, int width) {
	self->setBorderWidth(width);
}

void QPieSlice_SetBrush(QPieSlice* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QPieSlice_Brush(const QPieSlice* self) {
	return new QBrush(self->brush());
}

QColor* QPieSlice_Color(QPieSlice* self) {
	return new QColor(self->color());
}

void QPieSlice_SetColor(QPieSlice* self, QColor* color) {
	self->setColor(*color);
}

void QPieSlice_SetLabelBrush(QPieSlice* self, const QBrush* brush) {
	self->setLabelBrush(*brush);
}

QBrush* QPieSlice_LabelBrush(const QPieSlice* self) {
	return new QBrush(self->labelBrush());
}

QColor* QPieSlice_LabelColor(QPieSlice* self) {
	return new QColor(self->labelColor());
}

void QPieSlice_SetLabelColor(QPieSlice* self, QColor* color) {
	self->setLabelColor(*color);
}

void QPieSlice_SetLabelFont(QPieSlice* self, const QFont* font) {
	self->setLabelFont(*font);
}

QFont* QPieSlice_LabelFont(const QPieSlice* self) {
	return new QFont(self->labelFont());
}

void QPieSlice_SetLabelArmLengthFactor(QPieSlice* self, double factor) {
	self->setLabelArmLengthFactor(factor);
}

double QPieSlice_LabelArmLengthFactor(const QPieSlice* self) {
	return self->labelArmLengthFactor();
}

void QPieSlice_SetExplodeDistanceFactor(QPieSlice* self, double factor) {
	self->setExplodeDistanceFactor(factor);
}

double QPieSlice_ExplodeDistanceFactor(const QPieSlice* self) {
	return self->explodeDistanceFactor();
}

double QPieSlice_Percentage(const QPieSlice* self) {
	return self->percentage();
}

double QPieSlice_StartAngle(const QPieSlice* self) {
	return self->startAngle();
}

double QPieSlice_AngleSpan(const QPieSlice* self) {
	return self->angleSpan();
}

QPieSeries* QPieSlice_Series(const QPieSlice* self) {
	return self->series();
}

void QPieSlice_Clicked(QPieSlice* self) {
	self->clicked();
}

void QPieSlice_Connect_Clicked(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::clicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_Hovered(QPieSlice* self, bool state) {
	self->hovered(state);
}

void QPieSlice_Connect_Hovered(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*, bool) = reinterpret_cast<void (*)(QPieSlice*, bool)>(slot);
    QPieSlice::connect(self, &QPieSlice::hovered, [self, slotFunc](bool state) {
	slotFunc(self, state);
    });
}

void QPieSlice_Pressed(QPieSlice* self) {
	self->pressed();
}

void QPieSlice_Connect_Pressed(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::pressed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_Released(QPieSlice* self) {
	self->released();
}

void QPieSlice_Connect_Released(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::released, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_DoubleClicked(QPieSlice* self) {
	self->doubleClicked();
}

void QPieSlice_Connect_DoubleClicked(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::doubleClicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_LabelChanged(QPieSlice* self) {
	self->labelChanged();
}

void QPieSlice_Connect_LabelChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_ValueChanged(QPieSlice* self) {
	self->valueChanged();
}

void QPieSlice_Connect_ValueChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::valueChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_LabelVisibleChanged(QPieSlice* self) {
	self->labelVisibleChanged();
}

void QPieSlice_Connect_LabelVisibleChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelVisibleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_PenChanged(QPieSlice* self) {
	self->penChanged();
}

void QPieSlice_Connect_PenChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::penChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_BrushChanged(QPieSlice* self) {
	self->brushChanged();
}

void QPieSlice_Connect_BrushChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::brushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_LabelBrushChanged(QPieSlice* self) {
	self->labelBrushChanged();
}

void QPieSlice_Connect_LabelBrushChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelBrushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_LabelFontChanged(QPieSlice* self) {
	self->labelFontChanged();
}

void QPieSlice_Connect_LabelFontChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelFontChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_PercentageChanged(QPieSlice* self) {
	self->percentageChanged();
}

void QPieSlice_Connect_PercentageChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::percentageChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_StartAngleChanged(QPieSlice* self) {
	self->startAngleChanged();
}

void QPieSlice_Connect_StartAngleChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::startAngleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_AngleSpanChanged(QPieSlice* self) {
	self->angleSpanChanged();
}

void QPieSlice_Connect_AngleSpanChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::angleSpanChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_ColorChanged(QPieSlice* self) {
	self->colorChanged();
}

void QPieSlice_Connect_ColorChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::colorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_BorderColorChanged(QPieSlice* self) {
	self->borderColorChanged();
}

void QPieSlice_Connect_BorderColorChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::borderColorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_BorderWidthChanged(QPieSlice* self) {
	self->borderWidthChanged();
}

void QPieSlice_Connect_BorderWidthChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::borderWidthChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPieSlice_LabelColorChanged(QPieSlice* self) {
	self->labelColorChanged();
}

void QPieSlice_Connect_LabelColorChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelColorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QPieSlice_Tr2(const char* s, const char* c) {
	QString _ret = QPieSlice::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPieSlice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPieSlice::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPieSlice_SetLabelVisible1(QPieSlice* self, bool visible) {
	self->setLabelVisible(visible);
}

void QPieSlice_SetExploded1(QPieSlice* self, bool exploded) {
	self->setExploded(exploded);
}

void QPieSlice_Delete(QPieSlice* self) {
    delete self;
}

