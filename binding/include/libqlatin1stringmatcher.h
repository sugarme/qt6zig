#pragma once
#ifndef QLATIN1STRINGMATCHER_H_C_LIB
#define QLATIN1STRINGMATCHER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLatin1StringMatcher QLatin1StringMatcher;
typedef struct QStringView QStringView;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLatin1StringMatcher* QLatin1StringMatcher_new();
QLatin1StringMatcher* QLatin1StringMatcher_new2(QLatin1StringView pattern);
QLatin1StringMatcher* QLatin1StringMatcher_new3(QLatin1StringView pattern, int cs);
void QLatin1StringMatcher_SetPattern(QLatin1StringMatcher* self, QLatin1StringView pattern);
QLatin1StringView QLatin1StringMatcher_Pattern(const QLatin1StringMatcher* self);
void QLatin1StringMatcher_SetCaseSensitivity(QLatin1StringMatcher* self, int cs);
int QLatin1StringMatcher_CaseSensitivity(const QLatin1StringMatcher* self);
ptrdiff_t QLatin1StringMatcher_IndexIn(const QLatin1StringMatcher* self, QLatin1StringView haystack);
ptrdiff_t QLatin1StringMatcher_IndexIn2(const QLatin1StringMatcher* self, QStringView* haystack);
ptrdiff_t QLatin1StringMatcher_IndexIn22(const QLatin1StringMatcher* self, QLatin1StringView haystack, ptrdiff_t from);
ptrdiff_t QLatin1StringMatcher_IndexIn23(const QLatin1StringMatcher* self, QStringView* haystack, ptrdiff_t from);
void QLatin1StringMatcher_Delete(QLatin1StringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
