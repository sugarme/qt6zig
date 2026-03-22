#pragma once
#ifndef QGRAPHICSITEMANIMATION_H_C_LIBVIRTUAL
#define QGRAPHICSITEMANIMATION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsItemAnimation so that we can call protected methods
class VirtualQGraphicsItemAnimation final : public QGraphicsItemAnimation {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsItemAnimation= true;

	// Virtual class public types (including callbacks)
	using QGraphicsItemAnimation_BeforeAnimationStep_Callback = void (*)(QGraphicsItemAnimation*, double);
	using QGraphicsItemAnimation_AfterAnimationStep_Callback = void (*)(QGraphicsItemAnimation*, double);

protected:
	// Instance callback storage
	mutable QGraphicsItemAnimation_BeforeAnimationStep_Callback qgraphicsitemanimation_beforeanimationstep_callback = nullptr;
	mutable QGraphicsItemAnimation_AfterAnimationStep_Callback qgraphicsitemanimation_afteranimationstep_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsitemanimation_beforeanimationstep_isbase = false;
    mutable bool qgraphicsitemanimation_afteranimationstep_isbase = false;

public:
	VirtualQGraphicsItemAnimation(): QGraphicsItemAnimation() {};
	VirtualQGraphicsItemAnimation(QObject* parent): QGraphicsItemAnimation(parent) {};

	~VirtualQGraphicsItemAnimation() {
		qgraphicsitemanimation_beforeanimationstep_callback = nullptr;
		qgraphicsitemanimation_afteranimationstep_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsItemAnimation_BeforeAnimationStep_Callback(QGraphicsItemAnimation_BeforeAnimationStep_Callback cb) const { qgraphicsitemanimation_beforeanimationstep_callback = cb; }
	inline void setQGraphicsItemAnimation_AfterAnimationStep_Callback(QGraphicsItemAnimation_AfterAnimationStep_Callback cb) const { qgraphicsitemanimation_afteranimationstep_callback = cb; }

// Base flag setters
	inline void setQGraphicsItemAnimation_BeforeAnimationStep_IsBase(bool value) const { qgraphicsitemanimation_beforeanimationstep_isbase = value; }
	inline void setQGraphicsItemAnimation_AfterAnimationStep_IsBase(bool value) const { qgraphicsitemanimation_afteranimationstep_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void beforeAnimationStep(qreal step) override {
		if (qgraphicsitemanimation_beforeanimationstep_isbase) {
			qgraphicsitemanimation_beforeanimationstep_isbase = false;
			QGraphicsItemAnimation::beforeAnimationStep(step);
		} else if (qgraphicsitemanimation_beforeanimationstep_callback != nullptr) {
			double cbval1 = step;
			qgraphicsitemanimation_beforeanimationstep_callback(this, cbval1);
		} else {
			QGraphicsItemAnimation::beforeAnimationStep(step);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void afterAnimationStep(qreal step) override {
		if (qgraphicsitemanimation_afteranimationstep_isbase) {
			qgraphicsitemanimation_afteranimationstep_isbase = false;
			QGraphicsItemAnimation::afterAnimationStep(step);
		} else if (qgraphicsitemanimation_afteranimationstep_callback != nullptr) {
			double cbval1 = step;
			qgraphicsitemanimation_afteranimationstep_callback(this, cbval1);
		} else {
			QGraphicsItemAnimation::afterAnimationStep(step);
		}
	}

	// Friend functions
	friend void QGraphicsItemAnimation_BeforeAnimationStep(QGraphicsItemAnimation* self, double step);
	friend void QGraphicsItemAnimation_QBaseBeforeAnimationStep(QGraphicsItemAnimation* self, double step);
	friend void QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation* self, double step);
	friend void QGraphicsItemAnimation_QBaseAfterAnimationStep(QGraphicsItemAnimation* self, double step);
};

#endif


