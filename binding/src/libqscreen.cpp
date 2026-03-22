#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QScreen>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTransform>
#include <qscreen.h>
#include "libqscreen.h"
#include "libqscreen.hxx"

libqt_string QScreen_Tr(const char* s) {
	QString _ret = QScreen::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScreen_Name(const QScreen* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScreen_Manufacturer(const QScreen* self) {
	QString _ret = self->manufacturer();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScreen_Model(const QScreen* self) {
	QString _ret = self->model();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScreen_SerialNumber(const QScreen* self) {
	QString _ret = self->serialNumber();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QScreen_Depth(const QScreen* self) {
	return self->depth();
}

QSize* QScreen_Size(const QScreen* self) {
	return new QSize(self->size());
}

QRect* QScreen_Geometry(const QScreen* self) {
	return new QRect(self->geometry());
}

QSizeF* QScreen_PhysicalSize(const QScreen* self) {
	return new QSizeF(self->physicalSize());
}

double QScreen_PhysicalDotsPerInchX(const QScreen* self) {
	return self->physicalDotsPerInchX();
}

double QScreen_PhysicalDotsPerInchY(const QScreen* self) {
	return self->physicalDotsPerInchY();
}

double QScreen_PhysicalDotsPerInch(const QScreen* self) {
	return self->physicalDotsPerInch();
}

double QScreen_LogicalDotsPerInchX(const QScreen* self) {
	return self->logicalDotsPerInchX();
}

double QScreen_LogicalDotsPerInchY(const QScreen* self) {
	return self->logicalDotsPerInchY();
}

double QScreen_LogicalDotsPerInch(const QScreen* self) {
	return self->logicalDotsPerInch();
}

double QScreen_DevicePixelRatio(const QScreen* self) {
	return self->devicePixelRatio();
}

QSize* QScreen_AvailableSize(const QScreen* self) {
	return new QSize(self->availableSize());
}

QRect* QScreen_AvailableGeometry(const QScreen* self) {
	return new QRect(self->availableGeometry());
}

libqt_list QScreen_VirtualSiblings(const QScreen* self) {
	auto _ret = self->virtualSiblings();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QScreen* QScreen_VirtualSiblingAt(QScreen* self, QPoint* point) {
	return self->virtualSiblingAt(*point);
}

QSize* QScreen_VirtualSize(const QScreen* self) {
	return new QSize(self->virtualSize());
}

QRect* QScreen_VirtualGeometry(const QScreen* self) {
	return new QRect(self->virtualGeometry());
}

QSize* QScreen_AvailableVirtualSize(const QScreen* self) {
	return new QSize(self->availableVirtualSize());
}

QRect* QScreen_AvailableVirtualGeometry(const QScreen* self) {
	return new QRect(self->availableVirtualGeometry());
}

int QScreen_PrimaryOrientation(const QScreen* self) {
	return self->primaryOrientation();
}

int QScreen_Orientation(const QScreen* self) {
	return self->orientation();
}

int QScreen_NativeOrientation(const QScreen* self) {
	return self->nativeOrientation();
}

int QScreen_AngleBetween(const QScreen* self, int a, int b) {
	return self->angleBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b));
}

QTransform* QScreen_TransformBetween(const QScreen* self, int a, int b, const QRect* target) {
	return new QTransform(self->transformBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *target));
}

QRect* QScreen_MapBetween(const QScreen* self, int a, int b, const QRect* rect) {
	return new QRect(self->mapBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *rect));
}

bool QScreen_IsPortrait(const QScreen* self, int orientation) {
	return self->isPortrait(static_cast<Qt::ScreenOrientation>(orientation));
}

bool QScreen_IsLandscape(const QScreen* self, int orientation) {
	return self->isLandscape(static_cast<Qt::ScreenOrientation>(orientation));
}

QPixmap* QScreen_GrabWindow(QScreen* self) {
	return new QPixmap(self->grabWindow());
}

double QScreen_RefreshRate(const QScreen* self) {
	return self->refreshRate();
}

void QScreen_GeometryChanged(QScreen* self, const QRect* geometry) {
	self->geometryChanged(*geometry);
}

void QScreen_Connect_GeometryChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, const QRect*) = reinterpret_cast<void (*)(QScreen*, const QRect*)>(slot);
    QScreen::connect(self, &QScreen::geometryChanged, [self, slotFunc](const QRect& geometry) {
	slotFunc(self, geometry);
    });
}

void QScreen_AvailableGeometryChanged(QScreen* self, const QRect* geometry) {
	self->availableGeometryChanged(*geometry);
}

void QScreen_Connect_AvailableGeometryChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, const QRect*) = reinterpret_cast<void (*)(QScreen*, const QRect*)>(slot);
    QScreen::connect(self, &QScreen::availableGeometryChanged, [self, slotFunc](const QRect& geometry) {
	slotFunc(self, geometry);
    });
}

void QScreen_PhysicalSizeChanged(QScreen* self, const QSizeF* size) {
	self->physicalSizeChanged(*size);
}

void QScreen_Connect_PhysicalSizeChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, const QSizeF*) = reinterpret_cast<void (*)(QScreen*, const QSizeF*)>(slot);
    QScreen::connect(self, &QScreen::physicalSizeChanged, [self, slotFunc](const QSizeF& size) {
	slotFunc(self, size);
    });
}

void QScreen_PhysicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->physicalDotsPerInchChanged(dpi);
}

void QScreen_Connect_PhysicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, double) = reinterpret_cast<void (*)(QScreen*, double)>(slot);
    QScreen::connect(self, &QScreen::physicalDotsPerInchChanged, [self, slotFunc](qreal dpi) {
	slotFunc(self, dpi);
    });
}

void QScreen_LogicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->logicalDotsPerInchChanged(dpi);
}

void QScreen_Connect_LogicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, double) = reinterpret_cast<void (*)(QScreen*, double)>(slot);
    QScreen::connect(self, &QScreen::logicalDotsPerInchChanged, [self, slotFunc](qreal dpi) {
	slotFunc(self, dpi);
    });
}

void QScreen_VirtualGeometryChanged(QScreen* self, const QRect* rect) {
	self->virtualGeometryChanged(*rect);
}

void QScreen_Connect_VirtualGeometryChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, const QRect*) = reinterpret_cast<void (*)(QScreen*, const QRect*)>(slot);
    QScreen::connect(self, &QScreen::virtualGeometryChanged, [self, slotFunc](const QRect& rect) {
	slotFunc(self, rect);
    });
}

void QScreen_PrimaryOrientationChanged(QScreen* self, int orientation) {
	self->primaryOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_Connect_PrimaryOrientationChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, int) = reinterpret_cast<void (*)(QScreen*, int)>(slot);
    QScreen::connect(self, &QScreen::primaryOrientationChanged, [self, slotFunc](Qt::ScreenOrientation orientation) {
	slotFunc(self, orientation);
    });
}

void QScreen_OrientationChanged(QScreen* self, int orientation) {
	self->orientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_Connect_OrientationChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, int) = reinterpret_cast<void (*)(QScreen*, int)>(slot);
    QScreen::connect(self, &QScreen::orientationChanged, [self, slotFunc](Qt::ScreenOrientation orientation) {
	slotFunc(self, orientation);
    });
}

void QScreen_RefreshRateChanged(QScreen* self, double refreshRate) {
	self->refreshRateChanged(refreshRate);
}

void QScreen_Connect_RefreshRateChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, double) = reinterpret_cast<void (*)(QScreen*, double)>(slot);
    QScreen::connect(self, &QScreen::refreshRateChanged, [self, slotFunc](qreal refreshRate) {
	slotFunc(self, refreshRate);
    });
}

libqt_string QScreen_Tr2(const char* s, const char* c) {
	QString _ret = QScreen::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScreen_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScreen::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QPixmap* QScreen_GrabWindow1(QScreen* self, uintptr_t window) {
	return new QPixmap(self->grabWindow(window));
}

QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x) {
	return new QPixmap(self->grabWindow(window, x));
}

QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y) {
	return new QPixmap(self->grabWindow(window, x, y));
}

QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w) {
	return new QPixmap(self->grabWindow(window, x, y, w));
}

QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h) {
	return new QPixmap(self->grabWindow(window, x, y, w, h));
}

void QScreen_Delete(QScreen* self) {
    delete self;
}

