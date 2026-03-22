const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcombobox.html
pub const qcombobox = struct {

    /// New constructs a new QComboBox object.
    pub fn New(parent: ?*anyopaque) QtC.QComboBox {
        return qtc.QComboBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QComboBox object.
    pub fn New2() QtC.QComboBox {
        return qtc.QComboBox_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcombobox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MaxVisibleItems(self: ?*anyopaque, ) i32 {
        return qtc.QComboBox_MaxVisibleItems(@ptrCast(self));
    }

    pub fn SetMaxVisibleItems(self: ?*anyopaque, maxItems: i32) void {
        qtc.QComboBox_SetMaxVisibleItems(@ptrCast(self), maxItems);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QComboBox_Count(@ptrCast(self));
    }

    pub fn SetMaxCount(self: ?*anyopaque, max: i32) void {
        qtc.QComboBox_SetMaxCount(@ptrCast(self), max);
    }

    pub fn MaxCount(self: ?*anyopaque, ) i32 {
        return qtc.QComboBox_MaxCount(@ptrCast(self));
    }

    pub fn DuplicatesEnabled(self: ?*anyopaque, ) bool {
        return qtc.QComboBox_DuplicatesEnabled(@ptrCast(self));
    }

    pub fn SetDuplicatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QComboBox_SetDuplicatesEnabled(@ptrCast(self), enable);
    }

    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QComboBox_SetFrame(@ptrCast(self), frame);
    }

    pub fn HasFrame(self: ?*anyopaque, ) bool {
        return qtc.QComboBox_HasFrame(@ptrCast(self));
    }

    pub fn FindText(self: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QComboBox_FindText(@ptrCast(self), text_str);
    }

    pub fn FindData(self: ?*anyopaque, data: ?*anyopaque) i32 {
        return qtc.QComboBox_FindData(@ptrCast(self), @ptrCast(data));
    }

    pub fn InsertPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QComboBox_InsertPolicy(@ptrCast(self));
    }

    pub fn SetInsertPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QComboBox_SetInsertPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn SizeAdjustPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QComboBox_SizeAdjustPolicy(@ptrCast(self));
    }

    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QComboBox_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn MinimumContentsLength(self: ?*anyopaque, ) i32 {
        return qtc.QComboBox_MinimumContentsLength(@ptrCast(self));
    }

    pub fn SetMinimumContentsLength(self: ?*anyopaque, characters: i32) void {
        qtc.QComboBox_SetMinimumContentsLength(@ptrCast(self), characters);
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QComboBox_IconSize(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QComboBox_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn SetPlaceholderText(self: ?*anyopaque, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
    .len = placeholderText.len,
    .data = placeholderText.ptr,
};
qtc.QComboBox_SetPlaceholderText(@ptrCast(self), placeholderText_str);
    }

    pub fn PlaceholderText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_PlaceholderText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcombobox.PlaceholderText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsEditable(self: ?*anyopaque, ) bool {
        return qtc.QComboBox_IsEditable(@ptrCast(self));
    }

    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QComboBox_SetEditable(@ptrCast(self), editable);
    }

    pub fn SetLineEdit(self: ?*anyopaque, edit: ?*anyopaque) void {
        qtc.QComboBox_SetLineEdit(@ptrCast(self), @ptrCast(edit));
    }

    pub fn LineEdit(self: ?*anyopaque, ) QtC.QLineEdit {
        return qtc.QComboBox_LineEdit(@ptrCast(self));
    }

    pub fn SetValidator(self: ?*anyopaque, v: ?*anyopaque) void {
        qtc.QComboBox_SetValidator(@ptrCast(self), @ptrCast(v));
    }

    pub fn Validator(self: ?*anyopaque, ) QtC.QValidator {
        return qtc.QComboBox_Validator(@ptrCast(self));
    }

    pub fn SetCompleter(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QComboBox_SetCompleter(@ptrCast(self), @ptrCast(c));
    }

    pub fn Completer(self: ?*anyopaque, ) QtC.QCompleter {
        return qtc.QComboBox_Completer(@ptrCast(self));
    }

    pub fn ItemDelegate(self: ?*anyopaque, ) QtC.QAbstractItemDelegate {
        return qtc.QComboBox_ItemDelegate(@ptrCast(self));
    }

    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QComboBox_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QComboBox_Model(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QComboBox_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Allows for overriding the related default method
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QComboBox_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn RootModelIndex(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QComboBox_RootModelIndex(@ptrCast(self));
    }

    pub fn SetRootModelIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QComboBox_SetRootModelIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn ModelColumn(self: ?*anyopaque, ) i32 {
        return qtc.QComboBox_ModelColumn(@ptrCast(self));
    }

    pub fn SetModelColumn(self: ?*anyopaque, visibleColumn: i32) void {
        qtc.QComboBox_SetModelColumn(@ptrCast(self), visibleColumn);
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) i32 {
        return qtc.QComboBox_CurrentIndex(@ptrCast(self));
    }

    pub fn CurrentText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_CurrentText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcombobox.CurrentText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CurrentData(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QComboBox_CurrentData(@ptrCast(self));
    }

    pub fn ItemText(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_ItemText(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcombobox.ItemText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ItemIcon(self: ?*anyopaque, index: i32) QtC.QIcon {
        return qtc.QComboBox_ItemIcon(@ptrCast(self), index);
    }

    pub fn ItemData(self: ?*anyopaque, index: i32) QtC.QVariant {
        return qtc.QComboBox_ItemData(@ptrCast(self), index);
    }

    pub fn AddItem(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_AddItem(@ptrCast(self), text_str);
    }

    pub fn AddItem2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_AddItem2(@ptrCast(self), @ptrCast(icon), text_str);
    }

    pub fn AddItems(self: ?*anyopaque, texts: []const u8) void {
        qtc.QComboBox_AddItems(@ptrCast(self), @ptrCast(texts));
    }

    pub fn InsertItem(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_InsertItem(@ptrCast(self), index, text_str);
    }

    pub fn InsertItem2(self: ?*anyopaque, index: i32, icon: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_InsertItem2(@ptrCast(self), index, @ptrCast(icon), text_str);
    }

    pub fn InsertItems(self: ?*anyopaque, index: i32, texts: []const u8) void {
        qtc.QComboBox_InsertItems(@ptrCast(self), index, @ptrCast(texts));
    }

    pub fn InsertSeparator(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_InsertSeparator(@ptrCast(self), index);
    }

    pub fn RemoveItem(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_RemoveItem(@ptrCast(self), index);
    }

    pub fn SetItemText(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_SetItemText(@ptrCast(self), index, text_str);
    }

    pub fn SetItemIcon(self: ?*anyopaque, index: i32, icon: ?*anyopaque) void {
        qtc.QComboBox_SetItemIcon(@ptrCast(self), index, @ptrCast(icon));
    }

    pub fn SetItemData(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QComboBox_SetItemData(@ptrCast(self), index, @ptrCast(value));
    }

    pub fn View(self: ?*anyopaque, ) QtC.QAbstractItemView {
        return qtc.QComboBox_View(@ptrCast(self));
    }

    pub fn SetView(self: ?*anyopaque, itemView: ?*anyopaque) void {
        qtc.QComboBox_SetView(@ptrCast(self), @ptrCast(itemView));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QComboBox_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QComboBox_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QComboBox_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QComboBox_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QComboBox_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QComboBox_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn ShowPopup(self: ?*anyopaque, ) void {
        qtc.QComboBox_ShowPopup(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnShowPopup(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnShowPopup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowPopup(self: ?*anyopaque, ) void {
        qtc.QComboBox_QBaseShowPopup(@ptrCast(self));
    }

    pub fn HidePopup(self: ?*anyopaque, ) void {
        qtc.QComboBox_HidePopup(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHidePopup(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnHidePopup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHidePopup(self: ?*anyopaque, ) void {
        qtc.QComboBox_QBaseHidePopup(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QComboBox_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QComboBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QComboBox_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QComboBox_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QComboBox_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QComboBox_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    pub fn InputMethodQuery2(self: ?*anyopaque, query: i64, argument: ?*anyopaque) QtC.QVariant {
        return qtc.QComboBox_InputMethodQuery2(@ptrCast(self), @intCast(query), @ptrCast(argument));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QComboBox_Clear(@ptrCast(self));
    }

    pub fn ClearEditText(self: ?*anyopaque, ) void {
        qtc.QComboBox_ClearEditText(@ptrCast(self));
    }

    pub fn SetEditText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_SetEditText(@ptrCast(self), text_str);
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_SetCurrentIndex(@ptrCast(self), index);
    }

    pub fn SetCurrentText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_SetCurrentText(@ptrCast(self), text_str);
    }

    pub fn EditTextChanged(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QComboBox_EditTextChanged(@ptrCast(self), param1_str);
    }

    pub fn OnEditTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_EditTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Activated(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_Activated(@ptrCast(self), index);
    }

    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TextActivated(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QComboBox_TextActivated(@ptrCast(self), param1_str);
    }

    pub fn OnTextActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Highlighted(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_Highlighted(@ptrCast(self), index);
    }

    pub fn OnHighlighted(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Highlighted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TextHighlighted(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QComboBox_TextHighlighted(@ptrCast(self), param1_str);
    }

    pub fn OnTextHighlighted(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextHighlighted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentIndexChanged(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_CurrentIndexChanged(@ptrCast(self), index);
    }

    pub fn OnCurrentIndexChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentIndexChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentTextChanged(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QComboBox_CurrentTextChanged(@ptrCast(self), param1_str);
    }

    pub fn OnCurrentTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_FocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseFocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ShowEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_ShowEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseShowEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn HideEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_HideEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseHideEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_KeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QComboBox_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QComboBox_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QComboBox_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QComboBox_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QComboBox_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QComboBox_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcombobox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcombobox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FindText2(self: ?*anyopaque, text: []const u8, flags: i32) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QComboBox_FindText2(@ptrCast(self), text_str, @intCast(flags));
    }

    pub fn FindData2(self: ?*anyopaque, data: ?*anyopaque, role: i32) i32 {
        return qtc.QComboBox_FindData2(@ptrCast(self), @ptrCast(data), role);
    }

    pub fn FindData3(self: ?*anyopaque, data: ?*anyopaque, role: i32, flags: i32) i32 {
        return qtc.QComboBox_FindData3(@ptrCast(self), @ptrCast(data), role, @intCast(flags));
    }

    pub fn CurrentData1(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QComboBox_CurrentData1(@ptrCast(self), role);
    }

    pub fn ItemData2(self: ?*anyopaque, index: i32, role: i32) QtC.QVariant {
        return qtc.QComboBox_ItemData2(@ptrCast(self), index, role);
    }

    pub fn AddItem22(self: ?*anyopaque, text: []const u8, userData: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_AddItem22(@ptrCast(self), text_str, @ptrCast(userData));
    }

    pub fn AddItem3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, userData: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_AddItem3(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(userData));
    }

    pub fn InsertItem3(self: ?*anyopaque, index: i32, text: []const u8, userData: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_InsertItem3(@ptrCast(self), index, text_str, @ptrCast(userData));
    }

    pub fn InsertItem4(self: ?*anyopaque, index: i32, icon: ?*anyopaque, text: []const u8, userData: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QComboBox_InsertItem4(@ptrCast(self), index, @ptrCast(icon), text_str, @ptrCast(userData));
    }

    pub fn SetItemData3(self: ?*anyopaque, index: i32, value: ?*anyopaque, role: i32) void {
        qtc.QComboBox_SetItemData3(@ptrCast(self), index, @ptrCast(value), role);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QComboBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/combobox.html#types
pub const enums = struct {
    pub const InsertPolicy = enum {
        pub const NoInsert: i32 = 0;
        pub const InsertAtTop: i32 = 1;
        pub const InsertAtCurrent: i32 = 2;
        pub const InsertAtBottom: i32 = 3;
        pub const InsertAfterCurrent: i32 = 4;
        pub const InsertBeforeCurrent: i32 = 5;
        pub const InsertAlphabetically: i32 = 6;
    };

    pub const SizeAdjustPolicy = enum {
        pub const AdjustToContents: i32 = 0;
        pub const AdjustToContentsOnFirstShow: i32 = 1;
        pub const AdjustToMinimumContentsLengthWithIcon: i32 = 2;
    };

};
