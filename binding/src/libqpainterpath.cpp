#include <QFont>
#include <QPainterPath>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPainterPath__Element
#include <QPainterPathStroker>
#include <QPen>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <qpainterpath.h>
#include "libqpainterpath.h"
#include "libqpainterpath.hxx"

QPainterPath* QPainterPath_new() {
	 return new QPainterPath();
}

QPainterPath* QPainterPath_new2(const QPointF* startPoint) {
	 return new QPainterPath(*startPoint);
}

QPainterPath* QPainterPath_new3(const QPainterPath* other) {
	 return new QPainterPath(*other);
}

void QPainterPath_OperatorAssign(QPainterPath* self, const QPainterPath* other) {
	self->operator=(*other);
}

void QPainterPath_Swap(QPainterPath* self, QPainterPath* other) {
	self->swap(*other);
}

void QPainterPath_Clear(QPainterPath* self) {
	self->clear();
}

void QPainterPath_Reserve(QPainterPath* self, int size) {
	self->reserve(size);
}

int QPainterPath_Capacity(const QPainterPath* self) {
	return self->capacity();
}

void QPainterPath_CloseSubpath(QPainterPath* self) {
	self->closeSubpath();
}

void QPainterPath_MoveTo(QPainterPath* self, const QPointF* p) {
	self->moveTo(*p);
}

void QPainterPath_MoveTo2(QPainterPath* self, double x, double y) {
	self->moveTo(x, y);
}

void QPainterPath_LineTo(QPainterPath* self, const QPointF* p) {
	self->lineTo(*p);
}

void QPainterPath_LineTo2(QPainterPath* self, double x, double y) {
	self->lineTo(x, y);
}

void QPainterPath_ArcMoveTo(QPainterPath* self, const QRectF* rect, double angle) {
	self->arcMoveTo(*rect, angle);
}

void QPainterPath_ArcMoveTo2(QPainterPath* self, double x, double y, double w, double h, double angle) {
	self->arcMoveTo(x, y, w, h, angle);
}

void QPainterPath_ArcTo(QPainterPath* self, const QRectF* rect, double startAngle, double arcLength) {
	self->arcTo(*rect, startAngle, arcLength);
}

void QPainterPath_ArcTo2(QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength) {
	self->arcTo(x, y, w, h, startAngle, arcLength);
}

void QPainterPath_CubicTo(QPainterPath* self, const QPointF* ctrlPt1, const QPointF* ctrlPt2, const QPointF* endPt) {
	self->cubicTo(*ctrlPt1, *ctrlPt2, *endPt);
}

void QPainterPath_CubicTo2(QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
	self->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}

void QPainterPath_QuadTo(QPainterPath* self, const QPointF* ctrlPt, const QPointF* endPt) {
	self->quadTo(*ctrlPt, *endPt);
}

void QPainterPath_QuadTo2(QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
	self->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
}

QPointF* QPainterPath_CurrentPosition(const QPainterPath* self) {
	return new QPointF(self->currentPosition());
}

void QPainterPath_AddRect(QPainterPath* self, const QRectF* rect) {
	self->addRect(*rect);
}

void QPainterPath_AddRect2(QPainterPath* self, double x, double y, double w, double h) {
	self->addRect(x, y, w, h);
}

void QPainterPath_AddEllipse(QPainterPath* self, const QRectF* rect) {
	self->addEllipse(*rect);
}

void QPainterPath_AddEllipse2(QPainterPath* self, double x, double y, double w, double h) {
	self->addEllipse(x, y, w, h);
}

void QPainterPath_AddEllipse3(QPainterPath* self, const QPointF* center, double rx, double ry) {
	self->addEllipse(*center, rx, ry);
}

void QPainterPath_AddPolygon(QPainterPath* self, const QPolygonF* polygon) {
	self->addPolygon(*polygon);
}

void QPainterPath_AddText(QPainterPath* self, const QPointF* point, const QFont* f, const libqt_string text) {
	self->addText(*point, *f, QString::fromUtf8(text.data, text.len));
}

void QPainterPath_AddText2(QPainterPath* self, double x, double y, const QFont* f, const libqt_string text) {
	self->addText(x, y, *f, QString::fromUtf8(text.data, text.len));
}

void QPainterPath_AddPath(QPainterPath* self, const QPainterPath* path) {
	self->addPath(*path);
}

void QPainterPath_AddRegion(QPainterPath* self, const QRegion* region) {
	self->addRegion(*region);
}

void QPainterPath_AddRoundedRect(QPainterPath* self, const QRectF* rect, double xRadius, double yRadius) {
	self->addRoundedRect(*rect, xRadius, yRadius);
}

void QPainterPath_AddRoundedRect2(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius) {
	self->addRoundedRect(x, y, w, h, xRadius, yRadius);
}

void QPainterPath_ConnectPath(QPainterPath* self, const QPainterPath* path) {
	self->connectPath(*path);
}

bool QPainterPath_Contains(const QPainterPath* self, const QPointF* pt) {
	return self->contains(*pt);
}

bool QPainterPath_Contains2(const QPainterPath* self, const QRectF* rect) {
	return self->contains(*rect);
}

bool QPainterPath_Intersects(const QPainterPath* self, const QRectF* rect) {
	return self->intersects(*rect);
}

void QPainterPath_Translate(QPainterPath* self, double dx, double dy) {
	self->translate(dx, dy);
}

void QPainterPath_Translate2(QPainterPath* self, const QPointF* offset) {
	self->translate(*offset);
}

QPainterPath* QPainterPath_Translated(const QPainterPath* self, double dx, double dy) {
	return new QPainterPath(self->translated(dx, dy));
}

QPainterPath* QPainterPath_Translated2(const QPainterPath* self, const QPointF* offset) {
	return new QPainterPath(self->translated(*offset));
}

QRectF* QPainterPath_BoundingRect(const QPainterPath* self) {
	return new QRectF(self->boundingRect());
}

QRectF* QPainterPath_ControlPointRect(const QPainterPath* self) {
	return new QRectF(self->controlPointRect());
}

int QPainterPath_FillRule(const QPainterPath* self) {
	return self->fillRule();
}

void QPainterPath_SetFillRule(QPainterPath* self, int fillRule) {
	self->setFillRule(static_cast<Qt::FillRule>(fillRule));
}

bool QPainterPath_IsEmpty(const QPainterPath* self) {
	return self->isEmpty();
}

QPainterPath* QPainterPath_ToReversed(const QPainterPath* self) {
	return new QPainterPath(self->toReversed());
}

libqt_list QPainterPath_ToSubpathPolygons(const QPainterPath* self) {
	return self->toSubpathPolygons();
}

libqt_list QPainterPath_ToFillPolygons(const QPainterPath* self) {
	return self->toFillPolygons();
}

QPolygonF* QPainterPath_ToFillPolygon(const QPainterPath* self) {
	return new QPolygonF(self->toFillPolygon());
}

int QPainterPath_ElementCount(const QPainterPath* self) {
	return self->elementCount();
}

QPainterPath__Element* QPainterPath_ElementAt(const QPainterPath* self, int i) {
	return new QPainterPath::Element(self->elementAt(i));
}

void QPainterPath_SetElementPositionAt(QPainterPath* self, int i, double x, double y) {
	self->setElementPositionAt(i, x, y);
}

double QPainterPath_Length(const QPainterPath* self) {
	return self->length();
}

double QPainterPath_PercentAtLength(const QPainterPath* self, double t) {
	return self->percentAtLength(t);
}

QPointF* QPainterPath_PointAtPercent(const QPainterPath* self, double t) {
	return new QPointF(self->pointAtPercent(t));
}

double QPainterPath_AngleAtPercent(const QPainterPath* self, double t) {
	return self->angleAtPercent(t);
}

double QPainterPath_SlopeAtPercent(const QPainterPath* self, double t) {
	return self->slopeAtPercent(t);
}

bool QPainterPath_Intersects2(const QPainterPath* self, const QPainterPath* p) {
	return self->intersects(*p);
}

bool QPainterPath_Contains3(const QPainterPath* self, const QPainterPath* p) {
	return self->contains(*p);
}

QPainterPath* QPainterPath_United(const QPainterPath* self, const QPainterPath* r) {
	return new QPainterPath(self->united(*r));
}

QPainterPath* QPainterPath_Intersected(const QPainterPath* self, const QPainterPath* r) {
	return new QPainterPath(self->intersected(*r));
}

QPainterPath* QPainterPath_Subtracted(const QPainterPath* self, const QPainterPath* r) {
	return new QPainterPath(self->subtracted(*r));
}

QPainterPath* QPainterPath_Simplified(const QPainterPath* self) {
	return new QPainterPath(self->simplified());
}

bool QPainterPath_OperatorEqual(const QPainterPath* self, const QPainterPath* other) {
	return self->operator==(*other);
}

bool QPainterPath_OperatorNotEqual(const QPainterPath* self, const QPainterPath* other) {
	return self->operator!=(*other);
}

QPainterPath* QPainterPath_OperatorBitwiseAnd(const QPainterPath* self, const QPainterPath* other) {
	return new QPainterPath(self->operator&(*other));
}

QPainterPath* QPainterPath_OperatorBitwiseOr(const QPainterPath* self, const QPainterPath* other) {
	return new QPainterPath(self->operator|(*other));
}

QPainterPath* QPainterPath_OperatorPlus(const QPainterPath* self, const QPainterPath* other) {
	return new QPainterPath(self->operator+(*other));
}

QPainterPath* QPainterPath_OperatorMinus(const QPainterPath* self, const QPainterPath* other) {
	return new QPainterPath(self->operator-(*other));
}

void QPainterPath_OperatorBitwiseAndAssign(QPainterPath* self, const QPainterPath* other) {
	self->operator&=(*other);
}

void QPainterPath_OperatorBitwiseOrAssign(QPainterPath* self, const QPainterPath* other) {
	self->operator|=(*other);
}

QPainterPath* QPainterPath_OperatorPlusAssign(QPainterPath* self, const QPainterPath* other) {
	return new QPainterPath(self->operator+=(*other));
}

QPainterPath* QPainterPath_OperatorMinusAssign(QPainterPath* self, const QPainterPath* other) {
	return new QPainterPath(self->operator-=(*other));
}

void QPainterPath_AddRoundedRect4(QPainterPath* self, const QRectF* rect, double xRadius, double yRadius, int mode) {
	self->addRoundedRect(*rect, xRadius, yRadius, static_cast<Qt::SizeMode>(mode));
}

void QPainterPath_AddRoundedRect7(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius, int mode) {
	self->addRoundedRect(x, y, w, h, xRadius, yRadius, static_cast<Qt::SizeMode>(mode));
}

libqt_list QPainterPath_ToSubpathPolygons1(const QPainterPath* self, const QTransform* matrix) {
	return self->toSubpathPolygons(*matrix);
}

libqt_list QPainterPath_ToFillPolygons1(const QPainterPath* self, const QTransform* matrix) {
	return self->toFillPolygons(*matrix);
}

QPolygonF* QPainterPath_ToFillPolygon1(const QPainterPath* self, const QTransform* matrix) {
	return new QPolygonF(self->toFillPolygon(*matrix));
}

void QPainterPath_Delete(QPainterPath* self) {
    delete self;
}

QPainterPathStroker* QPainterPathStroker_new() {
	 return new QPainterPathStroker();
}

QPainterPathStroker* QPainterPathStroker_new2(const QPen* pen) {
	 return new QPainterPathStroker(*pen);
}

void QPainterPathStroker_SetWidth(QPainterPathStroker* self, double width) {
	self->setWidth(width);
}

double QPainterPathStroker_Width(const QPainterPathStroker* self) {
	return self->width();
}

void QPainterPathStroker_SetCapStyle(QPainterPathStroker* self, int style) {
	self->setCapStyle(static_cast<Qt::PenCapStyle>(style));
}

int QPainterPathStroker_CapStyle(const QPainterPathStroker* self) {
	return self->capStyle();
}

void QPainterPathStroker_SetJoinStyle(QPainterPathStroker* self, int style) {
	self->setJoinStyle(static_cast<Qt::PenJoinStyle>(style));
}

int QPainterPathStroker_JoinStyle(const QPainterPathStroker* self) {
	return self->joinStyle();
}

void QPainterPathStroker_SetMiterLimit(QPainterPathStroker* self, double length) {
	self->setMiterLimit(length);
}

double QPainterPathStroker_MiterLimit(const QPainterPathStroker* self) {
	return self->miterLimit();
}

void QPainterPathStroker_SetCurveThreshold(QPainterPathStroker* self, double threshold) {
	self->setCurveThreshold(threshold);
}

double QPainterPathStroker_CurveThreshold(const QPainterPathStroker* self) {
	return self->curveThreshold();
}

void QPainterPathStroker_SetDashPattern(QPainterPathStroker* self, int dashPattern) {
	self->setDashPattern(static_cast<Qt::PenStyle>(dashPattern));
}

void QPainterPathStroker_SetDashPattern2(QPainterPathStroker* self, const libqt_list dashPattern) {
	self->setDashPattern(*dashPattern);
}

libqt_list QPainterPathStroker_DashPattern(const QPainterPathStroker* self) {
	return self->dashPattern();
}

void QPainterPathStroker_SetDashOffset(QPainterPathStroker* self, double offset) {
	self->setDashOffset(offset);
}

double QPainterPathStroker_DashOffset(const QPainterPathStroker* self) {
	return self->dashOffset();
}

QPainterPath* QPainterPathStroker_CreateStroke(const QPainterPathStroker* self, const QPainterPath* path) {
	return new QPainterPath(self->createStroke(*path));
}

void QPainterPathStroker_Delete(QPainterPathStroker* self) {
    delete self;
}

QPainterPath__Element* QPainterPath__Element_new() {
	 return new QPainterPath::Element();
}

QPainterPath__Element* QPainterPath__Element_new2(const QPainterPath__Element* param1) {
	 return new QPainterPath::Element(*param1);
}

double QPainterPath__Element_X(const QPainterPath__Element* self) {
	return self->x;
}

void QPainterPath__Element_SetX(QPainterPath__Element* self, double x) {
	self->x;
}

double QPainterPath__Element_Y(const QPainterPath__Element* self) {
	return self->y;
}

void QPainterPath__Element_SetY(QPainterPath__Element* self, double y) {
	self->y;
}

int QPainterPath__Element_Type(const QPainterPath__Element* self) {
	return self->type;
}

void QPainterPath__Element_SetType(QPainterPath__Element* self, int type) {
	self->type;
}

bool QPainterPath__Element_IsMoveTo(const QPainterPath__Element* self) {
	return self->isMoveTo();
}

bool QPainterPath__Element_IsLineTo(const QPainterPath__Element* self) {
	return self->isLineTo();
}

bool QPainterPath__Element_IsCurveTo(const QPainterPath__Element* self) {
	return self->isCurveTo();
}

QPointF* QPainterPath__Element_OperatorQPointF(const QPainterPath__Element* self) {
	return new QPointF(self->operator QPointF());
}

bool QPainterPath__Element_OperatorEqual(const QPainterPath__Element* self, const QPainterPath__Element* e) {
	return self->operator==(*e);
}

bool QPainterPath__Element_OperatorNotEqual(const QPainterPath__Element* self, const QPainterPath__Element* e) {
	return self->operator!=(*e);
}

void QPainterPath__Element_Delete(QPainterPath__Element* self) {
    delete self;
}

