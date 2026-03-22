#pragma once
#ifndef QSYNTAXHIGHLIGHTER_H_C_LIBVIRTUAL
#define QSYNTAXHIGHLIGHTER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSyntaxHighlighter so that we can call protected methods
class VirtualQSyntaxHighlighter : public QSyntaxHighlighter {

public:
	// Virtual class boolean flag
	bool isVirtualQSyntaxHighlighter= true;

	// Virtual class public types (including callbacks)
	using QSyntaxHighlighter_HighlightBlock_Callback = void (*)(QSyntaxHighlighter*, libqt_string);
	using QSyntaxHighlighter_SetFormat_Callback = void (*)(QSyntaxHighlighter*, int, int, const QTextCharFormat*);
	using QSyntaxHighlighter_SetFormat2_Callback = void (*)(QSyntaxHighlighter*, int, int, const QColor*);
	using QSyntaxHighlighter_SetFormat3_Callback = void (*)(QSyntaxHighlighter*, int, int, const QFont*);
	using QSyntaxHighlighter_Format_Callback = QTextCharFormat* (*)(const QSyntaxHighlighter*, int);
	using QSyntaxHighlighter_PreviousBlockState_Callback = int (*)();
	using QSyntaxHighlighter_CurrentBlockState_Callback = int (*)();
	using QSyntaxHighlighter_SetCurrentBlockState_Callback = void (*)(QSyntaxHighlighter*, int);
	using QSyntaxHighlighter_SetCurrentBlockUserData_Callback = void (*)(QSyntaxHighlighter*, QTextBlockUserData*);
	using QSyntaxHighlighter_CurrentBlockUserData_Callback = QTextBlockUserData* (*)();
	using QSyntaxHighlighter_CurrentBlock_Callback = QTextBlock* (*)();

protected:
	// Instance callback storage
	mutable QSyntaxHighlighter_HighlightBlock_Callback qsyntaxhighlighter_highlightblock_callback = nullptr;
	mutable QSyntaxHighlighter_SetFormat_Callback qsyntaxhighlighter_setformat_callback = nullptr;
	mutable QSyntaxHighlighter_SetFormat2_Callback qsyntaxhighlighter_setformat2_callback = nullptr;
	mutable QSyntaxHighlighter_SetFormat3_Callback qsyntaxhighlighter_setformat3_callback = nullptr;
	mutable QSyntaxHighlighter_Format_Callback qsyntaxhighlighter_format_callback = nullptr;
	mutable QSyntaxHighlighter_PreviousBlockState_Callback qsyntaxhighlighter_previousblockstate_callback = nullptr;
	mutable QSyntaxHighlighter_CurrentBlockState_Callback qsyntaxhighlighter_currentblockstate_callback = nullptr;
	mutable QSyntaxHighlighter_SetCurrentBlockState_Callback qsyntaxhighlighter_setcurrentblockstate_callback = nullptr;
	mutable QSyntaxHighlighter_SetCurrentBlockUserData_Callback qsyntaxhighlighter_setcurrentblockuserdata_callback = nullptr;
	mutable QSyntaxHighlighter_CurrentBlockUserData_Callback qsyntaxhighlighter_currentblockuserdata_callback = nullptr;
	mutable QSyntaxHighlighter_CurrentBlock_Callback qsyntaxhighlighter_currentblock_callback = nullptr;

	// Instance base flags
    mutable bool qsyntaxhighlighter_highlightblock_isbase = false;
    mutable bool qsyntaxhighlighter_setformat_isbase = false;
    mutable bool qsyntaxhighlighter_setformat2_isbase = false;
    mutable bool qsyntaxhighlighter_setformat3_isbase = false;
    mutable bool qsyntaxhighlighter_format_isbase = false;
    mutable bool qsyntaxhighlighter_previousblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_currentblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_setcurrentblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_setcurrentblockuserdata_isbase = false;
    mutable bool qsyntaxhighlighter_currentblockuserdata_isbase = false;
    mutable bool qsyntaxhighlighter_currentblock_isbase = false;

public:
	VirtualQSyntaxHighlighter(QObject* parent): QSyntaxHighlighter(parent) {};
	VirtualQSyntaxHighlighter(QTextDocument* parent): QSyntaxHighlighter(parent) {};

	~VirtualQSyntaxHighlighter() {
		qsyntaxhighlighter_highlightblock_callback = nullptr;
		qsyntaxhighlighter_setformat_callback = nullptr;
		qsyntaxhighlighter_setformat2_callback = nullptr;
		qsyntaxhighlighter_setformat3_callback = nullptr;
		qsyntaxhighlighter_format_callback = nullptr;
		qsyntaxhighlighter_previousblockstate_callback = nullptr;
		qsyntaxhighlighter_currentblockstate_callback = nullptr;
		qsyntaxhighlighter_setcurrentblockstate_callback = nullptr;
		qsyntaxhighlighter_setcurrentblockuserdata_callback = nullptr;
		qsyntaxhighlighter_currentblockuserdata_callback = nullptr;
		qsyntaxhighlighter_currentblock_callback = nullptr;
	}

// Callback setters
	inline void setQSyntaxHighlighter_HighlightBlock_Callback(QSyntaxHighlighter_HighlightBlock_Callback cb) const { qsyntaxhighlighter_highlightblock_callback = cb; }
	inline void setQSyntaxHighlighter_SetFormat_Callback(QSyntaxHighlighter_SetFormat_Callback cb) const { qsyntaxhighlighter_setformat_callback = cb; }
	inline void setQSyntaxHighlighter_SetFormat2_Callback(QSyntaxHighlighter_SetFormat2_Callback cb) const { qsyntaxhighlighter_setformat2_callback = cb; }
	inline void setQSyntaxHighlighter_SetFormat3_Callback(QSyntaxHighlighter_SetFormat3_Callback cb) const { qsyntaxhighlighter_setformat3_callback = cb; }
	inline void setQSyntaxHighlighter_Format_Callback(QSyntaxHighlighter_Format_Callback cb) const { qsyntaxhighlighter_format_callback = cb; }
	inline void setQSyntaxHighlighter_PreviousBlockState_Callback(QSyntaxHighlighter_PreviousBlockState_Callback cb) const { qsyntaxhighlighter_previousblockstate_callback = cb; }
	inline void setQSyntaxHighlighter_CurrentBlockState_Callback(QSyntaxHighlighter_CurrentBlockState_Callback cb) const { qsyntaxhighlighter_currentblockstate_callback = cb; }
	inline void setQSyntaxHighlighter_SetCurrentBlockState_Callback(QSyntaxHighlighter_SetCurrentBlockState_Callback cb) const { qsyntaxhighlighter_setcurrentblockstate_callback = cb; }
	inline void setQSyntaxHighlighter_SetCurrentBlockUserData_Callback(QSyntaxHighlighter_SetCurrentBlockUserData_Callback cb) const { qsyntaxhighlighter_setcurrentblockuserdata_callback = cb; }
	inline void setQSyntaxHighlighter_CurrentBlockUserData_Callback(QSyntaxHighlighter_CurrentBlockUserData_Callback cb) const { qsyntaxhighlighter_currentblockuserdata_callback = cb; }
	inline void setQSyntaxHighlighter_CurrentBlock_Callback(QSyntaxHighlighter_CurrentBlock_Callback cb) const { qsyntaxhighlighter_currentblock_callback = cb; }

// Base flag setters
	inline void setQSyntaxHighlighter_HighlightBlock_IsBase(bool value) const { qsyntaxhighlighter_highlightblock_isbase = value; }
	inline void setQSyntaxHighlighter_SetFormat_IsBase(bool value) const { qsyntaxhighlighter_setformat_isbase = value; }
	inline void setQSyntaxHighlighter_SetFormat2_IsBase(bool value) const { qsyntaxhighlighter_setformat2_isbase = value; }
	inline void setQSyntaxHighlighter_SetFormat3_IsBase(bool value) const { qsyntaxhighlighter_setformat3_isbase = value; }
	inline void setQSyntaxHighlighter_Format_IsBase(bool value) const { qsyntaxhighlighter_format_isbase = value; }
	inline void setQSyntaxHighlighter_PreviousBlockState_IsBase(bool value) const { qsyntaxhighlighter_previousblockstate_isbase = value; }
	inline void setQSyntaxHighlighter_CurrentBlockState_IsBase(bool value) const { qsyntaxhighlighter_currentblockstate_isbase = value; }
	inline void setQSyntaxHighlighter_SetCurrentBlockState_IsBase(bool value) const { qsyntaxhighlighter_setcurrentblockstate_isbase = value; }
	inline void setQSyntaxHighlighter_SetCurrentBlockUserData_IsBase(bool value) const { qsyntaxhighlighter_setcurrentblockuserdata_isbase = value; }
	inline void setQSyntaxHighlighter_CurrentBlockUserData_IsBase(bool value) const { qsyntaxhighlighter_currentblockuserdata_isbase = value; }
	inline void setQSyntaxHighlighter_CurrentBlock_IsBase(bool value) const { qsyntaxhighlighter_currentblock_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void highlightBlock(const QString& text) override {
		if (qsyntaxhighlighter_highlightblock_callback != nullptr) {
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval1;
			cbval1.len = text_qb.length();
			cbval1.data = static_cast<const char*>(text_qb.constData());
			qsyntaxhighlighter_highlightblock_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setFormat(int start, int count, const QTextCharFormat& format) {
		if (qsyntaxhighlighter_setformat_isbase) {
			qsyntaxhighlighter_setformat_isbase = false;
			QSyntaxHighlighter::setFormat(start, count, format);
		} else if (qsyntaxhighlighter_setformat_callback != nullptr) {
			int cbval1 = start;
			int cbval2 = count;
			const QTextCharFormat* cbval3 = (const QTextCharFormat*)&format;
			qsyntaxhighlighter_setformat_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSyntaxHighlighter::setFormat(start, count, format);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setFormat(int start, int count, const QColor& color) {
		if (qsyntaxhighlighter_setformat2_isbase) {
			qsyntaxhighlighter_setformat2_isbase = false;
			QSyntaxHighlighter::setFormat(start, count, color);
		} else if (qsyntaxhighlighter_setformat2_callback != nullptr) {
			int cbval1 = start;
			int cbval2 = count;
			const QColor* cbval3 = (const QColor*)&color;
			qsyntaxhighlighter_setformat2_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSyntaxHighlighter::setFormat(start, count, color);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setFormat(int start, int count, const QFont& font) {
		if (qsyntaxhighlighter_setformat3_isbase) {
			qsyntaxhighlighter_setformat3_isbase = false;
			QSyntaxHighlighter::setFormat(start, count, font);
		} else if (qsyntaxhighlighter_setformat3_callback != nullptr) {
			int cbval1 = start;
			int cbval2 = count;
			const QFont* cbval3 = (const QFont*)&font;
			qsyntaxhighlighter_setformat3_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSyntaxHighlighter::setFormat(start, count, font);
		}
	}

	// Virtual method for C ABI access and custom callback
	QTextCharFormat format(int pos) const {
		if (qsyntaxhighlighter_format_isbase) {
			qsyntaxhighlighter_format_isbase = false;
			return QSyntaxHighlighter::format(pos);
		} else if (qsyntaxhighlighter_format_callback != nullptr) {
			int cbval1 = pos;
			QTextCharFormat* callback_ret = qsyntaxhighlighter_format_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSyntaxHighlighter::format(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	int previousBlockState() const {
		if (qsyntaxhighlighter_previousblockstate_isbase) {
			qsyntaxhighlighter_previousblockstate_isbase = false;
			return QSyntaxHighlighter::previousBlockState();
		} else if (qsyntaxhighlighter_previousblockstate_callback != nullptr) {
			int callback_ret = qsyntaxhighlighter_previousblockstate_callback();
			return callback_ret;
		} else {
			return QSyntaxHighlighter::previousBlockState();
		}
	}

	// Virtual method for C ABI access and custom callback
	int currentBlockState() const {
		if (qsyntaxhighlighter_currentblockstate_isbase) {
			qsyntaxhighlighter_currentblockstate_isbase = false;
			return QSyntaxHighlighter::currentBlockState();
		} else if (qsyntaxhighlighter_currentblockstate_callback != nullptr) {
			int callback_ret = qsyntaxhighlighter_currentblockstate_callback();
			return callback_ret;
		} else {
			return QSyntaxHighlighter::currentBlockState();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setCurrentBlockState(int newState) {
		if (qsyntaxhighlighter_setcurrentblockstate_isbase) {
			qsyntaxhighlighter_setcurrentblockstate_isbase = false;
			QSyntaxHighlighter::setCurrentBlockState(newState);
		} else if (qsyntaxhighlighter_setcurrentblockstate_callback != nullptr) {
			int cbval1 = newState;
			qsyntaxhighlighter_setcurrentblockstate_callback(this, cbval1);
		} else {
			QSyntaxHighlighter::setCurrentBlockState(newState);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setCurrentBlockUserData(QTextBlockUserData* data) {
		if (qsyntaxhighlighter_setcurrentblockuserdata_isbase) {
			qsyntaxhighlighter_setcurrentblockuserdata_isbase = false;
			QSyntaxHighlighter::setCurrentBlockUserData(data);
		} else if (qsyntaxhighlighter_setcurrentblockuserdata_callback != nullptr) {
			QTextBlockUserData* cbval1 = data;
			qsyntaxhighlighter_setcurrentblockuserdata_callback(this, cbval1);
		} else {
			QSyntaxHighlighter::setCurrentBlockUserData(data);
		}
	}

	// Virtual method for C ABI access and custom callback
	QTextBlockUserData* currentBlockUserData() const {
		if (qsyntaxhighlighter_currentblockuserdata_isbase) {
			qsyntaxhighlighter_currentblockuserdata_isbase = false;
			return QSyntaxHighlighter::currentBlockUserData();
		} else if (qsyntaxhighlighter_currentblockuserdata_callback != nullptr) {
			QTextBlockUserData* callback_ret = qsyntaxhighlighter_currentblockuserdata_callback();
			return callback_ret;
		} else {
			return QSyntaxHighlighter::currentBlockUserData();
		}
	}

	// Virtual method for C ABI access and custom callback
	QTextBlock currentBlock() const {
		if (qsyntaxhighlighter_currentblock_isbase) {
			qsyntaxhighlighter_currentblock_isbase = false;
			return QSyntaxHighlighter::currentBlock();
		} else if (qsyntaxhighlighter_currentblock_callback != nullptr) {
			QTextBlock* callback_ret = qsyntaxhighlighter_currentblock_callback();
			return *callback_ret;
		} else {
			return QSyntaxHighlighter::currentBlock();
		}
	}

	// Friend functions
	friend void QSyntaxHighlighter_HighlightBlock(QSyntaxHighlighter* self, const libqt_string text);
	friend void QSyntaxHighlighter_QBaseHighlightBlock(QSyntaxHighlighter* self, const libqt_string text);
	friend void QSyntaxHighlighter_SetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
	friend void QSyntaxHighlighter_QBaseSetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
	friend void QSyntaxHighlighter_SetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
	friend void QSyntaxHighlighter_QBaseSetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
	friend void QSyntaxHighlighter_SetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
	friend void QSyntaxHighlighter_QBaseSetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
	friend QTextCharFormat* QSyntaxHighlighter_Format(const QSyntaxHighlighter* self, int pos);
	friend QTextCharFormat* QSyntaxHighlighter_QBaseFormat(const QSyntaxHighlighter* self, int pos);
	friend int QSyntaxHighlighter_PreviousBlockState(const QSyntaxHighlighter* self);
	friend int QSyntaxHighlighter_QBasePreviousBlockState(const QSyntaxHighlighter* self);
	friend int QSyntaxHighlighter_CurrentBlockState(const QSyntaxHighlighter* self);
	friend int QSyntaxHighlighter_QBaseCurrentBlockState(const QSyntaxHighlighter* self);
	friend void QSyntaxHighlighter_SetCurrentBlockState(QSyntaxHighlighter* self, int newState);
	friend void QSyntaxHighlighter_QBaseSetCurrentBlockState(QSyntaxHighlighter* self, int newState);
	friend void QSyntaxHighlighter_SetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
	friend void QSyntaxHighlighter_QBaseSetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
	friend QTextBlockUserData* QSyntaxHighlighter_CurrentBlockUserData(const QSyntaxHighlighter* self);
	friend QTextBlockUserData* QSyntaxHighlighter_QBaseCurrentBlockUserData(const QSyntaxHighlighter* self);
	friend QTextBlock* QSyntaxHighlighter_CurrentBlock(const QSyntaxHighlighter* self);
	friend QTextBlock* QSyntaxHighlighter_QBaseCurrentBlock(const QSyntaxHighlighter* self);
};

#endif


