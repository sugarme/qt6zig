#include <QAbstractSeries>
#include <QAreaSeries>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QLineSeries>
#include <QObject>
#include <QPen>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qareaseries.h>
#include "libqareaseries.h"
#include "libqareaseries.hxx"

QAreaSeries* QAreaSeries_new() {
	 return new VirtualQAreaSeries();
}

QAreaSeries* QAreaSeries_new2(QLineSeries* upperSeries) {
	 return new VirtualQAreaSeries(upperSeries);
}

QAreaSeries* QAreaSeries_new3(QObject* parent) {
	 return new VirtualQAreaSeries(parent);
}

QAreaSeries* QAreaSeries_new4(QLineSeries* upperSeries, QLineSeries* lowerSeries) {
	 return new VirtualQAreaSeries(upperSeries, lowerSeries);
}

libqt_string QAreaSeries_Tr(const char* s) {
	QString _ret = QAreaSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAreaSeries_Type(const QAreaSeries* self) {
	return self->type();
}

void QAreaSeries_SetUpperSeries(QAreaSeries* self, QLineSeries* series) {
	self->setUpperSeries(series);
}

QLineSeries* QAreaSeries_UpperSeries(const QAreaSeries* self) {
	return self->upperSeries();
}

void QAreaSeries_SetLowerSeries(QAreaSeries* self, QLineSeries* series) {
	self->setLowerSeries(series);
}

QLineSeries* QAreaSeries_LowerSeries(const QAreaSeries* self) {
	return self->lowerSeries();
}

void QAreaSeries_SetPen(QAreaSeries* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QAreaSeries_Pen(const QAreaSeries* self) {
	return new QPen(self->pen());
}

void QAreaSeries_SetBrush(QAreaSeries* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QAreaSeries_Brush(const QAreaSeries* self) {
	return new QBrush(self->brush());
}

void QAreaSeries_SetColor(QAreaSeries* self, const QColor* color) {
	self->setColor(*color);
}

QColor* QAreaSeries_Color(const QAreaSeries* self) {
	return new QColor(self->color());
}

void QAreaSeries_SetBorderColor(QAreaSeries* self, const QColor* color) {
	self->setBorderColor(*color);
}

QColor* QAreaSeries_BorderColor(const QAreaSeries* self) {
	return new QColor(self->borderColor());
}

void QAreaSeries_SetPointsVisible(QAreaSeries* self) {
	self->setPointsVisible();
}

bool QAreaSeries_PointsVisible(const QAreaSeries* self) {
	return self->pointsVisible();
}

void QAreaSeries_SetPointLabelsFormat(QAreaSeries* self, const libqt_string format) {
	self->setPointLabelsFormat(QString::fromUtf8(format.data, format.len));
}

libqt_string QAreaSeries_PointLabelsFormat(const QAreaSeries* self) {
	QString _ret = self->pointLabelsFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAreaSeries_SetPointLabelsVisible(QAreaSeries* self) {
	self->setPointLabelsVisible();
}

bool QAreaSeries_PointLabelsVisible(const QAreaSeries* self) {
	return self->pointLabelsVisible();
}

void QAreaSeries_SetPointLabelsFont(QAreaSeries* self, const QFont* font) {
	self->setPointLabelsFont(*font);
}

QFont* QAreaSeries_PointLabelsFont(const QAreaSeries* self) {
	return new QFont(self->pointLabelsFont());
}

void QAreaSeries_SetPointLabelsColor(QAreaSeries* self, const QColor* color) {
	self->setPointLabelsColor(*color);
}

QColor* QAreaSeries_PointLabelsColor(const QAreaSeries* self) {
	return new QColor(self->pointLabelsColor());
}

void QAreaSeries_SetPointLabelsClipping(QAreaSeries* self) {
	self->setPointLabelsClipping();
}

bool QAreaSeries_PointLabelsClipping(const QAreaSeries* self) {
	return self->pointLabelsClipping();
}

void QAreaSeries_Clicked(QAreaSeries* self, const QPointF* point) {
	self->clicked(*point);
}

void QAreaSeries_Connect_Clicked(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const QPointF*) = reinterpret_cast<void (*)(QAreaSeries*, const QPointF*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::clicked, [self, slotFunc](const QPointF& point) {
	slotFunc(self, point);
    });
}

void QAreaSeries_Hovered(QAreaSeries* self, const QPointF* point, bool state) {
	self->hovered(*point, state);
}

void QAreaSeries_Connect_Hovered(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const QPointF*, bool) = reinterpret_cast<void (*)(QAreaSeries*, const QPointF*, bool)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::hovered, [self, slotFunc](const QPointF& point, bool state) {
	slotFunc(self, point, state);
    });
}

void QAreaSeries_Pressed(QAreaSeries* self, const QPointF* point) {
	self->pressed(*point);
}

void QAreaSeries_Connect_Pressed(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const QPointF*) = reinterpret_cast<void (*)(QAreaSeries*, const QPointF*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pressed, [self, slotFunc](const QPointF& point) {
	slotFunc(self, point);
    });
}

void QAreaSeries_Released(QAreaSeries* self, const QPointF* point) {
	self->released(*point);
}

void QAreaSeries_Connect_Released(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const QPointF*) = reinterpret_cast<void (*)(QAreaSeries*, const QPointF*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::released, [self, slotFunc](const QPointF& point) {
	slotFunc(self, point);
    });
}

void QAreaSeries_DoubleClicked(QAreaSeries* self, const QPointF* point) {
	self->doubleClicked(*point);
}

void QAreaSeries_Connect_DoubleClicked(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const QPointF*) = reinterpret_cast<void (*)(QAreaSeries*, const QPointF*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::doubleClicked, [self, slotFunc](const QPointF& point) {
	slotFunc(self, point);
    });
}

void QAreaSeries_Selected(QAreaSeries* self) {
	self->selected();
}

void QAreaSeries_Connect_Selected(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*) = reinterpret_cast<void (*)(QAreaSeries*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::selected, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAreaSeries_ColorChanged(QAreaSeries* self, QColor* color) {
	self->colorChanged(*color);
}

void QAreaSeries_Connect_ColorChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QColor*) = reinterpret_cast<void (*)(QAreaSeries*, QColor*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::colorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QAreaSeries_BorderColorChanged(QAreaSeries* self, QColor* color) {
	self->borderColorChanged(*color);
}

void QAreaSeries_Connect_BorderColorChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QColor*) = reinterpret_cast<void (*)(QAreaSeries*, QColor*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::borderColorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QAreaSeries_PointLabelsFormatChanged(QAreaSeries* self, const libqt_string format) {
	self->pointLabelsFormatChanged(QString::fromUtf8(format.data, format.len));
}

void QAreaSeries_Connect_PointLabelsFormatChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const char*) = reinterpret_cast<void (*)(QAreaSeries*, const char*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsFormatChanged, [self, slotFunc](const QString& format) {
	slotFunc(self, format);
    });
}

void QAreaSeries_PointLabelsVisibilityChanged(QAreaSeries* self, bool visible) {
	self->pointLabelsVisibilityChanged(visible);
}

void QAreaSeries_Connect_PointLabelsVisibilityChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, bool) = reinterpret_cast<void (*)(QAreaSeries*, bool)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsVisibilityChanged, [self, slotFunc](bool visible) {
	slotFunc(self, visible);
    });
}

void QAreaSeries_PointLabelsFontChanged(QAreaSeries* self, const QFont* font) {
	self->pointLabelsFontChanged(*font);
}

void QAreaSeries_Connect_PointLabelsFontChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const QFont*) = reinterpret_cast<void (*)(QAreaSeries*, const QFont*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsFontChanged, [self, slotFunc](const QFont& font) {
	slotFunc(self, font);
    });
}

void QAreaSeries_PointLabelsColorChanged(QAreaSeries* self, const QColor* color) {
	self->pointLabelsColorChanged(*color);
}

void QAreaSeries_Connect_PointLabelsColorChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const QColor*) = reinterpret_cast<void (*)(QAreaSeries*, const QColor*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsColorChanged, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

void QAreaSeries_PointLabelsClippingChanged(QAreaSeries* self, bool clipping) {
	self->pointLabelsClippingChanged(clipping);
}

void QAreaSeries_Connect_PointLabelsClippingChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, bool) = reinterpret_cast<void (*)(QAreaSeries*, bool)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsClippingChanged, [self, slotFunc](bool clipping) {
	slotFunc(self, clipping);
    });
}

libqt_string QAreaSeries_Tr2(const char* s, const char* c) {
	QString _ret = QAreaSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAreaSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAreaSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAreaSeries_SetPointsVisible1(QAreaSeries* self, bool visible) {
	self->setPointsVisible(visible);
}

void QAreaSeries_SetPointLabelsVisible1(QAreaSeries* self, bool visible) {
	self->setPointLabelsVisible(visible);
}

void QAreaSeries_SetPointLabelsClipping1(QAreaSeries* self, bool enabled) {
	self->setPointLabelsClipping(enabled);
}

// Base class handler implementation
int QAreaSeries_QBaseType(const QAreaSeries* self) {
	auto* vqareaseries = dynamic_cast<const VirtualQAreaSeries*>(self);
	if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
vqareaseries->setQAreaSeries_Type_IsBase(true);
	return vqareaseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnType(const QAreaSeries* self, intptr_t slot) {
	auto* vqareaseries = dynamic_cast<const VirtualQAreaSeries*>(self);
	if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
vqareaseries->setQAreaSeries_Type_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Type_Callback>(slot));
}
}

void QAreaSeries_Delete(QAreaSeries* self) {
    delete self;
}

