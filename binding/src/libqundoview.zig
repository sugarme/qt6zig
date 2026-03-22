const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qundoview.html
pub const qundoview = struct {

    /// New constructs a new QUndoView object.
    pub fn New(parent: ?*anyopaque) QtC.QUndoView {
        return qtc.QUndoView_new(@ptrCast(parent));
    }


    /// New2 constructs a new QUndoView object.
    pub fn New2() QtC.QUndoView {
        return qtc.QUndoView_new2();
    }


    /// New3 constructs a new QUndoView object.
    pub fn New3(stack: ?*anyopaque) QtC.QUndoView {
        return qtc.QUndoView_new3(@ptrCast(stack));
    }


    /// New4 constructs a new QUndoView object.
    pub fn New4(group: ?*anyopaque) QtC.QUndoView {
        return qtc.QUndoView_new4(@ptrCast(group));
    }


    /// New5 constructs a new QUndoView object.
    pub fn New5(stack: ?*anyopaque, parent: ?*anyopaque) QtC.QUndoView {
        return qtc.QUndoView_new5(@ptrCast(stack), @ptrCast(parent));
    }


    /// New6 constructs a new QUndoView object.
    pub fn New6(group: ?*anyopaque, parent: ?*anyopaque) QtC.QUndoView {
        return qtc.QUndoView_new6(@ptrCast(group), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundoview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Stack(self: ?*anyopaque, ) QtC.QUndoStack {
        return qtc.QUndoView_Stack(@ptrCast(self));
    }

    pub fn Group(self: ?*anyopaque, ) QtC.QUndoGroup {
        return qtc.QUndoView_Group(@ptrCast(self));
    }

    pub fn SetEmptyLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QUndoView_SetEmptyLabel(@ptrCast(self), label_str);
    }

    pub fn EmptyLabel(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoView_EmptyLabel(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundoview.EmptyLabel: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCleanIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QUndoView_SetCleanIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn CleanIcon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QUndoView_CleanIcon(@ptrCast(self));
    }

    pub fn SetStack(self: ?*anyopaque, stack: ?*anyopaque) void {
        qtc.QUndoView_SetStack(@ptrCast(self), @ptrCast(stack));
    }

    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QUndoView_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundoview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundoview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUndoView_Delete(@ptrCast(self));
    }
};
