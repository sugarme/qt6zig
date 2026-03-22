#include <QBitmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QVariant>
#include <qregion.h>
#include "libqregion.h"
#include "libqregion.hxx"

QRegion* QRegion_new() {
	 return new QRegion();
}

QRegion* QRegion_new2(int x, int y, int w, int h) {
	 return new QRegion(x, y, w, h);
}

QRegion* QRegion_new3(const QRect* r) {
	 return new QRegion(*r);
}

QRegion* QRegion_new4(const QRegion* region) {
	 return new QRegion(*region);
}

QRegion* QRegion_new5(const QBitmap* bitmap) {
	 return new QRegion(*bitmap);
}

QRegion* QRegion_new6(int x, int y, int w, int h, int t) {
	 return new QRegion(x, y, w, h, static_cast<QRegion::RegionType>(t));
}

QRegion* QRegion_new7(const QRect* r, int t) {
	 return new QRegion(*r, static_cast<QRegion::RegionType>(t));
}

void QRegion_OperatorAssign(QRegion* self, const QRegion* param1) {
	self->operator=(*param1);
}

void QRegion_Swap(QRegion* self, QRegion* other) {
	self->swap(*other);
}

bool QRegion_IsEmpty(const QRegion* self) {
	return self->isEmpty();
}

bool QRegion_IsNull(const QRegion* self) {
	return self->isNull();
}

const QRect** QRegion_Begin(const QRegion* self) {
	return self->begin();
}

const QRect** QRegion_Cbegin(const QRegion* self) {
	return self->cbegin();
}

const QRect** QRegion_End(const QRegion* self) {
	return self->end();
}

const QRect** QRegion_Cend(const QRegion* self) {
	return self->cend();
}

bool QRegion_Contains(const QRegion* self, const QPoint* p) {
	return self->contains(*p);
}

bool QRegion_Contains2(const QRegion* self, const QRect* r) {
	return self->contains(*r);
}

void QRegion_Translate(QRegion* self, int dx, int dy) {
	self->translate(dx, dy);
}

void QRegion_Translate2(QRegion* self, const QPoint* p) {
	self->translate(*p);
}

QRegion* QRegion_Translated(const QRegion* self, int dx, int dy) {
	return new QRegion(self->translated(dx, dy));
}

QRegion* QRegion_Translated2(const QRegion* self, const QPoint* p) {
	return new QRegion(self->translated(*p));
}

QRegion* QRegion_United(const QRegion* self, const QRegion* r) {
	return new QRegion(self->united(*r));
}

QRegion* QRegion_United2(const QRegion* self, const QRect* r) {
	return new QRegion(self->united(*r));
}

QRegion* QRegion_Intersected(const QRegion* self, const QRegion* r) {
	return new QRegion(self->intersected(*r));
}

QRegion* QRegion_Intersected2(const QRegion* self, const QRect* r) {
	return new QRegion(self->intersected(*r));
}

QRegion* QRegion_Subtracted(const QRegion* self, const QRegion* r) {
	return new QRegion(self->subtracted(*r));
}

QRegion* QRegion_Xored(const QRegion* self, const QRegion* r) {
	return new QRegion(self->xored(*r));
}

bool QRegion_Intersects(const QRegion* self, const QRegion* r) {
	return self->intersects(*r);
}

bool QRegion_Intersects2(const QRegion* self, const QRect* r) {
	return self->intersects(*r);
}

QRect* QRegion_BoundingRect(const QRegion* self) {
	return new QRect(self->boundingRect());
}

void QRegion_SetRects(QRegion* self, const QRect* rect, int num) {
	self->setRects(rect, num);
}

void QRegion_SetRects2(QRegion* self, libqt_list r) {
	self->setRects(QSpan<const QRect>());
}

libqt_list QRegion_Rects(const QRegion* self) {
	auto _ret = self->rects();
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

int QRegion_RectCount(const QRegion* self) {
	return self->rectCount();
}

QRegion* QRegion_OperatorBitwiseOr(const QRegion* self, const QRegion* r) {
	return new QRegion(self->operator|(*r));
}

QRegion* QRegion_OperatorPlus(const QRegion* self, const QRegion* r) {
	return new QRegion(self->operator+(*r));
}

QRegion* QRegion_OperatorPlus2(const QRegion* self, const QRect* r) {
	return new QRegion(self->operator+(*r));
}

QRegion* QRegion_OperatorBitwiseAnd(const QRegion* self, const QRegion* r) {
	return new QRegion(self->operator&(*r));
}

QRegion* QRegion_OperatorBitwiseAnd2(const QRegion* self, const QRect* r) {
	return new QRegion(self->operator&(*r));
}

QRegion* QRegion_OperatorMinus(const QRegion* self, const QRegion* r) {
	return new QRegion(self->operator-(*r));
}

QRegion* QRegion_OperatorBitwiseNot(const QRegion* self, const QRegion* r) {
	return new QRegion(self->operator^(*r));
}

void QRegion_OperatorBitwiseOrAssign(QRegion* self, const QRegion* r) {
	self->operator|=(*r);
}

QRegion* QRegion_OperatorPlusAssign(QRegion* self, const QRegion* r) {
	return new QRegion(self->operator+=(*r));
}

QRegion* QRegion_OperatorPlusAssign2(QRegion* self, const QRect* r) {
	return new QRegion(self->operator+=(*r));
}

void QRegion_OperatorBitwiseAndAssign(QRegion* self, const QRegion* r) {
	self->operator&=(*r);
}

void QRegion_OperatorBitwiseAndAssign2(QRegion* self, const QRect* r) {
	self->operator&=(*r);
}

QRegion* QRegion_OperatorMinusAssign(QRegion* self, const QRegion* r) {
	return new QRegion(self->operator-=(*r));
}

void QRegion_OperatorBitwiseXorAssign(QRegion* self, const QRegion* r) {
	self->operator^=(*r);
}

bool QRegion_OperatorEqual(const QRegion* self, const QRegion* r) {
	return self->operator==(*r);
}

bool QRegion_OperatorNotEqual(const QRegion* self, const QRegion* r) {
	return self->operator!=(*r);
}

QVariant* QRegion_OperatorQVariant(const QRegion* self) {
	return new QVariant(self->operator QVariant());
}

struct HRGN__* QRegion_ToHRGN(const QRegion* self) {
	return self->toHRGN();
}

QRegion* QRegion_FromHRGN(struct HRGN__* hrgn) {
	return new QRegion(QRegion::fromHRGN(hrgn));
}

void QRegion_Delete(QRegion* self) {
    delete self;
}

