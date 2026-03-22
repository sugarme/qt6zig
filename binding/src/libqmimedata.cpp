#include <QByteArray>
#include <QMetaType>
#include <QMimeData>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qmimedata.h>
#include "libqmimedata.h"
#include "libqmimedata.hxx"

QMimeData* QMimeData_new() {
	 return new VirtualQMimeData();
}

libqt_string QMimeData_Tr(const char* s) {
	QString _ret = QMimeData::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QMimeData_Urls(const QMimeData* self) {
	auto _ret = self->urls();
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

void QMimeData_SetUrls(QMimeData* self, const libqt_list urls) {
	self->setUrls(QList<QUrl>());
}

bool QMimeData_HasUrls(const QMimeData* self) {
	return self->hasUrls();
}

libqt_string QMimeData_Text(const QMimeData* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMimeData_SetText(QMimeData* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

bool QMimeData_HasText(const QMimeData* self) {
	return self->hasText();
}

libqt_string QMimeData_Html(const QMimeData* self) {
	QString _ret = self->html();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMimeData_SetHtml(QMimeData* self, const libqt_string html) {
	self->setHtml(QString::fromUtf8(html.data, html.len));
}

bool QMimeData_HasHtml(const QMimeData* self) {
	return self->hasHtml();
}

QVariant* QMimeData_ImageData(const QMimeData* self) {
	return new QVariant(self->imageData());
}

void QMimeData_SetImageData(QMimeData* self, const QVariant* image) {
	self->setImageData(*image);
}

bool QMimeData_HasImage(const QMimeData* self) {
	return self->hasImage();
}

QVariant* QMimeData_ColorData(const QMimeData* self) {
	return new QVariant(self->colorData());
}

void QMimeData_SetColorData(QMimeData* self, const QVariant* color) {
	self->setColorData(*color);
}

bool QMimeData_HasColor(const QMimeData* self) {
	return self->hasColor();
}

libqt_string QMimeData_Data(const QMimeData* self, const libqt_string mimetype) {
	QByteArray _qb = self->data(QString::fromUtf8(mimetype.data, mimetype.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMimeData_SetData(QMimeData* self, const libqt_string mimetype, const libqt_string data) {
	self->setData(QString::fromUtf8(mimetype.data, mimetype.len), QByteArray(data.data, data.len));
}

void QMimeData_RemoveFormat(QMimeData* self, const libqt_string mimetype) {
	self->removeFormat(QString::fromUtf8(mimetype.data, mimetype.len));
}

bool QMimeData_HasFormat(const QMimeData* self, const libqt_string mimetype) {
	return self->hasFormat(QString::fromUtf8(mimetype.data, mimetype.len));
}

libqt_list QMimeData_Formats(const QMimeData* self) {
	auto _ret = self->formats();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QMimeData_Clear(QMimeData* self) {
	self->clear();
}

libqt_string QMimeData_Tr2(const char* s, const char* c) {
	QString _ret = QMimeData::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMimeData_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMimeData::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
bool QMimeData_QBaseHasFormat(const QMimeData* self, const libqt_string mimetype) {
	auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
	if (vqmimedata && vqmimedata->isVirtualQMimeData) {
vqmimedata->setQMimeData_HasFormat_IsBase(true);
	return vqmimedata->hasFormat(QString::fromUtf8(mimetype.data, mimetype.len));
}
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnHasFormat(const QMimeData* self, intptr_t slot) {
	auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
	if (vqmimedata && vqmimedata->isVirtualQMimeData) {
vqmimedata->setQMimeData_HasFormat_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_HasFormat_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QMimeData_QBaseFormats(const QMimeData* self) {
	auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
	if (vqmimedata && vqmimedata->isVirtualQMimeData) {
vqmimedata->setQMimeData_Formats_IsBase(true);
	auto _ret = vqmimedata->formats();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnFormats(const QMimeData* self, intptr_t slot) {
	auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
	if (vqmimedata && vqmimedata->isVirtualQMimeData) {
vqmimedata->setQMimeData_Formats_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_Formats_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QMimeData_RetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType) {
	auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
	if (vqmimedata && vqmimedata->isVirtualQMimeData) {
	return new QVariant(vqmimedata->retrieveData(QString::fromUtf8(mimetype.data, mimetype.len), *preferredType));
	} else {
	return new QVariant(self->QMimeData::retrieveData(QString::fromUtf8(mimetype.data, mimetype.len), *preferredType));
}
}

// Base class handler implementation
QVariant* QMimeData_QBaseRetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType) {
	auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
	if (vqmimedata && vqmimedata->isVirtualQMimeData) {
vqmimedata->setQMimeData_RetrieveData_IsBase(true);
	return new QVariant(vqmimedata->retrieveData(QString::fromUtf8(mimetype.data, mimetype.len), *preferredType));
}
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnRetrieveData(const QMimeData* self, intptr_t slot) {
	auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
	if (vqmimedata && vqmimedata->isVirtualQMimeData) {
vqmimedata->setQMimeData_RetrieveData_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_RetrieveData_Callback>(slot));
}
}

void QMimeData_Delete(QMimeData* self) {
    delete self;
}

