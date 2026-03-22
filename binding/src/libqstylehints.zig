const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstylehints.html
pub const qstylehints = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyleHints_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstylehints.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMouseDoubleClickInterval(self: ?*anyopaque, mouseDoubleClickInterval: i32) void {
        qtc.QStyleHints_SetMouseDoubleClickInterval(@ptrCast(self), mouseDoubleClickInterval);
    }

    pub fn MouseDoubleClickInterval(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_MouseDoubleClickInterval(@ptrCast(self));
    }

    pub fn MouseDoubleClickDistance(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_MouseDoubleClickDistance(@ptrCast(self));
    }

    pub fn TouchDoubleTapDistance(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_TouchDoubleTapDistance(@ptrCast(self));
    }

    pub fn SetMousePressAndHoldInterval(self: ?*anyopaque, mousePressAndHoldInterval: i32) void {
        qtc.QStyleHints_SetMousePressAndHoldInterval(@ptrCast(self), mousePressAndHoldInterval);
    }

    pub fn MousePressAndHoldInterval(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_MousePressAndHoldInterval(@ptrCast(self));
    }

    pub fn SetStartDragDistance(self: ?*anyopaque, startDragDistance: i32) void {
        qtc.QStyleHints_SetStartDragDistance(@ptrCast(self), startDragDistance);
    }

    pub fn StartDragDistance(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_StartDragDistance(@ptrCast(self));
    }

    pub fn SetStartDragTime(self: ?*anyopaque, startDragTime: i32) void {
        qtc.QStyleHints_SetStartDragTime(@ptrCast(self), startDragTime);
    }

    pub fn StartDragTime(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_StartDragTime(@ptrCast(self));
    }

    pub fn StartDragVelocity(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_StartDragVelocity(@ptrCast(self));
    }

    pub fn SetKeyboardInputInterval(self: ?*anyopaque, keyboardInputInterval: i32) void {
        qtc.QStyleHints_SetKeyboardInputInterval(@ptrCast(self), keyboardInputInterval);
    }

    pub fn KeyboardInputInterval(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_KeyboardInputInterval(@ptrCast(self));
    }

    pub fn KeyboardAutoRepeatRate(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_KeyboardAutoRepeatRate(@ptrCast(self));
    }

    pub fn KeyboardAutoRepeatRateF(self: ?*anyopaque, ) f64 {
        return qtc.QStyleHints_KeyboardAutoRepeatRateF(@ptrCast(self));
    }

    pub fn SetCursorFlashTime(self: ?*anyopaque, cursorFlashTime: i32) void {
        qtc.QStyleHints_SetCursorFlashTime(@ptrCast(self), cursorFlashTime);
    }

    pub fn CursorFlashTime(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_CursorFlashTime(@ptrCast(self));
    }

    pub fn ShowIsFullScreen(self: ?*anyopaque, ) bool {
        return qtc.QStyleHints_ShowIsFullScreen(@ptrCast(self));
    }

    pub fn ShowIsMaximized(self: ?*anyopaque, ) bool {
        return qtc.QStyleHints_ShowIsMaximized(@ptrCast(self));
    }

    pub fn ShowShortcutsInContextMenus(self: ?*anyopaque, ) bool {
        return qtc.QStyleHints_ShowShortcutsInContextMenus(@ptrCast(self));
    }

    pub fn SetShowShortcutsInContextMenus(self: ?*anyopaque, showShortcutsInContextMenus: bool) void {
        qtc.QStyleHints_SetShowShortcutsInContextMenus(@ptrCast(self), showShortcutsInContextMenus);
    }

    pub fn ContextMenuTrigger(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_ContextMenuTrigger(@ptrCast(self));
    }

    pub fn SetContextMenuTrigger(self: ?*anyopaque, contextMenuTrigger: i32) void {
        qtc.QStyleHints_SetContextMenuTrigger(@ptrCast(self), @intCast(contextMenuTrigger));
    }

    pub fn PasswordMaskDelay(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_PasswordMaskDelay(@ptrCast(self));
    }

    pub fn PasswordMaskCharacter(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QStyleHints_PasswordMaskCharacter(@ptrCast(self));
    }

    pub fn FontSmoothingGamma(self: ?*anyopaque, ) f64 {
        return qtc.QStyleHints_FontSmoothingGamma(@ptrCast(self));
    }

    pub fn UseRtlExtensions(self: ?*anyopaque, ) bool {
        return qtc.QStyleHints_UseRtlExtensions(@ptrCast(self));
    }

    pub fn SetFocusOnTouchRelease(self: ?*anyopaque, ) bool {
        return qtc.QStyleHints_SetFocusOnTouchRelease(@ptrCast(self));
    }

    pub fn TabFocusBehavior(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_TabFocusBehavior(@ptrCast(self));
    }

    pub fn SetTabFocusBehavior(self: ?*anyopaque, tabFocusBehavior: i32) void {
        qtc.QStyleHints_SetTabFocusBehavior(@ptrCast(self), @intCast(tabFocusBehavior));
    }

    pub fn SingleClickActivation(self: ?*anyopaque, ) bool {
        return qtc.QStyleHints_SingleClickActivation(@ptrCast(self));
    }

    pub fn UseHoverEffects(self: ?*anyopaque, ) bool {
        return qtc.QStyleHints_UseHoverEffects(@ptrCast(self));
    }

    pub fn SetUseHoverEffects(self: ?*anyopaque, useHoverEffects: bool) void {
        qtc.QStyleHints_SetUseHoverEffects(@ptrCast(self), useHoverEffects);
    }

    pub fn WheelScrollLines(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_WheelScrollLines(@ptrCast(self));
    }

    pub fn SetWheelScrollLines(self: ?*anyopaque, scrollLines: i32) void {
        qtc.QStyleHints_SetWheelScrollLines(@ptrCast(self), scrollLines);
    }

    pub fn SetMouseQuickSelectionThreshold(self: ?*anyopaque, threshold: i32) void {
        qtc.QStyleHints_SetMouseQuickSelectionThreshold(@ptrCast(self), threshold);
    }

    pub fn MouseQuickSelectionThreshold(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_MouseQuickSelectionThreshold(@ptrCast(self));
    }

    pub fn ColorScheme(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHints_ColorScheme(@ptrCast(self));
    }

    pub fn SetColorScheme(self: ?*anyopaque, scheme: i32) void {
        qtc.QStyleHints_SetColorScheme(@ptrCast(self), @intCast(scheme));
    }

    pub fn UnsetColorScheme(self: ?*anyopaque, ) void {
        qtc.QStyleHints_UnsetColorScheme(@ptrCast(self));
    }

    pub fn CursorFlashTimeChanged(self: ?*anyopaque, cursorFlashTime: i32) void {
        qtc.QStyleHints_CursorFlashTimeChanged(@ptrCast(self), cursorFlashTime);
    }

    pub fn OnCursorFlashTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_CursorFlashTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn KeyboardInputIntervalChanged(self: ?*anyopaque, keyboardInputInterval: i32) void {
        qtc.QStyleHints_KeyboardInputIntervalChanged(@ptrCast(self), keyboardInputInterval);
    }

    pub fn OnKeyboardInputIntervalChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_KeyboardInputIntervalChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MouseDoubleClickIntervalChanged(self: ?*anyopaque, mouseDoubleClickInterval: i32) void {
        qtc.QStyleHints_MouseDoubleClickIntervalChanged(@ptrCast(self), mouseDoubleClickInterval);
    }

    pub fn OnMouseDoubleClickIntervalChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MouseDoubleClickIntervalChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MousePressAndHoldIntervalChanged(self: ?*anyopaque, mousePressAndHoldInterval: i32) void {
        qtc.QStyleHints_MousePressAndHoldIntervalChanged(@ptrCast(self), mousePressAndHoldInterval);
    }

    pub fn OnMousePressAndHoldIntervalChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MousePressAndHoldIntervalChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StartDragDistanceChanged(self: ?*anyopaque, startDragDistance: i32) void {
        qtc.QStyleHints_StartDragDistanceChanged(@ptrCast(self), startDragDistance);
    }

    pub fn OnStartDragDistanceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_StartDragDistanceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StartDragTimeChanged(self: ?*anyopaque, startDragTime: i32) void {
        qtc.QStyleHints_StartDragTimeChanged(@ptrCast(self), startDragTime);
    }

    pub fn OnStartDragTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_StartDragTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TabFocusBehaviorChanged(self: ?*anyopaque, tabFocusBehavior: i32) void {
        qtc.QStyleHints_TabFocusBehaviorChanged(@ptrCast(self), @intCast(tabFocusBehavior));
    }

    pub fn OnTabFocusBehaviorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_TabFocusBehaviorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UseHoverEffectsChanged(self: ?*anyopaque, useHoverEffects: bool) void {
        qtc.QStyleHints_UseHoverEffectsChanged(@ptrCast(self), useHoverEffects);
    }

    pub fn OnUseHoverEffectsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QStyleHints_Connect_UseHoverEffectsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShowShortcutsInContextMenusChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QStyleHints_ShowShortcutsInContextMenusChanged(@ptrCast(self), param1);
    }

    pub fn OnShowShortcutsInContextMenusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ShowShortcutsInContextMenusChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ContextMenuTriggerChanged(self: ?*anyopaque, contextMenuTrigger: i32) void {
        qtc.QStyleHints_ContextMenuTriggerChanged(@ptrCast(self), @intCast(contextMenuTrigger));
    }

    pub fn OnContextMenuTriggerChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ContextMenuTriggerChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WheelScrollLinesChanged(self: ?*anyopaque, scrollLines: i32) void {
        qtc.QStyleHints_WheelScrollLinesChanged(@ptrCast(self), scrollLines);
    }

    pub fn OnWheelScrollLinesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_WheelScrollLinesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MouseQuickSelectionThresholdChanged(self: ?*anyopaque, threshold: i32) void {
        qtc.QStyleHints_MouseQuickSelectionThresholdChanged(@ptrCast(self), threshold);
    }

    pub fn OnMouseQuickSelectionThresholdChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MouseQuickSelectionThresholdChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorSchemeChanged(self: ?*anyopaque, colorScheme: i32) void {
        qtc.QStyleHints_ColorSchemeChanged(@ptrCast(self), @intCast(colorScheme));
    }

    pub fn OnColorSchemeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ColorSchemeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyleHints_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstylehints.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyleHints_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstylehints.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHints_Delete(@ptrCast(self));
    }
};
