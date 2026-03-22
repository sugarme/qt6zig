#include <QAbstractSeries>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QLegend>
#include <QPainter>
#include <QPen>
#include <QShowEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <qlegend.h>
#include "libqlegend.h"
#include "libqlegend.hxx"

libqt_string QLegend_Tr(const char* s) {
	QString _ret = QLegend::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLegend_Paint(QLegend* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QLegend_SetBrush(QLegend* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QLegend_Brush(const QLegend* self) {
	return new QBrush(self->brush());
}

void QLegend_SetColor(QLegend* self, QColor* color) {
	self->setColor(*color);
}

QColor* QLegend_Color(QLegend* self) {
	return new QColor(self->color());
}

void QLegend_SetPen(QLegend* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QLegend_Pen(const QLegend* self) {
	return new QPen(self->pen());
}

void QLegend_SetBorderColor(QLegend* self, QColor* color) {
	self->setBorderColor(*color);
}

QColor* QLegend_BorderColor(QLegend* self) {
	return new QColor(self->borderColor());
}

void QLegend_SetFont(QLegend* self, const QFont* font) {
	self->setFont(*font);
}

QFont* QLegend_Font(const QLegend* self) {
	return new QFont(self->font());
}

void QLegend_SetLabelBrush(QLegend* self, const QBrush* brush) {
	self->setLabelBrush(*brush);
}

QBrush* QLegend_LabelBrush(const QLegend* self) {
	return new QBrush(self->labelBrush());
}

void QLegend_SetLabelColor(QLegend* self, QColor* color) {
	self->setLabelColor(*color);
}

QColor* QLegend_LabelColor(const QLegend* self) {
	return new QColor(self->labelColor());
}

void QLegend_SetAlignment(QLegend* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QLegend_Alignment(const QLegend* self) {
	return self->alignment();
}

void QLegend_DetachFromChart(QLegend* self) {
	self->detachFromChart();
}

void QLegend_AttachToChart(QLegend* self) {
	self->attachToChart();
}

bool QLegend_IsAttachedToChart(QLegend* self) {
	return self->isAttachedToChart();
}

void QLegend_SetBackgroundVisible(QLegend* self) {
	self->setBackgroundVisible();
}

bool QLegend_IsBackgroundVisible(const QLegend* self) {
	return self->isBackgroundVisible();
}

libqt_list QLegend_Markers(const QLegend* self) {
	auto _ret = self->markers();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

bool QLegend_ReverseMarkers(QLegend* self) {
	return self->reverseMarkers();
}

void QLegend_SetReverseMarkers(QLegend* self) {
	self->setReverseMarkers();
}

bool QLegend_ShowToolTips(const QLegend* self) {
	return self->showToolTips();
}

void QLegend_SetShowToolTips(QLegend* self, bool show) {
	self->setShowToolTips(show);
}

bool QLegend_IsInteractive(const QLegend* self) {
	return self->isInteractive();
}

void QLegend_SetInteractive(QLegend* self, bool interactive) {
	self->setInteractive(interactive);
}

int QLegend_MarkerShape(const QLegend* self) {
	return self->markerShape();
}

void QLegend_SetMarkerShape(QLegend* self, int shape) {
	self->setMarkerShape(static_cast<QScatterSeries::MarkerShape>(shape));
}

void QLegend_BackgroundVisibleChanged(QLegend* self, bool visible) {
	self->backgroundVisibleChanged(visible);
}

void QLegend_Connect_BackgroundVisibleChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::backgroundVisibleChanged, [self, slotFunc](bool visible) {
	slotFunc(self, visible);
    });
}

void QLegend_ColorChanged(QLegend* self, QColor* color) {
	self->colorChanged(*color);
}

void QLegend_Connect_ColorChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, QColor*) = reinterpret_cast<void (*)(QLegend*, QColor*)>(slot);
    QLegend::connect(self, &QLegend::colorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QLegend_BorderColorChanged(QLegend* self, QColor* color) {
	self->borderColorChanged(*color);
}

void QLegend_Connect_BorderColorChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, QColor*) = reinterpret_cast<void (*)(QLegend*, QColor*)>(slot);
    QLegend::connect(self, &QLegend::borderColorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QLegend_FontChanged(QLegend* self, QFont* font) {
	self->fontChanged(*font);
}

void QLegend_Connect_FontChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, QFont*) = reinterpret_cast<void (*)(QLegend*, QFont*)>(slot);
    QLegend::connect(self, &QLegend::fontChanged, [self, slotFunc](QFont font) {
	slotFunc(self, font);
    });
}

void QLegend_LabelColorChanged(QLegend* self, QColor* color) {
	self->labelColorChanged(*color);
}

void QLegend_Connect_LabelColorChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, QColor*) = reinterpret_cast<void (*)(QLegend*, QColor*)>(slot);
    QLegend::connect(self, &QLegend::labelColorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QLegend_ReverseMarkersChanged(QLegend* self, bool reverseMarkers) {
	self->reverseMarkersChanged(reverseMarkers);
}

void QLegend_Connect_ReverseMarkersChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::reverseMarkersChanged, [self, slotFunc](bool reverseMarkers) {
	slotFunc(self, reverseMarkers);
    });
}

void QLegend_ShowToolTipsChanged(QLegend* self, bool showToolTips) {
	self->showToolTipsChanged(showToolTips);
}

void QLegend_Connect_ShowToolTipsChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::showToolTipsChanged, [self, slotFunc](bool showToolTips) {
	slotFunc(self, showToolTips);
    });
}

void QLegend_MarkerShapeChanged(QLegend* self, int shape) {
	self->markerShapeChanged(static_cast<QScatterSeries::MarkerShape>(shape));
}

void QLegend_Connect_MarkerShapeChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, int) = reinterpret_cast<void (*)(QLegend*, int)>(slot);
    QLegend::connect(self, &QLegend::markerShapeChanged, [self, slotFunc](MarkerShape shape) {
	slotFunc(self, shape);
    });
}

void QLegend_AttachedToChartChanged(QLegend* self, bool attachedToChart) {
	self->attachedToChartChanged(attachedToChart);
}

void QLegend_Connect_AttachedToChartChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::attachedToChartChanged, [self, slotFunc](bool attachedToChart) {
	slotFunc(self, attachedToChart);
    });
}

void QLegend_InteractiveChanged(QLegend* self, bool interactive) {
	self->interactiveChanged(interactive);
}

void QLegend_Connect_InteractiveChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::interactiveChanged, [self, slotFunc](bool interactive) {
	slotFunc(self, interactive);
    });
}

libqt_string QLegend_Tr2(const char* s, const char* c) {
	QString _ret = QLegend::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLegend_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLegend::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLegend_SetBackgroundVisible1(QLegend* self, bool visible) {
	self->setBackgroundVisible(visible);
}

libqt_list QLegend_Markers1(const QLegend* self, QAbstractSeries* series) {
	auto _ret = self->markers(series);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

void QLegend_SetReverseMarkers1(QLegend* self, bool reverseMarkers) {
	self->setReverseMarkers(reverseMarkers);
}

// Base class handler implementation
void QLegend_QBasePaint(QLegend* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqlegend = dynamic_cast<VirtualQLegend*>(self);
	if (vqlegend && vqlegend->isVirtualQLegend) {
vqlegend->setQLegend_Paint_IsBase(true);
	vqlegend->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QLegend_OnPaint(QLegend* self, intptr_t slot) {
	auto* vqlegend = dynamic_cast<VirtualQLegend*>(self);
	if (vqlegend && vqlegend->isVirtualQLegend) {
vqlegend->setQLegend_Paint_Callback(reinterpret_cast<VirtualQLegend::QLegend_Paint_Callback>(slot));
}
}

// Derived class handler implementation
void QLegend_HideEvent(QLegend* self, QHideEvent* event) {
	auto* vqlegend = dynamic_cast<VirtualQLegend*>(self);
	if (vqlegend && vqlegend->isVirtualQLegend) {
	vqlegend->hideEvent(event);
	} else {
	self->QLegend::hideEvent(event);
}
}

// Base class handler implementation
void QLegend_QBaseHideEvent(QLegend* self, QHideEvent* event) {
	auto* vqlegend = dynamic_cast<VirtualQLegend*>(self);
	if (vqlegend && vqlegend->isVirtualQLegend) {
vqlegend->setQLegend_HideEvent_IsBase(true);
	vqlegend->hideEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QLegend_OnHideEvent(QLegend* self, intptr_t slot) {
	auto* vqlegend = dynamic_cast<VirtualQLegend*>(self);
	if (vqlegend && vqlegend->isVirtualQLegend) {
vqlegend->setQLegend_HideEvent_Callback(reinterpret_cast<VirtualQLegend::QLegend_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLegend_ShowEvent(QLegend* self, QShowEvent* event) {
	auto* vqlegend = dynamic_cast<VirtualQLegend*>(self);
	if (vqlegend && vqlegend->isVirtualQLegend) {
	vqlegend->showEvent(event);
	} else {
	self->QLegend::showEvent(event);
}
}

// Base class handler implementation
void QLegend_QBaseShowEvent(QLegend* self, QShowEvent* event) {
	auto* vqlegend = dynamic_cast<VirtualQLegend*>(self);
	if (vqlegend && vqlegend->isVirtualQLegend) {
vqlegend->setQLegend_ShowEvent_IsBase(true);
	vqlegend->showEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QLegend_OnShowEvent(QLegend* self, intptr_t slot) {
	auto* vqlegend = dynamic_cast<VirtualQLegend*>(self);
	if (vqlegend && vqlegend->isVirtualQLegend) {
vqlegend->setQLegend_ShowEvent_Callback(reinterpret_cast<VirtualQLegend::QLegend_ShowEvent_Callback>(slot));
}
}

void QLegend_Delete(QLegend* self) {
    delete self;
}

