#include <QMargins>
#include <QMarginsF>
#include <QSize>
#include <QSizeF>
#include <qsize.h>
#include "libqsize.h"
#include "libqsize.hxx"

QSize* QSize_new(const QSize* other) {
	 return new QSize(*other);
}

QSize* QSize_new2(QSize* other) {
	 return new QSize(*other);
}

QSize* QSize_new3() {
	 return new QSize();
}

QSize* QSize_new4(int w, int h) {
	 return new QSize(w, h);
}

QSize* QSize_new5(const QSize* param1) {
	 return new QSize(*param1);
}

void QSize_CopyAssign(QSize* self, QSize* other) {
    *self = *other;
}

void QSize_MoveAssign(QSize* self, QSize* other) {
    *self = std::move(*other);
}

bool QSize_IsNull(const QSize* self) {
	return self->isNull();
}

bool QSize_IsEmpty(const QSize* self) {
	return self->isEmpty();
}

bool QSize_IsValid(const QSize* self) {
	return self->isValid();
}

int QSize_Width(const QSize* self) {
	return self->width();
}

int QSize_Height(const QSize* self) {
	return self->height();
}

void QSize_SetWidth(QSize* self, int w) {
	self->setWidth(w);
}

void QSize_SetHeight(QSize* self, int h) {
	self->setHeight(h);
}

void QSize_Transpose(QSize* self) {
	self->transpose();
}

QSize* QSize_Transposed(const QSize* self) {
	return new QSize(self->transposed());
}

void QSize_Scale(QSize* self, int w, int h, int mode) {
	self->scale(w, h, static_cast<Qt::AspectRatioMode>(mode));
}

void QSize_Scale2(QSize* self, const QSize* s, int mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSize* QSize_Scaled(const QSize* self, int w, int h, int mode) {
	return new QSize(self->scaled(w, h, static_cast<Qt::AspectRatioMode>(mode)));
}

QSize* QSize_Scaled2(const QSize* self, const QSize* s, int mode) {
	return new QSize(self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode)));
}

QSize* QSize_ExpandedTo(const QSize* self, const QSize* param1) {
	return new QSize(self->expandedTo(*param1));
}

QSize* QSize_BoundedTo(const QSize* self, const QSize* param1) {
	return new QSize(self->boundedTo(*param1));
}

QSize* QSize_GrownBy(const QSize* self, QMargins* m) {
	return new QSize(self->grownBy(*m));
}

QSize* QSize_ShrunkBy(const QSize* self, QMargins* m) {
	return new QSize(self->shrunkBy(*m));
}

int* QSize_Rwidth(QSize* self) {
	return self->rwidth();
}

int* QSize_Rheight(QSize* self) {
	return self->rheight();
}

QSize* QSize_OperatorPlusAssign(QSize* self, const QSize* param1) {
	return new QSize(self->operator+=(*param1));
}

QSize* QSize_OperatorMinusAssign(QSize* self, const QSize* param1) {
	return new QSize(self->operator-=(*param1));
}

QSize* QSize_OperatorMultiplyAssign(QSize* self, double c) {
	return new QSize(self->operator*=(c));
}

QSize* QSize_OperatorDivideAssign(QSize* self, double c) {
	return new QSize(self->operator/=(c));
}

QSizeF* QSize_ToSizeF(const QSize* self) {
	return new QSizeF(self->toSizeF());
}

void QSize_Delete(QSize* self) {
    delete self;
}

QSizeF* QSizeF_new(const QSizeF* other) {
	 return new QSizeF(*other);
}

QSizeF* QSizeF_new2(QSizeF* other) {
	 return new QSizeF(*other);
}

QSizeF* QSizeF_new3() {
	 return new QSizeF();
}

QSizeF* QSizeF_new4(const QSize* sz) {
	 return new QSizeF(*sz);
}

QSizeF* QSizeF_new5(double w, double h) {
	 return new QSizeF(w, h);
}

QSizeF* QSizeF_new6(const QSizeF* param1) {
	 return new QSizeF(*param1);
}

void QSizeF_CopyAssign(QSizeF* self, QSizeF* other) {
    *self = *other;
}

void QSizeF_MoveAssign(QSizeF* self, QSizeF* other) {
    *self = std::move(*other);
}

bool QSizeF_IsNull(const QSizeF* self) {
	return self->isNull();
}

bool QSizeF_IsEmpty(const QSizeF* self) {
	return self->isEmpty();
}

bool QSizeF_IsValid(const QSizeF* self) {
	return self->isValid();
}

double QSizeF_Width(const QSizeF* self) {
	return self->width();
}

double QSizeF_Height(const QSizeF* self) {
	return self->height();
}

void QSizeF_SetWidth(QSizeF* self, double w) {
	self->setWidth(w);
}

void QSizeF_SetHeight(QSizeF* self, double h) {
	self->setHeight(h);
}

void QSizeF_Transpose(QSizeF* self) {
	self->transpose();
}

QSizeF* QSizeF_Transposed(const QSizeF* self) {
	return new QSizeF(self->transposed());
}

void QSizeF_Scale(QSizeF* self, double w, double h, int mode) {
	self->scale(w, h, static_cast<Qt::AspectRatioMode>(mode));
}

void QSizeF_Scale2(QSizeF* self, const QSizeF* s, int mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSizeF* QSizeF_Scaled(const QSizeF* self, double w, double h, int mode) {
	return new QSizeF(self->scaled(w, h, static_cast<Qt::AspectRatioMode>(mode)));
}

QSizeF* QSizeF_Scaled2(const QSizeF* self, const QSizeF* s, int mode) {
	return new QSizeF(self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode)));
}

QSizeF* QSizeF_ExpandedTo(const QSizeF* self, const QSizeF* param1) {
	return new QSizeF(self->expandedTo(*param1));
}

QSizeF* QSizeF_BoundedTo(const QSizeF* self, const QSizeF* param1) {
	return new QSizeF(self->boundedTo(*param1));
}

QSizeF* QSizeF_GrownBy(const QSizeF* self, QMarginsF* m) {
	return new QSizeF(self->grownBy(*m));
}

QSizeF* QSizeF_ShrunkBy(const QSizeF* self, QMarginsF* m) {
	return new QSizeF(self->shrunkBy(*m));
}

double* QSizeF_Rwidth(QSizeF* self) {
	return self->rwidth();
}

double* QSizeF_Rheight(QSizeF* self) {
	return self->rheight();
}

QSizeF* QSizeF_OperatorPlusAssign(QSizeF* self, const QSizeF* param1) {
	return new QSizeF(self->operator+=(*param1));
}

QSizeF* QSizeF_OperatorMinusAssign(QSizeF* self, const QSizeF* param1) {
	return new QSizeF(self->operator-=(*param1));
}

QSizeF* QSizeF_OperatorMultiplyAssign(QSizeF* self, double c) {
	return new QSizeF(self->operator*=(c));
}

QSizeF* QSizeF_OperatorDivideAssign(QSizeF* self, double c) {
	return new QSizeF(self->operator/=(c));
}

QSize* QSizeF_ToSize(const QSizeF* self) {
	return new QSize(self->toSize());
}

void QSizeF_Delete(QSizeF* self) {
    delete self;
}

