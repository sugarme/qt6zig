const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qactiongroup.html
pub const qactiongroup = struct {

    /// New constructs a new QActionGroup object.
    pub fn New(parent: ?*anyopaque) QtC.QActionGroup {
        return qtc.QActionGroup_new(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QActionGroup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qactiongroup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddAction(self: ?*anyopaque, a: ?*anyopaque) QtC.QAction {
        return qtc.QActionGroup_AddAction(@ptrCast(self), @ptrCast(a));
    }

    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QActionGroup_AddAction2(@ptrCast(self), text_str);
    }

    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QActionGroup_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    pub fn RemoveAction(self: ?*anyopaque, a: ?*anyopaque) void {
        qtc.QActionGroup_RemoveAction(@ptrCast(self), @ptrCast(a));
    }

    pub fn Actions(self: ?*anyopaque, ) []const u8 {
        return qtc.QActionGroup_Actions(@ptrCast(self));
    }

    pub fn CheckedAction(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QActionGroup_CheckedAction(@ptrCast(self));
    }

    pub fn IsExclusive(self: ?*anyopaque, ) bool {
        return qtc.QActionGroup_IsExclusive(@ptrCast(self));
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QActionGroup_IsEnabled(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QActionGroup_IsVisible(@ptrCast(self));
    }

    pub fn ExclusionPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QActionGroup_ExclusionPolicy(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QActionGroup_SetEnabled(@ptrCast(self), enabled);
    }

    pub fn SetDisabled(self: ?*anyopaque, b: bool) void {
        qtc.QActionGroup_SetDisabled(@ptrCast(self), b);
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QActionGroup_SetVisible(@ptrCast(self), visible);
    }

    pub fn SetExclusive(self: ?*anyopaque, exclusive: bool) void {
        qtc.QActionGroup_SetExclusive(@ptrCast(self), exclusive);
    }

    pub fn SetExclusionPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QActionGroup_SetExclusionPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn Triggered(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QActionGroup_Triggered(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QActionGroup_Connect_Triggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QActionGroup_Hovered(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QActionGroup_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QActionGroup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qactiongroup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QActionGroup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qactiongroup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QActionGroup_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/actiongroup.html#types
pub const enums = struct {
};
