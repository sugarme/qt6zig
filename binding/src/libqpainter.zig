const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qpainter.html
pub const qpainter = struct {

    /// New constructs a new QPainter object.
    pub fn New() QtC.QPainter {
        return qtc.QPainter_new();
    }


    /// New2 constructs a new QPainter object.
    pub fn New2(param1: ?*anyopaque) QtC.QPainter {
        return qtc.QPainter_new2(@ptrCast(param1));
    }


    pub fn Device(self: ?*anyopaque, ) QtC.QPaintDevice {
        return qtc.QPainter_Device(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QPainter_Begin(@ptrCast(self), @ptrCast(param1));
    }

    pub fn End(self: ?*anyopaque, ) bool {
        return qtc.QPainter_End(@ptrCast(self));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QPainter_IsActive(@ptrCast(self));
    }

    pub fn SetCompositionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QPainter_SetCompositionMode(@ptrCast(self), @intCast(mode));
    }

    pub fn CompositionMode(self: ?*anyopaque, ) i32 {
        return qtc.QPainter_CompositionMode(@ptrCast(self));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QPainter_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QPainter_SetFont(@ptrCast(self), @ptrCast(f));
    }

    pub fn FontMetrics(self: ?*anyopaque, ) QtC.QFontMetrics {
        return qtc.QPainter_FontMetrics(@ptrCast(self));
    }

    pub fn FontInfo(self: ?*anyopaque, ) QtC.QFontInfo {
        return qtc.QPainter_FontInfo(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_SetPen(@ptrCast(self), @ptrCast(color));
    }

    pub fn SetPen2(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPainter_SetPen2(@ptrCast(self), @ptrCast(pen));
    }

    pub fn SetPen3(self: ?*anyopaque, style: i32) void {
        qtc.QPainter_SetPen3(@ptrCast(self), @intCast(style));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QPainter_Pen(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPainter_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn SetBrush2(self: ?*anyopaque, style: i32) void {
        qtc.QPainter_SetBrush2(@ptrCast(self), @intCast(style));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPainter_Brush(@ptrCast(self));
    }

    pub fn SetBackgroundMode(self: ?*anyopaque, mode: i32) void {
        qtc.QPainter_SetBackgroundMode(@ptrCast(self), @intCast(mode));
    }

    pub fn BackgroundMode(self: ?*anyopaque, ) i32 {
        return qtc.QPainter_BackgroundMode(@ptrCast(self));
    }

    pub fn BrushOrigin(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QPainter_BrushOrigin(@ptrCast(self));
    }

    pub fn SetBrushOrigin(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QPainter_SetBrushOrigin(@ptrCast(self), x, y);
    }

    pub fn SetBrushOrigin2(self: ?*anyopaque, brushOrigin: ?*anyopaque) void {
        qtc.QPainter_SetBrushOrigin2(@ptrCast(self), @ptrCast(brushOrigin));
    }

    pub fn SetBrushOrigin3(self: ?*anyopaque, brushOrigin: ?*anyopaque) void {
        qtc.QPainter_SetBrushOrigin3(@ptrCast(self), @ptrCast(brushOrigin));
    }

    pub fn SetBackground(self: ?*anyopaque, bg: ?*anyopaque) void {
        qtc.QPainter_SetBackground(@ptrCast(self), @ptrCast(bg));
    }

    pub fn Background(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPainter_Background(@ptrCast(self));
    }

    pub fn Opacity(self: ?*anyopaque, ) f64 {
        return qtc.QPainter_Opacity(@ptrCast(self));
    }

    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QPainter_SetOpacity(@ptrCast(self), opacity);
    }

    pub fn ClipRegion(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QPainter_ClipRegion(@ptrCast(self));
    }

    pub fn ClipPath(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QPainter_ClipPath(@ptrCast(self));
    }

    pub fn SetClipRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRect(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetClipRect2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRect2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetClipRect3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetClipRect3(@ptrCast(self), x, y, w, h);
    }

    pub fn SetClipRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRegion(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetClipPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainter_SetClipPath(@ptrCast(self), @ptrCast(path));
    }

    pub fn SetClipping(self: ?*anyopaque, enable: bool) void {
        qtc.QPainter_SetClipping(@ptrCast(self), enable);
    }

    pub fn HasClipping(self: ?*anyopaque, ) bool {
        return qtc.QPainter_HasClipping(@ptrCast(self));
    }

    pub fn ClipBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QPainter_ClipBoundingRect(@ptrCast(self));
    }

    pub fn Save(self: ?*anyopaque, ) void {
        qtc.QPainter_Save(@ptrCast(self));
    }

    pub fn Restore(self: ?*anyopaque, ) void {
        qtc.QPainter_Restore(@ptrCast(self));
    }

    pub fn SetTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        qtc.QPainter_SetTransform(@ptrCast(self), @ptrCast(transform));
    }

    pub fn Transform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QPainter_Transform(@ptrCast(self));
    }

    pub fn DeviceTransform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QPainter_DeviceTransform(@ptrCast(self));
    }

    pub fn ResetTransform(self: ?*anyopaque, ) void {
        qtc.QPainter_ResetTransform(@ptrCast(self));
    }

    pub fn SetWorldTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QPainter_SetWorldTransform(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn WorldTransform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QPainter_WorldTransform(@ptrCast(self));
    }

    pub fn CombinedTransform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QPainter_CombinedTransform(@ptrCast(self));
    }

    pub fn SetWorldMatrixEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QPainter_SetWorldMatrixEnabled(@ptrCast(self), enabled);
    }

    pub fn WorldMatrixEnabled(self: ?*anyopaque, ) bool {
        return qtc.QPainter_WorldMatrixEnabled(@ptrCast(self));
    }

    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) void {
        qtc.QPainter_Scale(@ptrCast(self), sx, sy);
    }

    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) void {
        qtc.QPainter_Shear(@ptrCast(self), sh, sv);
    }

    pub fn Rotate(self: ?*anyopaque, a: f64) void {
        qtc.QPainter_Rotate(@ptrCast(self), a);
    }

    pub fn Translate(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_Translate(@ptrCast(self), @ptrCast(offset));
    }

    pub fn Translate2(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_Translate2(@ptrCast(self), @ptrCast(offset));
    }

    pub fn Translate3(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QPainter_Translate3(@ptrCast(self), dx, dy);
    }

    pub fn Window(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPainter_Window(@ptrCast(self));
    }

    pub fn SetWindow(self: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QPainter_SetWindow(@ptrCast(self), @ptrCast(window));
    }

    pub fn SetWindow2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetWindow2(@ptrCast(self), x, y, w, h);
    }

    pub fn Viewport(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPainter_Viewport(@ptrCast(self));
    }

    pub fn SetViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QPainter_SetViewport(@ptrCast(self), @ptrCast(viewport));
    }

    pub fn SetViewport2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetViewport2(@ptrCast(self), x, y, w, h);
    }

    pub fn SetViewTransformEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPainter_SetViewTransformEnabled(@ptrCast(self), enable);
    }

    pub fn ViewTransformEnabled(self: ?*anyopaque, ) bool {
        return qtc.QPainter_ViewTransformEnabled(@ptrCast(self));
    }

    pub fn StrokePath(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPainter_StrokePath(@ptrCast(self), @ptrCast(path), @ptrCast(pen));
    }

    pub fn FillPath(self: ?*anyopaque, path: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPainter_FillPath(@ptrCast(self), @ptrCast(path), @ptrCast(brush));
    }

    pub fn DrawPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainter_DrawPath(@ptrCast(self), @ptrCast(path));
    }

    pub fn DrawPoint(self: ?*anyopaque, pt: ?*anyopaque) void {
        qtc.QPainter_DrawPoint(@ptrCast(self), @ptrCast(pt));
    }

    pub fn DrawPoint2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPainter_DrawPoint2(@ptrCast(self), @ptrCast(p));
    }

    pub fn DrawPoint3(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QPainter_DrawPoint3(@ptrCast(self), x, y);
    }

    pub fn DrawPoints(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPoints(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawPoints3(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPoints3(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawLine(self: ?*anyopaque, line: ?*anyopaque) void {
        qtc.QPainter_DrawLine(@ptrCast(self), @ptrCast(line));
    }

    pub fn DrawLine2(self: ?*anyopaque, line: ?*anyopaque) void {
        qtc.QPainter_DrawLine2(@ptrCast(self), @ptrCast(line));
    }

    pub fn DrawLine3(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QPainter_DrawLine3(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn DrawLine4(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QPainter_DrawLine4(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    pub fn DrawLine5(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QPainter_DrawLine5(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    pub fn DrawLines(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines(@ptrCast(self), @ptrCast(lines), lineCount);
    }

    pub fn DrawLines2(self: ?*anyopaque, lines: []const u8) void {
        qtc.QPainter_DrawLines2(@ptrCast(self), @ptrCast(lines));
    }

    pub fn DrawLines3(self: ?*anyopaque, pointPairs: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines3(@ptrCast(self), @ptrCast(pointPairs), lineCount);
    }

    pub fn DrawLines4(self: ?*anyopaque, pointPairs: []const u8) void {
        qtc.QPainter_DrawLines4(@ptrCast(self), @ptrCast(pointPairs));
    }

    pub fn DrawLines5(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines5(@ptrCast(self), @ptrCast(lines), lineCount);
    }

    pub fn DrawLines6(self: ?*anyopaque, lines: []const u8) void {
        qtc.QPainter_DrawLines6(@ptrCast(self), @ptrCast(lines));
    }

    pub fn DrawLines7(self: ?*anyopaque, pointPairs: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines7(@ptrCast(self), @ptrCast(pointPairs), lineCount);
    }

    pub fn DrawLines8(self: ?*anyopaque, pointPairs: []const u8) void {
        qtc.QPainter_DrawLines8(@ptrCast(self), @ptrCast(pointPairs));
    }

    pub fn DrawRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainter_DrawRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn DrawRect2(self: ?*anyopaque, x1: i32, y1: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawRect2(@ptrCast(self), x1, y1, w, h);
    }

    pub fn DrawRect3(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainter_DrawRect3(@ptrCast(self), @ptrCast(rect));
    }

    pub fn DrawRects(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPainter_DrawRects(@ptrCast(self), @ptrCast(rects), rectCount);
    }

    pub fn DrawRects2(self: ?*anyopaque, rectangles: []const u8) void {
        qtc.QPainter_DrawRects2(@ptrCast(self), @ptrCast(rectangles));
    }

    pub fn DrawRects3(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPainter_DrawRects3(@ptrCast(self), @ptrCast(rects), rectCount);
    }

    pub fn DrawRects4(self: ?*anyopaque, rectangles: []const u8) void {
        qtc.QPainter_DrawRects4(@ptrCast(self), @ptrCast(rectangles));
    }

    pub fn DrawEllipse(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPainter_DrawEllipse(@ptrCast(self), @ptrCast(r));
    }

    pub fn DrawEllipse2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPainter_DrawEllipse2(@ptrCast(self), @ptrCast(r));
    }

    pub fn DrawEllipse3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawEllipse3(@ptrCast(self), x, y, w, h);
    }

    pub fn DrawEllipse4(self: ?*anyopaque, center: ?*anyopaque, rx: f64, ry: f64) void {
        qtc.QPainter_DrawEllipse4(@ptrCast(self), @ptrCast(center), rx, ry);
    }

    pub fn DrawEllipse5(self: ?*anyopaque, center: ?*anyopaque, rx: i32, ry: i32) void {
        qtc.QPainter_DrawEllipse5(@ptrCast(self), @ptrCast(center), rx, ry);
    }

    pub fn DrawPolyline(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolyline(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawPolyline3(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolyline3(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolygon(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawPolygon3(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolygon3(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawConvexPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawConvexPolygon(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawConvexPolygon3(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawConvexPolygon3(@ptrCast(self), @ptrCast(points), pointCount);
    }

    pub fn DrawArc(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc(@ptrCast(self), @ptrCast(rect), a, alen);
    }

    pub fn DrawArc2(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc2(@ptrCast(self), @ptrCast(param1), a, alen);
    }

    pub fn DrawArc3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc3(@ptrCast(self), x, y, w, h, a, alen);
    }

    pub fn DrawPie(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie(@ptrCast(self), @ptrCast(rect), a, alen);
    }

    pub fn DrawPie2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie2(@ptrCast(self), x, y, w, h, a, alen);
    }

    pub fn DrawPie3(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie3(@ptrCast(self), @ptrCast(param1), a, alen);
    }

    pub fn DrawChord(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord(@ptrCast(self), @ptrCast(rect), a, alen);
    }

    pub fn DrawChord2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord2(@ptrCast(self), x, y, w, h, a, alen);
    }

    pub fn DrawChord3(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord3(@ptrCast(self), @ptrCast(param1), a, alen);
    }

    pub fn DrawRoundedRect(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect(@ptrCast(self), @ptrCast(rect), xRadius, yRadius);
    }

    pub fn DrawRoundedRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect2(@ptrCast(self), x, y, w, h, xRadius, yRadius);
    }

    pub fn DrawRoundedRect3(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect3(@ptrCast(self), @ptrCast(rect), xRadius, yRadius);
    }

    pub fn DrawTiledPixmap(self: ?*anyopaque, rect: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap(@ptrCast(self), @ptrCast(rect), @ptrCast(pm));
    }

    pub fn DrawTiledPixmap2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap2(@ptrCast(self), x, y, w, h, @ptrCast(param5));
    }

    pub fn DrawTiledPixmap3(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap3(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn DrawPicture(self: ?*anyopaque, p: ?*anyopaque, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture(@ptrCast(self), @ptrCast(p), @ptrCast(picture));
    }

    pub fn DrawPicture2(self: ?*anyopaque, x: i32, y: i32, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture2(@ptrCast(self), x, y, @ptrCast(picture));
    }

    pub fn DrawPicture3(self: ?*anyopaque, p: ?*anyopaque, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture3(@ptrCast(self), @ptrCast(p), @ptrCast(picture));
    }

    pub fn DrawPixmap(self: ?*anyopaque, targetRect: ?*anyopaque, pixmap: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap(@ptrCast(self), @ptrCast(targetRect), @ptrCast(pixmap), @ptrCast(sourceRect));
    }

    pub fn DrawPixmap2(self: ?*anyopaque, targetRect: ?*anyopaque, pixmap: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap2(@ptrCast(self), @ptrCast(targetRect), @ptrCast(pixmap), @ptrCast(sourceRect));
    }

    pub fn DrawPixmap3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, pm: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawPixmap3(@ptrCast(self), x, y, w, h, @ptrCast(pm), sx, sy, sw, sh);
    }

    pub fn DrawPixmap4(self: ?*anyopaque, x: i32, y: i32, pm: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawPixmap4(@ptrCast(self), x, y, @ptrCast(pm), sx, sy, sw, sh);
    }

    pub fn DrawPixmap5(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap5(@ptrCast(self), @ptrCast(p), @ptrCast(pm), @ptrCast(sr));
    }

    pub fn DrawPixmap6(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap6(@ptrCast(self), @ptrCast(p), @ptrCast(pm), @ptrCast(sr));
    }

    pub fn DrawPixmap7(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap7(@ptrCast(self), @ptrCast(p), @ptrCast(pm));
    }

    pub fn DrawPixmap8(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap8(@ptrCast(self), @ptrCast(p), @ptrCast(pm));
    }

    pub fn DrawPixmap9(self: ?*anyopaque, x: i32, y: i32, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap9(@ptrCast(self), x, y, @ptrCast(pm));
    }

    pub fn DrawPixmap10(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap10(@ptrCast(self), @ptrCast(r), @ptrCast(pm));
    }

    pub fn DrawPixmap11(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap11(@ptrCast(self), x, y, w, h, @ptrCast(pm));
    }

    pub fn DrawPixmapFragments(self: ?*anyopaque, fragments: ?*anyopaque, fragmentCount: i32, pixmap: ?*anyopaque) void {
        qtc.QPainter_DrawPixmapFragments(@ptrCast(self), @ptrCast(fragments), fragmentCount, @ptrCast(pixmap));
    }

    pub fn DrawImage(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawImage(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect));
    }

    pub fn DrawImage2(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawImage2(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect));
    }

    pub fn DrawImage3(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawImage3(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr));
    }

    pub fn DrawImage4(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawImage4(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr));
    }

    pub fn DrawImage5(self: ?*anyopaque, r: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage5(@ptrCast(self), @ptrCast(r), @ptrCast(image));
    }

    pub fn DrawImage6(self: ?*anyopaque, r: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage6(@ptrCast(self), @ptrCast(r), @ptrCast(image));
    }

    pub fn DrawImage7(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage7(@ptrCast(self), @ptrCast(p), @ptrCast(image));
    }

    pub fn DrawImage8(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage8(@ptrCast(self), @ptrCast(p), @ptrCast(image));
    }

    pub fn DrawImage9(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage9(@ptrCast(self), x, y, @ptrCast(image));
    }

    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QPainter_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn LayoutDirection(self: ?*anyopaque, ) i32 {
        return qtc.QPainter_LayoutDirection(@ptrCast(self));
    }

    pub fn DrawGlyphRun(self: ?*anyopaque, position: ?*anyopaque, glyphRun: ?*anyopaque) void {
        qtc.QPainter_DrawGlyphRun(@ptrCast(self), @ptrCast(position), @ptrCast(glyphRun));
    }

    pub fn DrawStaticText(self: ?*anyopaque, topLeftPosition: ?*anyopaque, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText(@ptrCast(self), @ptrCast(topLeftPosition), @ptrCast(staticText));
    }

    pub fn DrawStaticText2(self: ?*anyopaque, topLeftPosition: ?*anyopaque, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText2(@ptrCast(self), @ptrCast(topLeftPosition), @ptrCast(staticText));
    }

    pub fn DrawStaticText3(self: ?*anyopaque, left: i32, top: i32, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText3(@ptrCast(self), left, top, @ptrCast(staticText));
    }

    pub fn DrawText(self: ?*anyopaque, p: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
qtc.QPainter_DrawText(@ptrCast(self), @ptrCast(p), s_str);
    }

    pub fn DrawText2(self: ?*anyopaque, p: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
qtc.QPainter_DrawText2(@ptrCast(self), @ptrCast(p), s_str);
    }

    pub fn DrawText3(self: ?*anyopaque, x: i32, y: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
qtc.QPainter_DrawText3(@ptrCast(self), x, y, s_str);
    }

    pub fn DrawText4(self: ?*anyopaque, p: ?*anyopaque, str: []const u8, tf: i32, justificationPadding: i32) void {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
qtc.QPainter_DrawText4(@ptrCast(self), @ptrCast(p), str_str, tf, justificationPadding);
    }

    pub fn DrawText5(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainter_DrawText5(@ptrCast(self), @ptrCast(r), flags, text_str);
    }

    pub fn DrawText6(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainter_DrawText6(@ptrCast(self), @ptrCast(r), flags, text_str);
    }

    pub fn DrawText7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainter_DrawText7(@ptrCast(self), x, y, w, h, flags, text_str);
    }

    pub fn DrawText8(self: ?*anyopaque, r: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainter_DrawText8(@ptrCast(self), @ptrCast(r), text_str);
    }

    pub fn BoundingRect(self: ?*anyopaque, rect: ?*anyopaque, flags: i32, text: []const u8) QtC.QRectF {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPainter_BoundingRect(@ptrCast(self), @ptrCast(rect), flags, text_str);
    }

    pub fn BoundingRect2(self: ?*anyopaque, rect: ?*anyopaque, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPainter_BoundingRect2(@ptrCast(self), @ptrCast(rect), flags, text_str);
    }

    pub fn BoundingRect3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPainter_BoundingRect3(@ptrCast(self), x, y, w, h, flags, text_str);
    }

    pub fn BoundingRect4(self: ?*anyopaque, rect: ?*anyopaque, text: []const u8) QtC.QRectF {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPainter_BoundingRect4(@ptrCast(self), @ptrCast(rect), text_str);
    }

    pub fn DrawTextItem(self: ?*anyopaque, p: ?*anyopaque, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem(@ptrCast(self), @ptrCast(p), @ptrCast(ti));
    }

    pub fn DrawTextItem2(self: ?*anyopaque, x: i32, y: i32, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem2(@ptrCast(self), x, y, @ptrCast(ti));
    }

    pub fn DrawTextItem3(self: ?*anyopaque, p: ?*anyopaque, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem3(@ptrCast(self), @ptrCast(p), @ptrCast(ti));
    }

    pub fn FillRect(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_FillRect(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn FillRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque) void {
        qtc.QPainter_FillRect2(@ptrCast(self), x, y, w, h, @ptrCast(param5));
    }

    pub fn FillRect3(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_FillRect3(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn FillRect4(self: ?*anyopaque, param1: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_FillRect4(@ptrCast(self), @ptrCast(param1), @ptrCast(color));
    }

    pub fn FillRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, color: ?*anyopaque) void {
        qtc.QPainter_FillRect5(@ptrCast(self), x, y, w, h, @ptrCast(color));
    }

    pub fn FillRect6(self: ?*anyopaque, param1: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_FillRect6(@ptrCast(self), @ptrCast(param1), @ptrCast(color));
    }

    pub fn FillRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, c: i32) void {
        qtc.QPainter_FillRect7(@ptrCast(self), x, y, w, h, @intCast(c));
    }

    pub fn FillRect8(self: ?*anyopaque, r: ?*anyopaque, c: i32) void {
        qtc.QPainter_FillRect8(@ptrCast(self), @ptrCast(r), @intCast(c));
    }

    pub fn FillRect9(self: ?*anyopaque, r: ?*anyopaque, c: i32) void {
        qtc.QPainter_FillRect9(@ptrCast(self), @ptrCast(r), @intCast(c));
    }

    pub fn FillRect10(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, style: i32) void {
        qtc.QPainter_FillRect10(@ptrCast(self), x, y, w, h, @intCast(style));
    }

    pub fn FillRect11(self: ?*anyopaque, r: ?*anyopaque, style: i32) void {
        qtc.QPainter_FillRect11(@ptrCast(self), @ptrCast(r), @intCast(style));
    }

    pub fn FillRect12(self: ?*anyopaque, r: ?*anyopaque, style: i32) void {
        qtc.QPainter_FillRect12(@ptrCast(self), @ptrCast(r), @intCast(style));
    }

    pub fn FillRect13(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, preset: i32) void {
        qtc.QPainter_FillRect13(@ptrCast(self), x, y, w, h, @intCast(preset));
    }

    pub fn FillRect14(self: ?*anyopaque, r: ?*anyopaque, preset: i32) void {
        qtc.QPainter_FillRect14(@ptrCast(self), @ptrCast(r), @intCast(preset));
    }

    pub fn FillRect15(self: ?*anyopaque, r: ?*anyopaque, preset: i32) void {
        qtc.QPainter_FillRect15(@ptrCast(self), @ptrCast(r), @intCast(preset));
    }

    pub fn EraseRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_EraseRect(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EraseRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_EraseRect2(@ptrCast(self), x, y, w, h);
    }

    pub fn EraseRect3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_EraseRect3(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetRenderHint(self: ?*anyopaque, hint: i32) void {
        qtc.QPainter_SetRenderHint(@ptrCast(self), @intCast(hint));
    }

    pub fn SetRenderHints(self: ?*anyopaque, hints: i32) void {
        qtc.QPainter_SetRenderHints(@ptrCast(self), @intCast(hints));
    }

    pub fn RenderHints(self: ?*anyopaque, ) i32 {
        return qtc.QPainter_RenderHints(@ptrCast(self));
    }

    pub fn TestRenderHint(self: ?*anyopaque, hint: i32) bool {
        return qtc.QPainter_TestRenderHint(@ptrCast(self), @intCast(hint));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPainter_PaintEngine(@ptrCast(self));
    }

    pub fn BeginNativePainting(self: ?*anyopaque, ) void {
        qtc.QPainter_BeginNativePainting(@ptrCast(self));
    }

    pub fn EndNativePainting(self: ?*anyopaque, ) void {
        qtc.QPainter_EndNativePainting(@ptrCast(self));
    }

    pub fn SetClipRect22(self: ?*anyopaque, param1: ?*anyopaque, op: i32) void {
        qtc.QPainter_SetClipRect22(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    pub fn SetClipRect23(self: ?*anyopaque, param1: ?*anyopaque, op: i32) void {
        qtc.QPainter_SetClipRect23(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    pub fn SetClipRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, op: i32) void {
        qtc.QPainter_SetClipRect5(@ptrCast(self), x, y, w, h, @intCast(op));
    }

    pub fn SetClipRegion2(self: ?*anyopaque, param1: ?*anyopaque, op: i32) void {
        qtc.QPainter_SetClipRegion2(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    pub fn SetClipPath2(self: ?*anyopaque, path: ?*anyopaque, op: i32) void {
        qtc.QPainter_SetClipPath2(@ptrCast(self), @ptrCast(path), @intCast(op));
    }

    pub fn SetTransform2(self: ?*anyopaque, transform: ?*anyopaque, combine: bool) void {
        qtc.QPainter_SetTransform2(@ptrCast(self), @ptrCast(transform), combine);
    }

    pub fn SetWorldTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QPainter_SetWorldTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    pub fn DrawPolygon32(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, fillRule: i32) void {
        qtc.QPainter_DrawPolygon32(@ptrCast(self), @ptrCast(points), pointCount, @intCast(fillRule));
    }

    pub fn DrawPolygon33(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, fillRule: i32) void {
        qtc.QPainter_DrawPolygon33(@ptrCast(self), @ptrCast(points), pointCount, @intCast(fillRule));
    }

    pub fn DrawRoundedRect4(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect4(@ptrCast(self), @ptrCast(rect), xRadius, yRadius, @intCast(mode));
    }

    pub fn DrawRoundedRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect7(@ptrCast(self), x, y, w, h, xRadius, yRadius, @intCast(mode));
    }

    pub fn DrawRoundedRect42(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect42(@ptrCast(self), @ptrCast(rect), xRadius, yRadius, @intCast(mode));
    }

    pub fn DrawTiledPixmap32(self: ?*anyopaque, rect: ?*anyopaque, pm: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap32(@ptrCast(self), @ptrCast(rect), @ptrCast(pm), @ptrCast(offset));
    }

    pub fn DrawTiledPixmap6(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque, sx: i32) void {
        qtc.QPainter_DrawTiledPixmap6(@ptrCast(self), x, y, w, h, @ptrCast(param5), sx);
    }

    pub fn DrawTiledPixmap7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque, sx: i32, sy: i32) void {
        qtc.QPainter_DrawTiledPixmap7(@ptrCast(self), x, y, w, h, @ptrCast(param5), sx, sy);
    }

    pub fn DrawTiledPixmap33(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap33(@ptrCast(self), @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
    }

    pub fn DrawPixmapFragments4(self: ?*anyopaque, fragments: ?*anyopaque, fragmentCount: i32, pixmap: ?*anyopaque, hints: i32) void {
        qtc.QPainter_DrawPixmapFragments4(@ptrCast(self), @ptrCast(fragments), fragmentCount, @ptrCast(pixmap), @intCast(hints));
    }

    pub fn DrawImage42(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque, flags: i32) void {
        qtc.QPainter_DrawImage42(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect), @intCast(flags));
    }

    pub fn DrawImage43(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque, flags: i32) void {
        qtc.QPainter_DrawImage43(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect), @intCast(flags));
    }

    pub fn DrawImage44(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque, flags: i32) void {
        qtc.QPainter_DrawImage44(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr), @intCast(flags));
    }

    pub fn DrawImage45(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque, flags: i32) void {
        qtc.QPainter_DrawImage45(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr), @intCast(flags));
    }

    pub fn DrawImage46(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32) void {
        qtc.QPainter_DrawImage46(@ptrCast(self), x, y, @ptrCast(image), sx);
    }

    pub fn DrawImage52(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32) void {
        qtc.QPainter_DrawImage52(@ptrCast(self), x, y, @ptrCast(image), sx, sy);
    }

    pub fn DrawImage62(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32) void {
        qtc.QPainter_DrawImage62(@ptrCast(self), x, y, @ptrCast(image), sx, sy, sw);
    }

    pub fn DrawImage72(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawImage72(@ptrCast(self), x, y, @ptrCast(image), sx, sy, sw, sh);
    }

    pub fn DrawImage82(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32, flags: i32) void {
        qtc.QPainter_DrawImage82(@ptrCast(self), x, y, @ptrCast(image), sx, sy, sw, sh, @intCast(flags));
    }

    pub fn DrawText42(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainter_DrawText42(@ptrCast(self), @ptrCast(r), flags, text_str, @ptrCast(br));
    }

    pub fn DrawText43(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainter_DrawText43(@ptrCast(self), @ptrCast(r), flags, text_str, @ptrCast(br));
    }

    pub fn DrawText72(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainter_DrawText72(@ptrCast(self), x, y, w, h, flags, text_str, @ptrCast(br));
    }

    pub fn DrawText32(self: ?*anyopaque, r: ?*anyopaque, text: []const u8, o: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainter_DrawText32(@ptrCast(self), @ptrCast(r), text_str, @ptrCast(o));
    }

    pub fn BoundingRect32(self: ?*anyopaque, rect: ?*anyopaque, text: []const u8, o: ?*anyopaque) QtC.QRectF {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QPainter_BoundingRect32(@ptrCast(self), @ptrCast(rect), text_str, @ptrCast(o));
    }

    pub fn SetRenderHint2(self: ?*anyopaque, hint: i32, on: bool) void {
        qtc.QPainter_SetRenderHint2(@ptrCast(self), @intCast(hint), on);
    }

    pub fn SetRenderHints2(self: ?*anyopaque, hints: i32, on: bool) void {
        qtc.QPainter_SetRenderHints2(@ptrCast(self), @intCast(hints), on);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainter-pixmapfragment.html
pub const qpainter__pixmapfragment = struct {

    /// New constructs a new QPainter::PixmapFragment object.
    pub fn New() QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_new();
    }


    /// New2 constructs a new QPainter::PixmapFragment object.
    pub fn New2(param1: ?*anyopaque) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_new2(@ptrCast(param1));
    }


    pub fn X(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_X(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QPainter__PixmapFragment_SetX(@ptrCast(self), x);
    }

    pub fn Y(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_Y(@ptrCast(self));
    }

    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QPainter__PixmapFragment_SetY(@ptrCast(self), y);
    }

    pub fn SourceLeft(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_SourceLeft(@ptrCast(self));
    }

    pub fn SetSourceLeft(self: ?*anyopaque, sourceLeft: f64) void {
        qtc.QPainter__PixmapFragment_SetSourceLeft(@ptrCast(self), sourceLeft);
    }

    pub fn SourceTop(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_SourceTop(@ptrCast(self));
    }

    pub fn SetSourceTop(self: ?*anyopaque, sourceTop: f64) void {
        qtc.QPainter__PixmapFragment_SetSourceTop(@ptrCast(self), sourceTop);
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_Width(@ptrCast(self));
    }

    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.QPainter__PixmapFragment_SetWidth(@ptrCast(self), width);
    }

    pub fn Height(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_Height(@ptrCast(self));
    }

    pub fn SetHeight(self: ?*anyopaque, height: f64) void {
        qtc.QPainter__PixmapFragment_SetHeight(@ptrCast(self), height);
    }

    pub fn ScaleX(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_ScaleX(@ptrCast(self));
    }

    pub fn SetScaleX(self: ?*anyopaque, scaleX: f64) void {
        qtc.QPainter__PixmapFragment_SetScaleX(@ptrCast(self), scaleX);
    }

    pub fn ScaleY(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_ScaleY(@ptrCast(self));
    }

    pub fn SetScaleY(self: ?*anyopaque, scaleY: f64) void {
        qtc.QPainter__PixmapFragment_SetScaleY(@ptrCast(self), scaleY);
    }

    pub fn Rotation(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_Rotation(@ptrCast(self));
    }

    pub fn SetRotation(self: ?*anyopaque, rotation: f64) void {
        qtc.QPainter__PixmapFragment_SetRotation(@ptrCast(self), rotation);
    }

    pub fn Opacity(self: ?*anyopaque, ) f64 {
        return qtc.QPainter__PixmapFragment_Opacity(@ptrCast(self));
    }

    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QPainter__PixmapFragment_SetOpacity(@ptrCast(self), opacity);
    }

    pub fn Create(pos: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create(@ptrCast(pos), @ptrCast(sourceRect));
    }

    pub fn Create3(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create3(@ptrCast(pos), @ptrCast(sourceRect), scaleX);
    }

    pub fn Create4(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create4(@ptrCast(pos), @ptrCast(sourceRect), scaleX, scaleY);
    }

    pub fn Create5(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64, rotation: f64) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create5(@ptrCast(pos), @ptrCast(sourceRect), scaleX, scaleY, rotation);
    }

    pub fn Create6(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64, rotation: f64, opacity: f64) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create6(@ptrCast(pos), @ptrCast(sourceRect), scaleX, scaleY, rotation, opacity);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainter__PixmapFragment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/painter.html#types
pub const enums = struct {
    pub const RenderHint = enum {
        pub const Antialiasing: i32 = 1;
        pub const TextAntialiasing: i32 = 2;
        pub const SmoothPixmapTransform: i32 = 4;
        pub const VerticalSubpixelPositioning: i32 = 8;
        pub const LosslessImageRendering: i32 = 64;
        pub const NonCosmeticBrushPatterns: i32 = 128;
    };

    pub const PixmapFragmentHint = enum {
        pub const OpaqueHint: i32 = 1;
    };

    pub const CompositionMode = enum {
        pub const CompositionMode_SourceOver: i32 = 0;
        pub const CompositionMode_DestinationOver: i32 = 1;
        pub const CompositionMode_Clear: i32 = 2;
        pub const CompositionMode_Source: i32 = 3;
        pub const CompositionMode_Destination: i32 = 4;
        pub const CompositionMode_SourceIn: i32 = 5;
        pub const CompositionMode_DestinationIn: i32 = 6;
        pub const CompositionMode_SourceOut: i32 = 7;
        pub const CompositionMode_DestinationOut: i32 = 8;
        pub const CompositionMode_SourceAtop: i32 = 9;
        pub const CompositionMode_DestinationAtop: i32 = 10;
        pub const CompositionMode_Xor: i32 = 11;
        pub const CompositionMode_Plus: i32 = 12;
        pub const CompositionMode_Multiply: i32 = 13;
        pub const CompositionMode_Screen: i32 = 14;
        pub const CompositionMode_Overlay: i32 = 15;
        pub const CompositionMode_Darken: i32 = 16;
        pub const CompositionMode_Lighten: i32 = 17;
        pub const CompositionMode_ColorDodge: i32 = 18;
        pub const CompositionMode_ColorBurn: i32 = 19;
        pub const CompositionMode_HardLight: i32 = 20;
        pub const CompositionMode_SoftLight: i32 = 21;
        pub const CompositionMode_Difference: i32 = 22;
        pub const CompositionMode_Exclusion: i32 = 23;
        pub const RasterOp_SourceOrDestination: i32 = 24;
        pub const RasterOp_SourceAndDestination: i32 = 25;
        pub const RasterOp_SourceXorDestination: i32 = 26;
        pub const RasterOp_NotSourceAndNotDestination: i32 = 27;
        pub const RasterOp_NotSourceOrNotDestination: i32 = 28;
        pub const RasterOp_NotSourceXorDestination: i32 = 29;
        pub const RasterOp_NotSource: i32 = 30;
        pub const RasterOp_NotSourceAndDestination: i32 = 31;
        pub const RasterOp_SourceAndNotDestination: i32 = 32;
        pub const RasterOp_NotSourceOrDestination: i32 = 33;
        pub const RasterOp_SourceOrNotDestination: i32 = 34;
        pub const RasterOp_ClearDestination: i32 = 35;
        pub const RasterOp_SetDestination: i32 = 36;
        pub const RasterOp_NotDestination: i32 = 37;
    };

};
