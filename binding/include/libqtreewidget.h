#pragma once
#ifndef QTREEWIDGET_H_C_LIB
#define QTREEWIDGET_H_C_LIB

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
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTreeView QTreeView;
typedef struct QTreeWidget QTreeWidget;
typedef struct QTreeWidgetItem QTreeWidgetItem;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTreeWidgetItem* QTreeWidgetItem_new();
QTreeWidgetItem* QTreeWidgetItem_new2(const libqt_list strings);
QTreeWidgetItem* QTreeWidgetItem_new3(QTreeWidget* treeview);
QTreeWidgetItem* QTreeWidgetItem_new4(QTreeWidget* treeview, const libqt_list strings);
QTreeWidgetItem* QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after);
QTreeWidgetItem* QTreeWidgetItem_new6(QTreeWidgetItem* parent);
QTreeWidgetItem* QTreeWidgetItem_new7(QTreeWidgetItem* parent, const libqt_list strings);
QTreeWidgetItem* QTreeWidgetItem_new8(QTreeWidgetItem* parent, QTreeWidgetItem* after);
QTreeWidgetItem* QTreeWidgetItem_new9(const QTreeWidgetItem* other);
QTreeWidgetItem* QTreeWidgetItem_new10(int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new11(const libqt_list strings, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, const libqt_list strings, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, const libqt_list strings, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal);
QTreeWidget* QTreeWidgetItem_TreeWidget(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool selectVal);
bool QTreeWidgetItem_IsSelected(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetHidden(QTreeWidgetItem* self, bool hide);
bool QTreeWidgetItem_IsHidden(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetExpanded(QTreeWidgetItem* self, bool expand);
bool QTreeWidgetItem_IsExpanded(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetFirstColumnSpanned(QTreeWidgetItem* self, bool span);
bool QTreeWidgetItem_IsFirstColumnSpanned(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetDisabled(QTreeWidgetItem* self, bool disabled);
bool QTreeWidgetItem_IsDisabled(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetChildIndicatorPolicy(QTreeWidgetItem* self, int policy);
int QTreeWidgetItem_ChildIndicatorPolicy(const QTreeWidgetItem* self);
int QTreeWidgetItem_Flags(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetFlags(QTreeWidgetItem* self, int flags);
libqt_string QTreeWidgetItem_Text(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, const libqt_string text);
QIcon* QTreeWidgetItem_Icon(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, const QIcon* icon);
libqt_string QTreeWidgetItem_StatusTip(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, const libqt_string statusTip);
libqt_string QTreeWidgetItem_ToolTip(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, const libqt_string toolTip);
libqt_string QTreeWidgetItem_WhatsThis(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, const libqt_string whatsThis);
QFont* QTreeWidgetItem_Font(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetFont(QTreeWidgetItem* self, int column, const QFont* font);
int QTreeWidgetItem_TextAlignment(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetTextAlignment(QTreeWidgetItem* self, int column, int alignment);
void QTreeWidgetItem_SetTextAlignment2(QTreeWidgetItem* self, int column, int alignment);
void QTreeWidgetItem_SetTextAlignment3(QTreeWidgetItem* self, int column, int alignment);
QBrush* QTreeWidgetItem_Background(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, const QBrush* brush);
QBrush* QTreeWidgetItem_Foreground(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetForeground(QTreeWidgetItem* self, int column, const QBrush* brush);
int QTreeWidgetItem_CheckState(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetCheckState(QTreeWidgetItem* self, int column, int state);
QSize* QTreeWidgetItem_SizeHint(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetSizeHint(QTreeWidgetItem* self, int column, const QSize* size);
QVariant* QTreeWidgetItem_Data(const QTreeWidgetItem* self, int column, int role);
void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, const QVariant* value);
bool QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem* self, const QTreeWidgetItem* other);
void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in);
void QTreeWidgetItem_Write(const QTreeWidgetItem* self, QDataStream* out);
void QTreeWidgetItem_OperatorAssign(QTreeWidgetItem* self, const QTreeWidgetItem* other);
QTreeWidgetItem* QTreeWidgetItem_Parent(const QTreeWidgetItem* self);
QTreeWidgetItem* QTreeWidgetItem_Child(const QTreeWidgetItem* self, int index);
int QTreeWidgetItem_ChildCount(const QTreeWidgetItem* self);
int QTreeWidgetItem_ColumnCount(const QTreeWidgetItem* self);
int QTreeWidgetItem_IndexOfChild(const QTreeWidgetItem* self, QTreeWidgetItem* child);
void QTreeWidgetItem_AddChild(QTreeWidgetItem* self, QTreeWidgetItem* child);
void QTreeWidgetItem_InsertChild(QTreeWidgetItem* self, int index, QTreeWidgetItem* child);
void QTreeWidgetItem_RemoveChild(QTreeWidgetItem* self, QTreeWidgetItem* child);
QTreeWidgetItem* QTreeWidgetItem_TakeChild(QTreeWidgetItem* self, int index);
void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, const libqt_list children);
void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, const libqt_list children);
libqt_list QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self);
int QTreeWidgetItem_Type(const QTreeWidgetItem* self);
void QTreeWidgetItem_SortChildren(QTreeWidgetItem* self, int column, int order);
void QTreeWidgetItem_OnData(const QTreeWidgetItem* self, intptr_t slot);
QVariant* QTreeWidgetItem_QBaseData(const QTreeWidgetItem* self, int column, int role);
void QTreeWidgetItem_OnSetData(QTreeWidgetItem* self, intptr_t slot);
void QTreeWidgetItem_QBaseSetData(QTreeWidgetItem* self, int column, int role, const QVariant* value);
void QTreeWidgetItem_OnOperatorLesser(const QTreeWidgetItem* self, intptr_t slot);
bool QTreeWidgetItem_QBaseOperatorLesser(const QTreeWidgetItem* self, const QTreeWidgetItem* other);
void QTreeWidgetItem_OnRead(QTreeWidgetItem* self, intptr_t slot);
void QTreeWidgetItem_QBaseRead(QTreeWidgetItem* self, QDataStream* in);
void QTreeWidgetItem_OnWrite(const QTreeWidgetItem* self, intptr_t slot);
void QTreeWidgetItem_QBaseWrite(const QTreeWidgetItem* self, QDataStream* out);
void QTreeWidgetItem_EmitDataChanged(QTreeWidgetItem* self);
void QTreeWidgetItem_OnEmitDataChanged(QTreeWidgetItem* self, intptr_t slot);
void QTreeWidgetItem_QBaseEmitDataChanged(QTreeWidgetItem* self);
void QTreeWidgetItem_Delete(QTreeWidgetItem* self);

QTreeWidget* QTreeWidget_new(QWidget* parent);
QTreeWidget* QTreeWidget_new2();
libqt_string QTreeWidget_Tr(const char* s);
int QTreeWidget_ColumnCount(const QTreeWidget* self);
void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns);
QTreeWidgetItem* QTreeWidget_InvisibleRootItem(const QTreeWidget* self);
QTreeWidgetItem* QTreeWidget_TopLevelItem(const QTreeWidget* self, int index);
int QTreeWidget_TopLevelItemCount(const QTreeWidget* self);
void QTreeWidget_InsertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item);
void QTreeWidget_AddTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item);
QTreeWidgetItem* QTreeWidget_TakeTopLevelItem(QTreeWidget* self, int index);
int QTreeWidget_IndexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, const libqt_list items);
void QTreeWidget_AddTopLevelItems(QTreeWidget* self, const libqt_list items);
QTreeWidgetItem* QTreeWidget_HeaderItem(const QTreeWidget* self);
void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetHeaderLabels(QTreeWidget* self, const libqt_list labels);
void QTreeWidget_SetHeaderLabel(QTreeWidget* self, const libqt_string label);
QTreeWidgetItem* QTreeWidget_CurrentItem(const QTreeWidget* self);
int QTreeWidget_CurrentColumn(const QTreeWidget* self);
void QTreeWidget_SetCurrentItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetCurrentItem2(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_SetCurrentItem3(QTreeWidget* self, QTreeWidgetItem* item, int column, int command);
QTreeWidgetItem* QTreeWidget_ItemAt(const QTreeWidget* self, const QPoint* p);
QTreeWidgetItem* QTreeWidget_ItemAt2(const QTreeWidget* self, int x, int y);
QRect* QTreeWidget_VisualItemRect(const QTreeWidget* self, const QTreeWidgetItem* item);
int QTreeWidget_SortColumn(const QTreeWidget* self);
void QTreeWidget_SortItems(QTreeWidget* self, int column, int order);
void QTreeWidget_EditItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_OpenPersistentEditor(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_ClosePersistentEditor(QTreeWidget* self, QTreeWidgetItem* item);
bool QTreeWidget_IsPersistentEditorOpen(const QTreeWidget* self, QTreeWidgetItem* item);
QWidget* QTreeWidget_ItemWidget(const QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_SetItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget);
void QTreeWidget_RemoveItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column);
libqt_list QTreeWidget_SelectedItems(const QTreeWidget* self);
libqt_list QTreeWidget_FindItems(const QTreeWidget* self, const libqt_string text, int flags);
QTreeWidgetItem* QTreeWidget_ItemAbove(const QTreeWidget* self, const QTreeWidgetItem* item);
QTreeWidgetItem* QTreeWidget_ItemBelow(const QTreeWidget* self, const QTreeWidgetItem* item);
QModelIndex* QTreeWidget_IndexFromItem(const QTreeWidget* self, const QTreeWidgetItem* item);
QTreeWidgetItem* QTreeWidget_ItemFromIndex(const QTreeWidget* self, const QModelIndex* index);
void QTreeWidget_SetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel);
void QTreeWidget_ScrollToItem(QTreeWidget* self, const QTreeWidgetItem* item);
void QTreeWidget_ExpandItem(QTreeWidget* self, const QTreeWidgetItem* item);
void QTreeWidget_CollapseItem(QTreeWidget* self, const QTreeWidgetItem* item);
void QTreeWidget_Clear(QTreeWidget* self);
void QTreeWidget_ItemPressed(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_Connect_ItemPressed(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_Connect_ItemClicked(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_Connect_ItemDoubleClicked(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_Connect_ItemActivated(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_Connect_ItemEntered(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_Connect_ItemChanged(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_Connect_ItemExpanded(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_Connect_ItemCollapsed(QTreeWidget* self, intptr_t slot);
void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous);
void QTreeWidget_Connect_CurrentItemChanged(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemSelectionChanged(QTreeWidget* self);
void QTreeWidget_Connect_ItemSelectionChanged(QTreeWidget* self, intptr_t slot);
bool QTreeWidget_Event(QTreeWidget* self, QEvent* e);
libqt_list QTreeWidget_MimeTypes(const QTreeWidget* self);
QMimeData* QTreeWidget_MimeData(const QTreeWidget* self, const libqt_list items);
bool QTreeWidget_DropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action);
int QTreeWidget_SupportedDropActions(const QTreeWidget* self);
void QTreeWidget_DropEvent(QTreeWidget* self, QDropEvent* event);
libqt_string QTreeWidget_Tr2(const char* s, const char* c);
libqt_string QTreeWidget_Tr3(const char* s, const char* c, int n);
void QTreeWidget_EditItem2(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_OpenPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_ClosePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column);
bool QTreeWidget_IsPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column);
libqt_list QTreeWidget_FindItems3(const QTreeWidget* self, const libqt_string text, int flags, int column);
QModelIndex* QTreeWidget_IndexFromItem2(const QTreeWidget* self, const QTreeWidgetItem* item, int column);
void QTreeWidget_ScrollToItem2(QTreeWidget* self, const QTreeWidgetItem* item, int hint);
void QTreeWidget_OnSetSelectionModel(QTreeWidget* self, intptr_t slot);
void QTreeWidget_QBaseSetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel);
void QTreeWidget_OnEvent(QTreeWidget* self, intptr_t slot);
bool QTreeWidget_QBaseEvent(QTreeWidget* self, QEvent* e);
void QTreeWidget_OnMimeTypes(const QTreeWidget* self, intptr_t slot);
libqt_list QTreeWidget_QBaseMimeTypes(const QTreeWidget* self);
void QTreeWidget_OnMimeData(const QTreeWidget* self, intptr_t slot);
QMimeData* QTreeWidget_QBaseMimeData(const QTreeWidget* self, const libqt_list items);
void QTreeWidget_OnDropMimeData(QTreeWidget* self, intptr_t slot);
bool QTreeWidget_QBaseDropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action);
void QTreeWidget_OnSupportedDropActions(const QTreeWidget* self, intptr_t slot);
int QTreeWidget_QBaseSupportedDropActions(const QTreeWidget* self);
void QTreeWidget_OnDropEvent(QTreeWidget* self, intptr_t slot);
void QTreeWidget_QBaseDropEvent(QTreeWidget* self, QDropEvent* event);
void QTreeWidget_Delete(QTreeWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
