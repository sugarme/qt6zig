const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlineedit.html
pub const qlineedit = struct {

    /// New constructs a new QLineEdit object.
    pub fn New(parent: ?*anyopaque) QtC.QLineEdit {
        return qtc.QLineEdit_new(@ptrCast(parent));
    }


    /// New2 constructs a new QLineEdit object.
    pub fn New2() QtC.QLineEdit {
        return qtc.QLineEdit_new2();
    }


    /// New3 constructs a new QLineEdit object.
    pub fn New3(param1: []const u8) QtC.QLineEdit {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QLineEdit_new3(param1_str);
    }


    /// New4 constructs a new QLineEdit object.
    pub fn New4(param1: []const u8, parent: ?*anyopaque) QtC.QLineEdit {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QLineEdit_new4(param1_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLineEdit_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineedit.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLineEdit_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineedit.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLineEdit_DisplayText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineedit.DisplayText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PlaceholderText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLineEdit_PlaceholderText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineedit.PlaceholderText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPlaceholderText(self: ?*anyopaque, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
    .len = placeholderText.len,
    .data = placeholderText.ptr,
};
qtc.QLineEdit_SetPlaceholderText(@ptrCast(self), placeholderText_str);
    }

    pub fn MaxLength(self: ?*anyopaque, ) i32 {
        return qtc.QLineEdit_MaxLength(@ptrCast(self));
    }

    pub fn SetMaxLength(self: ?*anyopaque, maxLength: i32) void {
        qtc.QLineEdit_SetMaxLength(@ptrCast(self), maxLength);
    }

    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QLineEdit_SetFrame(@ptrCast(self), frame);
    }

    pub fn HasFrame(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_HasFrame(@ptrCast(self));
    }

    pub fn SetClearButtonEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QLineEdit_SetClearButtonEnabled(@ptrCast(self), enable);
    }

    pub fn IsClearButtonEnabled(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_IsClearButtonEnabled(@ptrCast(self));
    }

    pub fn EchoMode(self: ?*anyopaque, ) i32 {
        return qtc.QLineEdit_EchoMode(@ptrCast(self));
    }

    pub fn SetEchoMode(self: ?*anyopaque, echoMode: i32) void {
        qtc.QLineEdit_SetEchoMode(@ptrCast(self), @intCast(echoMode));
    }

    pub fn IsReadOnly(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_IsReadOnly(@ptrCast(self));
    }

    pub fn SetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.QLineEdit_SetReadOnly(@ptrCast(self), readOnly);
    }

    pub fn SetValidator(self: ?*anyopaque, validator: ?*anyopaque) void {
        qtc.QLineEdit_SetValidator(@ptrCast(self), @ptrCast(validator));
    }

    pub fn Validator(self: ?*anyopaque, ) QtC.QValidator {
        return qtc.QLineEdit_Validator(@ptrCast(self));
    }

    pub fn SetCompleter(self: ?*anyopaque, completer: ?*anyopaque) void {
        qtc.QLineEdit_SetCompleter(@ptrCast(self), @ptrCast(completer));
    }

    pub fn Completer(self: ?*anyopaque, ) QtC.QCompleter {
        return qtc.QLineEdit_Completer(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLineEdit_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLineEdit_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLineEdit_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLineEdit_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLineEdit_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLineEdit_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn CursorPosition(self: ?*anyopaque, ) i32 {
        return qtc.QLineEdit_CursorPosition(@ptrCast(self));
    }

    pub fn SetCursorPosition(self: ?*anyopaque, cursorPosition: i32) void {
        qtc.QLineEdit_SetCursorPosition(@ptrCast(self), cursorPosition);
    }

    pub fn CursorPositionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QLineEdit_CursorPositionAt(@ptrCast(self), @ptrCast(pos));
    }

    pub fn SetAlignment(self: ?*anyopaque, flag: i32) void {
        qtc.QLineEdit_SetAlignment(@ptrCast(self), @intCast(flag));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QLineEdit_Alignment(@ptrCast(self));
    }

    pub fn CursorForward(self: ?*anyopaque, mark: bool) void {
        qtc.QLineEdit_CursorForward(@ptrCast(self), mark);
    }

    pub fn CursorBackward(self: ?*anyopaque, mark: bool) void {
        qtc.QLineEdit_CursorBackward(@ptrCast(self), mark);
    }

    pub fn CursorWordForward(self: ?*anyopaque, mark: bool) void {
        qtc.QLineEdit_CursorWordForward(@ptrCast(self), mark);
    }

    pub fn CursorWordBackward(self: ?*anyopaque, mark: bool) void {
        qtc.QLineEdit_CursorWordBackward(@ptrCast(self), mark);
    }

    pub fn Backspace(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Backspace(@ptrCast(self));
    }

    pub fn Del(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Del(@ptrCast(self));
    }

    pub fn Home(self: ?*anyopaque, mark: bool) void {
        qtc.QLineEdit_Home(@ptrCast(self), mark);
    }

    pub fn End(self: ?*anyopaque, mark: bool) void {
        qtc.QLineEdit_End(@ptrCast(self), mark);
    }

    pub fn IsModified(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_IsModified(@ptrCast(self));
    }

    pub fn SetModified(self: ?*anyopaque, modified: bool) void {
        qtc.QLineEdit_SetModified(@ptrCast(self), modified);
    }

    pub fn SetSelection(self: ?*anyopaque, param1: i32, param2: i32) void {
        qtc.QLineEdit_SetSelection(@ptrCast(self), param1, param2);
    }

    pub fn HasSelectedText(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_HasSelectedText(@ptrCast(self));
    }

    pub fn SelectedText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLineEdit_SelectedText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineedit.SelectedText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SelectionStart(self: ?*anyopaque, ) i32 {
        return qtc.QLineEdit_SelectionStart(@ptrCast(self));
    }

    pub fn SelectionEnd(self: ?*anyopaque, ) i32 {
        return qtc.QLineEdit_SelectionEnd(@ptrCast(self));
    }

    pub fn SelectionLength(self: ?*anyopaque, ) i32 {
        return qtc.QLineEdit_SelectionLength(@ptrCast(self));
    }

    pub fn IsUndoAvailable(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_IsUndoAvailable(@ptrCast(self));
    }

    pub fn IsRedoAvailable(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_IsRedoAvailable(@ptrCast(self));
    }

    pub fn SetDragEnabled(self: ?*anyopaque, b: bool) void {
        qtc.QLineEdit_SetDragEnabled(@ptrCast(self), b);
    }

    pub fn DragEnabled(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_DragEnabled(@ptrCast(self));
    }

    pub fn SetCursorMoveStyle(self: ?*anyopaque, style: i32) void {
        qtc.QLineEdit_SetCursorMoveStyle(@ptrCast(self), @intCast(style));
    }

    pub fn CursorMoveStyle(self: ?*anyopaque, ) i32 {
        return qtc.QLineEdit_CursorMoveStyle(@ptrCast(self));
    }

    pub fn InputMask(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLineEdit_InputMask(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineedit.InputMask: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetInputMask(self: ?*anyopaque, inputMask: []const u8) void {
        const inputMask_str = qtc.libqt_string{
    .len = inputMask.len,
    .data = inputMask.ptr,
};
qtc.QLineEdit_SetInputMask(@ptrCast(self), inputMask_str);
    }

    pub fn HasAcceptableInput(self: ?*anyopaque, ) bool {
        return qtc.QLineEdit_HasAcceptableInput(@ptrCast(self));
    }

    pub fn SetTextMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLineEdit_SetTextMargins(@ptrCast(self), left, top, right, bottom);
    }

    pub fn SetTextMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLineEdit_SetTextMargins2(@ptrCast(self), @ptrCast(margins));
    }

    pub fn TextMargins(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QLineEdit_TextMargins(@ptrCast(self));
    }

    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque, position: i32) void {
        qtc.QLineEdit_AddAction(@ptrCast(self), @ptrCast(action), @intCast(position));
    }

    pub fn AddAction2(self: ?*anyopaque, icon: ?*anyopaque, position: i32) QtC.QAction {
        return qtc.QLineEdit_AddAction2(@ptrCast(self), @ptrCast(icon), @intCast(position));
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QLineEdit_SetText(@ptrCast(self), text_str);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Clear(@ptrCast(self));
    }

    pub fn SelectAll(self: ?*anyopaque, ) void {
        qtc.QLineEdit_SelectAll(@ptrCast(self));
    }

    pub fn Undo(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Undo(@ptrCast(self));
    }

    pub fn Redo(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Redo(@ptrCast(self));
    }

    pub fn Cut(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Cut(@ptrCast(self));
    }

    pub fn Copy(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Copy(@ptrCast(self));
    }

    pub fn Paste(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Paste(@ptrCast(self));
    }

    pub fn Deselect(self: ?*anyopaque, ) void {
        qtc.QLineEdit_Deselect(@ptrCast(self));
    }

    pub fn Insert(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QLineEdit_Insert(@ptrCast(self), param1_str);
    }

    pub fn CreateStandardContextMenu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QLineEdit_CreateStandardContextMenu(@ptrCast(self));
    }

    pub fn TextChanged(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QLineEdit_TextChanged(@ptrCast(self), param1_str);
    }

    pub fn OnTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TextEdited(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QLineEdit_TextEdited(@ptrCast(self), param1_str);
    }

    pub fn OnTextEdited(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextEdited(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CursorPositionChanged(self: ?*anyopaque, param1: i32, param2: i32) void {
        qtc.QLineEdit_CursorPositionChanged(@ptrCast(self), param1, param2);
    }

    pub fn OnCursorPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QLineEdit_Connect_CursorPositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReturnPressed(self: ?*anyopaque, ) void {
        qtc.QLineEdit_ReturnPressed(@ptrCast(self));
    }

    pub fn OnReturnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_Connect_ReturnPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn EditingFinished(self: ?*anyopaque, ) void {
        qtc.QLineEdit_EditingFinished(@ptrCast(self));
    }

    pub fn OnEditingFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_Connect_EditingFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectionChanged(self: ?*anyopaque, ) void {
        qtc.QLineEdit_SelectionChanged(@ptrCast(self));
    }

    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn InputRejected(self: ?*anyopaque, ) void {
        qtc.QLineEdit_InputRejected(@ptrCast(self));
    }

    pub fn OnInputRejected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_Connect_InputRejected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_KeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_DragEnterEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLineEdit_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLineEdit_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLineEdit_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLineEdit_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DropEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_DropEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseDropEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QLineEdit_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QLineEdit_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QLineEdit_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QLineEdit_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QLineEdit_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    pub fn InputMethodQuery2(self: ?*anyopaque, property: i64, argument: QtC.QVariant) QtC.QVariant {
        return qtc.QLineEdit_InputMethodQuery2(@ptrCast(self), @intCast(property), @ptrCast(argument));
    }

    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineEdit_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLineEdit_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QLineEdit_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLineEdit_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QLineEdit_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn CursorRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QLineEdit_CursorRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCursorRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QLineEdit_OnCursorRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCursorRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QLineEdit_QBaseCursorRect(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLineEdit_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineedit.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLineEdit_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineedit.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CursorForward2(self: ?*anyopaque, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorForward2(@ptrCast(self), mark, steps);
    }

    pub fn CursorBackward2(self: ?*anyopaque, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorBackward2(@ptrCast(self), mark, steps);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLineEdit_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/lineedit.html#types
pub const enums = struct {
    pub const ActionPosition = enum {
        pub const LeadingPosition: i32 = 0;
        pub const TrailingPosition: i32 = 1;
    };

    pub const EchoMode = enum {
        pub const Normal: i32 = 0;
        pub const NoEcho: i32 = 1;
        pub const Password: i32 = 2;
        pub const PasswordEchoOnEdit: i32 = 3;
    };

};
