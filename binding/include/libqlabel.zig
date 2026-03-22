const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlabel.html
pub const qlabel = struct {

    /// New constructs a new QLabel object.
    pub fn New(parent: ?*anyopaque) QtC.QLabel {
        return qtc.QLabel_new(@ptrCast(parent));
    }


    /// New2 constructs a new QLabel object.
    pub fn New2() QtC.QLabel {
        return qtc.QLabel_new2();
    }


    /// New3 constructs a new QLabel object.
    pub fn New3(text: []const u8) QtC.QLabel {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QLabel_new3(text_str);
    }


    /// New4 constructs a new QLabel object.
    pub fn New4(parent: ?*anyopaque, f: i64) QtC.QLabel {
        return qtc.QLabel_new4(@ptrCast(parent), @intCast(f));
    }


    /// New5 constructs a new QLabel object.
    pub fn New5(text: []const u8, parent: ?*anyopaque) QtC.QLabel {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QLabel_new5(text_str, @ptrCast(parent));
    }


    /// New6 constructs a new QLabel object.
    pub fn New6(text: []const u8, parent: ?*anyopaque, f: i64) QtC.QLabel {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QLabel_new6(text_str, @ptrCast(parent), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLabel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlabel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLabel_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlabel.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Pixmap(self: ?*anyopaque, param1: i32) QtC.QPixmap {
        return qtc.QLabel_Pixmap(@ptrCast(self), @intCast(param1));
    }

    pub fn Pixmap2(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QLabel_Pixmap2(@ptrCast(self));
    }

    pub fn Picture(self: ?*anyopaque, param1: i32) QtC.QPicture {
        return qtc.QLabel_Picture(@ptrCast(self), @intCast(param1));
    }

    pub fn Picture2(self: ?*anyopaque, ) QtC.QPicture {
        return qtc.QLabel_Picture2(@ptrCast(self));
    }

    pub fn Movie(self: ?*anyopaque, ) QtC.QMovie {
        return qtc.QLabel_Movie(@ptrCast(self));
    }

    pub fn TextFormat(self: ?*anyopaque, ) i32 {
        return qtc.QLabel_TextFormat(@ptrCast(self));
    }

    pub fn SetTextFormat(self: ?*anyopaque, textFormat: i32) void {
        qtc.QLabel_SetTextFormat(@ptrCast(self), @intCast(textFormat));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QLabel_Alignment(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QLabel_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn SetWordWrap(self: ?*anyopaque, on: bool) void {
        qtc.QLabel_SetWordWrap(@ptrCast(self), on);
    }

    pub fn WordWrap(self: ?*anyopaque, ) bool {
        return qtc.QLabel_WordWrap(@ptrCast(self));
    }

    pub fn Indent(self: ?*anyopaque, ) i32 {
        return qtc.QLabel_Indent(@ptrCast(self));
    }

    pub fn SetIndent(self: ?*anyopaque, indent: i32) void {
        qtc.QLabel_SetIndent(@ptrCast(self), indent);
    }

    pub fn Margin(self: ?*anyopaque, ) i32 {
        return qtc.QLabel_Margin(@ptrCast(self));
    }

    pub fn SetMargin(self: ?*anyopaque, margin: i32) void {
        qtc.QLabel_SetMargin(@ptrCast(self), margin);
    }

    pub fn HasScaledContents(self: ?*anyopaque, ) bool {
        return qtc.QLabel_HasScaledContents(@ptrCast(self));
    }

    pub fn SetScaledContents(self: ?*anyopaque, scaledContents: bool) void {
        qtc.QLabel_SetScaledContents(@ptrCast(self), scaledContents);
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLabel_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLabel_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLabel_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLabel_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLabel_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLabel_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SetBuddy(self: ?*anyopaque, buddy: ?*anyopaque) void {
        qtc.QLabel_SetBuddy(@ptrCast(self), @ptrCast(buddy));
    }

    pub fn Buddy(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QLabel_Buddy(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLabel_HeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLabel_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLabel_QBaseHeightForWidth(@ptrCast(self), param1);
    }

    pub fn OpenExternalLinks(self: ?*anyopaque, ) bool {
        return qtc.QLabel_OpenExternalLinks(@ptrCast(self));
    }

    pub fn SetOpenExternalLinks(self: ?*anyopaque, open: bool) void {
        qtc.QLabel_SetOpenExternalLinks(@ptrCast(self), open);
    }

    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QLabel_SetTextInteractionFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn TextInteractionFlags(self: ?*anyopaque, ) i32 {
        return qtc.QLabel_TextInteractionFlags(@ptrCast(self));
    }

    pub fn SetSelection(self: ?*anyopaque, param1: i32, param2: i32) void {
        qtc.QLabel_SetSelection(@ptrCast(self), param1, param2);
    }

    pub fn HasSelectedText(self: ?*anyopaque, ) bool {
        return qtc.QLabel_HasSelectedText(@ptrCast(self));
    }

    pub fn SelectedText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLabel_SelectedText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlabel.SelectedText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SelectionStart(self: ?*anyopaque, ) i32 {
        return qtc.QLabel_SelectionStart(@ptrCast(self));
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QLabel_SetText(@ptrCast(self), text_str);
    }

    pub fn SetPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QLabel_SetPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn SetPicture(self: ?*anyopaque, picture: ?*anyopaque) void {
        qtc.QLabel_SetPicture(@ptrCast(self), @ptrCast(picture));
    }

    pub fn SetMovie(self: ?*anyopaque, movie: ?*anyopaque) void {
        qtc.QLabel_SetMovie(@ptrCast(self), @ptrCast(movie));
    }

    pub fn SetNum(self: ?*anyopaque, num: i32) void {
        qtc.QLabel_SetNum(@ptrCast(self), num);
    }

    pub fn SetNum2(self: ?*anyopaque, num: f64) void {
        qtc.QLabel_SetNum2(@ptrCast(self), num);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QLabel_Clear(@ptrCast(self));
    }

    pub fn LinkActivated(self: ?*anyopaque, link: []const u8) void {
        const link_str = qtc.libqt_string{
    .len = link.len,
    .data = link.ptr,
};
qtc.QLabel_LinkActivated(@ptrCast(self), link_str);
    }

    pub fn OnLinkActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QLabel_Connect_LinkActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LinkHovered(self: ?*anyopaque, link: []const u8) void {
        const link_str = qtc.libqt_string{
    .len = link.len,
    .data = link.ptr,
};
qtc.QLabel_LinkHovered(@ptrCast(self), link_str);
    }

    pub fn OnLinkHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QLabel_Connect_LinkHovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QLabel_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLabel_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QLabel_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_KeyPressEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLabel_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLabel_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLabel_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLabel_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MousePressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_MousePressEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_QBaseMousePressEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_MouseMoveEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_MouseReleaseEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_ContextMenuEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn FocusInEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_FocusInEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_QBaseFocusInEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_FocusOutEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLabel_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QLabel_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QLabel_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QLabel_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QLabel_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLabel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlabel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLabel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlabel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLabel_Delete(@ptrCast(self));
    }
};
