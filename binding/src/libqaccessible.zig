const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaccessibleinterface.html
pub const qaccessibleinterface = struct {

    /// New constructs a new QAccessibleInterface object.
    pub fn New() QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_new();
    }


    /// New2 constructs a new QAccessibleInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_new2(@ptrCast(param1));
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleInterface_IsValid(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsValid(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleInterface_OnIsValid(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsValid(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleInterface_QBaseIsValid(@ptrCast(self));
    }

    pub fn Object(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QAccessibleInterface_Object(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnObject(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QObject) void {
        qtc.QAccessibleInterface_OnObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseObject(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QAccessibleInterface_QBaseObject(@ptrCast(self));
    }

    pub fn Window(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QAccessibleInterface_Window(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QWindow) void {
        qtc.QAccessibleInterface_OnWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWindow(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QAccessibleInterface_QBaseWindow(@ptrCast(self));
    }

    pub fn Relations(self: ?*anyopaque, match: i64) []const u8 {
        return qtc.QAccessibleInterface_Relations(@ptrCast(self), @intCast(match));
    }

    /// Allows for overriding the related default method
    pub fn OnRelations(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleInterface_OnRelations(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRelations(self: ?*anyopaque, match: i64) []const u8 {
        return qtc.QAccessibleInterface_QBaseRelations(@ptrCast(self), @intCast(match));
    }

    pub fn FocusChild(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_FocusChild(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusChild(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleInterface_OnFocusChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusChild(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_QBaseFocusChild(@ptrCast(self));
    }

    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_ChildAt(@ptrCast(self), x, y);
    }

    /// Allows for overriding the related default method
    pub fn OnChildAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleInterface_OnChildAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_QBaseChildAt(@ptrCast(self), x, y);
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_Parent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleInterface_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_QBaseParent(@ptrCast(self));
    }

    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_Child(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleInterface_OnChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChild(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_QBaseChild(@ptrCast(self), index);
    }

    pub fn ChildCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleInterface_ChildCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnChildCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleInterface_OnChildCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleInterface_QBaseChildCount(@ptrCast(self));
    }

    pub fn IndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleInterface_IndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexOfChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleInterface_OnIndexOfChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleInterface_QBaseIndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Text(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleInterface_Text(@ptrCast(self), @intCast(t));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleinterface.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleInterface_OnText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseText(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleInterface_QBaseText(@ptrCast(self), @intCast(t));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleinterface.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAccessibleInterface_SetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleInterface_OnSetText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetText(self: ?*anyopaque, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAccessibleInterface_QBaseSetText(@ptrCast(self), @intCast(t), text_str);
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QAccessibleInterface_Rect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QAccessibleInterface_OnRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QAccessibleInterface_QBaseRect(@ptrCast(self));
    }

    pub fn Role(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleInterface_Role(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRole(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleInterface_OnRole(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRole(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleInterface_QBaseRole(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) QtC.QAccessible__State {
        return qtc.QAccessibleInterface_State(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessible__State) void {
        qtc.QAccessibleInterface_OnState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseState(self: ?*anyopaque, ) QtC.QAccessible__State {
        return qtc.QAccessibleInterface_QBaseState(@ptrCast(self));
    }

    pub fn ForegroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAccessibleInterface_ForegroundColor(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnForegroundColor(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QColor) void {
        qtc.QAccessibleInterface_OnForegroundColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseForegroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAccessibleInterface_QBaseForegroundColor(@ptrCast(self));
    }

    pub fn BackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAccessibleInterface_BackgroundColor(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBackgroundColor(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QColor) void {
        qtc.QAccessibleInterface_OnBackgroundColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAccessibleInterface_QBaseBackgroundColor(@ptrCast(self));
    }

    pub fn TextInterface(self: ?*anyopaque, ) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleInterface_TextInterface(@ptrCast(self));
    }

    pub fn EditableTextInterface(self: ?*anyopaque, ) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self));
    }

    pub fn ValueInterface(self: ?*anyopaque, ) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleInterface_ValueInterface(@ptrCast(self));
    }

    pub fn ActionInterface(self: ?*anyopaque, ) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleInterface_ActionInterface(@ptrCast(self));
    }

    pub fn ImageInterface(self: ?*anyopaque, ) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleInterface_ImageInterface(@ptrCast(self));
    }

    pub fn TableInterface(self: ?*anyopaque, ) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleInterface_TableInterface(@ptrCast(self));
    }

    pub fn TableCellInterface(self: ?*anyopaque, ) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self));
    }

    pub fn HyperlinkInterface(self: ?*anyopaque, ) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self));
    }

    pub fn SelectionInterface(self: ?*anyopaque, ) QtC.QAccessibleSelectionInterface {
        return qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self));
    }

    pub fn AttributesInterface(self: ?*anyopaque, ) QtC.QAccessibleAttributesInterface {
        return qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self));
    }

    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleInterface_VirtualHook(@ptrCast(self), id, @ptrCast(data));
    }

    /// Allows for overriding the related default method
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleInterface_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleInterface_QBaseVirtualHook(@ptrCast(self), id, @ptrCast(data));
    }

    pub fn InterfaceCast(self: ?*anyopaque, param1: i32) ?*anyopaque {
        return qtc.QAccessibleInterface_InterfaceCast(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInterfaceCast(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleInterface_OnInterfaceCast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInterfaceCast(self: ?*anyopaque, param1: i32) ?*anyopaque {
        return qtc.QAccessibleInterface_QBaseInterfaceCast(@ptrCast(self), @intCast(param1));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleInterface_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleInterface_QBaseOperatorAssign(@ptrCast(self), @ptrCast(param1));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextinterface.html
pub const qaccessibletextinterface = struct {

    /// New constructs a new QAccessibleTextInterface object.
    pub fn New() QtC.QAccessibleTextInterface {
        return qtc.QAccessibleTextInterface_new();
    }


    /// New2 constructs a new QAccessibleTextInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleTextInterface_new2(@ptrCast(param1));
    }


    pub fn Selection(self: ?*anyopaque, selectionIndex: i32, startOffset: *i32, endOffset: *i32) void {
        qtc.QAccessibleTextInterface_Selection(@ptrCast(self), selectionIndex, @ptrCast(startOffset), @ptrCast(endOffset));
    }

    /// Allows for overriding the related default method
    pub fn OnSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, *i32, *i32) callconv(.c) void) void {
        qtc.QAccessibleTextInterface_OnSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelection(self: ?*anyopaque, selectionIndex: i32, startOffset: *i32, endOffset: *i32) void {
        qtc.QAccessibleTextInterface_QBaseSelection(@ptrCast(self), selectionIndex, @ptrCast(startOffset), @ptrCast(endOffset));
    }

    pub fn SelectionCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextInterface_SelectionCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectionCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTextInterface_OnSelectionCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectionCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextInterface_QBaseSelectionCount(@ptrCast(self));
    }

    pub fn AddSelection(self: ?*anyopaque, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_AddSelection(@ptrCast(self), startOffset, endOffset);
    }

    /// Allows for overriding the related default method
    pub fn OnAddSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAccessibleTextInterface_OnAddSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddSelection(self: ?*anyopaque, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_QBaseAddSelection(@ptrCast(self), startOffset, endOffset);
    }

    pub fn RemoveSelection(self: ?*anyopaque, selectionIndex: i32) void {
        qtc.QAccessibleTextInterface_RemoveSelection(@ptrCast(self), selectionIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAccessibleTextInterface_OnRemoveSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveSelection(self: ?*anyopaque, selectionIndex: i32) void {
        qtc.QAccessibleTextInterface_QBaseRemoveSelection(@ptrCast(self), selectionIndex);
    }

    pub fn SetSelection(self: ?*anyopaque, selectionIndex: i32, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_SetSelection(@ptrCast(self), selectionIndex, startOffset, endOffset);
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAccessibleTextInterface_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelection(self: ?*anyopaque, selectionIndex: i32, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_QBaseSetSelection(@ptrCast(self), selectionIndex, startOffset, endOffset);
    }

    pub fn CursorPosition(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextInterface_CursorPosition(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCursorPosition(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTextInterface_OnCursorPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCursorPosition(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextInterface_QBaseCursorPosition(@ptrCast(self));
    }

    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextInterface_SetCursorPosition(@ptrCast(self), position);
    }

    /// Allows for overriding the related default method
    pub fn OnSetCursorPosition(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAccessibleTextInterface_OnSetCursorPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextInterface_QBaseSetCursorPosition(@ptrCast(self), position);
    }

    pub fn Text(self: ?*anyopaque, startOffset: i32, endOffset: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_Text(@ptrCast(self), startOffset, endOffset);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTextInterface_OnText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseText(self: ?*anyopaque, startOffset: i32, endOffset: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_QBaseText(@ptrCast(self), startOffset, endOffset);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TextBeforeOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_TextBeforeOffset(@ptrCast(self), offset, @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextBeforeOffset: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnTextBeforeOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *i32, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTextInterface_OnTextBeforeOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTextBeforeOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_QBaseTextBeforeOffset(@ptrCast(self), offset, @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextBeforeOffset: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TextAfterOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_TextAfterOffset(@ptrCast(self), offset, @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAfterOffset: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnTextAfterOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *i32, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTextInterface_OnTextAfterOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTextAfterOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_QBaseTextAfterOffset(@ptrCast(self), offset, @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAfterOffset: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TextAtOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_TextAtOffset(@ptrCast(self), offset, @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAtOffset: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnTextAtOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *i32, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTextInterface_OnTextAtOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTextAtOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_QBaseTextAtOffset(@ptrCast(self), offset, @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAtOffset: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CharacterCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextInterface_CharacterCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCharacterCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTextInterface_OnCharacterCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCharacterCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextInterface_QBaseCharacterCount(@ptrCast(self));
    }

    pub fn CharacterRect(self: ?*anyopaque, offset: i32) QtC.QRect {
        return qtc.QAccessibleTextInterface_CharacterRect(@ptrCast(self), offset);
    }

    /// Allows for overriding the related default method
    pub fn OnCharacterRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QRect) void {
        qtc.QAccessibleTextInterface_OnCharacterRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCharacterRect(self: ?*anyopaque, offset: i32) QtC.QRect {
        return qtc.QAccessibleTextInterface_QBaseCharacterRect(@ptrCast(self), offset);
    }

    pub fn OffsetAtPoint(self: ?*anyopaque, point: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_OffsetAtPoint(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnOffsetAtPoint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTextInterface_OnOffsetAtPoint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOffsetAtPoint(self: ?*anyopaque, point: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_QBaseOffsetAtPoint(@ptrCast(self), @ptrCast(point));
    }

    pub fn ScrollToSubstring(self: ?*anyopaque, startIndex: i32, endIndex: i32) void {
        qtc.QAccessibleTextInterface_ScrollToSubstring(@ptrCast(self), startIndex, endIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollToSubstring(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAccessibleTextInterface_OnScrollToSubstring(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollToSubstring(self: ?*anyopaque, startIndex: i32, endIndex: i32) void {
        qtc.QAccessibleTextInterface_QBaseScrollToSubstring(@ptrCast(self), startIndex, endIndex);
    }

    pub fn Attributes(self: ?*anyopaque, offset: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_Attributes(@ptrCast(self), offset, @ptrCast(startOffset), @ptrCast(endOffset));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Attributes: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnAttributes(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, *i32, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTextInterface_OnAttributes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAttributes(self: ?*anyopaque, offset: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_QBaseAttributes(@ptrCast(self), offset, @ptrCast(startOffset), @ptrCast(endOffset));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Attributes: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleTextInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html
pub const qaccessibleeditabletextinterface = struct {

    /// New constructs a new QAccessibleEditableTextInterface object.
    pub fn New() QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleEditableTextInterface_new();
    }


    /// New2 constructs a new QAccessibleEditableTextInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleEditableTextInterface_new2(@ptrCast(param1));
    }


    pub fn DeleteText(self: ?*anyopaque, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleEditableTextInterface_DeleteText(@ptrCast(self), startOffset, endOffset);
    }

    /// Allows for overriding the related default method
    pub fn OnDeleteText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAccessibleEditableTextInterface_OnDeleteText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDeleteText(self: ?*anyopaque, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleEditableTextInterface_QBaseDeleteText(@ptrCast(self), startOffset, endOffset);
    }

    pub fn InsertText(self: ?*anyopaque, offset: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAccessibleEditableTextInterface_InsertText(@ptrCast(self), offset, text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnInsertText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleEditableTextInterface_OnInsertText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertText(self: ?*anyopaque, offset: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAccessibleEditableTextInterface_QBaseInsertText(@ptrCast(self), offset, text_str);
    }

    pub fn ReplaceText(self: ?*anyopaque, startOffset: i32, endOffset: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAccessibleEditableTextInterface_ReplaceText(@ptrCast(self), startOffset, endOffset, text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnReplaceText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleEditableTextInterface_OnReplaceText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReplaceText(self: ?*anyopaque, startOffset: i32, endOffset: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAccessibleEditableTextInterface_QBaseReplaceText(@ptrCast(self), startOffset, endOffset, text_str);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleEditableTextInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleEditableTextInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblevalueinterface.html
pub const qaccessiblevalueinterface = struct {

    /// New constructs a new QAccessibleValueInterface object.
    pub fn New() QtC.QAccessibleValueInterface {
        return qtc.QAccessibleValueInterface_new();
    }


    /// New2 constructs a new QAccessibleValueInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleValueInterface_new2(@ptrCast(param1));
    }


    pub fn CurrentValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueInterface_CurrentValue(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentValue(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QAccessibleValueInterface_OnCurrentValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueInterface_QBaseCurrentValue(@ptrCast(self));
    }

    pub fn SetCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_SetCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetCurrentValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleValueInterface_OnSetCurrentValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_QBaseSetCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn MaximumValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MaximumValue(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumValue(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QAccessibleValueInterface_OnMaximumValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueInterface_QBaseMaximumValue(@ptrCast(self));
    }

    pub fn MinimumValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MinimumValue(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumValue(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QAccessibleValueInterface_OnMinimumValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueInterface_QBaseMinimumValue(@ptrCast(self));
    }

    pub fn MinimumStepSize(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MinimumStepSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumStepSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QAccessibleValueInterface_OnMinimumStepSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumStepSize(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueInterface_QBaseMinimumStepSize(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletablecellinterface.html
pub const qaccessibletablecellinterface = struct {

    /// New constructs a new QAccessibleTableCellInterface object.
    pub fn New() QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleTableCellInterface_new();
    }


    /// New2 constructs a new QAccessibleTableCellInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleTableCellInterface_new2(@ptrCast(param1));
    }


    pub fn IsSelected(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleTableCellInterface_IsSelected(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleTableCellInterface_OnIsSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSelected(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleTableCellInterface_QBaseIsSelected(@ptrCast(self));
    }

    pub fn ColumnHeaderCells(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableCellInterface_ColumnHeaderCells(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnHeaderCells(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTableCellInterface_OnColumnHeaderCells(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnHeaderCells(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableCellInterface_QBaseColumnHeaderCells(@ptrCast(self));
    }

    pub fn RowHeaderCells(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableCellInterface_RowHeaderCells(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRowHeaderCells(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTableCellInterface_OnRowHeaderCells(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowHeaderCells(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableCellInterface_QBaseRowHeaderCells(@ptrCast(self));
    }

    pub fn ColumnIndex(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableCellInterface_OnColumnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnIndex(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableCellInterface_QBaseColumnIndex(@ptrCast(self));
    }

    pub fn RowIndex(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableCellInterface_RowIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRowIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableCellInterface_OnRowIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowIndex(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableCellInterface_QBaseRowIndex(@ptrCast(self));
    }

    pub fn ColumnExtent(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnExtent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnExtent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableCellInterface_OnColumnExtent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnExtent(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableCellInterface_QBaseColumnExtent(@ptrCast(self));
    }

    pub fn RowExtent(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableCellInterface_RowExtent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRowExtent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableCellInterface_OnRowExtent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowExtent(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableCellInterface_QBaseRowExtent(@ptrCast(self));
    }

    pub fn Table(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableCellInterface_Table(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnTable(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTableCellInterface_OnTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTable(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableCellInterface_QBaseTable(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleTableCellInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableCellInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletableinterface.html
pub const qaccessibletableinterface = struct {

    /// New constructs a new QAccessibleTableInterface object.
    pub fn New() QtC.QAccessibleTableInterface {
        return qtc.QAccessibleTableInterface_new();
    }


    /// New2 constructs a new QAccessibleTableInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleTableInterface_new2(@ptrCast(param1));
    }


    pub fn Caption(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_Caption(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCaption(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTableInterface_OnCaption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCaption(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_QBaseCaption(@ptrCast(self));
    }

    pub fn Summary(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_Summary(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSummary(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTableInterface_OnSummary(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSummary(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_QBaseSummary(@ptrCast(self));
    }

    pub fn CellAt(self: ?*anyopaque, row: i32, column: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_CellAt(@ptrCast(self), row, column);
    }

    /// Allows for overriding the related default method
    pub fn OnCellAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTableInterface_OnCellAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCellAt(self: ?*anyopaque, row: i32, column: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_QBaseCellAt(@ptrCast(self), row, column);
    }

    pub fn SelectedCellCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_SelectedCellCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedCellCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableInterface_OnSelectedCellCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedCellCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_QBaseSelectedCellCount(@ptrCast(self));
    }

    pub fn SelectedCells(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableInterface_SelectedCells(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedCells(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTableInterface_OnSelectedCells(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedCells(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableInterface_QBaseSelectedCells(@ptrCast(self));
    }

    pub fn ColumnDescription(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTableInterface_ColumnDescription(@ptrCast(self), column);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.ColumnDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnColumnDescription(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTableInterface_OnColumnDescription(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnDescription(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTableInterface_QBaseColumnDescription(@ptrCast(self), column);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.ColumnDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RowDescription(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTableInterface_RowDescription(@ptrCast(self), row);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.RowDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnRowDescription(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTableInterface_OnRowDescription(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowDescription(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTableInterface_QBaseRowDescription(@ptrCast(self), row);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.RowDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SelectedColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_SelectedColumnCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableInterface_OnSelectedColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_QBaseSelectedColumnCount(@ptrCast(self));
    }

    pub fn SelectedRowCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_SelectedRowCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableInterface_OnSelectedRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedRowCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_QBaseSelectedRowCount(@ptrCast(self));
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_ColumnCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableInterface_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_QBaseColumnCount(@ptrCast(self));
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_RowCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleTableInterface_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableInterface_QBaseRowCount(@ptrCast(self));
    }

    pub fn SelectedColumns(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableInterface_SelectedColumns(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTableInterface_OnSelectedColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedColumns(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableInterface_QBaseSelectedColumns(@ptrCast(self));
    }

    pub fn SelectedRows(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableInterface_SelectedRows(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedRows(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleTableInterface_OnSelectedRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedRows(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleTableInterface_QBaseSelectedRows(@ptrCast(self));
    }

    pub fn IsColumnSelected(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_IsColumnSelected(@ptrCast(self), column);
    }

    /// Allows for overriding the related default method
    pub fn OnIsColumnSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAccessibleTableInterface_OnIsColumnSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsColumnSelected(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_QBaseIsColumnSelected(@ptrCast(self), column);
    }

    pub fn IsRowSelected(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_IsRowSelected(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnIsRowSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAccessibleTableInterface_OnIsRowSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsRowSelected(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_QBaseIsRowSelected(@ptrCast(self), row);
    }

    pub fn SelectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_SelectRow(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnSelectRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAccessibleTableInterface_OnSelectRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_QBaseSelectRow(@ptrCast(self), row);
    }

    pub fn SelectColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_SelectColumn(@ptrCast(self), column);
    }

    /// Allows for overriding the related default method
    pub fn OnSelectColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAccessibleTableInterface_OnSelectColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_QBaseSelectColumn(@ptrCast(self), column);
    }

    pub fn UnselectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectRow(@ptrCast(self), row);
    }

    /// Allows for overriding the related default method
    pub fn OnUnselectRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAccessibleTableInterface_OnUnselectRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnselectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_QBaseUnselectRow(@ptrCast(self), row);
    }

    pub fn UnselectColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectColumn(@ptrCast(self), column);
    }

    /// Allows for overriding the related default method
    pub fn OnUnselectColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QAccessibleTableInterface_OnUnselectColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnselectColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_QBaseUnselectColumn(@ptrCast(self), column);
    }

    pub fn ModelChange(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_ModelChange(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnModelChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleTableInterface_OnModelChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseModelChange(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_QBaseModelChange(@ptrCast(self), @ptrCast(event));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleTableInterface_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_QBaseOperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleactioninterface.html
pub const qaccessibleactioninterface = struct {

    /// New constructs a new QAccessibleActionInterface object.
    pub fn New() QtC.QAccessibleActionInterface {
        return qtc.QAccessibleActionInterface_new();
    }


    /// New2 constructs a new QAccessibleActionInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleActionInterface_new2(@ptrCast(param1));
    }


    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_Tr(@ptrCast(sourceText));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ActionNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleActionInterface_ActionNames(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnActionNames(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleActionInterface_OnActionNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseActionNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleActionInterface_QBaseActionNames(@ptrCast(self));
    }

    pub fn LocalizedActionName(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QAccessibleActionInterface_LocalizedActionName(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnLocalizedActionName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleActionInterface_OnLocalizedActionName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLocalizedActionName(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QAccessibleActionInterface_QBaseLocalizedActionName(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LocalizedActionDescription(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QAccessibleActionInterface_LocalizedActionDescription(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnLocalizedActionDescription(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleActionInterface_OnLocalizedActionDescription(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLocalizedActionDescription(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QAccessibleActionInterface_QBaseLocalizedActionDescription(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DoAction(self: ?*anyopaque, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
    .len = actionName.len,
    .data = actionName.ptr,
};
qtc.QAccessibleActionInterface_DoAction(@ptrCast(self), actionName_str);
    }

    /// Allows for overriding the related default method
    pub fn OnDoAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleActionInterface_OnDoAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoAction(self: ?*anyopaque, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
    .len = actionName.len,
    .data = actionName.ptr,
};
qtc.QAccessibleActionInterface_QBaseDoAction(@ptrCast(self), actionName_str);
    }

    pub fn KeyBindingsForAction(self: ?*anyopaque, actionName: []const u8) []const u8 {
        const actionName_str = qtc.libqt_string{
    .len = actionName.len,
    .data = actionName.ptr,
};
return qtc.QAccessibleActionInterface_KeyBindingsForAction(@ptrCast(self), actionName_str);
    }

    /// Allows for overriding the related default method
    pub fn OnKeyBindingsForAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleActionInterface_OnKeyBindingsForAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyBindingsForAction(self: ?*anyopaque, actionName: []const u8) []const u8 {
        const actionName_str = qtc.libqt_string{
    .len = actionName.len,
    .data = actionName.ptr,
};
return qtc.QAccessibleActionInterface_QBaseKeyBindingsForAction(@ptrCast(self), actionName_str);
    }

    pub fn PressAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_PressAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.PressAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IncreaseAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_IncreaseAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.IncreaseAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DecreaseAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_DecreaseAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.DecreaseAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShowMenuAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ShowMenuAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ShowMenuAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFocusAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_SetFocusAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.SetFocusAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToggleAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ToggleAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ToggleAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ScrollLeftAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollLeftAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollLeftAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ScrollRightAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollRightAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollRightAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ScrollUpAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollUpAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollUpAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ScrollDownAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollDownAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollDownAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NextPageAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_NextPageAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.NextPageAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PreviousPageAction(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_PreviousPageAction();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.PreviousPageAction: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleActionInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_Tr2(@ptrCast(sourceText), @ptrCast(disambiguation));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_Tr3(@ptrCast(sourceText), @ptrCast(disambiguation), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleActionInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleimageinterface.html
pub const qaccessibleimageinterface = struct {

    /// New constructs a new QAccessibleImageInterface object.
    pub fn New() QtC.QAccessibleImageInterface {
        return qtc.QAccessibleImageInterface_new();
    }


    /// New2 constructs a new QAccessibleImageInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleImageInterface_new2(@ptrCast(param1));
    }


    pub fn ImageDescription(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleImageInterface_ImageDescription(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleimageinterface.ImageDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnImageDescription(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleImageInterface_OnImageDescription(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseImageDescription(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleImageInterface_QBaseImageDescription(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleimageinterface.ImageDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ImageSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAccessibleImageInterface_ImageSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnImageSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAccessibleImageInterface_OnImageSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseImageSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAccessibleImageInterface_QBaseImageSize(@ptrCast(self));
    }

    pub fn ImagePosition(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QAccessibleImageInterface_ImagePosition(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnImagePosition(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPoint) void {
        qtc.QAccessibleImageInterface_OnImagePosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseImagePosition(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QAccessibleImageInterface_QBaseImagePosition(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleImageInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleImageInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html
pub const qaccessiblehyperlinkinterface = struct {

    /// New constructs a new QAccessibleHyperlinkInterface object.
    pub fn New() QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleHyperlinkInterface_new();
    }


    /// New2 constructs a new QAccessibleHyperlinkInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleHyperlinkInterface_new2(@ptrCast(param1));
    }


    pub fn Anchor(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleHyperlinkInterface_Anchor(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.Anchor: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnAnchor(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleHyperlinkInterface_OnAnchor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAnchor(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleHyperlinkInterface_QBaseAnchor(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.Anchor: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AnchorTarget(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleHyperlinkInterface_AnchorTarget(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.AnchorTarget: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnAnchorTarget(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleHyperlinkInterface_OnAnchorTarget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAnchorTarget(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleHyperlinkInterface_QBaseAnchorTarget(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.AnchorTarget: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StartIndex(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleHyperlinkInterface_StartIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStartIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleHyperlinkInterface_OnStartIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStartIndex(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleHyperlinkInterface_QBaseStartIndex(@ptrCast(self));
    }

    pub fn EndIndex(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleHyperlinkInterface_EndIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEndIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleHyperlinkInterface_OnEndIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEndIndex(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleHyperlinkInterface_QBaseEndIndex(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleHyperlinkInterface_IsValid(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsValid(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleHyperlinkInterface_OnIsValid(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsValid(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleHyperlinkInterface_QBaseIsValid(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleHyperlinkInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleHyperlinkInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleselectioninterface.html
pub const qaccessibleselectioninterface = struct {

    /// New constructs a new QAccessibleSelectionInterface object.
    pub fn New() QtC.QAccessibleSelectionInterface {
        return qtc.QAccessibleSelectionInterface_new();
    }


    /// New2 constructs a new QAccessibleSelectionInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleSelectionInterface {
        return qtc.QAccessibleSelectionInterface_new2(@ptrCast(param1));
    }


    pub fn SelectedItemCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleSelectionInterface_SelectedItemCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedItemCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleSelectionInterface_OnSelectedItemCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedItemCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleSelectionInterface_QBaseSelectedItemCount(@ptrCast(self));
    }

    pub fn SelectedItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleSelectionInterface_SelectedItems(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedItems(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleSelectionInterface_OnSelectedItems(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleSelectionInterface_QBaseSelectedItems(@ptrCast(self));
    }

    pub fn SelectedItem(self: ?*anyopaque, selectionIndex: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleSelectionInterface_SelectedItem(@ptrCast(self), selectionIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleSelectionInterface_OnSelectedItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedItem(self: ?*anyopaque, selectionIndex: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleSelectionInterface_QBaseSelectedItem(@ptrCast(self), selectionIndex);
    }

    pub fn IsSelected(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_IsSelected(@ptrCast(self), @ptrCast(childItem));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleSelectionInterface_OnIsSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSelected(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_QBaseIsSelected(@ptrCast(self), @ptrCast(childItem));
    }

    pub fn Select(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_Select(@ptrCast(self), @ptrCast(childItem));
    }

    /// Allows for overriding the related default method
    pub fn OnSelect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleSelectionInterface_OnSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelect(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_QBaseSelect(@ptrCast(self), @ptrCast(childItem));
    }

    pub fn Unselect(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_Unselect(@ptrCast(self), @ptrCast(childItem));
    }

    /// Allows for overriding the related default method
    pub fn OnUnselect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleSelectionInterface_OnUnselect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnselect(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_QBaseUnselect(@ptrCast(self), @ptrCast(childItem));
    }

    pub fn SelectAll(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleSelectionInterface_SelectAll(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectAll(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleSelectionInterface_OnSelectAll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectAll(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleSelectionInterface_QBaseSelectAll(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleSelectionInterface_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleSelectionInterface_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleSelectionInterface_QBaseClear(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleSelectionInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleSelectionInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleattributesinterface.html
pub const qaccessibleattributesinterface = struct {

    /// New constructs a new QAccessibleAttributesInterface object.
    pub fn New() QtC.QAccessibleAttributesInterface {
        return qtc.QAccessibleAttributesInterface_new();
    }


    /// New2 constructs a new QAccessibleAttributesInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleAttributesInterface {
        return qtc.QAccessibleAttributesInterface_new2(@ptrCast(param1));
    }


    pub fn AttributeKeys(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleAttributesInterface_AttributeKeys(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAttributeKeys(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleAttributesInterface_OnAttributeKeys(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAttributeKeys(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleAttributesInterface_QBaseAttributeKeys(@ptrCast(self));
    }

    pub fn AttributeValue(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QAccessibleAttributesInterface_AttributeValue(@ptrCast(self), @intCast(key));
    }

    /// Allows for overriding the related default method
    pub fn OnAttributeValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QAccessibleAttributesInterface_OnAttributeValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAttributeValue(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QAccessibleAttributesInterface_QBaseAttributeValue(@ptrCast(self), @intCast(key));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleAttributesInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleAttributesInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleevent.html
pub const qaccessibleevent = struct {

    /// New constructs a new QAccessibleEvent object.
    pub fn New(obj: ?*anyopaque, typ: i32) QtC.QAccessibleEvent {
        return qtc.QAccessibleEvent_new(@ptrCast(obj), @intCast(typ));
    }


    /// New2 constructs a new QAccessibleEvent object.
    pub fn New2(iface: ?*anyopaque, typ: i32) QtC.QAccessibleEvent {
        return qtc.QAccessibleEvent_new2(@ptrCast(iface), @intCast(typ));
    }


    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    pub fn Object(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    pub fn UniqueId(self: ?*anyopaque, ) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), chld);
    }

    pub fn Child(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    pub fn AccessibleInterface(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAccessibleInterface(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html
pub const qaccessiblestatechangeevent = struct {

    /// New constructs a new QAccessibleStateChangeEvent object.
    pub fn New(obj: ?*anyopaque, state: QtC.QAccessible__State) QtC.QAccessibleStateChangeEvent {
        return qtc.QAccessibleStateChangeEvent_new(@ptrCast(obj), @ptrCast(state));
    }


    /// New2 constructs a new QAccessibleStateChangeEvent object.
    pub fn New2(iface: ?*anyopaque, state: QtC.QAccessible__State) QtC.QAccessibleStateChangeEvent {
        return qtc.QAccessibleStateChangeEvent_new2(@ptrCast(iface), @ptrCast(state));
    }


    pub fn ChangedStates(self: ?*anyopaque, ) QtC.QAccessible__State {
        return qtc.QAccessibleStateChangeEvent_ChangedStates(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextcursorevent.html
pub const qaccessibletextcursorevent = struct {

    /// New constructs a new QAccessibleTextCursorEvent object.
    pub fn New(obj: ?*anyopaque, cursorPos: i32) QtC.QAccessibleTextCursorEvent {
        return qtc.QAccessibleTextCursorEvent_new(@ptrCast(obj), cursorPos);
    }


    /// New2 constructs a new QAccessibleTextCursorEvent object.
    pub fn New2(iface: ?*anyopaque, cursorPos: i32) QtC.QAccessibleTextCursorEvent {
        return qtc.QAccessibleTextCursorEvent_new2(@ptrCast(iface), cursorPos);
    }


    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), position);
    }

    pub fn CursorPosition(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextCursorEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextselectionevent.html
pub const qaccessibletextselectionevent = struct {

    /// New constructs a new QAccessibleTextSelectionEvent object.
    pub fn New(obj: ?*anyopaque, start: i32, end: i32) QtC.QAccessibleTextSelectionEvent {
        return qtc.QAccessibleTextSelectionEvent_new(@ptrCast(obj), start, end);
    }


    /// New2 constructs a new QAccessibleTextSelectionEvent object.
    pub fn New2(iface: ?*anyopaque, start: i32, end: i32) QtC.QAccessibleTextSelectionEvent {
        return qtc.QAccessibleTextSelectionEvent_new2(@ptrCast(iface), start, end);
    }


    pub fn SetSelection(self: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAccessibleTextSelectionEvent_SetSelection(@ptrCast(self), start, end);
    }

    pub fn SelectionStart(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionStart(@ptrCast(self));
    }

    pub fn SelectionEnd(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionEnd(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextSelectionEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextinsertevent.html
pub const qaccessibletextinsertevent = struct {

    /// New constructs a new QAccessibleTextInsertEvent object.
    pub fn New(obj: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextInsertEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAccessibleTextInsertEvent_new(@ptrCast(obj), position, text_str);
    }


    /// New2 constructs a new QAccessibleTextInsertEvent object.
    pub fn New2(iface: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextInsertEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAccessibleTextInsertEvent_new2(@ptrCast(iface), position, text_str);
    }


    pub fn TextInserted(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInsertEvent_TextInserted(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinsertevent.TextInserted: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ChangePosition(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextInsertEvent_ChangePosition(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextInsertEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextremoveevent.html
pub const qaccessibletextremoveevent = struct {

    /// New constructs a new QAccessibleTextRemoveEvent object.
    pub fn New(obj: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextRemoveEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAccessibleTextRemoveEvent_new(@ptrCast(obj), position, text_str);
    }


    /// New2 constructs a new QAccessibleTextRemoveEvent object.
    pub fn New2(iface: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextRemoveEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAccessibleTextRemoveEvent_new2(@ptrCast(iface), position, text_str);
    }


    pub fn TextRemoved(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextRemoveEvent_TextRemoved(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextremoveevent.TextRemoved: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ChangePosition(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextRemoveEvent_ChangePosition(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextRemoveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextupdateevent.html
pub const qaccessibletextupdateevent = struct {

    /// New constructs a new QAccessibleTextUpdateEvent object.
    pub fn New(obj: ?*anyopaque, position: i32, oldText: []const u8, text: []const u8) QtC.QAccessibleTextUpdateEvent {
        const oldText_str = qtc.libqt_string{
    .len = oldText.len,
    .data = oldText.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAccessibleTextUpdateEvent_new(@ptrCast(obj), position, oldText_str, text_str);
    }


    /// New2 constructs a new QAccessibleTextUpdateEvent object.
    pub fn New2(iface: ?*anyopaque, position: i32, oldText: []const u8, text: []const u8) QtC.QAccessibleTextUpdateEvent {
        const oldText_str = qtc.libqt_string{
    .len = oldText.len,
    .data = oldText.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAccessibleTextUpdateEvent_new2(@ptrCast(iface), position, oldText_str, text_str);
    }


    pub fn TextRemoved(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextUpdateEvent_TextRemoved(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextupdateevent.TextRemoved: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TextInserted(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextUpdateEvent_TextInserted(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextupdateevent.TextInserted: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ChangePosition(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTextUpdateEvent_ChangePosition(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextUpdateEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html
pub const qaccessiblevaluechangeevent = struct {

    /// New constructs a new QAccessibleValueChangeEvent object.
    pub fn New(obj: ?*anyopaque, val: ?*anyopaque) QtC.QAccessibleValueChangeEvent {
        return qtc.QAccessibleValueChangeEvent_new(@ptrCast(obj), @ptrCast(val));
    }


    /// New2 constructs a new QAccessibleValueChangeEvent object.
    pub fn New2(iface: ?*anyopaque, val: ?*anyopaque) QtC.QAccessibleValueChangeEvent {
        return qtc.QAccessibleValueChangeEvent_new2(@ptrCast(iface), @ptrCast(val));
    }


    pub fn SetValue(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QAccessibleValueChangeEvent_SetValue(@ptrCast(self), @ptrCast(val));
    }

    pub fn Value(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAccessibleValueChangeEvent_Value(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleValueChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html
pub const qaccessibletablemodelchangeevent = struct {

    /// New constructs a new QAccessibleTableModelChangeEvent object.
    pub fn New(obj: ?*anyopaque, changeType: i32) QtC.QAccessibleTableModelChangeEvent {
        return qtc.QAccessibleTableModelChangeEvent_new(@ptrCast(obj), @intCast(changeType));
    }


    /// New2 constructs a new QAccessibleTableModelChangeEvent object.
    pub fn New2(iface: ?*anyopaque, changeType: i32) QtC.QAccessibleTableModelChangeEvent {
        return qtc.QAccessibleTableModelChangeEvent_new2(@ptrCast(iface), @intCast(changeType));
    }


    pub fn SetModelChangeType(self: ?*anyopaque, changeType: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetModelChangeType(@ptrCast(self), @intCast(changeType));
    }

    pub fn ModelChangeType(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableModelChangeEvent_ModelChangeType(@ptrCast(self));
    }

    pub fn SetFirstRow(self: ?*anyopaque, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstRow(@ptrCast(self), row);
    }

    pub fn SetFirstColumn(self: ?*anyopaque, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstColumn(@ptrCast(self), col);
    }

    pub fn SetLastRow(self: ?*anyopaque, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastRow(@ptrCast(self), row);
    }

    pub fn SetLastColumn(self: ?*anyopaque, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastColumn(@ptrCast(self), col);
    }

    pub fn FirstRow(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstRow(@ptrCast(self));
    }

    pub fn FirstColumn(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstColumn(@ptrCast(self));
    }

    pub fn LastRow(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastRow(@ptrCast(self));
    }

    pub fn LastColumn(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastColumn(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableModelChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleannouncementevent.html
pub const qaccessibleannouncementevent = struct {

    /// New constructs a new QAccessibleAnnouncementEvent object.
    pub fn New(object: ?*anyopaque, message: []const u8) QtC.QAccessibleAnnouncementEvent {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
return qtc.QAccessibleAnnouncementEvent_new(@ptrCast(object), message_str);
    }


    /// New2 constructs a new QAccessibleAnnouncementEvent object.
    pub fn New2(iface: ?*anyopaque, message: []const u8) QtC.QAccessibleAnnouncementEvent {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
return qtc.QAccessibleAnnouncementEvent_new2(@ptrCast(iface), message_str);
    }


    pub fn Message(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleAnnouncementEvent_Message(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleannouncementevent.Message: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Politeness(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleAnnouncementEvent_Politeness(@ptrCast(self));
    }

    pub fn SetPoliteness(self: ?*anyopaque, politeness: i32) void {
        qtc.QAccessibleAnnouncementEvent_SetPoliteness(@ptrCast(self), @intCast(politeness));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleAnnouncementEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/accessible.html#types
pub const enums = struct {
    pub const ModelChangeType = enum {
        pub const ModelReset: i32 = 0;
        pub const DataChanged: i32 = 1;
        pub const RowsInserted: i32 = 2;
        pub const ColumnsInserted: i32 = 3;
        pub const RowsRemoved: i32 = 4;
        pub const ColumnsRemoved: i32 = 5;
    };

};
