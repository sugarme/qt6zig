#pragma once
#ifndef QWINDOWSMIMECONVERTER_H_C_LIBVIRTUAL
#define QWINDOWSMIMECONVERTER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QWindowsMimeConverter so that we can call protected methods
class VirtualQWindowsMimeConverter : public QWindowsMimeConverter {

public:
	// Virtual class boolean flag
	bool isVirtualQWindowsMimeConverter= true;

	// Virtual class public types (including callbacks)
	using QWindowsMimeConverter_CanConvertFromMime_Callback = bool (*)(const QWindowsMimeConverter*, const tagFORMATETC*, const QMimeData*);
	using QWindowsMimeConverter_ConvertFromMime_Callback = bool (*)(const QWindowsMimeConverter*, const tagFORMATETC*, const QMimeData*, tagSTGMEDIUM*);
	using QWindowsMimeConverter_FormatsForMime_Callback = libqt_list (*)(const QWindowsMimeConverter*, libqt_string, const QMimeData*);
	using QWindowsMimeConverter_CanConvertToMime_Callback = bool (*)(const QWindowsMimeConverter*, libqt_string, IDataObject*);
	using QWindowsMimeConverter_ConvertToMime_Callback = QVariant* (*)(const QWindowsMimeConverter*, libqt_string, IDataObject*, QMetaType*);
	using QWindowsMimeConverter_MimeForFormat_Callback = const char* (*)(const QWindowsMimeConverter*, const tagFORMATETC*);

protected:
	// Instance callback storage
	mutable QWindowsMimeConverter_CanConvertFromMime_Callback qwindowsmimeconverter_canconvertfrommime_callback = nullptr;
	mutable QWindowsMimeConverter_ConvertFromMime_Callback qwindowsmimeconverter_convertfrommime_callback = nullptr;
	mutable QWindowsMimeConverter_FormatsForMime_Callback qwindowsmimeconverter_formatsformime_callback = nullptr;
	mutable QWindowsMimeConverter_CanConvertToMime_Callback qwindowsmimeconverter_canconverttomime_callback = nullptr;
	mutable QWindowsMimeConverter_ConvertToMime_Callback qwindowsmimeconverter_converttomime_callback = nullptr;
	mutable QWindowsMimeConverter_MimeForFormat_Callback qwindowsmimeconverter_mimeforformat_callback = nullptr;

	// Instance base flags
    mutable bool qwindowsmimeconverter_canconvertfrommime_isbase = false;
    mutable bool qwindowsmimeconverter_convertfrommime_isbase = false;
    mutable bool qwindowsmimeconverter_formatsformime_isbase = false;
    mutable bool qwindowsmimeconverter_canconverttomime_isbase = false;
    mutable bool qwindowsmimeconverter_converttomime_isbase = false;
    mutable bool qwindowsmimeconverter_mimeforformat_isbase = false;

public:
	VirtualQWindowsMimeConverter(): QWindowsMimeConverter() {};

	~VirtualQWindowsMimeConverter() {
		qwindowsmimeconverter_canconvertfrommime_callback = nullptr;
		qwindowsmimeconverter_convertfrommime_callback = nullptr;
		qwindowsmimeconverter_formatsformime_callback = nullptr;
		qwindowsmimeconverter_canconverttomime_callback = nullptr;
		qwindowsmimeconverter_converttomime_callback = nullptr;
		qwindowsmimeconverter_mimeforformat_callback = nullptr;
	}

// Callback setters
	inline void setQWindowsMimeConverter_CanConvertFromMime_Callback(QWindowsMimeConverter_CanConvertFromMime_Callback cb) const { qwindowsmimeconverter_canconvertfrommime_callback = cb; }
	inline void setQWindowsMimeConverter_ConvertFromMime_Callback(QWindowsMimeConverter_ConvertFromMime_Callback cb) const { qwindowsmimeconverter_convertfrommime_callback = cb; }
	inline void setQWindowsMimeConverter_FormatsForMime_Callback(QWindowsMimeConverter_FormatsForMime_Callback cb) const { qwindowsmimeconverter_formatsformime_callback = cb; }
	inline void setQWindowsMimeConverter_CanConvertToMime_Callback(QWindowsMimeConverter_CanConvertToMime_Callback cb) const { qwindowsmimeconverter_canconverttomime_callback = cb; }
	inline void setQWindowsMimeConverter_ConvertToMime_Callback(QWindowsMimeConverter_ConvertToMime_Callback cb) const { qwindowsmimeconverter_converttomime_callback = cb; }
	inline void setQWindowsMimeConverter_MimeForFormat_Callback(QWindowsMimeConverter_MimeForFormat_Callback cb) const { qwindowsmimeconverter_mimeforformat_callback = cb; }

// Base flag setters
	inline void setQWindowsMimeConverter_CanConvertFromMime_IsBase(bool value) const { qwindowsmimeconverter_canconvertfrommime_isbase = value; }
	inline void setQWindowsMimeConverter_ConvertFromMime_IsBase(bool value) const { qwindowsmimeconverter_convertfrommime_isbase = value; }
	inline void setQWindowsMimeConverter_FormatsForMime_IsBase(bool value) const { qwindowsmimeconverter_formatsformime_isbase = value; }
	inline void setQWindowsMimeConverter_CanConvertToMime_IsBase(bool value) const { qwindowsmimeconverter_canconverttomime_isbase = value; }
	inline void setQWindowsMimeConverter_ConvertToMime_IsBase(bool value) const { qwindowsmimeconverter_converttomime_isbase = value; }
	inline void setQWindowsMimeConverter_MimeForFormat_IsBase(bool value) const { qwindowsmimeconverter_mimeforformat_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool canConvertFromMime(const tagFORMATETC& formatetc, const QMimeData* mimeData) const override {
		if (qwindowsmimeconverter_canconvertfrommime_callback != nullptr) {
			const tagFORMATETC* cbval1 = formatetc;
			const QMimeData* cbval2 = mimeData;
			bool callback_ret = qwindowsmimeconverter_canconvertfrommime_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool convertFromMime(const tagFORMATETC& formatetc, const QMimeData* mimeData, tagSTGMEDIUM* pmedium) const override {
		if (qwindowsmimeconverter_convertfrommime_callback != nullptr) {
			const tagFORMATETC* cbval1 = formatetc;
			const QMimeData* cbval2 = mimeData;
			tagSTGMEDIUM* cbval3 = pmedium;
			bool callback_ret = qwindowsmimeconverter_convertfrommime_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<tagFORMATETC> formatsForMime(const QString& mimeType, const QMimeData* mimeData) const override {
		if (qwindowsmimeconverter_formatsformime_callback != nullptr) {
			QByteArray mimeType_qb = mimeType.toUtf8();
			libqt_string cbval1;
			cbval1.len = mimeType_qb.length();
			cbval1.data = static_cast<const char*>(mimeType_qb.constData());
			const QMimeData* cbval2 = mimeData;
			libqt_list callback_ret = qwindowsmimeconverter_formatsformime_callback(this, cbval1, cbval2);
			return QList<tagFORMATETC>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canConvertToMime(const QString& mimeType, IDataObject* pDataObj) const override {
		if (qwindowsmimeconverter_canconverttomime_callback != nullptr) {
			QByteArray mimeType_qb = mimeType.toUtf8();
			libqt_string cbval1;
			cbval1.len = mimeType_qb.length();
			cbval1.data = static_cast<const char*>(mimeType_qb.constData());
			IDataObject* cbval2 = pDataObj;
			bool callback_ret = qwindowsmimeconverter_canconverttomime_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant convertToMime(const QString& mimeType, IDataObject* pDataObj, QMetaType preferredType) const override {
		if (qwindowsmimeconverter_converttomime_callback != nullptr) {
			QByteArray mimeType_qb = mimeType.toUtf8();
			libqt_string cbval1;
			cbval1.len = mimeType_qb.length();
			cbval1.data = static_cast<const char*>(mimeType_qb.constData());
			IDataObject* cbval2 = pDataObj;
			QMetaType* cbval3 = &preferredType;
			QVariant* callback_ret = qwindowsmimeconverter_converttomime_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString mimeForFormat(const tagFORMATETC& formatetc) const override {
		if (qwindowsmimeconverter_mimeforformat_callback != nullptr) {
			const tagFORMATETC* cbval1 = formatetc;
			const char* callback_ret = qwindowsmimeconverter_mimeforformat_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}
};

#endif


