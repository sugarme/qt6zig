const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicsanchor.html
pub const qgraphicsanchor = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsAnchor_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsanchor.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsAnchor_SetSpacing(@ptrCast(self), spacing);
    }

    pub fn UnsetSpacing(self: ?*anyopaque, ) void {
        qtc.QGraphicsAnchor_UnsetSpacing(@ptrCast(self));
    }

    pub fn Spacing(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsAnchor_Spacing(@ptrCast(self));
    }

    pub fn SetSizePolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QGraphicsAnchor_SetSizePolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn SizePolicy(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsAnchor_SizePolicy(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsAnchor_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsanchor.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsAnchor_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsanchor.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsAnchor_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsanchorlayout.html
pub const qgraphicsanchorlayout = struct {

    /// New constructs a new QGraphicsAnchorLayout object.
    pub fn New() QtC.QGraphicsAnchorLayout {
        return qtc.QGraphicsAnchorLayout_new();
    }


    /// New2 constructs a new QGraphicsAnchorLayout object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsAnchorLayout {
        return qtc.QGraphicsAnchorLayout_new2(@ptrCast(parent));
    }


    pub fn AddAnchor(self: ?*anyopaque, firstItem: ?*anyopaque, firstEdge: i32, secondItem: ?*anyopaque, secondEdge: i32) QtC.QGraphicsAnchor {
        return qtc.QGraphicsAnchorLayout_AddAnchor(@ptrCast(self), @ptrCast(firstItem), @intCast(firstEdge), @ptrCast(secondItem), @intCast(secondEdge));
    }

    pub fn Anchor(self: ?*anyopaque, firstItem: ?*anyopaque, firstEdge: i32, secondItem: ?*anyopaque, secondEdge: i32) QtC.QGraphicsAnchor {
        return qtc.QGraphicsAnchorLayout_Anchor(@ptrCast(self), @ptrCast(firstItem), @intCast(firstEdge), @ptrCast(secondItem), @intCast(secondEdge));
    }

    pub fn AddCornerAnchors(self: ?*anyopaque, firstItem: ?*anyopaque, firstCorner: i32, secondItem: ?*anyopaque, secondCorner: i32) void {
        qtc.QGraphicsAnchorLayout_AddCornerAnchors(@ptrCast(self), @ptrCast(firstItem), @intCast(firstCorner), @ptrCast(secondItem), @intCast(secondCorner));
    }

    pub fn AddAnchors(self: ?*anyopaque, firstItem: ?*anyopaque, secondItem: ?*anyopaque) void {
        qtc.QGraphicsAnchorLayout_AddAnchors(@ptrCast(self), @ptrCast(firstItem), @ptrCast(secondItem));
    }

    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetHorizontalSpacing(@ptrCast(self), spacing);
    }

    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetVerticalSpacing(@ptrCast(self), spacing);
    }

    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetSpacing(@ptrCast(self), spacing);
    }

    pub fn HorizontalSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsAnchorLayout_HorizontalSpacing(@ptrCast(self));
    }

    pub fn VerticalSpacing(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsAnchorLayout_VerticalSpacing(@ptrCast(self));
    }

    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsAnchorLayout_RemoveAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnRemoveAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnRemoveAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsAnchorLayout_QBaseRemoveAt(@ptrCast(self), index);
    }

    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsAnchorLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsAnchorLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsAnchorLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsAnchorLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsAnchorLayout_QBaseCount(@ptrCast(self));
    }

    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsAnchorLayout_ItemAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsAnchorLayout_OnItemAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsAnchorLayout_QBaseItemAt(@ptrCast(self), index);
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QGraphicsAnchorLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QGraphicsAnchorLayout_QBaseInvalidate(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsAnchorLayout_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsAnchorLayout_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsAnchorLayout_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    pub fn AddAnchors3(self: ?*anyopaque, firstItem: ?*anyopaque, secondItem: ?*anyopaque, orientations: i32) void {
        qtc.QGraphicsAnchorLayout_AddAnchors3(@ptrCast(self), @ptrCast(firstItem), @ptrCast(secondItem), @intCast(orientations));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsAnchorLayout_Delete(@ptrCast(self));
    }
};
