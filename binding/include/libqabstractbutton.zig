const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractbutton.html
pub const qabstractbutton = struct {

    /// New constructs a new QAbstractButton object.
    pub fn New(parent: ?*anyopaque) QtC.QAbstractButton {
        return qtc.QAbstractButton_new(@ptrCast(parent));
    }


    /// New2 constructs a new QAbstractButton object.
    pub fn New2() QtC.QAbstractButton {
        return qtc.QAbstractButton_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractButton_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbutton.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAbstractButton_SetText(@ptrCast(self), text_str);
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractButton_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbutton.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QAbstractButton_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QAbstractButton_Icon(@ptrCast(self));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractButton_IconSize(@ptrCast(self));
    }

    pub fn SetShortcut(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QAbstractButton_SetShortcut(@ptrCast(self), @ptrCast(key));
    }

    pub fn Shortcut(self: ?*anyopaque, ) QtC.QKeySequence {
        return qtc.QAbstractButton_Shortcut(@ptrCast(self));
    }

    pub fn SetCheckable(self: ?*anyopaque, checkable: bool) void {
        qtc.QAbstractButton_SetCheckable(@ptrCast(self), checkable);
    }

    pub fn IsCheckable(self: ?*anyopaque, ) bool {
        return qtc.QAbstractButton_IsCheckable(@ptrCast(self));
    }

    pub fn IsChecked(self: ?*anyopaque, ) bool {
        return qtc.QAbstractButton_IsChecked(@ptrCast(self));
    }

    pub fn SetDown(self: ?*anyopaque, down: bool) void {
        qtc.QAbstractButton_SetDown(@ptrCast(self), down);
    }

    pub fn IsDown(self: ?*anyopaque, ) bool {
        return qtc.QAbstractButton_IsDown(@ptrCast(self));
    }

    pub fn SetAutoRepeat(self: ?*anyopaque, autoRepeat: bool) void {
        qtc.QAbstractButton_SetAutoRepeat(@ptrCast(self), autoRepeat);
    }

    pub fn AutoRepeat(self: ?*anyopaque, ) bool {
        return qtc.QAbstractButton_AutoRepeat(@ptrCast(self));
    }

    pub fn SetAutoRepeatDelay(self: ?*anyopaque, autoRepeatDelay: i32) void {
        qtc.QAbstractButton_SetAutoRepeatDelay(@ptrCast(self), autoRepeatDelay);
    }

    pub fn AutoRepeatDelay(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractButton_AutoRepeatDelay(@ptrCast(self));
    }

    pub fn SetAutoRepeatInterval(self: ?*anyopaque, autoRepeatInterval: i32) void {
        qtc.QAbstractButton_SetAutoRepeatInterval(@ptrCast(self), autoRepeatInterval);
    }

    pub fn AutoRepeatInterval(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractButton_AutoRepeatInterval(@ptrCast(self));
    }

    pub fn SetAutoExclusive(self: ?*anyopaque, autoExclusive: bool) void {
        qtc.QAbstractButton_SetAutoExclusive(@ptrCast(self), autoExclusive);
    }

    pub fn AutoExclusive(self: ?*anyopaque, ) bool {
        return qtc.QAbstractButton_AutoExclusive(@ptrCast(self));
    }

    pub fn Group(self: ?*anyopaque, ) QtC.QButtonGroup {
        return qtc.QAbstractButton_Group(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractButton_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn AnimateClick(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_AnimateClick(@ptrCast(self));
    }

    pub fn Click(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_Click(@ptrCast(self));
    }

    pub fn Toggle(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_Toggle(@ptrCast(self));
    }

    pub fn SetChecked(self: ?*anyopaque, checked: bool) void {
        qtc.QAbstractButton_SetChecked(@ptrCast(self), checked);
    }

    pub fn Pressed(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_Pressed(@ptrCast(self));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_Released(@ptrCast(self));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Clicked(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_Clicked(@ptrCast(self));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Toggled(self: ?*anyopaque, checked: bool) void {
        qtc.QAbstractButton_Toggled(@ptrCast(self), checked);
    }

    pub fn OnToggled(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Toggled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn HitButton(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QAbstractButton_HitButton(@ptrCast(self), @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnHitButton(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractButton_OnHitButton(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitButton(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QAbstractButton_QBaseHitButton(@ptrCast(self), @ptrCast(pos));
    }

    pub fn CheckStateSet(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_CheckStateSet(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCheckStateSet(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnCheckStateSet(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCheckStateSet(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_QBaseCheckStateSet(@ptrCast(self));
    }

    pub fn NextCheckState(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_NextCheckState(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextCheckState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnNextCheckState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextCheckState(self: ?*anyopaque, ) void {
        qtc.QAbstractButton_QBaseNextCheckState(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QAbstractButton_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractButton_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QAbstractButton_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_KeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_FocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseFocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractButton_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractButton_QBaseTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractButton_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbutton.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractButton_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbutton.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Clicked1(self: ?*anyopaque, checked: bool) void {
        qtc.QAbstractButton_Clicked1(@ptrCast(self), checked);
    }

    pub fn OnClicked1(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Clicked1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractButton_Delete(@ptrCast(self));
    }
};
