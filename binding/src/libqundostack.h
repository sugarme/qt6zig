#pragma once
#ifndef QUNDOSTACK_H_C_LIB
#define QUNDOSTACK_H_C_LIB

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
typedef struct QUndoCommand QUndoCommand;
typedef struct QUndoStack QUndoStack;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QUndoCommand* QUndoCommand_new();
QUndoCommand* QUndoCommand_new2(const libqt_string text);
QUndoCommand* QUndoCommand_new3(QUndoCommand* parent);
QUndoCommand* QUndoCommand_new4(const libqt_string text, QUndoCommand* parent);
void QUndoCommand_Undo(QUndoCommand* self);
void QUndoCommand_Redo(QUndoCommand* self);
libqt_string QUndoCommand_Text(const QUndoCommand* self);
libqt_string QUndoCommand_ActionText(const QUndoCommand* self);
void QUndoCommand_SetText(QUndoCommand* self, const libqt_string text);
bool QUndoCommand_IsObsolete(const QUndoCommand* self);
void QUndoCommand_SetObsolete(QUndoCommand* self, bool obsolete);
int QUndoCommand_Id(const QUndoCommand* self);
bool QUndoCommand_MergeWith(QUndoCommand* self, const QUndoCommand* other);
int QUndoCommand_ChildCount(const QUndoCommand* self);
const QUndoCommand* QUndoCommand_Child(const QUndoCommand* self, int index);
void QUndoCommand_OnUndo(QUndoCommand* self, intptr_t slot);
void QUndoCommand_QBaseUndo(QUndoCommand* self);
void QUndoCommand_OnRedo(QUndoCommand* self, intptr_t slot);
void QUndoCommand_QBaseRedo(QUndoCommand* self);
void QUndoCommand_OnId(const QUndoCommand* self, intptr_t slot);
int QUndoCommand_QBaseId(const QUndoCommand* self);
void QUndoCommand_OnMergeWith(QUndoCommand* self, intptr_t slot);
bool QUndoCommand_QBaseMergeWith(QUndoCommand* self, const QUndoCommand* other);
void QUndoCommand_Delete(QUndoCommand* self);

QUndoStack* QUndoStack_new();
QUndoStack* QUndoStack_new2(QObject* parent);
libqt_string QUndoStack_Tr(const char* s);
void QUndoStack_Clear(QUndoStack* self);
void QUndoStack_Push(QUndoStack* self, QUndoCommand* cmd);
bool QUndoStack_CanUndo(const QUndoStack* self);
bool QUndoStack_CanRedo(const QUndoStack* self);
libqt_string QUndoStack_UndoText(const QUndoStack* self);
libqt_string QUndoStack_RedoText(const QUndoStack* self);
int QUndoStack_Count(const QUndoStack* self);
int QUndoStack_Index(const QUndoStack* self);
libqt_string QUndoStack_Text(const QUndoStack* self, int idx);
QAction* QUndoStack_CreateUndoAction(const QUndoStack* self, QObject* parent);
QAction* QUndoStack_CreateRedoAction(const QUndoStack* self, QObject* parent);
bool QUndoStack_IsActive(const QUndoStack* self);
bool QUndoStack_IsClean(const QUndoStack* self);
int QUndoStack_CleanIndex(const QUndoStack* self);
void QUndoStack_BeginMacro(QUndoStack* self, const libqt_string text);
void QUndoStack_EndMacro(QUndoStack* self);
void QUndoStack_SetUndoLimit(QUndoStack* self, int limit);
int QUndoStack_UndoLimit(const QUndoStack* self);
const QUndoCommand* QUndoStack_Command(const QUndoStack* self, int index);
void QUndoStack_SetClean(QUndoStack* self);
void QUndoStack_ResetClean(QUndoStack* self);
void QUndoStack_SetIndex(QUndoStack* self, int idx);
void QUndoStack_Undo(QUndoStack* self);
void QUndoStack_Redo(QUndoStack* self);
void QUndoStack_SetActive(QUndoStack* self);
void QUndoStack_IndexChanged(QUndoStack* self, int idx);
void QUndoStack_Connect_IndexChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_CleanChanged(QUndoStack* self, bool clean);
void QUndoStack_Connect_CleanChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo);
void QUndoStack_Connect_CanUndoChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo);
void QUndoStack_Connect_CanRedoChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_UndoTextChanged(QUndoStack* self, const libqt_string undoText);
void QUndoStack_Connect_UndoTextChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_RedoTextChanged(QUndoStack* self, const libqt_string redoText);
void QUndoStack_Connect_RedoTextChanged(QUndoStack* self, intptr_t slot);
libqt_string QUndoStack_Tr2(const char* s, const char* c);
libqt_string QUndoStack_Tr3(const char* s, const char* c, int n);
QAction* QUndoStack_CreateUndoAction2(const QUndoStack* self, QObject* parent, const libqt_string prefix);
QAction* QUndoStack_CreateRedoAction2(const QUndoStack* self, QObject* parent, const libqt_string prefix);
void QUndoStack_SetActive1(QUndoStack* self, bool active);
void QUndoStack_Delete(QUndoStack* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
