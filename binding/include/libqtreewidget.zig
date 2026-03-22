const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtreewidgetitem.html
pub const qtreewidgetitem = struct {

    /// New constructs a new QTreeWidgetItem object.
    pub fn New() QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new();
    }


    /// New2 constructs a new QTreeWidgetItem object.
    pub fn New2(strings: []const u8) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new2(@ptrCast(strings));
    }


    /// New3 constructs a new QTreeWidgetItem object.
    pub fn New3(treeview: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new3(@ptrCast(treeview));
    }


    /// New4 constructs a new QTreeWidgetItem object.
    pub fn New4(treeview: ?*anyopaque, strings: []const u8) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new4(@ptrCast(treeview), @ptrCast(strings));
    }


    /// New5 constructs a new QTreeWidgetItem object.
    pub fn New5(treeview: ?*anyopaque, after: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new5(@ptrCast(treeview), @ptrCast(after));
    }


    /// New6 constructs a new QTreeWidgetItem object.
    pub fn New6(parent: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new6(@ptrCast(parent));
    }


    /// New7 constructs a new QTreeWidgetItem object.
    pub fn New7(parent: ?*anyopaque, strings: []const u8) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new7(@ptrCast(parent), @ptrCast(strings));
    }


    /// New8 constructs a new QTreeWidgetItem object.
    pub fn New8(parent: ?*anyopaque, after: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new8(@ptrCast(parent), @ptrCast(after));
    }


    /// New9 constructs a new QTreeWidgetItem object.
    pub fn New9(other: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new9(@ptrCast(other));
    }


    /// New10 constructs a new QTreeWidgetItem object.
    pub fn New10(typeVal: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new10(typeVal);
    }


    /// New11 constructs a new QTreeWidgetItem object.
    pub fn New11(strings: []const u8, typeVal: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new11(@ptrCast(strings), typeVal);
    }


    /// New12 constructs a new QTreeWidgetItem object.
    pub fn New12(treeview: ?*anyopaque, typeVal: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new12(@ptrCast(treeview), typeVal);
    }


    /// New13 constructs a new QTreeWidgetItem object.
    pub fn New13(treeview: ?*anyopaque, strings: []const u8, typeVal: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new13(@ptrCast(treeview), @ptrCast(strings), typeVal);
    }


    /// New14 constructs a new QTreeWidgetItem object.
    pub fn New14(treeview: ?*anyopaque, after: ?*anyopaque, typeVal: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new14(@ptrCast(treeview), @ptrCast(after), typeVal);
    }


    /// New15 constructs a new QTreeWidgetItem object.
    pub fn New15(parent: ?*anyopaque, typeVal: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new15(@ptrCast(parent), typeVal);
    }


    /// New16 constructs a new QTreeWidgetItem object.
    pub fn New16(parent: ?*anyopaque, strings: []const u8, typeVal: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new16(@ptrCast(parent), @ptrCast(strings), typeVal);
    }


    /// New17 constructs a new QTreeWidgetItem object.
    pub fn New17(parent: ?*anyopaque, after: ?*anyopaque, typeVal: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_new17(@ptrCast(parent), @ptrCast(after), typeVal);
    }


    pub fn TreeWidget(self: ?*anyopaque, ) QtC.QTreeWidget {
        return qtc.QTreeWidgetItem_TreeWidget(@ptrCast(self));
    }

    pub fn SetSelected(self: ?*anyopaque, selectVal: bool) void {
        qtc.QTreeWidgetItem_SetSelected(@ptrCast(self), selectVal);
    }

    pub fn IsSelected(self: ?*anyopaque, ) bool {
        return qtc.QTreeWidgetItem_IsSelected(@ptrCast(self));
    }

    pub fn SetHidden(self: ?*anyopaque, hide: bool) void {
        qtc.QTreeWidgetItem_SetHidden(@ptrCast(self), hide);
    }

    pub fn IsHidden(self: ?*anyopaque, ) bool {
        return qtc.QTreeWidgetItem_IsHidden(@ptrCast(self));
    }

    pub fn SetExpanded(self: ?*anyopaque, expand: bool) void {
        qtc.QTreeWidgetItem_SetExpanded(@ptrCast(self), expand);
    }

    pub fn IsExpanded(self: ?*anyopaque, ) bool {
        return qtc.QTreeWidgetItem_IsExpanded(@ptrCast(self));
    }

    pub fn SetFirstColumnSpanned(self: ?*anyopaque, span: bool) void {
        qtc.QTreeWidgetItem_SetFirstColumnSpanned(@ptrCast(self), span);
    }

    pub fn IsFirstColumnSpanned(self: ?*anyopaque, ) bool {
        return qtc.QTreeWidgetItem_IsFirstColumnSpanned(@ptrCast(self));
    }

    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QTreeWidgetItem_SetDisabled(@ptrCast(self), disabled);
    }

    pub fn IsDisabled(self: ?*anyopaque, ) bool {
        return qtc.QTreeWidgetItem_IsDisabled(@ptrCast(self));
    }

    pub fn SetChildIndicatorPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QTreeWidgetItem_SetChildIndicatorPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn ChildIndicatorPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidgetItem_ChildIndicatorPolicy(@ptrCast(self));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidgetItem_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTreeWidgetItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn Text(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeWidgetItem_Text(@ptrCast(self), column);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidgetitem.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, column: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTreeWidgetItem_SetText(@ptrCast(self), column, text_str);
    }

    pub fn Icon(self: ?*anyopaque, column: i32) QtC.QIcon {
        return qtc.QTreeWidgetItem_Icon(@ptrCast(self), column);
    }

    pub fn SetIcon(self: ?*anyopaque, column: i32, icon: ?*anyopaque) void {
        qtc.QTreeWidgetItem_SetIcon(@ptrCast(self), column, @ptrCast(icon));
    }

    pub fn StatusTip(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeWidgetItem_StatusTip(@ptrCast(self), column);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidgetitem.StatusTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetStatusTip(self: ?*anyopaque, column: i32, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
    .len = statusTip.len,
    .data = statusTip.ptr,
};
qtc.QTreeWidgetItem_SetStatusTip(@ptrCast(self), column, statusTip_str);
    }

    pub fn ToolTip(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeWidgetItem_ToolTip(@ptrCast(self), column);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidgetitem.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetToolTip(self: ?*anyopaque, column: i32, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
    .len = toolTip.len,
    .data = toolTip.ptr,
};
qtc.QTreeWidgetItem_SetToolTip(@ptrCast(self), column, toolTip_str);
    }

    pub fn WhatsThis(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeWidgetItem_WhatsThis(@ptrCast(self), column);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidgetitem.WhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWhatsThis(self: ?*anyopaque, column: i32, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
    .len = whatsThis.len,
    .data = whatsThis.ptr,
};
qtc.QTreeWidgetItem_SetWhatsThis(@ptrCast(self), column, whatsThis_str);
    }

    pub fn Font(self: ?*anyopaque, column: i32) QtC.QFont {
        return qtc.QTreeWidgetItem_Font(@ptrCast(self), column);
    }

    pub fn SetFont(self: ?*anyopaque, column: i32, font: ?*anyopaque) void {
        qtc.QTreeWidgetItem_SetFont(@ptrCast(self), column, @ptrCast(font));
    }

    pub fn TextAlignment(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTreeWidgetItem_TextAlignment(@ptrCast(self), column);
    }

    pub fn SetTextAlignment(self: ?*anyopaque, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment(@ptrCast(self), column, alignment);
    }

    pub fn SetTextAlignment2(self: ?*anyopaque, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment2(@ptrCast(self), column, @intCast(alignment));
    }

    pub fn SetTextAlignment3(self: ?*anyopaque, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment3(@ptrCast(self), column, @intCast(alignment));
    }

    pub fn Background(self: ?*anyopaque, column: i32) QtC.QBrush {
        return qtc.QTreeWidgetItem_Background(@ptrCast(self), column);
    }

    pub fn SetBackground(self: ?*anyopaque, column: i32, brush: ?*anyopaque) void {
        qtc.QTreeWidgetItem_SetBackground(@ptrCast(self), column, @ptrCast(brush));
    }

    pub fn Foreground(self: ?*anyopaque, column: i32) QtC.QBrush {
        return qtc.QTreeWidgetItem_Foreground(@ptrCast(self), column);
    }

    pub fn SetForeground(self: ?*anyopaque, column: i32, brush: ?*anyopaque) void {
        qtc.QTreeWidgetItem_SetForeground(@ptrCast(self), column, @ptrCast(brush));
    }

    pub fn CheckState(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTreeWidgetItem_CheckState(@ptrCast(self), column);
    }

    pub fn SetCheckState(self: ?*anyopaque, column: i32, state: i32) void {
        qtc.QTreeWidgetItem_SetCheckState(@ptrCast(self), column, @intCast(state));
    }

    pub fn SizeHint(self: ?*anyopaque, column: i32) QtC.QSize {
        return qtc.QTreeWidgetItem_SizeHint(@ptrCast(self), column);
    }

    pub fn SetSizeHint(self: ?*anyopaque, column: i32, size: ?*anyopaque) void {
        qtc.QTreeWidgetItem_SetSizeHint(@ptrCast(self), column, @ptrCast(size));
    }

    pub fn Data(self: ?*anyopaque, column: i32, role: i32) QtC.QVariant {
        return qtc.QTreeWidgetItem_Data(@ptrCast(self), column, role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QTreeWidgetItem_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, column: i32, role: i32) QtC.QVariant {
        return qtc.QTreeWidgetItem_QBaseData(@ptrCast(self), column, role);
    }

    pub fn SetData(self: ?*anyopaque, column: i32, role: i32, value: ?*anyopaque) void {
        qtc.QTreeWidgetItem_SetData(@ptrCast(self), column, role, @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, column: i32, role: i32, value: ?*anyopaque) void {
        qtc.QTreeWidgetItem_QBaseSetData(@ptrCast(self), column, role, @ptrCast(value));
    }

    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTreeWidgetItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorLesser(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTreeWidgetItem_OnOperatorLesser(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTreeWidgetItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QTreeWidgetItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Allows for overriding the related default method
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QTreeWidgetItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QTreeWidgetItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Allows for overriding the related default method
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QTreeWidgetItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTreeWidgetItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_Parent(@ptrCast(self));
    }

    pub fn Child(self: ?*anyopaque, index: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_Child(@ptrCast(self), index);
    }

    pub fn ChildCount(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidgetItem_ChildCount(@ptrCast(self));
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidgetItem_ColumnCount(@ptrCast(self));
    }

    pub fn IndexOfChild(self: ?*anyopaque, child: ?*anyopaque) i32 {
        return qtc.QTreeWidgetItem_IndexOfChild(@ptrCast(self), @ptrCast(child));
    }

    pub fn AddChild(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.QTreeWidgetItem_AddChild(@ptrCast(self), @ptrCast(child));
    }

    pub fn InsertChild(self: ?*anyopaque, index: i32, child: ?*anyopaque) void {
        qtc.QTreeWidgetItem_InsertChild(@ptrCast(self), index, @ptrCast(child));
    }

    pub fn RemoveChild(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.QTreeWidgetItem_RemoveChild(@ptrCast(self), @ptrCast(child));
    }

    pub fn TakeChild(self: ?*anyopaque, index: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItem_TakeChild(@ptrCast(self), index);
    }

    pub fn AddChildren(self: ?*anyopaque, children: []const u8) void {
        qtc.QTreeWidgetItem_AddChildren(@ptrCast(self), @ptrCast(children));
    }

    pub fn InsertChildren(self: ?*anyopaque, index: i32, children: []const u8) void {
        qtc.QTreeWidgetItem_InsertChildren(@ptrCast(self), index, @ptrCast(children));
    }

    pub fn TakeChildren(self: ?*anyopaque, ) []const u8 {
        return qtc.QTreeWidgetItem_TakeChildren(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidgetItem_Type(@ptrCast(self));
    }

    pub fn SortChildren(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTreeWidgetItem_SortChildren(@ptrCast(self), column, @intCast(order));
    }

    pub fn EmitDataChanged(self: ?*anyopaque, ) void {
        qtc.QTreeWidgetItem_EmitDataChanged(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEmitDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnEmitDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEmitDataChanged(self: ?*anyopaque, ) void {
        qtc.QTreeWidgetItem_QBaseEmitDataChanged(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTreeWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtreewidget.html
pub const qtreewidget = struct {

    /// New constructs a new QTreeWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QTreeWidget {
        return qtc.QTreeWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTreeWidget object.
    pub fn New2() QtC.QTreeWidget {
        return qtc.QTreeWidget_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidget_ColumnCount(@ptrCast(self));
    }

    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        qtc.QTreeWidget_SetColumnCount(@ptrCast(self), columns);
    }

    pub fn InvisibleRootItem(self: ?*anyopaque, ) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_InvisibleRootItem(@ptrCast(self));
    }

    pub fn TopLevelItem(self: ?*anyopaque, index: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_TopLevelItem(@ptrCast(self), index);
    }

    pub fn TopLevelItemCount(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidget_TopLevelItemCount(@ptrCast(self));
    }

    pub fn InsertTopLevelItem(self: ?*anyopaque, index: i32, item: ?*anyopaque) void {
        qtc.QTreeWidget_InsertTopLevelItem(@ptrCast(self), index, @ptrCast(item));
    }

    pub fn AddTopLevelItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_AddTopLevelItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn TakeTopLevelItem(self: ?*anyopaque, index: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_TakeTopLevelItem(@ptrCast(self), index);
    }

    pub fn IndexOfTopLevelItem(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QTreeWidget_IndexOfTopLevelItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn InsertTopLevelItems(self: ?*anyopaque, index: i32, items: []const u8) void {
        qtc.QTreeWidget_InsertTopLevelItems(@ptrCast(self), index, @ptrCast(items));
    }

    pub fn AddTopLevelItems(self: ?*anyopaque, items: []const u8) void {
        qtc.QTreeWidget_AddTopLevelItems(@ptrCast(self), @ptrCast(items));
    }

    pub fn HeaderItem(self: ?*anyopaque, ) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_HeaderItem(@ptrCast(self));
    }

    pub fn SetHeaderItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_SetHeaderItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn SetHeaderLabels(self: ?*anyopaque, labels: []const u8) void {
        qtc.QTreeWidget_SetHeaderLabels(@ptrCast(self), @ptrCast(labels));
    }

    pub fn SetHeaderLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QTreeWidget_SetHeaderLabel(@ptrCast(self), label_str);
    }

    pub fn CurrentItem(self: ?*anyopaque, ) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_CurrentItem(@ptrCast(self));
    }

    pub fn CurrentColumn(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidget_CurrentColumn(@ptrCast(self));
    }

    pub fn SetCurrentItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_SetCurrentItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn SetCurrentItem2(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_SetCurrentItem2(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn SetCurrentItem3(self: ?*anyopaque, item: ?*anyopaque, column: i32, command: i32) void {
        qtc.QTreeWidget_SetCurrentItem3(@ptrCast(self), @ptrCast(item), column, @intCast(command));
    }

    pub fn ItemAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_ItemAt(@ptrCast(self), @ptrCast(p));
    }

    pub fn ItemAt2(self: ?*anyopaque, x: i32, y: i32) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_ItemAt2(@ptrCast(self), x, y);
    }

    pub fn VisualItemRect(self: ?*anyopaque, item: ?*anyopaque) QtC.QRect {
        return qtc.QTreeWidget_VisualItemRect(@ptrCast(self), @ptrCast(item));
    }

    pub fn SortColumn(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidget_SortColumn(@ptrCast(self));
    }

    pub fn SortItems(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTreeWidget_SortItems(@ptrCast(self), column, @intCast(order));
    }

    pub fn EditItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_EditItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn OpenPersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_OpenPersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    pub fn ClosePersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_ClosePersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    pub fn IsPersistentEditorOpen(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QTreeWidget_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemWidget(self: ?*anyopaque, item: ?*anyopaque, column: i32) QtC.QWidget {
        return qtc.QTreeWidget_ItemWidget(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn SetItemWidget(self: ?*anyopaque, item: ?*anyopaque, column: i32, widget: ?*anyopaque) void {
        qtc.QTreeWidget_SetItemWidget(@ptrCast(self), @ptrCast(item), column, @ptrCast(widget));
    }

    pub fn RemoveItemWidget(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_RemoveItemWidget(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn SelectedItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QTreeWidget_SelectedItems(@ptrCast(self));
    }

    pub fn FindItems(self: ?*anyopaque, text: []const u8, flags: i32) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTreeWidget_FindItems(@ptrCast(self), text_str, @intCast(flags));
    }

    pub fn ItemAbove(self: ?*anyopaque, item: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_ItemAbove(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemBelow(self: ?*anyopaque, item: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_ItemBelow(@ptrCast(self), @ptrCast(item));
    }

    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTreeWidget_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidget_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QTreeWidget_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetSelectionModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QTreeWidget_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    pub fn ScrollToItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_ScrollToItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn ExpandItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_ExpandItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn CollapseItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_CollapseItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QTreeWidget_Clear(@ptrCast(self));
    }

    pub fn ItemPressed(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_ItemPressed(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn OnItemPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemClicked(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_ItemClicked(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn OnItemClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemDoubleClicked(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_ItemDoubleClicked(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn OnItemDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemActivated(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_ItemActivated(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn OnItemActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemEntered(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_ItemEntered(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn OnItemEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_ItemChanged(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn OnItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemExpanded(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_ItemExpanded(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemExpanded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemExpanded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemCollapsed(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTreeWidget_ItemCollapsed(@ptrCast(self), @ptrCast(item));
    }

    pub fn OnItemCollapsed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemCollapsed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentItemChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTreeWidget_CurrentItemChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn OnCurrentItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_CurrentItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ItemSelectionChanged(self: ?*anyopaque, ) void {
        qtc.QTreeWidget_ItemSelectionChanged(@ptrCast(self));
    }

    pub fn OnItemSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTreeWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTreeWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTreeWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QTreeWidget_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QTreeWidget_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QTreeWidget_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn MimeData(self: ?*anyopaque, items: []const u8) QtC.QMimeData {
        return qtc.QTreeWidget_MimeData(@ptrCast(self), @ptrCast(items));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QTreeWidget_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, items: []const u8) QtC.QMimeData {
        return qtc.QTreeWidget_QBaseMimeData(@ptrCast(self), @ptrCast(items));
    }

    pub fn DropMimeData(self: ?*anyopaque, parent: ?*anyopaque, index: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QTreeWidget_DropMimeData(@ptrCast(self), @ptrCast(parent), index, @ptrCast(data), @intCast(action));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QTreeWidget_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, parent: ?*anyopaque, index: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QTreeWidget_QBaseDropMimeData(@ptrCast(self), @ptrCast(parent), index, @ptrCast(data), @intCast(action));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidget_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QTreeWidget_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QTreeWidget_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTreeWidget_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTreeWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTreeWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn EditItem2(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_EditItem2(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn OpenPersistentEditor2(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_OpenPersistentEditor2(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn ClosePersistentEditor2(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        qtc.QTreeWidget_ClosePersistentEditor2(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn IsPersistentEditorOpen2(self: ?*anyopaque, item: ?*anyopaque, column: i32) bool {
        return qtc.QTreeWidget_IsPersistentEditorOpen2(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn FindItems3(self: ?*anyopaque, text: []const u8, flags: i32, column: i32) []const u8 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTreeWidget_FindItems3(@ptrCast(self), text_str, @intCast(flags), column);
    }

    pub fn IndexFromItem2(self: ?*anyopaque, item: ?*anyopaque, column: i32) QtC.QModelIndex {
        return qtc.QTreeWidget_IndexFromItem2(@ptrCast(self), @ptrCast(item), column);
    }

    pub fn ScrollToItem2(self: ?*anyopaque, item: ?*anyopaque, hint: i32) void {
        qtc.QTreeWidget_ScrollToItem2(@ptrCast(self), @ptrCast(item), @intCast(hint));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTreeWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/treewidget.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };

    pub const ChildIndicatorPolicy = enum {
        pub const ShowIndicator: i32 = 0;
        pub const DontShowIndicator: i32 = 1;
        pub const DontShowIndicatorWhenChildless: i32 = 2;
    };

};
