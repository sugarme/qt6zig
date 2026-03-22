const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaccessiblewidget.html
pub const qaccessiblewidget = struct {

    /// New constructs a new QAccessibleWidget object.
    pub fn New(o: ?*anyopaque) QtC.QAccessibleWidget {
        return qtc.QAccessibleWidget_new(@ptrCast(o));
    }


    /// New2 constructs a new QAccessibleWidget object.
    pub fn New2(o: ?*anyopaque, r: i32) QtC.QAccessibleWidget {
        return qtc.QAccessibleWidget_new2(@ptrCast(o), @intCast(r));
    }


    /// New3 constructs a new QAccessibleWidget object.
    pub fn New3(o: ?*anyopaque, r: i32, name: []const u8) QtC.QAccessibleWidget {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QAccessibleWidget_new3(@ptrCast(o), @intCast(r), name_str);
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleWidget_IsValid(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsValid(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleWidget_OnIsValid(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsValid(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleWidget_QBaseIsValid(@ptrCast(self));
    }

    pub fn Window(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QAccessibleWidget_Window(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QWindow) void {
        qtc.QAccessibleWidget_OnWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWindow(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QAccessibleWidget_QBaseWindow(@ptrCast(self));
    }

    pub fn ChildCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleWidget_ChildCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnChildCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnChildCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleWidget_QBaseChildCount(@ptrCast(self));
    }

    pub fn IndexOfChild(self: ?*anyopaque, child: ?*anyopaque) i32 {
        return qtc.QAccessibleWidget_IndexOfChild(@ptrCast(self), @ptrCast(child));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexOfChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnIndexOfChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexOfChild(self: ?*anyopaque, child: ?*anyopaque) i32 {
        return qtc.QAccessibleWidget_QBaseIndexOfChild(@ptrCast(self), @ptrCast(child));
    }

    pub fn Relations(self: ?*anyopaque, match: i64) []const u8 {
        return qtc.QAccessibleWidget_Relations(@ptrCast(self), @intCast(match));
    }

    /// Allows for overriding the related default method
    pub fn OnRelations(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnRelations(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRelations(self: ?*anyopaque, match: i64) []const u8 {
        return qtc.QAccessibleWidget_QBaseRelations(@ptrCast(self), @intCast(match));
    }

    pub fn FocusChild(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_FocusChild(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusChild(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnFocusChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusChild(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_QBaseFocusChild(@ptrCast(self));
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QAccessibleWidget_Rect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QAccessibleWidget_OnRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QAccessibleWidget_QBaseRect(@ptrCast(self));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_Parent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_QBaseParent(@ptrCast(self));
    }

    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_Child(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChild(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_QBaseChild(@ptrCast(self), index);
    }

    pub fn Text(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleWidget_Text(@ptrCast(self), @intCast(t));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseText(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleWidget_QBaseText(@ptrCast(self), @intCast(t));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Role(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleWidget_Role(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRole(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnRole(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRole(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleWidget_QBaseRole(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) QtC.QAccessible__State {
        return qtc.QAccessibleWidget_State(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessible__State) void {
        qtc.QAccessibleWidget_OnState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseState(self: ?*anyopaque, ) QtC.QAccessible__State {
        return qtc.QAccessibleWidget_QBaseState(@ptrCast(self));
    }

    pub fn ForegroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAccessibleWidget_ForegroundColor(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnForegroundColor(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QColor) void {
        qtc.QAccessibleWidget_OnForegroundColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseForegroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAccessibleWidget_QBaseForegroundColor(@ptrCast(self));
    }

    pub fn BackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAccessibleWidget_BackgroundColor(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBackgroundColor(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QColor) void {
        qtc.QAccessibleWidget_OnBackgroundColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAccessibleWidget_QBaseBackgroundColor(@ptrCast(self));
    }

    pub fn InterfaceCast(self: ?*anyopaque, t: i32) ?*anyopaque {
        return qtc.QAccessibleWidget_InterfaceCast(@ptrCast(self), @intCast(t));
    }

    /// Allows for overriding the related default method
    pub fn OnInterfaceCast(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleWidget_OnInterfaceCast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInterfaceCast(self: ?*anyopaque, t: i32) ?*anyopaque {
        return qtc.QAccessibleWidget_QBaseInterfaceCast(@ptrCast(self), @intCast(t));
    }

    pub fn ActionNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleWidget_ActionNames(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnActionNames(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnActionNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseActionNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QAccessibleWidget_QBaseActionNames(@ptrCast(self));
    }

    pub fn DoAction(self: ?*anyopaque, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
    .len = actionName.len,
    .data = actionName.ptr,
};
qtc.QAccessibleWidget_DoAction(@ptrCast(self), actionName_str);
    }

    /// Allows for overriding the related default method
    pub fn OnDoAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnDoAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDoAction(self: ?*anyopaque, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
    .len = actionName.len,
    .data = actionName.ptr,
};
qtc.QAccessibleWidget_QBaseDoAction(@ptrCast(self), actionName_str);
    }

    pub fn KeyBindingsForAction(self: ?*anyopaque, actionName: []const u8) []const u8 {
        const actionName_str = qtc.libqt_string{
    .len = actionName.len,
    .data = actionName.ptr,
};
return qtc.QAccessibleWidget_KeyBindingsForAction(@ptrCast(self), actionName_str);
    }

    /// Allows for overriding the related default method
    pub fn OnKeyBindingsForAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnKeyBindingsForAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyBindingsForAction(self: ?*anyopaque, actionName: []const u8) []const u8 {
        const actionName_str = qtc.libqt_string{
    .len = actionName.len,
    .data = actionName.ptr,
};
return qtc.QAccessibleWidget_QBaseKeyBindingsForAction(@ptrCast(self), actionName_str);
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QAccessibleWidget_Widget(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QAccessibleWidget_OnWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QAccessibleWidget_QBaseWidget(@ptrCast(self));
    }

    pub fn ParentObject(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QAccessibleWidget_ParentObject(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnParentObject(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QObject) void {
        qtc.QAccessibleWidget_OnParentObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParentObject(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QAccessibleWidget_QBaseParentObject(@ptrCast(self));
    }

    pub fn AddControllingSignal(self: ?*anyopaque, signal: []const u8) void {
        const signal_str = qtc.libqt_string{
    .len = signal.len,
    .data = signal.ptr,
};
qtc.QAccessibleWidget_AddControllingSignal(@ptrCast(self), signal_str);
    }

    /// Allows for overriding the related default method
    pub fn OnAddControllingSignal(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnAddControllingSignal(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddControllingSignal(self: ?*anyopaque, signal: []const u8) void {
        const signal_str = qtc.libqt_string{
    .len = signal.len,
    .data = signal.ptr,
};
qtc.QAccessibleWidget_QBaseAddControllingSignal(@ptrCast(self), signal_str);
    }
};
