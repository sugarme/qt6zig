#pragma once
#ifndef QFLOAT16_H_C_LIB
#define QFLOAT16_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct _GUID _GUID;
typedef struct qfloat16 qfloat16;
typedef struct type_info type_info;
#endif



qfloat16* qfloat16_new();
qfloat16* qfloat16_new2(int param1);
qfloat16* qfloat16_new3(float f);
void qfloat16_CopyAssign(qfloat16* self, qfloat16* other);
void qfloat16_MoveAssign(qfloat16* self, qfloat16* other);
float qfloat16_Operatorfloat(const qfloat16* self);
bool qfloat16_IsInf(const qfloat16* self);
bool qfloat16_IsNaN(const qfloat16* self);
bool qfloat16_IsFinite(const qfloat16* self);
int qfloat16_FpClassify(const qfloat16* self);
bool qfloat16_IsNormal(const qfloat16* self);
void qfloat16_Delete(qfloat16* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
