#include <QPoint>
#include <QPointF>
#include <qpoint.h>
#include "libqpoint.h"
#include "libqpoint.hxx"

QPoint* QPoint_new(const QPoint* other) {
	 return new QPoint(*other);
}

QPoint* QPoint_new2(QPoint* other) {
	 return new QPoint(*other);
}

QPoint* QPoint_new3() {
	 return new QPoint();
}

QPoint* QPoint_new4(int xpos, int ypos) {
	 return new QPoint(xpos, ypos);
}

QPoint* QPoint_new5(const QPoint* param1) {
	 return new QPoint(*param1);
}

void QPoint_CopyAssign(QPoint* self, QPoint* other) {
    *self = *other;
}

void QPoint_MoveAssign(QPoint* self, QPoint* other) {
    *self = std::move(*other);
}

bool QPoint_IsNull(const QPoint* self) {
	return self->isNull();
}

int QPoint_X(const QPoint* self) {
	return self->x();
}

int QPoint_Y(const QPoint* self) {
	return self->y();
}

void QPoint_SetX(QPoint* self, int x) {
	self->setX(x);
}

void QPoint_SetY(QPoint* self, int y) {
	self->setY(y);
}

int QPoint_ManhattanLength(const QPoint* self) {
	return self->manhattanLength();
}

QPoint* QPoint_Transposed(const QPoint* self) {
	return new QPoint(self->transposed());
}

int* QPoint_Rx(QPoint* self) {
	return self->rx();
}

int* QPoint_Ry(QPoint* self) {
	return self->ry();
}

QPoint* QPoint_OperatorPlusAssign(QPoint* self, const QPoint* p) {
	return new QPoint(self->operator+=(*p));
}

QPoint* QPoint_OperatorMinusAssign(QPoint* self, const QPoint* p) {
	return new QPoint(self->operator-=(*p));
}

QPoint* QPoint_OperatorMultiplyAssign(QPoint* self, float factor) {
	return new QPoint(self->operator*=(factor));
}

QPoint* QPoint_OperatorMultiplyAssign2(QPoint* self, double factor) {
	return new QPoint(self->operator*=(factor));
}

QPoint* QPoint_OperatorMultiplyAssign3(QPoint* self, int factor) {
	return new QPoint(self->operator*=(factor));
}

QPoint* QPoint_OperatorDivideAssign(QPoint* self, double divisor) {
	return new QPoint(self->operator/=(divisor));
}

int QPoint_DotProduct(const QPoint* p1, const QPoint* p2) {
	return QPoint::dotProduct(*p1, *p2);
}

QPointF* QPoint_ToPointF(const QPoint* self) {
	return new QPointF(self->toPointF());
}

void QPoint_Delete(QPoint* self) {
    delete self;
}

QPointF* QPointF_new(const QPointF* other) {
	 return new QPointF(*other);
}

QPointF* QPointF_new2(QPointF* other) {
	 return new QPointF(*other);
}

QPointF* QPointF_new3() {
	 return new QPointF();
}

QPointF* QPointF_new4(const QPoint* p) {
	 return new QPointF(*p);
}

QPointF* QPointF_new5(double xpos, double ypos) {
	 return new QPointF(xpos, ypos);
}

QPointF* QPointF_new6(const QPointF* param1) {
	 return new QPointF(*param1);
}

void QPointF_CopyAssign(QPointF* self, QPointF* other) {
    *self = *other;
}

void QPointF_MoveAssign(QPointF* self, QPointF* other) {
    *self = std::move(*other);
}

double QPointF_ManhattanLength(const QPointF* self) {
	return self->manhattanLength();
}

bool QPointF_IsNull(const QPointF* self) {
	return self->isNull();
}

double QPointF_X(const QPointF* self) {
	return self->x();
}

double QPointF_Y(const QPointF* self) {
	return self->y();
}

void QPointF_SetX(QPointF* self, double x) {
	self->setX(x);
}

void QPointF_SetY(QPointF* self, double y) {
	self->setY(y);
}

QPointF* QPointF_Transposed(const QPointF* self) {
	return new QPointF(self->transposed());
}

double* QPointF_Rx(QPointF* self) {
	return self->rx();
}

double* QPointF_Ry(QPointF* self) {
	return self->ry();
}

QPointF* QPointF_OperatorPlusAssign(QPointF* self, const QPointF* p) {
	return new QPointF(self->operator+=(*p));
}

QPointF* QPointF_OperatorMinusAssign(QPointF* self, const QPointF* p) {
	return new QPointF(self->operator-=(*p));
}

QPointF* QPointF_OperatorMultiplyAssign(QPointF* self, double c) {
	return new QPointF(self->operator*=(c));
}

QPointF* QPointF_OperatorDivideAssign(QPointF* self, double c) {
	return new QPointF(self->operator/=(c));
}

double QPointF_DotProduct(const QPointF* p1, const QPointF* p2) {
	return QPointF::dotProduct(*p1, *p2);
}

QPoint* QPointF_ToPoint(const QPointF* self) {
	return new QPoint(self->toPoint());
}

void QPointF_Delete(QPointF* self) {
    delete self;
}

