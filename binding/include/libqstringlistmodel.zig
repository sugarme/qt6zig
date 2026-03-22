const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstringlistmodel.html
pub const qstringlistmodel = struct {

    /// New constructs a new QStringListModel object.
    pub fn New() QtC.QStringListModel {
        return qtc.QStringListModel_new();
    }


    /// New2 constructs a new QStringListModel object.
    pub fn New2(strings: []const u8) QtC.QStringListModel {
        return qtc.QStringListModel_new2(@ptrCast(strings));
    }


    /// New3 constructs a new QStringListModel object.
    pub fn New3(parent: ?*anyopaque) QtC.QStringListModel {
        return qtc.QStringListModel_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QStringListModel object.
    pub fn New4(strings: []const u8, parent: ?*anyopaque) QtC.QStringListModel {
        return qtc.QStringListModel_new4(@ptrCast(strings), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringListModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringlistmodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStringListModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStringListModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStringListModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStringListModel_Sibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QStringListModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStringListModel_QBaseSibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStringListModel_Data(@ptrCast(self), @ptrCast(index), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QStringListModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStringListModel_QBaseData(@ptrCast(self), @ptrCast(index), role);
    }

    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QStringListModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStringListModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QStringListModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QStringListModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStringListModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QStringListModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QStringListModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStringListModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QStringListModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStringListModel_InsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStringListModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStringListModel_QBaseInsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStringListModel_RemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStringListModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStringListModel_QBaseRemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QStringListModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceRow, count, @ptrCast(destinationParent), destinationChild);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStringListModel_OnMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QStringListModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceRow, count, @ptrCast(destinationParent), destinationChild);
    }

    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QStringListModel_ItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QMap<int, QVariant>) void {
        qtc.QStringListModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QStringListModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QStringListModel_SetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<int, QVariant>) callconv(.c) bool) void {
        qtc.QStringListModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QStringListModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QStringListModel_Sort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QStringListModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QStringListModel_QBaseSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn StringList(self: ?*anyopaque, ) []const u8 {
        return qtc.QStringListModel_StringList(@ptrCast(self));
    }

    pub fn SetStringList(self: ?*anyopaque, strings: []const u8) void {
        qtc.QStringListModel_SetStringList(@ptrCast(self), @ptrCast(strings));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QStringListModel_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QStringListModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QStringListModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringListModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringlistmodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStringListModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringlistmodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringListModel_Delete(@ptrCast(self));
    }
};
