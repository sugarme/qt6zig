#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QEvent>
#include <QFont>
#include <QItemDelegate>
#include <QItemEditorFactory>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionViewItem>
#include <QVariant>
#include <QWidget>
#include <qitemdelegate.h>
#include "libqitemdelegate.h"
#include "libqitemdelegate.hxx"

QItemDelegate* QItemDelegate_new() {
	 return new VirtualQItemDelegate();
}

QItemDelegate* QItemDelegate_new2(QObject* parent) {
	 return new VirtualQItemDelegate(parent);
}

libqt_string QItemDelegate_Tr(const char* s) {
	QString _ret = QItemDelegate::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QItemDelegate_HasClipping(const QItemDelegate* self) {
	return self->hasClipping();
}

void QItemDelegate_SetClipping(QItemDelegate* self, bool clip) {
	self->setClipping(clip);
}

void QItemDelegate_Paint(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QItemDelegate_SizeHint(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QItemDelegate_CreateEditor(const QItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QItemDelegate_SetEditorData(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QItemDelegate_SetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QItemDelegate_UpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QItemDelegate_ItemEditorFactory(const QItemDelegate* self) {
	return self->itemEditorFactory();
}

void QItemDelegate_SetItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

libqt_string QItemDelegate_Tr2(const char* s, const char* c) {
	QString _ret = QItemDelegate::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QItemDelegate_Tr3(const char* s, const char* c, int n) {
	QString _ret = QItemDelegate::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QItemDelegate_QBasePaint(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_Paint_IsBase(true);
	vqitemdelegate->paint(painter, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnPaint(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_Paint_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Paint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QItemDelegate_QBaseSizeHint(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SizeHint_IsBase(true);
	return new QSize(vqitemdelegate->sizeHint(*option, *index));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSizeHint(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QWidget* QItemDelegate_QBaseCreateEditor(const QItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_CreateEditor_IsBase(true);
	return vqitemdelegate->createEditor(parent, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnCreateEditor(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_CreateEditor_Callback>(slot));
}
}

// Base class handler implementation
void QItemDelegate_QBaseSetEditorData(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SetEditorData_IsBase(true);
	vqitemdelegate->setEditorData(editor, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSetEditorData(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SetEditorData_Callback>(slot));
}
}

// Base class handler implementation
void QItemDelegate_QBaseSetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SetModelData_IsBase(true);
	vqitemdelegate->setModelData(editor, model, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSetModelData(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SetModelData_Callback>(slot));
}
}

// Base class handler implementation
void QItemDelegate_QBaseUpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_UpdateEditorGeometry_IsBase(true);
	vqitemdelegate->updateEditorGeometry(editor, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnUpdateEditorGeometry(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_UpdateEditorGeometry_Callback>(slot));
}
}

void QItemDelegate_Delete(QItemDelegate* self) {
    delete self;
}

