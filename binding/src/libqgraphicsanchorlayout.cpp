#include <QGraphicsAnchor>
#include <QGraphicsAnchorLayout>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QObject>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qgraphicsanchorlayout.h>
#include "libqgraphicsanchorlayout.h"
#include "libqgraphicsanchorlayout.hxx"

libqt_string QGraphicsAnchor_Tr(const char* s) {
	QString _ret = QGraphicsAnchor::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing) {
	self->setSpacing(spacing);
}

void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self) {
	self->unsetSpacing();
}

double QGraphicsAnchor_Spacing(const QGraphicsAnchor* self) {
	return self->spacing();
}

void QGraphicsAnchor_SetSizePolicy(QGraphicsAnchor* self, int policy) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(policy));
}

int QGraphicsAnchor_SizePolicy(const QGraphicsAnchor* self) {
	return self->sizePolicy();
}

libqt_string QGraphicsAnchor_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsAnchor::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsAnchor_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsAnchor::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsAnchor_Delete(QGraphicsAnchor* self) {
    delete self;
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new() {
	 return new VirtualQGraphicsAnchorLayout();
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent) {
	 return new VirtualQGraphicsAnchorLayout(parent);
}

QGraphicsAnchor* QGraphicsAnchorLayout_AddAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
	return self->addAnchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

QGraphicsAnchor* QGraphicsAnchorLayout_Anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
	return self->anchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

void QGraphicsAnchorLayout_AddCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstCorner, QGraphicsLayoutItem* secondItem, int secondCorner) {
	self->addCornerAnchors(firstItem, static_cast<Qt::Corner>(firstCorner), secondItem, static_cast<Qt::Corner>(secondCorner));
}

void QGraphicsAnchorLayout_AddAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem) {
	self->addAnchors(firstItem, secondItem);
}

void QGraphicsAnchorLayout_SetHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setHorizontalSpacing(spacing);
}

void QGraphicsAnchorLayout_SetVerticalSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setVerticalSpacing(spacing);
}

void QGraphicsAnchorLayout_SetSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setSpacing(spacing);
}

double QGraphicsAnchorLayout_HorizontalSpacing(const QGraphicsAnchorLayout* self) {
	return self->horizontalSpacing();
}

double QGraphicsAnchorLayout_VerticalSpacing(const QGraphicsAnchorLayout* self) {
	return self->verticalSpacing();
}

void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index) {
	self->removeAt(index);
}

void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, const QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsAnchorLayout_Count(const QGraphicsAnchorLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(const QGraphicsAnchorLayout* self, int index) {
	return self->itemAt(index);
}

void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self) {
	self->invalidate();
}

void QGraphicsAnchorLayout_AddAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations) {
	self->addAnchors(firstItem, secondItem, static_cast<QFlags<Qt::Orientation>>(orientations));
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseRemoveAt(QGraphicsAnchorLayout* self, int index) {
	auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_RemoveAt_IsBase(true);
	vqgraphicsanchorlayout->removeAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnRemoveAt(QGraphicsAnchorLayout* self, intptr_t slot) {
	auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_RemoveAt_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseSetGeometry(QGraphicsAnchorLayout* self, const QRectF* rect) {
	auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGeometry_IsBase(true);
	vqgraphicsanchorlayout->setGeometry(*rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSetGeometry(QGraphicsAnchorLayout* self, intptr_t slot) {
	auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsAnchorLayout_QBaseCount(const QGraphicsAnchorLayout* self) {
	auto* vqgraphicsanchorlayout = dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Count_IsBase(true);
	return vqgraphicsanchorlayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnCount(const QGraphicsAnchorLayout* self, intptr_t slot) {
	auto* vqgraphicsanchorlayout = dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_Count_Callback>(slot));
}
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsAnchorLayout_QBaseItemAt(const QGraphicsAnchorLayout* self, int index) {
	auto* vqgraphicsanchorlayout = dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_ItemAt_IsBase(true);
	return vqgraphicsanchorlayout->itemAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnItemAt(const QGraphicsAnchorLayout* self, intptr_t slot) {
	auto* vqgraphicsanchorlayout = dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_ItemAt_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_ItemAt_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseInvalidate(QGraphicsAnchorLayout* self) {
	auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Invalidate_IsBase(true);
	vqgraphicsanchorlayout->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnInvalidate(QGraphicsAnchorLayout* self, intptr_t slot) {
	auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_Invalidate_Callback>(slot));
}
}

// Derived class handler implementation
QSizeF* QGraphicsAnchorLayout_SizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint) {
	auto* vqgraphicsanchorlayout = dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
	return new QSizeF(vqgraphicsanchorlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
	} else {
	return new QSizeF(self->QGraphicsAnchorLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Base class handler implementation
QSizeF* QGraphicsAnchorLayout_QBaseSizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint) {
	auto* vqgraphicsanchorlayout = dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SizeHint_IsBase(true);
	return new QSizeF(vqgraphicsanchorlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSizeHint(const QGraphicsAnchorLayout* self, intptr_t slot) {
	auto* vqgraphicsanchorlayout = dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self);
	if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SizeHint_Callback>(slot));
}
}

void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self) {
    delete self;
}

