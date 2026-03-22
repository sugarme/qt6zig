#include <QMatrix4x4>
#include <QPoint>
#include <QPointF>
#include <QQuaternion>
#include <QRect>
#include <QRectF>
#include <QTransform>
#include <QVariant>
#include <QVector3D>
#include <QVector4D>
#include <qmatrix4x4.h>
#include "libqmatrix4x4.h"
#include "libqmatrix4x4.hxx"

QMatrix4x4* QMatrix4x4_new(const QMatrix4x4* other) {
	 return new QMatrix4x4(*other);
}

QMatrix4x4* QMatrix4x4_new2(QMatrix4x4* other) {
	 return new QMatrix4x4(*other);
}

QMatrix4x4* QMatrix4x4_new3() {
	 return new QMatrix4x4();
}

QMatrix4x4* QMatrix4x4_new4(int param1) {
	 return new QMatrix4x4(static_cast<Qt::Initialization>(param1));
}

QMatrix4x4* QMatrix4x4_new5(const float* values) {
	 return new QMatrix4x4(values);
}

QMatrix4x4* QMatrix4x4_new6(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) {
	 return new QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}

QMatrix4x4* QMatrix4x4_new7(const float* values, int cols, int rows) {
	 return new QMatrix4x4(values, cols, rows);
}

QMatrix4x4* QMatrix4x4_new8(const QTransform* transform) {
	 return new QMatrix4x4(*transform);
}

QMatrix4x4* QMatrix4x4_new9(const QMatrix4x4* param1) {
	 return new QMatrix4x4(*param1);
}

void QMatrix4x4_CopyAssign(QMatrix4x4* self, QMatrix4x4* other) {
    *self = *other;
}

void QMatrix4x4_MoveAssign(QMatrix4x4* self, QMatrix4x4* other) {
    *self = std::move(*other);
}

const float* QMatrix4x4_OperatorCall(const QMatrix4x4* self, int row, int column) {
	return self->operator()(row, column);
}

float* QMatrix4x4_OperatorCall2(QMatrix4x4* self, int row, int column) {
	return self->operator()(row, column);
}

QVector4D* QMatrix4x4_Column(const QMatrix4x4* self, int index) {
	return new QVector4D(self->column(index));
}

void QMatrix4x4_SetColumn(QMatrix4x4* self, int index, const QVector4D* value) {
	self->setColumn(index, *value);
}

QVector4D* QMatrix4x4_Row(const QMatrix4x4* self, int index) {
	return new QVector4D(self->row(index));
}

void QMatrix4x4_SetRow(QMatrix4x4* self, int index, const QVector4D* value) {
	self->setRow(index, *value);
}

bool QMatrix4x4_IsAffine(const QMatrix4x4* self) {
	return self->isAffine();
}

bool QMatrix4x4_IsIdentity(const QMatrix4x4* self) {
	return self->isIdentity();
}

void QMatrix4x4_SetToIdentity(QMatrix4x4* self) {
	self->setToIdentity();
}

void QMatrix4x4_Fill(QMatrix4x4* self, float value) {
	self->fill(value);
}

double QMatrix4x4_Determinant(const QMatrix4x4* self) {
	return self->determinant();
}

QMatrix4x4* QMatrix4x4_Inverted(const QMatrix4x4* self) {
	return new QMatrix4x4(self->inverted());
}

QMatrix4x4* QMatrix4x4_Transposed(const QMatrix4x4* self) {
	return new QMatrix4x4(self->transposed());
}

QGenericMatrix<3, 3, float> QMatrix4x4_NormalMatrix(const QMatrix4x4* self) {
	return self->normalMatrix();
}

QMatrix4x4* QMatrix4x4_OperatorPlusAssign(QMatrix4x4* self, const QMatrix4x4* other) {
	return new QMatrix4x4(self->operator+=(*other));
}

QMatrix4x4* QMatrix4x4_OperatorMinusAssign(QMatrix4x4* self, const QMatrix4x4* other) {
	return new QMatrix4x4(self->operator-=(*other));
}

QMatrix4x4* QMatrix4x4_OperatorMultiplyAssign(QMatrix4x4* self, const QMatrix4x4* other) {
	return new QMatrix4x4(self->operator*=(*other));
}

QMatrix4x4* QMatrix4x4_OperatorMultiplyAssign2(QMatrix4x4* self, float factor) {
	return new QMatrix4x4(self->operator*=(factor));
}

QMatrix4x4* QMatrix4x4_OperatorDivideAssign(QMatrix4x4* self, float divisor) {
	return new QMatrix4x4(self->operator/=(divisor));
}

bool QMatrix4x4_OperatorEqual(const QMatrix4x4* self, const QMatrix4x4* other) {
	return self->operator==(*other);
}

bool QMatrix4x4_OperatorNotEqual(const QMatrix4x4* self, const QMatrix4x4* other) {
	return self->operator!=(*other);
}

void QMatrix4x4_Scale(QMatrix4x4* self, const QVector3D* vector) {
	self->scale(*vector);
}

void QMatrix4x4_Translate(QMatrix4x4* self, const QVector3D* vector) {
	self->translate(*vector);
}

void QMatrix4x4_Rotate(QMatrix4x4* self, float angle, const QVector3D* vector) {
	self->rotate(angle, *vector);
}

void QMatrix4x4_Scale2(QMatrix4x4* self, float x, float y) {
	self->scale(x, y);
}

void QMatrix4x4_Scale3(QMatrix4x4* self, float x, float y, float z) {
	self->scale(x, y, z);
}

void QMatrix4x4_Scale4(QMatrix4x4* self, float factor) {
	self->scale(factor);
}

void QMatrix4x4_Translate2(QMatrix4x4* self, float x, float y) {
	self->translate(x, y);
}

void QMatrix4x4_Translate3(QMatrix4x4* self, float x, float y, float z) {
	self->translate(x, y, z);
}

void QMatrix4x4_Rotate2(QMatrix4x4* self, float angle, float x, float y) {
	self->rotate(angle, x, y);
}

void QMatrix4x4_Rotate3(QMatrix4x4* self, const QQuaternion* quaternion) {
	self->rotate(*quaternion);
}

void QMatrix4x4_Ortho(QMatrix4x4* self, const QRect* rect) {
	self->ortho(*rect);
}

void QMatrix4x4_Ortho2(QMatrix4x4* self, const QRectF* rect) {
	self->ortho(*rect);
}

void QMatrix4x4_Ortho3(QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	self->ortho(left, right, bottom, top, nearPlane, farPlane);
}

void QMatrix4x4_Frustum(QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	self->frustum(left, right, bottom, top, nearPlane, farPlane);
}

void QMatrix4x4_Perspective(QMatrix4x4* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
	self->perspective(verticalAngle, aspectRatio, nearPlane, farPlane);
}

void QMatrix4x4_LookAt(QMatrix4x4* self, const QVector3D* eye, const QVector3D* center, const QVector3D* up) {
	self->lookAt(*eye, *center, *up);
}

void QMatrix4x4_Viewport(QMatrix4x4* self, const QRectF* rect) {
	self->viewport(*rect);
}

void QMatrix4x4_Viewport2(QMatrix4x4* self, float left, float bottom, float width, float height) {
	self->viewport(left, bottom, width, height);
}

void QMatrix4x4_FlipCoordinates(QMatrix4x4* self) {
	self->flipCoordinates();
}

void QMatrix4x4_CopyDataTo(const QMatrix4x4* self, float* values) {
	self->copyDataTo(values);
}

QTransform* QMatrix4x4_ToTransform(const QMatrix4x4* self) {
	return new QTransform(self->toTransform());
}

QTransform* QMatrix4x4_ToTransform2(const QMatrix4x4* self, float distanceToPlane) {
	return new QTransform(self->toTransform(distanceToPlane));
}

QPoint* QMatrix4x4_Map(const QMatrix4x4* self, const QPoint* point) {
	return new QPoint(self->map(*point));
}

QPointF* QMatrix4x4_Map2(const QMatrix4x4* self, const QPointF* point) {
	return new QPointF(self->map(*point));
}

QVector3D* QMatrix4x4_Map3(const QMatrix4x4* self, const QVector3D* point) {
	return new QVector3D(self->map(*point));
}

QVector3D* QMatrix4x4_MapVector(const QMatrix4x4* self, const QVector3D* vector) {
	return new QVector3D(self->mapVector(*vector));
}

QVector4D* QMatrix4x4_Map4(const QMatrix4x4* self, const QVector4D* point) {
	return new QVector4D(self->map(*point));
}

QRect* QMatrix4x4_MapRect(const QMatrix4x4* self, const QRect* rect) {
	return new QRect(self->mapRect(*rect));
}

QRectF* QMatrix4x4_MapRect2(const QMatrix4x4* self, const QRectF* rect) {
	return new QRectF(self->mapRect(*rect));
}

float* QMatrix4x4_Data(QMatrix4x4* self) {
	return self->data();
}

const float* QMatrix4x4_Data2(const QMatrix4x4* self) {
	return self->data();
}

const float* QMatrix4x4_ConstData(const QMatrix4x4* self) {
	return self->constData();
}

void QMatrix4x4_Optimize(QMatrix4x4* self) {
	self->optimize();
}

QVariant* QMatrix4x4_OperatorQVariant(const QMatrix4x4* self) {
	return new QVariant(self->operator QVariant());
}

void QMatrix4x4_ProjectedRotate(QMatrix4x4* self, float angle, float x, float y, float z, float distanceToPlane) {
	self->projectedRotate(angle, x, y, z, distanceToPlane);
}

void QMatrix4x4_ProjectedRotate2(QMatrix4x4* self, float angle, float x, float y, float z) {
	self->projectedRotate(angle, x, y, z);
}

int QMatrix4x4_Flags(const QMatrix4x4* self) {
	return self->flags();
}

QMatrix4x4* QMatrix4x4_Inverted1(const QMatrix4x4* self, bool* invertible) {
	return new QMatrix4x4(self->inverted(invertible));
}

void QMatrix4x4_Rotate4(QMatrix4x4* self, float angle, float x, float y, float z) {
	self->rotate(angle, x, y, z);
}

void QMatrix4x4_Viewport5(QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane) {
	self->viewport(left, bottom, width, height, nearPlane);
}

void QMatrix4x4_Viewport6(QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
	self->viewport(left, bottom, width, height, nearPlane, farPlane);
}

void QMatrix4x4_Delete(QMatrix4x4* self) {
    delete self;
}

