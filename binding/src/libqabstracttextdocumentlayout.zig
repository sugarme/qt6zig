const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html
pub const qabstracttextdocumentlayout = struct {

    /// New constructs a new QAbstractTextDocumentLayout object.
    pub fn New(doc: ?*anyopaque) QtC.QAbstractTextDocumentLayout {
        return qtc.QAbstractTextDocumentLayout_new(@ptrCast(doc));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Draw(@ptrCast(self), @ptrCast(painter), @ptrCast(context));
    }

    /// Allows for overriding the related default method
    pub fn OnDraw(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDraw(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseDraw(@ptrCast(self), @ptrCast(painter), @ptrCast(context));
    }

    pub fn HitTest(self: ?*anyopaque, point: ?*anyopaque, accuracy: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_HitTest(@ptrCast(self), @ptrCast(point), @intCast(accuracy));
    }

    /// Allows for overriding the related default method
    pub fn OnHitTest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnHitTest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitTest(self: ?*anyopaque, point: ?*anyopaque, accuracy: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_QBaseHitTest(@ptrCast(self), @ptrCast(point), @intCast(accuracy));
    }

    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_AnchorAt(@ptrCast(self), @ptrCast(pos));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.AnchorAt: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ImageAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_ImageAt(@ptrCast(self), @ptrCast(pos));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.ImageAt: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FormatAt(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextFormat {
        return qtc.QAbstractTextDocumentLayout_FormatAt(@ptrCast(self), @ptrCast(pos));
    }

    pub fn BlockWithMarkerAt(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextBlock {
        return qtc.QAbstractTextDocumentLayout_BlockWithMarkerAt(@ptrCast(self), @ptrCast(pos));
    }

    pub fn PageCount(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractTextDocumentLayout_PageCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPageCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnPageCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePageCount(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractTextDocumentLayout_QBasePageCount(@ptrCast(self));
    }

    pub fn DocumentSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QAbstractTextDocumentLayout_DocumentSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDocumentSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QAbstractTextDocumentLayout_OnDocumentSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDocumentSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QAbstractTextDocumentLayout_QBaseDocumentSize(@ptrCast(self));
    }

    pub fn FrameBoundingRect(self: ?*anyopaque, frame: ?*anyopaque) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout_FrameBoundingRect(@ptrCast(self), @ptrCast(frame));
    }

    /// Allows for overriding the related default method
    pub fn OnFrameBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QAbstractTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFrameBoundingRect(self: ?*anyopaque, frame: ?*anyopaque) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout_QBaseFrameBoundingRect(@ptrCast(self), @ptrCast(frame));
    }

    pub fn BlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout_BlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// Allows for overriding the related default method
    pub fn OnBlockBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QAbstractTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout_QBaseBlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    pub fn SetPaintDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_SetPaintDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn PaintDevice(self: ?*anyopaque, ) QtC.QPaintDevice {
        return qtc.QAbstractTextDocumentLayout_PaintDevice(@ptrCast(self));
    }

    pub fn Document(self: ?*anyopaque, ) QtC.QTextDocument {
        return qtc.QAbstractTextDocumentLayout_Document(@ptrCast(self));
    }

    pub fn RegisterHandler(self: ?*anyopaque, objectType: i32, component: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_RegisterHandler(@ptrCast(self), objectType, @ptrCast(component));
    }

    pub fn UnregisterHandler(self: ?*anyopaque, objectType: i32) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler(@ptrCast(self), objectType);
    }

    pub fn HandlerForObject(self: ?*anyopaque, objectType: i32) QtC.QTextObjectInterface {
        return qtc.QAbstractTextDocumentLayout_HandlerForObject(@ptrCast(self), objectType);
    }

    pub fn Update(self: ?*anyopaque, ) void {
        qtc.QAbstractTextDocumentLayout_Update(@ptrCast(self));
    }

    pub fn OnUpdate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UpdateBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_UpdateBlock(@ptrCast(self), @ptrCast(block));
    }

    pub fn OnUpdateBlock(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_UpdateBlock(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DocumentSizeChanged(self: ?*anyopaque, newSize: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_DocumentSizeChanged(@ptrCast(self), @ptrCast(newSize));
    }

    pub fn OnDocumentSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PageCountChanged(self: ?*anyopaque, newPages: i32) void {
        qtc.QAbstractTextDocumentLayout_PageCountChanged(@ptrCast(self), newPages);
    }

    pub fn OnPageCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_PageCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DocumentChanged(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QAbstractTextDocumentLayout_DocumentChanged(@ptrCast(self), from, charsRemoved, charsAdded);
    }

    /// Allows for overriding the related default method
    pub fn OnDocumentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDocumentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDocumentChanged(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QAbstractTextDocumentLayout_QBaseDocumentChanged(@ptrCast(self), from, charsRemoved, charsAdded);
    }

    pub fn ResizeInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_ResizeInlineObject(@ptrCast(self), @ptrCast(item), posInDocument, @ptrCast(format));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeInlineObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnResizeInlineObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseResizeInlineObject(@ptrCast(self), @ptrCast(item), posInDocument, @ptrCast(format));
    }

    pub fn PositionInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_PositionInlineObject(@ptrCast(self), @ptrCast(item), posInDocument, @ptrCast(format));
    }

    /// Allows for overriding the related default method
    pub fn OnPositionInlineObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnPositionInlineObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePositionInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBasePositionInlineObject(@ptrCast(self), @ptrCast(item), posInDocument, @ptrCast(format));
    }

    pub fn DrawInlineObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, object: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_DrawInlineObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(object), posInDocument, @ptrCast(format));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawInlineObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDrawInlineObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawInlineObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, object: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseDrawInlineObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(object), posInDocument, @ptrCast(format));
    }

    pub fn FormatIndex(self: ?*anyopaque, pos: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_FormatIndex(@ptrCast(self), pos);
    }

    /// Allows for overriding the related default method
    pub fn OnFormatIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnFormatIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormatIndex(self: ?*anyopaque, pos: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_QBaseFormatIndex(@ptrCast(self), pos);
    }

    pub fn Format(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QAbstractTextDocumentLayout_Format(@ptrCast(self), pos);
    }

    /// Allows for overriding the related default method
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QTextCharFormat) void {
        qtc.QAbstractTextDocumentLayout_OnFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormat(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QAbstractTextDocumentLayout_QBaseFormat(@ptrCast(self), pos);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UnregisterHandler2(self: ?*anyopaque, objectType: i32, component: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler2(@ptrCast(self), objectType, @ptrCast(component));
    }

    pub fn Update1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Update1(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnUpdate1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextobjectinterface.html
pub const qtextobjectinterface = struct {

    /// New constructs a new QTextObjectInterface object.
    pub fn New() QtC.QTextObjectInterface {
        return qtc.QTextObjectInterface_new();
    }


    /// New2 constructs a new QTextObjectInterface object.
    pub fn New2(param1: ?*anyopaque) QtC.QTextObjectInterface {
        return qtc.QTextObjectInterface_new2(@ptrCast(param1));
    }


    pub fn IntrinsicSize(self: ?*anyopaque, doc: ?*anyopaque, posInDocument: i32, format: ?*anyopaque) QtC.QSizeF {
        return qtc.QTextObjectInterface_IntrinsicSize(@ptrCast(self), @ptrCast(doc), posInDocument, @ptrCast(format));
    }

    /// Allows for overriding the related default method
    pub fn OnIntrinsicSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QTextObjectInterface_OnIntrinsicSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIntrinsicSize(self: ?*anyopaque, doc: ?*anyopaque, posInDocument: i32, format: ?*anyopaque) QtC.QSizeF {
        return qtc.QTextObjectInterface_QBaseIntrinsicSize(@ptrCast(self), @ptrCast(doc), posInDocument, @ptrCast(format));
    }

    pub fn DrawObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, doc: ?*anyopaque, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QTextObjectInterface_DrawObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(doc), posInDocument, @ptrCast(format));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextObjectInterface_OnDrawObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, doc: ?*anyopaque, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QTextObjectInterface_QBaseDrawObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(doc), posInDocument, @ptrCast(format));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextObjectInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextObjectInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html
pub const qabstracttextdocumentlayout__selection = struct {

    /// New constructs a new QAbstractTextDocumentLayout::Selection object.
    pub fn New() QtC.QAbstractTextDocumentLayout__Selection {
        return qtc.QAbstractTextDocumentLayout__Selection_new();
    }


    pub fn Cursor(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QAbstractTextDocumentLayout__Selection_Cursor(@ptrCast(self));
    }

    pub fn SetCursor(self: ?*anyopaque, cursor: QtC.QTextCursor) void {
        qtc.QAbstractTextDocumentLayout__Selection_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QAbstractTextDocumentLayout__Selection_Format(@ptrCast(self));
    }

    pub fn SetFormat(self: ?*anyopaque, format: QtC.QTextCharFormat) void {
        qtc.QAbstractTextDocumentLayout__Selection_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout__Selection_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout__Selection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html
pub const qabstracttextdocumentlayout__paintcontext = struct {

    /// New constructs a new QAbstractTextDocumentLayout::PaintContext object.
    pub fn New() QtC.QAbstractTextDocumentLayout__PaintContext {
        return qtc.QAbstractTextDocumentLayout__PaintContext_new();
    }


    pub fn CursorPosition(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractTextDocumentLayout__PaintContext_CursorPosition(@ptrCast(self));
    }

    pub fn SetCursorPosition(self: ?*anyopaque, cursorPosition: i32) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_SetCursorPosition(@ptrCast(self), cursorPosition);
    }

    pub fn Palette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QAbstractTextDocumentLayout__PaintContext_Palette(@ptrCast(self));
    }

    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    pub fn Clip(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout__PaintContext_Clip(@ptrCast(self));
    }

    pub fn SetClip(self: ?*anyopaque, clip: QtC.QRectF) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_SetClip(@ptrCast(self), @ptrCast(clip));
    }

    pub fn Selections(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractTextDocumentLayout__PaintContext_Selections(@ptrCast(self));
    }

    pub fn SetSelections(self: ?*anyopaque, selections: []const u8) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_SetSelections(@ptrCast(self), selections);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_Delete(@ptrCast(self));
    }
};
