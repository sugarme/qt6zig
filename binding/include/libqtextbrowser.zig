const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextbrowser.html
pub const qtextbrowser = struct {

    /// New constructs a new QTextBrowser object.
    pub fn New(parent: ?*anyopaque) QtC.QTextBrowser {
        return qtc.QTextBrowser_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTextBrowser object.
    pub fn New2() QtC.QTextBrowser {
        return qtc.QTextBrowser_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBrowser_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextbrowser.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QTextBrowser_Source(@ptrCast(self));
    }

    pub fn SourceType(self: ?*anyopaque, ) i32 {
        return qtc.QTextBrowser_SourceType(@ptrCast(self));
    }

    pub fn SearchPaths(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextBrowser_SearchPaths(@ptrCast(self));
    }

    pub fn SetSearchPaths(self: ?*anyopaque, paths: []const u8) void {
        qtc.QTextBrowser_SetSearchPaths(@ptrCast(self), @ptrCast(paths));
    }

    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextBrowser_LoadResource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    /// Allows for overriding the related default method
    pub fn OnLoadResource(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QTextBrowser_OnLoadResource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextBrowser_QBaseLoadResource(@ptrCast(self), typeVal, @ptrCast(name));
    }

    pub fn IsBackwardAvailable(self: ?*anyopaque, ) bool {
        return qtc.QTextBrowser_IsBackwardAvailable(@ptrCast(self));
    }

    pub fn IsForwardAvailable(self: ?*anyopaque, ) bool {
        return qtc.QTextBrowser_IsForwardAvailable(@ptrCast(self));
    }

    pub fn ClearHistory(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_ClearHistory(@ptrCast(self));
    }

    pub fn HistoryTitle(self: ?*anyopaque, param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBrowser_HistoryTitle(@ptrCast(self), param1);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextbrowser.HistoryTitle: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HistoryUrl(self: ?*anyopaque, param1: i32) QtC.QUrl {
        return qtc.QTextBrowser_HistoryUrl(@ptrCast(self), param1);
    }

    pub fn BackwardHistoryCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextBrowser_BackwardHistoryCount(@ptrCast(self));
    }

    pub fn ForwardHistoryCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextBrowser_ForwardHistoryCount(@ptrCast(self));
    }

    pub fn OpenExternalLinks(self: ?*anyopaque, ) bool {
        return qtc.QTextBrowser_OpenExternalLinks(@ptrCast(self));
    }

    pub fn SetOpenExternalLinks(self: ?*anyopaque, open: bool) void {
        qtc.QTextBrowser_SetOpenExternalLinks(@ptrCast(self), open);
    }

    pub fn OpenLinks(self: ?*anyopaque, ) bool {
        return qtc.QTextBrowser_OpenLinks(@ptrCast(self));
    }

    pub fn SetOpenLinks(self: ?*anyopaque, open: bool) void {
        qtc.QTextBrowser_SetOpenLinks(@ptrCast(self), open);
    }

    pub fn SetSource(self: ?*anyopaque, name: ?*anyopaque) void {
        qtc.QTextBrowser_SetSource(@ptrCast(self), @ptrCast(name));
    }

    pub fn Backward(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_Backward(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBackward(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnBackward(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBackward(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_QBaseBackward(@ptrCast(self));
    }

    pub fn Forward(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_Forward(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnForward(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnForward(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseForward(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_QBaseForward(@ptrCast(self));
    }

    pub fn Home(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_Home(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHome(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnHome(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHome(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_QBaseHome(@ptrCast(self));
    }

    pub fn Reload(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_Reload(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReload(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnReload(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReload(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_QBaseReload(@ptrCast(self));
    }

    pub fn BackwardAvailable(self: ?*anyopaque, param1: bool) void {
        qtc.QTextBrowser_BackwardAvailable(@ptrCast(self), param1);
    }

    pub fn OnBackwardAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_BackwardAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ForwardAvailable(self: ?*anyopaque, param1: bool) void {
        qtc.QTextBrowser_ForwardAvailable(@ptrCast(self), param1);
    }

    pub fn OnForwardAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_ForwardAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HistoryChanged(self: ?*anyopaque, ) void {
        qtc.QTextBrowser_HistoryChanged(@ptrCast(self));
    }

    pub fn OnHistoryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_HistoryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SourceChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextBrowser_SourceChanged(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnSourceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_SourceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Highlighted(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextBrowser_Highlighted(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnHighlighted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_Highlighted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AnchorClicked(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextBrowser_AnchorClicked(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnAnchorClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_AnchorClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTextBrowser_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextBrowser_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTextBrowser_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_KeyPressEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_MouseMoveEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn MousePressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_MousePressEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_QBaseMousePressEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_MouseReleaseEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_FocusOutEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QTextBrowser_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QTextBrowser_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QTextBrowser_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QTextBrowser_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextBrowser_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBrowser_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTextBrowser_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DoSetSource(self: ?*anyopaque, name: ?*anyopaque, typeVal: i32) void {
        qtc.QTextBrowser_DoSetSource(@ptrCast(self), @ptrCast(name), @intCast(typeVal));
    }

    /// Allows for overriding the related default method
    pub fn OnDoSetSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTextBrowser_OnDoSetSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoSetSource(self: ?*anyopaque, name: ?*anyopaque, typeVal: i32) void {
        qtc.QTextBrowser_QBaseDoSetSource(@ptrCast(self), @ptrCast(name), @intCast(typeVal));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBrowser_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextbrowser.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBrowser_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextbrowser.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSource2(self: ?*anyopaque, name: ?*anyopaque, typeVal: i32) void {
        qtc.QTextBrowser_SetSource2(@ptrCast(self), @ptrCast(name), @intCast(typeVal));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextBrowser_Delete(@ptrCast(self));
    }
};
