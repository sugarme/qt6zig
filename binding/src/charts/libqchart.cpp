#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QBrush>
#include <QChart>
#include <QEasingCurve>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsWidget>
#include <QLegend>
#include <QLocale>
#include <QMargins>
#include <QPen>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qchart.h>
#include "libqchart.h"
#include "libqchart.hxx"

QChart* QChart_new() {
	 return new QChart();
}

QChart* QChart_new2(QGraphicsItem* parent) {
	 return new QChart(parent);
}

QChart* QChart_new3(QGraphicsItem* parent, int wFlags) {
	 return new QChart(parent, static_cast<QFlags<Qt::WindowType>>(wFlags));
}

libqt_string QChart_Tr(const char* s) {
	QString _ret = QChart::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QChart_AddSeries(QChart* self, QAbstractSeries* series) {
	self->addSeries(series);
}

void QChart_RemoveSeries(QChart* self, QAbstractSeries* series) {
	self->removeSeries(series);
}

void QChart_RemoveAllSeries(QChart* self) {
	self->removeAllSeries();
}

libqt_list QChart_Series(const QChart* self) {
	return self->series();
}

void QChart_SetAxisX(QChart* self, QAbstractAxis* axis) {
	self->setAxisX(axis);
}

void QChart_SetAxisY(QChart* self, QAbstractAxis* axis) {
	self->setAxisY(axis);
}

QAbstractAxis* QChart_AxisX(const QChart* self) {
	return self->axisX();
}

QAbstractAxis* QChart_AxisY(const QChart* self) {
	return self->axisY();
}

void QChart_AddAxis(QChart* self, QAbstractAxis* axis, int alignment) {
	self->addAxis(axis, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QChart_RemoveAxis(QChart* self, QAbstractAxis* axis) {
	self->removeAxis(axis);
}

libqt_list QChart_Axes(const QChart* self) {
	return self->axes();
}

void QChart_CreateDefaultAxes(QChart* self) {
	self->createDefaultAxes();
}

void QChart_SetTheme(QChart* self, int theme) {
	self->setTheme(static_cast<QChart::ChartTheme>(theme));
}

int QChart_Theme(const QChart* self) {
	return self->theme();
}

void QChart_SetTitle(QChart* self, const libqt_string title) {
	self->setTitle(QString::fromUtf8(title.data, title.len));
}

libqt_string QChart_Title(const QChart* self) {
	QString _ret = self->title();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QChart_SetTitleFont(QChart* self, const QFont* font) {
	self->setTitleFont(*font);
}

QFont* QChart_TitleFont(const QChart* self) {
	return new QFont(self->titleFont());
}

void QChart_SetTitleBrush(QChart* self, const QBrush* brush) {
	self->setTitleBrush(*brush);
}

QBrush* QChart_TitleBrush(const QChart* self) {
	return new QBrush(self->titleBrush());
}

void QChart_SetBackgroundBrush(QChart* self, const QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QChart_BackgroundBrush(const QChart* self) {
	return new QBrush(self->backgroundBrush());
}

void QChart_SetBackgroundPen(QChart* self, const QPen* pen) {
	self->setBackgroundPen(*pen);
}

QPen* QChart_BackgroundPen(const QChart* self) {
	return new QPen(self->backgroundPen());
}

void QChart_SetBackgroundVisible(QChart* self) {
	self->setBackgroundVisible();
}

bool QChart_IsBackgroundVisible(const QChart* self) {
	return self->isBackgroundVisible();
}

void QChart_SetDropShadowEnabled(QChart* self) {
	self->setDropShadowEnabled();
}

bool QChart_IsDropShadowEnabled(const QChart* self) {
	return self->isDropShadowEnabled();
}

void QChart_SetBackgroundRoundness(QChart* self, double diameter) {
	self->setBackgroundRoundness(diameter);
}

double QChart_BackgroundRoundness(const QChart* self) {
	return self->backgroundRoundness();
}

void QChart_SetAnimationOptions(QChart* self, int options) {
	self->setAnimationOptions(static_cast<QFlags<QChart::AnimationOption>>(options));
}

int QChart_AnimationOptions(const QChart* self) {
	return self->animationOptions();
}

void QChart_SetAnimationDuration(QChart* self, int msecs) {
	self->setAnimationDuration(msecs);
}

int QChart_AnimationDuration(const QChart* self) {
	return self->animationDuration();
}

void QChart_SetAnimationEasingCurve(QChart* self, const QEasingCurve* curve) {
	self->setAnimationEasingCurve(*curve);
}

QEasingCurve* QChart_AnimationEasingCurve(const QChart* self) {
	return new QEasingCurve(self->animationEasingCurve());
}

void QChart_ZoomIn(QChart* self) {
	self->zoomIn();
}

void QChart_ZoomOut(QChart* self) {
	self->zoomOut();
}

void QChart_ZoomIn2(QChart* self, const QRectF* rect) {
	self->zoomIn(*rect);
}

void QChart_Zoom(QChart* self, double factor) {
	self->zoom(factor);
}

void QChart_ZoomReset(QChart* self) {
	self->zoomReset();
}

bool QChart_IsZoomed(QChart* self) {
	return self->isZoomed();
}

void QChart_Scroll(QChart* self, double dx, double dy) {
	self->scroll(dx, dy);
}

QLegend* QChart_Legend(const QChart* self) {
	return self->legend();
}

void QChart_SetMargins(QChart* self, const QMargins* margins) {
	self->setMargins(*margins);
}

QMargins* QChart_Margins(const QChart* self) {
	return new QMargins(self->margins());
}

QRectF* QChart_PlotArea(const QChart* self) {
	return new QRectF(self->plotArea());
}

void QChart_SetPlotArea(QChart* self, const QRectF* rect) {
	self->setPlotArea(*rect);
}

void QChart_SetPlotAreaBackgroundBrush(QChart* self, const QBrush* brush) {
	self->setPlotAreaBackgroundBrush(*brush);
}

QBrush* QChart_PlotAreaBackgroundBrush(const QChart* self) {
	return new QBrush(self->plotAreaBackgroundBrush());
}

void QChart_SetPlotAreaBackgroundPen(QChart* self, const QPen* pen) {
	self->setPlotAreaBackgroundPen(*pen);
}

QPen* QChart_PlotAreaBackgroundPen(const QChart* self) {
	return new QPen(self->plotAreaBackgroundPen());
}

void QChart_SetPlotAreaBackgroundVisible(QChart* self) {
	self->setPlotAreaBackgroundVisible();
}

bool QChart_IsPlotAreaBackgroundVisible(const QChart* self) {
	return self->isPlotAreaBackgroundVisible();
}

void QChart_SetLocalizeNumbers(QChart* self, bool localize) {
	self->setLocalizeNumbers(localize);
}

bool QChart_LocalizeNumbers(const QChart* self) {
	return self->localizeNumbers();
}

void QChart_SetLocale(QChart* self, const QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QChart_Locale(const QChart* self) {
	return new QLocale(self->locale());
}

QPointF* QChart_MapToValue(QChart* self, const QPointF* position) {
	return new QPointF(self->mapToValue(*position));
}

QPointF* QChart_MapToPosition(QChart* self, const QPointF* value) {
	return new QPointF(self->mapToPosition(*value));
}

int QChart_ChartType(const QChart* self) {
	return self->chartType();
}

void QChart_PlotAreaChanged(QChart* self, const QRectF* plotArea) {
	self->plotAreaChanged(*plotArea);
}

void QChart_Connect_PlotAreaChanged(QChart* self, intptr_t slot) {
    void (*slotFunc)(QChart*, const QRectF*) = reinterpret_cast<void (*)(QChart*, const QRectF*)>(slot);
    QChart::connect(self, &QChart::plotAreaChanged, [self, slotFunc](const QRectF& plotArea) {
	slotFunc(self, plotArea);
    });
}

libqt_string QChart_Tr2(const char* s, const char* c) {
	QString _ret = QChart::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QChart_Tr3(const char* s, const char* c, int n) {
	QString _ret = QChart::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QChart_SetAxisX2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series) {
	self->setAxisX(axis, series);
}

void QChart_SetAxisY2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series) {
	self->setAxisY(axis, series);
}

QAbstractAxis* QChart_AxisX1(const QChart* self, QAbstractSeries* series) {
	return self->axisX(series);
}

QAbstractAxis* QChart_AxisY1(const QChart* self, QAbstractSeries* series) {
	return self->axisY(series);
}

libqt_list QChart_Axes1(const QChart* self, int orientation) {
	return self->axes(static_cast<QFlags<Qt::Orientation>>(orientation));
}

libqt_list QChart_Axes2(const QChart* self, int orientation, QAbstractSeries* series) {
	return self->axes(static_cast<QFlags<Qt::Orientation>>(orientation), series);
}

void QChart_SetBackgroundVisible1(QChart* self, bool visible) {
	self->setBackgroundVisible(visible);
}

void QChart_SetDropShadowEnabled1(QChart* self, bool enabled) {
	self->setDropShadowEnabled(enabled);
}

void QChart_SetPlotAreaBackgroundVisible1(QChart* self, bool visible) {
	self->setPlotAreaBackgroundVisible(visible);
}

QPointF* QChart_MapToValue2(QChart* self, const QPointF* position, QAbstractSeries* series) {
	return new QPointF(self->mapToValue(*position, series));
}

QPointF* QChart_MapToPosition2(QChart* self, const QPointF* value, QAbstractSeries* series) {
	return new QPointF(self->mapToPosition(*value, series));
}

void QChart_Delete(QChart* self) {
    delete self;
}

