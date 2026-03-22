const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdialog.html
pub const qdialog = struct {

    /// New constructs a new QDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QDialog {
        return qtc.QDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QDialog object.
    pub fn New2() QtC.QDialog {
        return qtc.QDialog_new2();
    }


    /// New3 constructs a new QDialog object.
    pub fn New3(parent: ?*anyopaque, f: i64) QtC.QDialog {
        return qtc.QDialog_new3(@ptrCast(parent), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Result(self: ?*anyopaque, ) i32 {
        return qtc.QDialog_Result(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QDialog_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDialog_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QDialog_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDialog_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QDialog_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDialog_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDialog_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QDialog_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDialog_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SetSizeGripEnabled(self: ?*anyopaque, sizeGripEnabled: bool) void {
        qtc.QDialog_SetSizeGripEnabled(@ptrCast(self), sizeGripEnabled);
    }

    pub fn IsSizeGripEnabled(self: ?*anyopaque, ) bool {
        return qtc.QDialog_IsSizeGripEnabled(@ptrCast(self));
    }

    pub fn SetModal(self: ?*anyopaque, modal: bool) void {
        qtc.QDialog_SetModal(@ptrCast(self), modal);
    }

    pub fn SetResult(self: ?*anyopaque, r: i32) void {
        qtc.QDialog_SetResult(@ptrCast(self), r);
    }

    pub fn Finished(self: ?*anyopaque, result: i32) void {
        qtc.QDialog_Finished(@ptrCast(self), result);
    }

    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDialog_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Accepted(self: ?*anyopaque, ) void {
        qtc.QDialog_Accepted(@ptrCast(self));
    }

    pub fn OnAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_Connect_Accepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Rejected(self: ?*anyopaque, ) void {
        qtc.QDialog_Rejected(@ptrCast(self));
    }

    pub fn OnRejected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_Connect_Rejected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Open(self: ?*anyopaque, ) void {
        qtc.QDialog_Open(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, ) void {
        qtc.QDialog_QBaseOpen(@ptrCast(self));
    }

    pub fn Exec(self: ?*anyopaque, ) i32 {
        return qtc.QDialog_Exec(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExec(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QDialog_OnExec(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExec(self: ?*anyopaque, ) i32 {
        return qtc.QDialog_QBaseExec(@ptrCast(self));
    }

    pub fn Done(self: ?*anyopaque, param1: i32) void {
        qtc.QDialog_Done(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDialog_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, param1: i32) void {
        qtc.QDialog_QBaseDone(@ptrCast(self), param1);
    }

    pub fn Accept(self: ?*anyopaque, ) void {
        qtc.QDialog_Accept(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAccept(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnAccept(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAccept(self: ?*anyopaque, ) void {
        qtc.QDialog_QBaseAccept(@ptrCast(self));
    }

    pub fn Reject(self: ?*anyopaque, ) void {
        qtc.QDialog_Reject(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReject(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnReject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReject(self: ?*anyopaque, ) void {
        qtc.QDialog_QBaseReject(@ptrCast(self));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn CloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_CloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_QBaseCloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QDialog_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDialog_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QDialog_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn AdjustPosition(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_AdjustPosition(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnAdjustPosition(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDialog_OnAdjustPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAdjustPosition(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDialog_QBaseAdjustPosition(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDialog_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/dialog.html#types
pub const enums = struct {
    pub const DialogCode = enum {
        pub const Rejected: i32 = 0;
        pub const Accepted: i32 = 1;
    };

};
