#pragma once
#ifndef QBARCATEGORYAXIS_H_C_LIB
#define QBARCATEGORYAXIS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QBarCategoryAxis QBarCategoryAxis;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QBarCategoryAxis* QBarCategoryAxis_new();
QBarCategoryAxis* QBarCategoryAxis_new2(QObject* parent);
libqt_string QBarCategoryAxis_Tr(const char* s);
int QBarCategoryAxis_Type(const QBarCategoryAxis* self);
void QBarCategoryAxis_Append(QBarCategoryAxis* self, const libqt_list categories);
void QBarCategoryAxis_Append2(QBarCategoryAxis* self, const libqt_string category);
void QBarCategoryAxis_Remove(QBarCategoryAxis* self, const libqt_string category);
void QBarCategoryAxis_Insert(QBarCategoryAxis* self, int index, const libqt_string category);
void QBarCategoryAxis_Replace(QBarCategoryAxis* self, const libqt_string oldCategory, const libqt_string newCategory);
void QBarCategoryAxis_Clear(QBarCategoryAxis* self);
void QBarCategoryAxis_SetCategories(QBarCategoryAxis* self, const libqt_list categories);
libqt_list QBarCategoryAxis_Categories(QBarCategoryAxis* self);
int QBarCategoryAxis_Count(const QBarCategoryAxis* self);
libqt_string QBarCategoryAxis_At(const QBarCategoryAxis* self, int index);
void QBarCategoryAxis_SetMin(QBarCategoryAxis* self, const libqt_string minCategory);
libqt_string QBarCategoryAxis_Min(const QBarCategoryAxis* self);
void QBarCategoryAxis_SetMax(QBarCategoryAxis* self, const libqt_string maxCategory);
libqt_string QBarCategoryAxis_Max(const QBarCategoryAxis* self);
void QBarCategoryAxis_SetRange(QBarCategoryAxis* self, const libqt_string minCategory, const libqt_string maxCategory);
void QBarCategoryAxis_CategoriesChanged(QBarCategoryAxis* self);
void QBarCategoryAxis_Connect_CategoriesChanged(QBarCategoryAxis* self, intptr_t slot);
void QBarCategoryAxis_MinChanged(QBarCategoryAxis* self, const libqt_string min);
void QBarCategoryAxis_Connect_MinChanged(QBarCategoryAxis* self, intptr_t slot);
void QBarCategoryAxis_MaxChanged(QBarCategoryAxis* self, const libqt_string max);
void QBarCategoryAxis_Connect_MaxChanged(QBarCategoryAxis* self, intptr_t slot);
void QBarCategoryAxis_RangeChanged(QBarCategoryAxis* self, const libqt_string min, const libqt_string max);
void QBarCategoryAxis_Connect_RangeChanged(QBarCategoryAxis* self, intptr_t slot);
void QBarCategoryAxis_CountChanged(QBarCategoryAxis* self);
void QBarCategoryAxis_Connect_CountChanged(QBarCategoryAxis* self, intptr_t slot);
libqt_string QBarCategoryAxis_Tr2(const char* s, const char* c);
libqt_string QBarCategoryAxis_Tr3(const char* s, const char* c, int n);
void QBarCategoryAxis_OnType(const QBarCategoryAxis* self, intptr_t slot);
int QBarCategoryAxis_QBaseType(const QBarCategoryAxis* self);
void QBarCategoryAxis_Delete(QBarCategoryAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
