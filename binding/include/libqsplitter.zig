const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsplitter.html
pub const qsplitter = struct {

    /// New constructs a new QSplitter object.
    pub fn New(parent: ?*anyopaque) QtC.QSplitter {
        return qtc.QSplitter_new(@ptrCast(parent));
    }


    /// New2 constructs a new QSplitter object.
    pub fn New2() QtC.QSplitter {
        return qtc.QSplitter_new2();
    }


    /// New3 constructs a new QSplitter object.
    pub fn New3(param1: i32) QtC.QSplitter {
        return qtc.QSplitter_new3(@intCast(param1));
    }


    /// New4 constructs a new QSplitter object.
    pub fn New4(param1: i32, parent: ?*anyopaque) QtC.QSplitter {
        return qtc.QSplitter_new4(@intCast(param1), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplitter_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplitter.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QSplitter_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        qtc.QSplitter_InsertWidget(@ptrCast(self), index, @ptrCast(widget));
    }

    pub fn ReplaceWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) QtC.QWidget {
        return qtc.QSplitter_ReplaceWidget(@ptrCast(self), index, @ptrCast(widget));
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QSplitter_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QSplitter_Orientation(@ptrCast(self));
    }

    pub fn SetChildrenCollapsible(self: ?*anyopaque, childrenCollapsible: bool) void {
        qtc.QSplitter_SetChildrenCollapsible(@ptrCast(self), childrenCollapsible);
    }

    pub fn ChildrenCollapsible(self: ?*anyopaque, ) bool {
        return qtc.QSplitter_ChildrenCollapsible(@ptrCast(self));
    }

    pub fn SetCollapsible(self: ?*anyopaque, index: i32, param2: bool) void {
        qtc.QSplitter_SetCollapsible(@ptrCast(self), index, param2);
    }

    pub fn IsCollapsible(self: ?*anyopaque, index: i32) bool {
        return qtc.QSplitter_IsCollapsible(@ptrCast(self), index);
    }

    pub fn SetOpaqueResize(self: ?*anyopaque, ) void {
        qtc.QSplitter_SetOpaqueResize(@ptrCast(self));
    }

    pub fn OpaqueResize(self: ?*anyopaque, ) bool {
        return qtc.QSplitter_OpaqueResize(@ptrCast(self));
    }

    pub fn Refresh(self: ?*anyopaque, ) void {
        qtc.QSplitter_Refresh(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSplitter_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSplitter_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSplitter_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSplitter_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSplitter_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSplitter_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn Sizes(self: ?*anyopaque, ) []const u8 {
        return qtc.QSplitter_Sizes(@ptrCast(self));
    }

    pub fn SetSizes(self: ?*anyopaque, list: []const u8) void {
        qtc.QSplitter_SetSizes(@ptrCast(self), @ptrCast(list));
    }

    pub fn SaveState(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSplitter_SaveState(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsplitter.SaveState: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RestoreState(self: ?*anyopaque, state: []u8) bool {
        const state_str = qtc.libqt_string{
    .len = state.len,
    .data = state.ptr,
};
return qtc.QSplitter_RestoreState(@ptrCast(self), state_str);
    }

    pub fn HandleWidth(self: ?*anyopaque, ) i32 {
        return qtc.QSplitter_HandleWidth(@ptrCast(self));
    }

    pub fn SetHandleWidth(self: ?*anyopaque, handleWidth: i32) void {
        qtc.QSplitter_SetHandleWidth(@ptrCast(self), handleWidth);
    }

    pub fn IndexOf(self: ?*anyopaque, w: ?*anyopaque) i32 {
        return qtc.QSplitter_IndexOf(@ptrCast(self), @ptrCast(w));
    }

    pub fn Widget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QSplitter_Widget(@ptrCast(self), index);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QSplitter_Count(@ptrCast(self));
    }

    pub fn GetRange(self: ?*anyopaque, index: i32, param2: *i32, param3: *i32) void {
        qtc.QSplitter_GetRange(@ptrCast(self), index, @ptrCast(param2), @ptrCast(param3));
    }

    pub fn Handle(self: ?*anyopaque, index: i32) QtC.QSplitterHandle {
        return qtc.QSplitter_Handle(@ptrCast(self), index);
    }

    pub fn SetStretchFactor(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QSplitter_SetStretchFactor(@ptrCast(self), index, stretch);
    }

    pub fn SplitterMoved(self: ?*anyopaque, pos: i32, index: i32) void {
        qtc.QSplitter_SplitterMoved(@ptrCast(self), pos, index);
    }

    pub fn OnSplitterMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSplitter_Connect_SplitterMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CreateHandle(self: ?*anyopaque, ) QtC.QSplitterHandle {
        return qtc.QSplitter_CreateHandle(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateHandle(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSplitterHandle) void {
        qtc.QSplitter_OnCreateHandle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateHandle(self: ?*anyopaque, ) QtC.QSplitterHandle {
        return qtc.QSplitter_QBaseCreateHandle(@ptrCast(self));
    }

    pub fn ChildEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitter_ChildEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplitter_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitter_QBaseChildEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QSplitter_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSplitter_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QSplitter_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitter_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplitter_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitter_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitter_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplitter_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitter_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MoveSplitter(self: ?*anyopaque, pos: i32, index: i32) void {
        qtc.QSplitter_MoveSplitter(@ptrCast(self), pos, index);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveSplitter(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSplitter_OnMoveSplitter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveSplitter(self: ?*anyopaque, pos: i32, index: i32) void {
        qtc.QSplitter_QBaseMoveSplitter(@ptrCast(self), pos, index);
    }

    pub fn SetRubberBand(self: ?*anyopaque, position: i32) void {
        qtc.QSplitter_SetRubberBand(@ptrCast(self), position);
    }

    /// Allows for overriding the related default method
    pub fn OnSetRubberBand(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSplitter_OnSetRubberBand(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRubberBand(self: ?*anyopaque, position: i32) void {
        qtc.QSplitter_QBaseSetRubberBand(@ptrCast(self), position);
    }

    pub fn ClosestLegalPosition(self: ?*anyopaque, param1: i32, param2: i32) i32 {
        return qtc.QSplitter_ClosestLegalPosition(@ptrCast(self), param1, param2);
    }

    /// Allows for overriding the related default method
    pub fn OnClosestLegalPosition(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) i32) void {
        qtc.QSplitter_OnClosestLegalPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClosestLegalPosition(self: ?*anyopaque, param1: i32, param2: i32) i32 {
        return qtc.QSplitter_QBaseClosestLegalPosition(@ptrCast(self), param1, param2);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplitter_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplitter.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplitter_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplitter.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOpaqueResize1(self: ?*anyopaque, opaqueVal: bool) void {
        qtc.QSplitter_SetOpaqueResize1(@ptrCast(self), opaqueVal);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSplitter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsplitterhandle.html
pub const qsplitterhandle = struct {

    /// New constructs a new QSplitterHandle object.
    pub fn New(o: i32, parent: ?*anyopaque) QtC.QSplitterHandle {
        return qtc.QSplitterHandle_new(@intCast(o), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplitterHandle_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplitterhandle.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOrientation(self: ?*anyopaque, o: i32) void {
        qtc.QSplitterHandle_SetOrientation(@ptrCast(self), @intCast(o));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QSplitterHandle_Orientation(@ptrCast(self));
    }

    pub fn OpaqueResize(self: ?*anyopaque, ) bool {
        return qtc.QSplitterHandle_OpaqueResize(@ptrCast(self));
    }

    pub fn Splitter(self: ?*anyopaque, ) QtC.QSplitter {
        return qtc.QSplitterHandle_Splitter(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSplitterHandle_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSplitterHandle_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSplitterHandle_QBaseSizeHint(@ptrCast(self));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplitterHandle_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplitterHandle_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplitterHandle_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplitterHandle_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSplitterHandle_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSplitterHandle_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QSplitterHandle_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSplitterHandle_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QSplitterHandle_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MoveSplitter(self: ?*anyopaque, p: i32) void {
        qtc.QSplitterHandle_MoveSplitter(@ptrCast(self), p);
    }

    /// Allows for overriding the related default method
    pub fn OnMoveSplitter(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSplitterHandle_OnMoveSplitter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMoveSplitter(self: ?*anyopaque, p: i32) void {
        qtc.QSplitterHandle_QBaseMoveSplitter(@ptrCast(self), p);
    }

    pub fn ClosestLegalPosition(self: ?*anyopaque, p: i32) i32 {
        return qtc.QSplitterHandle_ClosestLegalPosition(@ptrCast(self), p);
    }

    /// Allows for overriding the related default method
    pub fn OnClosestLegalPosition(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSplitterHandle_OnClosestLegalPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClosestLegalPosition(self: ?*anyopaque, p: i32) i32 {
        return qtc.QSplitterHandle_QBaseClosestLegalPosition(@ptrCast(self), p);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplitterHandle_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplitterhandle.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSplitterHandle_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplitterhandle.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSplitterHandle_Delete(@ptrCast(self));
    }
};
