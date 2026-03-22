#pragma once
#ifndef QPRINTENGINE_H_C_LIB
#define QPRINTENGINE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPrintEngine QPrintEngine;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPrintEngine* QPrintEngine_new();
QPrintEngine* QPrintEngine_new2(const QPrintEngine* param1);
void QPrintEngine_SetProperty(QPrintEngine* self, int key, const QVariant* value);
QVariant* QPrintEngine_Property(const QPrintEngine* self, int key);
bool QPrintEngine_NewPage(QPrintEngine* self);
bool QPrintEngine_Abort(QPrintEngine* self);
int QPrintEngine_Metric(const QPrintEngine* self, int param1);
int QPrintEngine_PrinterState(const QPrintEngine* self);
void QPrintEngine_OperatorAssign(QPrintEngine* self, const QPrintEngine* param1);
void QPrintEngine_OnSetProperty(QPrintEngine* self, intptr_t slot);
void QPrintEngine_QBaseSetProperty(QPrintEngine* self, int key, const QVariant* value);
void QPrintEngine_OnProperty(const QPrintEngine* self, intptr_t slot);
QVariant* QPrintEngine_QBaseProperty(const QPrintEngine* self, int key);
void QPrintEngine_OnNewPage(QPrintEngine* self, intptr_t slot);
bool QPrintEngine_QBaseNewPage(QPrintEngine* self);
void QPrintEngine_OnAbort(QPrintEngine* self, intptr_t slot);
bool QPrintEngine_QBaseAbort(QPrintEngine* self);
void QPrintEngine_OnMetric(const QPrintEngine* self, intptr_t slot);
int QPrintEngine_QBaseMetric(const QPrintEngine* self, int param1);
void QPrintEngine_OnPrinterState(const QPrintEngine* self, intptr_t slot);
int QPrintEngine_QBasePrinterState(const QPrintEngine* self);
void QPrintEngine_Delete(QPrintEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
