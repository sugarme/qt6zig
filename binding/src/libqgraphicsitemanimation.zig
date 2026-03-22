const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicsitemanimation.html
pub const qgraphicsitemanimation = struct {

    /// New constructs a new QGraphicsItemAnimation object.
    pub fn New() QtC.QGraphicsItemAnimation {
        return qtc.QGraphicsItemAnimation_new();
    }


    /// New2 constructs a new QGraphicsItemAnimation object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsItemAnimation {
        return qtc.QGraphicsItemAnimation_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsItemAnimation_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsitemanimation.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Item(self: ?*anyopaque, ) QtC.QGraphicsItem {
        return qtc.QGraphicsItemAnimation_Item(@ptrCast(self));
    }

    pub fn SetItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_SetItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn TimeLine(self: ?*anyopaque, ) QtC.QTimeLine {
        return qtc.QGraphicsItemAnimation_TimeLine(@ptrCast(self));
    }

    pub fn SetTimeLine(self: ?*anyopaque, timeLine: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_SetTimeLine(@ptrCast(self), @ptrCast(timeLine));
    }

    pub fn PosAt(self: ?*anyopaque, step: f64) QtC.QPointF {
        return qtc.QGraphicsItemAnimation_PosAt(@ptrCast(self), step);
    }

    pub fn PosList(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsItemAnimation_PosList(@ptrCast(self));
    }

    pub fn SetPosAt(self: ?*anyopaque, step: f64, pos: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_SetPosAt(@ptrCast(self), step, @ptrCast(pos));
    }

    pub fn TransformAt(self: ?*anyopaque, step: f64) QtC.QTransform {
        return qtc.QGraphicsItemAnimation_TransformAt(@ptrCast(self), step);
    }

    pub fn RotationAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_RotationAt(@ptrCast(self), step);
    }

    pub fn RotationList(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsItemAnimation_RotationList(@ptrCast(self));
    }

    pub fn SetRotationAt(self: ?*anyopaque, step: f64, angle: f64) void {
        qtc.QGraphicsItemAnimation_SetRotationAt(@ptrCast(self), step, angle);
    }

    pub fn XTranslationAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_XTranslationAt(@ptrCast(self), step);
    }

    pub fn YTranslationAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_YTranslationAt(@ptrCast(self), step);
    }

    pub fn TranslationList(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsItemAnimation_TranslationList(@ptrCast(self));
    }

    pub fn SetTranslationAt(self: ?*anyopaque, step: f64, dx: f64, dy: f64) void {
        qtc.QGraphicsItemAnimation_SetTranslationAt(@ptrCast(self), step, dx, dy);
    }

    pub fn VerticalScaleAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_VerticalScaleAt(@ptrCast(self), step);
    }

    pub fn HorizontalScaleAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_HorizontalScaleAt(@ptrCast(self), step);
    }

    pub fn ScaleList(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsItemAnimation_ScaleList(@ptrCast(self));
    }

    pub fn SetScaleAt(self: ?*anyopaque, step: f64, sx: f64, sy: f64) void {
        qtc.QGraphicsItemAnimation_SetScaleAt(@ptrCast(self), step, sx, sy);
    }

    pub fn VerticalShearAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_VerticalShearAt(@ptrCast(self), step);
    }

    pub fn HorizontalShearAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_HorizontalShearAt(@ptrCast(self), step);
    }

    pub fn ShearList(self: ?*anyopaque, ) []const u8 {
        return qtc.QGraphicsItemAnimation_ShearList(@ptrCast(self));
    }

    pub fn SetShearAt(self: ?*anyopaque, step: f64, sh: f64, sv: f64) void {
        qtc.QGraphicsItemAnimation_SetShearAt(@ptrCast(self), step, sh, sv);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QGraphicsItemAnimation_Clear(@ptrCast(self));
    }

    pub fn SetStep(self: ?*anyopaque, x: f64) void {
        qtc.QGraphicsItemAnimation_SetStep(@ptrCast(self), x);
    }

    pub fn BeforeAnimationStep(self: ?*anyopaque, step: f64) void {
        qtc.QGraphicsItemAnimation_BeforeAnimationStep(@ptrCast(self), step);
    }

    /// Allows for overriding the related default method
    pub fn OnBeforeAnimationStep(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnBeforeAnimationStep(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBeforeAnimationStep(self: ?*anyopaque, step: f64) void {
        qtc.QGraphicsItemAnimation_QBaseBeforeAnimationStep(@ptrCast(self), step);
    }

    pub fn AfterAnimationStep(self: ?*anyopaque, step: f64) void {
        qtc.QGraphicsItemAnimation_AfterAnimationStep(@ptrCast(self), step);
    }

    /// Allows for overriding the related default method
    pub fn OnAfterAnimationStep(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnAfterAnimationStep(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAfterAnimationStep(self: ?*anyopaque, step: f64) void {
        qtc.QGraphicsItemAnimation_QBaseAfterAnimationStep(@ptrCast(self), step);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsItemAnimation_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsitemanimation.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsItemAnimation_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsitemanimation.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_Delete(@ptrCast(self));
    }
};
