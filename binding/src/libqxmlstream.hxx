#pragma once
#ifndef QXMLSTREAM_H_C_LIBVIRTUAL
#define QXMLSTREAM_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QXmlStreamEntityResolver so that we can call protected methods
class VirtualQXmlStreamEntityResolver final : public QXmlStreamEntityResolver {

public:
	// Virtual class boolean flag
	bool isVirtualQXmlStreamEntityResolver= true;

	// Virtual class public types (including callbacks)
	using QXmlStreamEntityResolver_ResolveEntity_Callback = const char* (*)(QXmlStreamEntityResolver*, libqt_string, libqt_string);
	using QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback = const char* (*)(QXmlStreamEntityResolver*, libqt_string);

protected:
	// Instance callback storage
	mutable QXmlStreamEntityResolver_ResolveEntity_Callback qxmlstreamentityresolver_resolveentity_callback = nullptr;
	mutable QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback qxmlstreamentityresolver_resolveundeclaredentity_callback = nullptr;

	// Instance base flags
    mutable bool qxmlstreamentityresolver_resolveentity_isbase = false;
    mutable bool qxmlstreamentityresolver_resolveundeclaredentity_isbase = false;

public:
	VirtualQXmlStreamEntityResolver(): QXmlStreamEntityResolver() {};

	~VirtualQXmlStreamEntityResolver() {
		qxmlstreamentityresolver_resolveentity_callback = nullptr;
		qxmlstreamentityresolver_resolveundeclaredentity_callback = nullptr;
	}

// Callback setters
	inline void setQXmlStreamEntityResolver_ResolveEntity_Callback(QXmlStreamEntityResolver_ResolveEntity_Callback cb) const { qxmlstreamentityresolver_resolveentity_callback = cb; }
	inline void setQXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback(QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback cb) const { qxmlstreamentityresolver_resolveundeclaredentity_callback = cb; }

// Base flag setters
	inline void setQXmlStreamEntityResolver_ResolveEntity_IsBase(bool value) const { qxmlstreamentityresolver_resolveentity_isbase = value; }
	inline void setQXmlStreamEntityResolver_ResolveUndeclaredEntity_IsBase(bool value) const { qxmlstreamentityresolver_resolveundeclaredentity_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString resolveEntity(const QString& publicId, const QString& systemId) override {
		if (qxmlstreamentityresolver_resolveentity_isbase) {
			qxmlstreamentityresolver_resolveentity_isbase = false;
			return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
		} else if (qxmlstreamentityresolver_resolveentity_callback != nullptr) {
			QByteArray publicId_qb = publicId.toUtf8();
			libqt_string cbval1;
			cbval1.len = publicId_qb.length();
			cbval1.data = static_cast<const char*>(publicId_qb.constData());
			QByteArray systemId_qb = systemId.toUtf8();
			libqt_string cbval2;
			cbval2.len = systemId_qb.length();
			cbval2.data = static_cast<const char*>(systemId_qb.constData());
			const char* callback_ret = qxmlstreamentityresolver_resolveentity_callback(this, cbval1, cbval2);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString resolveUndeclaredEntity(const QString& name) override {
		if (qxmlstreamentityresolver_resolveundeclaredentity_isbase) {
			qxmlstreamentityresolver_resolveundeclaredentity_isbase = false;
			return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
		} else if (qxmlstreamentityresolver_resolveundeclaredentity_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			const char* callback_ret = qxmlstreamentityresolver_resolveundeclaredentity_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
		}
	}
};

#endif


