const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcompleter.html
pub const qcompleter = struct {

    /// New constructs a new QCompleter object.
    pub fn New() QtC.QCompleter {
        return qtc.QCompleter_new();
    }


    /// New2 constructs a new QCompleter object.
    pub fn New2(model: ?*anyopaque) QtC.QCompleter {
        return qtc.QCompleter_new2(@ptrCast(model));
    }


    /// New3 constructs a new QCompleter object.
    pub fn New3(completions: []const u8) QtC.QCompleter {
        return qtc.QCompleter_new3(@ptrCast(completions));
    }


    /// New4 constructs a new QCompleter object.
    pub fn New4(parent: ?*anyopaque) QtC.QCompleter {
        return qtc.QCompleter_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QCompleter object.
    pub fn New5(model: ?*anyopaque, parent: ?*anyopaque) QtC.QCompleter {
        return qtc.QCompleter_new5(@ptrCast(model), @ptrCast(parent));
    }


    /// New6 constructs a new QCompleter object.
    pub fn New6(completions: []const u8, parent: ?*anyopaque) QtC.QCompleter {
        return qtc.QCompleter_new6(@ptrCast(completions), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCompleter_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCompleter_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QCompleter_Widget(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QCompleter_SetModel(@ptrCast(self), @ptrCast(c));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QCompleter_Model(@ptrCast(self));
    }

    pub fn SetCompletionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCompleter_SetCompletionMode(@ptrCast(self), @intCast(mode));
    }

    pub fn CompletionMode(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_CompletionMode(@ptrCast(self));
    }

    pub fn SetFilterMode(self: ?*anyopaque, filterMode: i32) void {
        qtc.QCompleter_SetFilterMode(@ptrCast(self), @intCast(filterMode));
    }

    pub fn FilterMode(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_FilterMode(@ptrCast(self));
    }

    pub fn Popup(self: ?*anyopaque, ) QtC.QAbstractItemView {
        return qtc.QCompleter_Popup(@ptrCast(self));
    }

    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.QCompleter_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    pub fn SetCaseSensitivity(self: ?*anyopaque, caseSensitivity: i32) void {
        qtc.QCompleter_SetCaseSensitivity(@ptrCast(self), @intCast(caseSensitivity));
    }

    pub fn CaseSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_CaseSensitivity(@ptrCast(self));
    }

    pub fn SetModelSorting(self: ?*anyopaque, sorting: i32) void {
        qtc.QCompleter_SetModelSorting(@ptrCast(self), @intCast(sorting));
    }

    pub fn ModelSorting(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_ModelSorting(@ptrCast(self));
    }

    pub fn SetCompletionColumn(self: ?*anyopaque, column: i32) void {
        qtc.QCompleter_SetCompletionColumn(@ptrCast(self), column);
    }

    pub fn CompletionColumn(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_CompletionColumn(@ptrCast(self));
    }

    pub fn SetCompletionRole(self: ?*anyopaque, role: i32) void {
        qtc.QCompleter_SetCompletionRole(@ptrCast(self), role);
    }

    pub fn CompletionRole(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_CompletionRole(@ptrCast(self));
    }

    pub fn WrapAround(self: ?*anyopaque, ) bool {
        return qtc.QCompleter_WrapAround(@ptrCast(self));
    }

    pub fn MaxVisibleItems(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_MaxVisibleItems(@ptrCast(self));
    }

    pub fn SetMaxVisibleItems(self: ?*anyopaque, maxItems: i32) void {
        qtc.QCompleter_SetMaxVisibleItems(@ptrCast(self), maxItems);
    }

    pub fn CompletionCount(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_CompletionCount(@ptrCast(self));
    }

    pub fn SetCurrentRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QCompleter_SetCurrentRow(@ptrCast(self), row);
    }

    pub fn CurrentRow(self: ?*anyopaque, ) i32 {
        return qtc.QCompleter_CurrentRow(@ptrCast(self));
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QCompleter_CurrentIndex(@ptrCast(self));
    }

    pub fn CurrentCompletion(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCompleter_CurrentCompletion(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.CurrentCompletion: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CompletionModel(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QCompleter_CompletionModel(@ptrCast(self));
    }

    pub fn CompletionPrefix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCompleter_CompletionPrefix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.CompletionPrefix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCompletionPrefix(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
qtc.QCompleter_SetCompletionPrefix(@ptrCast(self), prefix_str);
    }

    pub fn Complete(self: ?*anyopaque, ) void {
        qtc.QCompleter_Complete(@ptrCast(self));
    }

    pub fn SetWrapAround(self: ?*anyopaque, wrap: bool) void {
        qtc.QCompleter_SetWrapAround(@ptrCast(self), wrap);
    }

    pub fn PathFromIndex(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCompleter_PathFromIndex(@ptrCast(self), @ptrCast(index));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.PathFromIndex: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnPathFromIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QCompleter_OnPathFromIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePathFromIndex(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCompleter_QBasePathFromIndex(@ptrCast(self), @ptrCast(index));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.PathFromIndex: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SplitPath(self: ?*anyopaque, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QCompleter_SplitPath(@ptrCast(self), path_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSplitPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QCompleter_OnSplitPath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSplitPath(self: ?*anyopaque, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QCompleter_QBaseSplitPath(@ptrCast(self), path_str);
    }

    pub fn EventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QCompleter_EventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCompleter_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QCompleter_QBaseEventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCompleter_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCompleter_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCompleter_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Activated(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QCompleter_Activated(@ptrCast(self), text_str);
    }

    pub fn Activated2(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QCompleter_Activated2(@ptrCast(self), @ptrCast(index));
    }

    pub fn Highlighted(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QCompleter_Highlighted(@ptrCast(self), text_str);
    }

    pub fn Highlighted2(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QCompleter_Highlighted2(@ptrCast(self), @ptrCast(index));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCompleter_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCompleter_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Complete1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QCompleter_Complete1(@ptrCast(self), @ptrCast(rect));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCompleter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/completer.html#types
pub const enums = struct {
    pub const CompletionMode = enum {
        pub const PopupCompletion: i32 = 0;
        pub const UnfilteredPopupCompletion: i32 = 1;
        pub const InlineCompletion: i32 = 2;
    };

    pub const ModelSorting = enum {
        pub const UnsortedModel: i32 = 0;
        pub const CaseSensitivelySortedModel: i32 = 1;
        pub const CaseInsensitivelySortedModel: i32 = 2;
    };

};
