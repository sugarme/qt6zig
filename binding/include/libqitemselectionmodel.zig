const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qitemselectionrange.html
pub const qitemselectionrange = struct {

    /// New constructs a new QItemSelectionRange object.
    pub fn New() QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_new();
    }


    /// New2 constructs a new QItemSelectionRange object.
    pub fn New2(topL: ?*anyopaque, bottomR: ?*anyopaque) QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_new2(@ptrCast(topL), @ptrCast(bottomR));
    }


    /// New3 constructs a new QItemSelectionRange object.
    pub fn New3(index: ?*anyopaque) QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_new3(@ptrCast(index));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QItemSelectionRange_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Top(self: ?*anyopaque, ) i32 {
        return qtc.QItemSelectionRange_Top(@ptrCast(self));
    }

    pub fn Left(self: ?*anyopaque, ) i32 {
        return qtc.QItemSelectionRange_Left(@ptrCast(self));
    }

    pub fn Bottom(self: ?*anyopaque, ) i32 {
        return qtc.QItemSelectionRange_Bottom(@ptrCast(self));
    }

    pub fn Right(self: ?*anyopaque, ) i32 {
        return qtc.QItemSelectionRange_Right(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QItemSelectionRange_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QItemSelectionRange_Height(@ptrCast(self));
    }

    pub fn TopLeft(self: ?*anyopaque, ) QtC.QPersistentModelIndex {
        return qtc.QItemSelectionRange_TopLeft(@ptrCast(self));
    }

    pub fn BottomRight(self: ?*anyopaque, ) QtC.QPersistentModelIndex {
        return qtc.QItemSelectionRange_BottomRight(@ptrCast(self));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QItemSelectionRange_Parent(@ptrCast(self));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QItemSelectionRange_Model(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemSelectionRange_Contains(@ptrCast(self), @ptrCast(index));
    }

    pub fn Contains2(self: ?*anyopaque, row: i32, column: i32, parentIndex: ?*anyopaque) bool {
        return qtc.QItemSelectionRange_Contains2(@ptrCast(self), row, column, @ptrCast(parentIndex));
    }

    pub fn Intersects(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QItemSelectionRange_Intersects(@ptrCast(self), @ptrCast(other));
    }

    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_Intersected(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QItemSelectionRange_IsValid(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QItemSelectionRange_IsEmpty(@ptrCast(self));
    }

    pub fn Indexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QItemSelectionRange_Indexes(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemSelectionRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qitemselectionmodel.html
pub const qitemselectionmodel = struct {

    /// New constructs a new QItemSelectionModel object.
    pub fn New() QtC.QItemSelectionModel {
        return qtc.QItemSelectionModel_new();
    }


    /// New2 constructs a new QItemSelectionModel object.
    pub fn New2(model: ?*anyopaque, parent: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.QItemSelectionModel_new2(@ptrCast(model), @ptrCast(parent));
    }


    /// New3 constructs a new QItemSelectionModel object.
    pub fn New3(model: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.QItemSelectionModel_new3(@ptrCast(model));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QItemSelectionModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QItemSelectionModel_CurrentIndex(@ptrCast(self));
    }

    pub fn IsSelected(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsSelected(@ptrCast(self), @ptrCast(index));
    }

    pub fn IsRowSelected(self: ?*anyopaque, row: i32) bool {
        return qtc.QItemSelectionModel_IsRowSelected(@ptrCast(self), row);
    }

    pub fn IsColumnSelected(self: ?*anyopaque, column: i32) bool {
        return qtc.QItemSelectionModel_IsColumnSelected(@ptrCast(self), column);
    }

    pub fn RowIntersectsSelection(self: ?*anyopaque, row: i32) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection(@ptrCast(self), row);
    }

    pub fn ColumnIntersectsSelection(self: ?*anyopaque, column: i32) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection(@ptrCast(self), column);
    }

    pub fn HasSelection(self: ?*anyopaque, ) bool {
        return qtc.QItemSelectionModel_HasSelection(@ptrCast(self));
    }

    pub fn SelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QItemSelectionModel_SelectedIndexes(@ptrCast(self));
    }

    pub fn SelectedRows(self: ?*anyopaque, ) []const u8 {
        return qtc.QItemSelectionModel_SelectedRows(@ptrCast(self));
    }

    pub fn SelectedColumns(self: ?*anyopaque, ) []const u8 {
        return qtc.QItemSelectionModel_SelectedColumns(@ptrCast(self));
    }

    pub fn Selection(self: ?*anyopaque, ) QtC.QItemSelection {
        return qtc.QItemSelectionModel_Selection(@ptrCast(self));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QItemSelectionModel_Model(@ptrCast(self));
    }

    pub fn Model2(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QItemSelectionModel_Model2(@ptrCast(self));
    }

    pub fn BindableModel(self: ?*anyopaque, ) QBindable<QAbstractItemModel *> {
        return qtc.QItemSelectionModel_BindableModel(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QItemSelectionModel_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_SetCurrentIndex(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// Allows for overriding the related default method
    pub fn OnSetCurrentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSetCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_QBaseSetCurrentIndex(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    pub fn Select(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_Select(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// Allows for overriding the related default method
    pub fn OnSelect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelect(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_QBaseSelect(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    pub fn Select2(self: ?*anyopaque, selection: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_Select2(@ptrCast(self), @ptrCast(selection), @intCast(command));
    }

    /// Allows for overriding the related default method
    pub fn OnSelect2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSelect2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelect2(self: ?*anyopaque, selection: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_QBaseSelect2(@ptrCast(self), @ptrCast(selection), @intCast(command));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QItemSelectionModel_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QItemSelectionModel_QBaseClear(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QItemSelectionModel_Reset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReset(self: ?*anyopaque, ) void {
        qtc.QItemSelectionModel_QBaseReset(@ptrCast(self));
    }

    pub fn ClearSelection(self: ?*anyopaque, ) void {
        qtc.QItemSelectionModel_ClearSelection(@ptrCast(self));
    }

    pub fn ClearCurrentIndex(self: ?*anyopaque, ) void {
        qtc.QItemSelectionModel_ClearCurrentIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClearCurrentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnClearCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClearCurrentIndex(self: ?*anyopaque, ) void {
        qtc.QItemSelectionModel_QBaseClearCurrentIndex(@ptrCast(self));
    }

    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QItemSelectionModel_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentRowChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentRowChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn OnCurrentRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentColumnChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentColumnChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn OnCurrentColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModelChanged(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QItemSelectionModel_ModelChanged(@ptrCast(self), @ptrCast(model));
    }

    pub fn OnModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_ModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn EmitSelectionChanged(self: ?*anyopaque, newSelection: ?*anyopaque, oldSelection: ?*anyopaque) void {
        qtc.QItemSelectionModel_EmitSelectionChanged(@ptrCast(self), @ptrCast(newSelection), @ptrCast(oldSelection));
    }

    /// Allows for overriding the related default method
    pub fn OnEmitSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnEmitSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEmitSelectionChanged(self: ?*anyopaque, newSelection: ?*anyopaque, oldSelection: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseEmitSelectionChanged(@ptrCast(self), @ptrCast(newSelection), @ptrCast(oldSelection));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QItemSelectionModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QItemSelectionModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsRowSelected2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsRowSelected2(@ptrCast(self), row, @ptrCast(parent));
    }

    pub fn IsColumnSelected2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsColumnSelected2(@ptrCast(self), column, @ptrCast(parent));
    }

    pub fn RowIntersectsSelection2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection2(@ptrCast(self), row, @ptrCast(parent));
    }

    pub fn ColumnIntersectsSelection2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection2(@ptrCast(self), column, @ptrCast(parent));
    }

    pub fn SelectedRows1(self: ?*anyopaque, column: i32) []const u8 {
        return qtc.QItemSelectionModel_SelectedRows1(@ptrCast(self), column);
    }

    pub fn SelectedColumns1(self: ?*anyopaque, row: i32) []const u8 {
        return qtc.QItemSelectionModel_SelectedColumns1(@ptrCast(self), row);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qitemselection.html
pub const qitemselection = struct {

    /// New constructs a new QItemSelection object.
    pub fn New(topLeft: ?*anyopaque, bottomRight: ?*anyopaque) QtC.QItemSelection {
        return qtc.QItemSelection_new(@ptrCast(topLeft), @ptrCast(bottomRight));
    }


    /// New2 constructs a new QItemSelection object.
    pub fn New2() QtC.QItemSelection {
        return qtc.QItemSelection_new2();
    }


    /// New3 constructs a new QItemSelection object.
    pub fn New3(param1: ?*anyopaque) QtC.QItemSelection {
        return qtc.QItemSelection_new3(@ptrCast(param1));
    }


    pub fn Select(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QItemSelection_Select(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    pub fn Contains(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemSelection_Contains(@ptrCast(self), @ptrCast(index));
    }

    pub fn Indexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QItemSelection_Indexes(@ptrCast(self));
    }

    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque, command: i32) void {
        qtc.QItemSelection_Merge(@ptrCast(self), @ptrCast(other), @intCast(command));
    }

    pub fn Split(range: ?*anyopaque, other: ?*anyopaque, result: ?*anyopaque) void {
        qtc.QItemSelection_Split(@ptrCast(range), @ptrCast(other), @ptrCast(result));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemSelection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/itemselectionmodel.html#types
pub const enums = struct {
    pub const SelectionFlag = enum {
        pub const NoUpdate: i32 = 0;
        pub const Clear: i32 = 1;
        pub const Select: i32 = 2;
        pub const Deselect: i32 = 4;
        pub const Toggle: i32 = 8;
        pub const Current: i32 = 16;
        pub const Rows: i32 = 32;
        pub const Columns: i32 = 64;
        pub const SelectCurrent: i32 = 18;
        pub const ToggleCurrent: i32 = 24;
        pub const ClearAndSelect: i32 = 3;
    };

};
