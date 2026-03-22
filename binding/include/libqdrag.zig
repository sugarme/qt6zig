const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdrag.html
pub const qdrag = struct {

    /// New constructs a new QDrag object.
    pub fn New(dragSource: ?*anyopaque) QtC.QDrag {
        return qtc.QDrag_new(@ptrCast(dragSource));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDrag_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdrag.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMimeData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QDrag_SetMimeData(@ptrCast(self), @ptrCast(data));
    }

    pub fn MimeData(self: ?*anyopaque, ) QtC.QMimeData {
        return qtc.QDrag_MimeData(@ptrCast(self));
    }

    pub fn SetPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QDrag_SetPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn Pixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QDrag_Pixmap(@ptrCast(self));
    }

    pub fn SetHotSpot(self: ?*anyopaque, hotspot: ?*anyopaque) void {
        qtc.QDrag_SetHotSpot(@ptrCast(self), @ptrCast(hotspot));
    }

    pub fn HotSpot(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QDrag_HotSpot(@ptrCast(self));
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QDrag_Source(@ptrCast(self));
    }

    pub fn Target(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QDrag_Target(@ptrCast(self));
    }

    pub fn Exec(self: ?*anyopaque, ) i32 {
        return qtc.QDrag_Exec(@ptrCast(self));
    }

    pub fn Exec2(self: ?*anyopaque, supportedActions: i32, defaultAction: i32) i32 {
        return qtc.QDrag_Exec2(@ptrCast(self), @intCast(supportedActions), @intCast(defaultAction));
    }

    pub fn SetDragCursor(self: ?*anyopaque, cursor: ?*anyopaque, action: i32) void {
        qtc.QDrag_SetDragCursor(@ptrCast(self), @ptrCast(cursor), @intCast(action));
    }

    pub fn DragCursor(self: ?*anyopaque, action: i32) QtC.QPixmap {
        return qtc.QDrag_DragCursor(@ptrCast(self), @intCast(action));
    }

    pub fn SupportedActions(self: ?*anyopaque, ) i32 {
        return qtc.QDrag_SupportedActions(@ptrCast(self));
    }

    pub fn DefaultAction(self: ?*anyopaque, ) i32 {
        return qtc.QDrag_DefaultAction(@ptrCast(self));
    }

    pub fn Cancel() void {
        qtc.QDrag_Cancel();
    }

    pub fn ActionChanged(self: ?*anyopaque, action: i32) void {
        qtc.QDrag_ActionChanged(@ptrCast(self), @intCast(action));
    }

    pub fn OnActionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDrag_Connect_ActionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TargetChanged(self: ?*anyopaque, newTarget: ?*anyopaque) void {
        qtc.QDrag_TargetChanged(@ptrCast(self), @ptrCast(newTarget));
    }

    pub fn OnTargetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDrag_Connect_TargetChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDrag_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdrag.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDrag_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdrag.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Exec1(self: ?*anyopaque, supportedActions: i32) i32 {
        return qtc.QDrag_Exec1(@ptrCast(self), @intCast(supportedActions));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDrag_Delete(@ptrCast(self));
    }
};
