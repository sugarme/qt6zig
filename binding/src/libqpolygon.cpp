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
	 return new QPolygon(*v);
}

QPolygon* QPolygon_new3(const QRect* r) {
	 return new QPolygon(*r);
}

QPolygon* QPolygon_new4(int nPoints, const int* points) {
	 return new QPolygon(nPoints, points);
}

QPolygon* QPolygon_new5(const QPolygon* param1) {
	 return new QPolygon(*param1);
}

QPolygon* QPolygon_new6(const QRect* r, bool closed) {
	 return new QPolygon(*r, closed);
}

void QPolygon_Swap(QPolygon* self, QPolygon* other) {
	self->swap(*other);
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

QPolygon* QPolygon_Translated(const QPolygon* self, int dx, int dy) {
	return new QPolygon(self->translated(dx, dy));
}

QPolygon* QPolygon_Translated2(const QPolygon* self, const QPoint* offset) {
	return new QPolygon(self->translated(*offset));
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

void QPolygon_PutPoints3(QPolygon* self, int index, int nPoints, const QPolygon* from) {
	self->putPoints(index, nPoints, *from);
}

bool QPolygon_ContainsPoint(const QPolygon* self, const QPoint* pt, int fillRule) {
	return self->containsPoint(*pt, static_cast<Qt::FillRule>(fillRule));
}

QPolygon* QPolygon_United(const QPolygon* self, const QPolygon* r) {
	return new QPolygon(self->united(*r));
}

QPolygon* QPolygon_Intersected(const QPolygon* self, const QPolygon* r) {
	return new QPolygon(self->intersected(*r));
}

QPolygon* QPolygon_Subtracted(const QPolygon* self, const QPolygon* r) {
	return new QPolygon(self->subtracted(*r));
}

bool QPolygon_Intersects(const QPolygon* self, const QPolygon* r) {
	return self->intersects(*r);
}

QPolygonF* QPolygon_ToPolygonF(const QPolygon* self) {
	return new QPolygonF(self->toPolygonF());
}

void QPolygon_PutPoints4(QPolygon* self, int index, int nPoints, const QPolygon* from, int fromIndex) {
	self->putPoints(index, nPoints, *from, fromIndex);
}

void QPolygon_Delete(QPolygon* self) {
    delete self;
}

QPolygonF* QPolygonF_new() {
	 return new QPolygonF();
}

QPolygonF* QPolygonF_new2(const libqt_list v) {
	 return new QPolygonF(*v);
}

QPolygonF* QPolygonF_new3(const QRectF* r) {
	 return new QPolygonF(*r);
}

QPolygonF* QPolygonF_new4(const QPolygon* a) {
	 return new QPolygonF(*a);
}

QPolygonF* QPolygonF_new5(const QPolygonF* param1) {
	 return new QPolygonF(*param1);
}

void QPolygonF_Swap(QPolygonF* self, QPolygonF* other) {
	self->swap(*other);
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

QPolygonF* QPolygonF_Translated(const QPolygonF* self, double dx, double dy) {
	return new QPolygonF(self->translated(dx, dy));
}

QPolygonF* QPolygonF_Translated2(const QPolygonF* self, const QPointF* offset) {
	return new QPolygonF(self->translated(*offset));
}

QPolygon* QPolygonF_ToPolygon(const QPolygonF* self) {
	return new QPolygon(self->toPolygon());
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

QPolygonF* QPolygonF_United(const QPolygonF* self, const QPolygonF* r) {
	return new QPolygonF(self->united(*r));
}

QPolygonF* QPolygonF_Intersected(const QPolygonF* self, const QPolygonF* r) {
	return new QPolygonF(self->intersected(*r));
}

QPolygonF* QPolygonF_Subtracted(const QPolygonF* self, const QPolygonF* r) {
	return new QPolygonF(self->subtracted(*r));
}

bool QPolygonF_Intersects(const QPolygonF* self, const QPolygonF* r) {
	return self->intersects(*r);
}

void QPolygonF_Delete(QPolygonF* self) {
    delete self;
}

