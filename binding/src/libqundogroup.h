#pragma once
#ifndef QUNDOGROUP_H_C_LIB
#define QUNDOGROUP_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QObject QObject;
typedef struct QUndoGroup QUndoGroup;
typedef struct QUndoStack QUndoStack;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QUndoGroup* QUndoGroup_new();
QUndoGroup* QUndoGroup_new2(QObject* parent);
libqt_string QUndoGroup_Tr(const char* s);
void QUndoGroup_AddStack(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_RemoveStack(QUndoGroup* self, QUndoStack* stack);
libqt_list QUndoGroup_Stacks(const QUndoGroup* self);
QUndoStack* QUndoGroup_ActiveStack(const QUndoGroup* self);
QAction* QUndoGroup_CreateUndoAction(const QUndoGroup* self, QObject* parent);
QAction* QUndoGroup_CreateRedoAction(const QUndoGroup* self, QObject* parent);
bool QUndoGroup_CanUndo(const QUndoGroup* self);
bool QUndoGroup_CanRedo(const QUndoGroup* self);
libqt_string QUndoGroup_UndoText(const QUndoGroup* self);
libqt_string QUndoGroup_RedoText(const QUndoGroup* self);
bool QUndoGroup_IsClean(const QUndoGroup* self);
void QUndoGroup_Undo(QUndoGroup* self);
void QUndoGroup_Redo(QUndoGroup* self);
void QUndoGroup_SetActiveStack(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_ActiveStackChanged(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_Connect_ActiveStackChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_IndexChanged(QUndoGroup* self, int idx);
void QUndoGroup_Connect_IndexChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_CleanChanged(QUndoGroup* self, bool clean);
void QUndoGroup_Connect_CleanChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_CanUndoChanged(QUndoGroup* self, bool canUndo);
void QUndoGroup_Connect_CanUndoChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_CanRedoChanged(QUndoGroup* self, bool canRedo);
void QUndoGroup_Connect_CanRedoChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_UndoTextChanged(QUndoGroup* self, const libqt_string undoText);
void QUndoGroup_Connect_UndoTextChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_RedoTextChanged(QUndoGroup* self, const libqt_string redoText);
void QUndoGroup_Connect_RedoTextChanged(QUndoGroup* self, intptr_t slot);
libqt_string QUndoGroup_Tr2(const char* s, const char* c);
libqt_string QUndoGroup_Tr3(const char* s, const char* c, int n);
QAction* QUndoGroup_CreateUndoAction2(const QUndoGroup* self, QObject* parent, const libqt_string prefix);
QAction* QUndoGroup_CreateRedoAction2(const QUndoGroup* self, QObject* parent, const libqt_string prefix);
void QUndoGroup_Delete(QUndoGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
