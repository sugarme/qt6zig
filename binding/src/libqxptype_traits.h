#pragma once
#ifndef QXPTYPE_TRAITS_H_C_LIB
#define QXPTYPE_TRAITS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_qxp__nonesuch)
typedef qxp::nonesuch qxp__nonesuch;
#endif
#else
typedef struct _GUID _GUID;
typedef struct qxp__nonesuch qxp__nonesuch;
typedef struct type_info type_info;
#endif




#ifdef __cplusplus
} /* extern C */
#endif

#endif
