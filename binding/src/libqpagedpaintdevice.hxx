#pragma once
#ifndef QPAGEDPAINTDEVICE_H_C_LIBVIRTUAL
#define QPAGEDPAINTDEVICE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPagedPaintDevice so that we can call protected methods
class VirtualQPagedPaintDevice : public QPagedPaintDevice {

public:
	// Virtual class boolean flag
	bool isVirtualQPagedPaintDevice= true;

	// Virtual class public types (including callbacks)
	using QPagedPaintDevice_NewPage_Callback = bool (*)();
	using QPagedPaintDevice_SetPageLayout_Callback = bool (*)(QPagedPaintDevice*, const QPageLayout*);
	using QPagedPaintDevice_SetPageSize_Callback = bool (*)(QPagedPaintDevice*, const QPageSize*);
	using QPagedPaintDevice_SetPageOrientation_Callback = bool (*)(QPagedPaintDevice*, int);
	using QPagedPaintDevice_SetPageMargins_Callback = bool (*)(QPagedPaintDevice*, const QMarginsF*, int);
	using QPagedPaintDevice_SetPageRanges_Callback = void (*)(QPagedPaintDevice*, const QPageRanges*);

protected:
	// Instance callback storage
	mutable QPagedPaintDevice_NewPage_Callback qpagedpaintdevice_newpage_callback = nullptr;
	mutable QPagedPaintDevice_SetPageLayout_Callback qpagedpaintdevice_setpagelayout_callback = nullptr;
	mutable QPagedPaintDevice_SetPageSize_Callback qpagedpaintdevice_setpagesize_callback = nullptr;
	mutable QPagedPaintDevice_SetPageOrientation_Callback qpagedpaintdevice_setpageorientation_callback = nullptr;
	mutable QPagedPaintDevice_SetPageMargins_Callback qpagedpaintdevice_setpagemargins_callback = nullptr;
	mutable QPagedPaintDevice_SetPageRanges_Callback qpagedpaintdevice_setpageranges_callback = nullptr;

	// Instance base flags
    mutable bool qpagedpaintdevice_newpage_isbase = false;
    mutable bool qpagedpaintdevice_setpagelayout_isbase = false;
    mutable bool qpagedpaintdevice_setpagesize_isbase = false;
    mutable bool qpagedpaintdevice_setpageorientation_isbase = false;
    mutable bool qpagedpaintdevice_setpagemargins_isbase = false;
    mutable bool qpagedpaintdevice_setpageranges_isbase = false;

public:

	~VirtualQPagedPaintDevice() {
		qpagedpaintdevice_newpage_callback = nullptr;
		qpagedpaintdevice_setpagelayout_callback = nullptr;
		qpagedpaintdevice_setpagesize_callback = nullptr;
		qpagedpaintdevice_setpageorientation_callback = nullptr;
		qpagedpaintdevice_setpagemargins_callback = nullptr;
		qpagedpaintdevice_setpageranges_callback = nullptr;
	}

// Callback setters
	inline void setQPagedPaintDevice_NewPage_Callback(QPagedPaintDevice_NewPage_Callback cb) const { qpagedpaintdevice_newpage_callback = cb; }
	inline void setQPagedPaintDevice_SetPageLayout_Callback(QPagedPaintDevice_SetPageLayout_Callback cb) const { qpagedpaintdevice_setpagelayout_callback = cb; }
	inline void setQPagedPaintDevice_SetPageSize_Callback(QPagedPaintDevice_SetPageSize_Callback cb) const { qpagedpaintdevice_setpagesize_callback = cb; }
	inline void setQPagedPaintDevice_SetPageOrientation_Callback(QPagedPaintDevice_SetPageOrientation_Callback cb) const { qpagedpaintdevice_setpageorientation_callback = cb; }
	inline void setQPagedPaintDevice_SetPageMargins_Callback(QPagedPaintDevice_SetPageMargins_Callback cb) const { qpagedpaintdevice_setpagemargins_callback = cb; }
	inline void setQPagedPaintDevice_SetPageRanges_Callback(QPagedPaintDevice_SetPageRanges_Callback cb) const { qpagedpaintdevice_setpageranges_callback = cb; }

// Base flag setters
	inline void setQPagedPaintDevice_NewPage_IsBase(bool value) const { qpagedpaintdevice_newpage_isbase = value; }
	inline void setQPagedPaintDevice_SetPageLayout_IsBase(bool value) const { qpagedpaintdevice_setpagelayout_isbase = value; }
	inline void setQPagedPaintDevice_SetPageSize_IsBase(bool value) const { qpagedpaintdevice_setpagesize_isbase = value; }
	inline void setQPagedPaintDevice_SetPageOrientation_IsBase(bool value) const { qpagedpaintdevice_setpageorientation_isbase = value; }
	inline void setQPagedPaintDevice_SetPageMargins_IsBase(bool value) const { qpagedpaintdevice_setpagemargins_isbase = value; }
	inline void setQPagedPaintDevice_SetPageRanges_IsBase(bool value) const { qpagedpaintdevice_setpageranges_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool newPage() override {
		if (qpagedpaintdevice_newpage_callback != nullptr) {
			bool callback_ret = qpagedpaintdevice_newpage_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setPageLayout(const QPageLayout& pageLayout) override {
		if (qpagedpaintdevice_setpagelayout_isbase) {
			qpagedpaintdevice_setpagelayout_isbase = false;
			return QPagedPaintDevice::setPageLayout(pageLayout);
		} else if (qpagedpaintdevice_setpagelayout_callback != nullptr) {
			const QPageLayout* cbval1 = (const QPageLayout*)&pageLayout;
			bool callback_ret = qpagedpaintdevice_setpagelayout_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPagedPaintDevice::setPageLayout(pageLayout);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setPageSize(const QPageSize& pageSize) override {
		if (qpagedpaintdevice_setpagesize_isbase) {
			qpagedpaintdevice_setpagesize_isbase = false;
			return QPagedPaintDevice::setPageSize(pageSize);
		} else if (qpagedpaintdevice_setpagesize_callback != nullptr) {
			const QPageSize* cbval1 = (const QPageSize*)&pageSize;
			bool callback_ret = qpagedpaintdevice_setpagesize_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPagedPaintDevice::setPageSize(pageSize);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
		if (qpagedpaintdevice_setpageorientation_isbase) {
			qpagedpaintdevice_setpageorientation_isbase = false;
			return QPagedPaintDevice::setPageOrientation(orientation);
		} else if (qpagedpaintdevice_setpageorientation_callback != nullptr) {
			int cbval1 = static_cast<int>(orientation);
			bool callback_ret = qpagedpaintdevice_setpageorientation_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPagedPaintDevice::setPageOrientation(orientation);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
		if (qpagedpaintdevice_setpagemargins_isbase) {
			qpagedpaintdevice_setpagemargins_isbase = false;
			return QPagedPaintDevice::setPageMargins(margins, units);
		} else if (qpagedpaintdevice_setpagemargins_callback != nullptr) {
			const QMarginsF* cbval1 = (const QMarginsF*)&margins;
			int cbval2 = static_cast<int>(units);
			bool callback_ret = qpagedpaintdevice_setpagemargins_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QPagedPaintDevice::setPageMargins(margins, units);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setPageRanges(const QPageRanges& ranges) override {
		if (qpagedpaintdevice_setpageranges_isbase) {
			qpagedpaintdevice_setpageranges_isbase = false;
			QPagedPaintDevice::setPageRanges(ranges);
		} else if (qpagedpaintdevice_setpageranges_callback != nullptr) {
			const QPageRanges* cbval1 = (const QPageRanges*)&ranges;
			qpagedpaintdevice_setpageranges_callback(this, cbval1);
		} else {
			QPagedPaintDevice::setPageRanges(ranges);
		}
	}
};

#endif


