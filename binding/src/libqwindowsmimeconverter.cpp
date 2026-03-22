#include <QMetaType>
#include <QMimeData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <QWindowsMimeConverter>
#include <qwindowsmimeconverter.h>
#include "libqwindowsmimeconverter.h"
#include "libqwindowsmimeconverter.hxx"

QWindowsMimeConverter* QWindowsMimeConverter_new() {
	 return new VirtualQWindowsMimeConverter();
}

int QWindowsMimeConverter_RegisterMimeType(const libqt_string mimeType) {
	return QWindowsMimeConverter::registerMimeType(QString::fromUtf8(mimeType.data, mimeType.len));
}

bool QWindowsMimeConverter_CanConvertFromMime(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc, const QMimeData* mimeData) {
	return self->canConvertFromMime(*formatetc, mimeData);
}

bool QWindowsMimeConverter_ConvertFromMime(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc, const QMimeData* mimeData, tagSTGMEDIUM* pmedium) {
	return self->convertFromMime(*formatetc, mimeData, pmedium);
}

libqt_list QWindowsMimeConverter_FormatsForMime(const QWindowsMimeConverter* self, const libqt_string mimeType, const QMimeData* mimeData) {
	auto _ret = self->formatsForMime(QString::fromUtf8(mimeType.data, mimeType.len), mimeData);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QWindowsMimeConverter_CanConvertToMime(const QWindowsMimeConverter* self, const libqt_string mimeType, IDataObject* pDataObj) {
	return self->canConvertToMime(QString::fromUtf8(mimeType.data, mimeType.len), pDataObj);
}

QVariant* QWindowsMimeConverter_ConvertToMime(const QWindowsMimeConverter* self, const libqt_string mimeType, IDataObject* pDataObj, QMetaType* preferredType) {
	return new QVariant(self->convertToMime(QString::fromUtf8(mimeType.data, mimeType.len), pDataObj, *preferredType));
}

libqt_string QWindowsMimeConverter_MimeForFormat(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc) {
	QString _ret = self->mimeForFormat(*formatetc);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
bool QWindowsMimeConverter_QBaseCanConvertFromMime(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc, const QMimeData* mimeData) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_CanConvertFromMime_IsBase(true);
	return vqwindowsmimeconverter->canConvertFromMime(*formatetc, mimeData);
}
}

// Auxiliary method to allow providing re-implementation
void QWindowsMimeConverter_OnCanConvertFromMime(const QWindowsMimeConverter* self, intptr_t slot) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_CanConvertFromMime_Callback(reinterpret_cast<VirtualQWindowsMimeConverter::QWindowsMimeConverter_CanConvertFromMime_Callback>(slot));
}
}

// Base class handler implementation
bool QWindowsMimeConverter_QBaseConvertFromMime(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc, const QMimeData* mimeData, tagSTGMEDIUM* pmedium) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_ConvertFromMime_IsBase(true);
	return vqwindowsmimeconverter->convertFromMime(*formatetc, mimeData, pmedium);
}
}

// Auxiliary method to allow providing re-implementation
void QWindowsMimeConverter_OnConvertFromMime(const QWindowsMimeConverter* self, intptr_t slot) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_ConvertFromMime_Callback(reinterpret_cast<VirtualQWindowsMimeConverter::QWindowsMimeConverter_ConvertFromMime_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QWindowsMimeConverter_QBaseFormatsForMime(const QWindowsMimeConverter* self, const libqt_string mimeType, const QMimeData* mimeData) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_FormatsForMime_IsBase(true);
	auto _ret = vqwindowsmimeconverter->formatsForMime(QString::fromUtf8(mimeType.data, mimeType.len), mimeData);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QWindowsMimeConverter_OnFormatsForMime(const QWindowsMimeConverter* self, intptr_t slot) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_FormatsForMime_Callback(reinterpret_cast<VirtualQWindowsMimeConverter::QWindowsMimeConverter_FormatsForMime_Callback>(slot));
}
}

// Base class handler implementation
bool QWindowsMimeConverter_QBaseCanConvertToMime(const QWindowsMimeConverter* self, const libqt_string mimeType, IDataObject* pDataObj) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_CanConvertToMime_IsBase(true);
	return vqwindowsmimeconverter->canConvertToMime(QString::fromUtf8(mimeType.data, mimeType.len), pDataObj);
}
}

// Auxiliary method to allow providing re-implementation
void QWindowsMimeConverter_OnCanConvertToMime(const QWindowsMimeConverter* self, intptr_t slot) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_CanConvertToMime_Callback(reinterpret_cast<VirtualQWindowsMimeConverter::QWindowsMimeConverter_CanConvertToMime_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QWindowsMimeConverter_QBaseConvertToMime(const QWindowsMimeConverter* self, const libqt_string mimeType, IDataObject* pDataObj, QMetaType* preferredType) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_ConvertToMime_IsBase(true);
	return new QVariant(vqwindowsmimeconverter->convertToMime(QString::fromUtf8(mimeType.data, mimeType.len), pDataObj, *preferredType));
}
}

// Auxiliary method to allow providing re-implementation
void QWindowsMimeConverter_OnConvertToMime(const QWindowsMimeConverter* self, intptr_t slot) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_ConvertToMime_Callback(reinterpret_cast<VirtualQWindowsMimeConverter::QWindowsMimeConverter_ConvertToMime_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QWindowsMimeConverter_QBaseMimeForFormat(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_MimeForFormat_IsBase(true);
	QString _ret = vqwindowsmimeconverter->mimeForFormat(*formatetc);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QWindowsMimeConverter_OnMimeForFormat(const QWindowsMimeConverter* self, intptr_t slot) {
	auto* vqwindowsmimeconverter = dynamic_cast<const VirtualQWindowsMimeConverter*>(self);
	if (vqwindowsmimeconverter && vqwindowsmimeconverter->isVirtualQWindowsMimeConverter) {
vqwindowsmimeconverter->setQWindowsMimeConverter_MimeForFormat_Callback(reinterpret_cast<VirtualQWindowsMimeConverter::QWindowsMimeConverter_MimeForFormat_Callback>(slot));
}
}

void QWindowsMimeConverter_Delete(QWindowsMimeConverter* self) {
    delete self;
}

