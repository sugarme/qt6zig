#pragma once
#ifndef QLISTWIDGET_H_C_LIB
#define QLISTWIDGET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QDataStream QDataStream;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QListView QListView;
typedef struct QListWidget QListWidget;
typedef struct QListWidgetItem QListWidgetItem;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QListWidgetItem* QListWidgetItem_new();
QListWidgetItem* QListWidgetItem_new2(const libqt_string text);
QListWidgetItem* QListWidgetItem_new3(const QIcon* icon, const libqt_string text);
QListWidgetItem* QListWidgetItem_new4(const QListWidgetItem* other);
QListWidgetItem* QListWidgetItem_new5(QListWidget* listview);
QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal);
QListWidgetItem* QListWidgetItem_new7(const libqt_string text, QListWidget* listview);
QListWidgetItem* QListWidgetItem_new8(const libqt_string text, QListWidget* listview, int typeVal);
QListWidgetItem* QListWidgetItem_new9(const QIcon* icon, const libqt_string text, QListWidget* listview);
QListWidgetItem* QListWidgetItem_new10(const QIcon* icon, const libqt_string text, QListWidget* listview, int typeVal);
QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self);
void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal);
bool QListWidgetItem_IsSelected(const QListWidgetItem* self);
void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide);
bool QListWidgetItem_IsHidden(const QListWidgetItem* self);
int QListWidgetItem_Flags(const QListWidgetItem* self);
void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags);
libqt_string QListWidgetItem_Text(const QListWidgetItem* self);
void QListWidgetItem_SetText(QListWidgetItem* self, const libqt_string text);
QIcon* QListWidgetItem_Icon(const QListWidgetItem* self);
void QListWidgetItem_SetIcon(QListWidgetItem* self, const QIcon* icon);
libqt_string QListWidgetItem_StatusTip(const QListWidgetItem* self);
void QListWidgetItem_SetStatusTip(QListWidgetItem* self, const libqt_string statusTip);
libqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self);
void QListWidgetItem_SetToolTip(QListWidgetItem* self, const libqt_string toolTip);
libqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self);
void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, const libqt_string whatsThis);
QFont* QListWidgetItem_Font(const QListWidgetItem* self);
void QListWidgetItem_SetFont(QListWidgetItem* self, const QFont* font);
int QListWidgetItem_TextAlignment(const QListWidgetItem* self);
void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment);
void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment);
void QListWidgetItem_SetTextAlignment3(QListWidgetItem* self, int alignment);
QBrush* QListWidgetItem_Background(const QListWidgetItem* self);
void QListWidgetItem_SetBackground(QListWidgetItem* self, const QBrush* brush);
QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self);
void QListWidgetItem_SetForeground(QListWidgetItem* self, const QBrush* brush);
int QListWidgetItem_CheckState(const QListWidgetItem* self);
void QListWidgetItem_SetCheckState(QListWidgetItem* self, int state);
QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self);
void QListWidgetItem_SetSizeHint(QListWidgetItem* self, const QSize* size);
QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role);
void QListWidgetItem_SetData(QListWidgetItem* self, int role, const QVariant* value);
bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, const QListWidgetItem* other);
void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in);
void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out);
void QListWidgetItem_OperatorAssign(QListWidgetItem* self, const QListWidgetItem* other);
int QListWidgetItem_Type(const QListWidgetItem* self);
void QListWidgetItem_OnData(const QListWidgetItem* self, intptr_t slot);
QVariant* QListWidgetItem_QBaseData(const QListWidgetItem* self, int role);
void QListWidgetItem_OnSetData(QListWidgetItem* self, intptr_t slot);
void QListWidgetItem_QBaseSetData(QListWidgetItem* self, int role, const QVariant* value);
void QListWidgetItem_OnOperatorLesser(const QListWidgetItem* self, intptr_t slot);
bool QListWidgetItem_QBaseOperatorLesser(const QListWidgetItem* self, const QListWidgetItem* other);
void QListWidgetItem_OnRead(QListWidgetItem* self, intptr_t slot);
void QListWidgetItem_QBaseRead(QListWidgetItem* self, QDataStream* in);
void QListWidgetItem_OnWrite(const QListWidgetItem* self, intptr_t slot);
void QListWidgetItem_QBaseWrite(const QListWidgetItem* self, QDataStream* out);
void QListWidgetItem_Delete(QListWidgetItem* self);

QListWidget* QListWidget_new(QWidget* parent);
QListWidget* QListWidget_new2();
libqt_string QListWidget_Tr(const char* s);
void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel);
QListWidgetItem* QListWidget_Item(const QListWidget* self, int row);
int QListWidget_Row(const QListWidget* self, const QListWidgetItem* item);
void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item);
void QListWidget_InsertItem2(QListWidget* self, int row, const libqt_string label);
void QListWidget_InsertItems(QListWidget* self, int row, const libqt_list labels);
void QListWidget_AddItem(QListWidget* self, const libqt_string label);
void QListWidget_AddItem2(QListWidget* self, QListWidgetItem* item);
void QListWidget_AddItems(QListWidget* self, const libqt_list labels);
QListWidgetItem* QListWidget_TakeItem(QListWidget* self, int row);
int QListWidget_Count(const QListWidget* self);
QListWidgetItem* QListWidget_CurrentItem(const QListWidget* self);
void QListWidget_SetCurrentItem(QListWidget* self, QListWidgetItem* item);
void QListWidget_SetCurrentItem2(QListWidget* self, QListWidgetItem* item, int command);
int QListWidget_CurrentRow(const QListWidget* self);
void QListWidget_SetCurrentRow(QListWidget* self, int row);
void QListWidget_SetCurrentRow2(QListWidget* self, int row, int command);
QListWidgetItem* QListWidget_ItemAt(const QListWidget* self, const QPoint* p);
QListWidgetItem* QListWidget_ItemAt2(const QListWidget* self, int x, int y);
QRect* QListWidget_VisualItemRect(const QListWidget* self, const QListWidgetItem* item);
void QListWidget_SortItems(QListWidget* self);
void QListWidget_SetSortingEnabled(QListWidget* self, bool enable);
bool QListWidget_IsSortingEnabled(const QListWidget* self);
void QListWidget_EditItem(QListWidget* self, QListWidgetItem* item);
void QListWidget_OpenPersistentEditor(QListWidget* self, QListWidgetItem* item);
void QListWidget_ClosePersistentEditor(QListWidget* self, QListWidgetItem* item);
bool QListWidget_IsPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item);
QWidget* QListWidget_ItemWidget(const QListWidget* self, QListWidgetItem* item);
void QListWidget_SetItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget);
void QListWidget_RemoveItemWidget(QListWidget* self, QListWidgetItem* item);
libqt_list QListWidget_SelectedItems(const QListWidget* self);
libqt_list QListWidget_FindItems(const QListWidget* self, const libqt_string text, int flags);
libqt_list QListWidget_Items(const QListWidget* self, const QMimeData* data);
QModelIndex* QListWidget_IndexFromItem(const QListWidget* self, const QListWidgetItem* item);
QListWidgetItem* QListWidget_ItemFromIndex(const QListWidget* self, const QModelIndex* index);
void QListWidget_DropEvent(QListWidget* self, QDropEvent* event);
void QListWidget_ScrollToItem(QListWidget* self, const QListWidgetItem* item);
void QListWidget_Clear(QListWidget* self);
void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item);
void QListWidget_Connect_ItemPressed(QListWidget* self, intptr_t slot);
void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item);
void QListWidget_Connect_ItemClicked(QListWidget* self, intptr_t slot);
void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item);
void QListWidget_Connect_ItemDoubleClicked(QListWidget* self, intptr_t slot);
void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item);
void QListWidget_Connect_ItemActivated(QListWidget* self, intptr_t slot);
void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item);
void QListWidget_Connect_ItemEntered(QListWidget* self, intptr_t slot);
void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item);
void QListWidget_Connect_ItemChanged(QListWidget* self, intptr_t slot);
void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous);
void QListWidget_Connect_CurrentItemChanged(QListWidget* self, intptr_t slot);
void QListWidget_CurrentTextChanged(QListWidget* self, const libqt_string currentText);
void QListWidget_Connect_CurrentTextChanged(QListWidget* self, intptr_t slot);
void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow);
void QListWidget_Connect_CurrentRowChanged(QListWidget* self, intptr_t slot);
void QListWidget_ItemSelectionChanged(QListWidget* self);
void QListWidget_Connect_ItemSelectionChanged(QListWidget* self, intptr_t slot);
bool QListWidget_Event(QListWidget* self, QEvent* e);
libqt_list QListWidget_MimeTypes(const QListWidget* self);
QMimeData* QListWidget_MimeData(const QListWidget* self, const libqt_list items);
bool QListWidget_DropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
int QListWidget_SupportedDropActions(const QListWidget* self);
libqt_string QListWidget_Tr2(const char* s, const char* c);
libqt_string QListWidget_Tr3(const char* s, const char* c, int n);
void QListWidget_SortItems1(QListWidget* self, int order);
void QListWidget_ScrollToItem2(QListWidget* self, const QListWidgetItem* item, int hint);
void QListWidget_OnSetSelectionModel(QListWidget* self, intptr_t slot);
void QListWidget_QBaseSetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel);
void QListWidget_OnDropEvent(QListWidget* self, intptr_t slot);
void QListWidget_QBaseDropEvent(QListWidget* self, QDropEvent* event);
void QListWidget_OnEvent(QListWidget* self, intptr_t slot);
bool QListWidget_QBaseEvent(QListWidget* self, QEvent* e);
void QListWidget_OnMimeTypes(const QListWidget* self, intptr_t slot);
libqt_list QListWidget_QBaseMimeTypes(const QListWidget* self);
void QListWidget_OnMimeData(const QListWidget* self, intptr_t slot);
QMimeData* QListWidget_QBaseMimeData(const QListWidget* self, const libqt_list items);
void QListWidget_OnDropMimeData(QListWidget* self, intptr_t slot);
bool QListWidget_QBaseDropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
void QListWidget_OnSupportedDropActions(const QListWidget* self, intptr_t slot);
int QListWidget_QBaseSupportedDropActions(const QListWidget* self);
void QListWidget_Delete(QListWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
