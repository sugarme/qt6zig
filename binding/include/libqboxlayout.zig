const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qboxlayout.html
pub const qboxlayout = struct {

    /// New constructs a new QBoxLayout object.
    pub fn New(param1: i32) QtC.QBoxLayout {
        return qtc.QBoxLayout_new(@intCast(param1));
    }


    /// New2 constructs a new QBoxLayout object.
    pub fn New2(param1: i32, parent: ?*anyopaque) QtC.QBoxLayout {
        return qtc.QBoxLayout_new2(@intCast(param1), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Direction(self: ?*anyopaque, ) i32 {
        return qtc.QBoxLayout_Direction(@ptrCast(self));
    }

    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn AddSpacing(self: ?*anyopaque, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self), size);
    }

    pub fn AddStretch(self: ?*anyopaque, ) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self));
    }

    pub fn AddSpacerItem(self: ?*anyopaque, spacerItem: ?*anyopaque) void {
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self), @ptrCast(spacerItem));
    }

    pub fn AddWidget(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_AddWidget(@ptrCast(self), @ptrCast(param1));
    }

    pub fn AddLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QBoxLayout_AddLayout(@ptrCast(self), @ptrCast(layout));
    }

    pub fn AddStrut(self: ?*anyopaque, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self), param1);
    }

    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnAddItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InsertSpacing(self: ?*anyopaque, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self), index, size);
    }

    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self), index);
    }

    pub fn InsertSpacerItem(self: ?*anyopaque, index: i32, spacerItem: ?*anyopaque) void {
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self), index, @ptrCast(spacerItem));
    }

    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        qtc.QBoxLayout_InsertWidget(@ptrCast(self), index, @ptrCast(widget));
    }

    pub fn InsertLayout(self: ?*anyopaque, index: i32, layout: ?*anyopaque) void {
        qtc.QBoxLayout_InsertLayout(@ptrCast(self), index, @ptrCast(layout));
    }

    pub fn InsertItem(self: ?*anyopaque, index: i32, param2: ?*anyopaque) void {
        qtc.QBoxLayout_InsertItem(@ptrCast(self), index, @ptrCast(param2));
    }

    pub fn Spacing(self: ?*anyopaque, ) i32 {
        return qtc.QBoxLayout_Spacing(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxLayout_OnSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QBoxLayout_QBaseSpacing(@ptrCast(self));
    }

    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QBoxLayout_SetSpacing(@ptrCast(self), spacing);
    }

    /// Allows for overriding the related default method
    pub fn OnSetSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBoxLayout_OnSetSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QBoxLayout_QBaseSetSpacing(@ptrCast(self), spacing);
    }

    pub fn SetStretchFactor(self: ?*anyopaque, w: ?*anyopaque, stretch: i32) bool {
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self), @ptrCast(w), stretch);
    }

    pub fn SetStretchFactor2(self: ?*anyopaque, l: ?*anyopaque, stretch: i32) bool {
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self), @ptrCast(l), stretch);
    }

    pub fn SetStretch(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self), index, stretch);
    }

    pub fn Stretch(self: ?*anyopaque, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self), index);
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QBoxLayout_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QBoxLayout_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QBoxLayout_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QBoxLayout_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QBoxLayout_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QBoxLayout_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn MaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QBoxLayout_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QBoxLayout_OnMaximumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMaximumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QBoxLayout_QBaseMaximumSize(@ptrCast(self));
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QBoxLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QBoxLayout_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QBoxLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBoxLayout_HeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QBoxLayout_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBoxLayout_QBaseHeightForWidth(@ptrCast(self), param1);
    }

    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBoxLayout_MinimumHeightForWidth(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QBoxLayout_OnMinimumHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBoxLayout_QBaseMinimumHeightForWidth(@ptrCast(self), param1);
    }

    pub fn ExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QBoxLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxLayout_OnExpandingDirections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QBoxLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QBoxLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QBoxLayout_QBaseInvalidate(@ptrCast(self));
    }

    pub fn ItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QBoxLayout_ItemAt(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QBoxLayout_OnItemAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QBoxLayout_QBaseItemAt(@ptrCast(self), param1);
    }

    pub fn TakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QBoxLayout_TakeAt(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnTakeAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QBoxLayout_OnTakeAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QBoxLayout_QBaseTakeAt(@ptrCast(self), param1);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QBoxLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QBoxLayout_QBaseCount(@ptrCast(self));
    }

    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QBoxLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self), stretch);
    }

    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), stretch);
    }

    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32, alignment: i32) void {
        qtc.QBoxLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), stretch, @intCast(alignment));
    }

    pub fn AddLayout2(self: ?*anyopaque, layout: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddLayout2(@ptrCast(self), @ptrCast(layout), stretch);
    }

    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self), index, stretch);
    }

    pub fn InsertWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self), index, @ptrCast(widget), stretch);
    }

    pub fn InsertWidget4(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32, alignment: i32) void {
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self), index, @ptrCast(widget), stretch, @intCast(alignment));
    }

    pub fn InsertLayout3(self: ?*anyopaque, index: i32, layout: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self), index, @ptrCast(layout), stretch);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBoxLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhboxlayout.html
pub const qhboxlayout = struct {

    /// New constructs a new QHBoxLayout object.
    pub fn New(parent: ?*anyopaque) QtC.QHBoxLayout {
        return qtc.QHBoxLayout_new(@ptrCast(parent));
    }


    /// New2 constructs a new QHBoxLayout object.
    pub fn New2() QtC.QHBoxLayout {
        return qtc.QHBoxLayout_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBoxLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBoxLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBoxLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHBoxLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvboxlayout.html
pub const qvboxlayout = struct {

    /// New constructs a new QVBoxLayout object.
    pub fn New(parent: ?*anyopaque) QtC.QVBoxLayout {
        return qtc.QVBoxLayout_new(@ptrCast(parent));
    }


    /// New2 constructs a new QVBoxLayout object.
    pub fn New2() QtC.QVBoxLayout {
        return qtc.QVBoxLayout_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVBoxLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVBoxLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVBoxLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVBoxLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/boxlayout.html#types
pub const enums = struct {
    pub const Direction = enum {
        pub const LeftToRight: i32 = 0;
        pub const RightToLeft: i32 = 1;
        pub const TopToBottom: i32 = 2;
        pub const BottomToTop: i32 = 3;
        pub const Down: i32 = 2;
        pub const Up: i32 = 3;
    };

};
