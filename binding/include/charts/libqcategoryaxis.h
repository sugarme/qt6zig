#pragma once
#ifndef QCATEGORYAXIS_H_C_LIB
#define QCATEGORYAXIS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCategoryAxis QCategoryAxis;
typedef struct QObject QObject;
typedef struct QValueAxis QValueAxis;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCategoryAxis* QCategoryAxis_new();
QCategoryAxis* QCategoryAxis_new2(QObject* parent);
libqt_string QCategoryAxis_Tr(const char* s);
int QCategoryAxis_Type(const QCategoryAxis* self);
void QCategoryAxis_Append(QCategoryAxis* self, const libqt_string label, double categoryEndValue);
void QCategoryAxis_Remove(QCategoryAxis* self, const libqt_string label);
void QCategoryAxis_ReplaceLabel(QCategoryAxis* self, const libqt_string oldLabel, const libqt_string newLabel);
double QCategoryAxis_StartValue(const QCategoryAxis* self);
void QCategoryAxis_SetStartValue(QCategoryAxis* self, double min);
double QCategoryAxis_EndValue(const QCategoryAxis* self, const libqt_string categoryLabel);
libqt_list QCategoryAxis_CategoriesLabels(QCategoryAxis* self);
int QCategoryAxis_Count(const QCategoryAxis* self);
int QCategoryAxis_LabelsPosition(const QCategoryAxis* self);
void QCategoryAxis_SetLabelsPosition(QCategoryAxis* self, int position);
void QCategoryAxis_CategoriesChanged(QCategoryAxis* self);
void QCategoryAxis_Connect_CategoriesChanged(QCategoryAxis* self, intptr_t slot);
void QCategoryAxis_LabelsPositionChanged(QCategoryAxis* self, int position);
void QCategoryAxis_Connect_LabelsPositionChanged(QCategoryAxis* self, intptr_t slot);
libqt_string QCategoryAxis_Tr2(const char* s, const char* c);
libqt_string QCategoryAxis_Tr3(const char* s, const char* c, int n);
double QCategoryAxis_StartValue1(const QCategoryAxis* self, const libqt_string categoryLabel);
void QCategoryAxis_OnType(const QCategoryAxis* self, intptr_t slot);
int QCategoryAxis_QBaseType(const QCategoryAxis* self);
void QCategoryAxis_Delete(QCategoryAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
