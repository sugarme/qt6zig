const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmodelroledata.html
pub const qmodelroledata = struct {

    /// New constructs a new QModelRoleData object.
    pub fn New(role: i32) QtC.QModelRoleData {
        return qtc.QModelRoleData_new(role);
    }


    pub fn Role(self: ?*anyopaque, ) i32 {
        return qtc.QModelRoleData_Role(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QModelRoleData_Data(@ptrCast(self));
    }

    pub fn Data2(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QModelRoleData_Data2(@ptrCast(self));
    }

    pub fn ClearData(self: ?*anyopaque, ) void {
        qtc.QModelRoleData_ClearData(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QModelRoleData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QModelRoleData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmodelroledataspan.html
pub const qmodelroledataspan = struct {

    /// New constructs a new QModelRoleDataSpan object.
    pub fn New(other: ?*anyopaque) QtC.QModelRoleDataSpan {
        return qtc.QModelRoleDataSpan_new(@ptrCast(other));
    }


    /// New2 constructs a new QModelRoleDataSpan object.
    pub fn New2(other: ?*anyopaque) QtC.QModelRoleDataSpan {
        return qtc.QModelRoleDataSpan_new2(@ptrCast(other));
    }


    /// New3 constructs a new QModelRoleDataSpan object.
    pub fn New3() QtC.QModelRoleDataSpan {
        return qtc.QModelRoleDataSpan_new3();
    }


    /// New4 constructs a new QModelRoleDataSpan object.
    pub fn New4(modelRoleData: ?*anyopaque) QtC.QModelRoleDataSpan {
        return qtc.QModelRoleDataSpan_new4(@ptrCast(modelRoleData));
    }


    /// New5 constructs a new QModelRoleDataSpan object.
    pub fn New5(modelRoleData: ?*anyopaque, lenVal: i64) QtC.QModelRoleDataSpan {
        return qtc.QModelRoleDataSpan_new5(@ptrCast(modelRoleData), lenVal);
    }


    /// New6 constructs a new QModelRoleDataSpan object.
    pub fn New6(param1: ?*anyopaque) QtC.QModelRoleDataSpan {
        return qtc.QModelRoleDataSpan_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QModelRoleDataSpan_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QModelRoleDataSpan_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QModelRoleDataSpan_Size(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i64 {
        return qtc.QModelRoleDataSpan_Length(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) QtC.QModelRoleData {
        return qtc.QModelRoleDataSpan_Data(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, ) QtC.QModelRoleData {
        return qtc.QModelRoleDataSpan_Begin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QtC.QModelRoleData {
        return qtc.QModelRoleDataSpan_End(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, index: i64) QtC.QModelRoleData {
        return qtc.QModelRoleDataSpan_OperatorSubscript(@ptrCast(self), index);
    }

    pub fn DataForRole(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QModelRoleDataSpan_DataForRole(@ptrCast(self), role);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QModelRoleDataSpan_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmodelindex.html
pub const qmodelindex = struct {

    /// New constructs a new QModelIndex object.
    pub fn New(other: ?*anyopaque) QtC.QModelIndex {
        return qtc.QModelIndex_new(@ptrCast(other));
    }


    /// New2 constructs a new QModelIndex object.
    pub fn New2(other: ?*anyopaque) QtC.QModelIndex {
        return qtc.QModelIndex_new2(@ptrCast(other));
    }


    /// New3 constructs a new QModelIndex object.
    pub fn New3() QtC.QModelIndex {
        return qtc.QModelIndex_new3();
    }


    /// New4 constructs a new QModelIndex object.
    pub fn New4(param1: ?*anyopaque) QtC.QModelIndex {
        return qtc.QModelIndex_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QModelIndex_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QModelIndex_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Row(self: ?*anyopaque, ) i32 {
        return qtc.QModelIndex_Row(@ptrCast(self));
    }

    pub fn Column(self: ?*anyopaque, ) i32 {
        return qtc.QModelIndex_Column(@ptrCast(self));
    }

    pub fn InternalId(self: ?*anyopaque, ) usize {
        return qtc.QModelIndex_InternalId(@ptrCast(self));
    }

    pub fn InternalPointer(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QModelIndex_InternalPointer(@ptrCast(self));
    }

    pub fn ConstInternalPointer(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QModelIndex_ConstInternalPointer(@ptrCast(self));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QModelIndex_Parent(@ptrCast(self));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QModelIndex_Sibling(@ptrCast(self), row, column);
    }

    pub fn SiblingAtColumn(self: ?*anyopaque, column: i32) QtC.QModelIndex {
        return qtc.QModelIndex_SiblingAtColumn(@ptrCast(self), column);
    }

    pub fn SiblingAtRow(self: ?*anyopaque, row: i32) QtC.QModelIndex {
        return qtc.QModelIndex_SiblingAtRow(@ptrCast(self), row);
    }

    pub fn Data(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QModelIndex_Data(@ptrCast(self));
    }

    pub fn MultiData(self: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QModelIndex_MultiData(@ptrCast(self), @ptrCast(roleDataSpan));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QModelIndex_Flags(@ptrCast(self));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QModelIndex_Model(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QModelIndex_IsValid(@ptrCast(self));
    }

    pub fn Data1(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QModelIndex_Data1(@ptrCast(self), role);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QModelIndex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpersistentmodelindex.html
pub const qpersistentmodelindex = struct {

    /// New constructs a new QPersistentModelIndex object.
    pub fn New() QtC.QPersistentModelIndex {
        return qtc.QPersistentModelIndex_new();
    }


    /// New2 constructs a new QPersistentModelIndex object.
    pub fn New2(index: ?*anyopaque) QtC.QPersistentModelIndex {
        return qtc.QPersistentModelIndex_new2(@ptrCast(index));
    }


    /// New3 constructs a new QPersistentModelIndex object.
    pub fn New3(other: ?*anyopaque) QtC.QPersistentModelIndex {
        return qtc.QPersistentModelIndex_new3(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPersistentModelIndex_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPersistentModelIndex_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorAssign2(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPersistentModelIndex_OperatorAssign2(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorQModelIndex(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QPersistentModelIndex_OperatorQModelIndex(@ptrCast(self));
    }

    pub fn Row(self: ?*anyopaque, ) i32 {
        return qtc.QPersistentModelIndex_Row(@ptrCast(self));
    }

    pub fn Column(self: ?*anyopaque, ) i32 {
        return qtc.QPersistentModelIndex_Column(@ptrCast(self));
    }

    pub fn InternalPointer(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QPersistentModelIndex_InternalPointer(@ptrCast(self));
    }

    pub fn ConstInternalPointer(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QPersistentModelIndex_ConstInternalPointer(@ptrCast(self));
    }

    pub fn InternalId(self: ?*anyopaque, ) usize {
        return qtc.QPersistentModelIndex_InternalId(@ptrCast(self));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QPersistentModelIndex_Parent(@ptrCast(self));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QPersistentModelIndex_Sibling(@ptrCast(self), row, column);
    }

    pub fn Data(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QPersistentModelIndex_Data(@ptrCast(self));
    }

    pub fn MultiData(self: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QPersistentModelIndex_MultiData(@ptrCast(self), @ptrCast(roleDataSpan));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QPersistentModelIndex_Flags(@ptrCast(self));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QPersistentModelIndex_Model(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QPersistentModelIndex_IsValid(@ptrCast(self));
    }

    pub fn Data1(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QPersistentModelIndex_Data1(@ptrCast(self), role);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPersistentModelIndex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractitemmodel.html
pub const qabstractitemmodel = struct {

    /// New constructs a new QAbstractItemModel object.
    pub fn New() QtC.QAbstractItemModel {
        return qtc.QAbstractItemModel_new();
    }


    /// New2 constructs a new QAbstractItemModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QAbstractItemModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractItemModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemmodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self), row, column);
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_Sibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_QBaseSibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QAbstractItemModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QAbstractItemModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QAbstractItemModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QAbstractItemModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QAbstractItemModel_Data(@ptrCast(self), @ptrCast(index), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QAbstractItemModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QAbstractItemModel_QBaseData(@ptrCast(self), @ptrCast(index), role);
    }

    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QAbstractItemModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QAbstractItemModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QAbstractItemModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QAbstractItemModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QAbstractItemModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QAbstractItemModel_SetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QAbstractItemModel_QBaseSetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QAbstractItemModel_ItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QMap<int, QVariant>) void {
        qtc.QAbstractItemModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QAbstractItemModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QAbstractItemModel_SetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<int, QVariant>) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QAbstractItemModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractItemModel_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAbstractItemModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractItemModel_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn MimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QAbstractItemModel_MimeData(@ptrCast(self), @ptrCast(indexes));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QAbstractItemModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QAbstractItemModel_QBaseMimeData(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnCanDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemModel_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn SupportedDragActions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemModel_SupportedDragActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemModel_OnSupportedDragActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDragActions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractItemModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseInsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseInsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseRemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseRemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceRow, count, @ptrCast(destinationParent), destinationChild);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceRow, count, @ptrCast(destinationParent), destinationChild);
    }

    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), sourceColumn, count, @ptrCast(destinationParent), destinationChild);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), sourceColumn, count, @ptrCast(destinationParent), destinationChild);
    }

    pub fn InsertRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self), row);
    }

    pub fn InsertColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self), column);
    }

    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self), row);
    }

    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self), column);
    }

    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), sourceRow, @ptrCast(destinationParent), destinationChild);
    }

    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), sourceColumn, @ptrCast(destinationParent), destinationChild);
    }

    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QAbstractItemModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QAbstractItemModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QAbstractItemModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QAbstractItemModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QAbstractItemModel_Sort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QAbstractItemModel_QBaseSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemModel_OnBuddy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32) []const u8 {
        return qtc.QAbstractItemModel_Match(@ptrCast(self), @ptrCast(start), role, @ptrCast(value), hits, @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAbstractItemModel_OnMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32) []const u8 {
        return qtc.QAbstractItemModel_QBaseMatch(@ptrCast(self), @ptrCast(start), role, @ptrCast(value), hits, @intCast(flags));
    }

    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAbstractItemModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    pub fn RoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QAbstractItemModel_RoleNames(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QHash<int, QByteArray>) void {
        qtc.QAbstractItemModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QAbstractItemModel_QBaseRoleNames(@ptrCast(self));
    }

    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QAbstractItemModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Allows for overriding the related default method
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnMultiData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QAbstractItemModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @intCast(orientation), first, last);
    }

    pub fn OnHeaderDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LayoutChanged(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LayoutAboutToBeChanged(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Submit(self: ?*anyopaque, ) bool {
        return qtc.QAbstractItemModel_Submit(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnSubmit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSubmit(self: ?*anyopaque, ) bool {
        return qtc.QAbstractItemModel_QBaseSubmit(@ptrCast(self));
    }

    pub fn Revert(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_Revert(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnRevert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRevert(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseRevert(@ptrCast(self));
    }

    pub fn ResetInternalData(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_ResetInternalData(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnResetInternalData(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnResetInternalData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResetInternalData(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseResetInternalData(@ptrCast(self));
    }

    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QAbstractItemModel_CreateIndex(@ptrCast(self), row, column);
    }

    /// Allows for overriding the related default method
    pub fn OnCreateIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemModel_OnCreateIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QAbstractItemModel_QBaseCreateIndex(@ptrCast(self), row, column);
    }

    pub fn CreateIndex2(self: ?*anyopaque, row: i32, column: i32, id: usize) QtC.QModelIndex {
        return qtc.QAbstractItemModel_CreateIndex2(@ptrCast(self), row, column, id);
    }

    /// Allows for overriding the related default method
    pub fn OnCreateIndex2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, usize) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemModel_OnCreateIndex2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateIndex2(self: ?*anyopaque, row: i32, column: i32, id: usize) QtC.QModelIndex {
        return qtc.QAbstractItemModel_QBaseCreateIndex2(@ptrCast(self), row, column, id);
    }

    pub fn EncodeData(self: ?*anyopaque, indexes: []const u8, stream: ?*anyopaque) void {
        qtc.QAbstractItemModel_EncodeData(@ptrCast(self), @ptrCast(indexes), @ptrCast(stream));
    }

    /// Allows for overriding the related default method
    pub fn OnEncodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnEncodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEncodeData(self: ?*anyopaque, indexes: []const u8, stream: ?*anyopaque) void {
        qtc.QAbstractItemModel_QBaseEncodeData(@ptrCast(self), @ptrCast(indexes), @ptrCast(stream));
    }

    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_DecodeData(@ptrCast(self), row, column, @ptrCast(parent), @ptrCast(stream));
    }

    /// Allows for overriding the related default method
    pub fn OnDecodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnDecodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseDecodeData(@ptrCast(self), row, column, @ptrCast(parent), @ptrCast(stream));
    }

    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QAbstractItemModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnBeginInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QAbstractItemModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn EndInsertRows(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_EndInsertRows(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnEndInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndInsertRows(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseEndInsertRows(@ptrCast(self));
    }

    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QAbstractItemModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnBeginRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QAbstractItemModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn EndRemoveRows(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_EndRemoveRows(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnEndRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndRemoveRows(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QAbstractItemModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceFirst, sourceLast, @ptrCast(destinationParent), destinationRow);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnBeginMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QAbstractItemModel_QBaseBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), sourceFirst, sourceLast, @ptrCast(destinationParent), destinationRow);
    }

    pub fn EndMoveRows(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_EndMoveRows(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnEndMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndMoveRows(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseEndMoveRows(@ptrCast(self));
    }

    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QAbstractItemModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnBeginInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QAbstractItemModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn EndInsertColumns(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_EndInsertColumns(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnEndInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndInsertColumns(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QAbstractItemModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), first, last);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnBeginRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QAbstractItemModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), first, last);
    }

    pub fn EndRemoveColumns(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnEndRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QAbstractItemModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), sourceFirst, sourceLast, @ptrCast(destinationParent), destinationColumn);
    }

    /// Allows for overriding the related default method
    pub fn OnBeginMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnBeginMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QAbstractItemModel_QBaseBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), sourceFirst, sourceLast, @ptrCast(destinationParent), destinationColumn);
    }

    pub fn EndMoveColumns(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_EndMoveColumns(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnEndMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndMoveColumns(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseEndMoveColumns(@ptrCast(self));
    }

    pub fn BeginResetModel(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_BeginResetModel(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnBeginResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeginResetModel(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseBeginResetModel(@ptrCast(self));
    }

    pub fn EndResetModel(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_EndResetModel(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnEndResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndResetModel(self: ?*anyopaque, ) void {
        qtc.QAbstractItemModel_QBaseEndResetModel(@ptrCast(self));
    }

    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QAbstractItemModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Allows for overriding the related default method
    pub fn OnChangePersistentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnChangePersistentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QAbstractItemModel_QBaseChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []const u8, to: []const u8) void {
        qtc.QAbstractItemModel_ChangePersistentIndexList(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Allows for overriding the related default method
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractItemModel_OnChangePersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangePersistentIndexList(self: ?*anyopaque, from: []const u8, to: []const u8) void {
        qtc.QAbstractItemModel_QBaseChangePersistentIndexList(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    pub fn PersistentIndexList(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractItemModel_PersistentIndexList(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAbstractItemModel_OnPersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePersistentIndexList(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractItemModel_QBasePersistentIndexList(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractItemModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemmodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractItemModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemmodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn InsertRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self), row, @ptrCast(parent));
    }

    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self), column, @ptrCast(parent));
    }

    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self), row, @ptrCast(parent));
    }

    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self), column, @ptrCast(parent));
    }

    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i32) bool {
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @intCast(options));
    }

    pub fn DataChanged3(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    pub fn OnDataChanged3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LayoutChanged1(self: ?*anyopaque, parents: []const u8) void {
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self), @ptrCast(parents));
    }

    pub fn OnLayoutChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LayoutChanged2(self: ?*anyopaque, parents: []const u8, hint: i32) void {
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self), @ptrCast(parents), @intCast(hint));
    }

    pub fn OnLayoutChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LayoutAboutToBeChanged1(self: ?*anyopaque, parents: []const u8) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self), @ptrCast(parents));
    }

    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LayoutAboutToBeChanged2(self: ?*anyopaque, parents: []const u8, hint: i32) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self), @ptrCast(parents), @intCast(hint));
    }

    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CreateIndex3(self: ?*anyopaque, row: i32, column: i32, data: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_CreateIndex3(@ptrCast(self), row, column, @ptrCast(data));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateIndex3(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemModel_OnCreateIndex3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateIndex3(self: ?*anyopaque, row: i32, column: i32, data: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_QBaseCreateIndex3(@ptrCast(self), row, column, @ptrCast(data));
    }

    /// Wrapper to allow calling private signal
    pub fn OnrowsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_rowsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnrowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_rowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnrowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_rowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnrowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_rowsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OncolumnsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_columnsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OncolumnsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_columnsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OncolumnsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_columnsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OncolumnsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_columnsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnmodelAboutToBeReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_modelAboutToBeReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnmodelReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_modelReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnrowsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_rowsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnrowsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_rowsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OncolumnsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_columnsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OncolumnsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_columnsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracttablemodel.html
pub const qabstracttablemodel = struct {

    /// New constructs a new QAbstractTableModel object.
    pub fn New() QtC.QAbstractTableModel {
        return qtc.QAbstractTableModel_new();
    }


    /// New2 constructs a new QAbstractTableModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QAbstractTableModel {
        return qtc.QAbstractTableModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTableModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttablemodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractTableModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractTableModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractTableModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractTableModel_Sibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractTableModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractTableModel_QBaseSibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractTableModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractTableModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractTableModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QAbstractTableModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractTableModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QAbstractTableModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTableModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttablemodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTableModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttablemodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractTableModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractlistmodel.html
pub const qabstractlistmodel = struct {

    /// New constructs a new QAbstractListModel object.
    pub fn New() QtC.QAbstractListModel {
        return qtc.QAbstractListModel_new();
    }


    /// New2 constructs a new QAbstractListModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QAbstractListModel {
        return qtc.QAbstractListModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractListModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractlistmodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractListModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractListModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractListModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractListModel_Sibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractListModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractListModel_QBaseSibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractListModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractListModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractListModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QAbstractListModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractListModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QAbstractListModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractListModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractlistmodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractListModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractlistmodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractListModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractitemmodel.html#types
pub const enums = struct {
    pub const LayoutChangeHint = enum {
        pub const NoLayoutChangeHint: i32 = 0;
        pub const VerticalSortHint: i32 = 1;
        pub const HorizontalSortHint: i32 = 2;
    };

    pub const CheckIndexOption = enum {
        pub const NoOption: i32 = 0;
        pub const IndexIsValid: i32 = 1;
        pub const DoNotUseParent: i32 = 2;
        pub const ParentIsInvalid: i32 = 4;
    };

};
