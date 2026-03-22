const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextedit.html
pub const qtextedit = struct {

    /// New constructs a new QTextEdit object.
    pub fn New(parent: ?*anyopaque) QtC.QTextEdit {
        return qtc.QTextEdit_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTextEdit object.
    pub fn New2() QtC.QTextEdit {
        return qtc.QTextEdit_new2();
    }


    /// New3 constructs a new QTextEdit object.
    pub fn New3(text: []const u8) QtC.QTextEdit {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTextEdit_new3(text_str);
    }


    /// New4 constructs a new QTextEdit object.
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QTextEdit {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTextEdit_new4(text_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QTextEdit_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    pub fn Document(self: ?*anyopaque, ) QtC.QTextDocument {
        return qtc.QTextEdit_Document(@ptrCast(self));
    }

    pub fn SetPlaceholderText(self: ?*anyopaque, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
    .len = placeholderText.len,
    .data = placeholderText.ptr,
};
qtc.QTextEdit_SetPlaceholderText(@ptrCast(self), placeholderText_str);
    }

    pub fn PlaceholderText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_PlaceholderText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.PlaceholderText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextEdit_SetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn TextCursor(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QTextEdit_TextCursor(@ptrCast(self));
    }

    pub fn IsReadOnly(self: ?*anyopaque, ) bool {
        return qtc.QTextEdit_IsReadOnly(@ptrCast(self));
    }

    pub fn SetReadOnly(self: ?*anyopaque, ro: bool) void {
        qtc.QTextEdit_SetReadOnly(@ptrCast(self), ro);
    }

    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextEdit_SetTextInteractionFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn TextInteractionFlags(self: ?*anyopaque, ) i32 {
        return qtc.QTextEdit_TextInteractionFlags(@ptrCast(self));
    }

    pub fn FontPointSize(self: ?*anyopaque, ) f64 {
        return qtc.QTextEdit_FontPointSize(@ptrCast(self));
    }

    pub fn FontFamily(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_FontFamily(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.FontFamily: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FontWeight(self: ?*anyopaque, ) i32 {
        return qtc.QTextEdit_FontWeight(@ptrCast(self));
    }

    pub fn FontUnderline(self: ?*anyopaque, ) bool {
        return qtc.QTextEdit_FontUnderline(@ptrCast(self));
    }

    pub fn FontItalic(self: ?*anyopaque, ) bool {
        return qtc.QTextEdit_FontItalic(@ptrCast(self));
    }

    pub fn TextColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QTextEdit_TextColor(@ptrCast(self));
    }

    pub fn TextBackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QTextEdit_TextBackgroundColor(@ptrCast(self));
    }

    pub fn CurrentFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QTextEdit_CurrentFont(@ptrCast(self));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QTextEdit_Alignment(@ptrCast(self));
    }

    pub fn MergeCurrentCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextEdit_MergeCurrentCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    pub fn SetCurrentCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextEdit_SetCurrentCharFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn CurrentCharFormat(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextEdit_CurrentCharFormat(@ptrCast(self));
    }

    pub fn AutoFormatting(self: ?*anyopaque, ) i64 {
        return qtc.QTextEdit_AutoFormatting(@ptrCast(self));
    }

    pub fn SetAutoFormatting(self: ?*anyopaque, features: i64) void {
        qtc.QTextEdit_SetAutoFormatting(@ptrCast(self), @intCast(features));
    }

    pub fn TabChangesFocus(self: ?*anyopaque, ) bool {
        return qtc.QTextEdit_TabChangesFocus(@ptrCast(self));
    }

    pub fn SetTabChangesFocus(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetTabChangesFocus(@ptrCast(self), b);
    }

    pub fn SetDocumentTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QTextEdit_SetDocumentTitle(@ptrCast(self), title_str);
    }

    pub fn DocumentTitle(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_DocumentTitle(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.DocumentTitle: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsUndoRedoEnabled(self: ?*anyopaque, ) bool {
        return qtc.QTextEdit_IsUndoRedoEnabled(@ptrCast(self));
    }

    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTextEdit_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    pub fn LineWrapMode(self: ?*anyopaque, ) i32 {
        return qtc.QTextEdit_LineWrapMode(@ptrCast(self));
    }

    pub fn SetLineWrapMode(self: ?*anyopaque, mode: i32) void {
        qtc.QTextEdit_SetLineWrapMode(@ptrCast(self), @intCast(mode));
    }

    pub fn LineWrapColumnOrWidth(self: ?*anyopaque, ) i32 {
        return qtc.QTextEdit_LineWrapColumnOrWidth(@ptrCast(self));
    }

    pub fn SetLineWrapColumnOrWidth(self: ?*anyopaque, w: i32) void {
        qtc.QTextEdit_SetLineWrapColumnOrWidth(@ptrCast(self), w);
    }

    pub fn WordWrapMode(self: ?*anyopaque, ) i32 {
        return qtc.QTextEdit_WordWrapMode(@ptrCast(self));
    }

    pub fn SetWordWrapMode(self: ?*anyopaque, policy: i32) void {
        qtc.QTextEdit_SetWordWrapMode(@ptrCast(self), @intCast(policy));
    }

    pub fn Find(self: ?*anyopaque, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
    .len = exp.len,
    .data = exp.ptr,
};
return qtc.QTextEdit_Find(@ptrCast(self), exp_str);
    }

    pub fn Find2(self: ?*anyopaque, exp: ?*anyopaque) bool {
        return qtc.QTextEdit_Find2(@ptrCast(self), @ptrCast(exp));
    }

    pub fn ToPlainText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToPlainText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.ToPlainText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToHtml(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToHtml(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.ToHtml: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToMarkdown(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToMarkdown(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.ToMarkdown: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn EnsureCursorVisible(self: ?*anyopaque, ) void {
        qtc.QTextEdit_EnsureCursorVisible(@ptrCast(self));
    }

    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextEdit_LoadResource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    /// Allows for overriding the related default method
    pub fn OnLoadResource(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QTextEdit_OnLoadResource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextEdit_QBaseLoadResource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    pub fn CreateStandardContextMenu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QTextEdit_CreateStandardContextMenu(@ptrCast(self));
    }

    pub fn CreateStandardContextMenu2(self: ?*anyopaque, position: ?*anyopaque) QtC.QMenu {
        return qtc.QTextEdit_CreateStandardContextMenu2(@ptrCast(self), @ptrCast(position));
    }

    pub fn CursorForPosition(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextEdit_CursorForPosition(@ptrCast(self), @ptrCast(pos));
    }

    pub fn CursorRect(self: ?*anyopaque, cursor: ?*anyopaque) QtC.QRect {
        return qtc.QTextEdit_CursorRect(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn CursorRect2(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QTextEdit_CursorRect2(@ptrCast(self));
    }

    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_AnchorAt(@ptrCast(self), @ptrCast(pos));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.AnchorAt: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OverwriteMode(self: ?*anyopaque, ) bool {
        return qtc.QTextEdit_OverwriteMode(@ptrCast(self));
    }

    pub fn SetOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QTextEdit_SetOverwriteMode(@ptrCast(self), overwrite);
    }

    pub fn TabStopDistance(self: ?*anyopaque, ) f64 {
        return qtc.QTextEdit_TabStopDistance(@ptrCast(self));
    }

    pub fn SetTabStopDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QTextEdit_SetTabStopDistance(@ptrCast(self), distance);
    }

    pub fn CursorWidth(self: ?*anyopaque, ) i32 {
        return qtc.QTextEdit_CursorWidth(@ptrCast(self));
    }

    pub fn SetCursorWidth(self: ?*anyopaque, width: i32) void {
        qtc.QTextEdit_SetCursorWidth(@ptrCast(self), width);
    }

    pub fn AcceptRichText(self: ?*anyopaque, ) bool {
        return qtc.QTextEdit_AcceptRichText(@ptrCast(self));
    }

    pub fn SetAcceptRichText(self: ?*anyopaque, accept: bool) void {
        qtc.QTextEdit_SetAcceptRichText(@ptrCast(self), accept);
    }

    pub fn SetExtraSelections(self: ?*anyopaque, selections: []const u8) void {
        qtc.QTextEdit_SetExtraSelections(@ptrCast(self), @ptrCast(selections));
    }

    pub fn ExtraSelections(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextEdit_ExtraSelections(@ptrCast(self));
    }

    pub fn MoveCursor(self: ?*anyopaque, operation: i32) void {
        qtc.QTextEdit_MoveCursor(@ptrCast(self), @intCast(operation));
    }

    pub fn CanPaste(self: ?*anyopaque, ) bool {
        return qtc.QTextEdit_CanPaste(@ptrCast(self));
    }

    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QTextEdit_Print(@ptrCast(self), @ptrCast(printer));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.QTextEdit_InputMethodQuery(@ptrCast(self), @intCast(property));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QTextEdit_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.QTextEdit_QBaseInputMethodQuery(@ptrCast(self), @intCast(property));
    }

    pub fn InputMethodQuery2(self: ?*anyopaque, query: i64, argument: QtC.QVariant) QtC.QVariant {
        return qtc.QTextEdit_InputMethodQuery2(@ptrCast(self), @intCast(query), @ptrCast(argument));
    }

    pub fn SetFontPointSize(self: ?*anyopaque, s: f64) void {
        qtc.QTextEdit_SetFontPointSize(@ptrCast(self), s);
    }

    pub fn SetFontFamily(self: ?*anyopaque, fontFamily: []const u8) void {
        const fontFamily_str = qtc.libqt_string{
    .len = fontFamily.len,
    .data = fontFamily.ptr,
};
qtc.QTextEdit_SetFontFamily(@ptrCast(self), fontFamily_str);
    }

    pub fn SetFontWeight(self: ?*anyopaque, w: i32) void {
        qtc.QTextEdit_SetFontWeight(@ptrCast(self), w);
    }

    pub fn SetFontUnderline(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetFontUnderline(@ptrCast(self), b);
    }

    pub fn SetFontItalic(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetFontItalic(@ptrCast(self), b);
    }

    pub fn SetTextColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QTextEdit_SetTextColor(@ptrCast(self), @ptrCast(c));
    }

    pub fn SetTextBackgroundColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QTextEdit_SetTextBackgroundColor(@ptrCast(self), @ptrCast(c));
    }

    pub fn SetCurrentFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QTextEdit_SetCurrentFont(@ptrCast(self), @ptrCast(f));
    }

    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QTextEdit_SetAlignment(@ptrCast(self), @intCast(a));
    }

    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextEdit_SetPlainText(@ptrCast(self), text_str);
    }

    pub fn SetHtml(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextEdit_SetHtml(@ptrCast(self), text_str);
    }

    pub fn SetMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
    .len = markdown.len,
    .data = markdown.ptr,
};
qtc.QTextEdit_SetMarkdown(@ptrCast(self), markdown_str);
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextEdit_SetText(@ptrCast(self), text_str);
    }

    pub fn Cut(self: ?*anyopaque, ) void {
        qtc.QTextEdit_Cut(@ptrCast(self));
    }

    pub fn Copy(self: ?*anyopaque, ) void {
        qtc.QTextEdit_Copy(@ptrCast(self));
    }

    pub fn Paste(self: ?*anyopaque, ) void {
        qtc.QTextEdit_Paste(@ptrCast(self));
    }

    pub fn Undo(self: ?*anyopaque, ) void {
        qtc.QTextEdit_Undo(@ptrCast(self));
    }

    pub fn Redo(self: ?*anyopaque, ) void {
        qtc.QTextEdit_Redo(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QTextEdit_Clear(@ptrCast(self));
    }

    pub fn SelectAll(self: ?*anyopaque, ) void {
        qtc.QTextEdit_SelectAll(@ptrCast(self));
    }

    pub fn InsertPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextEdit_InsertPlainText(@ptrCast(self), text_str);
    }

    pub fn InsertHtml(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextEdit_InsertHtml(@ptrCast(self), text_str);
    }

    pub fn Append(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextEdit_Append(@ptrCast(self), text_str);
    }

    pub fn ScrollToAnchor(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QTextEdit_ScrollToAnchor(@ptrCast(self), name_str);
    }

    pub fn ZoomIn(self: ?*anyopaque, ) void {
        qtc.QTextEdit_ZoomIn(@ptrCast(self));
    }

    pub fn ZoomOut(self: ?*anyopaque, ) void {
        qtc.QTextEdit_ZoomOut(@ptrCast(self));
    }

    pub fn TextChanged(self: ?*anyopaque, ) void {
        qtc.QTextEdit_TextChanged(@ptrCast(self));
    }

    pub fn OnTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_TextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UndoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_UndoAvailable(@ptrCast(self), b);
    }

    pub fn OnUndoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_UndoAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RedoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_RedoAvailable(@ptrCast(self), b);
    }

    pub fn OnRedoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_RedoAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentCharFormatChanged(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextEdit_CurrentCharFormatChanged(@ptrCast(self), @ptrCast(format));
    }

    pub fn OnCurrentCharFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CurrentCharFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CopyAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_CopyAvailable(@ptrCast(self), b);
    }

    pub fn OnCopyAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CopyAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectionChanged(self: ?*anyopaque, ) void {
        qtc.QTextEdit_SelectionChanged(@ptrCast(self));
    }

    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CursorPositionChanged(self: ?*anyopaque, ) void {
        qtc.QTextEdit_CursorPositionChanged(@ptrCast(self));
    }

    pub fn OnCursorPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CursorPositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTextEdit_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextEdit_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTextEdit_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_KeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QTextEdit_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QTextEdit_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QTextEdit_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_FocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseFocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextEdit_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextEdit_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextEdit_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn CreateMimeDataFromSelection(self: ?*anyopaque, ) QtC.QMimeData {
        return qtc.QTextEdit_CreateMimeDataFromSelection(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateMimeDataFromSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QMimeData) void {
        qtc.QTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateMimeDataFromSelection(self: ?*anyopaque, ) QtC.QMimeData {
        return qtc.QTextEdit_QBaseCreateMimeDataFromSelection(@ptrCast(self));
    }

    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QTextEdit_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Allows for overriding the related default method
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextEdit_OnCanInsertFromMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QTextEdit_QBaseCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    pub fn InsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QTextEdit_InsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Allows for overriding the related default method
    pub fn OnInsertFromMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnInsertFromMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QTextEdit_QBaseInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextEdit_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextEdit_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTextEdit_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTextEdit_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTextEdit_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn DoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextEdit_DoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Allows for overriding the related default method
    pub fn OnDoSetTextCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_OnDoSetTextCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextEdit_QBaseDoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn ZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.QTextEdit_ZoomInF(@ptrCast(self), range);
    }

    /// Allows for overriding the related default method
    pub fn OnZoomInF(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QTextEdit_OnZoomInF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.QTextEdit_QBaseZoomInF(@ptrCast(self), range);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Find22(self: ?*anyopaque, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
    .len = exp.len,
    .data = exp.ptr,
};
return qtc.QTextEdit_Find22(@ptrCast(self), exp_str, @intCast(options));
    }

    pub fn Find23(self: ?*anyopaque, exp: ?*anyopaque, options: i32) bool {
        return qtc.QTextEdit_Find23(@ptrCast(self), @ptrCast(exp), @intCast(options));
    }

    pub fn ToMarkdown1(self: ?*anyopaque, features: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToMarkdown1(@ptrCast(self), @intCast(features));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextedit.ToMarkdown1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MoveCursor2(self: ?*anyopaque, operation: i32, mode: i32) void {
        qtc.QTextEdit_MoveCursor2(@ptrCast(self), @intCast(operation), @intCast(mode));
    }

    pub fn ZoomIn1(self: ?*anyopaque, range: i32) void {
        qtc.QTextEdit_ZoomIn1(@ptrCast(self), range);
    }

    pub fn ZoomOut1(self: ?*anyopaque, range: i32) void {
        qtc.QTextEdit_ZoomOut1(@ptrCast(self), range);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextEdit_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextedit-extraselection.html
pub const qtextedit__extraselection = struct {

    /// New constructs a new QTextEdit::ExtraSelection object.
    pub fn New(param1: ?*anyopaque) QtC.QTextEdit__ExtraSelection {
        return qtc.QTextEdit__ExtraSelection_new(@ptrCast(param1));
    }


    pub fn Cursor(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QTextEdit__ExtraSelection_Cursor(@ptrCast(self));
    }

    pub fn SetCursor(self: ?*anyopaque, cursor: QtC.QTextCursor) void {
        qtc.QTextEdit__ExtraSelection_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextEdit__ExtraSelection_Format(@ptrCast(self));
    }

    pub fn SetFormat(self: ?*anyopaque, format: QtC.QTextCharFormat) void {
        qtc.QTextEdit__ExtraSelection_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextEdit__ExtraSelection_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextEdit__ExtraSelection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/textedit.html#types
pub const enums = struct {
    pub const LineWrapMode = enum {
        pub const NoWrap: i32 = 0;
        pub const WidgetWidth: i32 = 1;
        pub const FixedPixelWidth: i32 = 2;
        pub const FixedColumnWidth: i32 = 3;
    };

    pub const AutoFormattingFlag = enum {
        pub const AutoNone: i64 = 0;
        pub const AutoBulletList: i64 = 1;
        pub const AutoAll: i64 = 4294967295;
    };

};
