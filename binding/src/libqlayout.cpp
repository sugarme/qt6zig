#include <QLayout>
#include <QMargins>
#include "libqlayout.h"

void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom) {
    self->setContentsMargins(left, top, right, bottom);
}

void QLayout_SetContentsMargins2(QLayout* self, const QMargins* margins) {
    self->setContentsMargins(*margins);
}
