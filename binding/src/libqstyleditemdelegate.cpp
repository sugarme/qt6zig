#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QEvent>
#include <QItemEditorFactory>
#include <QLocale>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionViewItem>
#include <QStyledItemDelegate>
#include <QVariant>
#include <QWidget>
#include <qstyleditemdelegate.h>
#include "libqstyleditemdelegate.h"
#include "libqstyleditemdelegate.hxx"

QStyledItemDelegate* QStyledItemDelegate_new() {
	 return new VirtualQStyledItemDelegate();
}

QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent) {
	 return new VirtualQStyledItemDelegate(parent);
}

libqt_string QStyledItemDelegate_Tr(const char* s) {
	QString _ret = QStyledItemDelegate::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self) {
	return self->itemEditorFactory();
}

void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

libqt_string QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale) {
	QString _ret = self->displayText(*value, *locale);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStyledItemDelegate_Tr2(const char* s, const char* c) {
	QString _ret = QStyledItemDelegate::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStyledItemDelegate_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStyledItemDelegate::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QStyledItemDelegate_QBasePaint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_Paint_IsBase(true);
	vqstyleditemdelegate->paint(painter, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnPaint(const QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_Paint_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Paint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QStyledItemDelegate_QBaseSizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_SizeHint_IsBase(true);
	return new QSize(vqstyleditemdelegate->sizeHint(*option, *index));
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSizeHint(const QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QWidget* QStyledItemDelegate_QBaseCreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_CreateEditor_IsBase(true);
	return vqstyleditemdelegate->createEditor(parent, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnCreateEditor(const QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_CreateEditor_Callback>(slot));
}
}

// Base class handler implementation
void QStyledItemDelegate_QBaseSetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_SetEditorData_IsBase(true);
	vqstyleditemdelegate->setEditorData(editor, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSetEditorData(const QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SetEditorData_Callback>(slot));
}
}

// Base class handler implementation
void QStyledItemDelegate_QBaseSetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_SetModelData_IsBase(true);
	vqstyleditemdelegate->setModelData(editor, model, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSetModelData(const QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SetModelData_Callback>(slot));
}
}

// Base class handler implementation
void QStyledItemDelegate_QBaseUpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_UpdateEditorGeometry_IsBase(true);
	vqstyleditemdelegate->updateEditorGeometry(editor, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnUpdateEditorGeometry(const QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_UpdateEditorGeometry_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QStyledItemDelegate_QBaseDisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_DisplayText_IsBase(true);
	QString _ret = vqstyleditemdelegate->displayText(*value, *locale);
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
void QStyledItemDelegate_OnDisplayText(const QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_DisplayText_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DisplayText_Callback>(slot));
}
}

// Derived class handler implementation
void QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
	vqstyleditemdelegate->initStyleOption(option, *index);
	} else {
	self->QStyledItemDelegate::initStyleOption(option, *index);
}
}

// Base class handler implementation
void QStyledItemDelegate_QBaseInitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_InitStyleOption_IsBase(true);
	vqstyleditemdelegate->initStyleOption(option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnInitStyleOption(const QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_InitStyleOption_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
bool QStyledItemDelegate_EventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event) {
	auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
	return vqstyleditemdelegate->eventFilter(object, event);
	} else {
	return self->QStyledItemDelegate::eventFilter(object, event);
}
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseEventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event) {
	auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_EventFilter_IsBase(true);
	return vqstyleditemdelegate->eventFilter(object, event);
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEventFilter(QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
bool QStyledItemDelegate_EditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
	return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
	} else {
	return self->QStyledItemDelegate::editorEvent(event, model, *option, *index);
}
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseEditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_EditorEvent_IsBase(true);
	return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEditorEvent(QStyledItemDelegate* self, intptr_t slot) {
	auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
	if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
vqstyleditemdelegate->setQStyledItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_EditorEvent_Callback>(slot));
}
}

void QStyledItemDelegate_Delete(QStyledItemDelegate* self) {
    delete self;
}

