const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html
pub const qgraphicssvgitem = struct {

    /// New constructs a new QGraphicsSvgItem object.
    pub fn New() QtC.QGraphicsSvgItem {
        return qtc.QGraphicsSvgItem_new();
    }


    /// New2 constructs a new QGraphicsSvgItem object.
    pub fn New2(fileName: []const u8) QtC.QGraphicsSvgItem {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QGraphicsSvgItem_new2(fileName_str);
    }


    /// New3 constructs a new QGraphicsSvgItem object.
    pub fn New3(parentItem: ?*anyopaque) QtC.QGraphicsSvgItem {
        return qtc.QGraphicsSvgItem_new3(@ptrCast(parentItem));
    }


    /// New4 constructs a new QGraphicsSvgItem object.
    pub fn New4(fileName: []const u8, parentItem: ?*anyopaque) QtC.QGraphicsSvgItem {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QGraphicsSvgItem_new4(fileName_str, @ptrCast(parentItem));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsSvgItem_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSharedRenderer(self: ?*anyopaque, renderer: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SetSharedRenderer(@ptrCast(self), @ptrCast(renderer));
    }

    pub fn Renderer(self: ?*anyopaque, ) QtC.QSvgRenderer {
        return qtc.QGraphicsSvgItem_Renderer(@ptrCast(self));
    }

    pub fn SetElementId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
    .len = id.len,
    .data = id.ptr,
};
qtc.QGraphicsSvgItem_SetElementId(@ptrCast(self), id_str);
    }

    pub fn ElementId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsSvgItem_ElementId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.ElementId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCachingEnabled(self: ?*anyopaque, cachingEnabled: bool) void {
        qtc.QGraphicsSvgItem_SetCachingEnabled(@ptrCast(self), cachingEnabled);
    }

    pub fn IsCachingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsSvgItem_IsCachingEnabled(@ptrCast(self));
    }

    pub fn SetMaximumCacheSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SetMaximumCacheSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn MaximumCacheSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QGraphicsSvgItem_MaximumCacheSize(@ptrCast(self));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsSvgItem_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsSvgItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsSvgItem_QBaseBoundingRect(@ptrCast(self));
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSvgItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSvgItem_QBaseType(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsSvgItem_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsSvgItem_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/graphicssvgitem.html#types
pub const enums = struct {
};
