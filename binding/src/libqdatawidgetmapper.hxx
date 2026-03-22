#pragma once
#ifndef QDATAWIDGETMAPPER_H_C_LIBVIRTUAL
#define QDATAWIDGETMAPPER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QDataWidgetMapper so that we can call protected methods
class VirtualQDataWidgetMapper final : public QDataWidgetMapper {

public:
	// Virtual class boolean flag
	bool isVirtualQDataWidgetMapper= true;

	// Virtual class public types (including callbacks)
	using QDataWidgetMapper_SetCurrentIndex_Callback = void (*)(QDataWidgetMapper*, int);

protected:
	// Instance callback storage
	mutable QDataWidgetMapper_SetCurrentIndex_Callback qdatawidgetmapper_setcurrentindex_callback = nullptr;

	// Instance base flags
    mutable bool qdatawidgetmapper_setcurrentindex_isbase = false;

public:
	VirtualQDataWidgetMapper(): QDataWidgetMapper() {};
	VirtualQDataWidgetMapper(QObject* parent): QDataWidgetMapper(parent) {};

	~VirtualQDataWidgetMapper() {
		qdatawidgetmapper_setcurrentindex_callback = nullptr;
	}

// Callback setters
	inline void setQDataWidgetMapper_SetCurrentIndex_Callback(QDataWidgetMapper_SetCurrentIndex_Callback cb) const { qdatawidgetmapper_setcurrentindex_callback = cb; }

// Base flag setters
	inline void setQDataWidgetMapper_SetCurrentIndex_IsBase(bool value) const { qdatawidgetmapper_setcurrentindex_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setCurrentIndex(int index) override {
		if (qdatawidgetmapper_setcurrentindex_isbase) {
			qdatawidgetmapper_setcurrentindex_isbase = false;
			QDataWidgetMapper::setCurrentIndex(index);
		} else if (qdatawidgetmapper_setcurrentindex_callback != nullptr) {
			int cbval1 = index;
			qdatawidgetmapper_setcurrentindex_callback(this, cbval1);
		} else {
			QDataWidgetMapper::setCurrentIndex(index);
		}
	}
};

#endif


