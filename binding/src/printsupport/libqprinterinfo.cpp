#include <QPageSize>
#include <QPrinter>
#include <QPrinterInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinterinfo.h>
#include "libqprinterinfo.h"
#include "libqprinterinfo.hxx"

QPrinterInfo* QPrinterInfo_new() {
	 return new QPrinterInfo();
}

QPrinterInfo* QPrinterInfo_new2(const QPrinterInfo* other) {
	 return new QPrinterInfo(*other);
}

QPrinterInfo* QPrinterInfo_new3(const QPrinter* printer) {
	 return new QPrinterInfo(*printer);
}

void QPrinterInfo_OperatorAssign(QPrinterInfo* self, const QPrinterInfo* other) {
	self->operator=(*other);
}

libqt_string QPrinterInfo_PrinterName(const QPrinterInfo* self) {
	QString _ret = self->printerName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPrinterInfo_Description(const QPrinterInfo* self) {
	QString _ret = self->description();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPrinterInfo_Location(const QPrinterInfo* self) {
	QString _ret = self->location();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPrinterInfo_MakeAndModel(const QPrinterInfo* self) {
	QString _ret = self->makeAndModel();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QPrinterInfo_IsNull(const QPrinterInfo* self) {
	return self->isNull();
}

bool QPrinterInfo_IsDefault(const QPrinterInfo* self) {
	return self->isDefault();
}

bool QPrinterInfo_IsRemote(const QPrinterInfo* self) {
	return self->isRemote();
}

int QPrinterInfo_State(const QPrinterInfo* self) {
	return self->state();
}

libqt_list QPrinterInfo_SupportedPageSizes(const QPrinterInfo* self) {
	return self->supportedPageSizes();
}

QPageSize* QPrinterInfo_DefaultPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->defaultPageSize());
}

bool QPrinterInfo_SupportsCustomPageSizes(const QPrinterInfo* self) {
	return self->supportsCustomPageSizes();
}

QPageSize* QPrinterInfo_MinimumPhysicalPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->minimumPhysicalPageSize());
}

QPageSize* QPrinterInfo_MaximumPhysicalPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->maximumPhysicalPageSize());
}

libqt_list QPrinterInfo_SupportedResolutions(const QPrinterInfo* self) {
	return self->supportedResolutions();
}

int QPrinterInfo_DefaultDuplexMode(const QPrinterInfo* self) {
	return self->defaultDuplexMode();
}

libqt_list QPrinterInfo_SupportedDuplexModes(const QPrinterInfo* self) {
	return self->supportedDuplexModes();
}

int QPrinterInfo_DefaultColorMode(const QPrinterInfo* self) {
	return self->defaultColorMode();
}

libqt_list QPrinterInfo_SupportedColorModes(const QPrinterInfo* self) {
	return self->supportedColorModes();
}

libqt_list QPrinterInfo_AvailablePrinterNames() {
	return QPrinterInfo::availablePrinterNames();
}

libqt_list QPrinterInfo_AvailablePrinters() {
	return QPrinterInfo::availablePrinters();
}

libqt_string QPrinterInfo_DefaultPrinterName() {
	QString _ret = QPrinterInfo::defaultPrinterName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QPrinterInfo* QPrinterInfo_DefaultPrinter() {
	return new QPrinterInfo(QPrinterInfo::defaultPrinter());
}

QPrinterInfo* QPrinterInfo_PrinterInfo(const libqt_string printerName) {
	return new QPrinterInfo(QPrinterInfo::printerInfo(QString::fromUtf8(printerName.data, printerName.len)));
}

void QPrinterInfo_Delete(QPrinterInfo* self) {
    delete self;
}

