#pragma once
#ifndef QTABLEWIDGET_H_C_LIB
#define QTABLEWIDGET_H_C_LIB

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
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTableView QTableView;
typedef struct QTableWidget QTableWidget;
typedef struct QTableWidgetItem QTableWidgetItem;
typedef struct QTableWidgetSelectionRange QTableWidgetSelectionRange;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTableWidgetSelectionRange* QTableWidgetSelectionRange_new(const QTableWidgetSelectionRange* other);
QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(QTableWidgetSelectionRange* other);
QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3();
QTableWidgetSelectionRange* QTableWidgetSelectionRange_new4(int top, int left, int bottom, int right);
void QTableWidgetSelectionRange_CopyAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other);
void QTableWidgetSelectionRange_MoveAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other);
int QTableWidgetSelectionRange_TopRow(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_BottomRow(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_LeftColumn(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_RightColumn(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_RowCount(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_ColumnCount(const QTableWidgetSelectionRange* self);
void QTableWidgetSelectionRange_Delete(QTableWidgetSelectionRange* self);

QTableWidgetItem* QTableWidgetItem_new();
QTableWidgetItem* QTableWidgetItem_new2(const libqt_string text);
QTableWidgetItem* QTableWidgetItem_new3(const QIcon* icon, const libqt_string text);
QTableWidgetItem* QTableWidgetItem_new4(const QTableWidgetItem* other);
QTableWidgetItem* QTableWidgetItem_new5(int typeVal);
QTableWidgetItem* QTableWidgetItem_new6(const libqt_string text, int typeVal);
QTableWidgetItem* QTableWidgetItem_new7(const QIcon* icon, const libqt_string text, int typeVal);
QTableWidget* QTableWidgetItem_TableWidget(const QTableWidgetItem* self);
int QTableWidgetItem_Row(const QTableWidgetItem* self);
int QTableWidgetItem_Column(const QTableWidgetItem* self);
void QTableWidgetItem_SetSelected(QTableWidgetItem* self, bool selectVal);
bool QTableWidgetItem_IsSelected(const QTableWidgetItem* self);
int QTableWidgetItem_Flags(const QTableWidgetItem* self);
void QTableWidgetItem_SetFlags(QTableWidgetItem* self, int flags);
libqt_string QTableWidgetItem_Text(const QTableWidgetItem* self);
void QTableWidgetItem_SetText(QTableWidgetItem* self, const libqt_string text);
QIcon* QTableWidgetItem_Icon(const QTableWidgetItem* self);
void QTableWidgetItem_SetIcon(QTableWidgetItem* self, const QIcon* icon);
libqt_string QTableWidgetItem_StatusTip(const QTableWidgetItem* self);
void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, const libqt_string statusTip);
libqt_string QTableWidgetItem_ToolTip(const QTableWidgetItem* self);
void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, const libqt_string toolTip);
libqt_string QTableWidgetItem_WhatsThis(const QTableWidgetItem* self);
void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, const libqt_string whatsThis);
QFont* QTableWidgetItem_Font(const QTableWidgetItem* self);
void QTableWidgetItem_SetFont(QTableWidgetItem* self, const QFont* font);
int QTableWidgetItem_TextAlignment(const QTableWidgetItem* self);
void QTableWidgetItem_SetTextAlignment(QTableWidgetItem* self, int alignment);
void QTableWidgetItem_SetTextAlignment2(QTableWidgetItem* self, int alignment);
void QTableWidgetItem_SetTextAlignment3(QTableWidgetItem* self, int alignment);
QBrush* QTableWidgetItem_Background(const QTableWidgetItem* self);
void QTableWidgetItem_SetBackground(QTableWidgetItem* self, const QBrush* brush);
QBrush* QTableWidgetItem_Foreground(const QTableWidgetItem* self);
void QTableWidgetItem_SetForeground(QTableWidgetItem* self, const QBrush* brush);
int QTableWidgetItem_CheckState(const QTableWidgetItem* self);
void QTableWidgetItem_SetCheckState(QTableWidgetItem* self, int state);
QSize* QTableWidgetItem_SizeHint(const QTableWidgetItem* self);
void QTableWidgetItem_SetSizeHint(QTableWidgetItem* self, const QSize* size);
QVariant* QTableWidgetItem_Data(const QTableWidgetItem* self, int role);
void QTableWidgetItem_SetData(QTableWidgetItem* self, int role, const QVariant* value);
bool QTableWidgetItem_OperatorLesser(const QTableWidgetItem* self, const QTableWidgetItem* other);
void QTableWidgetItem_Read(QTableWidgetItem* self, QDataStream* in);
void QTableWidgetItem_Write(const QTableWidgetItem* self, QDataStream* out);
void QTableWidgetItem_OperatorAssign(QTableWidgetItem* self, const QTableWidgetItem* other);
int QTableWidgetItem_Type(const QTableWidgetItem* self);
void QTableWidgetItem_OnData(const QTableWidgetItem* self, intptr_t slot);
QVariant* QTableWidgetItem_QBaseData(const QTableWidgetItem* self, int role);
void QTableWidgetItem_OnSetData(QTableWidgetItem* self, intptr_t slot);
void QTableWidgetItem_QBaseSetData(QTableWidgetItem* self, int role, const QVariant* value);
void QTableWidgetItem_OnOperatorLesser(const QTableWidgetItem* self, intptr_t slot);
bool QTableWidgetItem_QBaseOperatorLesser(const QTableWidgetItem* self, const QTableWidgetItem* other);
void QTableWidgetItem_OnRead(QTableWidgetItem* self, intptr_t slot);
void QTableWidgetItem_QBaseRead(QTableWidgetItem* self, QDataStream* in);
void QTableWidgetItem_OnWrite(const QTableWidgetItem* self, intptr_t slot);
void QTableWidgetItem_QBaseWrite(const QTableWidgetItem* self, QDataStream* out);
void QTableWidgetItem_Delete(QTableWidgetItem* self);

QTableWidget* QTableWidget_new(QWidget* parent);
QTableWidget* QTableWidget_new2();
QTableWidget* QTableWidget_new3(int rows, int columns);
QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent);
libqt_string QTableWidget_Tr(const char* s);
void QTableWidget_SetRowCount(QTableWidget* self, int rows);
int QTableWidget_RowCount(const QTableWidget* self);
void QTableWidget_SetColumnCount(QTableWidget* self, int columns);
int QTableWidget_ColumnCount(const QTableWidget* self);
int QTableWidget_Row(const QTableWidget* self, const QTableWidgetItem* item);
int QTableWidget_Column(const QTableWidget* self, const QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_Item(const QTableWidget* self, int row, int column);
void QTableWidget_SetItem(QTableWidget* self, int row, int column, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_TakeItem(QTableWidget* self, int row, int column);
libqt_list QTableWidget_Items(const QTableWidget* self, const QMimeData* data);
QModelIndex* QTableWidget_IndexFromItem(const QTableWidget* self, const QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_ItemFromIndex(const QTableWidget* self, const QModelIndex* index);
QTableWidgetItem* QTableWidget_VerticalHeaderItem(const QTableWidget* self, int row);
void QTableWidget_SetVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_TakeVerticalHeaderItem(QTableWidget* self, int row);
QTableWidgetItem* QTableWidget_HorizontalHeaderItem(const QTableWidget* self, int column);
void QTableWidget_SetHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_TakeHorizontalHeaderItem(QTableWidget* self, int column);
void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, const libqt_list labels);
void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, const libqt_list labels);
int QTableWidget_CurrentRow(const QTableWidget* self);
int QTableWidget_CurrentColumn(const QTableWidget* self);
QTableWidgetItem* QTableWidget_CurrentItem(const QTableWidget* self);
void QTableWidget_SetCurrentItem(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_SetCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command);
void QTableWidget_SetCurrentCell(QTableWidget* self, int row, int column);
void QTableWidget_SetCurrentCell2(QTableWidget* self, int row, int column, int command);
void QTableWidget_SortItems(QTableWidget* self, int column);
void QTableWidget_SetSortingEnabled(QTableWidget* self, bool enable);
bool QTableWidget_IsSortingEnabled(const QTableWidget* self);
void QTableWidget_EditItem(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_OpenPersistentEditor(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_ClosePersistentEditor(QTableWidget* self, QTableWidgetItem* item);
bool QTableWidget_IsPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item);
QWidget* QTableWidget_CellWidget(const QTableWidget* self, int row, int column);
void QTableWidget_SetCellWidget(QTableWidget* self, int row, int column, QWidget* widget);
void QTableWidget_RemoveCellWidget(QTableWidget* self, int row, int column);
void QTableWidget_SetRangeSelected(QTableWidget* self, const QTableWidgetSelectionRange* range, bool selectVal);
libqt_list QTableWidget_SelectedRanges(const QTableWidget* self);
libqt_list QTableWidget_SelectedItems(const QTableWidget* self);
libqt_list QTableWidget_FindItems(const QTableWidget* self, const libqt_string text, int flags);
int QTableWidget_VisualRow(const QTableWidget* self, int logicalRow);
int QTableWidget_VisualColumn(const QTableWidget* self, int logicalColumn);
QTableWidgetItem* QTableWidget_ItemAt(const QTableWidget* self, const QPoint* p);
QTableWidgetItem* QTableWidget_ItemAt2(const QTableWidget* self, int x, int y);
QRect* QTableWidget_VisualItemRect(const QTableWidget* self, const QTableWidgetItem* item);
const QTableWidgetItem* QTableWidget_ItemPrototype(const QTableWidget* self);
void QTableWidget_SetItemPrototype(QTableWidget* self, const QTableWidgetItem* item);
void QTableWidget_ScrollToItem(QTableWidget* self, const QTableWidgetItem* item);
void QTableWidget_InsertRow(QTableWidget* self, int row);
void QTableWidget_InsertColumn(QTableWidget* self, int column);
void QTableWidget_RemoveRow(QTableWidget* self, int row);
void QTableWidget_RemoveColumn(QTableWidget* self, int column);
void QTableWidget_Clear(QTableWidget* self);
void QTableWidget_ClearContents(QTableWidget* self);
void QTableWidget_ItemPressed(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_Connect_ItemPressed(QTableWidget* self, intptr_t slot);
void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_Connect_ItemClicked(QTableWidget* self, intptr_t slot);
void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_Connect_ItemDoubleClicked(QTableWidget* self, intptr_t slot);
void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_Connect_ItemActivated(QTableWidget* self, intptr_t slot);
void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_Connect_ItemEntered(QTableWidget* self, intptr_t slot);
void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_Connect_ItemChanged(QTableWidget* self, intptr_t slot);
void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous);
void QTableWidget_Connect_CurrentItemChanged(QTableWidget* self, intptr_t slot);
void QTableWidget_ItemSelectionChanged(QTableWidget* self);
void QTableWidget_Connect_ItemSelectionChanged(QTableWidget* self, intptr_t slot);
void QTableWidget_CellPressed(QTableWidget* self, int row, int column);
void QTableWidget_Connect_CellPressed(QTableWidget* self, intptr_t slot);
void QTableWidget_CellClicked(QTableWidget* self, int row, int column);
void QTableWidget_Connect_CellClicked(QTableWidget* self, intptr_t slot);
void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column);
void QTableWidget_Connect_CellDoubleClicked(QTableWidget* self, intptr_t slot);
void QTableWidget_CellActivated(QTableWidget* self, int row, int column);
void QTableWidget_Connect_CellActivated(QTableWidget* self, intptr_t slot);
void QTableWidget_CellEntered(QTableWidget* self, int row, int column);
void QTableWidget_Connect_CellEntered(QTableWidget* self, intptr_t slot);
void QTableWidget_CellChanged(QTableWidget* self, int row, int column);
void QTableWidget_Connect_CellChanged(QTableWidget* self, intptr_t slot);
void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn);
void QTableWidget_Connect_CurrentCellChanged(QTableWidget* self, intptr_t slot);
bool QTableWidget_Event(QTableWidget* self, QEvent* e);
libqt_list QTableWidget_MimeTypes(const QTableWidget* self);
QMimeData* QTableWidget_MimeData(const QTableWidget* self, const libqt_list items);
bool QTableWidget_DropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action);
int QTableWidget_SupportedDropActions(const QTableWidget* self);
void QTableWidget_DropEvent(QTableWidget* self, QDropEvent* event);
libqt_string QTableWidget_Tr2(const char* s, const char* c);
libqt_string QTableWidget_Tr3(const char* s, const char* c, int n);
void QTableWidget_SortItems2(QTableWidget* self, int column, int order);
void QTableWidget_ScrollToItem2(QTableWidget* self, const QTableWidgetItem* item, int hint);
void QTableWidget_OnEvent(QTableWidget* self, intptr_t slot);
bool QTableWidget_QBaseEvent(QTableWidget* self, QEvent* e);
void QTableWidget_OnMimeTypes(const QTableWidget* self, intptr_t slot);
libqt_list QTableWidget_QBaseMimeTypes(const QTableWidget* self);
void QTableWidget_OnMimeData(const QTableWidget* self, intptr_t slot);
QMimeData* QTableWidget_QBaseMimeData(const QTableWidget* self, const libqt_list items);
void QTableWidget_OnDropMimeData(QTableWidget* self, intptr_t slot);
bool QTableWidget_QBaseDropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action);
void QTableWidget_OnSupportedDropActions(const QTableWidget* self, intptr_t slot);
int QTableWidget_QBaseSupportedDropActions(const QTableWidget* self);
void QTableWidget_OnDropEvent(QTableWidget* self, intptr_t slot);
void QTableWidget_QBaseDropEvent(QTableWidget* self, QDropEvent* event);
void QTableWidget_Delete(QTableWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
