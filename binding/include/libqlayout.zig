const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlayout.html
pub const qlayout = struct {

    /// New constructs a new QLayout object.
    pub fn New(parent: ?*anyopaque) QtC.QLayout {
        return qtc.QLayout_new(@ptrCast(parent));
    }


    /// New2 constructs a new QLayout object.
    pub fn New2() QtC.QLayout {
        return qtc.QLayout_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Spacing(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_Spacing(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_QBaseSpacing(@ptrCast(self));
    }

    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QLayout_SetSpacing(@ptrCast(self), spacing);
    }

    /// Allows for overriding the related default method
    pub fn OnSetSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLayout_OnSetSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QLayout_QBaseSetSpacing(@ptrCast(self), spacing);
    }

    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), left, top, right, bottom);
    }

    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    pub fn UnsetContentsMargins(self: ?*anyopaque, ) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    pub fn GetContentsMargins(self: ?*anyopaque, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    pub fn ContentsMargins(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    pub fn ContentsRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i32) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i32) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    pub fn SizeConstraint(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    pub fn MenuBar(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    pub fn ParentWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QLayout_QBaseInvalidate(@ptrCast(self));
    }

    pub fn Geometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QLayout_Geometry(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QLayout_OnGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QLayout_QBaseGeometry(@ptrCast(self));
    }

    pub fn Activate(self: ?*anyopaque, ) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    pub fn Update(self: ?*anyopaque, ) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnAddItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnExpandingDirections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayout_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLayout_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayout_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayout_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLayout_OnMaximumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayout_QBaseMaximumSize(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_ItemAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnItemAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_QBaseItemAt(@ptrCast(self), index);
    }

    pub fn TakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_TakeAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnTakeAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnTakeAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_QBaseTakeAt(@ptrCast(self), index);
    }

    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexOf(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexOf2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_QBaseCount(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QLayout_IsEmpty(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnIsEmpty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QLayout_QBaseIsEmpty(@ptrCast(self));
    }

    pub fn ControlTypes(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_ControlTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnControlTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseControlTypes(self: ?*anyopaque, ) i32 {
        return qtc.QLayout_QBaseControlTypes(@ptrCast(self));
    }

    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i32) QtC.QLayoutItem {
        return qtc.QLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Allows for overriding the related default method
    pub fn OnReplaceWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnReplaceWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i32) QtC.QLayoutItem {
        return qtc.QLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), w);
    }

    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), w);
    }

    pub fn TotalMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    pub fn TotalMaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    pub fn TotalSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    pub fn Layout(self: ?*anyopaque, ) QtC.QLayout {
        return qtc.QLayout_Layout(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QLayout) void {
        qtc.QLayout_OnLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLayout(self: ?*anyopaque, ) QtC.QLayout {
        return qtc.QLayout_QBaseLayout(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self));
    }

    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnWidgetEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnWidgetEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Allows for overriding the related default method
    pub fn OnAddChildLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddChildLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    pub fn OnAddChildWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddChildWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Allows for overriding the related default method
    pub fn OnAdoptLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnAdoptLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnAlignmentRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QLayout_OnAlignmentRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/layout.html#types
pub const enums = struct {
    pub const SizeConstraint = enum {
        pub const SetDefaultConstraint: i32 = 0;
        pub const SetNoConstraint: i32 = 1;
        pub const SetMinimumSize: i32 = 2;
        pub const SetFixedSize: i32 = 3;
        pub const SetMaximumSize: i32 = 4;
        pub const SetMinAndMaxSize: i32 = 5;
    };

};
