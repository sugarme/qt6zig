const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlistview.html
pub const qlistview = struct {

    /// New constructs a new QListView object.
    pub fn New(parent: ?*anyopaque) QtC.QListView {
        return qtc.QListView_new(@ptrCast(parent));
    }


    /// New2 constructs a new QListView object.
    pub fn New2() QtC.QListView {
        return qtc.QListView_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMovement(self: ?*anyopaque, movement: i32) void {
        qtc.QListView_SetMovement(@ptrCast(self), @intCast(movement));
    }

    pub fn Movement(self: ?*anyopaque, ) i32 {
        return qtc.QListView_Movement(@ptrCast(self));
    }

    pub fn SetFlow(self: ?*anyopaque, flow: i32) void {
        qtc.QListView_SetFlow(@ptrCast(self), @intCast(flow));
    }

    pub fn Flow(self: ?*anyopaque, ) i32 {
        return qtc.QListView_Flow(@ptrCast(self));
    }

    pub fn SetWrapping(self: ?*anyopaque, enable: bool) void {
        qtc.QListView_SetWrapping(@ptrCast(self), enable);
    }

    pub fn IsWrapping(self: ?*anyopaque, ) bool {
        return qtc.QListView_IsWrapping(@ptrCast(self));
    }

    pub fn SetResizeMode(self: ?*anyopaque, mode: i32) void {
        qtc.QListView_SetResizeMode(@ptrCast(self), @intCast(mode));
    }

    pub fn ResizeMode(self: ?*anyopaque, ) i32 {
        return qtc.QListView_ResizeMode(@ptrCast(self));
    }

    pub fn SetLayoutMode(self: ?*anyopaque, mode: i32) void {
        qtc.QListView_SetLayoutMode(@ptrCast(self), @intCast(mode));
    }

    pub fn LayoutMode(self: ?*anyopaque, ) i32 {
        return qtc.QListView_LayoutMode(@ptrCast(self));
    }

    pub fn SetSpacing(self: ?*anyopaque, space: i32) void {
        qtc.QListView_SetSpacing(@ptrCast(self), space);
    }

    pub fn Spacing(self: ?*anyopaque, ) i32 {
        return qtc.QListView_Spacing(@ptrCast(self));
    }

    pub fn SetBatchSize(self: ?*anyopaque, batchSize: i32) void {
        qtc.QListView_SetBatchSize(@ptrCast(self), batchSize);
    }

    pub fn BatchSize(self: ?*anyopaque, ) i32 {
        return qtc.QListView_BatchSize(@ptrCast(self));
    }

    pub fn SetGridSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QListView_SetGridSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn GridSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QListView_GridSize(@ptrCast(self));
    }

    pub fn SetViewMode(self: ?*anyopaque, mode: i32) void {
        qtc.QListView_SetViewMode(@ptrCast(self), @intCast(mode));
    }

    pub fn ViewMode(self: ?*anyopaque, ) i32 {
        return qtc.QListView_ViewMode(@ptrCast(self));
    }

    pub fn ClearPropertyFlags(self: ?*anyopaque, ) void {
        qtc.QListView_ClearPropertyFlags(@ptrCast(self));
    }

    pub fn IsRowHidden(self: ?*anyopaque, row: i32) bool {
        return qtc.QListView_IsRowHidden(@ptrCast(self), row);
    }

    pub fn SetRowHidden(self: ?*anyopaque, row: i32, hide: bool) void {
        qtc.QListView_SetRowHidden(@ptrCast(self), row, hide);
    }

    pub fn SetModelColumn(self: ?*anyopaque, column: i32) void {
        qtc.QListView_SetModelColumn(@ptrCast(self), column);
    }

    pub fn ModelColumn(self: ?*anyopaque, ) i32 {
        return qtc.QListView_ModelColumn(@ptrCast(self));
    }

    pub fn SetUniformItemSizes(self: ?*anyopaque, enable: bool) void {
        qtc.QListView_SetUniformItemSizes(@ptrCast(self), enable);
    }

    pub fn UniformItemSizes(self: ?*anyopaque, ) bool {
        return qtc.QListView_UniformItemSizes(@ptrCast(self));
    }

    pub fn SetWordWrap(self: ?*anyopaque, on: bool) void {
        qtc.QListView_SetWordWrap(@ptrCast(self), on);
    }

    pub fn WordWrap(self: ?*anyopaque, ) bool {
        return qtc.QListView_WordWrap(@ptrCast(self));
    }

    pub fn SetSelectionRectVisible(self: ?*anyopaque, show: bool) void {
        qtc.QListView_SetSelectionRectVisible(@ptrCast(self), show);
    }

    pub fn IsSelectionRectVisible(self: ?*anyopaque, ) bool {
        return qtc.QListView_IsSelectionRectVisible(@ptrCast(self));
    }

    pub fn SetItemAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QListView_SetItemAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn ItemAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QListView_ItemAlignment(@ptrCast(self));
    }

    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QListView_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QListView_OnVisualRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QListView_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QListView_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Allows for overriding the related default method
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListView_OnScrollTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QListView_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    pub fn IndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QListView_IndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QListView_OnIndexAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QListView_QBaseIndexAt(@ptrCast(self), @ptrCast(p));
    }

    pub fn DoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QListView_DoItemsLayout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDoItemsLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnDoItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QListView_QBaseDoItemsLayout(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QListView_Reset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReset(self: ?*anyopaque, ) void {
        qtc.QListView_QBaseReset(@ptrCast(self));
    }

    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QListView_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRootIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnSetRootIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QListView_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn IndexesMoved(self: ?*anyopaque, indexes: []const u8) void {
        qtc.QListView_IndexesMoved(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn OnIndexesMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QListView_Connect_IndexesMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QListView_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListView_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QListView_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QListView_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListView_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QListView_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn ResizeContents(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QListView_ResizeContents(@ptrCast(self), width, height);
    }

    /// Allows for overriding the related default method
    pub fn OnResizeContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListView_OnResizeContents(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeContents(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QListView_QBaseResizeContents(@ptrCast(self), width, height);
    }

    pub fn ContentsSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QListView_ContentsSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnContentsSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QListView_OnContentsSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContentsSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QListView_QBaseContentsSize(@ptrCast(self));
    }

    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QListView_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QListView_OnDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QListView_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QListView_RowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListView_OnRowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QListView_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QListView_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListView_OnRowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QListView_QBaseRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), start, end);
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBaseTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn StartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QListView_StartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Allows for overriding the related default method
    pub fn OnStartDrag(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListView_OnStartDrag(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QListView_QBaseStartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QListView_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitViewItemOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnInitViewItemOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QListView_QBaseInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListView_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn HorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QListView_HorizontalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QListView_OnHorizontalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QListView_QBaseHorizontalOffset(@ptrCast(self));
    }

    pub fn VerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QListView_VerticalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QListView_OnVerticalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QListView_QBaseVerticalOffset(@ptrCast(self));
    }

    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QListView_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QListView_OnMoveCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QListView_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    pub fn RectForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QListView_RectForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnRectForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QListView_OnRectForIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRectForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QListView_QBaseRectForIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn SetPositionForIndex(self: ?*anyopaque, position: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QListView_SetPositionForIndex(@ptrCast(self), @ptrCast(position), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPositionForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnSetPositionForIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPositionForIndex(self: ?*anyopaque, position: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QListView_QBaseSetPositionForIndex(@ptrCast(self), @ptrCast(position), @ptrCast(index));
    }

    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QListView_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListView_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QListView_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QListView_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QListView_OnVisualRegionForSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QListView_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    pub fn SelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QListView_SelectedIndexes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectedIndexes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QListView_OnSelectedIndexes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QListView_QBaseSelectedIndexes(@ptrCast(self));
    }

    pub fn UpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QListView_UpdateGeometries(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateGeometries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnUpdateGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QListView_QBaseUpdateGeometries(@ptrCast(self));
    }

    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QListView_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListView_OnIsIndexHidden(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QListView_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QListView_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Allows for overriding the related default method
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QListView_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QListView_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListView_OnCurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QListView_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    pub fn ViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QListView_ViewportSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QListView_OnViewportSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QListView_QBaseViewportSizeHint(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QListView_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/listview.html#types
pub const enums = struct {
    pub const Movement = enum {
        pub const Static: i32 = 0;
        pub const Free: i32 = 1;
        pub const Snap: i32 = 2;
    };

    pub const Flow = enum {
        pub const LeftToRight: i32 = 0;
        pub const TopToBottom: i32 = 1;
    };

    pub const ResizeMode = enum {
        pub const Fixed: i32 = 0;
        pub const Adjust: i32 = 1;
    };

    pub const LayoutMode = enum {
        pub const SinglePass: i32 = 0;
        pub const Batched: i32 = 1;
    };

    pub const ViewMode = enum {
        pub const ListMode: i32 = 0;
        pub const IconMode: i32 = 1;
    };

};
