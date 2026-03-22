#include <QAbstractSeries>
#include <QBrush>
#include <QFont>
#include <QLegend>
#include <QLegendMarker>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qlegendmarker.h>
#include "libqlegendmarker.h"
#include "libqlegendmarker.hxx"

libqt_string QLegendMarker_Tr(const char* s) {
	QString _ret = QLegendMarker::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QLegendMarker_Type(QLegendMarker* self) {
	return self->type();
}

libqt_string QLegendMarker_Label(const QLegendMarker* self) {
	QString _ret = self->label();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLegendMarker_SetLabel(QLegendMarker* self, const libqt_string label) {
	self->setLabel(QString::fromUtf8(label.data, label.len));
}

QBrush* QLegendMarker_LabelBrush(const QLegendMarker* self) {
	return new QBrush(self->labelBrush());
}

void QLegendMarker_SetLabelBrush(QLegendMarker* self, const QBrush* brush) {
	self->setLabelBrush(*brush);
}

QFont* QLegendMarker_Font(const QLegendMarker* self) {
	return new QFont(self->font());
}

void QLegendMarker_SetFont(QLegendMarker* self, const QFont* font) {
	self->setFont(*font);
}

QPen* QLegendMarker_Pen(const QLegendMarker* self) {
	return new QPen(self->pen());
}

void QLegendMarker_SetPen(QLegendMarker* self, const QPen* pen) {
	self->setPen(*pen);
}

QBrush* QLegendMarker_Brush(const QLegendMarker* self) {
	return new QBrush(self->brush());
}

void QLegendMarker_SetBrush(QLegendMarker* self, const QBrush* brush) {
	self->setBrush(*brush);
}

bool QLegendMarker_IsVisible(const QLegendMarker* self) {
	return self->isVisible();
}

void QLegendMarker_SetVisible(QLegendMarker* self, bool visible) {
	self->setVisible(visible);
}

int QLegendMarker_Shape(const QLegendMarker* self) {
	return self->shape();
}

void QLegendMarker_SetShape(QLegendMarker* self, int shape) {
	self->setShape(static_cast<QLegend::MarkerShape>(shape));
}

QAbstractSeries* QLegendMarker_Series(QLegendMarker* self) {
	return self->series();
}

void QLegendMarker_Clicked(QLegendMarker* self) {
	self->clicked();
}

void QLegendMarker_Connect_Clicked(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::clicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLegendMarker_Hovered(QLegendMarker* self, bool status) {
	self->hovered(status);
}

void QLegendMarker_Connect_Hovered(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*, bool) = reinterpret_cast<void (*)(QLegendMarker*, bool)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::hovered, [self, slotFunc](bool status) {
	slotFunc(self, status);
    });
}

void QLegendMarker_LabelChanged(QLegendMarker* self) {
	self->labelChanged();
}

void QLegendMarker_Connect_LabelChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::labelChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLegendMarker_LabelBrushChanged(QLegendMarker* self) {
	self->labelBrushChanged();
}

void QLegendMarker_Connect_LabelBrushChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::labelBrushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLegendMarker_FontChanged(QLegendMarker* self) {
	self->fontChanged();
}

void QLegendMarker_Connect_FontChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::fontChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLegendMarker_PenChanged(QLegendMarker* self) {
	self->penChanged();
}

void QLegendMarker_Connect_PenChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::penChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLegendMarker_BrushChanged(QLegendMarker* self) {
	self->brushChanged();
}

void QLegendMarker_Connect_BrushChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::brushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLegendMarker_VisibleChanged(QLegendMarker* self) {
	self->visibleChanged();
}

void QLegendMarker_Connect_VisibleChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::visibleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLegendMarker_ShapeChanged(QLegendMarker* self) {
	self->shapeChanged();
}

void QLegendMarker_Connect_ShapeChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::shapeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QLegendMarker_Tr2(const char* s, const char* c) {
	QString _ret = QLegendMarker::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLegendMarker_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLegendMarker::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QLegendMarker_QBaseType(QLegendMarker* self) {
	auto* vqlegendmarker = dynamic_cast<VirtualQLegendMarker*>(self);
	if (vqlegendmarker && vqlegendmarker->isVirtualQLegendMarker) {
vqlegendmarker->setQLegendMarker_Type_IsBase(true);
	return vqlegendmarker->type();
}
}

// Auxiliary method to allow providing re-implementation
void QLegendMarker_OnType(QLegendMarker* self, intptr_t slot) {
	auto* vqlegendmarker = dynamic_cast<VirtualQLegendMarker*>(self);
	if (vqlegendmarker && vqlegendmarker->isVirtualQLegendMarker) {
vqlegendmarker->setQLegendMarker_Type_Callback(reinterpret_cast<VirtualQLegendMarker::QLegendMarker_Type_Callback>(slot));
}
}

// Base class handler implementation
QAbstractSeries* QLegendMarker_QBaseSeries(QLegendMarker* self) {
	auto* vqlegendmarker = dynamic_cast<VirtualQLegendMarker*>(self);
	if (vqlegendmarker && vqlegendmarker->isVirtualQLegendMarker) {
vqlegendmarker->setQLegendMarker_Series_IsBase(true);
	return vqlegendmarker->series();
}
}

// Auxiliary method to allow providing re-implementation
void QLegendMarker_OnSeries(QLegendMarker* self, intptr_t slot) {
	auto* vqlegendmarker = dynamic_cast<VirtualQLegendMarker*>(self);
	if (vqlegendmarker && vqlegendmarker->isVirtualQLegendMarker) {
vqlegendmarker->setQLegendMarker_Series_Callback(reinterpret_cast<VirtualQLegendMarker::QLegendMarker_Series_Callback>(slot));
}
}

void QLegendMarker_Delete(QLegendMarker* self) {
    delete self;
}

