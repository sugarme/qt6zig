#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QVariant>
#include <qpolygon.h>
#include "libqpolygon.h"
#include "libqpolygon.hxx"

QPolygon* QPolygon_new() {
	 return new QPolygon();
}

QPolygon* QPolygon_new2(const libqt_list v) {
	 return new QPolygon(QList<QPoint>());
}

QPolygon* QPolygon_new3(const QRect* r) {
	 return new QPolygon(*r);
}

QPolygon* QPolygon_new4(int nPoints, const int* points) {
	 return new QPolygon(nPoints, points);
}

QPolygon* QPolygon_new5(const QRect* r, bool closed) {
	 return new QPolygon(*r, closed);
}

QVariant* QPolygon_OperatorQVariant(const QPolygon* self) {
	return new QVariant(self->operator QVariant());
}

void QPolygon_Translate(QPolygon* self, int dx, int dy) {
	self->translate(dx, dy);
}

void QPolygon_Translate2(QPolygon* self, const QPoint* offset) {
	self->translate(*offset);
}

QRect* QPolygon_BoundingRect(const QPolygon* self) {
	return new QRect(self->boundingRect());
}

void QPolygon_Point(const QPolygon* self, int i, int* x, int* y) {
	self->point(i, x, y);
}

QPoint* QPolygon_Point2(const QPolygon* self, int i) {
	return new QPoint(self->point(i));
}

void QPolygon_SetPoint(QPolygon* self, int index, int x, int y) {
	self->setPoint(index, x, y);
}

void QPolygon_SetPoint2(QPolygon* self, int index, const QPoint* p) {
	self->setPoint(index, *p);
}

void QPolygon_SetPoints(QPolygon* self, int nPoints, const int* points) {
	self->setPoints(nPoints, points);
}

void QPolygon_SetPoints2(QPolygon* self, int nPoints, int firstx, int firsty, ... ) {
	self->setPoints(nPoints, firstx, firsty, );
}

void QPolygon_PutPoints(QPolygon* self, int index, int nPoints, const int* points) {
	self->putPoints(index, nPoints, points);
}

void QPolygon_PutPoints2(QPolygon* self, int index, int nPoints, int firstx, int firsty, ... ) {
	self->putPoints(index, nPoints, firstx, firsty, );
}

bool QPolygon_ContainsPoint(const QPolygon* self, const QPoint* pt, int fillRule) {
	return self->containsPoint(*pt, static_cast<Qt::FillRule>(fillRule));
}

void QPolygon_Delete(QPolygon* self) {
    delete self;
}

QPolygonF* QPolygonF_new() {
	 return new QPolygonF();
}

QPolygonF* QPolygonF_new2(const libqt_list v) {
	 return new QPolygonF(QList<QPointF>());
}

QPolygonF* QPolygonF_new3(const QRectF* r) {
	 return new QPolygonF(*r);
}

QVariant* QPolygonF_OperatorQVariant(const QPolygonF* self) {
	return new QVariant(self->operator QVariant());
}

void QPolygonF_Translate(QPolygonF* self, double dx, double dy) {
	self->translate(dx, dy);
}

void QPolygonF_Translate2(QPolygonF* self, const QPointF* offset) {
	self->translate(*offset);
}

bool QPolygonF_IsClosed(const QPolygonF* self) {
	return self->isClosed();
}

QRectF* QPolygonF_BoundingRect(const QPolygonF* self) {
	return new QRectF(self->boundingRect());
}

bool QPolygonF_ContainsPoint(const QPolygonF* self, const QPointF* pt, int fillRule) {
	return self->containsPoint(*pt, static_cast<Qt::FillRule>(fillRule));
}

void QPolygonF_Delete(QPolygonF* self) {
    delete self;
}

