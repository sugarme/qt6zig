#pragma once
#ifndef QMIMEDATA_H_C_LIBVIRTUAL
#define QMIMEDATA_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QMimeData so that we can call protected methods
class VirtualQMimeData final : public QMimeData {

public:
	// Virtual class boolean flag
	bool isVirtualQMimeData= true;

	// Virtual class public types (including callbacks)
	using QMimeData_HasFormat_Callback = bool (*)(const QMimeData*, libqt_string);
	using QMimeData_Formats_Callback = libqt_list (*)();
	using QMimeData_RetrieveData_Callback = QVariant* (*)(const QMimeData*, libqt_string, QMetaType*);

protected:
	// Instance callback storage
	mutable QMimeData_HasFormat_Callback qmimedata_hasformat_callback = nullptr;
	mutable QMimeData_Formats_Callback qmimedata_formats_callback = nullptr;
	mutable QMimeData_RetrieveData_Callback qmimedata_retrievedata_callback = nullptr;

	// Instance base flags
    mutable bool qmimedata_hasformat_isbase = false;
    mutable bool qmimedata_formats_isbase = false;
    mutable bool qmimedata_retrievedata_isbase = false;

public:
	VirtualQMimeData(): QMimeData() {};

	~VirtualQMimeData() {
		qmimedata_hasformat_callback = nullptr;
		qmimedata_formats_callback = nullptr;
		qmimedata_retrievedata_callback = nullptr;
	}

// Callback setters
	inline void setQMimeData_HasFormat_Callback(QMimeData_HasFormat_Callback cb) const { qmimedata_hasformat_callback = cb; }
	inline void setQMimeData_Formats_Callback(QMimeData_Formats_Callback cb) const { qmimedata_formats_callback = cb; }
	inline void setQMimeData_RetrieveData_Callback(QMimeData_RetrieveData_Callback cb) const { qmimedata_retrievedata_callback = cb; }

// Base flag setters
	inline void setQMimeData_HasFormat_IsBase(bool value) const { qmimedata_hasformat_isbase = value; }
	inline void setQMimeData_Formats_IsBase(bool value) const { qmimedata_formats_isbase = value; }
	inline void setQMimeData_RetrieveData_IsBase(bool value) const { qmimedata_retrievedata_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool hasFormat(const QString& mimetype) const override {
		if (qmimedata_hasformat_isbase) {
			qmimedata_hasformat_isbase = false;
			return QMimeData::hasFormat(mimetype);
		} else if (qmimedata_hasformat_callback != nullptr) {
			QByteArray mimetype_qb = mimetype.toUtf8();
			libqt_string cbval1;
			cbval1.len = mimetype_qb.length();
			cbval1.data = static_cast<const char*>(mimetype_qb.constData());
			bool callback_ret = qmimedata_hasformat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMimeData::hasFormat(mimetype);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> formats() const override {
		if (qmimedata_formats_isbase) {
			qmimedata_formats_isbase = false;
			return QMimeData::formats();
		} else if (qmimedata_formats_callback != nullptr) {
			libqt_list callback_ret = qmimedata_formats_callback();
			return callback_ret;
		} else {
			return QMimeData::formats();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant retrieveData(const QString& mimetype, QMetaType preferredType) const override {
		if (qmimedata_retrievedata_isbase) {
			qmimedata_retrievedata_isbase = false;
			return QMimeData::retrieveData(mimetype, preferredType);
		} else if (qmimedata_retrievedata_callback != nullptr) {
			QByteArray mimetype_qb = mimetype.toUtf8();
			libqt_string cbval1;
			cbval1.len = mimetype_qb.length();
			cbval1.data = static_cast<const char*>(mimetype_qb.constData());
			QMetaType* cbval2 = &preferredType;
			QVariant* callback_ret = qmimedata_retrievedata_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QMimeData::retrieveData(mimetype, preferredType);
		}
	}

	// Friend functions
	friend QVariant* QMimeData_RetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
	friend QVariant* QMimeData_QBaseRetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
};

#endif


