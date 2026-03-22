const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwhatsthis.html
pub const qwhatsthis = struct {

    /// New constructs a new QWhatsThis object.
    pub fn New(other: ?*anyopaque) QtC.QWhatsThis {
        return qtc.QWhatsThis_new(@ptrCast(other));
    }


    /// New2 constructs a new QWhatsThis object.
    pub fn New2(other: ?*anyopaque) QtC.QWhatsThis {
        return qtc.QWhatsThis_new2(@ptrCast(other));
    }


    /// New3 constructs a new QWhatsThis object.
    pub fn New3(param1: ?*anyopaque) QtC.QWhatsThis {
        return qtc.QWhatsThis_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWhatsThis_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWhatsThis_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn EnterWhatsThisMode() void {
        qtc.QWhatsThis_EnterWhatsThisMode();
    }

    pub fn InWhatsThisMode() bool {
        return qtc.QWhatsThis_InWhatsThisMode();
    }

    pub fn LeaveWhatsThisMode() void {
        qtc.QWhatsThis_LeaveWhatsThisMode();
    }

    pub fn ShowText(pos: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QWhatsThis_ShowText(@ptrCast(pos), text_str);
    }

    pub fn HideText() void {
        qtc.QWhatsThis_HideText();
    }

    pub fn CreateAction() QtC.QAction {
        return qtc.QWhatsThis_CreateAction();
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWhatsThis_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ShowText3(pos: ?*anyopaque, text: []const u8, w: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QWhatsThis_ShowText3(@ptrCast(pos), text_str, @ptrCast(w));
    }

    pub fn CreateAction1(parent: ?*anyopaque) QtC.QAction {
        return qtc.QWhatsThis_CreateAction1(@ptrCast(parent));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWhatsThis_Delete(@ptrCast(self));
    }
};
