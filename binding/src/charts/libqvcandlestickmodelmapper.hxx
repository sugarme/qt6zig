#pragma once
#ifndef QVCANDLESTICKMODELMAPPER_H_C_LIBVIRTUAL
#define QVCANDLESTICKMODELMAPPER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QVCandlestickModelMapper so that we can call protected methods
class VirtualQVCandlestickModelMapper final : public QVCandlestickModelMapper {

public:
	// Virtual class boolean flag
	bool isVirtualQVCandlestickModelMapper= true;

	// Virtual class public types (including callbacks)
	using QVCandlestickModelMapper_Orientation_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QVCandlestickModelMapper_Orientation_Callback qvcandlestickmodelmapper_orientation_callback = nullptr;

	// Instance base flags
    mutable bool qvcandlestickmodelmapper_orientation_isbase = false;

public:
	VirtualQVCandlestickModelMapper(): QVCandlestickModelMapper() {};
	VirtualQVCandlestickModelMapper(QObject* parent): QVCandlestickModelMapper(parent) {};

	~VirtualQVCandlestickModelMapper() {
		qvcandlestickmodelmapper_orientation_callback = nullptr;
	}

// Callback setters
	inline void setQVCandlestickModelMapper_Orientation_Callback(QVCandlestickModelMapper_Orientation_Callback cb) const { qvcandlestickmodelmapper_orientation_callback = cb; }

// Base flag setters
	inline void setQVCandlestickModelMapper_Orientation_IsBase(bool value) const { qvcandlestickmodelmapper_orientation_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual Qt::Orientation orientation() const override {
		if (qvcandlestickmodelmapper_orientation_isbase) {
			qvcandlestickmodelmapper_orientation_isbase = false;
			return QVCandlestickModelMapper::orientation();
		} else if (qvcandlestickmodelmapper_orientation_callback != nullptr) {
			int callback_ret = qvcandlestickmodelmapper_orientation_callback();
			return static_cast<Qt::Orientation>(callback_ret);
		} else {
			return QVCandlestickModelMapper::orientation();
		}
	}
};

#endif


