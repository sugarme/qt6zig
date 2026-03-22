const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsystemtrayicon.html
pub const qsystemtrayicon = struct {

    /// New constructs a new QSystemTrayIcon object.
    pub fn New() QtC.QSystemTrayIcon {
        return qtc.QSystemTrayIcon_new();
    }


    /// New2 constructs a new QSystemTrayIcon object.
    pub fn New2(icon: ?*anyopaque) QtC.QSystemTrayIcon {
        return qtc.QSystemTrayIcon_new2(@ptrCast(icon));
    }


    /// New3 constructs a new QSystemTrayIcon object.
    pub fn New3(parent: ?*anyopaque) QtC.QSystemTrayIcon {
        return qtc.QSystemTrayIcon_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QSystemTrayIcon object.
    pub fn New4(icon: ?*anyopaque, parent: ?*anyopaque) QtC.QSystemTrayIcon {
        return qtc.QSystemTrayIcon_new4(@ptrCast(icon), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSystemTrayIcon_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetContextMenu(self: ?*anyopaque, menu: ?*anyopaque) void {
        qtc.QSystemTrayIcon_SetContextMenu(@ptrCast(self), @ptrCast(menu));
    }

    pub fn ContextMenu(self: ?*anyopaque, ) QtC.QMenu {
        return qtc.QSystemTrayIcon_ContextMenu(@ptrCast(self));
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QSystemTrayIcon_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QSystemTrayIcon_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn ToolTip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSystemTrayIcon_ToolTip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.ToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
    .len = tip.len,
    .data = tip.ptr,
};
qtc.QSystemTrayIcon_SetToolTip(@ptrCast(self), tip_str);
    }

    pub fn IsSystemTrayAvailable() bool {
        return qtc.QSystemTrayIcon_IsSystemTrayAvailable();
    }

    pub fn SupportsMessages() bool {
        return qtc.QSystemTrayIcon_SupportsMessages();
    }

    pub fn Geometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QSystemTrayIcon_Geometry(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QSystemTrayIcon_IsVisible(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QSystemTrayIcon_SetVisible(@ptrCast(self), visible);
    }

    pub fn Show(self: ?*anyopaque, ) void {
        qtc.QSystemTrayIcon_Show(@ptrCast(self));
    }

    pub fn Hide(self: ?*anyopaque, ) void {
        qtc.QSystemTrayIcon_Hide(@ptrCast(self));
    }

    pub fn ShowMessage(self: ?*anyopaque, title: []const u8, msg: []const u8, icon: ?*anyopaque) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const msg_str = qtc.libqt_string{
    .len = msg.len,
    .data = msg.ptr,
};
qtc.QSystemTrayIcon_ShowMessage(@ptrCast(self), title_str, msg_str, @ptrCast(icon));
    }

    pub fn ShowMessage2(self: ?*anyopaque, title: []const u8, msg: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const msg_str = qtc.libqt_string{
    .len = msg.len,
    .data = msg.ptr,
};
qtc.QSystemTrayIcon_ShowMessage2(@ptrCast(self), title_str, msg_str);
    }

    pub fn Activated(self: ?*anyopaque, reason: i32) void {
        qtc.QSystemTrayIcon_Activated(@ptrCast(self), @intCast(reason));
    }

    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSystemTrayIcon_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MessageClicked(self: ?*anyopaque, ) void {
        qtc.QSystemTrayIcon_MessageClicked(@ptrCast(self));
    }

    pub fn OnMessageClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSystemTrayIcon_Connect_MessageClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSystemTrayIcon_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSystemTrayIcon_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSystemTrayIcon_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSystemTrayIcon_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSystemTrayIcon_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShowMessage4(self: ?*anyopaque, title: []const u8, msg: []const u8, icon: ?*anyopaque, msecs: i32) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const msg_str = qtc.libqt_string{
    .len = msg.len,
    .data = msg.ptr,
};
qtc.QSystemTrayIcon_ShowMessage4(@ptrCast(self), title_str, msg_str, @ptrCast(icon), msecs);
    }

    pub fn ShowMessage3(self: ?*anyopaque, title: []const u8, msg: []const u8, icon: i32) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const msg_str = qtc.libqt_string{
    .len = msg.len,
    .data = msg.ptr,
};
qtc.QSystemTrayIcon_ShowMessage3(@ptrCast(self), title_str, msg_str, @intCast(icon));
    }

    pub fn ShowMessage42(self: ?*anyopaque, title: []const u8, msg: []const u8, icon: i32, msecs: i32) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const msg_str = qtc.libqt_string{
    .len = msg.len,
    .data = msg.ptr,
};
qtc.QSystemTrayIcon_ShowMessage42(@ptrCast(self), title_str, msg_str, @intCast(icon), msecs);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSystemTrayIcon_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/systemtrayicon.html#types
pub const enums = struct {
    pub const ActivationReason = enum {
        pub const Unknown: i32 = 0;
        pub const Context: i32 = 1;
        pub const DoubleClick: i32 = 2;
        pub const Trigger: i32 = 3;
        pub const MiddleClick: i32 = 4;
    };

    pub const MessageIcon = enum {
        pub const NoIcon: i32 = 0;
        pub const Information: i32 = 1;
        pub const Warning: i32 = 2;
        pub const Critical: i32 = 3;
    };

};
