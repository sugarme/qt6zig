const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstandarditem.html
pub const qstandarditem = struct {

    /// New constructs a new QStandardItem object.
    pub fn New() QtC.QStandardItem {
        return qtc.QStandardItem_new();
    }


    /// New2 constructs a new QStandardItem object.
    pub fn New2(text: []const u8) QtC.QStandardItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QStandardItem_new2(text_str);
    }


    /// New3 constructs a new QStandardItem object.
    pub fn New3(icon: ?*anyopaque, text: []const u8) QtC.QStandardItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QStandardItem_new3(@ptrCast(icon), text_str);
    }


    /// New4 constructs a new QStandardItem object.
    pub fn New4(rows: i32) QtC.QStandardItem {
        return qtc.QStandardItem_new4(rows);
    }


    /// New5 constructs a new QStandardItem object.
    pub fn New5(rows: i32, columns: i32) QtC.QStandardItem {
        return qtc.QStandardItem_new5(rows, columns);
    }


    pub fn Data(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStandardItem_Data(@ptrCast(self), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QStandardItem_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStandardItem_QBaseData(@ptrCast(self), role);
    }

    pub fn MultiData(self: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QStandardItem_MultiData(@ptrCast(self), @ptrCast(roleDataSpan));
    }

    /// Allows for overriding the related default method
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QStandardItem_OnMultiData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMultiData(self: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QStandardItem_QBaseMultiData(@ptrCast(self), @ptrCast(roleDataSpan));
    }

    pub fn SetData(self: ?*anyopaque, value: ?*anyopaque, role: i32) void {
        qtc.QStandardItem_SetData(@ptrCast(self), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStandardItem_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, value: ?*anyopaque, role: i32) void {
        qtc.QStandardItem_QBaseSetData(@ptrCast(self), @ptrCast(value), role);
    }

    pub fn ClearData(self: ?*anyopaque, ) void {
        qtc.QStandardItem_ClearData(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItem_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStandardItem_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStandardItem_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QStandardItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn ToolTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItem_ToolTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
    .len = toolTip.len,
    .data = toolTip.ptr,
};
qtc.QStandardItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    pub fn StatusTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItem_StatusTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.StatusTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
    .len = statusTip.len,
    .data = statusTip.ptr,
};
qtc.QStandardItem_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    pub fn WhatsThis(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItem_WhatsThis(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.WhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
    .len = whatsThis.len,
    .data = whatsThis.ptr,
};
qtc.QStandardItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStandardItem_SizeHint(@ptrCast(self));
    }

    pub fn SetSizeHint(self: ?*anyopaque, sizeHint: ?*anyopaque) void {
        qtc.QStandardItem_SetSizeHint(@ptrCast(self), @ptrCast(sizeHint));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QStandardItem_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QStandardItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn TextAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_TextAlignment(@ptrCast(self));
    }

    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStandardItem_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    pub fn Background(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QStandardItem_Background(@ptrCast(self));
    }

    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QStandardItem_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Foreground(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QStandardItem_Foreground(@ptrCast(self));
    }

    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QStandardItem_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    pub fn CheckState(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_CheckState(@ptrCast(self));
    }

    pub fn SetCheckState(self: ?*anyopaque, checkState: i32) void {
        qtc.QStandardItem_SetCheckState(@ptrCast(self), @intCast(checkState));
    }

    pub fn AccessibleText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItem_AccessibleText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.AccessibleText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAccessibleText(self: ?*anyopaque, accessibleText: []const u8) void {
        const accessibleText_str = qtc.libqt_string{
    .len = accessibleText.len,
    .data = accessibleText.ptr,
};
qtc.QStandardItem_SetAccessibleText(@ptrCast(self), accessibleText_str);
    }

    pub fn AccessibleDescription(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItem_AccessibleDescription(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.AccessibleDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAccessibleDescription(self: ?*anyopaque, accessibleDescription: []const u8) void {
        const accessibleDescription_str = qtc.libqt_string{
    .len = accessibleDescription.len,
    .data = accessibleDescription.ptr,
};
qtc.QStandardItem_SetAccessibleDescription(@ptrCast(self), accessibleDescription_str);
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QStandardItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_IsEnabled(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QStandardItem_SetEnabled(@ptrCast(self), enabled);
    }

    pub fn IsEditable(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_IsEditable(@ptrCast(self));
    }

    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QStandardItem_SetEditable(@ptrCast(self), editable);
    }

    pub fn IsSelectable(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_IsSelectable(@ptrCast(self));
    }

    pub fn SetSelectable(self: ?*anyopaque, selectable: bool) void {
        qtc.QStandardItem_SetSelectable(@ptrCast(self), selectable);
    }

    pub fn IsCheckable(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_IsCheckable(@ptrCast(self));
    }

    pub fn SetCheckable(self: ?*anyopaque, checkable: bool) void {
        qtc.QStandardItem_SetCheckable(@ptrCast(self), checkable);
    }

    pub fn IsAutoTristate(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_IsAutoTristate(@ptrCast(self));
    }

    pub fn SetAutoTristate(self: ?*anyopaque, tristate: bool) void {
        qtc.QStandardItem_SetAutoTristate(@ptrCast(self), tristate);
    }

    pub fn IsUserTristate(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_IsUserTristate(@ptrCast(self));
    }

    pub fn SetUserTristate(self: ?*anyopaque, tristate: bool) void {
        qtc.QStandardItem_SetUserTristate(@ptrCast(self), tristate);
    }

    pub fn IsDragEnabled(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_IsDragEnabled(@ptrCast(self));
    }

    pub fn SetDragEnabled(self: ?*anyopaque, dragEnabled: bool) void {
        qtc.QStandardItem_SetDragEnabled(@ptrCast(self), dragEnabled);
    }

    pub fn IsDropEnabled(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_IsDropEnabled(@ptrCast(self));
    }

    pub fn SetDropEnabled(self: ?*anyopaque, dropEnabled: bool) void {
        qtc.QStandardItem_SetDropEnabled(@ptrCast(self), dropEnabled);
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QStandardItem {
        return qtc.QStandardItem_Parent(@ptrCast(self));
    }

    pub fn Row(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_Row(@ptrCast(self));
    }

    pub fn Column(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_Column(@ptrCast(self));
    }

    pub fn Index(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QStandardItem_Index(@ptrCast(self));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QStandardItemModel {
        return qtc.QStandardItem_Model(@ptrCast(self));
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_RowCount(@ptrCast(self));
    }

    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        qtc.QStandardItem_SetRowCount(@ptrCast(self), rows);
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_ColumnCount(@ptrCast(self));
    }

    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        qtc.QStandardItem_SetColumnCount(@ptrCast(self), columns);
    }

    pub fn HasChildren(self: ?*anyopaque, ) bool {
        return qtc.QStandardItem_HasChildren(@ptrCast(self));
    }

    pub fn Child(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItem_Child(@ptrCast(self), row);
    }

    pub fn SetChild(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        qtc.QStandardItem_SetChild(@ptrCast(self), row, column, @ptrCast(item));
    }

    pub fn SetChild2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItem_SetChild2(@ptrCast(self), row, @ptrCast(item));
    }

    pub fn InsertRow(self: ?*anyopaque, row: i32, items: []const u8) void {
        qtc.QStandardItem_InsertRow(@ptrCast(self), row, @ptrCast(items));
    }

    pub fn InsertColumn(self: ?*anyopaque, column: i32, items: []const u8) void {
        qtc.QStandardItem_InsertColumn(@ptrCast(self), column, @ptrCast(items));
    }

    pub fn InsertRows(self: ?*anyopaque, row: i32, items: []const u8) void {
        qtc.QStandardItem_InsertRows(@ptrCast(self), row, @ptrCast(items));
    }

    pub fn InsertRows2(self: ?*anyopaque, row: i32, count: i32) void {
        qtc.QStandardItem_InsertRows2(@ptrCast(self), row, count);
    }

    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32) void {
        qtc.QStandardItem_InsertColumns(@ptrCast(self), column, count);
    }

    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        qtc.QStandardItem_RemoveRow(@ptrCast(self), row);
    }

    pub fn RemoveColumn(self: ?*anyopaque, column: i32) void {
        qtc.QStandardItem_RemoveColumn(@ptrCast(self), column);
    }

    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32) void {
        qtc.QStandardItem_RemoveRows(@ptrCast(self), row, count);
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32) void {
        qtc.QStandardItem_RemoveColumns(@ptrCast(self), column, count);
    }

    pub fn AppendRow(self: ?*anyopaque, items: []const u8) void {
        qtc.QStandardItem_AppendRow(@ptrCast(self), @ptrCast(items));
    }

    pub fn AppendRows(self: ?*anyopaque, items: []const u8) void {
        qtc.QStandardItem_AppendRows(@ptrCast(self), @ptrCast(items));
    }

    pub fn AppendColumn(self: ?*anyopaque, items: []const u8) void {
        qtc.QStandardItem_AppendColumn(@ptrCast(self), @ptrCast(items));
    }

    pub fn InsertRow2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItem_InsertRow2(@ptrCast(self), row, @ptrCast(item));
    }

    pub fn AppendRow2(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStandardItem_AppendRow2(@ptrCast(self), @ptrCast(item));
    }

    pub fn TakeChild(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItem_TakeChild(@ptrCast(self), row);
    }

    pub fn TakeRow(self: ?*anyopaque, row: i32) []const u8 {
        return qtc.QStandardItem_TakeRow(@ptrCast(self), row);
    }

    pub fn TakeColumn(self: ?*anyopaque, column: i32) []const u8 {
        return qtc.QStandardItem_TakeColumn(@ptrCast(self), column);
    }

    pub fn SortChildren(self: ?*anyopaque, column: i32) void {
        qtc.QStandardItem_SortChildren(@ptrCast(self), column);
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItem_QBaseType(@ptrCast(self));
    }

    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QStandardItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Allows for overriding the related default method
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItem_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QStandardItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QStandardItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Allows for overriding the related default method
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItem_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QStandardItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QStandardItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorLesser(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItem_OnOperatorLesser(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QStandardItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStandardItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItem_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStandardItem_QBaseOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn EmitDataChanged(self: ?*anyopaque, ) void {
        qtc.QStandardItem_EmitDataChanged(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEmitDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItem_OnEmitDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEmitDataChanged(self: ?*anyopaque, ) void {
        qtc.QStandardItem_QBaseEmitDataChanged(@ptrCast(self));
    }

    pub fn Child2(self: ?*anyopaque, row: i32, column: i32) QtC.QStandardItem {
        return qtc.QStandardItem_Child2(@ptrCast(self), row, column);
    }

    pub fn TakeChild2(self: ?*anyopaque, row: i32, column: i32) QtC.QStandardItem {
        return qtc.QStandardItem_TakeChild2(@ptrCast(self), row, column);
    }

    pub fn SortChildren2(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QStandardItem_SortChildren2(@ptrCast(self), column, @intCast(order));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStandardItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstandarditemmodel.html
pub const qstandarditemmodel = struct {

    /// New constructs a new QStandardItemModel object.
    pub fn New() QtC.QStandardItemModel {
        return qtc.QStandardItemModel_new();
    }


    /// New2 constructs a new QStandardItemModel object.
    pub fn New2(rows: i32, columns: i32) QtC.QStandardItemModel {
        return qtc.QStandardItemModel_new2(rows, columns);
    }


    /// New3 constructs a new QStandardItemModel object.
    pub fn New3(parent: ?*anyopaque) QtC.QStandardItemModel {
        return qtc.QStandardItemModel_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QStandardItemModel object.
    pub fn New4(rows: i32, columns: i32, parent: ?*anyopaque) QtC.QStandardItemModel {
        return qtc.QStandardItemModel_new4(rows, columns, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItemModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditemmodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetItemRoleNames(self: ?*anyopaque, roleNames: *const QHash<int, QByteArray>) void {
        qtc.QStandardItemModel_SetItemRoleNames(@ptrCast(self), @ptrCast(roleNames));
    }

    pub fn RoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QStandardItemModel_RoleNames(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QHash<int, QByteArray>) void {
        qtc.QStandardItemModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QStandardItemModel_QBaseRoleNames(@ptrCast(self));
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QStandardItemModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QStandardItemModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStandardItemModel_Data(@ptrCast(self), @ptrCast(index), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QStandardItemModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStandardItemModel_QBaseData(@ptrCast(self), @ptrCast(index), role);
    }

    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QStandardItemModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Allows for overriding the related default method
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QStandardItemModel_OnMultiData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QStandardItemModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QStandardItemModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QStandardItemModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QStandardItemModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QStandardItemModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QStandardItemModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QStandardItemModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QStandardItemModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QStandardItemModel_SetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QStandardItemModel_QBaseSetHeaderData(@ptrCast(self), section, @intCast(orientation), @ptrCast(value), role);
    }

    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_InsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_QBaseInsertRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_InsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_QBaseInsertColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_RemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_QBaseRemoveRows(@ptrCast(self), row, count, @ptrCast(parent));
    }

    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_RemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_QBaseRemoveColumns(@ptrCast(self), column, count, @ptrCast(parent));
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItemModel_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItemModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QStandardItemModel_ItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QMap<int, QVariant>) void {
        qtc.QStandardItemModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque) QMap<int, QVariant> {
        return qtc.QStandardItemModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QStandardItemModel_SetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<int, QVariant>) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: *const QMap<int, QVariant>) bool {
        return qtc.QStandardItemModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), @ptrCast(roles));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QStandardItemModel_Clear(@ptrCast(self));
    }

    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QStandardItemModel_Sort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QStandardItemModel_QBaseSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QStandardItem {
        return qtc.QStandardItemModel_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn Item(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_Item(@ptrCast(self), row);
    }

    pub fn SetItem(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetItem(@ptrCast(self), row, column, @ptrCast(item));
    }

    pub fn SetItem2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetItem2(@ptrCast(self), row, @ptrCast(item));
    }

    pub fn InvisibleRootItem(self: ?*anyopaque, ) QtC.QStandardItem {
        return qtc.QStandardItemModel_InvisibleRootItem(@ptrCast(self));
    }

    pub fn HorizontalHeaderItem(self: ?*anyopaque, column: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_HorizontalHeaderItem(@ptrCast(self), column);
    }

    pub fn SetHorizontalHeaderItem(self: ?*anyopaque, column: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetHorizontalHeaderItem(@ptrCast(self), column, @ptrCast(item));
    }

    pub fn VerticalHeaderItem(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_VerticalHeaderItem(@ptrCast(self), row);
    }

    pub fn SetVerticalHeaderItem(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetVerticalHeaderItem(@ptrCast(self), row, @ptrCast(item));
    }

    pub fn SetHorizontalHeaderLabels(self: ?*anyopaque, labels: []const u8) void {
        qtc.QStandardItemModel_SetHorizontalHeaderLabels(@ptrCast(self), @ptrCast(labels));
    }

    pub fn SetVerticalHeaderLabels(self: ?*anyopaque, labels: []const u8) void {
        qtc.QStandardItemModel_SetVerticalHeaderLabels(@ptrCast(self), @ptrCast(labels));
    }

    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        qtc.QStandardItemModel_SetRowCount(@ptrCast(self), rows);
    }

    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        qtc.QStandardItemModel_SetColumnCount(@ptrCast(self), columns);
    }

    pub fn AppendRow(self: ?*anyopaque, items: []const u8) void {
        qtc.QStandardItemModel_AppendRow(@ptrCast(self), @ptrCast(items));
    }

    pub fn AppendColumn(self: ?*anyopaque, items: []const u8) void {
        qtc.QStandardItemModel_AppendColumn(@ptrCast(self), @ptrCast(items));
    }

    pub fn AppendRow2(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStandardItemModel_AppendRow2(@ptrCast(self), @ptrCast(item));
    }

    pub fn InsertRow(self: ?*anyopaque, row: i32, items: []const u8) void {
        qtc.QStandardItemModel_InsertRow(@ptrCast(self), row, @ptrCast(items));
    }

    pub fn InsertColumn(self: ?*anyopaque, column: i32, items: []const u8) void {
        qtc.QStandardItemModel_InsertColumn(@ptrCast(self), column, @ptrCast(items));
    }

    pub fn InsertRow2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_InsertRow2(@ptrCast(self), row, @ptrCast(item));
    }

    pub fn InsertRow3(self: ?*anyopaque, row: i32) bool {
        return qtc.QStandardItemModel_InsertRow3(@ptrCast(self), row);
    }

    pub fn InsertColumn2(self: ?*anyopaque, column: i32) bool {
        return qtc.QStandardItemModel_InsertColumn2(@ptrCast(self), column);
    }

    pub fn TakeItem(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_TakeItem(@ptrCast(self), row);
    }

    pub fn TakeRow(self: ?*anyopaque, row: i32) []const u8 {
        return qtc.QStandardItemModel_TakeRow(@ptrCast(self), row);
    }

    pub fn TakeColumn(self: ?*anyopaque, column: i32) []const u8 {
        return qtc.QStandardItemModel_TakeColumn(@ptrCast(self), column);
    }

    pub fn TakeHorizontalHeaderItem(self: ?*anyopaque, column: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_TakeHorizontalHeaderItem(@ptrCast(self), column);
    }

    pub fn TakeVerticalHeaderItem(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_TakeVerticalHeaderItem(@ptrCast(self), row);
    }

    pub fn ItemPrototype(self: ?*anyopaque, ) QtC.QStandardItem {
        return qtc.QStandardItemModel_ItemPrototype(@ptrCast(self));
    }

    pub fn SetItemPrototype(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetItemPrototype(@ptrCast(self), @ptrCast(item));
    }

    pub fn FindItems(self: ?*anyopaque, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QStandardItemModel_FindItems(@ptrCast(self), text_str);
    }

    pub fn SortRole(self: ?*anyopaque, ) i32 {
        return qtc.QStandardItemModel_SortRole(@ptrCast(self));
    }

    pub fn SetSortRole(self: ?*anyopaque, role: i32) void {
        qtc.QStandardItemModel_SetSortRole(@ptrCast(self), role);
    }

    pub fn BindableSortRole(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QStandardItemModel_BindableSortRole(@ptrCast(self));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QStandardItemModel_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QStandardItemModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QStandardItemModel_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn MimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QStandardItemModel_MimeData(@ptrCast(self), @ptrCast(indexes));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QStandardItemModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QStandardItemModel_QBaseMimeData(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStandardItemModel_ItemChanged(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_Connect_ItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItemModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditemmodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardItemModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditemmodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Item2(self: ?*anyopaque, row: i32, column: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_Item2(@ptrCast(self), row, column);
    }

    pub fn InsertRow22(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_InsertRow22(@ptrCast(self), row, @ptrCast(parent));
    }

    pub fn InsertColumn22(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_InsertColumn22(@ptrCast(self), column, @ptrCast(parent));
    }

    pub fn TakeItem2(self: ?*anyopaque, row: i32, column: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_TakeItem2(@ptrCast(self), row, column);
    }

    pub fn FindItems2(self: ?*anyopaque, text: []const u8, flags: i32) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QStandardItemModel_FindItems2(@ptrCast(self), text_str, @intCast(flags));
    }

    pub fn FindItems3(self: ?*anyopaque, text: []const u8, flags: i32, column: i32) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QStandardItemModel_FindItems3(@ptrCast(self), text_str, @intCast(flags), column);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStandardItemModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/standarditemmodel.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };

};
