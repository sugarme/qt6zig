#include <QAbstractScrollArea>
#include <QScrollBar>
#include "libqabstractscrollarea.h"

QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self) {
    return const_cast<QAbstractScrollArea*>(self)->horizontalScrollBar();
}

QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self) {
    return const_cast<QAbstractScrollArea*>(self)->verticalScrollBar();
}
