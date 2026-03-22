#pragma once
#ifndef QHCANDLESTICKMODELMAPPER_H_C_LIBVIRTUAL
#define QHCANDLESTICKMODELMAPPER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QHCandlestickModelMapper so that we can call protected methods
class VirtualQHCandlestickModelMapper final : public QHCandlestickModelMapper {

public:
	// Virtual class boolean flag
	bool isVirtualQHCandlestickModelMapper= true;

	// Virtual class public types (including callbacks)
	using QHCandlestickModelMapper_Orientation_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QHCandlestickModelMapper_Orientation_Callback qhcandlestickmodelmapper_orientation_callback = nullptr;

	// Instance base flags
    mutable bool qhcandlestickmodelmapper_orientation_isbase = false;

public:
	VirtualQHCandlestickModelMapper(): QHCandlestickModelMapper() {};
	VirtualQHCandlestickModelMapper(QObject* parent): QHCandlestickModelMapper(parent) {};

	~VirtualQHCandlestickModelMapper() {
		qhcandlestickmodelmapper_orientation_callback = nullptr;
	}

// Callback setters
	inline void setQHCandlestickModelMapper_Orientation_Callback(QHCandlestickModelMapper_Orientation_Callback cb) const { qhcandlestickmodelmapper_orientation_callback = cb; }

// Base flag setters
	inline void setQHCandlestickModelMapper_Orientation_IsBase(bool value) const { qhcandlestickmodelmapper_orientation_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual Qt::Orientation orientation() const override {
		if (qhcandlestickmodelmapper_orientation_isbase) {
			qhcandlestickmodelmapper_orientation_isbase = false;
			return QHCandlestickModelMapper::orientation();
		} else if (qhcandlestickmodelmapper_orientation_callback != nullptr) {
			int callback_ret = qhcandlestickmodelmapper_orientation_callback();
			return static_cast<Qt::Orientation>(callback_ret);
		} else {
			return QHCandlestickModelMapper::orientation();
		}
	}
};

#endif


