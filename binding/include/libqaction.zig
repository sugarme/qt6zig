const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaction.html
pub const qaction = struct {

    /// New constructs a new QAction object.
    pub fn New() QtC.QAction {
        return qtc.QAction_new();
    }


    /// New2 constructs a new QAction object.
    pub fn New2(text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAction_new2(text_str);
    }


    /// New3 constructs a new QAction object.
    pub fn New3(icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAction_new3(@ptrCast(icon), text_str);
    }


    /// New4 constructs a new QAction object.
    pub fn New4(parent: ?*anyopaque) QtC.QAction {
        return qtc.QAction_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QAction object.
    pub fn New5(text: []const u8, parent: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAction_new5(text_str, @ptrCast(parent));
    }


    /// New6 constructs a new QAction object.
    pub fn New6(icon: ?*anyopaque, text: []const u8, parent: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QAction_new6(@ptrCast(icon), text_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaction.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AssociatedObjects(self: ?*anyopaque, ) []const u8 {
        return qtc.QAction_AssociatedObjects(@ptrCast(self));
    }

    pub fn SetActionGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QAction_SetActionGroup(@ptrCast(self), @ptrCast(group));
    }

    pub fn ActionGroup(self: ?*anyopaque, ) QtC.QActionGroup {
        return qtc.QAction_ActionGroup(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QAction_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QAction_Icon(@ptrCast(self));
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAction_SetText(@ptrCast(self), text_str);
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaction.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetIconText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAction_SetIconText(@ptrCast(self), text_str);
    }

    pub fn IconText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_IconText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaction.IconText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
    .len = tip.len,
    .data = tip.ptr,
};
qtc.QAction_SetToolTip(@ptrCast(self), tip_str);
    }

    pub fn ToolTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_ToolTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaction.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
    .len = statusTip.len,
    .data = statusTip.ptr,
};
qtc.QAction_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    pub fn StatusTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_StatusTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaction.StatusTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWhatsThis(self: ?*anyopaque, what: []const u8) void {
        const what_str = qtc.libqt_string{
    .len = what.len,
    .data = what.ptr,
};
qtc.QAction_SetWhatsThis(@ptrCast(self), what_str);
    }

    pub fn WhatsThis(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_WhatsThis(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaction.WhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPriority(self: ?*anyopaque, priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self), @intCast(priority));
    }

    pub fn Priority(self: ?*anyopaque, ) i32 {
        return qtc.QAction_Priority(@ptrCast(self));
    }

    pub fn SetSeparator(self: ?*anyopaque, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self), b);
    }

    pub fn IsSeparator(self: ?*anyopaque, ) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self));
    }

    pub fn SetShortcut(self: ?*anyopaque, shortcut: ?*anyopaque) void {
        qtc.QAction_SetShortcut(@ptrCast(self), @ptrCast(shortcut));
    }

    pub fn Shortcut(self: ?*anyopaque, ) QtC.QKeySequence {
        return qtc.QAction_Shortcut(@ptrCast(self));
    }

    pub fn SetShortcuts(self: ?*anyopaque, shortcuts: []const u8) void {
        qtc.QAction_SetShortcuts(@ptrCast(self), @ptrCast(shortcuts));
    }

    pub fn SetShortcuts2(self: ?*anyopaque, shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self), @intCast(shortcuts));
    }

    pub fn Shortcuts(self: ?*anyopaque, ) []const u8 {
        return qtc.QAction_Shortcuts(@ptrCast(self));
    }

    pub fn SetShortcutContext(self: ?*anyopaque, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self), @intCast(context));
    }

    pub fn ShortcutContext(self: ?*anyopaque, ) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self));
    }

    pub fn SetAutoRepeat(self: ?*anyopaque, autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self), autoRepeat);
    }

    pub fn AutoRepeat(self: ?*anyopaque, ) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAction_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QAction_Font(@ptrCast(self));
    }

    pub fn SetCheckable(self: ?*anyopaque, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self), checkable);
    }

    pub fn IsCheckable(self: ?*anyopaque, ) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QAction_Data(@ptrCast(self));
    }

    pub fn SetData(self: ?*anyopaque, varVal: ?*anyopaque) void {
        qtc.QAction_SetData(@ptrCast(self), @ptrCast(varVal));
    }

    pub fn IsChecked(self: ?*anyopaque, ) bool {
        return qtc.QAction_IsChecked(@ptrCast(self));
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QAction_IsVisible(@ptrCast(self));
    }

    pub fn Activate(self: ?*anyopaque, event: i32) void {
        qtc.QAction_Activate(@ptrCast(self), @intCast(event));
    }

    pub fn SetMenuRole(self: ?*anyopaque, menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self), @intCast(menuRole));
    }

    pub fn MenuRole(self: ?*anyopaque, ) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self));
    }

    pub fn SetIconVisibleInMenu(self: ?*anyopaque, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self), visible);
    }

    pub fn IsIconVisibleInMenu(self: ?*anyopaque, ) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self));
    }

    pub fn SetShortcutVisibleInContextMenu(self: ?*anyopaque, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self), show);
    }

    pub fn IsShortcutVisibleInContextMenu(self: ?*anyopaque, ) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self));
    }

    pub fn ShowStatusText(self: ?*anyopaque, ) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QAction_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAction_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QAction_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Trigger(self: ?*anyopaque, ) void {
        qtc.QAction_Trigger(@ptrCast(self));
    }

    pub fn Hover(self: ?*anyopaque, ) void {
        qtc.QAction_Hover(@ptrCast(self));
    }

    pub fn SetChecked(self: ?*anyopaque, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self), checked);
    }

    pub fn Toggle(self: ?*anyopaque, ) void {
        qtc.QAction_Toggle(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self), enabled);
    }

    pub fn ResetEnabled(self: ?*anyopaque, ) void {
        qtc.QAction_ResetEnabled(@ptrCast(self));
    }

    pub fn SetDisabled(self: ?*anyopaque, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self), b);
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self), visible);
    }

    pub fn Changed(self: ?*anyopaque, ) void {
        qtc.QAction_Changed(@ptrCast(self));
    }

    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self), enabled);
    }

    pub fn OnEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CheckableChanged(self: ?*anyopaque, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self), checkable);
    }

    pub fn OnCheckableChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibleChanged(self: ?*anyopaque, ) void {
        qtc.QAction_VisibleChanged(@ptrCast(self));
    }

    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Triggered(self: ?*anyopaque, ) void {
        qtc.QAction_Triggered(@ptrCast(self));
    }

    pub fn OnTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, ) void {
        qtc.QAction_Hovered(@ptrCast(self));
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Toggled(self: ?*anyopaque, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self), param1);
    }

    pub fn OnToggled(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaction.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaction.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShowStatusText1(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QAction_ShowStatusText1(@ptrCast(self), @ptrCast(object));
    }

    pub fn Triggered1(self: ?*anyopaque, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self), checked);
    }

    pub fn OnTriggered1(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAction_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/action.html#types
pub const enums = struct {
};
