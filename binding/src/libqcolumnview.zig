const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcolumnview.html
pub const qcolumnview = struct {

    /// New constructs a new QColumnView object.
    pub fn New(parent: ?*anyopaque) QtC.QColumnView {
        return qtc.QColumnView_new(@ptrCast(parent));
    }


    /// New2 constructs a new QColumnView object.
    pub fn New2() QtC.QColumnView {
        return qtc.QColumnView_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColumnView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UpdatePreviewWidget(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QColumnView_UpdatePreviewWidget(@ptrCast(self), @ptrCast(index));
    }

    pub fn OnUpdatePreviewWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_Connect_UpdatePreviewWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IndexAt(self: ?*anyopaque, point: ?*anyopaque) QtC.QModelIndex {
        return qtc.QColumnView_IndexAt(@ptrCast(self), @ptrCast(point));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QColumnView_OnIndexAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexAt(self: ?*anyopaque, point: ?*anyopaque) QtC.QModelIndex {
        return qtc.QColumnView_QBaseIndexAt(@ptrCast(self), @ptrCast(point));
    }

    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QColumnView_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Allows for overriding the related default method
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnScrollTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QColumnView_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QColumnView_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QColumnView_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QColumnView_QBaseSizeHint(@ptrCast(self));
    }

    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QColumnView_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QColumnView_OnVisualRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QColumnView_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QColumnView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Allows for overriding the related default method
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QColumnView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QColumnView_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSetSelectionModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QColumnView_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QColumnView_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRootIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSetRootIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QColumnView_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn SelectAll(self: ?*anyopaque, ) void {
        qtc.QColumnView_SelectAll(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectAll(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSelectAll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectAll(self: ?*anyopaque, ) void {
        qtc.QColumnView_QBaseSelectAll(@ptrCast(self));
    }

    pub fn SetResizeGripsVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QColumnView_SetResizeGripsVisible(@ptrCast(self), visible);
    }

    pub fn ResizeGripsVisible(self: ?*anyopaque, ) bool {
        return qtc.QColumnView_ResizeGripsVisible(@ptrCast(self));
    }

    pub fn PreviewWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QColumnView_PreviewWidget(@ptrCast(self));
    }

    pub fn SetPreviewWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QColumnView_SetPreviewWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn SetColumnWidths(self: ?*anyopaque, list: []const u8) void {
        qtc.QColumnView_SetColumnWidths(@ptrCast(self), @ptrCast(list));
    }

    pub fn ColumnWidths(self: ?*anyopaque, ) []const u8 {
        return qtc.QColumnView_ColumnWidths(@ptrCast(self));
    }

    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QColumnView_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QColumnView_OnIsIndexHidden(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QColumnView_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QColumnView_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QColumnView_OnMoveCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QColumnView_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QColumnView_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QColumnView_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QColumnView_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QColumnView_OnVisualRegionForSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QColumnView_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    pub fn HorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QColumnView_HorizontalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QColumnView_OnHorizontalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QColumnView_QBaseHorizontalOffset(@ptrCast(self));
    }

    pub fn VerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QColumnView_VerticalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QColumnView_OnVerticalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QColumnView_QBaseVerticalOffset(@ptrCast(self));
    }

    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QColumnView_RowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QColumnView_OnRowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QColumnView_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QColumnView_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnCurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QColumnView_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QColumnView_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QColumnView_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QColumnView_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn CreateColumn(self: ?*anyopaque, rootIndex: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QColumnView_CreateColumn(@ptrCast(self), @ptrCast(rootIndex));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAbstractItemView) void {
        qtc.QColumnView_OnCreateColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateColumn(self: ?*anyopaque, rootIndex: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QColumnView_QBaseCreateColumn(@ptrCast(self), @ptrCast(rootIndex));
    }

    pub fn InitializeColumn(self: ?*anyopaque, column: ?*anyopaque) void {
        qtc.QColumnView_InitializeColumn(@ptrCast(self), @ptrCast(column));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnInitializeColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeColumn(self: ?*anyopaque, column: ?*anyopaque) void {
        qtc.QColumnView_QBaseInitializeColumn(@ptrCast(self), @ptrCast(column));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColumnView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColumnView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColumnView_Delete(@ptrCast(self));
    }
};
