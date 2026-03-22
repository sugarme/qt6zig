const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qplaintextedit.html
pub const qplaintextedit = struct {

    /// New constructs a new QPlainTextEdit object.
    pub fn New(parent: ?*anyopaque) QtC.QPlainTextEdit {
        return qtc.QPlainTextEdit_new(@ptrCast(parent));
    }


    /// New2 constructs a new QPlainTextEdit object.
    pub fn New2() QtC.QPlainTextEdit {
        return qtc.QPlainTextEdit_new2();
    }


    /// New3 constructs a new QPlainTextEdit object.
    pub fn New3(text: []const u8) QtC.QPlainTextEdit {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPlainTextEdit_new3(text_str);
    }


    /// New4 constructs a new QPlainTextEdit object.
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QPlainTextEdit {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPlainTextEdit_new4(text_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QPlainTextEdit_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    pub fn Document(self: ?*anyopaque, ) QtC.QTextDocument {
        return qtc.QPlainTextEdit_Document(@ptrCast(self));
    }

    pub fn SetPlaceholderText(self: ?*anyopaque, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
    .len = placeholderText.len,
    .data = placeholderText.ptr,
};
qtc.QPlainTextEdit_SetPlaceholderText(@ptrCast(self), placeholderText_str);
    }

    pub fn PlaceholderText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_PlaceholderText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.PlaceholderText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QPlainTextEdit_SetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn TextCursor(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QPlainTextEdit_TextCursor(@ptrCast(self));
    }

    pub fn IsReadOnly(self: ?*anyopaque, ) bool {
        return qtc.QPlainTextEdit_IsReadOnly(@ptrCast(self));
    }

    pub fn SetReadOnly(self: ?*anyopaque, ro: bool) void {
        qtc.QPlainTextEdit_SetReadOnly(@ptrCast(self), ro);
    }

    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QPlainTextEdit_SetTextInteractionFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn TextInteractionFlags(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextEdit_TextInteractionFlags(@ptrCast(self));
    }

    pub fn MergeCurrentCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QPlainTextEdit_MergeCurrentCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    pub fn SetCurrentCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QPlainTextEdit_SetCurrentCharFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn CurrentCharFormat(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QPlainTextEdit_CurrentCharFormat(@ptrCast(self));
    }

    pub fn TabChangesFocus(self: ?*anyopaque, ) bool {
        return qtc.QPlainTextEdit_TabChangesFocus(@ptrCast(self));
    }

    pub fn SetTabChangesFocus(self: ?*anyopaque, b: bool) void {
        qtc.QPlainTextEdit_SetTabChangesFocus(@ptrCast(self), b);
    }

    pub fn SetDocumentTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QPlainTextEdit_SetDocumentTitle(@ptrCast(self), title_str);
    }

    pub fn DocumentTitle(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_DocumentTitle(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.DocumentTitle: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsUndoRedoEnabled(self: ?*anyopaque, ) bool {
        return qtc.QPlainTextEdit_IsUndoRedoEnabled(@ptrCast(self));
    }

    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPlainTextEdit_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    pub fn SetMaximumBlockCount(self: ?*anyopaque, maximum: i32) void {
        qtc.QPlainTextEdit_SetMaximumBlockCount(@ptrCast(self), maximum);
    }

    pub fn MaximumBlockCount(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextEdit_MaximumBlockCount(@ptrCast(self));
    }

    pub fn LineWrapMode(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextEdit_LineWrapMode(@ptrCast(self));
    }

    pub fn SetLineWrapMode(self: ?*anyopaque, mode: i32) void {
        qtc.QPlainTextEdit_SetLineWrapMode(@ptrCast(self), @intCast(mode));
    }

    pub fn WordWrapMode(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextEdit_WordWrapMode(@ptrCast(self));
    }

    pub fn SetWordWrapMode(self: ?*anyopaque, policy: i32) void {
        qtc.QPlainTextEdit_SetWordWrapMode(@ptrCast(self), @intCast(policy));
    }

    pub fn SetBackgroundVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPlainTextEdit_SetBackgroundVisible(@ptrCast(self), visible);
    }

    pub fn BackgroundVisible(self: ?*anyopaque, ) bool {
        return qtc.QPlainTextEdit_BackgroundVisible(@ptrCast(self));
    }

    pub fn SetCenterOnScroll(self: ?*anyopaque, enabled: bool) void {
        qtc.QPlainTextEdit_SetCenterOnScroll(@ptrCast(self), enabled);
    }

    pub fn CenterOnScroll(self: ?*anyopaque, ) bool {
        return qtc.QPlainTextEdit_CenterOnScroll(@ptrCast(self));
    }

    pub fn Find(self: ?*anyopaque, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
    .len = exp.len,
    .data = exp.ptr,
};
return qtc.QPlainTextEdit_Find(@ptrCast(self), exp_str);
    }

    pub fn Find2(self: ?*anyopaque, exp: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_Find2(@ptrCast(self), @ptrCast(exp));
    }

    pub fn ToPlainText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_ToPlainText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.ToPlainText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn EnsureCursorVisible(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_EnsureCursorVisible(@ptrCast(self));
    }

    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QPlainTextEdit_LoadResource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    /// Allows for overriding the related default method
    pub fn OnLoadResource(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QPlainTextEdit_OnLoadResource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QPlainTextEdit_QBaseLoadResource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    pub fn CreateStandardContextMenu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QPlainTextEdit_CreateStandardContextMenu(@ptrCast(self));
    }

    pub fn CreateStandardContextMenu2(self: ?*anyopaque, position: ?*anyopaque) QtC.QMenu {
        return qtc.QPlainTextEdit_CreateStandardContextMenu2(@ptrCast(self), @ptrCast(position));
    }

    pub fn CursorForPosition(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextCursor {
        return qtc.QPlainTextEdit_CursorForPosition(@ptrCast(self), @ptrCast(pos));
    }

    pub fn CursorRect(self: ?*anyopaque, cursor: ?*anyopaque) QtC.QRect {
        return qtc.QPlainTextEdit_CursorRect(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn CursorRect2(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPlainTextEdit_CursorRect2(@ptrCast(self));
    }

    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_AnchorAt(@ptrCast(self), @ptrCast(pos));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.AnchorAt: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OverwriteMode(self: ?*anyopaque, ) bool {
        return qtc.QPlainTextEdit_OverwriteMode(@ptrCast(self));
    }

    pub fn SetOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QPlainTextEdit_SetOverwriteMode(@ptrCast(self), overwrite);
    }

    pub fn TabStopDistance(self: ?*anyopaque, ) f64 {
        return qtc.QPlainTextEdit_TabStopDistance(@ptrCast(self));
    }

    pub fn SetTabStopDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QPlainTextEdit_SetTabStopDistance(@ptrCast(self), distance);
    }

    pub fn CursorWidth(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextEdit_CursorWidth(@ptrCast(self));
    }

    pub fn SetCursorWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPlainTextEdit_SetCursorWidth(@ptrCast(self), width);
    }

    pub fn SetExtraSelections(self: ?*anyopaque, selections: []const u8) void {
        qtc.QPlainTextEdit_SetExtraSelections(@ptrCast(self), @ptrCast(selections));
    }

    pub fn ExtraSelections(self: ?*anyopaque, ) []const u8 {
        return qtc.QPlainTextEdit_ExtraSelections(@ptrCast(self));
    }

    pub fn MoveCursor(self: ?*anyopaque, operation: i32) void {
        qtc.QPlainTextEdit_MoveCursor(@ptrCast(self), @intCast(operation));
    }

    pub fn CanPaste(self: ?*anyopaque, ) bool {
        return qtc.QPlainTextEdit_CanPaste(@ptrCast(self));
    }

    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QPlainTextEdit_Print(@ptrCast(self), @ptrCast(printer));
    }

    pub fn BlockCount(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextEdit_BlockCount(@ptrCast(self));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.QPlainTextEdit_InputMethodQuery(@ptrCast(self), @intCast(property));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QPlainTextEdit_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.QPlainTextEdit_QBaseInputMethodQuery(@ptrCast(self), @intCast(property));
    }

    pub fn InputMethodQuery2(self: ?*anyopaque, query: i64, argument: QtC.QVariant) QtC.QVariant {
        return qtc.QPlainTextEdit_InputMethodQuery2(@ptrCast(self), @intCast(query), @ptrCast(argument));
    }

    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPlainTextEdit_SetPlainText(@ptrCast(self), text_str);
    }

    pub fn Cut(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_Cut(@ptrCast(self));
    }

    pub fn Copy(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_Copy(@ptrCast(self));
    }

    pub fn Paste(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_Paste(@ptrCast(self));
    }

    pub fn Undo(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_Undo(@ptrCast(self));
    }

    pub fn Redo(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_Redo(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_Clear(@ptrCast(self));
    }

    pub fn SelectAll(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_SelectAll(@ptrCast(self));
    }

    pub fn InsertPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPlainTextEdit_InsertPlainText(@ptrCast(self), text_str);
    }

    pub fn AppendPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPlainTextEdit_AppendPlainText(@ptrCast(self), text_str);
    }

    pub fn AppendHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.libqt_string{
    .len = html.len,
    .data = html.ptr,
};
qtc.QPlainTextEdit_AppendHtml(@ptrCast(self), html_str);
    }

    pub fn CenterCursor(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_CenterCursor(@ptrCast(self));
    }

    pub fn ZoomIn(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_ZoomIn(@ptrCast(self));
    }

    pub fn ZoomOut(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_ZoomOut(@ptrCast(self));
    }

    pub fn TextChanged(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_TextChanged(@ptrCast(self));
    }

    pub fn OnTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_TextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UndoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QPlainTextEdit_UndoAvailable(@ptrCast(self), b);
    }

    pub fn OnUndoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UndoAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RedoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QPlainTextEdit_RedoAvailable(@ptrCast(self), b);
    }

    pub fn OnRedoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_RedoAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CopyAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QPlainTextEdit_CopyAvailable(@ptrCast(self), b);
    }

    pub fn OnCopyAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CopyAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectionChanged(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_SelectionChanged(@ptrCast(self));
    }

    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CursorPositionChanged(self: ?*anyopaque, ) void {
        qtc.QPlainTextEdit_CursorPositionChanged(@ptrCast(self));
    }

    pub fn OnCursorPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CursorPositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UpdateRequest(self: ?*anyopaque, rect: ?*anyopaque, dy: i32) void {
        qtc.QPlainTextEdit_UpdateRequest(@ptrCast(self), @ptrCast(rect), dy);
    }

    pub fn OnUpdateRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UpdateRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BlockCountChanged(self: ?*anyopaque, newBlockCount: i32) void {
        qtc.QPlainTextEdit_BlockCountChanged(@ptrCast(self), newBlockCount);
    }

    pub fn OnBlockCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_BlockCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModificationChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QPlainTextEdit_ModificationChanged(@ptrCast(self), param1);
    }

    pub fn OnModificationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_ModificationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_KeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QPlainTextEdit_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QPlainTextEdit_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_FocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseFocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn CreateMimeDataFromSelection(self: ?*anyopaque, ) QtC.QMimeData {
        return qtc.QPlainTextEdit_CreateMimeDataFromSelection(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateMimeDataFromSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QMimeData) void {
        qtc.QPlainTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateMimeDataFromSelection(self: ?*anyopaque, ) QtC.QMimeData {
        return qtc.QPlainTextEdit_QBaseCreateMimeDataFromSelection(@ptrCast(self));
    }

    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Allows for overriding the related default method
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnCanInsertFromMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    pub fn InsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QPlainTextEdit_InsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertFromMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInsertFromMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QPlainTextEdit_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QPlainTextEdit_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn DoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QPlainTextEdit_DoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Allows for overriding the related default method
    pub fn OnDoSetTextCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDoSetTextCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn FirstVisibleBlock(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QPlainTextEdit_FirstVisibleBlock(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFirstVisibleBlock(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QTextBlock) void {
        qtc.QPlainTextEdit_OnFirstVisibleBlock(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFirstVisibleBlock(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QPlainTextEdit_QBaseFirstVisibleBlock(@ptrCast(self));
    }

    pub fn ContentOffset(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPlainTextEdit_ContentOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnContentOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPointF) void {
        qtc.QPlainTextEdit_OnContentOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContentOffset(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPlainTextEdit_QBaseContentOffset(@ptrCast(self));
    }

    pub fn BlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextEdit_BlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// Allows for overriding the related default method
    pub fn OnBlockBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QPlainTextEdit_OnBlockBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextEdit_QBaseBlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    pub fn BlockBoundingGeometry(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextEdit_BlockBoundingGeometry(@ptrCast(self), @ptrCast(block));
    }

    /// Allows for overriding the related default method
    pub fn OnBlockBoundingGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QPlainTextEdit_OnBlockBoundingGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBlockBoundingGeometry(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextEdit_QBaseBlockBoundingGeometry(@ptrCast(self), @ptrCast(block));
    }

    pub fn GetPaintContext(self: ?*anyopaque, ) QtC.QAbstractTextDocumentLayout__PaintContext {
        return qtc.QPlainTextEdit_GetPaintContext(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnGetPaintContext(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAbstractTextDocumentLayout__PaintContext) void {
        qtc.QPlainTextEdit_OnGetPaintContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGetPaintContext(self: ?*anyopaque, ) QtC.QAbstractTextDocumentLayout__PaintContext {
        return qtc.QPlainTextEdit_QBaseGetPaintContext(@ptrCast(self));
    }

    pub fn ZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.QPlainTextEdit_ZoomInF(@ptrCast(self), range);
    }

    /// Allows for overriding the related default method
    pub fn OnZoomInF(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnZoomInF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.QPlainTextEdit_QBaseZoomInF(@ptrCast(self), range);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Find22(self: ?*anyopaque, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
    .len = exp.len,
    .data = exp.ptr,
};
return qtc.QPlainTextEdit_Find22(@ptrCast(self), exp_str, @intCast(options));
    }

    pub fn Find23(self: ?*anyopaque, exp: ?*anyopaque, options: i32) bool {
        return qtc.QPlainTextEdit_Find23(@ptrCast(self), @ptrCast(exp), @intCast(options));
    }

    pub fn MoveCursor2(self: ?*anyopaque, operation: i32, mode: i32) void {
        qtc.QPlainTextEdit_MoveCursor2(@ptrCast(self), @intCast(operation), @intCast(mode));
    }

    pub fn ZoomIn1(self: ?*anyopaque, range: i32) void {
        qtc.QPlainTextEdit_ZoomIn1(@ptrCast(self), range);
    }

    pub fn ZoomOut1(self: ?*anyopaque, range: i32) void {
        qtc.QPlainTextEdit_ZoomOut1(@ptrCast(self), range);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qplaintextdocumentlayout.html
pub const qplaintextdocumentlayout = struct {

    /// New constructs a new QPlainTextDocumentLayout object.
    pub fn New(document: ?*anyopaque) QtC.QPlainTextDocumentLayout {
        return qtc.QPlainTextDocumentLayout_new(@ptrCast(document));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextDocumentLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Draw(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_Draw(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnDraw(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDraw(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDraw(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseDraw(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn HitTest(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) i32 {
        return qtc.QPlainTextDocumentLayout_HitTest(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnHitTest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnHitTest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitTest(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) i32 {
        return qtc.QPlainTextDocumentLayout_QBaseHitTest(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    pub fn PageCount(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextDocumentLayout_PageCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPageCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnPageCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePageCount(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextDocumentLayout_QBasePageCount(@ptrCast(self));
    }

    pub fn DocumentSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QPlainTextDocumentLayout_DocumentSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDocumentSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QPlainTextDocumentLayout_OnDocumentSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDocumentSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QPlainTextDocumentLayout_QBaseDocumentSize(@ptrCast(self));
    }

    pub fn FrameBoundingRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextDocumentLayout_FrameBoundingRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFrameBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QPlainTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFrameBoundingRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextDocumentLayout_QBaseFrameBoundingRect(@ptrCast(self), @ptrCast(param1));
    }

    pub fn BlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextDocumentLayout_BlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// Allows for overriding the related default method
    pub fn OnBlockBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QPlainTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextDocumentLayout_QBaseBlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    pub fn EnsureBlockLayout(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_EnsureBlockLayout(@ptrCast(self), @ptrCast(block));
    }

    pub fn SetCursorWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPlainTextDocumentLayout_SetCursorWidth(@ptrCast(self), width);
    }

    pub fn CursorWidth(self: ?*anyopaque, ) i32 {
        return qtc.QPlainTextDocumentLayout_CursorWidth(@ptrCast(self));
    }

    pub fn RequestUpdate(self: ?*anyopaque, ) void {
        qtc.QPlainTextDocumentLayout_RequestUpdate(@ptrCast(self));
    }

    pub fn DocumentChanged(self: ?*anyopaque, from: i32, param2: i32, charsAdded: i32) void {
        qtc.QPlainTextDocumentLayout_DocumentChanged(@ptrCast(self), from, param2, charsAdded);
    }

    /// Allows for overriding the related default method
    pub fn OnDocumentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDocumentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDocumentChanged(self: ?*anyopaque, from: i32, param2: i32, charsAdded: i32) void {
        qtc.QPlainTextDocumentLayout_QBaseDocumentChanged(@ptrCast(self), from, param2, charsAdded);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextDocumentLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextDocumentLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/plaintextedit.html#types
pub const enums = struct {
    pub const LineWrapMode = enum {
        pub const NoWrap: i32 = 0;
        pub const WidgetWidth: i32 = 1;
    };

};
