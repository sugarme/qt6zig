const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlistwidgetitem.html
pub const qlistwidgetitem = struct {

    /// New constructs a new QListWidgetItem object.
    pub fn New() QtC.QListWidgetItem {
        return qtc.QListWidgetItem_new();
    }


    /// New2 constructs a new QListWidgetItem object.
    pub fn New2(text: []const u8) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QListWidgetItem_new2(text_str);
    }


    /// New3 constructs a new QListWidgetItem object.
    pub fn New3(icon: ?*anyopaque, text: []const u8) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QListWidgetItem_new3(@ptrCast(icon), text_str);
    }


    /// New4 constructs a new QListWidgetItem object.
    pub fn New4(other: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidgetItem_new4(@ptrCast(other));
    }


    /// New5 constructs a new QListWidgetItem object.
    pub fn New5(listview: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidgetItem_new5(@ptrCast(listview));
    }


    /// New6 constructs a new QListWidgetItem object.
    pub fn New6(listview: ?*anyopaque, typeVal: i32) QtC.QListWidgetItem {
        return qtc.QListWidgetItem_new6(@ptrCast(listview), typeVal);
    }


    /// New7 constructs a new QListWidgetItem object.
    pub fn New7(text: []const u8, listview: ?*anyopaque) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QListWidgetItem_new7(text_str, @ptrCast(listview));
    }


    /// New8 constructs a new QListWidgetItem object.
    pub fn New8(text: []const u8, listview: ?*anyopaque, typeVal: i32) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QListWidgetItem_new8(text_str, @ptrCast(listview), typeVal);
    }


    /// New9 constructs a new QListWidgetItem object.
    pub fn New9(icon: ?*anyopaque, text: []const u8, listview: ?*anyopaque) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QListWidgetItem_new9(@ptrCast(icon), text_str, @ptrCast(listview));
    }


    /// New10 constructs a new QListWidgetItem object.
    pub fn New10(icon: ?*anyopaque, text: []const u8, listview: ?*anyopaque, typeVal: i32) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QListWidgetItem_new10(@ptrCast(icon), text_str, @ptrCast(listview), typeVal);
    }


    pub fn ListWidget(self: ?*anyopaque, ) QtC.QListWidget {
        return qtc.QListWidgetItem_ListWidget(@ptrCast(self));
    }

    pub fn SetSelected(self: ?*anyopaque, selectVal: bool) void {
        qtc.QListWidgetItem_SetSelected(@ptrCast(self), selectVal);
    }

    pub fn IsSelected(self: ?*anyopaque, ) bool {
        return qtc.QListWidgetItem_IsSelected(@ptrCast(self));
    }

    pub fn SetHidden(self: ?*anyopaque, hide: bool) void {
        qtc.QListWidgetItem_SetHidden(@ptrCast(self), hide);
    }

    pub fn IsHidden(self: ?*anyopaque, ) bool {
        return qtc.QListWidgetItem_IsHidden(@ptrCast(self));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QListWidgetItem_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QListWidgetItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidgetItem_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidgetitem.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QListWidgetItem_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QListWidgetItem_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QListWidgetItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn StatusTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidgetItem_StatusTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidgetitem.StatusTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
    .len = statusTip.len,
    .data = statusTip.ptr,
};
qtc.QListWidgetItem_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    pub fn ToolTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidgetItem_ToolTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidgetitem.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
    .len = toolTip.len,
    .data = toolTip.ptr,
};
qtc.QListWidgetItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    pub fn WhatsThis(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidgetItem_WhatsThis(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidgetitem.WhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
    .len = whatsThis.len,
    .data = whatsThis.ptr,
};
qtc.QListWidgetItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QListWidgetItem_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QListWidgetItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn TextAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QListWidgetItem_TextAlignment(@ptrCast(self));
    }

    pub fn SetTextAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment(@ptrCast(self), alignment);
    }

    pub fn SetTextAlignment2(self: ?*anyopaque, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment2(@ptrCast(self), @intCast(alignment));
    }

    pub fn SetTextAlignment3(self: ?*anyopaque, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment3(@ptrCast(self), @intCast(alignment));
    }

    pub fn Background(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QListWidgetItem_Background(@ptrCast(self));
    }

    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QListWidgetItem_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Foreground(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QListWidgetItem_Foreground(@ptrCast(self));
    }

    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QListWidgetItem_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    pub fn CheckState(self: ?*anyopaque, ) i32 {
        return qtc.QListWidgetItem_CheckState(@ptrCast(self));
    }

    pub fn SetCheckState(self: ?*anyopaque, state: i32) void {
        qtc.QListWidgetItem_SetCheckState(@ptrCast(self), @intCast(state));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QListWidgetItem_SizeHint(@ptrCast(self));
    }

    pub fn SetSizeHint(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QListWidgetItem_SetSizeHint(@ptrCast(self), @ptrCast(size));
    }

    pub fn Data(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QListWidgetItem_Data(@ptrCast(self), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QListWidgetItem_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QListWidgetItem_QBaseData(@ptrCast(self), role);
    }

    pub fn SetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        qtc.QListWidgetItem_SetData(@ptrCast(self), role, @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidgetItem_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        qtc.QListWidgetItem_QBaseSetData(@ptrCast(self), role, @ptrCast(value));
    }

    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QListWidgetItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorLesser(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidgetItem_OnOperatorLesser(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QListWidgetItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QListWidgetItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Allows for overriding the related default method
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidgetItem_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QListWidgetItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QListWidgetItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Allows for overriding the related default method
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidgetItem_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QListWidgetItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QListWidgetItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QListWidgetItem_Type(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QListWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlistwidget.html
pub const qlistwidget = struct {

    /// New constructs a new QListWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QListWidget {
        return qtc.QListWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QListWidget object.
    pub fn New2() QtC.QListWidget {
        return qtc.QListWidget_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QListWidget_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnSetSelectionModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QListWidget_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    pub fn Item(self: ?*anyopaque, row: i32) QtC.QListWidgetItem {
        return qtc.QListWidget_Item(@ptrCast(self), row);
    }

    pub fn Row(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QListWidget_Row(@ptrCast(self), @ptrCast(item));
    }

    pub fn InsertItem(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QListWidget_InsertItem(@ptrCast(self), row, @ptrCast(item));
    }

    pub fn InsertItem2(self: ?*anyopaque, row: i32, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QListWidget_InsertItem2(@ptrCast(self), row, label_str);
    }

    pub fn InsertItems(self: ?*anyopaque, row: i32, labels: []const u8) void {
        qtc.QListWidget_InsertItems(@ptrCast(self), row, @ptrCast(labels));
    }

    pub fn AddItem(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QListWidget_AddItem(@ptrCast(self), label_str);
    }

    pub fn AddItem2(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_AddItem2(@ptrCast(self), @ptrCast(item));
    }

    pub fn AddItems(self: ?*anyopaque, labels: []const u8) void {
        qtc.QListWidget_AddItems(@ptrCast(self), @ptrCast(labels));
    }

    pub fn TakeItem(self: ?*anyopaque, row: i32) QtC.QListWidgetItem {
        return qtc.QListWidget_TakeItem(@ptrCast(self), row);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QListWidget_Count(@ptrCast(self));
    }

    pub fn CurrentItem(self: ?*anyopaque, ) QtC.QListWidgetItem {
        return qtc.QListWidget_CurrentItem(@ptrCast(self));
    }

    pub fn SetCurrentItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_SetCurrentItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn SetCurrentItem2(self: ?*anyopaque, item: ?*anyopaque, command: i32) void {
        qtc.QListWidget_SetCurrentItem2(@ptrCast(self), @ptrCast(item), @intCast(command));
    }

    pub fn CurrentRow(self: ?*anyopaque, ) i32 {
        return qtc.QListWidget_CurrentRow(@ptrCast(self));
    }

    pub fn SetCurrentRow(self: ?*anyopaque, row: i32) void {
        qtc.QListWidget_SetCurrentRow(@ptrCast(self), row);
    }

    pub fn SetCurrentRow2(self: ?*anyopaque, row: i32, command: i32) void {
        qtc.QListWidget_SetCurrentRow2(@ptrCast(self), row, @intCast(command));
    }

    pub fn ItemAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidget_ItemAt(@ptrCast(self), @ptrCast(p));
    }

    pub fn ItemAt2(self: ?*anyopaque, x: i32, y: i32) QtC.QListWidgetItem {
        return qtc.QListWidget_ItemAt2(@ptrCast(self), x, y);
    }

    pub fn VisualItemRect(self: ?*anyopaque, item: ?*anyopaque) QtC.QRect {
        return qtc.QListWidget_VisualItemRect(@ptrCast(self), @ptrCast(item));
    }

    pub fn SortItems(self: ?*anyopaque, ) void {
        qtc.QListWidget_SortItems(@ptrCast(self));
    }

    pub fn SetSortingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QListWidget_SetSortingEnabled(@ptrCast(self), enable);
    }

    pub fn IsSortingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QListWidget_IsSortingEnabled(@ptrCast(self));
    }

    pub fn EditItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_EditItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpenPersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_OpenPersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    pub fn ClosePersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ClosePersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    pub fn IsPersistentEditorOpen(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QListWidget_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemWidget(self: ?*anyopaque, item: ?*anyopaque) QtC.QWidget {
        return qtc.QListWidget_ItemWidget(@ptrCast(self), @ptrCast(item));
    }

    pub fn SetItemWidget(self: ?*anyopaque, item: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QListWidget_SetItemWidget(@ptrCast(self), @ptrCast(item), @ptrCast(widget));
    }

    pub fn RemoveItemWidget(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_RemoveItemWidget(@ptrCast(self), @ptrCast(item));
    }

    pub fn SelectedItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QListWidget_SelectedItems(@ptrCast(self));
    }

    pub fn FindItems(self: ?*anyopaque, text: []const u8, flags: i32) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QListWidget_FindItems(@ptrCast(self), text_str, @intCast(flags));
    }

    pub fn Items(self: ?*anyopaque, data: ?*anyopaque) []const u8 {
        return qtc.QListWidget_Items(@ptrCast(self), @ptrCast(data));
    }

    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QListWidget_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidget_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ScrollToItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ScrollToItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QListWidget_Clear(@ptrCast(self));
    }

    pub fn ItemPressed(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemPressed(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemClicked(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemDoubleClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemDoubleClicked(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemActivated(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemActivated(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemEntered(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemEntered(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemChanged(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentItemChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QListWidget_CurrentItemChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn OnCurrentItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentTextChanged(self: ?*anyopaque, currentText: []const u8) void {
        const currentText_str = qtc.libqt_string{
    .len = currentText.len,
    .data = currentText.ptr,
};
qtc.QListWidget_CurrentTextChanged(@ptrCast(self), currentText_str);
    }

    pub fn OnCurrentTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentRowChanged(self: ?*anyopaque, currentRow: i32) void {
        qtc.QListWidget_CurrentRowChanged(@ptrCast(self), currentRow);
    }

    pub fn OnCurrentRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemSelectionChanged(self: ?*anyopaque, ) void {
        qtc.QListWidget_ItemSelectionChanged(@ptrCast(self));
    }

    pub fn OnItemSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QListWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QListWidget_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QListWidget_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QListWidget_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn MimeData(self: ?*anyopaque, items: []const u8) QtC.QMimeData {
        return qtc.QListWidget_MimeData(@ptrCast(self), @ptrCast(items));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QListWidget_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, items: []const u8) QtC.QMimeData {
        return qtc.QListWidget_QBaseMimeData(@ptrCast(self), @ptrCast(items));
    }

    pub fn DropMimeData(self: ?*anyopaque, index: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QListWidget_DropMimeData(@ptrCast(self), index, @ptrCast(data), @intCast(action));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QListWidget_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, index: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QListWidget_QBaseDropMimeData(@ptrCast(self), index, @ptrCast(data), @intCast(action));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QListWidget_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QListWidget_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QListWidget_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SortItems1(self: ?*anyopaque, order: i32) void {
        qtc.QListWidget_SortItems1(@ptrCast(self), @intCast(order));
    }

    pub fn ScrollToItem2(self: ?*anyopaque, item: ?*anyopaque, hint: i32) void {
        qtc.QListWidget_ScrollToItem2(@ptrCast(self), @ptrCast(item), @intCast(hint));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QListWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/listwidget.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };

};
