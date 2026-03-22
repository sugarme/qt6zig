#include <QChar>
#include <QTextOption>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextOption__Tab
#include <qtextoption.h>
#include "libqtextoption.h"
#include "libqtextoption.hxx"

QTextOption* QTextOption_new() {
	 return new QTextOption();
}

QTextOption* QTextOption_new2(int alignment) {
	 return new QTextOption(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

QTextOption* QTextOption_new3(const QTextOption* o) {
	 return new QTextOption(*o);
}

void QTextOption_OperatorAssign(QTextOption* self, const QTextOption* o) {
	self->operator=(*o);
}

void QTextOption_SetAlignment(QTextOption* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QTextOption_Alignment(const QTextOption* self) {
	return self->alignment();
}

void QTextOption_SetTextDirection(QTextOption* self, int aDirection) {
	self->setTextDirection(static_cast<Qt::LayoutDirection>(aDirection));
}

int QTextOption_TextDirection(const QTextOption* self) {
	return self->textDirection();
}

void QTextOption_SetWrapMode(QTextOption* self, int wrap) {
	self->setWrapMode(static_cast<QTextOption::WrapMode>(wrap));
}

int QTextOption_WrapMode(const QTextOption* self) {
	return self->wrapMode();
}

void QTextOption_SetFlags(QTextOption* self, int flags) {
	self->setFlags(static_cast<QFlags<QTextOption::Flag>>(flags));
}

int QTextOption_Flags(const QTextOption* self) {
	return self->flags();
}

void QTextOption_SetTabStopDistance(QTextOption* self, double tabStopDistance) {
	self->setTabStopDistance(tabStopDistance);
}

double QTextOption_TabStopDistance(const QTextOption* self) {
	return self->tabStopDistance();
}

void QTextOption_SetTabArray(QTextOption* self, const libqt_list tabStops) {
	self->setTabArray(QList<double>());
}

libqt_list QTextOption_TabArray(const QTextOption* self) {
	auto _ret = self->tabArray();
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

void QTextOption_SetTabs(QTextOption* self, const libqt_list tabStops) {
	self->setTabs(QList<QTextOption::Tab>());
}

libqt_list QTextOption_Tabs(const QTextOption* self) {
	auto _ret = self->tabs();
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

void QTextOption_SetUseDesignMetrics(QTextOption* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextOption_UseDesignMetrics(const QTextOption* self) {
	return self->useDesignMetrics();
}

void QTextOption_Delete(QTextOption* self) {
    delete self;
}

QTextOption__Tab* QTextOption__Tab_new(const QTextOption__Tab* other) {
	 return new QTextOption::Tab(*other);
}

QTextOption__Tab* QTextOption__Tab_new2(QTextOption__Tab* other) {
	 return new QTextOption::Tab(*other);
}

QTextOption__Tab* QTextOption__Tab_new3() {
	 return new QTextOption::Tab();
}

QTextOption__Tab* QTextOption__Tab_new4(double pos, int tabType) {
	 return new QTextOption::Tab(pos, static_cast<QTextOption::TabType>(tabType));
}

QTextOption__Tab* QTextOption__Tab_new5(const QTextOption__Tab* param1) {
	 return new QTextOption::Tab(*param1);
}

QTextOption__Tab* QTextOption__Tab_new6(double pos, int tabType, QChar* delim) {
	 return new QTextOption::Tab(pos, static_cast<QTextOption::TabType>(tabType), *delim);
}

void QTextOption__Tab_CopyAssign(QTextOption__Tab* self, QTextOption__Tab* other) {
    *self = *other;
}

void QTextOption__Tab_MoveAssign(QTextOption__Tab* self, QTextOption__Tab* other) {
    *self = std::move(*other);
}

bool QTextOption__Tab_OperatorEqual(const QTextOption__Tab* self, const QTextOption__Tab* other) {
	return self->operator==(*other);
}

bool QTextOption__Tab_OperatorNotEqual(const QTextOption__Tab* self, const QTextOption__Tab* other) {
	return self->operator!=(*other);
}

double QTextOption__Tab_Position(const QTextOption__Tab* self) {
	return self->position;
}

void QTextOption__Tab_SetPosition(QTextOption__Tab* self, double position) {
	self->position;
}

int QTextOption__Tab_Type(const QTextOption__Tab* self) {
	return self->type;
}

void QTextOption__Tab_SetType(QTextOption__Tab* self, int type) {
	self->type;
}

QChar* QTextOption__Tab_Delimiter(const QTextOption__Tab* self) {
	return new QChar(self->delimiter);
}

void QTextOption__Tab_SetDelimiter(QTextOption__Tab* self, QChar* delimiter) {
	self->delimiter;
}

void QTextOption__Tab_OperatorAssign(QTextOption__Tab* self, const QTextOption__Tab* param1) {
	self->operator=(*param1);
}

void QTextOption__Tab_Delete(QTextOption__Tab* self) {
    delete self;
}

