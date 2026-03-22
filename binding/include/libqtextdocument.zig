const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractundoitem.html
pub const qabstractundoitem = struct {

    /// New constructs a new QAbstractUndoItem object.
    pub fn New() QtC.QAbstractUndoItem {
        return qtc.QAbstractUndoItem_new();
    }


    /// New2 constructs a new QAbstractUndoItem object.
    pub fn New2(param1: ?*anyopaque) QtC.QAbstractUndoItem {
        return qtc.QAbstractUndoItem_new2(@ptrCast(param1));
    }


    pub fn Undo(self: ?*anyopaque, ) void {
        qtc.QAbstractUndoItem_Undo(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUndo(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractUndoItem_OnUndo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUndo(self: ?*anyopaque, ) void {
        qtc.QAbstractUndoItem_QBaseUndo(@ptrCast(self));
    }

    pub fn Redo(self: ?*anyopaque, ) void {
        qtc.QAbstractUndoItem_Redo(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRedo(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractUndoItem_OnRedo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRedo(self: ?*anyopaque, ) void {
        qtc.QAbstractUndoItem_QBaseRedo(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractUndoItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractUndoItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextdocument.html
pub const qtextdocument = struct {

    /// New constructs a new QTextDocument object.
    pub fn New() QtC.QTextDocument {
        return qtc.QTextDocument_new();
    }


    /// New2 constructs a new QTextDocument object.
    pub fn New2(text: []const u8) QtC.QTextDocument {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTextDocument_new2(text_str);
    }


    /// New3 constructs a new QTextDocument object.
    pub fn New3(parent: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextDocument_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QTextDocument object.
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QTextDocument {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTextDocument_new4(text_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QTextDocument_IsEmpty(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QTextDocument_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QTextDocument_QBaseClear(@ptrCast(self));
    }

    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTextDocument_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    pub fn IsUndoRedoEnabled(self: ?*anyopaque, ) bool {
        return qtc.QTextDocument_IsUndoRedoEnabled(@ptrCast(self));
    }

    pub fn IsUndoAvailable(self: ?*anyopaque, ) bool {
        return qtc.QTextDocument_IsUndoAvailable(@ptrCast(self));
    }

    pub fn IsRedoAvailable(self: ?*anyopaque, ) bool {
        return qtc.QTextDocument_IsRedoAvailable(@ptrCast(self));
    }

    pub fn AvailableUndoSteps(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_AvailableUndoSteps(@ptrCast(self));
    }

    pub fn AvailableRedoSteps(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_AvailableRedoSteps(@ptrCast(self));
    }

    pub fn Revision(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_Revision(@ptrCast(self));
    }

    pub fn SetDocumentLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QTextDocument_SetDocumentLayout(@ptrCast(self), @ptrCast(layout));
    }

    pub fn DocumentLayout(self: ?*anyopaque, ) QtC.QAbstractTextDocumentLayout {
        return qtc.QTextDocument_DocumentLayout(@ptrCast(self));
    }

    pub fn SetMetaInformation(self: ?*anyopaque, info: i32, param2: []const u8) void {
        const param2_str = qtc.libqt_string{
    .len = param2.len,
    .data = param2.ptr,
};
qtc.QTextDocument_SetMetaInformation(@ptrCast(self), @intCast(info), param2_str);
    }

    pub fn MetaInformation(self: ?*anyopaque, info: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_MetaInformation(@ptrCast(self), @intCast(info));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.MetaInformation: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToHtml(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToHtml(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToHtml: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.libqt_string{
    .len = html.len,
    .data = html.ptr,
};
qtc.QTextDocument_SetHtml(@ptrCast(self), html_str);
    }

    pub fn ToMarkdown(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToMarkdown(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToMarkdown: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
    .len = markdown.len,
    .data = markdown.ptr,
};
qtc.QTextDocument_SetMarkdown(@ptrCast(self), markdown_str);
    }

    pub fn ToRawText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToRawText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToRawText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToPlainText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToPlainText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToPlainText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextDocument_SetPlainText(@ptrCast(self), text_str);
    }

    pub fn CharacterAt(self: ?*anyopaque, pos: i32) QtC.QChar {
        return qtc.QTextDocument_CharacterAt(@ptrCast(self), pos);
    }

    pub fn Find(self: ?*anyopaque, subString: []const u8) QtC.QTextCursor {
        const subString_str = qtc.libqt_string{
    .len = subString.len,
    .data = subString.ptr,
};
return qtc.QTextDocument_Find(@ptrCast(self), subString_str);
    }

    pub fn Find2(self: ?*anyopaque, subString: []const u8, cursor: ?*anyopaque) QtC.QTextCursor {
        const subString_str = qtc.libqt_string{
    .len = subString.len,
    .data = subString.ptr,
};
return qtc.QTextDocument_Find2(@ptrCast(self), subString_str, @ptrCast(cursor));
    }

    pub fn Find3(self: ?*anyopaque, expr: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextDocument_Find3(@ptrCast(self), @ptrCast(expr));
    }

    pub fn Find4(self: ?*anyopaque, expr: ?*anyopaque, cursor: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextDocument_Find4(@ptrCast(self), @ptrCast(expr), @ptrCast(cursor));
    }

    pub fn FrameAt(self: ?*anyopaque, pos: i32) QtC.QTextFrame {
        return qtc.QTextDocument_FrameAt(@ptrCast(self), pos);
    }

    pub fn RootFrame(self: ?*anyopaque, ) QtC.QTextFrame {
        return qtc.QTextDocument_RootFrame(@ptrCast(self));
    }

    pub fn Object(self: ?*anyopaque, objectIndex: i32) QtC.QTextObject {
        return qtc.QTextDocument_Object(@ptrCast(self), objectIndex);
    }

    pub fn ObjectForFormat(self: ?*anyopaque, param1: ?*anyopaque) QtC.QTextObject {
        return qtc.QTextDocument_ObjectForFormat(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FindBlock(self: ?*anyopaque, pos: i32) QtC.QTextBlock {
        return qtc.QTextDocument_FindBlock(@ptrCast(self), pos);
    }

    pub fn FindBlockByNumber(self: ?*anyopaque, blockNumber: i32) QtC.QTextBlock {
        return qtc.QTextDocument_FindBlockByNumber(@ptrCast(self), blockNumber);
    }

    pub fn FindBlockByLineNumber(self: ?*anyopaque, blockNumber: i32) QtC.QTextBlock {
        return qtc.QTextDocument_FindBlockByLineNumber(@ptrCast(self), blockNumber);
    }

    pub fn Begin(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QTextDocument_Begin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QTextDocument_End(@ptrCast(self));
    }

    pub fn FirstBlock(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QTextDocument_FirstBlock(@ptrCast(self));
    }

    pub fn LastBlock(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QTextDocument_LastBlock(@ptrCast(self));
    }

    pub fn SetPageSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QTextDocument_SetPageSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn PageSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QTextDocument_PageSize(@ptrCast(self));
    }

    pub fn SetDefaultFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTextDocument_SetDefaultFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn DefaultFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QTextDocument_DefaultFont(@ptrCast(self));
    }

    pub fn SetSuperScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextDocument_SetSuperScriptBaseline(@ptrCast(self), baseline);
    }

    pub fn SuperScriptBaseline(self: ?*anyopaque, ) f64 {
        return qtc.QTextDocument_SuperScriptBaseline(@ptrCast(self));
    }

    pub fn SetSubScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextDocument_SetSubScriptBaseline(@ptrCast(self), baseline);
    }

    pub fn SubScriptBaseline(self: ?*anyopaque, ) f64 {
        return qtc.QTextDocument_SubScriptBaseline(@ptrCast(self));
    }

    pub fn SetBaselineOffset(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextDocument_SetBaselineOffset(@ptrCast(self), baseline);
    }

    pub fn BaselineOffset(self: ?*anyopaque, ) f64 {
        return qtc.QTextDocument_BaselineOffset(@ptrCast(self));
    }

    pub fn PageCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_PageCount(@ptrCast(self));
    }

    pub fn IsModified(self: ?*anyopaque, ) bool {
        return qtc.QTextDocument_IsModified(@ptrCast(self));
    }

    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QTextDocument_Print(@ptrCast(self), @ptrCast(printer));
    }

    pub fn Resource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextDocument_Resource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    pub fn AddResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque, resource: ?*anyopaque) void {
        qtc.QTextDocument_AddResource(@ptrCast(self), typeVal, @ptrCast(name), @ptrCast(resource));
    }

    pub fn AllFormats(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextDocument_AllFormats(@ptrCast(self));
    }

    pub fn MarkContentsDirty(self: ?*anyopaque, from: i32, length: i32) void {
        qtc.QTextDocument_MarkContentsDirty(@ptrCast(self), from, length);
    }

    pub fn SetUseDesignMetrics(self: ?*anyopaque, b: bool) void {
        qtc.QTextDocument_SetUseDesignMetrics(@ptrCast(self), b);
    }

    pub fn UseDesignMetrics(self: ?*anyopaque, ) bool {
        return qtc.QTextDocument_UseDesignMetrics(@ptrCast(self));
    }

    pub fn SetLayoutEnabled(self: ?*anyopaque, b: bool) void {
        qtc.QTextDocument_SetLayoutEnabled(@ptrCast(self), b);
    }

    pub fn IsLayoutEnabled(self: ?*anyopaque, ) bool {
        return qtc.QTextDocument_IsLayoutEnabled(@ptrCast(self));
    }

    pub fn DrawContents(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QTextDocument_DrawContents(@ptrCast(self), @ptrCast(painter));
    }

    pub fn SetTextWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextDocument_SetTextWidth(@ptrCast(self), width);
    }

    pub fn TextWidth(self: ?*anyopaque, ) f64 {
        return qtc.QTextDocument_TextWidth(@ptrCast(self));
    }

    pub fn IdealWidth(self: ?*anyopaque, ) f64 {
        return qtc.QTextDocument_IdealWidth(@ptrCast(self));
    }

    pub fn IndentWidth(self: ?*anyopaque, ) f64 {
        return qtc.QTextDocument_IndentWidth(@ptrCast(self));
    }

    pub fn SetIndentWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextDocument_SetIndentWidth(@ptrCast(self), width);
    }

    pub fn DocumentMargin(self: ?*anyopaque, ) f64 {
        return qtc.QTextDocument_DocumentMargin(@ptrCast(self));
    }

    pub fn SetDocumentMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextDocument_SetDocumentMargin(@ptrCast(self), margin);
    }

    pub fn AdjustSize(self: ?*anyopaque, ) void {
        qtc.QTextDocument_AdjustSize(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QTextDocument_Size(@ptrCast(self));
    }

    pub fn BlockCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_BlockCount(@ptrCast(self));
    }

    pub fn LineCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_LineCount(@ptrCast(self));
    }

    pub fn CharacterCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_CharacterCount(@ptrCast(self));
    }

    pub fn SetDefaultStyleSheet(self: ?*anyopaque, sheet: []const u8) void {
        const sheet_str = qtc.libqt_string{
    .len = sheet.len,
    .data = sheet.ptr,
};
qtc.QTextDocument_SetDefaultStyleSheet(@ptrCast(self), sheet_str);
    }

    pub fn DefaultStyleSheet(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_DefaultStyleSheet(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.DefaultStyleSheet: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Undo(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextDocument_Undo(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn Redo(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextDocument_Redo(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn ClearUndoRedoStacks(self: ?*anyopaque, ) void {
        qtc.QTextDocument_ClearUndoRedoStacks(@ptrCast(self));
    }

    pub fn MaximumBlockCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_MaximumBlockCount(@ptrCast(self));
    }

    pub fn SetMaximumBlockCount(self: ?*anyopaque, maximum: i32) void {
        qtc.QTextDocument_SetMaximumBlockCount(@ptrCast(self), maximum);
    }

    pub fn DefaultTextOption(self: ?*anyopaque, ) QtC.QTextOption {
        return qtc.QTextDocument_DefaultTextOption(@ptrCast(self));
    }

    pub fn SetDefaultTextOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTextDocument_SetDefaultTextOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn BaseUrl(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QTextDocument_BaseUrl(@ptrCast(self));
    }

    pub fn SetBaseUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QTextDocument_SetBaseUrl(@ptrCast(self), @ptrCast(url));
    }

    pub fn DefaultCursorMoveStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTextDocument_DefaultCursorMoveStyle(@ptrCast(self));
    }

    pub fn SetDefaultCursorMoveStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextDocument_SetDefaultCursorMoveStyle(@ptrCast(self), @intCast(style));
    }

    pub fn ContentsChange(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QTextDocument_ContentsChange(@ptrCast(self), from, charsRemoved, charsAdded);
    }

    pub fn OnContentsChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ContentsChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ContentsChanged(self: ?*anyopaque, ) void {
        qtc.QTextDocument_ContentsChanged(@ptrCast(self));
    }

    pub fn OnContentsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ContentsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UndoAvailable(self: ?*anyopaque, param1: bool) void {
        qtc.QTextDocument_UndoAvailable(@ptrCast(self), param1);
    }

    pub fn OnUndoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_UndoAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RedoAvailable(self: ?*anyopaque, param1: bool) void {
        qtc.QTextDocument_RedoAvailable(@ptrCast(self), param1);
    }

    pub fn OnRedoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_RedoAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UndoCommandAdded(self: ?*anyopaque, ) void {
        qtc.QTextDocument_UndoCommandAdded(@ptrCast(self));
    }

    pub fn OnUndoCommandAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_UndoCommandAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModificationChanged(self: ?*anyopaque, m: bool) void {
        qtc.QTextDocument_ModificationChanged(@ptrCast(self), m);
    }

    pub fn OnModificationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ModificationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CursorPositionChanged(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextDocument_CursorPositionChanged(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn OnCursorPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_CursorPositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BlockCountChanged(self: ?*anyopaque, newBlockCount: i32) void {
        qtc.QTextDocument_BlockCountChanged(@ptrCast(self), newBlockCount);
    }

    pub fn OnBlockCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTextDocument_Connect_BlockCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BaseUrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QTextDocument_BaseUrlChanged(@ptrCast(self), @ptrCast(url));
    }

    pub fn OnBaseUrlChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_BaseUrlChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DocumentLayoutChanged(self: ?*anyopaque, ) void {
        qtc.QTextDocument_DocumentLayoutChanged(@ptrCast(self));
    }

    pub fn OnDocumentLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_DocumentLayoutChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Undo2(self: ?*anyopaque, ) void {
        qtc.QTextDocument_Undo2(@ptrCast(self));
    }

    pub fn Redo2(self: ?*anyopaque, ) void {
        qtc.QTextDocument_Redo2(@ptrCast(self));
    }

    pub fn AppendUndoItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextDocument_AppendUndoItem(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetModified(self: ?*anyopaque, ) void {
        qtc.QTextDocument_SetModified(@ptrCast(self));
    }

    pub fn CreateObject(self: ?*anyopaque, f: ?*anyopaque) QtC.QTextObject {
        return qtc.QTextDocument_CreateObject(@ptrCast(self), @ptrCast(f));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QTextObject) void {
        qtc.QTextDocument_OnCreateObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateObject(self: ?*anyopaque, f: ?*anyopaque) QtC.QTextObject {
        return qtc.QTextDocument_QBaseCreateObject(@ptrCast(self), @ptrCast(f));
    }

    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextDocument_LoadResource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    /// Allows for overriding the related default method
    pub fn OnLoadResource(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QTextDocument_OnLoadResource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextDocument_QBaseLoadResource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToMarkdown1(self: ?*anyopaque, features: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToMarkdown1(@ptrCast(self), @intCast(features));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToMarkdown1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMarkdown2(self: ?*anyopaque, markdown: []const u8, features: i32) void {
        const markdown_str = qtc.libqt_string{
    .len = markdown.len,
    .data = markdown.ptr,
};
qtc.QTextDocument_SetMarkdown2(@ptrCast(self), markdown_str, @intCast(features));
    }

    pub fn Find22(self: ?*anyopaque, subString: []const u8, from: i32) QtC.QTextCursor {
        const subString_str = qtc.libqt_string{
    .len = subString.len,
    .data = subString.ptr,
};
return qtc.QTextDocument_Find22(@ptrCast(self), subString_str, from);
    }

    pub fn Find32(self: ?*anyopaque, subString: []const u8, from: i32, options: i32) QtC.QTextCursor {
        const subString_str = qtc.libqt_string{
    .len = subString.len,
    .data = subString.ptr,
};
return qtc.QTextDocument_Find32(@ptrCast(self), subString_str, from, @intCast(options));
    }

    pub fn Find33(self: ?*anyopaque, subString: []const u8, cursor: ?*anyopaque, options: i32) QtC.QTextCursor {
        const subString_str = qtc.libqt_string{
    .len = subString.len,
    .data = subString.ptr,
};
return qtc.QTextDocument_Find33(@ptrCast(self), subString_str, @ptrCast(cursor), @intCast(options));
    }

    pub fn Find23(self: ?*anyopaque, expr: ?*anyopaque, from: i32) QtC.QTextCursor {
        return qtc.QTextDocument_Find23(@ptrCast(self), @ptrCast(expr), from);
    }

    pub fn Find34(self: ?*anyopaque, expr: ?*anyopaque, from: i32, options: i32) QtC.QTextCursor {
        return qtc.QTextDocument_Find34(@ptrCast(self), @ptrCast(expr), from, @intCast(options));
    }

    pub fn Find35(self: ?*anyopaque, expr: ?*anyopaque, cursor: ?*anyopaque, options: i32) QtC.QTextCursor {
        return qtc.QTextDocument_Find35(@ptrCast(self), @ptrCast(expr), @ptrCast(cursor), @intCast(options));
    }

    pub fn DrawContents2(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QTextDocument_DrawContents2(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    pub fn ClearUndoRedoStacks1(self: ?*anyopaque, historyToClear: i32) void {
        qtc.QTextDocument_ClearUndoRedoStacks1(@ptrCast(self), @intCast(historyToClear));
    }

    pub fn SetModified1(self: ?*anyopaque, m: bool) void {
        qtc.QTextDocument_SetModified1(@ptrCast(self), m);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextDocument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/textdocument.html#types
pub const enums = struct {
    pub const MetaInformation = enum {
        pub const DocumentTitle: i32 = 0;
        pub const DocumentUrl: i32 = 1;
        pub const CssMedia: i32 = 2;
        pub const FrontMatter: i32 = 3;
    };

    pub const MarkdownFeature = enum {
        pub const MarkdownNoHTML: i32 = 96;
        pub const MarkdownDialectCommonMark: i32 = 0;
        pub const MarkdownDialectGitHub: i32 = 1068812;
    };

    pub const FindFlag = enum {
        pub const FindBackward: i32 = 1;
        pub const FindCaseSensitively: i32 = 2;
        pub const FindWholeWords: i32 = 4;
    };

    pub const ResourceType = enum {
        pub const UnknownResource: i32 = 0;
        pub const HtmlResource: i32 = 1;
        pub const ImageResource: i32 = 2;
        pub const StyleSheetResource: i32 = 3;
        pub const MarkdownResource: i32 = 4;
        pub const UserResource: i32 = 100;
    };

    pub const Stacks = enum {
        pub const UndoStack: i32 = 1;
        pub const RedoStack: i32 = 2;
        pub const UndoAndRedoStacks: i32 = 3;
    };

};
