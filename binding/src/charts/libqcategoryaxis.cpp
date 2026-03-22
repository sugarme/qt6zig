#include <QCategoryAxis>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QValueAxis>
#include <qcategoryaxis.h>
#include "libqcategoryaxis.h"
#include "libqcategoryaxis.hxx"

QCategoryAxis* QCategoryAxis_new() {
	 return new VirtualQCategoryAxis();
}

QCategoryAxis* QCategoryAxis_new2(QObject* parent) {
	 return new VirtualQCategoryAxis(parent);
}

libqt_string QCategoryAxis_Tr(const char* s) {
	QString _ret = QCategoryAxis::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QCategoryAxis_Type(const QCategoryAxis* self) {
	return self->type();
}

void QCategoryAxis_Append(QCategoryAxis* self, const libqt_string label, double categoryEndValue) {
	self->append(QString::fromUtf8(label.data, label.len), categoryEndValue);
}

void QCategoryAxis_Remove(QCategoryAxis* self, const libqt_string label) {
	self->remove(QString::fromUtf8(label.data, label.len));
}

void QCategoryAxis_ReplaceLabel(QCategoryAxis* self, const libqt_string oldLabel, const libqt_string newLabel) {
	self->replaceLabel(QString::fromUtf8(oldLabel.data, oldLabel.len), QString::fromUtf8(newLabel.data, newLabel.len));
}

double QCategoryAxis_StartValue(const QCategoryAxis* self) {
	return self->startValue();
}

void QCategoryAxis_SetStartValue(QCategoryAxis* self, double min) {
	self->setStartValue(min);
}

double QCategoryAxis_EndValue(const QCategoryAxis* self, const libqt_string categoryLabel) {
	return self->endValue(QString::fromUtf8(categoryLabel.data, categoryLabel.len));
}

libqt_list QCategoryAxis_CategoriesLabels(QCategoryAxis* self) {
	auto _ret = self->categoriesLabels();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

int QCategoryAxis_Count(const QCategoryAxis* self) {
	return self->count();
}

int QCategoryAxis_LabelsPosition(const QCategoryAxis* self) {
	return self->labelsPosition();
}

void QCategoryAxis_SetLabelsPosition(QCategoryAxis* self, int position) {
	self->setLabelsPosition(static_cast<QCategoryAxis::AxisLabelsPosition>(position));
}

void QCategoryAxis_CategoriesChanged(QCategoryAxis* self) {
	self->categoriesChanged();
}

void QCategoryAxis_Connect_CategoriesChanged(QCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QCategoryAxis*) = reinterpret_cast<void (*)(QCategoryAxis*)>(slot);
    QCategoryAxis::connect(self, &QCategoryAxis::categoriesChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCategoryAxis_LabelsPositionChanged(QCategoryAxis* self, int position) {
	self->labelsPositionChanged(static_cast<QCategoryAxis::AxisLabelsPosition>(position));
}

void QCategoryAxis_Connect_LabelsPositionChanged(QCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QCategoryAxis*, int) = reinterpret_cast<void (*)(QCategoryAxis*, int)>(slot);
    QCategoryAxis::connect(self, &QCategoryAxis::labelsPositionChanged, [self, slotFunc](QCategoryAxis::AxisLabelsPosition position) {
	slotFunc(self, position);
    });
}

libqt_string QCategoryAxis_Tr2(const char* s, const char* c) {
	QString _ret = QCategoryAxis::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCategoryAxis_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCategoryAxis::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

double QCategoryAxis_StartValue1(const QCategoryAxis* self, const libqt_string categoryLabel) {
	return self->startValue(QString::fromUtf8(categoryLabel.data, categoryLabel.len));
}

// Base class handler implementation
int QCategoryAxis_QBaseType(const QCategoryAxis* self) {
	auto* vqcategoryaxis = dynamic_cast<const VirtualQCategoryAxis*>(self);
	if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
vqcategoryaxis->setQCategoryAxis_Type_IsBase(true);
	return vqcategoryaxis->type();
}
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnType(const QCategoryAxis* self, intptr_t slot) {
	auto* vqcategoryaxis = dynamic_cast<const VirtualQCategoryAxis*>(self);
	if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
vqcategoryaxis->setQCategoryAxis_Type_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Type_Callback>(slot));
}
}

void QCategoryAxis_Delete(QCategoryAxis* self) {
    delete self;
}

