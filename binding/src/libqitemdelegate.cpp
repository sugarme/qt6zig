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

// Derived class handler implementation
void QItemDelegate_DrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	vqitemdelegate->drawDisplay(painter, *option, *rect, QString::fromUtf8(text.data, text.len));
	} else {
	self->QItemDelegate::drawDisplay(painter, *option, *rect, QString::fromUtf8(text.data, text.len));
}
}

// Base class handler implementation
void QItemDelegate_QBaseDrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawDisplay_IsBase(true);
	vqitemdelegate->drawDisplay(painter, *option, *rect, QString::fromUtf8(text.data, text.len));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawDisplay(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawDisplay_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawDisplay_Callback>(slot));
}
}

// Derived class handler implementation
void QItemDelegate_DrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	vqitemdelegate->drawDecoration(painter, *option, *rect, *pixmap);
	} else {
	self->QItemDelegate::drawDecoration(painter, *option, *rect, *pixmap);
}
}

// Base class handler implementation
void QItemDelegate_QBaseDrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawDecoration_IsBase(true);
	vqitemdelegate->drawDecoration(painter, *option, *rect, *pixmap);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawDecoration(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawDecoration_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawDecoration_Callback>(slot));
}
}

// Derived class handler implementation
void QItemDelegate_DrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	vqitemdelegate->drawFocus(painter, *option, *rect);
	} else {
	self->QItemDelegate::drawFocus(painter, *option, *rect);
}
}

// Base class handler implementation
void QItemDelegate_QBaseDrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawFocus_IsBase(true);
	vqitemdelegate->drawFocus(painter, *option, *rect);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawFocus(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawFocus_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawFocus_Callback>(slot));
}
}

// Derived class handler implementation
void QItemDelegate_DrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	vqitemdelegate->drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
	} else {
	self->QItemDelegate::drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
}
}

// Base class handler implementation
void QItemDelegate_QBaseDrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawCheck_IsBase(true);
	vqitemdelegate->drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawCheck(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawCheck_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawCheck_Callback>(slot));
}
}

// Derived class handler implementation
bool QItemDelegate_EventFilter(QItemDelegate* self, QObject* object, QEvent* event) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	return vqitemdelegate->eventFilter(object, event);
	} else {
	return self->QItemDelegate::eventFilter(object, event);
}
}

// Base class handler implementation
bool QItemDelegate_QBaseEventFilter(QItemDelegate* self, QObject* object, QEvent* event) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_EventFilter_IsBase(true);
	return vqitemdelegate->eventFilter(object, event);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnEventFilter(QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
bool QItemDelegate_EditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	return vqitemdelegate->editorEvent(event, model, *option, *index);
	} else {
	return self->QItemDelegate::editorEvent(event, model, *option, *index);
}
}

// Base class handler implementation
bool QItemDelegate_QBaseEditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_EditorEvent_IsBase(true);
	return vqitemdelegate->editorEvent(event, model, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnEditorEvent(QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_EditorEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QItemDelegate_DrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	vqitemdelegate->drawBackground(painter, *option, *index);
	} else {
	self->QItemDelegate::drawBackground(painter, *option, *index);
}
}

// Base class handler implementation
void QItemDelegate_QBaseDrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawBackground_IsBase(true);
	vqitemdelegate->drawBackground(painter, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawBackground(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DrawBackground_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawBackground_Callback>(slot));
}
}

// Derived class handler implementation
void QItemDelegate_DoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	vqitemdelegate->doLayout(*option, checkRect, iconRect, textRect, hint);
	} else {
	self->QItemDelegate::doLayout(*option, checkRect, iconRect, textRect, hint);
}
}

// Base class handler implementation
void QItemDelegate_QBaseDoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DoLayout_IsBase(true);
	vqitemdelegate->doLayout(*option, checkRect, iconRect, textRect, hint);
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDoLayout(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DoLayout_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DoLayout_Callback>(slot));
}
}

// Derived class handler implementation
QRect* QItemDelegate_Rect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	return new QRect(vqitemdelegate->rect(*option, *index, role));
	} else {
	return new QRect(self->QItemDelegate::rect(*option, *index, role));
}
}

// Base class handler implementation
QRect* QItemDelegate_QBaseRect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_Rect_IsBase(true);
	return new QRect(vqitemdelegate->rect(*option, *index, role));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnRect(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_Rect_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Rect_Callback>(slot));
}
}

// Derived class handler implementation
QStyleOptionViewItem* QItemDelegate_SetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	return new QStyleOptionViewItem(vqitemdelegate->setOptions(*index, *option));
	} else {
	return new QStyleOptionViewItem(self->QItemDelegate::setOptions(*index, *option));
}
}

// Base class handler implementation
QStyleOptionViewItem* QItemDelegate_QBaseSetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SetOptions_IsBase(true);
	return new QStyleOptionViewItem(vqitemdelegate->setOptions(*index, *option));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSetOptions(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SetOptions_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SetOptions_Callback>(slot));
}
}

// Derived class handler implementation
QPixmap* QItemDelegate_Decoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	return new QPixmap(vqitemdelegate->decoration(*option, *variant));
	} else {
	return new QPixmap(self->QItemDelegate::decoration(*option, *variant));
}
}

// Base class handler implementation
QPixmap* QItemDelegate_QBaseDecoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_Decoration_IsBase(true);
	return new QPixmap(vqitemdelegate->decoration(*option, *variant));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDecoration(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_Decoration_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Decoration_Callback>(slot));
}
}

// Derived class handler implementation
QPixmap* QItemDelegate_SelectedPixmap(QItemDelegate* self, const QPixmap* pixmap, const QPalette* palette, bool enabled) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	return new QPixmap(vqitemdelegate->selectedPixmap(*pixmap, *palette, enabled));
	} else {
	return new QPixmap(self->QItemDelegate::selectedPixmap(*pixmap, *palette, enabled));
}
}

// Base class handler implementation
QPixmap* QItemDelegate_QBaseSelectedPixmap(QItemDelegate* self, const QPixmap* pixmap, const QPalette* palette, bool enabled) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SelectedPixmap_IsBase(true);
	return new QPixmap(vqitemdelegate->selectedPixmap(*pixmap, *palette, enabled));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSelectedPixmap(QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_SelectedPixmap_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SelectedPixmap_Callback>(slot));
}
}

// Derived class handler implementation
QRect* QItemDelegate_DoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	return new QRect(vqitemdelegate->doCheck(*option, *bounding, *variant));
	} else {
	return new QRect(self->QItemDelegate::doCheck(*option, *bounding, *variant));
}
}

// Base class handler implementation
QRect* QItemDelegate_QBaseDoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DoCheck_IsBase(true);
	return new QRect(vqitemdelegate->doCheck(*option, *bounding, *variant));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDoCheck(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_DoCheck_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DoCheck_Callback>(slot));
}
}

// Derived class handler implementation
QRect* QItemDelegate_TextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
	return new QRect(vqitemdelegate->textRectangle(painter, *rect, *font, QString::fromUtf8(text.data, text.len)));
	} else {
	return new QRect(self->QItemDelegate::textRectangle(painter, *rect, *font, QString::fromUtf8(text.data, text.len)));
}
}

// Base class handler implementation
QRect* QItemDelegate_QBaseTextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_TextRectangle_IsBase(true);
	return new QRect(vqitemdelegate->textRectangle(painter, *rect, *font, QString::fromUtf8(text.data, text.len)));
}
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnTextRectangle(const QItemDelegate* self, intptr_t slot) {
	auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
	if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
vqitemdelegate->setQItemDelegate_TextRectangle_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_TextRectangle_Callback>(slot));
}
}

void QItemDelegate_Delete(QItemDelegate* self) {
    delete self;
}

