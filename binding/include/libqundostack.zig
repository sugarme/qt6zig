const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qundocommand.html
pub const qundocommand = struct {

    /// New constructs a new QUndoCommand object.
    pub fn New() QtC.QUndoCommand {
        return qtc.QUndoCommand_new();
    }


    /// New2 constructs a new QUndoCommand object.
    pub fn New2(text: []const u8) QtC.QUndoCommand {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QUndoCommand_new2(text_str);
    }


    /// New3 constructs a new QUndoCommand object.
    pub fn New3(parent: ?*anyopaque) QtC.QUndoCommand {
        return qtc.QUndoCommand_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QUndoCommand object.
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QUndoCommand {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QUndoCommand_new4(text_str, @ptrCast(parent));
    }


    pub fn Undo(self: ?*anyopaque, ) void {
        qtc.QUndoCommand_Undo(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUndo(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QUndoCommand_OnUndo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUndo(self: ?*anyopaque, ) void {
        qtc.QUndoCommand_QBaseUndo(@ptrCast(self));
    }

    pub fn Redo(self: ?*anyopaque, ) void {
        qtc.QUndoCommand_Redo(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRedo(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QUndoCommand_OnRedo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRedo(self: ?*anyopaque, ) void {
        qtc.QUndoCommand_QBaseRedo(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoCommand_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundocommand.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ActionText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoCommand_ActionText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundocommand.ActionText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QUndoCommand_SetText(@ptrCast(self), text_str);
    }

    pub fn IsObsolete(self: ?*anyopaque, ) bool {
        return qtc.QUndoCommand_IsObsolete(@ptrCast(self));
    }

    pub fn SetObsolete(self: ?*anyopaque, obsolete: bool) void {
        qtc.QUndoCommand_SetObsolete(@ptrCast(self), obsolete);
    }

    pub fn Id(self: ?*anyopaque, ) i32 {
        return qtc.QUndoCommand_Id(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnId(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QUndoCommand_OnId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseId(self: ?*anyopaque, ) i32 {
        return qtc.QUndoCommand_QBaseId(@ptrCast(self));
    }

    pub fn MergeWith(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QUndoCommand_MergeWith(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    pub fn OnMergeWith(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QUndoCommand_OnMergeWith(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMergeWith(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QUndoCommand_QBaseMergeWith(@ptrCast(self), @ptrCast(other));
    }

    pub fn ChildCount(self: ?*anyopaque, ) i32 {
        return qtc.QUndoCommand_ChildCount(@ptrCast(self));
    }

    pub fn Child(self: ?*anyopaque, index: i32) QtC.QUndoCommand {
        return qtc.QUndoCommand_Child(@ptrCast(self), index);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUndoCommand_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qundostack.html
pub const qundostack = struct {

    /// New constructs a new QUndoStack object.
    pub fn New() QtC.QUndoStack {
        return qtc.QUndoStack_new();
    }


    /// New2 constructs a new QUndoStack object.
    pub fn New2(parent: ?*anyopaque) QtC.QUndoStack {
        return qtc.QUndoStack_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QUndoStack_Clear(@ptrCast(self));
    }

    pub fn Push(self: ?*anyopaque, cmd: ?*anyopaque) void {
        qtc.QUndoStack_Push(@ptrCast(self), @ptrCast(cmd));
    }

    pub fn CanUndo(self: ?*anyopaque, ) bool {
        return qtc.QUndoStack_CanUndo(@ptrCast(self));
    }

    pub fn CanRedo(self: ?*anyopaque, ) bool {
        return qtc.QUndoStack_CanRedo(@ptrCast(self));
    }

    pub fn UndoText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_UndoText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.UndoText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RedoText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_RedoText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.RedoText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QUndoStack_Count(@ptrCast(self));
    }

    pub fn Index(self: ?*anyopaque, ) i32 {
        return qtc.QUndoStack_Index(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, idx: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_Text(@ptrCast(self), idx);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CreateUndoAction(self: ?*anyopaque, parent: ?*anyopaque) QtC.QAction {
        return qtc.QUndoStack_CreateUndoAction(@ptrCast(self), @ptrCast(parent));
    }

    pub fn CreateRedoAction(self: ?*anyopaque, parent: ?*anyopaque) QtC.QAction {
        return qtc.QUndoStack_CreateRedoAction(@ptrCast(self), @ptrCast(parent));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QUndoStack_IsActive(@ptrCast(self));
    }

    pub fn IsClean(self: ?*anyopaque, ) bool {
        return qtc.QUndoStack_IsClean(@ptrCast(self));
    }

    pub fn CleanIndex(self: ?*anyopaque, ) i32 {
        return qtc.QUndoStack_CleanIndex(@ptrCast(self));
    }

    pub fn BeginMacro(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QUndoStack_BeginMacro(@ptrCast(self), text_str);
    }

    pub fn EndMacro(self: ?*anyopaque, ) void {
        qtc.QUndoStack_EndMacro(@ptrCast(self));
    }

    pub fn SetUndoLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QUndoStack_SetUndoLimit(@ptrCast(self), limit);
    }

    pub fn UndoLimit(self: ?*anyopaque, ) i32 {
        return qtc.QUndoStack_UndoLimit(@ptrCast(self));
    }

    pub fn Command(self: ?*anyopaque, index: i32) QtC.QUndoCommand {
        return qtc.QUndoStack_Command(@ptrCast(self), index);
    }

    pub fn SetClean(self: ?*anyopaque, ) void {
        qtc.QUndoStack_SetClean(@ptrCast(self));
    }

    pub fn ResetClean(self: ?*anyopaque, ) void {
        qtc.QUndoStack_ResetClean(@ptrCast(self));
    }

    pub fn SetIndex(self: ?*anyopaque, idx: i32) void {
        qtc.QUndoStack_SetIndex(@ptrCast(self), idx);
    }

    pub fn Undo(self: ?*anyopaque, ) void {
        qtc.QUndoStack_Undo(@ptrCast(self));
    }

    pub fn Redo(self: ?*anyopaque, ) void {
        qtc.QUndoStack_Redo(@ptrCast(self));
    }

    pub fn SetActive(self: ?*anyopaque, ) void {
        qtc.QUndoStack_SetActive(@ptrCast(self));
    }

    pub fn IndexChanged(self: ?*anyopaque, idx: i32) void {
        qtc.QUndoStack_IndexChanged(@ptrCast(self), idx);
    }

    pub fn OnIndexChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QUndoStack_Connect_IndexChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CleanChanged(self: ?*anyopaque, clean: bool) void {
        qtc.QUndoStack_CleanChanged(@ptrCast(self), clean);
    }

    pub fn OnCleanChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CleanChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CanUndoChanged(self: ?*anyopaque, canUndo: bool) void {
        qtc.QUndoStack_CanUndoChanged(@ptrCast(self), canUndo);
    }

    pub fn OnCanUndoChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CanUndoChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CanRedoChanged(self: ?*anyopaque, canRedo: bool) void {
        qtc.QUndoStack_CanRedoChanged(@ptrCast(self), canRedo);
    }

    pub fn OnCanRedoChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CanRedoChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UndoTextChanged(self: ?*anyopaque, undoText: []const u8) void {
        const undoText_str = qtc.libqt_string{
    .len = undoText.len,
    .data = undoText.ptr,
};
qtc.QUndoStack_UndoTextChanged(@ptrCast(self), undoText_str);
    }

    pub fn OnUndoTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoStack_Connect_UndoTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RedoTextChanged(self: ?*anyopaque, redoText: []const u8) void {
        const redoText_str = qtc.libqt_string{
    .len = redoText.len,
    .data = redoText.ptr,
};
qtc.QUndoStack_RedoTextChanged(@ptrCast(self), redoText_str);
    }

    pub fn OnRedoTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoStack_Connect_RedoTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CreateUndoAction2(self: ?*anyopaque, parent: ?*anyopaque, prefix: []const u8) QtC.QAction {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
return qtc.QUndoStack_CreateUndoAction2(@ptrCast(self), @ptrCast(parent), prefix_str);
    }

    pub fn CreateRedoAction2(self: ?*anyopaque, parent: ?*anyopaque, prefix: []const u8) QtC.QAction {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
return qtc.QUndoStack_CreateRedoAction2(@ptrCast(self), @ptrCast(parent), prefix_str);
    }

    pub fn SetActive1(self: ?*anyopaque, active: bool) void {
        qtc.QUndoStack_SetActive1(@ptrCast(self), active);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUndoStack_Delete(@ptrCast(self));
    }
};
