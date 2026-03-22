#include <QBrush>
#include <QColor>
#include <QPen>
#include <QVariant>
#include <qpen.h>
#include "libqpen.h"
#include "libqpen.hxx"

QPen* QPen_new() {
	 return new QPen();
}

QPen* QPen_new2(int param1) {
	 return new QPen(static_cast<Qt::PenStyle>(param1));
}

QPen* QPen_new3(const QColor* color) {
	 return new QPen(*color);
}

QPen* QPen_new4(const QBrush* brush, double width) {
	 return new QPen(*brush, width);
}

QPen* QPen_new5(const QPen* pen) {
	 return new QPen(*pen);
}

QPen* QPen_new6(const QBrush* brush, double width, int s) {
	 return new QPen(*brush, width, static_cast<Qt::PenStyle>(s));
}

QPen* QPen_new7(const QBrush* brush, double width, int s, int c) {
	 return new QPen(*brush, width, static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c));
}

QPen* QPen_new8(const QBrush* brush, double width, int s, int c, int j) {
	 return new QPen(*brush, width, static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c), static_cast<Qt::PenJoinStyle>(j));
}

void QPen_OperatorAssign(QPen* self, const QPen* pen) {
	self->operator=(*pen);
}

void QPen_Swap(QPen* self, QPen* other) {
	self->swap(*other);
}

int QPen_Style(const QPen* self) {
	return self->style();
}

void QPen_SetStyle(QPen* self, int style) {
	self->setStyle(static_cast<Qt::PenStyle>(style));
}

libqt_list QPen_DashPattern(const QPen* self) {
	return self->dashPattern();
}

void QPen_SetDashPattern(QPen* self, const libqt_list pattern) {
	self->setDashPattern(*pattern);
}

double QPen_DashOffset(const QPen* self) {
	return self->dashOffset();
}

void QPen_SetDashOffset(QPen* self, double doffset) {
	self->setDashOffset(doffset);
}

double QPen_MiterLimit(const QPen* self) {
	return self->miterLimit();
}

void QPen_SetMiterLimit(QPen* self, double limit) {
	self->setMiterLimit(limit);
}

double QPen_WidthF(const QPen* self) {
	return self->widthF();
}

void QPen_SetWidthF(QPen* self, double width) {
	self->setWidthF(width);
}

int QPen_Width(const QPen* self) {
	return self->width();
}

void QPen_SetWidth(QPen* self, int width) {
	self->setWidth(width);
}

QColor* QPen_Color(const QPen* self) {
	return new QColor(self->color());
}

void QPen_SetColor(QPen* self, const QColor* color) {
	self->setColor(*color);
}

QBrush* QPen_Brush(const QPen* self) {
	return new QBrush(self->brush());
}

void QPen_SetBrush(QPen* self, const QBrush* brush) {
	self->setBrush(*brush);
}

bool QPen_IsSolid(const QPen* self) {
	return self->isSolid();
}

int QPen_CapStyle(const QPen* self) {
	return self->capStyle();
}

void QPen_SetCapStyle(QPen* self, int pcs) {
	self->setCapStyle(static_cast<Qt::PenCapStyle>(pcs));
}

int QPen_JoinStyle(const QPen* self) {
	return self->joinStyle();
}

void QPen_SetJoinStyle(QPen* self, int pcs) {
	self->setJoinStyle(static_cast<Qt::PenJoinStyle>(pcs));
}

bool QPen_IsCosmetic(const QPen* self) {
	return self->isCosmetic();
}

void QPen_SetCosmetic(QPen* self, bool cosmetic) {
	self->setCosmetic(cosmetic);
}

bool QPen_OperatorEqual(const QPen* self, const QPen* p) {
	return self->operator==(*p);
}

bool QPen_OperatorNotEqual(const QPen* self, const QPen* p) {
	return self->operator!=(*p);
}

QVariant* QPen_OperatorQVariant(const QPen* self) {
	return new QVariant(self->operator QVariant());
}

bool QPen_IsDetached(QPen* self) {
	return self->isDetached();
}

QExplicitlySharedDataPointer<QPenPrivate>* QPen_DataPtr(QPen* self) {
	return self->data_ptr();
}

void QPen_Delete(QPen* self) {
    delete self;
}

