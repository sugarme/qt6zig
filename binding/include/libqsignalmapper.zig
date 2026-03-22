const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsignalmapper.html
pub const qsignalmapper = struct {

    /// New constructs a new QSignalMapper object.
    pub fn New() QtC.QSignalMapper {
        return qtc.QSignalMapper_new();
    }


    /// New2 constructs a new QSignalMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QSignalMapper {
        return qtc.QSignalMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSignalMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsignalmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMapping(self: ?*anyopaque, sender: ?*anyopaque, id: i32) void {
        qtc.QSignalMapper_SetMapping(@ptrCast(self), @ptrCast(sender), id);
    }

    pub fn SetMapping2(self: ?*anyopaque, sender: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QSignalMapper_SetMapping2(@ptrCast(self), @ptrCast(sender), text_str);
    }

    pub fn SetMapping3(self: ?*anyopaque, sender: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QSignalMapper_SetMapping3(@ptrCast(self), @ptrCast(sender), @ptrCast(object));
    }

    pub fn RemoveMappings(self: ?*anyopaque, sender: ?*anyopaque) void {
        qtc.QSignalMapper_RemoveMappings(@ptrCast(self), @ptrCast(sender));
    }

    pub fn Mapping(self: ?*anyopaque, id: i32) QtC.QObject {
        return qtc.QSignalMapper_Mapping(@ptrCast(self), id);
    }

    pub fn Mapping2(self: ?*anyopaque, text: []const u8) QtC.QObject {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QSignalMapper_Mapping2(@ptrCast(self), text_str);
    }

    pub fn Mapping3(self: ?*anyopaque, object: ?*anyopaque) QtC.QObject {
        return qtc.QSignalMapper_Mapping3(@ptrCast(self), @ptrCast(object));
    }

    pub fn MappedInt(self: ?*anyopaque, param1: i32) void {
        qtc.QSignalMapper_MappedInt(@ptrCast(self), param1);
    }

    pub fn OnMappedInt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSignalMapper_Connect_MappedInt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MappedString(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QSignalMapper_MappedString(@ptrCast(self), param1_str);
    }

    pub fn OnMappedString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSignalMapper_Connect_MappedString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MappedObject(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSignalMapper_MappedObject(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnMappedObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSignalMapper_Connect_MappedObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Map(self: ?*anyopaque, ) void {
        qtc.QSignalMapper_Map(@ptrCast(self));
    }

    pub fn Map2(self: ?*anyopaque, sender: ?*anyopaque) void {
        qtc.QSignalMapper_Map2(@ptrCast(self), @ptrCast(sender));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSignalMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsignalmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSignalMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsignalmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSignalMapper_Delete(@ptrCast(self));
    }
};
