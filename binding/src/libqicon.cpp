#include <QIcon>
#include <QIconEngine>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWindow>
#include <qicon.h>
#include "libqicon.h"
#include "libqicon.hxx"

QIcon* QIcon_new() {
	 return new QIcon();
}

QIcon* QIcon_new2(const QPixmap* pixmap) {
	 return new QIcon(*pixmap);
}

QIcon* QIcon_new3(const QIcon* other) {
	 return new QIcon(*other);
}

QIcon* QIcon_new4(const libqt_string fileName) {
	 return new QIcon(QString::fromUtf8(fileName.data, fileName.len));
}

QIcon* QIcon_new5(QIconEngine* engine) {
	 return new QIcon(engine);
}

void QIcon_OperatorAssign(QIcon* self, const QIcon* other) {
	self->operator=(*other);
}

void QIcon_Swap(QIcon* self, QIcon* other) {
	self->swap(*other);
}

QVariant* QIcon_OperatorQVariant(const QIcon* self) {
	return new QVariant(self->operator QVariant());
}

QPixmap* QIcon_Pixmap(const QIcon* self, const QSize* size) {
	return new QPixmap(self->pixmap(*size));
}

QPixmap* QIcon_Pixmap2(const QIcon* self, int w, int h) {
	return new QPixmap(self->pixmap(w, h));
}

QPixmap* QIcon_Pixmap3(const QIcon* self, int extent) {
	return new QPixmap(self->pixmap(extent));
}

QPixmap* QIcon_Pixmap4(const QIcon* self, const QSize* size, double devicePixelRatio) {
	return new QPixmap(self->pixmap(*size, devicePixelRatio));
}

QPixmap* QIcon_Pixmap5(const QIcon* self, QWindow* window, const QSize* size) {
	return new QPixmap(self->pixmap(window, *size));
}

QSize* QIcon_ActualSize(const QIcon* self, const QSize* size) {
	return new QSize(self->actualSize(*size));
}

QSize* QIcon_ActualSize2(const QIcon* self, QWindow* window, const QSize* size) {
	return new QSize(self->actualSize(window, *size));
}

libqt_string QIcon_Name(const QIcon* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QIcon_Paint(const QIcon* self, QPainter* painter, const QRect* rect) {
	self->paint(painter, *rect);
}

void QIcon_Paint2(const QIcon* self, QPainter* painter, int x, int y, int w, int h) {
	self->paint(painter, x, y, w, h);
}

bool QIcon_IsNull(const QIcon* self) {
	return self->isNull();
}

bool QIcon_IsDetached(const QIcon* self) {
	return self->isDetached();
}

void QIcon_Detach(QIcon* self) {
	self->detach();
}

long long QIcon_CacheKey(const QIcon* self) {
	return self->cacheKey();
}

void QIcon_AddPixmap(QIcon* self, const QPixmap* pixmap) {
	self->addPixmap(*pixmap);
}

void QIcon_AddFile(QIcon* self, const libqt_string fileName) {
	self->addFile(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_list QIcon_AvailableSizes(const QIcon* self) {
	return self->availableSizes();
}

void QIcon_SetIsMask(QIcon* self, bool isMask) {
	self->setIsMask(isMask);
}

bool QIcon_IsMask(const QIcon* self) {
	return self->isMask();
}

QIcon* QIcon_FromTheme(const libqt_string name) {
	return new QIcon(QIcon::fromTheme(QString::fromUtf8(name.data, name.len)));
}

QIcon* QIcon_FromTheme2(const libqt_string name, const QIcon* fallback) {
	return new QIcon(QIcon::fromTheme(QString::fromUtf8(name.data, name.len), *fallback));
}

bool QIcon_HasThemeIcon(const libqt_string name) {
	return QIcon::hasThemeIcon(QString::fromUtf8(name.data, name.len));
}

QIcon* QIcon_FromTheme3(int icon) {
	return new QIcon(QIcon::fromTheme(static_cast<QIcon::ThemeIcon>(icon)));
}

QIcon* QIcon_FromTheme4(int icon, const QIcon* fallback) {
	return new QIcon(QIcon::fromTheme(static_cast<QIcon::ThemeIcon>(icon), *fallback));
}

bool QIcon_HasThemeIcon2(int icon) {
	return QIcon::hasThemeIcon(static_cast<QIcon::ThemeIcon>(icon));
}

libqt_list QIcon_ThemeSearchPaths() {
	return QIcon::themeSearchPaths();
}

void QIcon_SetThemeSearchPaths(const libqt_list searchpath) {
	QIcon::setThemeSearchPaths(*searchpath);
}

libqt_list QIcon_FallbackSearchPaths() {
	return QIcon::fallbackSearchPaths();
}

void QIcon_SetFallbackSearchPaths(const libqt_list paths) {
	QIcon::setFallbackSearchPaths(*paths);
}

libqt_string QIcon_ThemeName() {
	QString _ret = QIcon::themeName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QIcon_SetThemeName(const libqt_string path) {
	QIcon::setThemeName(QString::fromUtf8(path.data, path.len));
}

libqt_string QIcon_FallbackThemeName() {
	QString _ret = QIcon::fallbackThemeName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QIcon_SetFallbackThemeName(const libqt_string name) {
	QIcon::setFallbackThemeName(QString::fromUtf8(name.data, name.len));
}

QIconPrivate** QIcon_DataPtr(QIcon* self) {
	return self->data_ptr();
}

QPixmap* QIcon_Pixmap22(const QIcon* self, const QSize* size, int mode) {
	return new QPixmap(self->pixmap(*size, static_cast<QLCDNumber::Mode>(mode)));
}

QPixmap* QIcon_Pixmap32(const QIcon* self, const QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(*size, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state)));
}

QPixmap* QIcon_Pixmap33(const QIcon* self, int w, int h, int mode) {
	return new QPixmap(self->pixmap(w, h, static_cast<QLCDNumber::Mode>(mode)));
}

QPixmap* QIcon_Pixmap42(const QIcon* self, int w, int h, int mode, int state) {
	return new QPixmap(self->pixmap(w, h, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state)));
}

QPixmap* QIcon_Pixmap23(const QIcon* self, int extent, int mode) {
	return new QPixmap(self->pixmap(extent, static_cast<QLCDNumber::Mode>(mode)));
}

QPixmap* QIcon_Pixmap34(const QIcon* self, int extent, int mode, int state) {
	return new QPixmap(self->pixmap(extent, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state)));
}

QPixmap* QIcon_Pixmap35(const QIcon* self, const QSize* size, double devicePixelRatio, int mode) {
	return new QPixmap(self->pixmap(*size, devicePixelRatio, static_cast<QLCDNumber::Mode>(mode)));
}

QPixmap* QIcon_Pixmap43(const QIcon* self, const QSize* size, double devicePixelRatio, int mode, int state) {
	return new QPixmap(self->pixmap(*size, devicePixelRatio, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state)));
}

QPixmap* QIcon_Pixmap36(const QIcon* self, QWindow* window, const QSize* size, int mode) {
	return new QPixmap(self->pixmap(window, *size, static_cast<QLCDNumber::Mode>(mode)));
}

QPixmap* QIcon_Pixmap44(const QIcon* self, QWindow* window, const QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(window, *size, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state)));
}

QSize* QIcon_ActualSize22(const QIcon* self, const QSize* size, int mode) {
	return new QSize(self->actualSize(*size, static_cast<QLCDNumber::Mode>(mode)));
}

QSize* QIcon_ActualSize3(const QIcon* self, const QSize* size, int mode, int state) {
	return new QSize(self->actualSize(*size, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state)));
}

QSize* QIcon_ActualSize32(const QIcon* self, QWindow* window, const QSize* size, int mode) {
	return new QSize(self->actualSize(window, *size, static_cast<QLCDNumber::Mode>(mode)));
}

QSize* QIcon_ActualSize4(const QIcon* self, QWindow* window, const QSize* size, int mode, int state) {
	return new QSize(self->actualSize(window, *size, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state)));
}

void QIcon_Paint3(const QIcon* self, QPainter* painter, const QRect* rect, int alignment) {
	self->paint(painter, *rect, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QIcon_Paint4(const QIcon* self, QPainter* painter, const QRect* rect, int alignment, int mode) {
	self->paint(painter, *rect, static_cast<QFlags<Qt::AlignmentFlag>>(alignment), static_cast<QLCDNumber::Mode>(mode));
}

void QIcon_Paint5(const QIcon* self, QPainter* painter, const QRect* rect, int alignment, int mode, int state) {
	self->paint(painter, *rect, static_cast<QFlags<Qt::AlignmentFlag>>(alignment), static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state));
}

void QIcon_Paint6(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment) {
	self->paint(painter, x, y, w, h, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QIcon_Paint7(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode) {
	self->paint(painter, x, y, w, h, static_cast<QFlags<Qt::AlignmentFlag>>(alignment), static_cast<QLCDNumber::Mode>(mode));
}

void QIcon_Paint8(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode, int state) {
	self->paint(painter, x, y, w, h, static_cast<QFlags<Qt::AlignmentFlag>>(alignment), static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state));
}

void QIcon_AddPixmap2(QIcon* self, const QPixmap* pixmap, int mode) {
	self->addPixmap(*pixmap, static_cast<QLCDNumber::Mode>(mode));
}

void QIcon_AddPixmap3(QIcon* self, const QPixmap* pixmap, int mode, int state) {
	self->addPixmap(*pixmap, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state));
}

void QIcon_AddFile2(QIcon* self, const libqt_string fileName, const QSize* size) {
	self->addFile(QString::fromUtf8(fileName.data, fileName.len), *size);
}

void QIcon_AddFile3(QIcon* self, const libqt_string fileName, const QSize* size, int mode) {
	self->addFile(QString::fromUtf8(fileName.data, fileName.len), *size, static_cast<QLCDNumber::Mode>(mode));
}

void QIcon_AddFile4(QIcon* self, const libqt_string fileName, const QSize* size, int mode, int state) {
	self->addFile(QString::fromUtf8(fileName.data, fileName.len), *size, static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state));
}

libqt_list QIcon_AvailableSizes1(const QIcon* self, int mode) {
	return self->availableSizes(static_cast<QLCDNumber::Mode>(mode));
}

libqt_list QIcon_AvailableSizes2(const QIcon* self, int mode, int state) {
	return self->availableSizes(static_cast<QLCDNumber::Mode>(mode), static_cast<QFlags<QStyle::StateFlag>>(state));
}

void QIcon_Delete(QIcon* self) {
    delete self;
}

