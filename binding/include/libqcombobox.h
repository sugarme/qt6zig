#pragma once
#ifndef QCOMBOBOX_H_C_LIB
#define QCOMBOBOX_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QComboBox QComboBox;
typedef struct QCompleter QCompleter;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineEdit QLineEdit;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionComboBox QStyleOptionComboBox;
typedef struct QValidator QValidator;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QComboBox* QComboBox_new(QWidget* parent);
QComboBox* QComboBox_new2();
libqt_string QComboBox_Tr(const char* s);
int QComboBox_MaxVisibleItems(const QComboBox* self);
void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems);
int QComboBox_Count(const QComboBox* self);
void QComboBox_SetMaxCount(QComboBox* self, int max);
int QComboBox_MaxCount(const QComboBox* self);
bool QComboBox_DuplicatesEnabled(const QComboBox* self);
void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable);
void QComboBox_SetFrame(QComboBox* self, bool frame);
bool QComboBox_HasFrame(const QComboBox* self);
int QComboBox_FindText(const QComboBox* self, const libqt_string text);
int QComboBox_FindData(const QComboBox* self, const QVariant* data);
int QComboBox_InsertPolicy(const QComboBox* self);
void QComboBox_SetInsertPolicy(QComboBox* self, int policy);
int QComboBox_SizeAdjustPolicy(const QComboBox* self);
void QComboBox_SetSizeAdjustPolicy(QComboBox* self, int policy);
int QComboBox_MinimumContentsLength(const QComboBox* self);
void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters);
QSize* QComboBox_IconSize(const QComboBox* self);
void QComboBox_SetIconSize(QComboBox* self, const QSize* size);
void QComboBox_SetPlaceholderText(QComboBox* self, const libqt_string placeholderText);
libqt_string QComboBox_PlaceholderText(const QComboBox* self);
bool QComboBox_IsEditable(const QComboBox* self);
void QComboBox_SetEditable(QComboBox* self, bool editable);
void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit);
QLineEdit* QComboBox_LineEdit(const QComboBox* self);
void QComboBox_SetValidator(QComboBox* self, const QValidator* v);
const QValidator* QComboBox_Validator(const QComboBox* self);
void QComboBox_SetCompleter(QComboBox* self, QCompleter* c);
QCompleter* QComboBox_Completer(const QComboBox* self);
QAbstractItemDelegate* QComboBox_ItemDelegate(const QComboBox* self);
void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate);
QAbstractItemModel* QComboBox_Model(const QComboBox* self);
void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model);
QModelIndex* QComboBox_RootModelIndex(const QComboBox* self);
void QComboBox_SetRootModelIndex(QComboBox* self, const QModelIndex* index);
int QComboBox_ModelColumn(const QComboBox* self);
void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn);
int QComboBox_CurrentIndex(const QComboBox* self);
libqt_string QComboBox_CurrentText(const QComboBox* self);
QVariant* QComboBox_CurrentData(const QComboBox* self);
libqt_string QComboBox_ItemText(const QComboBox* self, int index);
QIcon* QComboBox_ItemIcon(const QComboBox* self, int index);
QVariant* QComboBox_ItemData(const QComboBox* self, int index);
void QComboBox_AddItem(QComboBox* self, const libqt_string text);
void QComboBox_AddItem2(QComboBox* self, const QIcon* icon, const libqt_string text);
void QComboBox_AddItems(QComboBox* self, const libqt_list texts);
void QComboBox_InsertItem(QComboBox* self, int index, const libqt_string text);
void QComboBox_InsertItem2(QComboBox* self, int index, const QIcon* icon, const libqt_string text);
void QComboBox_InsertItems(QComboBox* self, int index, const libqt_list texts);
void QComboBox_InsertSeparator(QComboBox* self, int index);
void QComboBox_RemoveItem(QComboBox* self, int index);
void QComboBox_SetItemText(QComboBox* self, int index, const libqt_string text);
void QComboBox_SetItemIcon(QComboBox* self, int index, const QIcon* icon);
void QComboBox_SetItemData(QComboBox* self, int index, const QVariant* value);
QAbstractItemView* QComboBox_View(const QComboBox* self);
void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView);
QSize* QComboBox_SizeHint(const QComboBox* self);
QSize* QComboBox_MinimumSizeHint(const QComboBox* self);
void QComboBox_ShowPopup(QComboBox* self);
void QComboBox_HidePopup(QComboBox* self);
bool QComboBox_Event(QComboBox* self, QEvent* event);
QVariant* QComboBox_InputMethodQuery(const QComboBox* self, int param1);
QVariant* QComboBox_InputMethodQuery2(const QComboBox* self, int query, const QVariant* argument);
void QComboBox_Clear(QComboBox* self);
void QComboBox_ClearEditText(QComboBox* self);
void QComboBox_SetEditText(QComboBox* self, const libqt_string text);
void QComboBox_SetCurrentIndex(QComboBox* self, int index);
void QComboBox_SetCurrentText(QComboBox* self, const libqt_string text);
void QComboBox_EditTextChanged(QComboBox* self, const libqt_string param1);
void QComboBox_Connect_EditTextChanged(QComboBox* self, intptr_t slot);
void QComboBox_Activated(QComboBox* self, int index);
void QComboBox_Connect_Activated(QComboBox* self, intptr_t slot);
void QComboBox_TextActivated(QComboBox* self, const libqt_string param1);
void QComboBox_Connect_TextActivated(QComboBox* self, intptr_t slot);
void QComboBox_Highlighted(QComboBox* self, int index);
void QComboBox_Connect_Highlighted(QComboBox* self, intptr_t slot);
void QComboBox_TextHighlighted(QComboBox* self, const libqt_string param1);
void QComboBox_Connect_TextHighlighted(QComboBox* self, intptr_t slot);
void QComboBox_CurrentIndexChanged(QComboBox* self, int index);
void QComboBox_Connect_CurrentIndexChanged(QComboBox* self, intptr_t slot);
void QComboBox_CurrentTextChanged(QComboBox* self, const libqt_string param1);
void QComboBox_Connect_CurrentTextChanged(QComboBox* self, intptr_t slot);
void QComboBox_FocusInEvent(QComboBox* self, QFocusEvent* e);
void QComboBox_FocusOutEvent(QComboBox* self, QFocusEvent* e);
void QComboBox_ChangeEvent(QComboBox* self, QEvent* e);
void QComboBox_ResizeEvent(QComboBox* self, QResizeEvent* e);
void QComboBox_PaintEvent(QComboBox* self, QPaintEvent* e);
void QComboBox_ShowEvent(QComboBox* self, QShowEvent* e);
void QComboBox_HideEvent(QComboBox* self, QHideEvent* e);
void QComboBox_MousePressEvent(QComboBox* self, QMouseEvent* e);
void QComboBox_MouseReleaseEvent(QComboBox* self, QMouseEvent* e);
void QComboBox_KeyPressEvent(QComboBox* self, QKeyEvent* e);
void QComboBox_KeyReleaseEvent(QComboBox* self, QKeyEvent* e);
void QComboBox_WheelEvent(QComboBox* self, QWheelEvent* e);
void QComboBox_ContextMenuEvent(QComboBox* self, QContextMenuEvent* e);
void QComboBox_InputMethodEvent(QComboBox* self, QInputMethodEvent* param1);
void QComboBox_InitStyleOption(const QComboBox* self, QStyleOptionComboBox* option);
libqt_string QComboBox_Tr2(const char* s, const char* c);
libqt_string QComboBox_Tr3(const char* s, const char* c, int n);
int QComboBox_FindText2(const QComboBox* self, const libqt_string text, int flags);
int QComboBox_FindData2(const QComboBox* self, const QVariant* data, int role);
int QComboBox_FindData3(const QComboBox* self, const QVariant* data, int role, int flags);
QVariant* QComboBox_CurrentData1(const QComboBox* self, int role);
QVariant* QComboBox_ItemData2(const QComboBox* self, int index, int role);
void QComboBox_AddItem22(QComboBox* self, const libqt_string text, const QVariant* userData);
void QComboBox_AddItem3(QComboBox* self, const QIcon* icon, const libqt_string text, const QVariant* userData);
void QComboBox_InsertItem3(QComboBox* self, int index, const libqt_string text, const QVariant* userData);
void QComboBox_InsertItem4(QComboBox* self, int index, const QIcon* icon, const libqt_string text, const QVariant* userData);
void QComboBox_SetItemData3(QComboBox* self, int index, const QVariant* value, int role);
void QComboBox_OnSetModel(QComboBox* self, intptr_t slot);
void QComboBox_QBaseSetModel(QComboBox* self, QAbstractItemModel* model);
void QComboBox_OnSizeHint(const QComboBox* self, intptr_t slot);
QSize* QComboBox_QBaseSizeHint(const QComboBox* self);
void QComboBox_OnMinimumSizeHint(const QComboBox* self, intptr_t slot);
QSize* QComboBox_QBaseMinimumSizeHint(const QComboBox* self);
void QComboBox_OnShowPopup(QComboBox* self, intptr_t slot);
void QComboBox_QBaseShowPopup(QComboBox* self);
void QComboBox_OnHidePopup(QComboBox* self, intptr_t slot);
void QComboBox_QBaseHidePopup(QComboBox* self);
void QComboBox_OnEvent(QComboBox* self, intptr_t slot);
bool QComboBox_QBaseEvent(QComboBox* self, QEvent* event);
void QComboBox_OnInputMethodQuery(const QComboBox* self, intptr_t slot);
QVariant* QComboBox_QBaseInputMethodQuery(const QComboBox* self, int param1);
void QComboBox_OnFocusInEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseFocusInEvent(QComboBox* self, QFocusEvent* e);
void QComboBox_OnFocusOutEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseFocusOutEvent(QComboBox* self, QFocusEvent* e);
void QComboBox_OnChangeEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseChangeEvent(QComboBox* self, QEvent* e);
void QComboBox_OnResizeEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseResizeEvent(QComboBox* self, QResizeEvent* e);
void QComboBox_OnPaintEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBasePaintEvent(QComboBox* self, QPaintEvent* e);
void QComboBox_OnShowEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseShowEvent(QComboBox* self, QShowEvent* e);
void QComboBox_OnHideEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseHideEvent(QComboBox* self, QHideEvent* e);
void QComboBox_OnMousePressEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseMousePressEvent(QComboBox* self, QMouseEvent* e);
void QComboBox_OnMouseReleaseEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseMouseReleaseEvent(QComboBox* self, QMouseEvent* e);
void QComboBox_OnKeyPressEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseKeyPressEvent(QComboBox* self, QKeyEvent* e);
void QComboBox_OnKeyReleaseEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseKeyReleaseEvent(QComboBox* self, QKeyEvent* e);
void QComboBox_OnWheelEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseWheelEvent(QComboBox* self, QWheelEvent* e);
void QComboBox_OnContextMenuEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseContextMenuEvent(QComboBox* self, QContextMenuEvent* e);
void QComboBox_OnInputMethodEvent(QComboBox* self, intptr_t slot);
void QComboBox_QBaseInputMethodEvent(QComboBox* self, QInputMethodEvent* param1);
void QComboBox_OnInitStyleOption(const QComboBox* self, intptr_t slot);
void QComboBox_QBaseInitStyleOption(const QComboBox* self, QStyleOptionComboBox* option);
void QComboBox_Delete(QComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
