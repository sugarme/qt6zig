#pragma once
#ifndef QUNDOVIEW_H_C_LIB
#define QUNDOVIEW_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIcon QIcon;
typedef struct QListView QListView;
typedef struct QUndoGroup QUndoGroup;
typedef struct QUndoStack QUndoStack;
typedef struct QUndoView QUndoView;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QUndoView* QUndoView_new(QWidget* parent);
QUndoView* QUndoView_new2();
QUndoView* QUndoView_new3(QUndoStack* stack);
QUndoView* QUndoView_new4(QUndoGroup* group);
QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent);
QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent);
libqt_string QUndoView_Tr(const char* s);
QUndoStack* QUndoView_Stack(const QUndoView* self);
QUndoGroup* QUndoView_Group(const QUndoView* self);
void QUndoView_SetEmptyLabel(QUndoView* self, const libqt_string label);
libqt_string QUndoView_EmptyLabel(const QUndoView* self);
void QUndoView_SetCleanIcon(QUndoView* self, const QIcon* icon);
QIcon* QUndoView_CleanIcon(const QUndoView* self);
void QUndoView_SetStack(QUndoView* self, QUndoStack* stack);
void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group);
libqt_string QUndoView_Tr2(const char* s, const char* c);
libqt_string QUndoView_Tr3(const char* s, const char* c, int n);
void QUndoView_Delete(QUndoView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
