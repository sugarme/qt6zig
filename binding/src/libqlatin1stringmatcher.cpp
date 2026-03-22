#include <QLatin1StringMatcher>
#include <QStringView>
#include <qlatin1stringmatcher.h>
#include "libqlatin1stringmatcher.h"
#include "libqlatin1stringmatcher.hxx"

QLatin1StringMatcher* QLatin1StringMatcher_new() {
	 return new QLatin1StringMatcher();
}

QLatin1StringMatcher* QLatin1StringMatcher_new2(QLatin1StringView pattern) {
	 return new QLatin1StringMatcher(pattern);
}

QLatin1StringMatcher* QLatin1StringMatcher_new3(QLatin1StringView pattern, int cs) {
	 return new QLatin1StringMatcher(pattern, static_cast<Qt::CaseSensitivity>(cs));
}

void QLatin1StringMatcher_SetPattern(QLatin1StringMatcher* self, QLatin1StringView pattern) {
	self->setPattern(pattern);
}

QLatin1StringView QLatin1StringMatcher_Pattern(const QLatin1StringMatcher* self) {
	return self->pattern();
}

void QLatin1StringMatcher_SetCaseSensitivity(QLatin1StringMatcher* self, int cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QLatin1StringMatcher_CaseSensitivity(const QLatin1StringMatcher* self) {
	return self->caseSensitivity();
}

ptrdiff_t QLatin1StringMatcher_IndexIn(const QLatin1StringMatcher* self, QLatin1StringView haystack) {
	return self->indexIn(haystack);
}

ptrdiff_t QLatin1StringMatcher_IndexIn2(const QLatin1StringMatcher* self, QStringView* haystack) {
	return self->indexIn(*haystack);
}

ptrdiff_t QLatin1StringMatcher_IndexIn22(const QLatin1StringMatcher* self, QLatin1StringView haystack, ptrdiff_t from) {
	return self->indexIn(haystack, from);
}

ptrdiff_t QLatin1StringMatcher_IndexIn23(const QLatin1StringMatcher* self, QStringView* haystack, ptrdiff_t from) {
	return self->indexIn(*haystack, from);
}

void QLatin1StringMatcher_Delete(QLatin1StringMatcher* self) {
    delete self;
}

