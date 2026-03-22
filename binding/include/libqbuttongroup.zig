const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbuttongroup.html
pub const qbuttongroup = struct {

    /// New constructs a new QButtonGroup object.
    pub fn New() QtC.QButtonGroup {
        return qtc.QButtonGroup_new();
    }


    /// New2 constructs a new QButtonGroup object.
    pub fn New2(parent: ?*anyopaque) QtC.QButtonGroup {
        return qtc.QButtonGroup_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QButtonGroup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbuttongroup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetExclusive(self: ?*anyopaque, exclusive: bool) void {
        qtc.QButtonGroup_SetExclusive(@ptrCast(self), exclusive);
    }

    pub fn Exclusive(self: ?*anyopaque, ) bool {
        return qtc.QButtonGroup_Exclusive(@ptrCast(self));
    }

    pub fn AddButton(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QButtonGroup_AddButton(@ptrCast(self), @ptrCast(param1));
    }

    pub fn RemoveButton(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QButtonGroup_RemoveButton(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Buttons(self: ?*anyopaque, ) []const u8 {
        return qtc.QButtonGroup_Buttons(@ptrCast(self));
    }

    pub fn CheckedButton(self: ?*anyopaque, ) QtC.QAbstractButton {
        return qtc.QButtonGroup_CheckedButton(@ptrCast(self));
    }

    pub fn Button(self: ?*anyopaque, id: i32) QtC.QAbstractButton {
        return qtc.QButtonGroup_Button(@ptrCast(self), id);
    }

    pub fn SetId(self: ?*anyopaque, button: ?*anyopaque, id: i32) void {
        qtc.QButtonGroup_SetId(@ptrCast(self), @ptrCast(button), id);
    }

    pub fn Id(self: ?*anyopaque, button: ?*anyopaque) i32 {
        return qtc.QButtonGroup_Id(@ptrCast(self), @ptrCast(button));
    }

    pub fn CheckedId(self: ?*anyopaque, ) i32 {
        return qtc.QButtonGroup_CheckedId(@ptrCast(self));
    }

    pub fn ButtonClicked(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QButtonGroup_ButtonClicked(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnButtonClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_ButtonClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ButtonPressed(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QButtonGroup_ButtonPressed(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnButtonPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_ButtonPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ButtonReleased(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QButtonGroup_ButtonReleased(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnButtonReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_ButtonReleased(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ButtonToggled(self: ?*anyopaque, param1: ?*anyopaque, param2: bool) void {
        qtc.QButtonGroup_ButtonToggled(@ptrCast(self), @ptrCast(param1), param2);
    }

    pub fn OnButtonToggled(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_ButtonToggled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IdClicked(self: ?*anyopaque, param1: i32) void {
        qtc.QButtonGroup_IdClicked(@ptrCast(self), param1);
    }

    pub fn OnIdClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_IdClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IdPressed(self: ?*anyopaque, param1: i32) void {
        qtc.QButtonGroup_IdPressed(@ptrCast(self), param1);
    }

    pub fn OnIdPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_IdPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IdReleased(self: ?*anyopaque, param1: i32) void {
        qtc.QButtonGroup_IdReleased(@ptrCast(self), param1);
    }

    pub fn OnIdReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_IdReleased(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IdToggled(self: ?*anyopaque, param1: i32, param2: bool) void {
        qtc.QButtonGroup_IdToggled(@ptrCast(self), param1, param2);
    }

    pub fn OnIdToggled(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_IdToggled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QButtonGroup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbuttongroup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QButtonGroup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbuttongroup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddButton2(self: ?*anyopaque, param1: ?*anyopaque, id: i32) void {
        qtc.QButtonGroup_AddButton2(@ptrCast(self), @ptrCast(param1), id);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QButtonGroup_Delete(@ptrCast(self));
    }
};
