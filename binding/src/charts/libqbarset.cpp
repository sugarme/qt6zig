#include <QBarSet>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qbarset.h>
#include "libqbarset.h"
#include "libqbarset.hxx"

QBarSet* QBarSet_new(const libqt_string label) {
	 return new QBarSet(QString::fromUtf8(label.data, label.len));
}

QBarSet* QBarSet_new2(const libqt_string label, QObject* parent) {
	 return new QBarSet(QString::fromUtf8(label.data, label.len), parent);
}

libqt_string QBarSet_Tr(const char* s) {
	QString _ret = QBarSet::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBarSet_SetLabel(QBarSet* self, const libqt_string label) {
	self->setLabel(QString::fromUtf8(label.data, label.len));
}

libqt_string QBarSet_Label(const QBarSet* self) {
	QString _ret = self->label();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBarSet_Append(QBarSet* self, const double value) {
	self->append(value);
}

void QBarSet_Append2(QBarSet* self, const libqt_list values) {
	self->append(QList<double>());
}

QBarSet* QBarSet_OperatorShiftLeft(QBarSet* self, const double* value) {
	return new QBarSet(self->operator<<(*value));
}

void QBarSet_Insert(QBarSet* self, const int index, const double value) {
	self->insert(index, value);
}

void QBarSet_Remove(QBarSet* self, const int index) {
	self->remove(index);
}

void QBarSet_Replace(QBarSet* self, const int index, const double value) {
	self->replace(index, value);
}

double QBarSet_At(const QBarSet* self, const int index) {
	return self->at(index);
}

double QBarSet_OperatorSubscript(const QBarSet* self, const int index) {
	return self->operator[](index);
}

int QBarSet_Count(const QBarSet* self) {
	return self->count();
}

double QBarSet_Sum(const QBarSet* self) {
	return self->sum();
}

void QBarSet_SetPen(QBarSet* self, const QPen* pen) {
	self->setPen(*pen);
}

QPen* QBarSet_Pen(const QBarSet* self) {
	return new QPen(self->pen());
}

void QBarSet_SetBrush(QBarSet* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QBarSet_Brush(const QBarSet* self) {
	return new QBrush(self->brush());
}

void QBarSet_SetLabelBrush(QBarSet* self, const QBrush* brush) {
	self->setLabelBrush(*brush);
}

QBrush* QBarSet_LabelBrush(const QBarSet* self) {
	return new QBrush(self->labelBrush());
}

void QBarSet_SetLabelFont(QBarSet* self, const QFont* font) {
	self->setLabelFont(*font);
}

QFont* QBarSet_LabelFont(const QBarSet* self) {
	return new QFont(self->labelFont());
}

QColor* QBarSet_Color(QBarSet* self) {
	return new QColor(self->color());
}

void QBarSet_SetColor(QBarSet* self, QColor* color) {
	self->setColor(*color);
}

QColor* QBarSet_BorderColor(QBarSet* self) {
	return new QColor(self->borderColor());
}

void QBarSet_SetBorderColor(QBarSet* self, QColor* color) {
	self->setBorderColor(*color);
}

QColor* QBarSet_LabelColor(QBarSet* self) {
	return new QColor(self->labelColor());
}

void QBarSet_SetLabelColor(QBarSet* self, QColor* color) {
	self->setLabelColor(*color);
}

QColor* QBarSet_SelectedColor(const QBarSet* self) {
	return new QColor(self->selectedColor());
}

void QBarSet_SetSelectedColor(QBarSet* self, const QColor* color) {
	self->setSelectedColor(*color);
}

bool QBarSet_IsBarSelected(const QBarSet* self, int index) {
	return self->isBarSelected(index);
}

void QBarSet_SelectBar(QBarSet* self, int index) {
	self->selectBar(index);
}

void QBarSet_DeselectBar(QBarSet* self, int index) {
	self->deselectBar(index);
}

void QBarSet_SetBarSelected(QBarSet* self, int index, bool selected) {
	self->setBarSelected(index, selected);
}

void QBarSet_SelectAllBars(QBarSet* self) {
	self->selectAllBars();
}

void QBarSet_DeselectAllBars(QBarSet* self) {
	self->deselectAllBars();
}

void QBarSet_SelectBars(QBarSet* self, const libqt_list indexes) {
	self->selectBars(QList<int>());
}

void QBarSet_DeselectBars(QBarSet* self, const libqt_list indexes) {
	self->deselectBars(QList<int>());
}

void QBarSet_ToggleSelection(QBarSet* self, const libqt_list indexes) {
	self->toggleSelection(QList<int>());
}

libqt_list QBarSet_SelectedBars(const QBarSet* self) {
	auto _ret = self->selectedBars();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QBarSet_Clicked(QBarSet* self, int index) {
	self->clicked(index);
}

void QBarSet_Connect_Clicked(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::clicked, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QBarSet_Hovered(QBarSet* self, bool status, int index) {
	self->hovered(status, index);
}

void QBarSet_Connect_Hovered(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, bool, int) = reinterpret_cast<void (*)(QBarSet*, bool, int)>(slot);
    QBarSet::connect(self, &QBarSet::hovered, [self, slotFunc](bool status, int index) {
	slotFunc(self, status, index);
    });
}

void QBarSet_Pressed(QBarSet* self, int index) {
	self->pressed(index);
}

void QBarSet_Connect_Pressed(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::pressed, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QBarSet_Released(QBarSet* self, int index) {
	self->released(index);
}

void QBarSet_Connect_Released(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::released, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QBarSet_DoubleClicked(QBarSet* self, int index) {
	self->doubleClicked(index);
}

void QBarSet_Connect_DoubleClicked(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::doubleClicked, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QBarSet_PenChanged(QBarSet* self) {
	self->penChanged();
}

void QBarSet_Connect_PenChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::penChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBarSet_BrushChanged(QBarSet* self) {
	self->brushChanged();
}

void QBarSet_Connect_BrushChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::brushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBarSet_LabelChanged(QBarSet* self) {
	self->labelChanged();
}

void QBarSet_Connect_LabelChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::labelChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBarSet_LabelBrushChanged(QBarSet* self) {
	self->labelBrushChanged();
}

void QBarSet_Connect_LabelBrushChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::labelBrushChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBarSet_LabelFontChanged(QBarSet* self) {
	self->labelFontChanged();
}

void QBarSet_Connect_LabelFontChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::labelFontChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBarSet_ColorChanged(QBarSet* self, QColor* color) {
	self->colorChanged(*color);
}

void QBarSet_Connect_ColorChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, QColor*) = reinterpret_cast<void (*)(QBarSet*, QColor*)>(slot);
    QBarSet::connect(self, &QBarSet::colorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QBarSet_BorderColorChanged(QBarSet* self, QColor* color) {
	self->borderColorChanged(*color);
}

void QBarSet_Connect_BorderColorChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, QColor*) = reinterpret_cast<void (*)(QBarSet*, QColor*)>(slot);
    QBarSet::connect(self, &QBarSet::borderColorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QBarSet_LabelColorChanged(QBarSet* self, QColor* color) {
	self->labelColorChanged(*color);
}

void QBarSet_Connect_LabelColorChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, QColor*) = reinterpret_cast<void (*)(QBarSet*, QColor*)>(slot);
    QBarSet::connect(self, &QBarSet::labelColorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QBarSet_SelectedColorChanged(QBarSet* self, const QColor* color) {
	self->selectedColorChanged(*color);
}

void QBarSet_Connect_SelectedColorChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, const QColor*) = reinterpret_cast<void (*)(QBarSet*, const QColor*)>(slot);
    QBarSet::connect(self, &QBarSet::selectedColorChanged, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

void QBarSet_ValuesAdded(QBarSet* self, int index, int count) {
	self->valuesAdded(index, count);
}

void QBarSet_Connect_ValuesAdded(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int, int) = reinterpret_cast<void (*)(QBarSet*, int, int)>(slot);
    QBarSet::connect(self, &QBarSet::valuesAdded, [self, slotFunc](int index, int count) {
	slotFunc(self, index, count);
    });
}

void QBarSet_ValuesRemoved(QBarSet* self, int index, int count) {
	self->valuesRemoved(index, count);
}

void QBarSet_Connect_ValuesRemoved(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int, int) = reinterpret_cast<void (*)(QBarSet*, int, int)>(slot);
    QBarSet::connect(self, &QBarSet::valuesRemoved, [self, slotFunc](int index, int count) {
	slotFunc(self, index, count);
    });
}

void QBarSet_ValueChanged(QBarSet* self, int index) {
	self->valueChanged(index);
}

void QBarSet_Connect_ValueChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::valueChanged, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QBarSet_SelectedBarsChanged(QBarSet* self, const libqt_list indexes) {
	self->selectedBarsChanged(QList<int>());
}

void QBarSet_Connect_SelectedBarsChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, libqt_list) = reinterpret_cast<void (*)(QBarSet*, libqt_list)>(slot);
    QBarSet::connect(self, &QBarSet::selectedBarsChanged, [self, slotFunc](const QList<int>& indexes) {
	slotFunc(self, indexes);
    });
}

libqt_string QBarSet_Tr2(const char* s, const char* c) {
	QString _ret = QBarSet::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBarSet_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBarSet::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBarSet_Remove2(QBarSet* self, const int index, const int count) {
	self->remove(index, count);
}

void QBarSet_Delete(QBarSet* self) {
    delete self;
}

