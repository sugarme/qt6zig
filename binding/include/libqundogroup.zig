const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qundogroup.html
pub const qundogroup = struct {

    /// New constructs a new QUndoGroup object.
    pub fn New() QtC.QUndoGroup {
        return qtc.QUndoGroup_new();
    }


    /// New2 constructs a new QUndoGroup object.
    pub fn New2(parent: ?*anyopaque) QtC.QUndoGroup {
        return qtc.QUndoGroup_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoGroup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddStack(self: ?*anyopaque, stack: ?*anyopaque) void {
        qtc.QUndoGroup_AddStack(@ptrCast(self), @ptrCast(stack));
    }

    pub fn RemoveStack(self: ?*anyopaque, stack: ?*anyopaque) void {
        qtc.QUndoGroup_RemoveStack(@ptrCast(self), @ptrCast(stack));
    }

    pub fn Stacks(self: ?*anyopaque, ) []const u8 {
        return qtc.QUndoGroup_Stacks(@ptrCast(self));
    }

    pub fn ActiveStack(self: ?*anyopaque, ) QtC.QUndoStack {
        return qtc.QUndoGroup_ActiveStack(@ptrCast(self));
    }

    pub fn CreateUndoAction(self: ?*anyopaque, parent: ?*anyopaque) QtC.QAction {
        return qtc.QUndoGroup_CreateUndoAction(@ptrCast(self), @ptrCast(parent));
    }

    pub fn CreateRedoAction(self: ?*anyopaque, parent: ?*anyopaque) QtC.QAction {
        return qtc.QUndoGroup_CreateRedoAction(@ptrCast(self), @ptrCast(parent));
    }

    pub fn CanUndo(self: ?*anyopaque, ) bool {
        return qtc.QUndoGroup_CanUndo(@ptrCast(self));
    }

    pub fn CanRedo(self: ?*anyopaque, ) bool {
        return qtc.QUndoGroup_CanRedo(@ptrCast(self));
    }

    pub fn UndoText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoGroup_UndoText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.UndoText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RedoText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoGroup_RedoText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.RedoText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsClean(self: ?*anyopaque, ) bool {
        return qtc.QUndoGroup_IsClean(@ptrCast(self));
    }

    pub fn Undo(self: ?*anyopaque, ) void {
        qtc.QUndoGroup_Undo(@ptrCast(self));
    }

    pub fn Redo(self: ?*anyopaque, ) void {
        qtc.QUndoGroup_Redo(@ptrCast(self));
    }

    pub fn SetActiveStack(self: ?*anyopaque, stack: ?*anyopaque) void {
        qtc.QUndoGroup_SetActiveStack(@ptrCast(self), @ptrCast(stack));
    }

    pub fn ActiveStackChanged(self: ?*anyopaque, stack: ?*anyopaque) void {
        qtc.QUndoGroup_ActiveStackChanged(@ptrCast(self), @ptrCast(stack));
    }

    pub fn OnActiveStackChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_ActiveStackChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IndexChanged(self: ?*anyopaque, idx: i32) void {
        qtc.QUndoGroup_IndexChanged(@ptrCast(self), idx);
    }

    pub fn OnIndexChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_IndexChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CleanChanged(self: ?*anyopaque, clean: bool) void {
        qtc.QUndoGroup_CleanChanged(@ptrCast(self), clean);
    }

    pub fn OnCleanChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CleanChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CanUndoChanged(self: ?*anyopaque, canUndo: bool) void {
        qtc.QUndoGroup_CanUndoChanged(@ptrCast(self), canUndo);
    }

    pub fn OnCanUndoChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CanUndoChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CanRedoChanged(self: ?*anyopaque, canRedo: bool) void {
        qtc.QUndoGroup_CanRedoChanged(@ptrCast(self), canRedo);
    }

    pub fn OnCanRedoChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CanRedoChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UndoTextChanged(self: ?*anyopaque, undoText: []const u8) void {
        const undoText_str = qtc.libqt_string{
    .len = undoText.len,
    .data = undoText.ptr,
};
qtc.QUndoGroup_UndoTextChanged(@ptrCast(self), undoText_str);
    }

    pub fn OnUndoTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_UndoTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RedoTextChanged(self: ?*anyopaque, redoText: []const u8) void {
        const redoText_str = qtc.libqt_string{
    .len = redoText.len,
    .data = redoText.ptr,
};
qtc.QUndoGroup_RedoTextChanged(@ptrCast(self), redoText_str);
    }

    pub fn OnRedoTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_RedoTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoGroup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoGroup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CreateUndoAction2(self: ?*anyopaque, parent: ?*anyopaque, prefix: []const u8) QtC.QAction {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
return qtc.QUndoGroup_CreateUndoAction2(@ptrCast(self), @ptrCast(parent), prefix_str);
    }

    pub fn CreateRedoAction2(self: ?*anyopaque, parent: ?*anyopaque, prefix: []const u8) QtC.QAction {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
return qtc.QUndoGroup_CreateRedoAction2(@ptrCast(self), @ptrCast(parent), prefix_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUndoGroup_Delete(@ptrCast(self));
    }
};
