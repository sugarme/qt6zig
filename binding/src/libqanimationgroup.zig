const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qanimationgroup.html
pub const qanimationgroup = struct {

    /// New constructs a new QAnimationGroup object.
    pub fn New() QtC.QAnimationGroup {
        return qtc.QAnimationGroup_new();
    }


    /// New2 constructs a new QAnimationGroup object.
    pub fn New2(parent: ?*anyopaque) QtC.QAnimationGroup {
        return qtc.QAnimationGroup_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnimationGroup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanimationgroup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AnimationAt(self: ?*anyopaque, index: i32) QtC.QAbstractAnimation {
        return qtc.QAnimationGroup_AnimationAt(@ptrCast(self), index);
    }

    pub fn AnimationCount(self: ?*anyopaque, ) i32 {
        return qtc.QAnimationGroup_AnimationCount(@ptrCast(self));
    }

    pub fn IndexOfAnimation(self: ?*anyopaque, animation: ?*anyopaque) i32 {
        return qtc.QAnimationGroup_IndexOfAnimation(@ptrCast(self), @ptrCast(animation));
    }

    pub fn AddAnimation(self: ?*anyopaque, animation: ?*anyopaque) void {
        qtc.QAnimationGroup_AddAnimation(@ptrCast(self), @ptrCast(animation));
    }

    pub fn InsertAnimation(self: ?*anyopaque, index: i32, animation: ?*anyopaque) void {
        qtc.QAnimationGroup_InsertAnimation(@ptrCast(self), index, @ptrCast(animation));
    }

    pub fn RemoveAnimation(self: ?*anyopaque, animation: ?*anyopaque) void {
        qtc.QAnimationGroup_RemoveAnimation(@ptrCast(self), @ptrCast(animation));
    }

    pub fn TakeAnimation(self: ?*anyopaque, index: i32) QtC.QAbstractAnimation {
        return qtc.QAnimationGroup_TakeAnimation(@ptrCast(self), index);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QAnimationGroup_Clear(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAnimationGroup_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAnimationGroup_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAnimationGroup_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnimationGroup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanimationgroup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnimationGroup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qanimationgroup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAnimationGroup_Delete(@ptrCast(self));
    }
};
