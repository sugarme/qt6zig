const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qitemdelegate.html
pub const qitemdelegate = struct {

    /// New constructs a new QItemDelegate object.
    pub fn New() QtC.QItemDelegate {
        return qtc.QItemDelegate_new();
    }


    /// New2 constructs a new QItemDelegate object.
    pub fn New2(parent: ?*anyopaque) QtC.QItemDelegate {
        return qtc.QItemDelegate_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QItemDelegate_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HasClipping(self: ?*anyopaque, ) bool {
        return qtc.QItemDelegate_HasClipping(@ptrCast(self));
    }

    pub fn SetClipping(self: ?*anyopaque, clip: bool) void {
        qtc.QItemDelegate_SetClipping(@ptrCast(self), clip);
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    pub fn SizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QItemDelegate_SizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QItemDelegate_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QItemDelegate_QBaseSizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    pub fn CreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QItemDelegate_CreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QItemDelegate_OnCreateEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QItemDelegate_QBaseCreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    pub fn SetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSetEditorData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnSetEditorData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_QBaseSetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    pub fn SetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSetModelData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnSetModelData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_QBaseSetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    pub fn UpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_UpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateEditorGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnUpdateEditorGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_QBaseUpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    pub fn ItemEditorFactory(self: ?*anyopaque, ) QtC.QItemEditorFactory {
        return qtc.QItemDelegate_ItemEditorFactory(@ptrCast(self));
    }

    pub fn SetItemEditorFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.QItemDelegate_SetItemEditorFactory(@ptrCast(self), @ptrCast(factory));
    }

    pub fn DrawDisplay(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QItemDelegate_DrawDisplay(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnDrawDisplay(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawDisplay(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawDisplay(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QItemDelegate_QBaseDrawDisplay(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), text_str);
    }

    pub fn DrawDecoration(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QItemDelegate_DrawDecoration(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @ptrCast(pixmap));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawDecoration(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawDecoration(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawDecoration(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QItemDelegate_QBaseDrawDecoration(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @ptrCast(pixmap));
    }

    pub fn DrawFocus(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QItemDelegate_DrawFocus(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawFocus(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawFocus(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QItemDelegate_QBaseDrawFocus(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect));
    }

    pub fn DrawCheck(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, state: i32) void {
        qtc.QItemDelegate_DrawCheck(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawCheck(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawCheck(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawCheck(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, state: i32) void {
        qtc.QItemDelegate_QBaseDrawCheck(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @intCast(state));
    }

    pub fn DrawBackground(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_DrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawBackground(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawBackground(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawBackground(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_QBaseDrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    pub fn DoLayout(self: ?*anyopaque, option: ?*anyopaque, checkRect: ?*anyopaque, iconRect: ?*anyopaque, textRect: ?*anyopaque, hint: bool) void {
        qtc.QItemDelegate_DoLayout(@ptrCast(self), @ptrCast(option), @ptrCast(checkRect), @ptrCast(iconRect), @ptrCast(textRect), hint);
    }

    /// Allows for overriding the related default method
    pub fn OnDoLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QItemDelegate_OnDoLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoLayout(self: ?*anyopaque, option: ?*anyopaque, checkRect: ?*anyopaque, iconRect: ?*anyopaque, textRect: ?*anyopaque, hint: bool) void {
        qtc.QItemDelegate_QBaseDoLayout(@ptrCast(self), @ptrCast(option), @ptrCast(checkRect), @ptrCast(iconRect), @ptrCast(textRect), hint);
    }

    pub fn Rect(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QRect {
        return qtc.QItemDelegate_Rect(@ptrCast(self), @ptrCast(option), @ptrCast(index), role);
    }

    /// Allows for overriding the related default method
    pub fn OnRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QRect) void {
        qtc.QItemDelegate_OnRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRect(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QRect {
        return qtc.QItemDelegate_QBaseRect(@ptrCast(self), @ptrCast(option), @ptrCast(index), role);
    }

    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemDelegate_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemDelegate_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    pub fn EditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemDelegate_EditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnEditorEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEditorEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemDelegate_QBaseEditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    pub fn SetOptions(self: ?*anyopaque, index: ?*anyopaque, option: ?*anyopaque) QtC.QStyleOptionViewItem {
        return qtc.QItemDelegate_SetOptions(@ptrCast(self), @ptrCast(index), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnSetOptions(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QStyleOptionViewItem) void {
        qtc.QItemDelegate_OnSetOptions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOptions(self: ?*anyopaque, index: ?*anyopaque, option: ?*anyopaque) QtC.QStyleOptionViewItem {
        return qtc.QItemDelegate_QBaseSetOptions(@ptrCast(self), @ptrCast(index), @ptrCast(option));
    }

    pub fn Decoration(self: ?*anyopaque, option: ?*anyopaque, variant: ?*anyopaque) QtC.QPixmap {
        return qtc.QItemDelegate_Decoration(@ptrCast(self), @ptrCast(option), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnDecoration(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QItemDelegate_OnDecoration(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDecoration(self: ?*anyopaque, option: ?*anyopaque, variant: ?*anyopaque) QtC.QPixmap {
        return qtc.QItemDelegate_QBaseDecoration(@ptrCast(self), @ptrCast(option), @ptrCast(variant));
    }

    pub fn SelectedPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, palette: ?*anyopaque, enabled: bool) QtC.QPixmap {
        return qtc.QItemDelegate_SelectedPixmap(@ptrCast(self), @ptrCast(pixmap), @ptrCast(palette), enabled);
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, bool) callconv(.c) QtC.QPixmap) void {
        qtc.QItemDelegate_OnSelectedPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, palette: ?*anyopaque, enabled: bool) QtC.QPixmap {
        return qtc.QItemDelegate_QBaseSelectedPixmap(@ptrCast(self), @ptrCast(pixmap), @ptrCast(palette), enabled);
    }

    pub fn DoCheck(self: ?*anyopaque, option: ?*anyopaque, bounding: ?*anyopaque, variant: ?*anyopaque) QtC.QRect {
        return qtc.QItemDelegate_DoCheck(@ptrCast(self), @ptrCast(option), @ptrCast(bounding), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    pub fn OnDoCheck(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QItemDelegate_OnDoCheck(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoCheck(self: ?*anyopaque, option: ?*anyopaque, bounding: ?*anyopaque, variant: ?*anyopaque) QtC.QRect {
        return qtc.QItemDelegate_QBaseDoCheck(@ptrCast(self), @ptrCast(option), @ptrCast(bounding), @ptrCast(variant));
    }

    pub fn TextRectangle(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, font: ?*anyopaque, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QItemDelegate_TextRectangle(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(font), text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnTextRectangle(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QRect) void {
        qtc.QItemDelegate_OnTextRectangle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTextRectangle(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, font: ?*anyopaque, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QItemDelegate_QBaseTextRectangle(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(font), text_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QItemDelegate_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QItemDelegate_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemDelegate_Delete(@ptrCast(self));
    }
};
