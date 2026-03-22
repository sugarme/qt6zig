#include <QBrush>
#include <QBrushData>
#include <QColor>
#include <QConicalGradient>
#include <QGradient>
#define WORKAROUND_INNER_CLASS_DEFINITION_QGradient__QGradientData
#include <QImage>
#include <QLinearGradient>
#include <QPixmap>
#include <QPointF>
#include <QRadialGradient>
#include <QTransform>
#include <QVariant>
#include <qbrush.h>
#include "libqbrush.h"
#include "libqbrush.hxx"

QBrushDataPointerDeleter* QBrushDataPointerDeleter_new() {
	 return new QBrushDataPointerDeleter();
}

void QBrushDataPointerDeleter_CopyAssign(QBrushDataPointerDeleter* self, QBrushDataPointerDeleter* other) {
    *self = *other;
}

void QBrushDataPointerDeleter_MoveAssign(QBrushDataPointerDeleter* self, QBrushDataPointerDeleter* other) {
    *self = std::move(*other);
}

void QBrushDataPointerDeleter_OperatorCall(const QBrushDataPointerDeleter* self, QBrushData* d) {
	self->operator()(d);
}

void QBrushDataPointerDeleter_Delete(QBrushDataPointerDeleter* self) {
    delete self;
}

QBrush* QBrush_new() {
	 return new QBrush();
}

QBrush* QBrush_new2(int bs) {
	 return new QBrush(static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new3(const QColor* color) {
	 return new QBrush(*color);
}

QBrush* QBrush_new4(int color) {
	 return new QBrush(static_cast<Qt::GlobalColor>(color));
}

QBrush* QBrush_new5(const QColor* color, const QPixmap* pixmap) {
	 return new QBrush(*color, *pixmap);
}

QBrush* QBrush_new6(int color, const QPixmap* pixmap) {
	 return new QBrush(static_cast<Qt::GlobalColor>(color), *pixmap);
}

QBrush* QBrush_new7(const QPixmap* pixmap) {
	 return new QBrush(*pixmap);
}

QBrush* QBrush_new8(const QImage* image) {
	 return new QBrush(*image);
}

QBrush* QBrush_new9(const QBrush* brush) {
	 return new QBrush(*brush);
}

QBrush* QBrush_new10(const QGradient* gradient) {
	 return new QBrush(*gradient);
}

QBrush* QBrush_new11(const QColor* color, int bs) {
	 return new QBrush(*color, static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new12(int color, int bs) {
	 return new QBrush(static_cast<Qt::GlobalColor>(color), static_cast<Qt::BrushStyle>(bs));
}

void QBrush_OperatorAssign(QBrush* self, const QBrush* brush) {
	self->operator=(*brush);
}

void QBrush_Swap(QBrush* self, QBrush* other) {
	self->swap(*other);
}

QVariant* QBrush_OperatorQVariant(const QBrush* self) {
	return new QVariant(self->operator QVariant());
}

int QBrush_Style(const QBrush* self) {
	return self->style();
}

void QBrush_SetStyle(QBrush* self, int style) {
	self->setStyle(static_cast<Qt::BrushStyle>(style));
}

QTransform* QBrush_Transform(const QBrush* self) {
	return new QTransform(self->transform());
}

void QBrush_SetTransform(QBrush* self, const QTransform* transform) {
	self->setTransform(*transform);
}

QPixmap* QBrush_Texture(const QBrush* self) {
	return new QPixmap(self->texture());
}

void QBrush_SetTexture(QBrush* self, const QPixmap* pixmap) {
	self->setTexture(*pixmap);
}

QImage* QBrush_TextureImage(const QBrush* self) {
	return new QImage(self->textureImage());
}

void QBrush_SetTextureImage(QBrush* self, const QImage* image) {
	self->setTextureImage(*image);
}

const QColor* QBrush_Color(const QBrush* self) {
	const QColor& _ret = self->color();
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

void QBrush_SetColor(QBrush* self, const QColor* color) {
	self->setColor(*color);
}

void QBrush_SetColor2(QBrush* self, int color) {
	self->setColor(static_cast<Qt::GlobalColor>(color));
}

const QGradient* QBrush_Gradient(const QBrush* self) {
	return self->gradient();
}

bool QBrush_IsOpaque(const QBrush* self) {
	return self->isOpaque();
}

bool QBrush_OperatorEqual(const QBrush* self, const QBrush* b) {
	return self->operator==(*b);
}

bool QBrush_OperatorNotEqual(const QBrush* self, const QBrush* b) {
	return self->operator!=(*b);
}

bool QBrush_IsDetached(const QBrush* self) {
	return self->isDetached();
}

void QBrush_Delete(QBrush* self) {
    delete self;
}

QBrushData* QBrushData_new(const QBrushData* param1) {
	 return new QBrushData(*param1);
}

int QBrushData_Style(const QBrushData* self) {
	return self->style;
}

void QBrushData_SetStyle(QBrushData* self, int style) {
	self->style;
}

QColor* QBrushData_Color(const QBrushData* self) {
	return new QColor(self->color);
}

void QBrushData_SetColor(QBrushData* self, QColor* color) {
	self->color;
}

QTransform* QBrushData_Transform(const QBrushData* self) {
	return new QTransform(self->transform);
}

void QBrushData_SetTransform(QBrushData* self, QTransform* transform) {
	self->transform;
}

QGradient* QGradient_new() {
	 return new QGradient();
}

QGradient* QGradient_new2(int param1) {
	 return new QGradient(static_cast<QGradient::Preset>(param1));
}

QGradient* QGradient_new3(const QGradient* param1) {
	 return new QGradient(*param1);
}

int QGradient_Type(const QGradient* self) {
	return self->type();
}

void QGradient_SetSpread(QGradient* self, int spread) {
	self->setSpread(static_cast<QGradient::Spread>(spread));
}

int QGradient_Spread(const QGradient* self) {
	return self->spread();
}

void QGradient_SetColorAt(QGradient* self, double pos, const QColor* color) {
	self->setColorAt(pos, *color);
}

void QGradient_SetStops(QGradient* self, const libqt_list stops) {
	self->setStops(QList<QPair<double, QColor>>());
}

libqt_list QGradient_Stops(const QGradient* self) {
	auto _ret = self->stops();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

int QGradient_CoordinateMode(const QGradient* self) {
	return self->coordinateMode();
}

void QGradient_SetCoordinateMode(QGradient* self, int mode) {
	self->setCoordinateMode(static_cast<QGradient::CoordinateMode>(mode));
}

int QGradient_InterpolationMode(const QGradient* self) {
	return self->interpolationMode();
}

void QGradient_SetInterpolationMode(QGradient* self, int mode) {
	self->setInterpolationMode(static_cast<QGradient::InterpolationMode>(mode));
}

bool QGradient_OperatorEqual(const QGradient* self, const QGradient* gradient) {
	return self->operator==(*gradient);
}

bool QGradient_OperatorNotEqual(const QGradient* self, const QGradient* other) {
	return self->operator!=(*other);
}

void QGradient_Delete(QGradient* self) {
    delete self;
}

QLinearGradient* QLinearGradient_new() {
	 return new QLinearGradient();
}

QLinearGradient* QLinearGradient_new2(const QPointF* start, const QPointF* finalStop) {
	 return new QLinearGradient(*start, *finalStop);
}

QLinearGradient* QLinearGradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop) {
	 return new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
}

QLinearGradient* QLinearGradient_new4(const QLinearGradient* param1) {
	 return new QLinearGradient(*param1);
}

QPointF* QLinearGradient_Start(const QLinearGradient* self) {
	return new QPointF(self->start());
}

void QLinearGradient_SetStart(QLinearGradient* self, const QPointF* start) {
	self->setStart(*start);
}

void QLinearGradient_SetStart2(QLinearGradient* self, double x, double y) {
	self->setStart(x, y);
}

QPointF* QLinearGradient_FinalStop(const QLinearGradient* self) {
	return new QPointF(self->finalStop());
}

void QLinearGradient_SetFinalStop(QLinearGradient* self, const QPointF* stop) {
	self->setFinalStop(*stop);
}

void QLinearGradient_SetFinalStop2(QLinearGradient* self, double x, double y) {
	self->setFinalStop(x, y);
}

void QLinearGradient_OperatorAssign(QLinearGradient* self, const QLinearGradient* param1) {
	self->operator=(*param1);
}

void QLinearGradient_Delete(QLinearGradient* self) {
    delete self;
}

QRadialGradient* QRadialGradient_new() {
	 return new QRadialGradient();
}

QRadialGradient* QRadialGradient_new2(const QPointF* center, double radius, const QPointF* focalPoint) {
	 return new QRadialGradient(*center, radius, *focalPoint);
}

QRadialGradient* QRadialGradient_new3(double cx, double cy, double radius, double fx, double fy) {
	 return new QRadialGradient(cx, cy, radius, fx, fy);
}

QRadialGradient* QRadialGradient_new4(const QPointF* center, double radius) {
	 return new QRadialGradient(*center, radius);
}

QRadialGradient* QRadialGradient_new5(double cx, double cy, double radius) {
	 return new QRadialGradient(cx, cy, radius);
}

QRadialGradient* QRadialGradient_new6(const QPointF* center, double centerRadius, const QPointF* focalPoint, double focalRadius) {
	 return new QRadialGradient(*center, centerRadius, *focalPoint, focalRadius);
}

QRadialGradient* QRadialGradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius) {
	 return new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius);
}

QRadialGradient* QRadialGradient_new8(const QRadialGradient* param1) {
	 return new QRadialGradient(*param1);
}

QPointF* QRadialGradient_Center(const QRadialGradient* self) {
	return new QPointF(self->center());
}

void QRadialGradient_SetCenter(QRadialGradient* self, const QPointF* center) {
	self->setCenter(*center);
}

void QRadialGradient_SetCenter2(QRadialGradient* self, double x, double y) {
	self->setCenter(x, y);
}

QPointF* QRadialGradient_FocalPoint(const QRadialGradient* self) {
	return new QPointF(self->focalPoint());
}

void QRadialGradient_SetFocalPoint(QRadialGradient* self, const QPointF* focalPoint) {
	self->setFocalPoint(*focalPoint);
}

void QRadialGradient_SetFocalPoint2(QRadialGradient* self, double x, double y) {
	self->setFocalPoint(x, y);
}

double QRadialGradient_Radius(const QRadialGradient* self) {
	return self->radius();
}

void QRadialGradient_SetRadius(QRadialGradient* self, double radius) {
	self->setRadius(radius);
}

double QRadialGradient_CenterRadius(const QRadialGradient* self) {
	return self->centerRadius();
}

void QRadialGradient_SetCenterRadius(QRadialGradient* self, double radius) {
	self->setCenterRadius(radius);
}

double QRadialGradient_FocalRadius(const QRadialGradient* self) {
	return self->focalRadius();
}

void QRadialGradient_SetFocalRadius(QRadialGradient* self, double radius) {
	self->setFocalRadius(radius);
}

void QRadialGradient_OperatorAssign(QRadialGradient* self, const QRadialGradient* param1) {
	self->operator=(*param1);
}

void QRadialGradient_Delete(QRadialGradient* self) {
    delete self;
}

QConicalGradient* QConicalGradient_new() {
	 return new QConicalGradient();
}

QConicalGradient* QConicalGradient_new2(const QPointF* center, double startAngle) {
	 return new QConicalGradient(*center, startAngle);
}

QConicalGradient* QConicalGradient_new3(double cx, double cy, double startAngle) {
	 return new QConicalGradient(cx, cy, startAngle);
}

QConicalGradient* QConicalGradient_new4(const QConicalGradient* param1) {
	 return new QConicalGradient(*param1);
}

QPointF* QConicalGradient_Center(const QConicalGradient* self) {
	return new QPointF(self->center());
}

void QConicalGradient_SetCenter(QConicalGradient* self, const QPointF* center) {
	self->setCenter(*center);
}

void QConicalGradient_SetCenter2(QConicalGradient* self, double x, double y) {
	self->setCenter(x, y);
}

double QConicalGradient_Angle(const QConicalGradient* self) {
	return self->angle();
}

void QConicalGradient_SetAngle(QConicalGradient* self, double angle) {
	self->setAngle(angle);
}

void QConicalGradient_OperatorAssign(QConicalGradient* self, const QConicalGradient* param1) {
	self->operator=(*param1);
}

void QConicalGradient_Delete(QConicalGradient* self) {
    delete self;
}

QGradient__QGradientData* QGradient__QGradientData_new(const QGradient__QGradientData* param1) {
	 return new QGradient::QGradientData(*param1);
}

void QGradient__QGradientData_OperatorAssign(QGradient__QGradientData* self, const QGradient__QGradientData* param1) {
	self->operator=(*param1);
}

void QGradient__QGradientData_Delete(QGradient__QGradientData* self) {
    delete self;
}

