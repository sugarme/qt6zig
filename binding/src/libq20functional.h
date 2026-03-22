#pragma once
#ifndef Q20FUNCTIONAL_H_C_LIB
#define Q20FUNCTIONAL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_q20__identity)
typedef q20::identity q20__identity;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_q20__identity__is_transparent)
typedef q20::identity::is_transparent q20__identity__is_transparent;
#endif
#else
typedef struct _GUID _GUID;
typedef struct q20__identity q20__identity;
typedef struct q20__identity__is_transparent q20__identity__is_transparent;
typedef struct type_info type_info;
#endif



q20__identity* q20__identity_new(const q20__identity* other);
q20__identity* q20__identity_new2(q20__identity* other);
void q20__identity_CopyAssign(q20__identity* self, q20__identity* other);
void q20__identity_MoveAssign(q20__identity* self, q20__identity* other);
void q20__identity_Delete(q20__identity* self);

q20__identity__is_transparent* q20__identity__is_transparent_new(const q20__identity__is_transparent* other);
q20__identity__is_transparent* q20__identity__is_transparent_new2(q20__identity__is_transparent* other);
void q20__identity__is_transparent_CopyAssign(q20__identity__is_transparent* self, q20__identity__is_transparent* other);
void q20__identity__is_transparent_MoveAssign(q20__identity__is_transparent* self, q20__identity__is_transparent* other);
void q20__identity__is_transparent_Delete(q20__identity__is_transparent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
