#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QBarSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractbarseries.h>
#include "libqabstractbarseries.h"
#include "libqabstractbarseries.hxx"

libqt_string QAbstractBarSeries_Tr(const char* s) {
	QString _ret = QAbstractBarSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractBarSeries_SetBarWidth(QAbstractBarSeries* self, double width) {
	self->setBarWidth(width);
}

double QAbstractBarSeries_BarWidth(const QAbstractBarSeries* self) {
	return self->barWidth();
}

bool QAbstractBarSeries_Append(QAbstractBarSeries* self, QBarSet* set) {
	return self->append(set);
}

bool QAbstractBarSeries_Remove(QAbstractBarSeries* self, QBarSet* set) {
	return self->remove(set);
}

bool QAbstractBarSeries_Take(QAbstractBarSeries* self, QBarSet* set) {
	return self->take(set);
}

bool QAbstractBarSeries_Append2(QAbstractBarSeries* self, const libqt_list sets) {
	return self->append(*sets);
}

bool QAbstractBarSeries_Insert(QAbstractBarSeries* self, int index, QBarSet* set) {
	return self->insert(index, set);
}

int QAbstractBarSeries_Count(const QAbstractBarSeries* self) {
	return self->count();
}

libqt_list QAbstractBarSeries_BarSets(const QAbstractBarSeries* self) {
	return self->barSets();
}

void QAbstractBarSeries_Clear(QAbstractBarSeries* self) {
	self->clear();
}

void QAbstractBarSeries_SetLabelsVisible(QAbstractBarSeries* self) {
	self->setLabelsVisible();
}

bool QAbstractBarSeries_IsLabelsVisible(const QAbstractBarSeries* self) {
	return self->isLabelsVisible();
}

void QAbstractBarSeries_SetLabelsFormat(QAbstractBarSeries* self, const libqt_string format) {
	self->setLabelsFormat(QString::fromUtf8(format.data, format.len));
}

libqt_string QAbstractBarSeries_LabelsFormat(const QAbstractBarSeries* self) {
	QString _ret = self->labelsFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractBarSeries_SetLabelsAngle(QAbstractBarSeries* self, double angle) {
	self->setLabelsAngle(angle);
}

double QAbstractBarSeries_LabelsAngle(const QAbstractBarSeries* self) {
	return self->labelsAngle();
}

void QAbstractBarSeries_SetLabelsPosition(QAbstractBarSeries* self, int position) {
	self->setLabelsPosition(static_cast<QAbstractBarSeries::LabelsPosition>(position));
}

int QAbstractBarSeries_LabelsPosition(const QAbstractBarSeries* self) {
	return self->labelsPosition();
}

void QAbstractBarSeries_SetLabelsPrecision(QAbstractBarSeries* self, int precision) {
	self->setLabelsPrecision(precision);
}

int QAbstractBarSeries_LabelsPrecision(const QAbstractBarSeries* self) {
	return self->labelsPrecision();
}

void QAbstractBarSeries_Clicked(QAbstractBarSeries* self, int index, QBarSet* barset) {
	self->clicked(index, barset);
}

void QAbstractBarSeries_Connect_Clicked(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::clicked, [self, slotFunc](int index, QBarSet* barset) {
	slotFunc(self, index, barset);
    });
}

void QAbstractBarSeries_Hovered(QAbstractBarSeries* self, bool status, int index, QBarSet* barset) {
	self->hovered(status, index, barset);
}

void QAbstractBarSeries_Connect_Hovered(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, bool, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, bool, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::hovered, [self, slotFunc](bool status, int index, QBarSet* barset) {
	slotFunc(self, status, index, barset);
    });
}

void QAbstractBarSeries_Pressed(QAbstractBarSeries* self, int index, QBarSet* barset) {
	self->pressed(index, barset);
}

void QAbstractBarSeries_Connect_Pressed(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::pressed, [self, slotFunc](int index, QBarSet* barset) {
	slotFunc(self, index, barset);
    });
}

void QAbstractBarSeries_Released(QAbstractBarSeries* self, int index, QBarSet* barset) {
	self->released(index, barset);
}

void QAbstractBarSeries_Connect_Released(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::released, [self, slotFunc](int index, QBarSet* barset) {
	slotFunc(self, index, barset);
    });
}

void QAbstractBarSeries_DoubleClicked(QAbstractBarSeries* self, int index, QBarSet* barset) {
	self->doubleClicked(index, barset);
}

void QAbstractBarSeries_Connect_DoubleClicked(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::doubleClicked, [self, slotFunc](int index, QBarSet* barset) {
	slotFunc(self, index, barset);
    });
}

void QAbstractBarSeries_CountChanged(QAbstractBarSeries* self) {
	self->countChanged();
}

void QAbstractBarSeries_Connect_CountChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*) = reinterpret_cast<void (*)(QAbstractBarSeries*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::countChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractBarSeries_LabelsVisibleChanged(QAbstractBarSeries* self) {
	self->labelsVisibleChanged();
}

void QAbstractBarSeries_Connect_LabelsVisibleChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*) = reinterpret_cast<void (*)(QAbstractBarSeries*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsVisibleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractBarSeries_LabelsFormatChanged(QAbstractBarSeries* self, const libqt_string format) {
	self->labelsFormatChanged(QString::fromUtf8(format.data, format.len));
}

void QAbstractBarSeries_Connect_LabelsFormatChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, const char*) = reinterpret_cast<void (*)(QAbstractBarSeries*, const char*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsFormatChanged, [self, slotFunc](const QString& format) {
	slotFunc(self, format);
    });
}

void QAbstractBarSeries_LabelsPositionChanged(QAbstractBarSeries* self, int position) {
	self->labelsPositionChanged(static_cast<QAbstractBarSeries::LabelsPosition>(position));
}

void QAbstractBarSeries_Connect_LabelsPositionChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int) = reinterpret_cast<void (*)(QAbstractBarSeries*, int)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsPositionChanged, [self, slotFunc](QAbstractBarSeries::LabelsPosition position) {
	slotFunc(self, position);
    });
}

void QAbstractBarSeries_LabelsAngleChanged(QAbstractBarSeries* self, double angle) {
	self->labelsAngleChanged(angle);
}

void QAbstractBarSeries_Connect_LabelsAngleChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, double) = reinterpret_cast<void (*)(QAbstractBarSeries*, double)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsAngleChanged, [self, slotFunc](qreal angle) {
	slotFunc(self, angle);
    });
}

void QAbstractBarSeries_LabelsPrecisionChanged(QAbstractBarSeries* self, int precision) {
	self->labelsPrecisionChanged(precision);
}

void QAbstractBarSeries_Connect_LabelsPrecisionChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int) = reinterpret_cast<void (*)(QAbstractBarSeries*, int)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsPrecisionChanged, [self, slotFunc](int precision) {
	slotFunc(self, precision);
    });
}

void QAbstractBarSeries_BarsetsAdded(QAbstractBarSeries* self, const libqt_list sets) {
	self->barsetsAdded(*sets);
}

void QAbstractBarSeries_Connect_BarsetsAdded(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, libqt_list) = reinterpret_cast<void (*)(QAbstractBarSeries*, libqt_list)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::barsetsAdded, [self, slotFunc](const QList<QBarSet *>& sets) {
	slotFunc(self, sets);
    });
}

void QAbstractBarSeries_BarsetsRemoved(QAbstractBarSeries* self, const libqt_list sets) {
	self->barsetsRemoved(*sets);
}

void QAbstractBarSeries_Connect_BarsetsRemoved(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, libqt_list) = reinterpret_cast<void (*)(QAbstractBarSeries*, libqt_list)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::barsetsRemoved, [self, slotFunc](const QList<QBarSet *>& sets) {
	slotFunc(self, sets);
    });
}

libqt_string QAbstractBarSeries_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractBarSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractBarSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractBarSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractBarSeries_SetLabelsVisible1(QAbstractBarSeries* self, bool visible) {
	self->setLabelsVisible(visible);
}

void QAbstractBarSeries_Delete(QAbstractBarSeries* self) {
    delete self;
}

