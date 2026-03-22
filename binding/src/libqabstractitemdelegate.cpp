#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QEvent>
#include <QHelpEvent>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QWidget>
#include <qabstractitemdelegate.h>
#include "libqabstractitemdelegate.h"
#include "libqabstractitemdelegate.hxx"

QAbstractItemDelegate* QAbstractItemDelegate_new() {
	 return new VirtualQAbstractItemDelegate();
}

QAbstractItemDelegate* QAbstractItemDelegate_new2(QObject* parent) {
	 return new VirtualQAbstractItemDelegate(parent);
}

libqt_string QAbstractItemDelegate_Tr(const char* s) {
	QString _ret = QAbstractItemDelegate::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractItemDelegate_Paint(const QAbstractItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QAbstractItemDelegate_SizeHint(const QAbstractItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QAbstractItemDelegate_CreateEditor(const QAbstractItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QAbstractItemDelegate_DestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
	self->destroyEditor(editor, *index);
}

void QAbstractItemDelegate_SetEditorData(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QAbstractItemDelegate_SetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QAbstractItemDelegate_UpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
	return self->editorEvent(event, model, *option, *index);
}

bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
	return self->helpEvent(event, view, *option, *index);
}

libqt_list QAbstractItemDelegate_PaintingRoles(const QAbstractItemDelegate* self) {
	return self->paintingRoles();
}

void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor) {
	self->commitData(editor);
}

void QAbstractItemDelegate_Connect_CommitData(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::commitData, [self, slotFunc](QWidget* editor) {
	slotFunc(self, editor);
    });
}

void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor) {
	self->closeEditor(editor);
}

void QAbstractItemDelegate_Connect_CloseEditor(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::closeEditor, [self, slotFunc](QWidget* editor) {
	slotFunc(self, editor);
    });
}

void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, const QModelIndex* param1) {
	self->sizeHintChanged(*param1);
}

void QAbstractItemDelegate_Connect_SizeHintChanged(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, const QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, const QModelIndex*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::sizeHintChanged, [self, slotFunc](const QModelIndex& param1) {
	slotFunc(self, param1);
    });
}

libqt_string QAbstractItemDelegate_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemDelegate::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractItemDelegate_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemDelegate::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractItemDelegate_CloseEditor2(QAbstractItemDelegate* self, QWidget* editor, int hint) {
	self->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

void QAbstractItemDelegate_Connect_CloseEditor2(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*, int) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*, int)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::closeEditor, [self, slotFunc](QWidget* editor, QAbstractItemDelegate::EndEditHint hint) {
	slotFunc(self, editor, hint);
    });
}

// Base class handler implementation
void QAbstractItemDelegate_QBasePaint(const QAbstractItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_Paint_IsBase(true);
	vqabstractitemdelegate->paint(painter, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnPaint(const QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_Paint_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Paint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QAbstractItemDelegate_QBaseSizeHint(const QAbstractItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_SizeHint_IsBase(true);
	return new QSize(vqabstractitemdelegate->sizeHint(*option, *index));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSizeHint(const QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QWidget* QAbstractItemDelegate_QBaseCreateEditor(const QAbstractItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_CreateEditor_IsBase(true);
	return vqabstractitemdelegate->createEditor(parent, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnCreateEditor(const QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_CreateEditor_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseDestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_DestroyEditor_IsBase(true);
	vqabstractitemdelegate->destroyEditor(editor, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnDestroyEditor(const QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_DestroyEditor_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseSetEditorData(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_SetEditorData_IsBase(true);
	vqabstractitemdelegate->setEditorData(editor, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSetEditorData(const QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SetEditorData_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseSetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_SetModelData_IsBase(true);
	vqabstractitemdelegate->setModelData(editor, model, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSetModelData(const QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SetModelData_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseUpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_UpdateEditorGeometry_IsBase(true);
	vqabstractitemdelegate->updateEditorGeometry(editor, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnUpdateEditorGeometry(const QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_UpdateEditorGeometry_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseEditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_EditorEvent_IsBase(true);
	return vqabstractitemdelegate->editorEvent(event, model, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEditorEvent(QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_EditorEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseHelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
	auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_HelpEvent_IsBase(true);
	return vqabstractitemdelegate->helpEvent(event, view, *option, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnHelpEvent(QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_HelpEvent_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAbstractItemDelegate_QBasePaintingRoles(const QAbstractItemDelegate* self) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_PaintingRoles_IsBase(true);
	return vqabstractitemdelegate->paintingRoles();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnPaintingRoles(const QAbstractItemDelegate* self, intptr_t slot) {
	auto* vqabstractitemdelegate = dynamic_cast<const VirtualQAbstractItemDelegate*>(self);
	if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
vqabstractitemdelegate->setQAbstractItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_PaintingRoles_Callback>(slot));
}
}

void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self) {
    delete self;
}

