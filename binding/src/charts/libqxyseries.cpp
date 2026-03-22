#include <QAbstractSeries>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QImage>
#include <QLinearGradient>
#include <QPen>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QXYSeries>
#include <qxyseries.h>
#include "libqxyseries.h"
#include "libqxyseries.hxx"

libqt_string QXYSeries_Tr(const char* s) {
	QString _ret = QXYSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QXYSeries_Append(QXYSeries* self, double x, double y) {
	self->append(x, y);
}

void QXYSeries_Append2(QXYSeries* self, const QPointF* point) {
	self->append(*point);
}

void QXYSeries_Append3(QXYSeries* self, const libqt_list points) {
	self->append(*points);
}

void QXYSeries_Replace(QXYSeries* self, double oldX, double oldY, double newX, double newY) {
	self->replace(oldX, oldY, newX, newY);
}

void QXYSeries_Replace2(QXYSeries* self, const QPointF* oldPoint, const QPointF* newPoint) {
	self->replace(*oldPoint, *newPoint);
}

void QXYSeries_Replace3(QXYSeries* self, int index, double newX, double newY) {
	self->replace(index, newX, newY);
}

void QXYSeries_Replace4(QXYSeries* self, int index, const QPointF* newPoint) {
	self->replace(index, *newPoint);
}

void QXYSeries_Remove(QXYSeries* self, double x, double y) {
	self->remove(x, y);
}

void QXYSeries_Remove2(QXYSeries* self, const QPointF* point) {
	self->remove(*point);
}

void QXYSeries_Remove3(QXYSeries* self, int index) {
	self->remove(index);
}

void QXYSeries_RemovePoints(QXYSeries* self, int index, int count) {
	self->removePoints(index, count);
}

void QXYSeries_Insert(QXYSeries* self, int index, const QPointF* point) {
	self->insert(index, *point);
}

void QXYSeries_Clear(QXYSeries* self) {
	self->clear();
}

int QXYSeries_Count(const QXYSeries* self) {
	return self->count();
}

libqt_list QXYSeries_Points(const QXYSeries* self) {
	return self->points();
}

libqt_list QXYSeries_PointsVector(const QXYSeries* self) {
	return self->pointsVector();
}

const QPointF* QXYSeries_At(const QXYSeries* self, int index) {
	const QPointF& _ret = self->at(index);
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QXYSeries* QXYSeries_OperatorShiftLeft(QXYSeries* self, const QPointF* point) {
	return new QXYSeries(self->operator<<(*point));
}

QXYSeries* QXYSeries_OperatorShiftLeft2(QXYSeries* self, const libqt_list points) {
	return new QXYSeries(self->operator<<(*points));
}

void QXYSeries_SetPen(QXYSeries* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QXYSeries_Pen(const QXYSeries* self) {
	return new QPen(self->pen());
}

void QXYSeries_SetBrush(QXYSeries* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QXYSeries_Brush(const QXYSeries* self) {
	return new QBrush(self->brush());
}

void QXYSeries_SetColor(QXYSeries* self, const QColor* color) {
	self->setColor(*color);
}

QColor* QXYSeries_Color(const QXYSeries* self) {
	return new QColor(self->color());
}

void QXYSeries_SetSelectedColor(QXYSeries* self, const QColor* color) {
	self->setSelectedColor(*color);
}

QColor* QXYSeries_SelectedColor(const QXYSeries* self) {
	return new QColor(self->selectedColor());
}

void QXYSeries_SetPointsVisible(QXYSeries* self) {
	self->setPointsVisible();
}

bool QXYSeries_PointsVisible(const QXYSeries* self) {
	return self->pointsVisible();
}

void QXYSeries_SetPointLabelsFormat(QXYSeries* self, const libqt_string format) {
	self->setPointLabelsFormat(QString::fromUtf8(format.data, format.len));
}

libqt_string QXYSeries_PointLabelsFormat(const QXYSeries* self) {
	QString _ret = self->pointLabelsFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QXYSeries_SetPointLabelsVisible(QXYSeries* self) {
	self->setPointLabelsVisible();
}

bool QXYSeries_PointLabelsVisible(const QXYSeries* self) {
	return self->pointLabelsVisible();
}

void QXYSeries_SetPointLabelsFont(QXYSeries* self, const QFont* font) {
	self->setPointLabelsFont(*font);
}

QFont* QXYSeries_PointLabelsFont(const QXYSeries* self) {
	return new QFont(self->pointLabelsFont());
}

void QXYSeries_SetPointLabelsColor(QXYSeries* self, const QColor* color) {
	self->setPointLabelsColor(*color);
}

QColor* QXYSeries_PointLabelsColor(const QXYSeries* self) {
	return new QColor(self->pointLabelsColor());
}

void QXYSeries_SetPointLabelsClipping(QXYSeries* self) {
	self->setPointLabelsClipping();
}

bool QXYSeries_PointLabelsClipping(const QXYSeries* self) {
	return self->pointLabelsClipping();
}

void QXYSeries_Replace5(QXYSeries* self, const libqt_list points) {
	self->replace(*points);
}

bool QXYSeries_IsPointSelected(QXYSeries* self, int index) {
	return self->isPointSelected(index);
}

void QXYSeries_SelectPoint(QXYSeries* self, int index) {
	self->selectPoint(index);
}

void QXYSeries_DeselectPoint(QXYSeries* self, int index) {
	self->deselectPoint(index);
}

void QXYSeries_SetPointSelected(QXYSeries* self, int index, bool selected) {
	self->setPointSelected(index, selected);
}

void QXYSeries_SelectAllPoints(QXYSeries* self) {
	self->selectAllPoints();
}

void QXYSeries_DeselectAllPoints(QXYSeries* self) {
	self->deselectAllPoints();
}

void QXYSeries_SelectPoints(QXYSeries* self, const libqt_list indexes) {
	self->selectPoints(*indexes);
}

void QXYSeries_DeselectPoints(QXYSeries* self, const libqt_list indexes) {
	self->deselectPoints(*indexes);
}

void QXYSeries_ToggleSelection(QXYSeries* self, const libqt_list indexes) {
	self->toggleSelection(*indexes);
}

libqt_list QXYSeries_SelectedPoints(const QXYSeries* self) {
	return self->selectedPoints();
}

void QXYSeries_SetLightMarker(QXYSeries* self, const QImage* lightMarker) {
	self->setLightMarker(*lightMarker);
}

const QImage* QXYSeries_LightMarker(const QXYSeries* self) {
	const QImage& _ret = self->lightMarker();
	// Cast returned reference into pointer
	return const_cast<QImage*>(&_ret);
}

void QXYSeries_SetSelectedLightMarker(QXYSeries* self, const QImage* selectedLightMarker) {
	self->setSelectedLightMarker(*selectedLightMarker);
}

const QImage* QXYSeries_SelectedLightMarker(const QXYSeries* self) {
	const QImage& _ret = self->selectedLightMarker();
	// Cast returned reference into pointer
	return const_cast<QImage*>(&_ret);
}

void QXYSeries_SetMarkerSize(QXYSeries* self, double size) {
	self->setMarkerSize(size);
}

double QXYSeries_MarkerSize(const QXYSeries* self) {
	return self->markerSize();
}

void QXYSeries_SetBestFitLineVisible(QXYSeries* self) {
	self->setBestFitLineVisible();
}

bool QXYSeries_BestFitLineVisible(const QXYSeries* self) {
	return self->bestFitLineVisible();
}

libqt_pair QXYSeries_BestFitLineEquation(const QXYSeries* self, bool* ok) {
	return self->bestFitLineEquation(*ok);
}

void QXYSeries_SetBestFitLinePen(QXYSeries* self, const QPen* pen) {
	self->setBestFitLinePen(*pen);
}

QPen* QXYSeries_BestFitLinePen(const QXYSeries* self) {
	return new QPen(self->bestFitLinePen());
}

void QXYSeries_SetBestFitLineColor(QXYSeries* self, const QColor* color) {
	self->setBestFitLineColor(*color);
}

QColor* QXYSeries_BestFitLineColor(const QXYSeries* self) {
	return new QColor(self->bestFitLineColor());
}

void QXYSeries_ClearPointConfiguration(QXYSeries* self, const int index) {
	self->clearPointConfiguration(index);
}

void QXYSeries_ClearPointConfiguration2(QXYSeries* self, const int index, const int key) {
	self->clearPointConfiguration(index, static_cast<QXYSeries::PointConfiguration>(key));
}

void QXYSeries_ClearPointsConfiguration(QXYSeries* self) {
	self->clearPointsConfiguration();
}

void QXYSeries_ClearPointsConfiguration2(QXYSeries* self, const int key) {
	self->clearPointsConfiguration(static_cast<QXYSeries::PointConfiguration>(key));
}

void QXYSeries_SetPointConfiguration(QXYSeries* self, const int index, const libqt_map configuration) {
	self->setPointConfiguration(index, *configuration);
}

void QXYSeries_SetPointConfiguration2(QXYSeries* self, const int index, const int key, const QVariant* value) {
	self->setPointConfiguration(index, static_cast<QXYSeries::PointConfiguration>(key), *value);
}

void QXYSeries_SetPointsConfiguration(QXYSeries* self, const libqt_map pointsConfiguration) {
	self->setPointsConfiguration(*pointsConfiguration);
}

libqt_map QXYSeries_PointConfiguration(const QXYSeries* self, const int index) {
	return self->pointConfiguration(index);
}

libqt_map QXYSeries_PointsConfiguration(const QXYSeries* self) {
	return self->pointsConfiguration();
}

void QXYSeries_SizeBy(QXYSeries* self, const libqt_list sourceData, const double minSize, const double maxSize) {
	self->sizeBy(*sourceData, minSize, maxSize);
}

void QXYSeries_ColorBy(QXYSeries* self, const libqt_list sourceData) {
	self->colorBy(*sourceData);
}

void QXYSeries_Clicked(QXYSeries* self, const QPointF* point) {
	self->clicked(*point);
}

void QXYSeries_Connect_Clicked(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QPointF*) = reinterpret_cast<void (*)(QXYSeries*, const QPointF*)>(slot);
    QXYSeries::connect(self, &QXYSeries::clicked, [self, slotFunc](const QPointF& point) {
	slotFunc(self, point);
    });
}

void QXYSeries_Hovered(QXYSeries* self, const QPointF* point, bool state) {
	self->hovered(*point, state);
}

void QXYSeries_Connect_Hovered(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QPointF*, bool) = reinterpret_cast<void (*)(QXYSeries*, const QPointF*, bool)>(slot);
    QXYSeries::connect(self, &QXYSeries::hovered, [self, slotFunc](const QPointF& point, bool state) {
	slotFunc(self, point, state);
    });
}

void QXYSeries_Pressed(QXYSeries* self, const QPointF* point) {
	self->pressed(*point);
}

void QXYSeries_Connect_Pressed(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QPointF*) = reinterpret_cast<void (*)(QXYSeries*, const QPointF*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pressed, [self, slotFunc](const QPointF& point) {
	slotFunc(self, point);
    });
}

void QXYSeries_Released(QXYSeries* self, const QPointF* point) {
	self->released(*point);
}

void QXYSeries_Connect_Released(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QPointF*) = reinterpret_cast<void (*)(QXYSeries*, const QPointF*)>(slot);
    QXYSeries::connect(self, &QXYSeries::released, [self, slotFunc](const QPointF& point) {
	slotFunc(self, point);
    });
}

void QXYSeries_DoubleClicked(QXYSeries* self, const QPointF* point) {
	self->doubleClicked(*point);
}

void QXYSeries_Connect_DoubleClicked(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QPointF*) = reinterpret_cast<void (*)(QXYSeries*, const QPointF*)>(slot);
    QXYSeries::connect(self, &QXYSeries::doubleClicked, [self, slotFunc](const QPointF& point) {
	slotFunc(self, point);
    });
}

void QXYSeries_PointReplaced(QXYSeries* self, int index) {
	self->pointReplaced(index);
}

void QXYSeries_Connect_PointReplaced(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, int) = reinterpret_cast<void (*)(QXYSeries*, int)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointReplaced, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QXYSeries_PointRemoved(QXYSeries* self, int index) {
	self->pointRemoved(index);
}

void QXYSeries_Connect_PointRemoved(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, int) = reinterpret_cast<void (*)(QXYSeries*, int)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointRemoved, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QXYSeries_PointAdded(QXYSeries* self, int index) {
	self->pointAdded(index);
}

void QXYSeries_Connect_PointAdded(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, int) = reinterpret_cast<void (*)(QXYSeries*, int)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointAdded, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QXYSeries_ColorChanged(QXYSeries* self, QColor* color) {
	self->colorChanged(*color);
}

void QXYSeries_Connect_ColorChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QColor*) = reinterpret_cast<void (*)(QXYSeries*, QColor*)>(slot);
    QXYSeries::connect(self, &QXYSeries::colorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QXYSeries_SelectedColorChanged(QXYSeries* self, const QColor* color) {
	self->selectedColorChanged(*color);
}

void QXYSeries_Connect_SelectedColorChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QColor*) = reinterpret_cast<void (*)(QXYSeries*, const QColor*)>(slot);
    QXYSeries::connect(self, &QXYSeries::selectedColorChanged, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

void QXYSeries_PointsReplaced(QXYSeries* self) {
	self->pointsReplaced();
}

void QXYSeries_Connect_PointsReplaced(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*) = reinterpret_cast<void (*)(QXYSeries*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointsReplaced, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QXYSeries_PointLabelsFormatChanged(QXYSeries* self, const libqt_string format) {
	self->pointLabelsFormatChanged(QString::fromUtf8(format.data, format.len));
}

void QXYSeries_Connect_PointLabelsFormatChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const char*) = reinterpret_cast<void (*)(QXYSeries*, const char*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsFormatChanged, [self, slotFunc](const QString& format) {
	slotFunc(self, format);
    });
}

void QXYSeries_PointLabelsVisibilityChanged(QXYSeries* self, bool visible) {
	self->pointLabelsVisibilityChanged(visible);
}

void QXYSeries_Connect_PointLabelsVisibilityChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, bool) = reinterpret_cast<void (*)(QXYSeries*, bool)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsVisibilityChanged, [self, slotFunc](bool visible) {
	slotFunc(self, visible);
    });
}

void QXYSeries_PointLabelsFontChanged(QXYSeries* self, const QFont* font) {
	self->pointLabelsFontChanged(*font);
}

void QXYSeries_Connect_PointLabelsFontChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QFont*) = reinterpret_cast<void (*)(QXYSeries*, const QFont*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsFontChanged, [self, slotFunc](const QFont& font) {
	slotFunc(self, font);
    });
}

void QXYSeries_PointLabelsColorChanged(QXYSeries* self, const QColor* color) {
	self->pointLabelsColorChanged(*color);
}

void QXYSeries_Connect_PointLabelsColorChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QColor*) = reinterpret_cast<void (*)(QXYSeries*, const QColor*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsColorChanged, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

void QXYSeries_PointLabelsClippingChanged(QXYSeries* self, bool clipping) {
	self->pointLabelsClippingChanged(clipping);
}

void QXYSeries_Connect_PointLabelsClippingChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, bool) = reinterpret_cast<void (*)(QXYSeries*, bool)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsClippingChanged, [self, slotFunc](bool clipping) {
	slotFunc(self, clipping);
    });
}

void QXYSeries_PointsRemoved(QXYSeries* self, int index, int count) {
	self->pointsRemoved(index, count);
}

void QXYSeries_Connect_PointsRemoved(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, int, int) = reinterpret_cast<void (*)(QXYSeries*, int, int)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointsRemoved, [self, slotFunc](int index, int count) {
	slotFunc(self, index, count);
    });
}

void QXYSeries_PenChanged(QXYSeries* self, const QPen* pen) {
	self->penChanged(*pen);
}

void QXYSeries_Connect_PenChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QPen*) = reinterpret_cast<void (*)(QXYSeries*, const QPen*)>(slot);
    QXYSeries::connect(self, &QXYSeries::penChanged, [self, slotFunc](const QPen& pen) {
	slotFunc(self, pen);
    });
}

void QXYSeries_SelectedPointsChanged(QXYSeries* self) {
	self->selectedPointsChanged();
}

void QXYSeries_Connect_SelectedPointsChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*) = reinterpret_cast<void (*)(QXYSeries*)>(slot);
    QXYSeries::connect(self, &QXYSeries::selectedPointsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QXYSeries_LightMarkerChanged(QXYSeries* self, const QImage* lightMarker) {
	self->lightMarkerChanged(*lightMarker);
}

void QXYSeries_Connect_LightMarkerChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QImage*) = reinterpret_cast<void (*)(QXYSeries*, const QImage*)>(slot);
    QXYSeries::connect(self, &QXYSeries::lightMarkerChanged, [self, slotFunc](const QImage& lightMarker) {
	slotFunc(self, lightMarker);
    });
}

void QXYSeries_SelectedLightMarkerChanged(QXYSeries* self, const QImage* selectedLightMarker) {
	self->selectedLightMarkerChanged(*selectedLightMarker);
}

void QXYSeries_Connect_SelectedLightMarkerChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QImage*) = reinterpret_cast<void (*)(QXYSeries*, const QImage*)>(slot);
    QXYSeries::connect(self, &QXYSeries::selectedLightMarkerChanged, [self, slotFunc](const QImage& selectedLightMarker) {
	slotFunc(self, selectedLightMarker);
    });
}

void QXYSeries_BestFitLineVisibilityChanged(QXYSeries* self, bool visible) {
	self->bestFitLineVisibilityChanged(visible);
}

void QXYSeries_Connect_BestFitLineVisibilityChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, bool) = reinterpret_cast<void (*)(QXYSeries*, bool)>(slot);
    QXYSeries::connect(self, &QXYSeries::bestFitLineVisibilityChanged, [self, slotFunc](bool visible) {
	slotFunc(self, visible);
    });
}

void QXYSeries_BestFitLinePenChanged(QXYSeries* self, const QPen* pen) {
	self->bestFitLinePenChanged(*pen);
}

void QXYSeries_Connect_BestFitLinePenChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QPen*) = reinterpret_cast<void (*)(QXYSeries*, const QPen*)>(slot);
    QXYSeries::connect(self, &QXYSeries::bestFitLinePenChanged, [self, slotFunc](const QPen& pen) {
	slotFunc(self, pen);
    });
}

void QXYSeries_BestFitLineColorChanged(QXYSeries* self, const QColor* color) {
	self->bestFitLineColorChanged(*color);
}

void QXYSeries_Connect_BestFitLineColorChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, const QColor*) = reinterpret_cast<void (*)(QXYSeries*, const QColor*)>(slot);
    QXYSeries::connect(self, &QXYSeries::bestFitLineColorChanged, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

void QXYSeries_PointsConfigurationChanged(QXYSeries* self, const libqt_map configuration) {
	self->pointsConfigurationChanged(*configuration);
}

void QXYSeries_Connect_PointsConfigurationChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, libqt_map) = reinterpret_cast<void (*)(QXYSeries*, libqt_map)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointsConfigurationChanged, [self, slotFunc](const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>& configuration) {
	slotFunc(self, configuration);
    });
}

void QXYSeries_MarkerSizeChanged(QXYSeries* self, double size) {
	self->markerSizeChanged(size);
}

void QXYSeries_Connect_MarkerSizeChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, double) = reinterpret_cast<void (*)(QXYSeries*, double)>(slot);
    QXYSeries::connect(self, &QXYSeries::markerSizeChanged, [self, slotFunc](qreal size) {
	slotFunc(self, size);
    });
}

libqt_string QXYSeries_Tr2(const char* s, const char* c) {
	QString _ret = QXYSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QXYSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QXYSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QXYSeries_SetPointsVisible1(QXYSeries* self, bool visible) {
	self->setPointsVisible(visible);
}

void QXYSeries_SetPointLabelsVisible1(QXYSeries* self, bool visible) {
	self->setPointLabelsVisible(visible);
}

void QXYSeries_SetPointLabelsClipping1(QXYSeries* self, bool enabled) {
	self->setPointLabelsClipping(enabled);
}

void QXYSeries_SetBestFitLineVisible1(QXYSeries* self, bool visible) {
	self->setBestFitLineVisible(visible);
}

void QXYSeries_ColorBy2(QXYSeries* self, const libqt_list sourceData, const QLinearGradient* gradient) {
	self->colorBy(*sourceData, *gradient);
}

// Base class handler implementation
void QXYSeries_QBaseSetPen(QXYSeries* self, const QPen* pen) {
	auto* vqxyseries = dynamic_cast<VirtualQXYSeries*>(self);
	if (vqxyseries && vqxyseries->isVirtualQXYSeries) {
vqxyseries->setQXYSeries_SetPen_IsBase(true);
	vqxyseries->setPen(*pen);
}
}

// Auxiliary method to allow providing re-implementation
void QXYSeries_OnSetPen(QXYSeries* self, intptr_t slot) {
	auto* vqxyseries = dynamic_cast<VirtualQXYSeries*>(self);
	if (vqxyseries && vqxyseries->isVirtualQXYSeries) {
vqxyseries->setQXYSeries_SetPen_Callback(reinterpret_cast<VirtualQXYSeries::QXYSeries_SetPen_Callback>(slot));
}
}

// Base class handler implementation
void QXYSeries_QBaseSetBrush(QXYSeries* self, const QBrush* brush) {
	auto* vqxyseries = dynamic_cast<VirtualQXYSeries*>(self);
	if (vqxyseries && vqxyseries->isVirtualQXYSeries) {
vqxyseries->setQXYSeries_SetBrush_IsBase(true);
	vqxyseries->setBrush(*brush);
}
}

// Auxiliary method to allow providing re-implementation
void QXYSeries_OnSetBrush(QXYSeries* self, intptr_t slot) {
	auto* vqxyseries = dynamic_cast<VirtualQXYSeries*>(self);
	if (vqxyseries && vqxyseries->isVirtualQXYSeries) {
vqxyseries->setQXYSeries_SetBrush_Callback(reinterpret_cast<VirtualQXYSeries::QXYSeries_SetBrush_Callback>(slot));
}
}

// Base class handler implementation
void QXYSeries_QBaseSetColor(QXYSeries* self, const QColor* color) {
	auto* vqxyseries = dynamic_cast<VirtualQXYSeries*>(self);
	if (vqxyseries && vqxyseries->isVirtualQXYSeries) {
vqxyseries->setQXYSeries_SetColor_IsBase(true);
	vqxyseries->setColor(*color);
}
}

// Auxiliary method to allow providing re-implementation
void QXYSeries_OnSetColor(QXYSeries* self, intptr_t slot) {
	auto* vqxyseries = dynamic_cast<VirtualQXYSeries*>(self);
	if (vqxyseries && vqxyseries->isVirtualQXYSeries) {
vqxyseries->setQXYSeries_SetColor_Callback(reinterpret_cast<VirtualQXYSeries::QXYSeries_SetColor_Callback>(slot));
}
}

// Base class handler implementation
QColor* QXYSeries_QBaseColor(const QXYSeries* self) {
	auto* vqxyseries = dynamic_cast<const VirtualQXYSeries*>(self);
	if (vqxyseries && vqxyseries->isVirtualQXYSeries) {
vqxyseries->setQXYSeries_Color_IsBase(true);
	return new QColor(vqxyseries->color());
}
}

// Auxiliary method to allow providing re-implementation
void QXYSeries_OnColor(const QXYSeries* self, intptr_t slot) {
	auto* vqxyseries = dynamic_cast<const VirtualQXYSeries*>(self);
	if (vqxyseries && vqxyseries->isVirtualQXYSeries) {
vqxyseries->setQXYSeries_Color_Callback(reinterpret_cast<VirtualQXYSeries::QXYSeries_Color_Callback>(slot));
}
}

void QXYSeries_Delete(QXYSeries* self) {
    delete self;
}

