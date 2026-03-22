#include <QGraphicsItem>
#include <QGraphicsObject>
#include <QGraphicsSvgItem>
#include <QPainter>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionGraphicsItem>
#include <QSvgRenderer>
#include <QWidget>
#include <qgraphicssvgitem.h>
#include "libqgraphicssvgitem.h"
#include "libqgraphicssvgitem.hxx"

QGraphicsSvgItem* QGraphicsSvgItem_new() {
	 return new VirtualQGraphicsSvgItem();
}

QGraphicsSvgItem* QGraphicsSvgItem_new2(const libqt_string fileName) {
	 return new VirtualQGraphicsSvgItem(QString::fromUtf8(fileName.data, fileName.len));
}

QGraphicsSvgItem* QGraphicsSvgItem_new3(QGraphicsItem* parentItem) {
	 return new VirtualQGraphicsSvgItem(parentItem);
}

QGraphicsSvgItem* QGraphicsSvgItem_new4(const libqt_string fileName, QGraphicsItem* parentItem) {
	 return new VirtualQGraphicsSvgItem(QString::fromUtf8(fileName.data, fileName.len), parentItem);
}

libqt_string QGraphicsSvgItem_Tr(const char* s) {
	QString _ret = QGraphicsSvgItem::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsSvgItem_SetSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer) {
	self->setSharedRenderer(renderer);
}

QSvgRenderer* QGraphicsSvgItem_Renderer(const QGraphicsSvgItem* self) {
	return self->renderer();
}

void QGraphicsSvgItem_SetElementId(QGraphicsSvgItem* self, const libqt_string id) {
	self->setElementId(QString::fromUtf8(id.data, id.len));
}

libqt_string QGraphicsSvgItem_ElementId(const QGraphicsSvgItem* self) {
	QString _ret = self->elementId();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsSvgItem_SetCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled) {
	self->setCachingEnabled(cachingEnabled);
}

bool QGraphicsSvgItem_IsCachingEnabled(const QGraphicsSvgItem* self) {
	return self->isCachingEnabled();
}

void QGraphicsSvgItem_SetMaximumCacheSize(QGraphicsSvgItem* self, const QSize* size) {
	self->setMaximumCacheSize(*size);
}

QSize* QGraphicsSvgItem_MaximumCacheSize(const QGraphicsSvgItem* self) {
	return new QSize(self->maximumCacheSize());
}

QRectF* QGraphicsSvgItem_BoundingRect(const QGraphicsSvgItem* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsSvgItem_Paint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsSvgItem_Type(const QGraphicsSvgItem* self) {
	return self->type();
}

libqt_string QGraphicsSvgItem_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsSvgItem::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsSvgItem_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsSvgItem::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QRectF* QGraphicsSvgItem_QBaseBoundingRect(const QGraphicsSvgItem* self) {
	auto* vqgraphicssvgitem = dynamic_cast<const VirtualQGraphicsSvgItem*>(self);
	if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
vqgraphicssvgitem->setQGraphicsSvgItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicssvgitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnBoundingRect(const QGraphicsSvgItem* self, intptr_t slot) {
	auto* vqgraphicssvgitem = dynamic_cast<const VirtualQGraphicsSvgItem*>(self);
	if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
vqgraphicssvgitem->setQGraphicsSvgItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsSvgItem_QBasePaint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
	if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
vqgraphicssvgitem->setQGraphicsSvgItem_Paint_IsBase(true);
	vqgraphicssvgitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnPaint(QGraphicsSvgItem* self, intptr_t slot) {
	auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
	if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
vqgraphicssvgitem->setQGraphicsSvgItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsSvgItem_QBaseType(const QGraphicsSvgItem* self) {
	auto* vqgraphicssvgitem = dynamic_cast<const VirtualQGraphicsSvgItem*>(self);
	if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
vqgraphicssvgitem->setQGraphicsSvgItem_Type_IsBase(true);
	return vqgraphicssvgitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnType(const QGraphicsSvgItem* self, intptr_t slot) {
	auto* vqgraphicssvgitem = dynamic_cast<const VirtualQGraphicsSvgItem*>(self);
	if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
vqgraphicssvgitem->setQGraphicsSvgItem_Type_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Type_Callback>(slot));
}
}

void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self) {
    delete self;
}

