const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qheaderview.html
pub const qheaderview = struct {

    /// New constructs a new QHeaderView object.
    pub fn New(orientation: i32) QtC.QHeaderView {
        return qtc.QHeaderView_new(@intCast(orientation));
    }


    /// New2 constructs a new QHeaderView object.
    pub fn New2(orientation: i32, parent: ?*anyopaque) QtC.QHeaderView {
        return qtc.QHeaderView_new2(@intCast(orientation), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHeaderView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QHeaderView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Allows for overriding the related default method
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QHeaderView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_Orientation(@ptrCast(self));
    }

    pub fn Offset(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_Offset(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_Length(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QHeaderView_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QHeaderView_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QHeaderView_QBaseSizeHint(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, v: bool) void {
        qtc.QHeaderView_SetVisible(@ptrCast(self), v);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QHeaderView_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, v: bool) void {
        qtc.QHeaderView_QBaseSetVisible(@ptrCast(self), v);
    }

    pub fn SectionSizeHint(self: ?*anyopaque, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionSizeHint(@ptrCast(self), logicalIndex);
    }

    pub fn VisualIndexAt(self: ?*anyopaque, position: i32) i32 {
        return qtc.QHeaderView_VisualIndexAt(@ptrCast(self), position);
    }

    pub fn LogicalIndexAt(self: ?*anyopaque, position: i32) i32 {
        return qtc.QHeaderView_LogicalIndexAt(@ptrCast(self), position);
    }

    pub fn LogicalIndexAt2(self: ?*anyopaque, x: i32, y: i32) i32 {
        return qtc.QHeaderView_LogicalIndexAt2(@ptrCast(self), x, y);
    }

    pub fn LogicalIndexAt3(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QHeaderView_LogicalIndexAt3(@ptrCast(self), @ptrCast(pos));
    }

    pub fn SectionSize(self: ?*anyopaque, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionSize(@ptrCast(self), logicalIndex);
    }

    pub fn SectionPosition(self: ?*anyopaque, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionPosition(@ptrCast(self), logicalIndex);
    }

    pub fn SectionViewportPosition(self: ?*anyopaque, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionViewportPosition(@ptrCast(self), logicalIndex);
    }

    pub fn MoveSection(self: ?*anyopaque, from: i32, to: i32) void {
        qtc.QHeaderView_MoveSection(@ptrCast(self), from, to);
    }

    pub fn SwapSections(self: ?*anyopaque, first: i32, second: i32) void {
        qtc.QHeaderView_SwapSections(@ptrCast(self), first, second);
    }

    pub fn ResizeSection(self: ?*anyopaque, logicalIndex: i32, size: i32) void {
        qtc.QHeaderView_ResizeSection(@ptrCast(self), logicalIndex, size);
    }

    pub fn ResizeSections(self: ?*anyopaque, mode: i32) void {
        qtc.QHeaderView_ResizeSections(@ptrCast(self), @intCast(mode));
    }

    pub fn IsSectionHidden(self: ?*anyopaque, logicalIndex: i32) bool {
        return qtc.QHeaderView_IsSectionHidden(@ptrCast(self), logicalIndex);
    }

    pub fn SetSectionHidden(self: ?*anyopaque, logicalIndex: i32, hide: bool) void {
        qtc.QHeaderView_SetSectionHidden(@ptrCast(self), logicalIndex, hide);
    }

    pub fn HiddenSectionCount(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_HiddenSectionCount(@ptrCast(self));
    }

    pub fn HideSection(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_HideSection(@ptrCast(self), logicalIndex);
    }

    pub fn ShowSection(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_ShowSection(@ptrCast(self), logicalIndex);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_Count(@ptrCast(self));
    }

    pub fn VisualIndex(self: ?*anyopaque, logicalIndex: i32) i32 {
        return qtc.QHeaderView_VisualIndex(@ptrCast(self), logicalIndex);
    }

    pub fn LogicalIndex(self: ?*anyopaque, visualIndex: i32) i32 {
        return qtc.QHeaderView_LogicalIndex(@ptrCast(self), visualIndex);
    }

    pub fn SetSectionsMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QHeaderView_SetSectionsMovable(@ptrCast(self), movable);
    }

    pub fn SectionsMovable(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_SectionsMovable(@ptrCast(self));
    }

    pub fn SetFirstSectionMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QHeaderView_SetFirstSectionMovable(@ptrCast(self), movable);
    }

    pub fn IsFirstSectionMovable(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_IsFirstSectionMovable(@ptrCast(self));
    }

    pub fn SetSectionsClickable(self: ?*anyopaque, clickable: bool) void {
        qtc.QHeaderView_SetSectionsClickable(@ptrCast(self), clickable);
    }

    pub fn SectionsClickable(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_SectionsClickable(@ptrCast(self));
    }

    pub fn SetHighlightSections(self: ?*anyopaque, highlight: bool) void {
        qtc.QHeaderView_SetHighlightSections(@ptrCast(self), highlight);
    }

    pub fn HighlightSections(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_HighlightSections(@ptrCast(self));
    }

    pub fn SectionResizeMode(self: ?*anyopaque, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionResizeMode(@ptrCast(self), logicalIndex);
    }

    pub fn SetSectionResizeMode(self: ?*anyopaque, mode: i32) void {
        qtc.QHeaderView_SetSectionResizeMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SetSectionResizeMode2(self: ?*anyopaque, logicalIndex: i32, mode: i32) void {
        qtc.QHeaderView_SetSectionResizeMode2(@ptrCast(self), logicalIndex, @intCast(mode));
    }

    pub fn SetResizeContentsPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QHeaderView_SetResizeContentsPrecision(@ptrCast(self), precision);
    }

    pub fn ResizeContentsPrecision(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_ResizeContentsPrecision(@ptrCast(self));
    }

    pub fn StretchSectionCount(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_StretchSectionCount(@ptrCast(self));
    }

    pub fn SetSortIndicatorShown(self: ?*anyopaque, show: bool) void {
        qtc.QHeaderView_SetSortIndicatorShown(@ptrCast(self), show);
    }

    pub fn IsSortIndicatorShown(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_IsSortIndicatorShown(@ptrCast(self));
    }

    pub fn SetSortIndicator(self: ?*anyopaque, logicalIndex: i32, order: i32) void {
        qtc.QHeaderView_SetSortIndicator(@ptrCast(self), logicalIndex, @intCast(order));
    }

    pub fn SortIndicatorSection(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_SortIndicatorSection(@ptrCast(self));
    }

    pub fn SortIndicatorOrder(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_SortIndicatorOrder(@ptrCast(self));
    }

    pub fn SetSortIndicatorClearable(self: ?*anyopaque, clearable: bool) void {
        qtc.QHeaderView_SetSortIndicatorClearable(@ptrCast(self), clearable);
    }

    pub fn IsSortIndicatorClearable(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_IsSortIndicatorClearable(@ptrCast(self));
    }

    pub fn StretchLastSection(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_StretchLastSection(@ptrCast(self));
    }

    pub fn SetStretchLastSection(self: ?*anyopaque, stretch: bool) void {
        qtc.QHeaderView_SetStretchLastSection(@ptrCast(self), stretch);
    }

    pub fn CascadingSectionResizes(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_CascadingSectionResizes(@ptrCast(self));
    }

    pub fn SetCascadingSectionResizes(self: ?*anyopaque, enable: bool) void {
        qtc.QHeaderView_SetCascadingSectionResizes(@ptrCast(self), enable);
    }

    pub fn DefaultSectionSize(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_DefaultSectionSize(@ptrCast(self));
    }

    pub fn SetDefaultSectionSize(self: ?*anyopaque, size: i32) void {
        qtc.QHeaderView_SetDefaultSectionSize(@ptrCast(self), size);
    }

    pub fn ResetDefaultSectionSize(self: ?*anyopaque, ) void {
        qtc.QHeaderView_ResetDefaultSectionSize(@ptrCast(self));
    }

    pub fn MinimumSectionSize(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_MinimumSectionSize(@ptrCast(self));
    }

    pub fn SetMinimumSectionSize(self: ?*anyopaque, size: i32) void {
        qtc.QHeaderView_SetMinimumSectionSize(@ptrCast(self), size);
    }

    pub fn MaximumSectionSize(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_MaximumSectionSize(@ptrCast(self));
    }

    pub fn SetMaximumSectionSize(self: ?*anyopaque, size: i32) void {
        qtc.QHeaderView_SetMaximumSectionSize(@ptrCast(self), size);
    }

    pub fn DefaultAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_DefaultAlignment(@ptrCast(self));
    }

    pub fn SetDefaultAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QHeaderView_SetDefaultAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn DoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QHeaderView_DoItemsLayout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDoItemsLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnDoItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoItemsLayout(self: ?*anyopaque, ) void {
        qtc.QHeaderView_QBaseDoItemsLayout(@ptrCast(self));
    }

    pub fn SectionsMoved(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_SectionsMoved(@ptrCast(self));
    }

    pub fn SectionsHidden(self: ?*anyopaque, ) bool {
        return qtc.QHeaderView_SectionsHidden(@ptrCast(self));
    }

    pub fn SaveState(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QHeaderView_SaveState(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qheaderview.SaveState: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RestoreState(self: ?*anyopaque, state: []u8) bool {
        const state_str = qtc.libqt_string{
    .len = state.len,
    .data = state.ptr,
};
return qtc.QHeaderView_RestoreState(@ptrCast(self), state_str);
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QHeaderView_Reset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReset(self: ?*anyopaque, ) void {
        qtc.QHeaderView_QBaseReset(@ptrCast(self));
    }

    pub fn SetOffset(self: ?*anyopaque, offset: i32) void {
        qtc.QHeaderView_SetOffset(@ptrCast(self), offset);
    }

    pub fn SetOffsetToSectionPosition(self: ?*anyopaque, visualIndex: i32) void {
        qtc.QHeaderView_SetOffsetToSectionPosition(@ptrCast(self), visualIndex);
    }

    pub fn SetOffsetToLastSection(self: ?*anyopaque, ) void {
        qtc.QHeaderView_SetOffsetToLastSection(@ptrCast(self));
    }

    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, logicalFirst: i32, logicalLast: i32) void {
        qtc.QHeaderView_HeaderDataChanged(@ptrCast(self), @intCast(orientation), logicalFirst, logicalLast);
    }

    pub fn SectionMoved(self: ?*anyopaque, logicalIndex: i32, oldVisualIndex: i32, newVisualIndex: i32) void {
        qtc.QHeaderView_SectionMoved(@ptrCast(self), logicalIndex, oldVisualIndex, newVisualIndex);
    }

    pub fn OnSectionMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SectionResized(self: ?*anyopaque, logicalIndex: i32, oldSize: i32, newSize: i32) void {
        qtc.QHeaderView_SectionResized(@ptrCast(self), logicalIndex, oldSize, newSize);
    }

    pub fn OnSectionResized(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionResized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SectionPressed(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_SectionPressed(@ptrCast(self), logicalIndex);
    }

    pub fn OnSectionPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SectionClicked(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_SectionClicked(@ptrCast(self), logicalIndex);
    }

    pub fn OnSectionClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SectionEntered(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_SectionEntered(@ptrCast(self), logicalIndex);
    }

    pub fn OnSectionEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SectionDoubleClicked(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_SectionDoubleClicked(@ptrCast(self), logicalIndex);
    }

    pub fn OnSectionDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SectionCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QHeaderView_SectionCountChanged(@ptrCast(self), oldCount, newCount);
    }

    pub fn OnSectionCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SectionHandleDoubleClicked(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_SectionHandleDoubleClicked(@ptrCast(self), logicalIndex);
    }

    pub fn OnSectionHandleDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionHandleDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn GeometriesChanged(self: ?*anyopaque, ) void {
        qtc.QHeaderView_GeometriesChanged(@ptrCast(self));
    }

    pub fn OnGeometriesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_Connect_GeometriesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SortIndicatorChanged(self: ?*anyopaque, logicalIndex: i32, order: i32) void {
        qtc.QHeaderView_SortIndicatorChanged(@ptrCast(self), logicalIndex, @intCast(order));
    }

    pub fn OnSortIndicatorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SortIndicatorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SortIndicatorClearableChanged(self: ?*anyopaque, clearable: bool) void {
        qtc.QHeaderView_SortIndicatorClearableChanged(@ptrCast(self), clearable);
    }

    pub fn OnSortIndicatorClearableChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SortIndicatorClearableChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UpdateSection(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_UpdateSection(@ptrCast(self), logicalIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateSection(self: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_QBaseUpdateSection(@ptrCast(self), logicalIndex);
    }

    pub fn ResizeSections2(self: ?*anyopaque, ) void {
        qtc.QHeaderView_ResizeSections2(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeSections2(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnResizeSections2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeSections2(self: ?*anyopaque, ) void {
        qtc.QHeaderView_QBaseResizeSections2(@ptrCast(self));
    }

    pub fn SectionsInserted(self: ?*anyopaque, parent: ?*anyopaque, logicalFirst: i32, logicalLast: i32) void {
        qtc.QHeaderView_SectionsInserted(@ptrCast(self), @ptrCast(parent), logicalFirst, logicalLast);
    }

    /// Allows for overriding the related default method
    pub fn OnSectionsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSectionsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSectionsInserted(self: ?*anyopaque, parent: ?*anyopaque, logicalFirst: i32, logicalLast: i32) void {
        qtc.QHeaderView_QBaseSectionsInserted(@ptrCast(self), @ptrCast(parent), logicalFirst, logicalLast);
    }

    pub fn SectionsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, logicalFirst: i32, logicalLast: i32) void {
        qtc.QHeaderView_SectionsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), logicalFirst, logicalLast);
    }

    /// Allows for overriding the related default method
    pub fn OnSectionsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSectionsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSectionsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, logicalFirst: i32, logicalLast: i32) void {
        qtc.QHeaderView_QBaseSectionsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), logicalFirst, logicalLast);
    }

    pub fn Initialize(self: ?*anyopaque, ) void {
        qtc.QHeaderView_Initialize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitialize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnInitialize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitialize(self: ?*anyopaque, ) void {
        qtc.QHeaderView_QBaseInitialize(@ptrCast(self));
    }

    pub fn InitializeSections(self: ?*anyopaque, ) void {
        qtc.QHeaderView_InitializeSections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeSections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnInitializeSections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeSections(self: ?*anyopaque, ) void {
        qtc.QHeaderView_QBaseInitializeSections(@ptrCast(self));
    }

    pub fn InitializeSections2(self: ?*anyopaque, start: i32, end: i32) void {
        qtc.QHeaderView_InitializeSections2(@ptrCast(self), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeSections2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnInitializeSections2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeSections2(self: ?*anyopaque, start: i32, end: i32) void {
        qtc.QHeaderView_QBaseInitializeSections2(@ptrCast(self), start, end);
    }

    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, old: ?*anyopaque) void {
        qtc.QHeaderView_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(old));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnCurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, old: ?*anyopaque) void {
        qtc.QHeaderView_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(old));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QHeaderView_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHeaderView_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QHeaderView_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHeaderView_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ViewportEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QHeaderView_ViewportEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHeaderView_OnViewportEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QHeaderView_QBaseViewportEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintSection(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_PaintSection(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), logicalIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnPaintSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnPaintSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintSection(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_QBasePaintSection(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), logicalIndex);
    }

    pub fn SectionSizeFromContents(self: ?*anyopaque, logicalIndex: i32) QtC.QSize {
        return qtc.QHeaderView_SectionSizeFromContents(@ptrCast(self), logicalIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnSectionSizeFromContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QSize) void {
        qtc.QHeaderView_OnSectionSizeFromContents(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSectionSizeFromContents(self: ?*anyopaque, logicalIndex: i32) QtC.QSize {
        return qtc.QHeaderView_QBaseSectionSizeFromContents(@ptrCast(self), logicalIndex);
    }

    pub fn HorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_HorizontalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QHeaderView_OnHorizontalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHorizontalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_QBaseHorizontalOffset(@ptrCast(self));
    }

    pub fn VerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_VerticalOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QHeaderView_OnVerticalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVerticalOffset(self: ?*anyopaque, ) i32 {
        return qtc.QHeaderView_QBaseVerticalOffset(@ptrCast(self));
    }

    pub fn UpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QHeaderView_UpdateGeometries(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateGeometries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateGeometries(self: ?*anyopaque, ) void {
        qtc.QHeaderView_QBaseUpdateGeometries(@ptrCast(self));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QHeaderView_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QHeaderView_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QHeaderView_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    /// Allows for overriding the related default method
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QHeaderView_OnDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []const u8) void {
        qtc.QHeaderView_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), @ptrCast(roles));
    }

    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QHeaderView_RowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    /// Allows for overriding the related default method
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnRowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QHeaderView_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), start, end);
    }

    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QHeaderView_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QHeaderView_OnVisualRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QHeaderView_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QHeaderView_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Allows for overriding the related default method
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnScrollTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QHeaderView_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    pub fn IndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QHeaderView_IndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QHeaderView_OnIndexAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QHeaderView_QBaseIndexAt(@ptrCast(self), @ptrCast(p));
    }

    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QHeaderView_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHeaderView_OnIsIndexHidden(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QHeaderView_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    pub fn MoveCursor(self: ?*anyopaque, param1: i32, param2: i64) QtC.QModelIndex {
        return qtc.QHeaderView_MoveCursor(@ptrCast(self), @intCast(param1), @intCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QHeaderView_OnMoveCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveCursor(self: ?*anyopaque, param1: i32, param2: i64) QtC.QModelIndex {
        return qtc.QHeaderView_QBaseMoveCursor(@ptrCast(self), @intCast(param1), @intCast(param2));
    }

    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, flags: i32) void {
        qtc.QHeaderView_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, flags: i32) void {
        qtc.QHeaderView_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(flags));
    }

    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QHeaderView_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Allows for overriding the related default method
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QHeaderView_OnVisualRegionForSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QHeaderView_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    pub fn InitStyleOptionForIndex(self: ?*anyopaque, option: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_InitStyleOptionForIndex(@ptrCast(self), @ptrCast(option), logicalIndex);
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOptionForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnInitStyleOptionForIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOptionForIndex(self: ?*anyopaque, option: ?*anyopaque, logicalIndex: i32) void {
        qtc.QHeaderView_QBaseInitStyleOptionForIndex(@ptrCast(self), @ptrCast(option), logicalIndex);
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QHeaderView_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHeaderView_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QHeaderView_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHeaderView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHeaderView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHeaderView_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/headerview.html#types
pub const enums = struct {
    pub const ResizeMode = enum {
        pub const Interactive: i32 = 0;
        pub const Stretch: i32 = 1;
        pub const Fixed: i32 = 2;
        pub const ResizeToContents: i32 = 3;
        pub const Custom: i32 = 2;
    };

};
