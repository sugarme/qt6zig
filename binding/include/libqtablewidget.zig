const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtablewidgetselectionrange.html
pub const qtablewidgetselectionrange = struct {

    /// New constructs a new QTableWidgetSelectionRange object.
    pub fn New(other: ?*anyopaque) QtC.QTableWidgetSelectionRange {
        return qtc.QTableWidgetSelectionRange_new(@ptrCast(other));
    }


    /// New2 constructs a new QTableWidgetSelectionRange object.
    pub fn New2(other: ?*anyopaque) QtC.QTableWidgetSelectionRange {
        return qtc.QTableWidgetSelectionRange_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTableWidgetSelectionRange object.
    pub fn New3() QtC.QTableWidgetSelectionRange {
        return qtc.QTableWidgetSelectionRange_new3();
    }


    /// New4 constructs a new QTableWidgetSelectionRange object.
    pub fn New4(top: i32, left: i32, bottom: i32, right: i32) QtC.QTableWidgetSelectionRange {
        return qtc.QTableWidgetSelectionRange_new4(top, left, bottom, right);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTableWidgetSelectionRange_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTableWidgetSelectionRange_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn TopRow(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetSelectionRange_TopRow(@ptrCast(self));
    }

    pub fn BottomRow(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetSelectionRange_BottomRow(@ptrCast(self));
    }

    pub fn LeftColumn(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetSelectionRange_LeftColumn(@ptrCast(self));
    }

    pub fn RightColumn(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetSelectionRange_RightColumn(@ptrCast(self));
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetSelectionRange_RowCount(@ptrCast(self));
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetSelectionRange_ColumnCount(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTableWidgetSelectionRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtablewidgetitem.html
pub const qtablewidgetitem = struct {

    /// New constructs a new QTableWidgetItem object.
    pub fn New() QtC.QTableWidgetItem {
        return qtc.QTableWidgetItem_new();
    }


    /// New2 constructs a new QTableWidgetItem object.
    pub fn New2(text: []const u8) QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTableWidgetItem_new2(text_str);
    }


    /// New3 constructs a new QTableWidgetItem object.
    pub fn New3(icon: ?*anyopaque, text: []const u8) QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTableWidgetItem_new3(@ptrCast(icon), text_str);
    }


    /// New4 constructs a new QTableWidgetItem object.
    pub fn New4(other: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidgetItem_new4(@ptrCast(other));
    }


    /// New5 constructs a new QTableWidgetItem object.
    pub fn New5(typeVal: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidgetItem_new5(typeVal);
    }


    /// New6 constructs a new QTableWidgetItem object.
    pub fn New6(text: []const u8, typeVal: i32) QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTableWidgetItem_new6(text_str, typeVal);
    }


    /// New7 constructs a new QTableWidgetItem object.
    pub fn New7(icon: ?*anyopaque, text: []const u8, typeVal: i32) QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTableWidgetItem_new7(@ptrCast(icon), text_str, typeVal);
    }


    pub fn TableWidget(self: ?*anyopaque, ) QtC.QTableWidget {
        return qtc.QTableWidgetItem_TableWidget(@ptrCast(self));
    }

    pub fn Row(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetItem_Row(@ptrCast(self));
    }

    pub fn Column(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetItem_Column(@ptrCast(self));
    }

    pub fn SetSelected(self: ?*anyopaque, selectVal: bool) void {
        qtc.QTableWidgetItem_SetSelected(@ptrCast(self), selectVal);
    }

    pub fn IsSelected(self: ?*anyopaque, ) bool {
        return qtc.QTableWidgetItem_IsSelected(@ptrCast(self));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetItem_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTableWidgetItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidgetItem_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTableWidgetItem_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QTableWidgetItem_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn StatusTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidgetItem_StatusTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.StatusTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
    .len = statusTip.len,
    .data = statusTip.ptr,
};
qtc.QTableWidgetItem_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    pub fn ToolTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidgetItem_ToolTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
    .len = toolTip.len,
    .data = toolTip.ptr,
};
qtc.QTableWidgetItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    pub fn WhatsThis(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidgetItem_WhatsThis(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.WhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
    .len = whatsThis.len,
    .data = whatsThis.ptr,
};
qtc.QTableWidgetItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QTableWidgetItem_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn TextAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetItem_TextAlignment(@ptrCast(self));
    }

    pub fn SetTextAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment(@ptrCast(self), alignment);
    }

    pub fn SetTextAlignment2(self: ?*anyopaque, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment2(@ptrCast(self), @intCast(alignment));
    }

    pub fn SetTextAlignment3(self: ?*anyopaque, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment3(@ptrCast(self), @intCast(alignment));
    }

    pub fn Background(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTableWidgetItem_Background(@ptrCast(self));
    }

    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Foreground(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QTableWidgetItem_Foreground(@ptrCast(self));
    }

    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    pub fn CheckState(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetItem_CheckState(@ptrCast(self));
    }

    pub fn SetCheckState(self: ?*anyopaque, state: i32) void {
        qtc.QTableWidgetItem_SetCheckState(@ptrCast(self), @intCast(state));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QTableWidgetItem_SizeHint(@ptrCast(self));
    }

    pub fn SetSizeHint(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetSizeHint(@ptrCast(self), @ptrCast(size));
    }

    pub fn Data(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QTableWidgetItem_Data(@ptrCast(self), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QTableWidgetItem_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QTableWidgetItem_QBaseData(@ptrCast(self), role);
    }

    pub fn SetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetData(@ptrCast(self), role, @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        qtc.QTableWidgetItem_QBaseSetData(@ptrCast(self), role, @ptrCast(value));
    }

    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTableWidgetItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorLesser(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidgetItem_OnOperatorLesser(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTableWidgetItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QTableWidgetItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Allows for overriding the related default method
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QTableWidgetItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QTableWidgetItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Allows for overriding the related default method
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QTableWidgetItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTableWidgetItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidgetItem_Type(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTableWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtablewidget.html
pub const qtablewidget = struct {

    /// New constructs a new QTableWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QTableWidget {
        return qtc.QTableWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTableWidget object.
    pub fn New2() QtC.QTableWidget {
        return qtc.QTableWidget_new2();
    }


    /// New3 constructs a new QTableWidget object.
    pub fn New3(rows: i32, columns: i32) QtC.QTableWidget {
        return qtc.QTableWidget_new3(rows, columns);
    }


    /// New4 constructs a new QTableWidget object.
    pub fn New4(rows: i32, columns: i32, parent: ?*anyopaque) QtC.QTableWidget {
        return qtc.QTableWidget_new4(rows, columns, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        qtc.QTableWidget_SetRowCount(@ptrCast(self), rows);
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidget_RowCount(@ptrCast(self));
    }

    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        qtc.QTableWidget_SetColumnCount(@ptrCast(self), columns);
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidget_ColumnCount(@ptrCast(self));
    }

    pub fn Row(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QTableWidget_Row(@ptrCast(self), @ptrCast(item));
    }

    pub fn Column(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QTableWidget_Column(@ptrCast(self), @ptrCast(item));
    }

    pub fn Item(self: ?*anyopaque, row: i32, column: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_Item(@ptrCast(self), row, column);
    }

    pub fn SetItem(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        qtc.QTableWidget_SetItem(@ptrCast(self), row, column, @ptrCast(item));
    }

    pub fn TakeItem(self: ?*anyopaque, row: i32, column: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_TakeItem(@ptrCast(self), row, column);
    }

    pub fn Items(self: ?*anyopaque, data: ?*anyopaque) []const u8 {
        return qtc.QTableWidget_Items(@ptrCast(self), @ptrCast(data));
    }

    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTableWidget_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidget_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn VerticalHeaderItem(self: ?*anyopaque, row: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_VerticalHeaderItem(@ptrCast(self), row);
    }

    pub fn SetVerticalHeaderItem(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QTableWidget_SetVerticalHeaderItem(@ptrCast(self), row, @ptrCast(item));
    }

    pub fn TakeVerticalHeaderItem(self: ?*anyopaque, row: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_TakeVerticalHeaderItem(@ptrCast(self), row);
    }

    pub fn HorizontalHeaderItem(self: ?*anyopaque, column: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_HorizontalHeaderItem(@ptrCast(self), column);
    }

    pub fn SetHorizontalHeaderItem(self: ?*anyopaque, column: i32, item: ?*anyopaque) void {
        qtc.QTableWidget_SetHorizontalHeaderItem(@ptrCast(self), column, @ptrCast(item));
    }

    pub fn TakeHorizontalHeaderItem(self: ?*anyopaque, column: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_TakeHorizontalHeaderItem(@ptrCast(self), column);
    }

    pub fn SetVerticalHeaderLabels(self: ?*anyopaque, labels: []const u8) void {
        qtc.QTableWidget_SetVerticalHeaderLabels(@ptrCast(self), @ptrCast(labels));
    }

    pub fn SetHorizontalHeaderLabels(self: ?*anyopaque, labels: []const u8) void {
        qtc.QTableWidget_SetHorizontalHeaderLabels(@ptrCast(self), @ptrCast(labels));
    }

    pub fn CurrentRow(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidget_CurrentRow(@ptrCast(self));
    }

    pub fn CurrentColumn(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidget_CurrentColumn(@ptrCast(self));
    }

    pub fn CurrentItem(self: ?*anyopaque, ) QtC.QTableWidgetItem {
        return qtc.QTableWidget_CurrentItem(@ptrCast(self));
    }

    pub fn SetCurrentItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_SetCurrentItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn SetCurrentItem2(self: ?*anyopaque, item: ?*anyopaque, command: i32) void {
        qtc.QTableWidget_SetCurrentItem2(@ptrCast(self), @ptrCast(item), @intCast(command));
    }

    pub fn SetCurrentCell(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_SetCurrentCell(@ptrCast(self), row, column);
    }

    pub fn SetCurrentCell2(self: ?*anyopaque, row: i32, column: i32, command: i32) void {
        qtc.QTableWidget_SetCurrentCell2(@ptrCast(self), row, column, @intCast(command));
    }

    pub fn SortItems(self: ?*anyopaque, column: i32) void {
        qtc.QTableWidget_SortItems(@ptrCast(self), column);
    }

    pub fn SetSortingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTableWidget_SetSortingEnabled(@ptrCast(self), enable);
    }

    pub fn IsSortingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QTableWidget_IsSortingEnabled(@ptrCast(self));
    }

    pub fn EditItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_EditItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpenPersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_OpenPersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    pub fn ClosePersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ClosePersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    pub fn IsPersistentEditorOpen(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QTableWidget_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(item));
    }

    pub fn CellWidget(self: ?*anyopaque, row: i32, column: i32) QtC.QWidget {
        return qtc.QTableWidget_CellWidget(@ptrCast(self), row, column);
    }

    pub fn SetCellWidget(self: ?*anyopaque, row: i32, column: i32, widget: ?*anyopaque) void {
        qtc.QTableWidget_SetCellWidget(@ptrCast(self), row, column, @ptrCast(widget));
    }

    pub fn RemoveCellWidget(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_RemoveCellWidget(@ptrCast(self), row, column);
    }

    pub fn SetRangeSelected(self: ?*anyopaque, range: ?*anyopaque, selectVal: bool) void {
        qtc.QTableWidget_SetRangeSelected(@ptrCast(self), @ptrCast(range), selectVal);
    }

    pub fn SelectedRanges(self: ?*anyopaque, ) []const u8 {
        return qtc.QTableWidget_SelectedRanges(@ptrCast(self));
    }

    pub fn SelectedItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QTableWidget_SelectedItems(@ptrCast(self));
    }

    pub fn FindItems(self: ?*anyopaque, text: []const u8, flags: i32) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTableWidget_FindItems(@ptrCast(self), text_str, @intCast(flags));
    }

    pub fn VisualRow(self: ?*anyopaque, logicalRow: i32) i32 {
        return qtc.QTableWidget_VisualRow(@ptrCast(self), logicalRow);
    }

    pub fn VisualColumn(self: ?*anyopaque, logicalColumn: i32) i32 {
        return qtc.QTableWidget_VisualColumn(@ptrCast(self), logicalColumn);
    }

    pub fn ItemAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidget_ItemAt(@ptrCast(self), @ptrCast(p));
    }

    pub fn ItemAt2(self: ?*anyopaque, x: i32, y: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_ItemAt2(@ptrCast(self), x, y);
    }

    pub fn VisualItemRect(self: ?*anyopaque, item: ?*anyopaque) QtC.QRect {
        return qtc.QTableWidget_VisualItemRect(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemPrototype(self: ?*anyopaque, ) QtC.QTableWidgetItem {
        return qtc.QTableWidget_ItemPrototype(@ptrCast(self));
    }

    pub fn SetItemPrototype(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_SetItemPrototype(@ptrCast(self), @ptrCast(item));
    }

    pub fn ScrollToItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ScrollToItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn InsertRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableWidget_InsertRow(@ptrCast(self), row);
    }

    pub fn InsertColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableWidget_InsertColumn(@ptrCast(self), column);
    }

    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableWidget_RemoveRow(@ptrCast(self), row);
    }

    pub fn RemoveColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableWidget_RemoveColumn(@ptrCast(self), column);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QTableWidget_Clear(@ptrCast(self));
    }

    pub fn ClearContents(self: ?*anyopaque, ) void {
        qtc.QTableWidget_ClearContents(@ptrCast(self));
    }

    pub fn ItemPressed(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemPressed(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemClicked(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemDoubleClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemDoubleClicked(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemActivated(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemActivated(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemEntered(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemEntered(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemChanged(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentItemChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTableWidget_CurrentItemChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn OnCurrentItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CurrentItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemSelectionChanged(self: ?*anyopaque, ) void {
        qtc.QTableWidget_ItemSelectionChanged(@ptrCast(self));
    }

    pub fn OnItemSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CellPressed(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellPressed(@ptrCast(self), row, column);
    }

    pub fn OnCellPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CellClicked(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellClicked(@ptrCast(self), row, column);
    }

    pub fn OnCellClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CellDoubleClicked(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellDoubleClicked(@ptrCast(self), row, column);
    }

    pub fn OnCellDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CellActivated(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellActivated(@ptrCast(self), row, column);
    }

    pub fn OnCellActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CellEntered(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellEntered(@ptrCast(self), row, column);
    }

    pub fn OnCellEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CellChanged(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellChanged(@ptrCast(self), row, column);
    }

    pub fn OnCellChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentCellChanged(self: ?*anyopaque, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32) void {
        qtc.QTableWidget_CurrentCellChanged(@ptrCast(self), currentRow, currentColumn, previousRow, previousColumn);
    }

    pub fn OnCurrentCellChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CurrentCellChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTableWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QTableWidget_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QTableWidget_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QTableWidget_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn MimeData(self: ?*anyopaque, items: []const u8) QtC.QMimeData {
        return qtc.QTableWidget_MimeData(@ptrCast(self), @ptrCast(items));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QTableWidget_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, items: []const u8) QtC.QMimeData {
        return qtc.QTableWidget_QBaseMimeData(@ptrCast(self), @ptrCast(items));
    }

    pub fn DropMimeData(self: ?*anyopaque, row: i32, column: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QTableWidget_DropMimeData(@ptrCast(self), row, column, @ptrCast(data), @intCast(action));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QTableWidget_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, row: i32, column: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QTableWidget_QBaseDropMimeData(@ptrCast(self), row, column, @ptrCast(data), @intCast(action));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidget_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QTableWidget_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QTableWidget_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SortItems2(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTableWidget_SortItems2(@ptrCast(self), column, @intCast(order));
    }

    pub fn ScrollToItem2(self: ?*anyopaque, item: ?*anyopaque, hint: i32) void {
        qtc.QTableWidget_ScrollToItem2(@ptrCast(self), @ptrCast(item), @intCast(hint));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTableWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/tablewidget.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };

};
