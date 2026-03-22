#include <QLine>
#include <QLineF>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QTransform>
#include <QVariant>
#include <qtransform.h>
#include "libqtransform.h"
#include "libqtransform.hxx"

QTransform* QTransform_new(const QTransform* other) {
	 return new QTransform(*other);
}

QTransform* QTransform_new2(QTransform* other) {
	 return new QTransform(*other);
}

QTransform* QTransform_new3(int param1) {
	 return new QTransform(static_cast<Qt::Initialization>(param1));
}

QTransform* QTransform_new4() {
	 return new QTransform();
}

QTransform* QTransform_new5(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33) {
	 return new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33);
}

QTransform* QTransform_new6(double h11, double h12, double h21, double h22, double dx, double dy) {
	 return new QTransform(h11, h12, h21, h22, dx, dy);
}

QTransform* QTransform_new7(const QTransform* other) {
	 return new QTransform(*other);
}

void QTransform_CopyAssign(QTransform* self, QTransform* other) {
    *self = *other;
}

void QTransform_MoveAssign(QTransform* self, QTransform* other) {
    *self = std::move(*other);
}

void QTransform_OperatorAssign(QTransform* self, const QTransform* param1) {
	self->operator=(*param1);
}

bool QTransform_IsAffine(const QTransform* self) {
	return self->isAffine();
}

bool QTransform_IsIdentity(const QTransform* self) {
	return self->isIdentity();
}

bool QTransform_IsInvertible(const QTransform* self) {
	return self->isInvertible();
}

bool QTransform_IsScaling(const QTransform* self) {
	return self->isScaling();
}

bool QTransform_IsRotating(const QTransform* self) {
	return self->isRotating();
}

bool QTransform_IsTranslating(const QTransform* self) {
	return self->isTranslating();
}

int QTransform_Type(const QTransform* self) {
	return self->type();
}

double QTransform_Determinant(const QTransform* self) {
	return self->determinant();
}

double QTransform_M11(const QTransform* self) {
	return self->m11();
}

double QTransform_M12(const QTransform* self) {
	return self->m12();
}

double QTransform_M13(const QTransform* self) {
	return self->m13();
}

double QTransform_M21(const QTransform* self) {
	return self->m21();
}

double QTransform_M22(const QTransform* self) {
	return self->m22();
}

double QTransform_M23(const QTransform* self) {
	return self->m23();
}

double QTransform_M31(const QTransform* self) {
	return self->m31();
}

double QTransform_M32(const QTransform* self) {
	return self->m32();
}

double QTransform_M33(const QTransform* self) {
	return self->m33();
}

double QTransform_Dx(const QTransform* self) {
	return self->dx();
}

double QTransform_Dy(const QTransform* self) {
	return self->dy();
}

void QTransform_SetMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
	self->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33);
}

QTransform* QTransform_Inverted(const QTransform* self) {
	return new QTransform(self->inverted());
}

QTransform* QTransform_Adjoint(const QTransform* self) {
	return new QTransform(self->adjoint());
}

QTransform* QTransform_Transposed(const QTransform* self) {
	return new QTransform(self->transposed());
}

QTransform* QTransform_Translate(QTransform* self, double dx, double dy) {
	return new QTransform(self->translate(dx, dy));
}

QTransform* QTransform_Scale(QTransform* self, double sx, double sy) {
	return new QTransform(self->scale(sx, sy));
}

QTransform* QTransform_Shear(QTransform* self, double sh, double sv) {
	return new QTransform(self->shear(sh, sv));
}

QTransform* QTransform_Rotate(QTransform* self, double a, int axis, double distanceToPlane) {
	return new QTransform(self->rotate(a, static_cast<Qt::Axis>(axis), distanceToPlane));
}

QTransform* QTransform_Rotate2(QTransform* self, double a) {
	return new QTransform(self->rotate(a));
}

QTransform* QTransform_RotateRadians(QTransform* self, double a, int axis, double distanceToPlane) {
	return new QTransform(self->rotateRadians(a, static_cast<Qt::Axis>(axis), distanceToPlane));
}

QTransform* QTransform_RotateRadians2(QTransform* self, double a) {
	return new QTransform(self->rotateRadians(a));
}

bool QTransform_OperatorEqual(const QTransform* self, const QTransform* param1) {
	return self->operator==(*param1);
}

bool QTransform_OperatorNotEqual(const QTransform* self, const QTransform* param1) {
	return self->operator!=(*param1);
}

QTransform* QTransform_OperatorMultiplyAssign(QTransform* self, const QTransform* param1) {
	return new QTransform(self->operator*=(*param1));
}

QTransform* QTransform_OperatorMultiply(const QTransform* self, const QTransform* o) {
	return new QTransform(self->operator*(*o));
}

QVariant* QTransform_OperatorQVariant(const QTransform* self) {
	return new QVariant(self->operator QVariant());
}

void QTransform_Reset(QTransform* self) {
	self->reset();
}

QPoint* QTransform_Map(const QTransform* self, const QPoint* p) {
	return new QPoint(self->map(*p));
}

QPointF* QTransform_Map2(const QTransform* self, const QPointF* p) {
	return new QPointF(self->map(*p));
}

QLine* QTransform_Map3(const QTransform* self, const QLine* l) {
	return new QLine(self->map(*l));
}

QLineF* QTransform_Map4(const QTransform* self, const QLineF* l) {
	return new QLineF(self->map(*l));
}

QRegion* QTransform_Map7(const QTransform* self, const QRegion* r) {
	return new QRegion(self->map(*r));
}

QPainterPath* QTransform_Map8(const QTransform* self, const QPainterPath* p) {
	return new QPainterPath(self->map(*p));
}

QRect* QTransform_MapRect(const QTransform* self, const QRect* param1) {
	return new QRect(self->mapRect(*param1));
}

QRectF* QTransform_MapRect2(const QTransform* self, const QRectF* param1) {
	return new QRectF(self->mapRect(*param1));
}

void QTransform_Map9(const QTransform* self, int x, int y, int* tx, int* ty) {
	self->map(x, y, tx, ty);
}

void QTransform_Map10(const QTransform* self, double x, double y, double* tx, double* ty) {
	self->map(x, y, tx, ty);
}

QTransform* QTransform_OperatorMultiplyAssign2(QTransform* self, double div) {
	return new QTransform(self->operator*=(div));
}

QTransform* QTransform_OperatorDivideAssign(QTransform* self, double div) {
	return new QTransform(self->operator/=(div));
}

QTransform* QTransform_OperatorPlusAssign(QTransform* self, double div) {
	return new QTransform(self->operator+=(div));
}

QTransform* QTransform_OperatorMinusAssign(QTransform* self, double div) {
	return new QTransform(self->operator-=(div));
}

QTransform* QTransform_FromTranslate(double dx, double dy) {
	return new QTransform(QTransform::fromTranslate(dx, dy));
}

QTransform* QTransform_FromScale(double dx, double dy) {
	return new QTransform(QTransform::fromScale(dx, dy));
}

Affine QTransform_AsAffineMatrix(QTransform* self) {
	return self->asAffineMatrix();
}

QTransform* QTransform_Inverted1(const QTransform* self, bool* invertible) {
	return new QTransform(self->inverted(invertible));
}

QTransform* QTransform_Rotate22(QTransform* self, double a, int axis) {
	return new QTransform(self->rotate(a, static_cast<Qt::Axis>(axis)));
}

QTransform* QTransform_RotateRadians22(QTransform* self, double a, int axis) {
	return new QTransform(self->rotateRadians(a, static_cast<Qt::Axis>(axis)));
}

void QTransform_Delete(QTransform* self) {
    delete self;
}

