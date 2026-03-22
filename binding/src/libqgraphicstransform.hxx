#pragma once
#ifndef QGRAPHICSTRANSFORM_H_C_LIBVIRTUAL
#define QGRAPHICSTRANSFORM_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsTransform so that we can call protected methods
class VirtualQGraphicsTransform : public QGraphicsTransform {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsTransform= true;

	// Virtual class public types (including callbacks)
	using QGraphicsTransform_ApplyTo_Callback = void (*)(const QGraphicsTransform*, QMatrix4x4*);
	using QGraphicsTransform_Update_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QGraphicsTransform_ApplyTo_Callback qgraphicstransform_applyto_callback = nullptr;
	mutable QGraphicsTransform_Update_Callback qgraphicstransform_update_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicstransform_applyto_isbase = false;
    mutable bool qgraphicstransform_update_isbase = false;

public:
	VirtualQGraphicsTransform(): QGraphicsTransform() {};
	VirtualQGraphicsTransform(QObject* parent): QGraphicsTransform(parent) {};

	~VirtualQGraphicsTransform() {
		qgraphicstransform_applyto_callback = nullptr;
		qgraphicstransform_update_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsTransform_ApplyTo_Callback(QGraphicsTransform_ApplyTo_Callback cb) const { qgraphicstransform_applyto_callback = cb; }
	inline void setQGraphicsTransform_Update_Callback(QGraphicsTransform_Update_Callback cb) const { qgraphicstransform_update_callback = cb; }

// Base flag setters
	inline void setQGraphicsTransform_ApplyTo_IsBase(bool value) const { qgraphicstransform_applyto_isbase = value; }
	inline void setQGraphicsTransform_Update_IsBase(bool value) const { qgraphicstransform_update_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (qgraphicstransform_applyto_callback != nullptr) {
			QMatrix4x4* cbval1 = matrix;
			qgraphicstransform_applyto_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void update() {
		if (qgraphicstransform_update_isbase) {
			qgraphicstransform_update_isbase = false;
			QGraphicsTransform::update();
		} else if (qgraphicstransform_update_callback != nullptr) {
			qgraphicstransform_update_callback();
		} else {
			QGraphicsTransform::update();
		}
	}

	// Friend functions
	friend void QGraphicsTransform_Update(QGraphicsTransform* self);
	friend void QGraphicsTransform_QBaseUpdate(QGraphicsTransform* self);
};

// This class is a subclass of QGraphicsScale so that we can call protected methods
class VirtualQGraphicsScale final : public QGraphicsScale {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsScale= true;

	// Virtual class public types (including callbacks)
	using QGraphicsScale_ApplyTo_Callback = void (*)(const QGraphicsScale*, QMatrix4x4*);

protected:
	// Instance callback storage
	mutable QGraphicsScale_ApplyTo_Callback qgraphicsscale_applyto_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsscale_applyto_isbase = false;

public:
	VirtualQGraphicsScale(): QGraphicsScale() {};
	VirtualQGraphicsScale(QObject* parent): QGraphicsScale(parent) {};

	~VirtualQGraphicsScale() {
		qgraphicsscale_applyto_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsScale_ApplyTo_Callback(QGraphicsScale_ApplyTo_Callback cb) const { qgraphicsscale_applyto_callback = cb; }

// Base flag setters
	inline void setQGraphicsScale_ApplyTo_IsBase(bool value) const { qgraphicsscale_applyto_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (qgraphicsscale_applyto_isbase) {
			qgraphicsscale_applyto_isbase = false;
			QGraphicsScale::applyTo(matrix);
		} else if (qgraphicsscale_applyto_callback != nullptr) {
			QMatrix4x4* cbval1 = matrix;
			qgraphicsscale_applyto_callback(this, cbval1);
		} else {
			QGraphicsScale::applyTo(matrix);
		}
	}
};

// This class is a subclass of QGraphicsRotation so that we can call protected methods
class VirtualQGraphicsRotation final : public QGraphicsRotation {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsRotation= true;

	// Virtual class public types (including callbacks)
	using QGraphicsRotation_ApplyTo_Callback = void (*)(const QGraphicsRotation*, QMatrix4x4*);

protected:
	// Instance callback storage
	mutable QGraphicsRotation_ApplyTo_Callback qgraphicsrotation_applyto_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsrotation_applyto_isbase = false;

public:
	VirtualQGraphicsRotation(): QGraphicsRotation() {};
	VirtualQGraphicsRotation(QObject* parent): QGraphicsRotation(parent) {};

	~VirtualQGraphicsRotation() {
		qgraphicsrotation_applyto_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsRotation_ApplyTo_Callback(QGraphicsRotation_ApplyTo_Callback cb) const { qgraphicsrotation_applyto_callback = cb; }

// Base flag setters
	inline void setQGraphicsRotation_ApplyTo_IsBase(bool value) const { qgraphicsrotation_applyto_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (qgraphicsrotation_applyto_isbase) {
			qgraphicsrotation_applyto_isbase = false;
			QGraphicsRotation::applyTo(matrix);
		} else if (qgraphicsrotation_applyto_callback != nullptr) {
			QMatrix4x4* cbval1 = matrix;
			qgraphicsrotation_applyto_callback(this, cbval1);
		} else {
			QGraphicsRotation::applyTo(matrix);
		}
	}
};

#endif


