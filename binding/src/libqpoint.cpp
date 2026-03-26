#include <QPoint>
#include <QPointF>

extern "C" {

int QPoint_X(const QPoint* self) { return self->x(); }
int QPoint_Y(const QPoint* self) { return self->y(); }
double QPointF_X(const QPointF* self) { return self->x(); }
double QPointF_Y(const QPointF* self) { return self->y(); }

}
