const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextitem.html
pub const qtextitem = struct {

    /// New constructs a new QTextItem object.
    pub fn New(other: ?*anyopaque) QtC.QTextItem {
        return qtc.QTextItem_new(@ptrCast(other));
    }


    /// New2 constructs a new QTextItem object.
    pub fn New2(other: ?*anyopaque) QtC.QTextItem {
        return qtc.QTextItem_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextItem object.
    pub fn New3() QtC.QTextItem {
        return qtc.QTextItem_new3();
    }


    /// New4 constructs a new QTextItem object.
    pub fn New4(param1: ?*anyopaque) QtC.QTextItem {
        return qtc.QTextItem_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextItem_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextItem_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Descent(self: ?*anyopaque, ) f64 {
        return qtc.QTextItem_Descent(@ptrCast(self));
    }

    pub fn Ascent(self: ?*anyopaque, ) f64 {
        return qtc.QTextItem_Ascent(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QTextItem_Width(@ptrCast(self));
    }

    pub fn RenderFlags(self: ?*anyopaque, ) i64 {
        return qtc.QTextItem_RenderFlags(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextItem_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextitem.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QTextItem_Font(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintengine.html
pub const qpaintengine = struct {

    /// New constructs a new QPaintEngine object.
    pub fn New() QtC.QPaintEngine {
        return qtc.QPaintEngine_new();
    }


    /// New2 constructs a new QPaintEngine object.
    pub fn New2(features: i64) QtC.QPaintEngine {
        return qtc.QPaintEngine_new2(@intCast(features));
    }


    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QPaintEngine_IsActive(@ptrCast(self));
    }

    pub fn SetActive(self: ?*anyopaque, newState: bool) void {
        qtc.QPaintEngine_SetActive(@ptrCast(self), newState);
    }

    pub fn Begin(self: ?*anyopaque, pdev: ?*anyopaque) bool {
        return qtc.QPaintEngine_Begin(@ptrCast(self), @ptrCast(pdev));
    }

    /// Allows for overriding the related default method
    pub fn OnBegin(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPaintEngine_OnBegin(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBegin(self: ?*anyopaque, pdev: ?*anyopaque) bool {
        return qtc.QPaintEngine_QBaseBegin(@ptrCast(self), @ptrCast(pdev));
    }

    pub fn End(self: ?*anyopaque, ) bool {
        return qtc.QPaintEngine_End(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEnd(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QPaintEngine_OnEnd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEnd(self: ?*anyopaque, ) bool {
        return qtc.QPaintEngine_QBaseEnd(@ptrCast(self));
    }

    pub fn UpdateState(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QPaintEngine_UpdateState(@ptrCast(self), @ptrCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateState(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnUpdateState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateState(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseUpdateState(@ptrCast(self), @ptrCast(state));
    }

    pub fn DrawRects(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPaintEngine_DrawRects(@ptrCast(self), @ptrCast(rects), rectCount);
    }

    /// Allows for overriding the related default method
    pub fn OnDrawRects(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawRects(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawRects(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPaintEngine_QBaseDrawRects(@ptrCast(self), @ptrCast(rects), rectCount);
    }

    pub fn DrawRects2(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPaintEngine_DrawRects2(@ptrCast(self), @ptrCast(rects), rectCount);
    }

    /// Allows for overriding the related default method
    pub fn OnDrawRects2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawRects2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawRects2(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPaintEngine_QBaseDrawRects2(@ptrCast(self), @ptrCast(rects), rectCount);
    }

    pub fn DrawLines(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPaintEngine_DrawLines(@ptrCast(self), @ptrCast(lines), lineCount);
    }

    /// Allows for overriding the related default method
    pub fn OnDrawLines(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawLines(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawLines(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPaintEngine_QBaseDrawLines(@ptrCast(self), @ptrCast(lines), lineCount);
    }

    pub fn DrawLines2(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPaintEngine_DrawLines2(@ptrCast(self), @ptrCast(lines), lineCount);
    }

    /// Allows for overriding the related default method
    pub fn OnDrawLines2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawLines2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawLines2(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPaintEngine_QBaseDrawLines2(@ptrCast(self), @ptrCast(lines), lineCount);
    }

    pub fn DrawEllipse(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPaintEngine_DrawEllipse(@ptrCast(self), @ptrCast(r));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawEllipse(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawEllipse(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawEllipse(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawEllipse(@ptrCast(self), @ptrCast(r));
    }

    pub fn DrawEllipse2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPaintEngine_DrawEllipse2(@ptrCast(self), @ptrCast(r));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawEllipse2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawEllipse2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawEllipse2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawEllipse2(@ptrCast(self), @ptrCast(r));
    }

    pub fn DrawPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPaintEngine_DrawPath(@ptrCast(self), @ptrCast(path));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawPath(@ptrCast(self), @ptrCast(path));
    }

    pub fn DrawPoints(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPaintEngine_DrawPoints(@ptrCast(self), @ptrCast(points), pointCount);
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPoints(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPoints(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPoints(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPaintEngine_QBaseDrawPoints(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawPoints2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPaintEngine_DrawPoints2(@ptrCast(self), @ptrCast(points), pointCount);
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPoints2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPoints2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPoints2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPaintEngine_QBaseDrawPoints2(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, mode: i32) void {
        qtc.QPaintEngine_DrawPolygon(@ptrCast(self), @ptrCast(points), pointCount, @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPolygon(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPolygon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, mode: i32) void {
        qtc.QPaintEngine_QBaseDrawPolygon(@ptrCast(self), @ptrCast(points), pointCount, @intCast(mode));
    }

    pub fn DrawPolygon2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, mode: i32) void {
        qtc.QPaintEngine_DrawPolygon2(@ptrCast(self), @ptrCast(points), pointCount, @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPolygon2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPolygon2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPolygon2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, mode: i32) void {
        qtc.QPaintEngine_QBaseDrawPolygon2(@ptrCast(self), @ptrCast(points), pointCount, @intCast(mode));
    }

    pub fn DrawPixmap(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPaintEngine_DrawPixmap(@ptrCast(self), @ptrCast(r), @ptrCast(pm), @ptrCast(sr));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawPixmap(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawPixmap(@ptrCast(self), @ptrCast(r), @ptrCast(pm), @ptrCast(sr));
    }

    pub fn DrawTextItem(self: ?*anyopaque, p: ?*anyopaque, textItem: ?*anyopaque) void {
        qtc.QPaintEngine_DrawTextItem(@ptrCast(self), @ptrCast(p), @ptrCast(textItem));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawTextItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawTextItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawTextItem(self: ?*anyopaque, p: ?*anyopaque, textItem: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawTextItem(@ptrCast(self), @ptrCast(p), @ptrCast(textItem));
    }

    pub fn DrawTiledPixmap(self: ?*anyopaque, r: ?*anyopaque, pixmap: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QPaintEngine_DrawTiledPixmap(@ptrCast(self), @ptrCast(r), @ptrCast(pixmap), @ptrCast(s));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawTiledPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawTiledPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawTiledPixmap(self: ?*anyopaque, r: ?*anyopaque, pixmap: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawTiledPixmap(@ptrCast(self), @ptrCast(r), @ptrCast(pixmap), @ptrCast(s));
    }

    pub fn DrawImage(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque, flags: i32) void {
        qtc.QPaintEngine_DrawImage(@ptrCast(self), @ptrCast(r), @ptrCast(pm), @ptrCast(sr), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawImage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawImage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawImage(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque, flags: i32) void {
        qtc.QPaintEngine_QBaseDrawImage(@ptrCast(self), @ptrCast(r), @ptrCast(pm), @ptrCast(sr), @intCast(flags));
    }

    pub fn SetPaintDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QPaintEngine_SetPaintDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn PaintDevice(self: ?*anyopaque, ) QtC.QPaintDevice {
        return qtc.QPaintEngine_PaintDevice(@ptrCast(self));
    }

    pub fn SetSystemClip(self: ?*anyopaque, baseClip: ?*anyopaque) void {
        qtc.QPaintEngine_SetSystemClip(@ptrCast(self), @ptrCast(baseClip));
    }

    pub fn SystemClip(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QPaintEngine_SystemClip(@ptrCast(self));
    }

    pub fn SetSystemRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPaintEngine_SetSystemRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SystemRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPaintEngine_SystemRect(@ptrCast(self));
    }

    pub fn CoordinateOffset(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QPaintEngine_CoordinateOffset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCoordinateOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPoint) void {
        qtc.QPaintEngine_OnCoordinateOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCoordinateOffset(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QPaintEngine_QBaseCoordinateOffset(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QPaintEngine_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPaintEngine_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QPaintEngine_QBaseType(@ptrCast(self));
    }

    pub fn FixNegRect(self: ?*anyopaque, x: *i32, y: *i32, w: *i32, h: *i32) void {
        qtc.QPaintEngine_FixNegRect(@ptrCast(self), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    pub fn TestDirty(self: ?*anyopaque, df: i32) bool {
        return qtc.QPaintEngine_TestDirty(@ptrCast(self), @intCast(df));
    }

    pub fn SetDirty(self: ?*anyopaque, df: i32) void {
        qtc.QPaintEngine_SetDirty(@ptrCast(self), @intCast(df));
    }

    pub fn ClearDirty(self: ?*anyopaque, df: i32) void {
        qtc.QPaintEngine_ClearDirty(@ptrCast(self), @intCast(df));
    }

    pub fn HasFeature(self: ?*anyopaque, feature: i64) bool {
        return qtc.QPaintEngine_HasFeature(@ptrCast(self), @intCast(feature));
    }

    pub fn Painter(self: ?*anyopaque, ) QtC.QPainter {
        return qtc.QPaintEngine_Painter(@ptrCast(self));
    }

    pub fn SyncState(self: ?*anyopaque, ) void {
        qtc.QPaintEngine_SyncState(@ptrCast(self));
    }

    pub fn IsExtended(self: ?*anyopaque, ) bool {
        return qtc.QPaintEngine_IsExtended(@ptrCast(self));
    }

    pub fn CreatePixmap(self: ?*anyopaque, size: QtC.QSize) QtC.QPixmap {
        return qtc.QPaintEngine_CreatePixmap(@ptrCast(self), @ptrCast(size));
    }

    /// Allows for overriding the related default method
    pub fn OnCreatePixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QSize) callconv(.c) QtC.QPixmap) void {
        qtc.QPaintEngine_OnCreatePixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreatePixmap(self: ?*anyopaque, size: QtC.QSize) QtC.QPixmap {
        return qtc.QPaintEngine_QBaseCreatePixmap(@ptrCast(self), @ptrCast(size));
    }

    pub fn CreatePixmapFromImage(self: ?*anyopaque, image: QtC.QImage, flags: i32) QtC.QPixmap {
        return qtc.QPaintEngine_CreatePixmapFromImage(@ptrCast(self), @ptrCast(image), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnCreatePixmapFromImage(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QImage, i32) callconv(.c) QtC.QPixmap) void {
        qtc.QPaintEngine_OnCreatePixmapFromImage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreatePixmapFromImage(self: ?*anyopaque, image: QtC.QImage, flags: i32) QtC.QPixmap {
        return qtc.QPaintEngine_QBaseCreatePixmapFromImage(@ptrCast(self), @ptrCast(image), @intCast(flags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintEngine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintenginestate.html
pub const qpaintenginestate = struct {

    /// New constructs a new QPaintEngineState object.
    pub fn New(other: ?*anyopaque) QtC.QPaintEngineState {
        return qtc.QPaintEngineState_new(@ptrCast(other));
    }


    /// New2 constructs a new QPaintEngineState object.
    pub fn New2(other: ?*anyopaque) QtC.QPaintEngineState {
        return qtc.QPaintEngineState_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPaintEngineState object.
    pub fn New3() QtC.QPaintEngineState {
        return qtc.QPaintEngineState_new3();
    }


    /// New4 constructs a new QPaintEngineState object.
    pub fn New4(param1: ?*anyopaque) QtC.QPaintEngineState {
        return qtc.QPaintEngineState_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPaintEngineState_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPaintEngineState_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QPaintEngineState_State(@ptrCast(self));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QPaintEngineState_Pen(@ptrCast(self));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPaintEngineState_Brush(@ptrCast(self));
    }

    pub fn BrushOrigin(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPaintEngineState_BrushOrigin(@ptrCast(self));
    }

    pub fn BackgroundBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPaintEngineState_BackgroundBrush(@ptrCast(self));
    }

    pub fn BackgroundMode(self: ?*anyopaque, ) i32 {
        return qtc.QPaintEngineState_BackgroundMode(@ptrCast(self));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QPaintEngineState_Font(@ptrCast(self));
    }

    pub fn Transform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QPaintEngineState_Transform(@ptrCast(self));
    }

    pub fn ClipOperation(self: ?*anyopaque, ) i32 {
        return qtc.QPaintEngineState_ClipOperation(@ptrCast(self));
    }

    pub fn ClipRegion(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QPaintEngineState_ClipRegion(@ptrCast(self));
    }

    pub fn ClipPath(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QPaintEngineState_ClipPath(@ptrCast(self));
    }

    pub fn IsClipEnabled(self: ?*anyopaque, ) bool {
        return qtc.QPaintEngineState_IsClipEnabled(@ptrCast(self));
    }

    pub fn RenderHints(self: ?*anyopaque, ) i32 {
        return qtc.QPaintEngineState_RenderHints(@ptrCast(self));
    }

    pub fn CompositionMode(self: ?*anyopaque, ) i32 {
        return qtc.QPaintEngineState_CompositionMode(@ptrCast(self));
    }

    pub fn Opacity(self: ?*anyopaque, ) f64 {
        return qtc.QPaintEngineState_Opacity(@ptrCast(self));
    }

    pub fn Painter(self: ?*anyopaque, ) QtC.QPainter {
        return qtc.QPaintEngineState_Painter(@ptrCast(self));
    }

    pub fn BrushNeedsResolving(self: ?*anyopaque, ) bool {
        return qtc.QPaintEngineState_BrushNeedsResolving(@ptrCast(self));
    }

    pub fn PenNeedsResolving(self: ?*anyopaque, ) bool {
        return qtc.QPaintEngineState_PenNeedsResolving(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintEngineState_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/paintengine.html#types
pub const enums = struct {
    pub const RenderFlag = enum {
        pub const RightToLeft: i64 = 1;
        pub const Overline: i64 = 16;
        pub const Underline: i64 = 32;
        pub const StrikeOut: i64 = 64;
        pub const Dummy: i64 = 4294967295;
    };

    pub const PaintEngineFeature = enum {
        pub const PrimitiveTransform: i64 = 1;
        pub const PatternTransform: i64 = 2;
        pub const PixmapTransform: i64 = 4;
        pub const PatternBrush: i64 = 8;
        pub const LinearGradientFill: i64 = 16;
        pub const RadialGradientFill: i64 = 32;
        pub const ConicalGradientFill: i64 = 64;
        pub const AlphaBlend: i64 = 128;
        pub const PorterDuff: i64 = 256;
        pub const PainterPaths: i64 = 512;
        pub const Antialiasing: i64 = 1024;
        pub const BrushStroke: i64 = 2048;
        pub const ConstantOpacity: i64 = 4096;
        pub const MaskedBrush: i64 = 8192;
        pub const PerspectiveTransform: i64 = 16384;
        pub const BlendModes: i64 = 32768;
        pub const ObjectBoundingModeGradients: i64 = 65536;
        pub const RasterOpModes: i64 = 131072;
        pub const PaintOutsidePaintEvent: i64 = 536870912;
        pub const AllFeatures: i64 = 4294967295;
    };

    pub const DirtyFlag = enum {
        pub const DirtyPen: i32 = 1;
        pub const DirtyBrush: i32 = 2;
        pub const DirtyBrushOrigin: i32 = 4;
        pub const DirtyFont: i32 = 8;
        pub const DirtyBackground: i32 = 16;
        pub const DirtyBackgroundMode: i32 = 32;
        pub const DirtyTransform: i32 = 64;
        pub const DirtyClipRegion: i32 = 128;
        pub const DirtyClipPath: i32 = 256;
        pub const DirtyHints: i32 = 512;
        pub const DirtyCompositionMode: i32 = 1024;
        pub const DirtyClipEnabled: i32 = 2048;
        pub const DirtyOpacity: i32 = 4096;
        pub const AllDirty: i32 = 65535;
    };

    pub const PolygonDrawMode = enum {
        pub const OddEvenMode: i32 = 0;
        pub const WindingMode: i32 = 1;
        pub const ConvexMode: i32 = 2;
        pub const PolylineMode: i32 = 3;
    };

    pub const Type = enum {
        pub const X11: i32 = 0;
        pub const Windows: i32 = 1;
        pub const QuickDraw: i32 = 2;
        pub const CoreGraphics: i32 = 3;
        pub const MacPrinter: i32 = 4;
        pub const QWindowSystem: i32 = 5;
        pub const OpenGL: i32 = 6;
        pub const Picture: i32 = 7;
        pub const SVG: i32 = 8;
        pub const Raster: i32 = 9;
        pub const Direct3D: i32 = 10;
        pub const Pdf: i32 = 11;
        pub const OpenVG: i32 = 12;
        pub const OpenGL2: i32 = 13;
        pub const PaintBuffer: i32 = 14;
        pub const Blitter: i32 = 15;
        pub const Direct2D: i32 = 16;
        pub const User: i32 = 50;
        pub const MaxUser: i32 = 100;
    };

};
