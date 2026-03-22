const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaccessibleobject.html
pub const qaccessibleobject = struct {

    /// New constructs a new QAccessibleObject object.
    pub fn New(object: ?*anyopaque) QtC.QAccessibleObject {
        return qtc.QAccessibleObject_new(@ptrCast(object));
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleObject_IsValid(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsValid(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QAccessibleObject_OnIsValid(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsValid(self: ?*anyopaque, ) bool {
        return qtc.QAccessibleObject_QBaseIsValid(@ptrCast(self));
    }

    pub fn Object(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QAccessibleObject_Object(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnObject(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QObject) void {
        qtc.QAccessibleObject_OnObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseObject(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QAccessibleObject_QBaseObject(@ptrCast(self));
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QAccessibleObject_Rect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QAccessibleObject_OnRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QAccessibleObject_QBaseRect(@ptrCast(self));
    }

    pub fn SetText(self: ?*anyopaque, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAccessibleObject_SetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleObject_OnSetText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetText(self: ?*anyopaque, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QAccessibleObject_QBaseSetText(@ptrCast(self), @intCast(t), text_str);
    }

    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_ChildAt(@ptrCast(self), x, y);
    }

    /// Allows for overriding the related default method
    pub fn OnChildAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChildAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_QBaseChildAt(@ptrCast(self), x, y);
    }
};

/// https://doc.qt.io/qt-6/qaccessibleapplication.html
pub const qaccessibleapplication = struct {

    /// New constructs a new QAccessibleApplication object.
    pub fn New() QtC.QAccessibleApplication {
        return qtc.QAccessibleApplication_new();
    }


    pub fn Window(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QAccessibleApplication_Window(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QWindow) void {
        qtc.QAccessibleApplication_OnWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWindow(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QAccessibleApplication_QBaseWindow(@ptrCast(self));
    }

    pub fn ChildCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleApplication_ChildCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnChildCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnChildCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildCount(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleApplication_QBaseChildCount(@ptrCast(self));
    }

    pub fn IndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_IndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnIndexOfChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnIndexOfChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_QBaseIndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FocusChild(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_FocusChild(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusChild(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnFocusChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusChild(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_QBaseFocusChild(@ptrCast(self));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_Parent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, ) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_QBaseParent(@ptrCast(self));
    }

    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_Child(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChild(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_QBaseChild(@ptrCast(self), index);
    }

    pub fn Text(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleApplication_Text(@ptrCast(self), @intCast(t));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleapplication.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleApplication_OnText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseText(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleApplication_QBaseText(@ptrCast(self), @intCast(t));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleapplication.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Role(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleApplication_Role(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRole(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnRole(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRole(self: ?*anyopaque, ) i32 {
        return qtc.QAccessibleApplication_QBaseRole(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) QtC.QAccessible__State {
        return qtc.QAccessibleApplication_State(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAccessible__State) void {
        qtc.QAccessibleApplication_OnState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseState(self: ?*anyopaque, ) QtC.QAccessible__State {
        return qtc.QAccessibleApplication_QBaseState(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleApplication_Delete(@ptrCast(self));
    }
};
