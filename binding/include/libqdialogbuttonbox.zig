const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdialogbuttonbox.html
pub const qdialogbuttonbox = struct {

    /// New constructs a new QDialogButtonBox object.
    pub fn New(parent: ?*anyopaque) QtC.QDialogButtonBox {
        return qtc.QDialogButtonBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QDialogButtonBox object.
    pub fn New2() QtC.QDialogButtonBox {
        return qtc.QDialogButtonBox_new2();
    }


    /// New3 constructs a new QDialogButtonBox object.
    pub fn New3(orientation: i32) QtC.QDialogButtonBox {
        return qtc.QDialogButtonBox_new3(@intCast(orientation));
    }


    /// New4 constructs a new QDialogButtonBox object.
    pub fn New4(buttons: i32) QtC.QDialogButtonBox {
        return qtc.QDialogButtonBox_new4(@intCast(buttons));
    }


    /// New5 constructs a new QDialogButtonBox object.
    pub fn New5(buttons: i32, orientation: i32) QtC.QDialogButtonBox {
        return qtc.QDialogButtonBox_new5(@intCast(buttons), @intCast(orientation));
    }


    /// New6 constructs a new QDialogButtonBox object.
    pub fn New6(orientation: i32, parent: ?*anyopaque) QtC.QDialogButtonBox {
        return qtc.QDialogButtonBox_new6(@intCast(orientation), @ptrCast(parent));
    }


    /// New7 constructs a new QDialogButtonBox object.
    pub fn New7(buttons: i32, parent: ?*anyopaque) QtC.QDialogButtonBox {
        return qtc.QDialogButtonBox_new7(@intCast(buttons), @ptrCast(parent));
    }


    /// New8 constructs a new QDialogButtonBox object.
    pub fn New8(buttons: i32, orientation: i32, parent: ?*anyopaque) QtC.QDialogButtonBox {
        return qtc.QDialogButtonBox_new8(@intCast(buttons), @intCast(orientation), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDialogButtonBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdialogbuttonbox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QDialogButtonBox_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QDialogButtonBox_Orientation(@ptrCast(self));
    }

    pub fn AddButton(self: ?*anyopaque, button: ?*anyopaque, role: i32) void {
        qtc.QDialogButtonBox_AddButton(@ptrCast(self), @ptrCast(button), @intCast(role));
    }

    pub fn AddButton2(self: ?*anyopaque, text: []const u8, role: i32) QtC.QPushButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QDialogButtonBox_AddButton2(@ptrCast(self), text_str, @intCast(role));
    }

    pub fn AddButton3(self: ?*anyopaque, button: i32) QtC.QPushButton {
        return qtc.QDialogButtonBox_AddButton3(@ptrCast(self), @intCast(button));
    }

    pub fn RemoveButton(self: ?*anyopaque, button: ?*anyopaque) void {
        qtc.QDialogButtonBox_RemoveButton(@ptrCast(self), @ptrCast(button));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QDialogButtonBox_Clear(@ptrCast(self));
    }

    pub fn Buttons(self: ?*anyopaque, ) []const u8 {
        return qtc.QDialogButtonBox_Buttons(@ptrCast(self));
    }

    pub fn ButtonRole(self: ?*anyopaque, button: ?*anyopaque) i32 {
        return qtc.QDialogButtonBox_ButtonRole(@ptrCast(self), @ptrCast(button));
    }

    pub fn SetStandardButtons(self: ?*anyopaque, buttons: i32) void {
        qtc.QDialogButtonBox_SetStandardButtons(@ptrCast(self), @intCast(buttons));
    }

    pub fn StandardButtons(self: ?*anyopaque, ) i32 {
        return qtc.QDialogButtonBox_StandardButtons(@ptrCast(self));
    }

    pub fn StandardButton(self: ?*anyopaque, button: ?*anyopaque) i32 {
        return qtc.QDialogButtonBox_StandardButton(@ptrCast(self), @ptrCast(button));
    }

    pub fn Button(self: ?*anyopaque, which: i32) QtC.QPushButton {
        return qtc.QDialogButtonBox_Button(@ptrCast(self), @intCast(which));
    }

    pub fn SetCenterButtons(self: ?*anyopaque, center: bool) void {
        qtc.QDialogButtonBox_SetCenterButtons(@ptrCast(self), center);
    }

    pub fn CenterButtons(self: ?*anyopaque, ) bool {
        return qtc.QDialogButtonBox_CenterButtons(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, button: ?*anyopaque) void {
        qtc.QDialogButtonBox_Clicked(@ptrCast(self), @ptrCast(button));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDialogButtonBox_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Accepted(self: ?*anyopaque, ) void {
        qtc.QDialogButtonBox_Accepted(@ptrCast(self));
    }

    pub fn OnAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDialogButtonBox_Connect_Accepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HelpRequested(self: ?*anyopaque, ) void {
        qtc.QDialogButtonBox_HelpRequested(@ptrCast(self));
    }

    pub fn OnHelpRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDialogButtonBox_Connect_HelpRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Rejected(self: ?*anyopaque, ) void {
        qtc.QDialogButtonBox_Rejected(@ptrCast(self));
    }

    pub fn OnRejected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDialogButtonBox_Connect_Rejected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDialogButtonBox_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDialogButtonBox_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDialogButtonBox_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDialogButtonBox_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDialogButtonBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDialogButtonBox_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDialogButtonBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdialogbuttonbox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDialogButtonBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdialogbuttonbox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDialogButtonBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/dialogbuttonbox.html#types
pub const enums = struct {
    pub const ButtonRole = enum {
        pub const InvalidRole: i32 = -1;
        pub const AcceptRole: i32 = 0;
        pub const RejectRole: i32 = 1;
        pub const DestructiveRole: i32 = 2;
        pub const ActionRole: i32 = 3;
        pub const HelpRole: i32 = 4;
        pub const YesRole: i32 = 5;
        pub const NoRole: i32 = 6;
        pub const ResetRole: i32 = 7;
        pub const ApplyRole: i32 = 8;
        pub const NRoles: i32 = 9;
    };

    pub const StandardButton = enum {
        pub const NoButton: i32 = 0;
        pub const Ok: i32 = 1024;
        pub const Save: i32 = 2048;
        pub const SaveAll: i32 = 4096;
        pub const Open: i32 = 8192;
        pub const Yes: i32 = 16384;
        pub const YesToAll: i32 = 32768;
        pub const No: i32 = 65536;
        pub const NoToAll: i32 = 131072;
        pub const Abort: i32 = 262144;
        pub const Retry: i32 = 524288;
        pub const Ignore: i32 = 1048576;
        pub const Close: i32 = 2097152;
        pub const Cancel: i32 = 4194304;
        pub const Discard: i32 = 8388608;
        pub const Help: i32 = 16777216;
        pub const Apply: i32 = 33554432;
        pub const Reset: i32 = 67108864;
        pub const RestoreDefaults: i32 = 134217728;
        pub const FirstButton: i32 = 1024;
        pub const LastButton: i32 = 134217728;
    };

    pub const ButtonLayout = enum {
        pub const WinLayout: i32 = 0;
        pub const MacLayout: i32 = 1;
        pub const KdeLayout: i32 = 2;
        pub const GnomeLayout: i32 = 3;
        pub const AndroidLayout: i32 = 4;
    };

};
