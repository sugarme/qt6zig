const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qkeysequenceedit.html
pub const qkeysequenceedit = struct {

    /// New constructs a new QKeySequenceEdit object.
    pub fn New(parent: ?*anyopaque) QtC.QKeySequenceEdit {
        return qtc.QKeySequenceEdit_new(@ptrCast(parent));
    }


    /// New2 constructs a new QKeySequenceEdit object.
    pub fn New2() QtC.QKeySequenceEdit {
        return qtc.QKeySequenceEdit_new2();
    }


    /// New3 constructs a new QKeySequenceEdit object.
    pub fn New3(keySequence: ?*anyopaque) QtC.QKeySequenceEdit {
        return qtc.QKeySequenceEdit_new3(@ptrCast(keySequence));
    }


    /// New4 constructs a new QKeySequenceEdit object.
    pub fn New4(keySequence: ?*anyopaque, parent: ?*anyopaque) QtC.QKeySequenceEdit {
        return qtc.QKeySequenceEdit_new4(@ptrCast(keySequence), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QKeySequenceEdit_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequenceedit.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn KeySequence(self: ?*anyopaque, ) QtC.QKeySequence {
        return qtc.QKeySequenceEdit_KeySequence(@ptrCast(self));
    }

    pub fn MaximumSequenceLength(self: ?*anyopaque, ) i64 {
        return qtc.QKeySequenceEdit_MaximumSequenceLength(@ptrCast(self));
    }

    pub fn SetClearButtonEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QKeySequenceEdit_SetClearButtonEnabled(@ptrCast(self), enable);
    }

    pub fn IsClearButtonEnabled(self: ?*anyopaque, ) bool {
        return qtc.QKeySequenceEdit_IsClearButtonEnabled(@ptrCast(self));
    }

    pub fn SetFinishingKeyCombinations(self: ?*anyopaque, finishingKeyCombinations: []const u8) void {
        qtc.QKeySequenceEdit_SetFinishingKeyCombinations(@ptrCast(self), @ptrCast(finishingKeyCombinations));
    }

    pub fn FinishingKeyCombinations(self: ?*anyopaque, ) []const u8 {
        return qtc.QKeySequenceEdit_FinishingKeyCombinations(@ptrCast(self));
    }

    pub fn SetKeySequence(self: ?*anyopaque, keySequence: ?*anyopaque) void {
        qtc.QKeySequenceEdit_SetKeySequence(@ptrCast(self), @ptrCast(keySequence));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QKeySequenceEdit_Clear(@ptrCast(self));
    }

    pub fn SetMaximumSequenceLength(self: ?*anyopaque, count: i64) void {
        qtc.QKeySequenceEdit_SetMaximumSequenceLength(@ptrCast(self), count);
    }

    pub fn EditingFinished(self: ?*anyopaque, ) void {
        qtc.QKeySequenceEdit_EditingFinished(@ptrCast(self));
    }

    pub fn OnEditingFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QKeySequenceEdit_Connect_EditingFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn KeySequenceChanged(self: ?*anyopaque, keySequence: ?*anyopaque) void {
        qtc.QKeySequenceEdit_KeySequenceChanged(@ptrCast(self), @ptrCast(keySequence));
    }

    pub fn OnKeySequenceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QKeySequenceEdit_Connect_KeySequenceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QKeySequenceEdit_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QKeySequenceEdit_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QKeySequenceEdit_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QKeySequenceEdit_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QKeySequenceEdit_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QKeySequenceEdit_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QKeySequenceEdit_KeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QKeySequenceEdit_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QKeySequenceEdit_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QKeySequenceEdit_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QKeySequenceEdit_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QKeySequenceEdit_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QKeySequenceEdit_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QKeySequenceEdit_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QKeySequenceEdit_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QKeySequenceEdit_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequenceedit.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QKeySequenceEdit_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequenceedit.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QKeySequenceEdit_Delete(@ptrCast(self));
    }
};
