#include <QGraphicsItem>
#include <QGraphicsItemAnimation>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimeLine>
#include <QTransform>
#include <qgraphicsitemanimation.h>
#include "libqgraphicsitemanimation.h"
#include "libqgraphicsitemanimation.hxx"

QGraphicsItemAnimation* QGraphicsItemAnimation_new() {
	 return new VirtualQGraphicsItemAnimation();
}

QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent) {
	 return new VirtualQGraphicsItemAnimation(parent);
}

libqt_string QGraphicsItemAnimation_Tr(const char* s) {
	QString _ret = QGraphicsItemAnimation::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QGraphicsItem* QGraphicsItemAnimation_Item(const QGraphicsItemAnimation* self) {
	return self->item();
}

void QGraphicsItemAnimation_SetItem(QGraphicsItemAnimation* self, QGraphicsItem* item) {
	self->setItem(item);
}

QTimeLine* QGraphicsItemAnimation_TimeLine(const QGraphicsItemAnimation* self) {
	return self->timeLine();
}

void QGraphicsItemAnimation_SetTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine) {
	self->setTimeLine(timeLine);
}

QPointF* QGraphicsItemAnimation_PosAt(const QGraphicsItemAnimation* self, double step) {
	return new QPointF(self->posAt(step));
}

libqt_list QGraphicsItemAnimation_PosList(const QGraphicsItemAnimation* self) {
	auto _ret = self->posList();
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

void QGraphicsItemAnimation_SetPosAt(QGraphicsItemAnimation* self, double step, const QPointF* pos) {
	self->setPosAt(step, *pos);
}

QTransform* QGraphicsItemAnimation_TransformAt(const QGraphicsItemAnimation* self, double step) {
	return new QTransform(self->transformAt(step));
}

double QGraphicsItemAnimation_RotationAt(const QGraphicsItemAnimation* self, double step) {
	return self->rotationAt(step);
}

libqt_list QGraphicsItemAnimation_RotationList(const QGraphicsItemAnimation* self) {
	auto _ret = self->rotationList();
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

void QGraphicsItemAnimation_SetRotationAt(QGraphicsItemAnimation* self, double step, double angle) {
	self->setRotationAt(step, angle);
}

double QGraphicsItemAnimation_XTranslationAt(const QGraphicsItemAnimation* self, double step) {
	return self->xTranslationAt(step);
}

double QGraphicsItemAnimation_YTranslationAt(const QGraphicsItemAnimation* self, double step) {
	return self->yTranslationAt(step);
}

libqt_list QGraphicsItemAnimation_TranslationList(const QGraphicsItemAnimation* self) {
	auto _ret = self->translationList();
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

void QGraphicsItemAnimation_SetTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy) {
	self->setTranslationAt(step, dx, dy);
}

double QGraphicsItemAnimation_VerticalScaleAt(const QGraphicsItemAnimation* self, double step) {
	return self->verticalScaleAt(step);
}

double QGraphicsItemAnimation_HorizontalScaleAt(const QGraphicsItemAnimation* self, double step) {
	return self->horizontalScaleAt(step);
}

libqt_list QGraphicsItemAnimation_ScaleList(const QGraphicsItemAnimation* self) {
	auto _ret = self->scaleList();
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

void QGraphicsItemAnimation_SetScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy) {
	self->setScaleAt(step, sx, sy);
}

double QGraphicsItemAnimation_VerticalShearAt(const QGraphicsItemAnimation* self, double step) {
	return self->verticalShearAt(step);
}

double QGraphicsItemAnimation_HorizontalShearAt(const QGraphicsItemAnimation* self, double step) {
	return self->horizontalShearAt(step);
}

libqt_list QGraphicsItemAnimation_ShearList(const QGraphicsItemAnimation* self) {
	auto _ret = self->shearList();
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

void QGraphicsItemAnimation_SetShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv) {
	self->setShearAt(step, sh, sv);
}

void QGraphicsItemAnimation_Clear(QGraphicsItemAnimation* self) {
	self->clear();
}

void QGraphicsItemAnimation_SetStep(QGraphicsItemAnimation* self, double x) {
	self->setStep(x);
}

libqt_string QGraphicsItemAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsItemAnimation::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsItemAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsItemAnimation::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QGraphicsItemAnimation_BeforeAnimationStep(QGraphicsItemAnimation* self, double step) {
	auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
	if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
	vqgraphicsitemanimation->beforeAnimationStep(step);
	} else {
	self->QGraphicsItemAnimation::beforeAnimationStep(step);
}
}

// Base class handler implementation
void QGraphicsItemAnimation_QBaseBeforeAnimationStep(QGraphicsItemAnimation* self, double step) {
	auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
	if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
vqgraphicsitemanimation->setQGraphicsItemAnimation_BeforeAnimationStep_IsBase(true);
	vqgraphicsitemanimation->beforeAnimationStep(step);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnBeforeAnimationStep(QGraphicsItemAnimation* self, intptr_t slot) {
	auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
	if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
vqgraphicsitemanimation->setQGraphicsItemAnimation_BeforeAnimationStep_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_BeforeAnimationStep_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation* self, double step) {
	auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
	if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
	vqgraphicsitemanimation->afterAnimationStep(step);
	} else {
	self->QGraphicsItemAnimation::afterAnimationStep(step);
}
}

// Base class handler implementation
void QGraphicsItemAnimation_QBaseAfterAnimationStep(QGraphicsItemAnimation* self, double step) {
	auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
	if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
vqgraphicsitemanimation->setQGraphicsItemAnimation_AfterAnimationStep_IsBase(true);
	vqgraphicsitemanimation->afterAnimationStep(step);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnAfterAnimationStep(QGraphicsItemAnimation* self, intptr_t slot) {
	auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
	if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
vqgraphicsitemanimation->setQGraphicsItemAnimation_AfterAnimationStep_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_AfterAnimationStep_Callback>(slot));
}
}

void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self) {
    delete self;
}

