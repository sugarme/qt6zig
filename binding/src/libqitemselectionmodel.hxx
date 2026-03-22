#pragma once
#ifndef QITEMSELECTIONMODEL_H_C_LIBVIRTUAL
#define QITEMSELECTIONMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QItemSelectionModel so that we can call protected methods
class VirtualQItemSelectionModel final : public QItemSelectionModel {

public:
	// Virtual class boolean flag
	bool isVirtualQItemSelectionModel= true;

	// Virtual class public types (including callbacks)
	using QItemSelectionModel_SetCurrentIndex_Callback = void (*)(QItemSelectionModel*, const QModelIndex*, int);
	using QItemSelectionModel_Select_Callback = void (*)(QItemSelectionModel*, const QModelIndex*, int);
	using QItemSelectionModel_Select2_Callback = void (*)(QItemSelectionModel*, const QItemSelection*, int);
	using QItemSelectionModel_Clear_Callback = void (*)();
	using QItemSelectionModel_Reset_Callback = void (*)();
	using QItemSelectionModel_ClearCurrentIndex_Callback = void (*)();
	using QItemSelectionModel_EmitSelectionChanged_Callback = void (*)(QItemSelectionModel*, const QItemSelection*, const QItemSelection*);

protected:
	// Instance callback storage
	mutable QItemSelectionModel_SetCurrentIndex_Callback qitemselectionmodel_setcurrentindex_callback = nullptr;
	mutable QItemSelectionModel_Select_Callback qitemselectionmodel_select_callback = nullptr;
	mutable QItemSelectionModel_Select2_Callback qitemselectionmodel_select2_callback = nullptr;
	mutable QItemSelectionModel_Clear_Callback qitemselectionmodel_clear_callback = nullptr;
	mutable QItemSelectionModel_Reset_Callback qitemselectionmodel_reset_callback = nullptr;
	mutable QItemSelectionModel_ClearCurrentIndex_Callback qitemselectionmodel_clearcurrentindex_callback = nullptr;
	mutable QItemSelectionModel_EmitSelectionChanged_Callback qitemselectionmodel_emitselectionchanged_callback = nullptr;

	// Instance base flags
    mutable bool qitemselectionmodel_setcurrentindex_isbase = false;
    mutable bool qitemselectionmodel_select_isbase = false;
    mutable bool qitemselectionmodel_select2_isbase = false;
    mutable bool qitemselectionmodel_clear_isbase = false;
    mutable bool qitemselectionmodel_reset_isbase = false;
    mutable bool qitemselectionmodel_clearcurrentindex_isbase = false;
    mutable bool qitemselectionmodel_emitselectionchanged_isbase = false;

public:
	VirtualQItemSelectionModel(): QItemSelectionModel() {};
	VirtualQItemSelectionModel(QAbstractItemModel* model, QObject* parent): QItemSelectionModel(model, parent) {};
	VirtualQItemSelectionModel(QAbstractItemModel* model): QItemSelectionModel(model) {};

	~VirtualQItemSelectionModel() {
		qitemselectionmodel_setcurrentindex_callback = nullptr;
		qitemselectionmodel_select_callback = nullptr;
		qitemselectionmodel_select2_callback = nullptr;
		qitemselectionmodel_clear_callback = nullptr;
		qitemselectionmodel_reset_callback = nullptr;
		qitemselectionmodel_clearcurrentindex_callback = nullptr;
		qitemselectionmodel_emitselectionchanged_callback = nullptr;
	}

// Callback setters
	inline void setQItemSelectionModel_SetCurrentIndex_Callback(QItemSelectionModel_SetCurrentIndex_Callback cb) const { qitemselectionmodel_setcurrentindex_callback = cb; }
	inline void setQItemSelectionModel_Select_Callback(QItemSelectionModel_Select_Callback cb) const { qitemselectionmodel_select_callback = cb; }
	inline void setQItemSelectionModel_Select2_Callback(QItemSelectionModel_Select2_Callback cb) const { qitemselectionmodel_select2_callback = cb; }
	inline void setQItemSelectionModel_Clear_Callback(QItemSelectionModel_Clear_Callback cb) const { qitemselectionmodel_clear_callback = cb; }
	inline void setQItemSelectionModel_Reset_Callback(QItemSelectionModel_Reset_Callback cb) const { qitemselectionmodel_reset_callback = cb; }
	inline void setQItemSelectionModel_ClearCurrentIndex_Callback(QItemSelectionModel_ClearCurrentIndex_Callback cb) const { qitemselectionmodel_clearcurrentindex_callback = cb; }
	inline void setQItemSelectionModel_EmitSelectionChanged_Callback(QItemSelectionModel_EmitSelectionChanged_Callback cb) const { qitemselectionmodel_emitselectionchanged_callback = cb; }

// Base flag setters
	inline void setQItemSelectionModel_SetCurrentIndex_IsBase(bool value) const { qitemselectionmodel_setcurrentindex_isbase = value; }
	inline void setQItemSelectionModel_Select_IsBase(bool value) const { qitemselectionmodel_select_isbase = value; }
	inline void setQItemSelectionModel_Select2_IsBase(bool value) const { qitemselectionmodel_select2_isbase = value; }
	inline void setQItemSelectionModel_Clear_IsBase(bool value) const { qitemselectionmodel_clear_isbase = value; }
	inline void setQItemSelectionModel_Reset_IsBase(bool value) const { qitemselectionmodel_reset_isbase = value; }
	inline void setQItemSelectionModel_ClearCurrentIndex_IsBase(bool value) const { qitemselectionmodel_clearcurrentindex_isbase = value; }
	inline void setQItemSelectionModel_EmitSelectionChanged_IsBase(bool value) const { qitemselectionmodel_emitselectionchanged_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
		if (qitemselectionmodel_setcurrentindex_isbase) {
			qitemselectionmodel_setcurrentindex_isbase = false;
			QItemSelectionModel::setCurrentIndex(index, command);
		} else if (qitemselectionmodel_setcurrentindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(command);
			qitemselectionmodel_setcurrentindex_callback(this, cbval1, cbval2);
		} else {
			QItemSelectionModel::setCurrentIndex(index, command);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
		if (qitemselectionmodel_select_isbase) {
			qitemselectionmodel_select_isbase = false;
			QItemSelectionModel::select(index, command);
		} else if (qitemselectionmodel_select_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(command);
			qitemselectionmodel_select_callback(this, cbval1, cbval2);
		} else {
			QItemSelectionModel::select(index, command);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
		if (qitemselectionmodel_select2_isbase) {
			qitemselectionmodel_select2_isbase = false;
			QItemSelectionModel::select(selection, command);
		} else if (qitemselectionmodel_select2_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			int cbval2 = static_cast<int>(command);
			qitemselectionmodel_select2_callback(this, cbval1, cbval2);
		} else {
			QItemSelectionModel::select(selection, command);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qitemselectionmodel_clear_isbase) {
			qitemselectionmodel_clear_isbase = false;
			QItemSelectionModel::clear();
		} else if (qitemselectionmodel_clear_callback != nullptr) {
			qitemselectionmodel_clear_callback();
		} else {
			QItemSelectionModel::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void reset() override {
		if (qitemselectionmodel_reset_isbase) {
			qitemselectionmodel_reset_isbase = false;
			QItemSelectionModel::reset();
		} else if (qitemselectionmodel_reset_callback != nullptr) {
			qitemselectionmodel_reset_callback();
		} else {
			QItemSelectionModel::reset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clearCurrentIndex() override {
		if (qitemselectionmodel_clearcurrentindex_isbase) {
			qitemselectionmodel_clearcurrentindex_isbase = false;
			QItemSelectionModel::clearCurrentIndex();
		} else if (qitemselectionmodel_clearcurrentindex_callback != nullptr) {
			qitemselectionmodel_clearcurrentindex_callback();
		} else {
			QItemSelectionModel::clearCurrentIndex();
		}
	}

	// Virtual method for C ABI access and custom callback
	void emitSelectionChanged(const QItemSelection& newSelection, const QItemSelection& oldSelection) {
		if (qitemselectionmodel_emitselectionchanged_isbase) {
			qitemselectionmodel_emitselectionchanged_isbase = false;
			QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
		} else if (qitemselectionmodel_emitselectionchanged_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&newSelection;
			const QItemSelection* cbval2 = (const QItemSelection*)&oldSelection;
			qitemselectionmodel_emitselectionchanged_callback(this, cbval1, cbval2);
		} else {
			QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
		}
	}

	// Friend functions
	friend void QItemSelectionModel_EmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
	friend void QItemSelectionModel_QBaseEmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
};

#endif


