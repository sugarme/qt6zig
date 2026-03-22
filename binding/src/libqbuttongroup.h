#pragma once
#ifndef QBUTTONGROUP_H_C_LIB
#define QBUTTONGROUP_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QButtonGroup QButtonGroup;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QButtonGroup* QButtonGroup_new();
QButtonGroup* QButtonGroup_new2(QObject* parent);
libqt_string QButtonGroup_Tr(const char* s);
void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive);
bool QButtonGroup_Exclusive(const QButtonGroup* self);
void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1);
libqt_list QButtonGroup_Buttons(const QButtonGroup* self);
QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self);
QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id);
void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id);
int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button);
int QButtonGroup_CheckedId(const QButtonGroup* self);
void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_Connect_ButtonClicked(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_Connect_ButtonPressed(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_Connect_ButtonReleased(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2);
void QButtonGroup_Connect_ButtonToggled(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdClicked(QButtonGroup* self, int param1);
void QButtonGroup_Connect_IdClicked(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdPressed(QButtonGroup* self, int param1);
void QButtonGroup_Connect_IdPressed(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdReleased(QButtonGroup* self, int param1);
void QButtonGroup_Connect_IdReleased(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2);
void QButtonGroup_Connect_IdToggled(QButtonGroup* self, intptr_t slot);
libqt_string QButtonGroup_Tr2(const char* s, const char* c);
libqt_string QButtonGroup_Tr3(const char* s, const char* c, int n);
void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id);
void QButtonGroup_Delete(QButtonGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
