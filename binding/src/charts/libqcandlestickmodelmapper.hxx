#pragma once
#ifndef QCANDLESTICKMODELMAPPER_H_C_LIBVIRTUAL
#define QCANDLESTICKMODELMAPPER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QCandlestickModelMapper so that we can call protected methods
class VirtualQCandlestickModelMapper : public QCandlestickModelMapper {

public:
	// Virtual class boolean flag
	bool isVirtualQCandlestickModelMapper= true;

	// Virtual class public types (including callbacks)
	using QCandlestickModelMapper_Orientation_Callback = int (*)();
	using QCandlestickModelMapper_SetTimestamp_Callback = void (*)(QCandlestickModelMapper*, int);
	using QCandlestickModelMapper_Timestamp_Callback = int (*)();
	using QCandlestickModelMapper_SetOpen_Callback = void (*)(QCandlestickModelMapper*, int);
	using QCandlestickModelMapper_Open_Callback = int (*)();
	using QCandlestickModelMapper_SetHigh_Callback = void (*)(QCandlestickModelMapper*, int);
	using QCandlestickModelMapper_High_Callback = int (*)();
	using QCandlestickModelMapper_SetLow_Callback = void (*)(QCandlestickModelMapper*, int);
	using QCandlestickModelMapper_Low_Callback = int (*)();
	using QCandlestickModelMapper_SetClose_Callback = void (*)(QCandlestickModelMapper*, int);
	using QCandlestickModelMapper_Close_Callback = int (*)();
	using QCandlestickModelMapper_SetFirstSetSection_Callback = void (*)(QCandlestickModelMapper*, int);
	using QCandlestickModelMapper_FirstSetSection_Callback = int (*)();
	using QCandlestickModelMapper_SetLastSetSection_Callback = void (*)(QCandlestickModelMapper*, int);
	using QCandlestickModelMapper_LastSetSection_Callback = int (*)();
	using QCandlestickModelMapper_DFunc_Callback = QCandlestickModelMapperPrivate* (*)();
	using QCandlestickModelMapper_DFunc2_Callback = const QCandlestickModelMapperPrivate* (*)();

protected:
	// Instance callback storage
	mutable QCandlestickModelMapper_Orientation_Callback qcandlestickmodelmapper_orientation_callback = nullptr;
	mutable QCandlestickModelMapper_SetTimestamp_Callback qcandlestickmodelmapper_settimestamp_callback = nullptr;
	mutable QCandlestickModelMapper_Timestamp_Callback qcandlestickmodelmapper_timestamp_callback = nullptr;
	mutable QCandlestickModelMapper_SetOpen_Callback qcandlestickmodelmapper_setopen_callback = nullptr;
	mutable QCandlestickModelMapper_Open_Callback qcandlestickmodelmapper_open_callback = nullptr;
	mutable QCandlestickModelMapper_SetHigh_Callback qcandlestickmodelmapper_sethigh_callback = nullptr;
	mutable QCandlestickModelMapper_High_Callback qcandlestickmodelmapper_high_callback = nullptr;
	mutable QCandlestickModelMapper_SetLow_Callback qcandlestickmodelmapper_setlow_callback = nullptr;
	mutable QCandlestickModelMapper_Low_Callback qcandlestickmodelmapper_low_callback = nullptr;
	mutable QCandlestickModelMapper_SetClose_Callback qcandlestickmodelmapper_setclose_callback = nullptr;
	mutable QCandlestickModelMapper_Close_Callback qcandlestickmodelmapper_close_callback = nullptr;
	mutable QCandlestickModelMapper_SetFirstSetSection_Callback qcandlestickmodelmapper_setfirstsetsection_callback = nullptr;
	mutable QCandlestickModelMapper_FirstSetSection_Callback qcandlestickmodelmapper_firstsetsection_callback = nullptr;
	mutable QCandlestickModelMapper_SetLastSetSection_Callback qcandlestickmodelmapper_setlastsetsection_callback = nullptr;
	mutable QCandlestickModelMapper_LastSetSection_Callback qcandlestickmodelmapper_lastsetsection_callback = nullptr;
	mutable QCandlestickModelMapper_DFunc_Callback qcandlestickmodelmapper_dfunc_callback = nullptr;
	mutable QCandlestickModelMapper_DFunc2_Callback qcandlestickmodelmapper_dfunc2_callback = nullptr;

	// Instance base flags
    mutable bool qcandlestickmodelmapper_orientation_isbase = false;
    mutable bool qcandlestickmodelmapper_settimestamp_isbase = false;
    mutable bool qcandlestickmodelmapper_timestamp_isbase = false;
    mutable bool qcandlestickmodelmapper_setopen_isbase = false;
    mutable bool qcandlestickmodelmapper_open_isbase = false;
    mutable bool qcandlestickmodelmapper_sethigh_isbase = false;
    mutable bool qcandlestickmodelmapper_high_isbase = false;
    mutable bool qcandlestickmodelmapper_setlow_isbase = false;
    mutable bool qcandlestickmodelmapper_low_isbase = false;
    mutable bool qcandlestickmodelmapper_setclose_isbase = false;
    mutable bool qcandlestickmodelmapper_close_isbase = false;
    mutable bool qcandlestickmodelmapper_setfirstsetsection_isbase = false;
    mutable bool qcandlestickmodelmapper_firstsetsection_isbase = false;
    mutable bool qcandlestickmodelmapper_setlastsetsection_isbase = false;
    mutable bool qcandlestickmodelmapper_lastsetsection_isbase = false;
    mutable bool qcandlestickmodelmapper_dfunc_isbase = false;
    mutable bool qcandlestickmodelmapper_dfunc2_isbase = false;

public:
	VirtualQCandlestickModelMapper(): QCandlestickModelMapper() {};
	VirtualQCandlestickModelMapper(QObject* parent): QCandlestickModelMapper(parent) {};

	~VirtualQCandlestickModelMapper() {
		qcandlestickmodelmapper_orientation_callback = nullptr;
		qcandlestickmodelmapper_settimestamp_callback = nullptr;
		qcandlestickmodelmapper_timestamp_callback = nullptr;
		qcandlestickmodelmapper_setopen_callback = nullptr;
		qcandlestickmodelmapper_open_callback = nullptr;
		qcandlestickmodelmapper_sethigh_callback = nullptr;
		qcandlestickmodelmapper_high_callback = nullptr;
		qcandlestickmodelmapper_setlow_callback = nullptr;
		qcandlestickmodelmapper_low_callback = nullptr;
		qcandlestickmodelmapper_setclose_callback = nullptr;
		qcandlestickmodelmapper_close_callback = nullptr;
		qcandlestickmodelmapper_setfirstsetsection_callback = nullptr;
		qcandlestickmodelmapper_firstsetsection_callback = nullptr;
		qcandlestickmodelmapper_setlastsetsection_callback = nullptr;
		qcandlestickmodelmapper_lastsetsection_callback = nullptr;
		qcandlestickmodelmapper_dfunc_callback = nullptr;
		qcandlestickmodelmapper_dfunc2_callback = nullptr;
	}

// Callback setters
	inline void setQCandlestickModelMapper_Orientation_Callback(QCandlestickModelMapper_Orientation_Callback cb) const { qcandlestickmodelmapper_orientation_callback = cb; }
	inline void setQCandlestickModelMapper_SetTimestamp_Callback(QCandlestickModelMapper_SetTimestamp_Callback cb) const { qcandlestickmodelmapper_settimestamp_callback = cb; }
	inline void setQCandlestickModelMapper_Timestamp_Callback(QCandlestickModelMapper_Timestamp_Callback cb) const { qcandlestickmodelmapper_timestamp_callback = cb; }
	inline void setQCandlestickModelMapper_SetOpen_Callback(QCandlestickModelMapper_SetOpen_Callback cb) const { qcandlestickmodelmapper_setopen_callback = cb; }
	inline void setQCandlestickModelMapper_Open_Callback(QCandlestickModelMapper_Open_Callback cb) const { qcandlestickmodelmapper_open_callback = cb; }
	inline void setQCandlestickModelMapper_SetHigh_Callback(QCandlestickModelMapper_SetHigh_Callback cb) const { qcandlestickmodelmapper_sethigh_callback = cb; }
	inline void setQCandlestickModelMapper_High_Callback(QCandlestickModelMapper_High_Callback cb) const { qcandlestickmodelmapper_high_callback = cb; }
	inline void setQCandlestickModelMapper_SetLow_Callback(QCandlestickModelMapper_SetLow_Callback cb) const { qcandlestickmodelmapper_setlow_callback = cb; }
	inline void setQCandlestickModelMapper_Low_Callback(QCandlestickModelMapper_Low_Callback cb) const { qcandlestickmodelmapper_low_callback = cb; }
	inline void setQCandlestickModelMapper_SetClose_Callback(QCandlestickModelMapper_SetClose_Callback cb) const { qcandlestickmodelmapper_setclose_callback = cb; }
	inline void setQCandlestickModelMapper_Close_Callback(QCandlestickModelMapper_Close_Callback cb) const { qcandlestickmodelmapper_close_callback = cb; }
	inline void setQCandlestickModelMapper_SetFirstSetSection_Callback(QCandlestickModelMapper_SetFirstSetSection_Callback cb) const { qcandlestickmodelmapper_setfirstsetsection_callback = cb; }
	inline void setQCandlestickModelMapper_FirstSetSection_Callback(QCandlestickModelMapper_FirstSetSection_Callback cb) const { qcandlestickmodelmapper_firstsetsection_callback = cb; }
	inline void setQCandlestickModelMapper_SetLastSetSection_Callback(QCandlestickModelMapper_SetLastSetSection_Callback cb) const { qcandlestickmodelmapper_setlastsetsection_callback = cb; }
	inline void setQCandlestickModelMapper_LastSetSection_Callback(QCandlestickModelMapper_LastSetSection_Callback cb) const { qcandlestickmodelmapper_lastsetsection_callback = cb; }
	inline void setQCandlestickModelMapper_DFunc_Callback(QCandlestickModelMapper_DFunc_Callback cb) const { qcandlestickmodelmapper_dfunc_callback = cb; }
	inline void setQCandlestickModelMapper_DFunc2_Callback(QCandlestickModelMapper_DFunc2_Callback cb) const { qcandlestickmodelmapper_dfunc2_callback = cb; }

// Base flag setters
	inline void setQCandlestickModelMapper_Orientation_IsBase(bool value) const { qcandlestickmodelmapper_orientation_isbase = value; }
	inline void setQCandlestickModelMapper_SetTimestamp_IsBase(bool value) const { qcandlestickmodelmapper_settimestamp_isbase = value; }
	inline void setQCandlestickModelMapper_Timestamp_IsBase(bool value) const { qcandlestickmodelmapper_timestamp_isbase = value; }
	inline void setQCandlestickModelMapper_SetOpen_IsBase(bool value) const { qcandlestickmodelmapper_setopen_isbase = value; }
	inline void setQCandlestickModelMapper_Open_IsBase(bool value) const { qcandlestickmodelmapper_open_isbase = value; }
	inline void setQCandlestickModelMapper_SetHigh_IsBase(bool value) const { qcandlestickmodelmapper_sethigh_isbase = value; }
	inline void setQCandlestickModelMapper_High_IsBase(bool value) const { qcandlestickmodelmapper_high_isbase = value; }
	inline void setQCandlestickModelMapper_SetLow_IsBase(bool value) const { qcandlestickmodelmapper_setlow_isbase = value; }
	inline void setQCandlestickModelMapper_Low_IsBase(bool value) const { qcandlestickmodelmapper_low_isbase = value; }
	inline void setQCandlestickModelMapper_SetClose_IsBase(bool value) const { qcandlestickmodelmapper_setclose_isbase = value; }
	inline void setQCandlestickModelMapper_Close_IsBase(bool value) const { qcandlestickmodelmapper_close_isbase = value; }
	inline void setQCandlestickModelMapper_SetFirstSetSection_IsBase(bool value) const { qcandlestickmodelmapper_setfirstsetsection_isbase = value; }
	inline void setQCandlestickModelMapper_FirstSetSection_IsBase(bool value) const { qcandlestickmodelmapper_firstsetsection_isbase = value; }
	inline void setQCandlestickModelMapper_SetLastSetSection_IsBase(bool value) const { qcandlestickmodelmapper_setlastsetsection_isbase = value; }
	inline void setQCandlestickModelMapper_LastSetSection_IsBase(bool value) const { qcandlestickmodelmapper_lastsetsection_isbase = value; }
	inline void setQCandlestickModelMapper_DFunc_IsBase(bool value) const { qcandlestickmodelmapper_dfunc_isbase = value; }
	inline void setQCandlestickModelMapper_DFunc2_IsBase(bool value) const { qcandlestickmodelmapper_dfunc2_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual Qt::Orientation orientation() const override {
		if (qcandlestickmodelmapper_orientation_callback != nullptr) {
			int callback_ret = qcandlestickmodelmapper_orientation_callback();
			return static_cast<Qt::Orientation>(callback_ret);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	void setTimestamp(int timestamp) {
		if (qcandlestickmodelmapper_settimestamp_isbase) {
			qcandlestickmodelmapper_settimestamp_isbase = false;
			QCandlestickModelMapper::setTimestamp(timestamp);
		} else if (qcandlestickmodelmapper_settimestamp_callback != nullptr) {
			int cbval1 = timestamp;
			qcandlestickmodelmapper_settimestamp_callback(this, cbval1);
		} else {
			QCandlestickModelMapper::setTimestamp(timestamp);
		}
	}

	// Virtual method for C ABI access and custom callback
	int timestamp() const {
		if (qcandlestickmodelmapper_timestamp_isbase) {
			qcandlestickmodelmapper_timestamp_isbase = false;
			return QCandlestickModelMapper::timestamp();
		} else if (qcandlestickmodelmapper_timestamp_callback != nullptr) {
			int callback_ret = qcandlestickmodelmapper_timestamp_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::timestamp();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setOpen(int open) {
		if (qcandlestickmodelmapper_setopen_isbase) {
			qcandlestickmodelmapper_setopen_isbase = false;
			QCandlestickModelMapper::setOpen(open);
		} else if (qcandlestickmodelmapper_setopen_callback != nullptr) {
			int cbval1 = open;
			qcandlestickmodelmapper_setopen_callback(this, cbval1);
		} else {
			QCandlestickModelMapper::setOpen(open);
		}
	}

	// Virtual method for C ABI access and custom callback
	int open() const {
		if (qcandlestickmodelmapper_open_isbase) {
			qcandlestickmodelmapper_open_isbase = false;
			return QCandlestickModelMapper::open();
		} else if (qcandlestickmodelmapper_open_callback != nullptr) {
			int callback_ret = qcandlestickmodelmapper_open_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::open();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setHigh(int high) {
		if (qcandlestickmodelmapper_sethigh_isbase) {
			qcandlestickmodelmapper_sethigh_isbase = false;
			QCandlestickModelMapper::setHigh(high);
		} else if (qcandlestickmodelmapper_sethigh_callback != nullptr) {
			int cbval1 = high;
			qcandlestickmodelmapper_sethigh_callback(this, cbval1);
		} else {
			QCandlestickModelMapper::setHigh(high);
		}
	}

	// Virtual method for C ABI access and custom callback
	int high() const {
		if (qcandlestickmodelmapper_high_isbase) {
			qcandlestickmodelmapper_high_isbase = false;
			return QCandlestickModelMapper::high();
		} else if (qcandlestickmodelmapper_high_callback != nullptr) {
			int callback_ret = qcandlestickmodelmapper_high_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::high();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setLow(int low) {
		if (qcandlestickmodelmapper_setlow_isbase) {
			qcandlestickmodelmapper_setlow_isbase = false;
			QCandlestickModelMapper::setLow(low);
		} else if (qcandlestickmodelmapper_setlow_callback != nullptr) {
			int cbval1 = low;
			qcandlestickmodelmapper_setlow_callback(this, cbval1);
		} else {
			QCandlestickModelMapper::setLow(low);
		}
	}

	// Virtual method for C ABI access and custom callback
	int low() const {
		if (qcandlestickmodelmapper_low_isbase) {
			qcandlestickmodelmapper_low_isbase = false;
			return QCandlestickModelMapper::low();
		} else if (qcandlestickmodelmapper_low_callback != nullptr) {
			int callback_ret = qcandlestickmodelmapper_low_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::low();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setClose(int close) {
		if (qcandlestickmodelmapper_setclose_isbase) {
			qcandlestickmodelmapper_setclose_isbase = false;
			QCandlestickModelMapper::setClose(close);
		} else if (qcandlestickmodelmapper_setclose_callback != nullptr) {
			int cbval1 = close;
			qcandlestickmodelmapper_setclose_callback(this, cbval1);
		} else {
			QCandlestickModelMapper::setClose(close);
		}
	}

	// Virtual method for C ABI access and custom callback
	int close() const {
		if (qcandlestickmodelmapper_close_isbase) {
			qcandlestickmodelmapper_close_isbase = false;
			return QCandlestickModelMapper::close();
		} else if (qcandlestickmodelmapper_close_callback != nullptr) {
			int callback_ret = qcandlestickmodelmapper_close_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setFirstSetSection(int firstSetSection) {
		if (qcandlestickmodelmapper_setfirstsetsection_isbase) {
			qcandlestickmodelmapper_setfirstsetsection_isbase = false;
			QCandlestickModelMapper::setFirstSetSection(firstSetSection);
		} else if (qcandlestickmodelmapper_setfirstsetsection_callback != nullptr) {
			int cbval1 = firstSetSection;
			qcandlestickmodelmapper_setfirstsetsection_callback(this, cbval1);
		} else {
			QCandlestickModelMapper::setFirstSetSection(firstSetSection);
		}
	}

	// Virtual method for C ABI access and custom callback
	int firstSetSection() const {
		if (qcandlestickmodelmapper_firstsetsection_isbase) {
			qcandlestickmodelmapper_firstsetsection_isbase = false;
			return QCandlestickModelMapper::firstSetSection();
		} else if (qcandlestickmodelmapper_firstsetsection_callback != nullptr) {
			int callback_ret = qcandlestickmodelmapper_firstsetsection_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::firstSetSection();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setLastSetSection(int lastSetSection) {
		if (qcandlestickmodelmapper_setlastsetsection_isbase) {
			qcandlestickmodelmapper_setlastsetsection_isbase = false;
			QCandlestickModelMapper::setLastSetSection(lastSetSection);
		} else if (qcandlestickmodelmapper_setlastsetsection_callback != nullptr) {
			int cbval1 = lastSetSection;
			qcandlestickmodelmapper_setlastsetsection_callback(this, cbval1);
		} else {
			QCandlestickModelMapper::setLastSetSection(lastSetSection);
		}
	}

	// Virtual method for C ABI access and custom callback
	int lastSetSection() const {
		if (qcandlestickmodelmapper_lastsetsection_isbase) {
			qcandlestickmodelmapper_lastsetsection_isbase = false;
			return QCandlestickModelMapper::lastSetSection();
		} else if (qcandlestickmodelmapper_lastsetsection_callback != nullptr) {
			int callback_ret = qcandlestickmodelmapper_lastsetsection_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::lastSetSection();
		}
	}

	// Virtual method for C ABI access and custom callback
	QCandlestickModelMapperPrivate* d_func() {
		if (qcandlestickmodelmapper_dfunc_isbase) {
			qcandlestickmodelmapper_dfunc_isbase = false;
			return QCandlestickModelMapper::d_func();
		} else if (qcandlestickmodelmapper_dfunc_callback != nullptr) {
			QCandlestickModelMapperPrivate* callback_ret = qcandlestickmodelmapper_dfunc_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::d_func();
		}
	}

	// Virtual method for C ABI access and custom callback
	const QCandlestickModelMapperPrivate* d_func() const {
		if (qcandlestickmodelmapper_dfunc2_isbase) {
			qcandlestickmodelmapper_dfunc2_isbase = false;
			return QCandlestickModelMapper::d_func();
		} else if (qcandlestickmodelmapper_dfunc2_callback != nullptr) {
			const QCandlestickModelMapperPrivate* callback_ret = qcandlestickmodelmapper_dfunc2_callback();
			return callback_ret;
		} else {
			return QCandlestickModelMapper::d_func();
		}
	}

	// Friend functions
	friend void QCandlestickModelMapper_SetTimestamp(QCandlestickModelMapper* self, int timestamp);
	friend void QCandlestickModelMapper_QBaseSetTimestamp(QCandlestickModelMapper* self, int timestamp);
	friend int QCandlestickModelMapper_Timestamp(const QCandlestickModelMapper* self);
	friend int QCandlestickModelMapper_QBaseTimestamp(const QCandlestickModelMapper* self);
	friend void QCandlestickModelMapper_SetOpen(QCandlestickModelMapper* self, int open);
	friend void QCandlestickModelMapper_QBaseSetOpen(QCandlestickModelMapper* self, int open);
	friend int QCandlestickModelMapper_Open(const QCandlestickModelMapper* self);
	friend int QCandlestickModelMapper_QBaseOpen(const QCandlestickModelMapper* self);
	friend void QCandlestickModelMapper_SetHigh(QCandlestickModelMapper* self, int high);
	friend void QCandlestickModelMapper_QBaseSetHigh(QCandlestickModelMapper* self, int high);
	friend int QCandlestickModelMapper_High(const QCandlestickModelMapper* self);
	friend int QCandlestickModelMapper_QBaseHigh(const QCandlestickModelMapper* self);
	friend void QCandlestickModelMapper_SetLow(QCandlestickModelMapper* self, int low);
	friend void QCandlestickModelMapper_QBaseSetLow(QCandlestickModelMapper* self, int low);
	friend int QCandlestickModelMapper_Low(const QCandlestickModelMapper* self);
	friend int QCandlestickModelMapper_QBaseLow(const QCandlestickModelMapper* self);
	friend void QCandlestickModelMapper_SetClose(QCandlestickModelMapper* self, int close);
	friend void QCandlestickModelMapper_QBaseSetClose(QCandlestickModelMapper* self, int close);
	friend int QCandlestickModelMapper_Close(const QCandlestickModelMapper* self);
	friend int QCandlestickModelMapper_QBaseClose(const QCandlestickModelMapper* self);
	friend void QCandlestickModelMapper_SetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection);
	friend void QCandlestickModelMapper_QBaseSetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection);
	friend int QCandlestickModelMapper_FirstSetSection(const QCandlestickModelMapper* self);
	friend int QCandlestickModelMapper_QBaseFirstSetSection(const QCandlestickModelMapper* self);
	friend void QCandlestickModelMapper_SetLastSetSection(QCandlestickModelMapper* self, int lastSetSection);
	friend void QCandlestickModelMapper_QBaseSetLastSetSection(QCandlestickModelMapper* self, int lastSetSection);
	friend int QCandlestickModelMapper_LastSetSection(const QCandlestickModelMapper* self);
	friend int QCandlestickModelMapper_QBaseLastSetSection(const QCandlestickModelMapper* self);
	friend QCandlestickModelMapperPrivate* QCandlestickModelMapper_DFunc(QCandlestickModelMapper* self);
	friend QCandlestickModelMapperPrivate* QCandlestickModelMapper_QBaseDFunc(QCandlestickModelMapper* self);
	friend const QCandlestickModelMapperPrivate* QCandlestickModelMapper_DFunc2(const QCandlestickModelMapper* self);
	friend const QCandlestickModelMapperPrivate* QCandlestickModelMapper_QBaseDFunc2(const QCandlestickModelMapper* self);
};

#endif


