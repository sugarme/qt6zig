const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpainterpath.html
pub const qpainterpath = struct {

    /// New constructs a new QPainterPath object.
    pub fn New() QtC.QPainterPath {
        return qtc.QPainterPath_new();
    }


    /// New2 constructs a new QPainterPath object.
    pub fn New2(startPoint: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_new2(@ptrCast(startPoint));
    }


    /// New3 constructs a new QPainterPath object.
    pub fn New3(other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_new3(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPainterPath_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPainterPath_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QPainterPath_Clear(@ptrCast(self));
    }

    pub fn Reserve(self: ?*anyopaque, size: i32) void {
        qtc.QPainterPath_Reserve(@ptrCast(self), size);
    }

    pub fn Capacity(self: ?*anyopaque, ) i32 {
        return qtc.QPainterPath_Capacity(@ptrCast(self));
    }

    pub fn CloseSubpath(self: ?*anyopaque, ) void {
        qtc.QPainterPath_CloseSubpath(@ptrCast(self));
    }

    pub fn MoveTo(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPainterPath_MoveTo(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveTo2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QPainterPath_MoveTo2(@ptrCast(self), x, y);
    }

    pub fn LineTo(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPainterPath_LineTo(@ptrCast(self), @ptrCast(p));
    }

    pub fn LineTo2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QPainterPath_LineTo2(@ptrCast(self), x, y);
    }

    pub fn ArcMoveTo(self: ?*anyopaque, rect: ?*anyopaque, angle: f64) void {
        qtc.QPainterPath_ArcMoveTo(@ptrCast(self), @ptrCast(rect), angle);
    }

    pub fn ArcMoveTo2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, angle: f64) void {
        qtc.QPainterPath_ArcMoveTo2(@ptrCast(self), x, y, w, h, angle);
    }

    pub fn ArcTo(self: ?*anyopaque, rect: ?*anyopaque, startAngle: f64, arcLength: f64) void {
        qtc.QPainterPath_ArcTo(@ptrCast(self), @ptrCast(rect), startAngle, arcLength);
    }

    pub fn ArcTo2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, startAngle: f64, arcLength: f64) void {
        qtc.QPainterPath_ArcTo2(@ptrCast(self), x, y, w, h, startAngle, arcLength);
    }

    pub fn CubicTo(self: ?*anyopaque, ctrlPt1: ?*anyopaque, ctrlPt2: ?*anyopaque, endPt: ?*anyopaque) void {
        qtc.QPainterPath_CubicTo(@ptrCast(self), @ptrCast(ctrlPt1), @ptrCast(ctrlPt2), @ptrCast(endPt));
    }

    pub fn CubicTo2(self: ?*anyopaque, ctrlPt1x: f64, ctrlPt1y: f64, ctrlPt2x: f64, ctrlPt2y: f64, endPtx: f64, endPty: f64) void {
        qtc.QPainterPath_CubicTo2(@ptrCast(self), ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
    }

    pub fn QuadTo(self: ?*anyopaque, ctrlPt: ?*anyopaque, endPt: ?*anyopaque) void {
        qtc.QPainterPath_QuadTo(@ptrCast(self), @ptrCast(ctrlPt), @ptrCast(endPt));
    }

    pub fn QuadTo2(self: ?*anyopaque, ctrlPtx: f64, ctrlPty: f64, endPtx: f64, endPty: f64) void {
        qtc.QPainterPath_QuadTo2(@ptrCast(self), ctrlPtx, ctrlPty, endPtx, endPty);
    }

    pub fn CurrentPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPainterPath_CurrentPosition(@ptrCast(self));
    }

    pub fn AddRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainterPath_AddRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn AddRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QPainterPath_AddRect2(@ptrCast(self), x, y, w, h);
    }

    pub fn AddEllipse(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainterPath_AddEllipse(@ptrCast(self), @ptrCast(rect));
    }

    pub fn AddEllipse2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QPainterPath_AddEllipse2(@ptrCast(self), x, y, w, h);
    }

    pub fn AddEllipse3(self: ?*anyopaque, center: ?*anyopaque, rx: f64, ry: f64) void {
        qtc.QPainterPath_AddEllipse3(@ptrCast(self), @ptrCast(center), rx, ry);
    }

    pub fn AddPolygon(self: ?*anyopaque, polygon: ?*anyopaque) void {
        qtc.QPainterPath_AddPolygon(@ptrCast(self), @ptrCast(polygon));
    }

    pub fn AddText(self: ?*anyopaque, point: ?*anyopaque, f: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainterPath_AddText(@ptrCast(self), @ptrCast(point), @ptrCast(f), text_str);
    }

    pub fn AddText2(self: ?*anyopaque, x: f64, y: f64, f: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QPainterPath_AddText2(@ptrCast(self), x, y, @ptrCast(f), text_str);
    }

    pub fn AddPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainterPath_AddPath(@ptrCast(self), @ptrCast(path));
    }

    pub fn AddRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QPainterPath_AddRegion(@ptrCast(self), @ptrCast(region));
    }

    pub fn AddRoundedRect(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        qtc.QPainterPath_AddRoundedRect(@ptrCast(self), @ptrCast(rect), xRadius, yRadius);
    }

    pub fn AddRoundedRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64) void {
        qtc.QPainterPath_AddRoundedRect2(@ptrCast(self), x, y, w, h, xRadius, yRadius);
    }

    pub fn ConnectPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainterPath_ConnectPath(@ptrCast(self), @ptrCast(path));
    }

    pub fn Contains(self: ?*anyopaque, pt: ?*anyopaque) bool {
        return qtc.QPainterPath_Contains(@ptrCast(self), @ptrCast(pt));
    }

    pub fn Contains2(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QPainterPath_Contains2(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Intersects(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QPainterPath_Intersects(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QPainterPath_Translate(@ptrCast(self), dx, dy);
    }

    pub fn Translate2(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainterPath_Translate2(@ptrCast(self), @ptrCast(offset));
    }

    pub fn Translated(self: ?*anyopaque, dx: f64, dy: f64) QtC.QPainterPath {
        return qtc.QPainterPath_Translated(@ptrCast(self), dx, dy);
    }

    pub fn Translated2(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_Translated2(@ptrCast(self), @ptrCast(offset));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QPainterPath_BoundingRect(@ptrCast(self));
    }

    pub fn ControlPointRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QPainterPath_ControlPointRect(@ptrCast(self));
    }

    pub fn FillRule(self: ?*anyopaque, ) i32 {
        return qtc.QPainterPath_FillRule(@ptrCast(self));
    }

    pub fn SetFillRule(self: ?*anyopaque, fillRule: i32) void {
        qtc.QPainterPath_SetFillRule(@ptrCast(self), @intCast(fillRule));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QPainterPath_IsEmpty(@ptrCast(self));
    }

    pub fn ToReversed(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QPainterPath_ToReversed(@ptrCast(self));
    }

    pub fn ToSubpathPolygons(self: ?*anyopaque, ) []const u8 {
        return qtc.QPainterPath_ToSubpathPolygons(@ptrCast(self));
    }

    pub fn ToFillPolygons(self: ?*anyopaque, ) []const u8 {
        return qtc.QPainterPath_ToFillPolygons(@ptrCast(self));
    }

    pub fn ToFillPolygon(self: ?*anyopaque, ) QtC.QPolygonF {
        return qtc.QPainterPath_ToFillPolygon(@ptrCast(self));
    }

    pub fn ElementCount(self: ?*anyopaque, ) i32 {
        return qtc.QPainterPath_ElementCount(@ptrCast(self));
    }

    pub fn ElementAt(self: ?*anyopaque, i: i32) QtC.QPainterPath__Element {
        return qtc.QPainterPath_ElementAt(@ptrCast(self), i);
    }

    pub fn SetElementPositionAt(self: ?*anyopaque, i: i32, x: f64, y: f64) void {
        qtc.QPainterPath_SetElementPositionAt(@ptrCast(self), i, x, y);
    }

    pub fn Length(self: ?*anyopaque, ) f64 {
        return qtc.QPainterPath_Length(@ptrCast(self));
    }

    pub fn PercentAtLength(self: ?*anyopaque, t: f64) f64 {
        return qtc.QPainterPath_PercentAtLength(@ptrCast(self), t);
    }

    pub fn PointAtPercent(self: ?*anyopaque, t: f64) QtC.QPointF {
        return qtc.QPainterPath_PointAtPercent(@ptrCast(self), t);
    }

    pub fn AngleAtPercent(self: ?*anyopaque, t: f64) f64 {
        return qtc.QPainterPath_AngleAtPercent(@ptrCast(self), t);
    }

    pub fn SlopeAtPercent(self: ?*anyopaque, t: f64) f64 {
        return qtc.QPainterPath_SlopeAtPercent(@ptrCast(self), t);
    }

    pub fn Intersects2(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPainterPath_Intersects2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Contains3(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPainterPath_Contains3(@ptrCast(self), @ptrCast(p));
    }

    pub fn United(self: ?*anyopaque, r: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_United(@ptrCast(self), @ptrCast(r));
    }

    pub fn Intersected(self: ?*anyopaque, r: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_Intersected(@ptrCast(self), @ptrCast(r));
    }

    pub fn Subtracted(self: ?*anyopaque, r: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_Subtracted(@ptrCast(self), @ptrCast(r));
    }

    pub fn Simplified(self: ?*anyopaque, ) QtC.QPainterPath {
        return qtc.QPainterPath_Simplified(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPainterPath_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPainterPath_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorBitwiseAnd(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorBitwiseOr(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorBitwiseOr(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorPlus(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorPlus(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMinus(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorMinus(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPainterPath_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPainterPath_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorPlusAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorMinusAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn AddRoundedRect4(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainterPath_AddRoundedRect4(@ptrCast(self), @ptrCast(rect), xRadius, yRadius, @intCast(mode));
    }

    pub fn AddRoundedRect7(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainterPath_AddRoundedRect7(@ptrCast(self), x, y, w, h, xRadius, yRadius, @intCast(mode));
    }

    pub fn ToSubpathPolygons1(self: ?*anyopaque, matrix: ?*anyopaque) []const u8 {
        return qtc.QPainterPath_ToSubpathPolygons1(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn ToFillPolygons1(self: ?*anyopaque, matrix: ?*anyopaque) []const u8 {
        return qtc.QPainterPath_ToFillPolygons1(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn ToFillPolygon1(self: ?*anyopaque, matrix: ?*anyopaque) QtC.QPolygonF {
        return qtc.QPainterPath_ToFillPolygon1(@ptrCast(self), @ptrCast(matrix));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainterPath_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainterpathstroker.html
pub const qpainterpathstroker = struct {

    /// New constructs a new QPainterPathStroker object.
    pub fn New() QtC.QPainterPathStroker {
        return qtc.QPainterPathStroker_new();
    }


    /// New2 constructs a new QPainterPathStroker object.
    pub fn New2(pen: ?*anyopaque) QtC.QPainterPathStroker {
        return qtc.QPainterPathStroker_new2(@ptrCast(pen));
    }


    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.QPainterPathStroker_SetWidth(@ptrCast(self), width);
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QPainterPathStroker_Width(@ptrCast(self));
    }

    pub fn SetCapStyle(self: ?*anyopaque, style: i32) void {
        qtc.QPainterPathStroker_SetCapStyle(@ptrCast(self), @intCast(style));
    }

    pub fn CapStyle(self: ?*anyopaque, ) i32 {
        return qtc.QPainterPathStroker_CapStyle(@ptrCast(self));
    }

    pub fn SetJoinStyle(self: ?*anyopaque, style: i32) void {
        qtc.QPainterPathStroker_SetJoinStyle(@ptrCast(self), @intCast(style));
    }

    pub fn JoinStyle(self: ?*anyopaque, ) i32 {
        return qtc.QPainterPathStroker_JoinStyle(@ptrCast(self));
    }

    pub fn SetMiterLimit(self: ?*anyopaque, length: f64) void {
        qtc.QPainterPathStroker_SetMiterLimit(@ptrCast(self), length);
    }

    pub fn MiterLimit(self: ?*anyopaque, ) f64 {
        return qtc.QPainterPathStroker_MiterLimit(@ptrCast(self));
    }

    pub fn SetCurveThreshold(self: ?*anyopaque, threshold: f64) void {
        qtc.QPainterPathStroker_SetCurveThreshold(@ptrCast(self), threshold);
    }

    pub fn CurveThreshold(self: ?*anyopaque, ) f64 {
        return qtc.QPainterPathStroker_CurveThreshold(@ptrCast(self));
    }

    pub fn SetDashPattern(self: ?*anyopaque, dashPattern: i32) void {
        qtc.QPainterPathStroker_SetDashPattern(@ptrCast(self), @intCast(dashPattern));
    }

    pub fn SetDashPattern2(self: ?*anyopaque, dashPattern: []const u8) void {
        qtc.QPainterPathStroker_SetDashPattern2(@ptrCast(self), @ptrCast(dashPattern));
    }

    pub fn DashPattern(self: ?*anyopaque, ) []const u8 {
        return qtc.QPainterPathStroker_DashPattern(@ptrCast(self));
    }

    pub fn SetDashOffset(self: ?*anyopaque, offset: f64) void {
        qtc.QPainterPathStroker_SetDashOffset(@ptrCast(self), offset);
    }

    pub fn DashOffset(self: ?*anyopaque, ) f64 {
        return qtc.QPainterPathStroker_DashOffset(@ptrCast(self));
    }

    pub fn CreateStroke(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPathStroker_CreateStroke(@ptrCast(self), @ptrCast(path));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainterPathStroker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainterpath-element.html
pub const qpainterpath__element = struct {

    /// New constructs a new QPainterPath::Element object.
    pub fn New() QtC.QPainterPath__Element {
        return qtc.QPainterPath__Element_new();
    }


    /// New2 constructs a new QPainterPath::Element object.
    pub fn New2(param1: ?*anyopaque) QtC.QPainterPath__Element {
        return qtc.QPainterPath__Element_new2(@ptrCast(param1));
    }


    pub fn X(self: ?*anyopaque, ) f64 {
        return qtc.QPainterPath__Element_X(@ptrCast(self));
    }

    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QPainterPath__Element_SetX(@ptrCast(self), x);
    }

    pub fn Y(self: ?*anyopaque, ) f64 {
        return qtc.QPainterPath__Element_Y(@ptrCast(self));
    }

    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QPainterPath__Element_SetY(@ptrCast(self), y);
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QPainterPath__Element_Type(@ptrCast(self));
    }

    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QPainterPath__Element_SetType(@ptrCast(self), @intCast(_type));
    }

    pub fn IsMoveTo(self: ?*anyopaque, ) bool {
        return qtc.QPainterPath__Element_IsMoveTo(@ptrCast(self));
    }

    pub fn IsLineTo(self: ?*anyopaque, ) bool {
        return qtc.QPainterPath__Element_IsLineTo(@ptrCast(self));
    }

    pub fn IsCurveTo(self: ?*anyopaque, ) bool {
        return qtc.QPainterPath__Element_IsCurveTo(@ptrCast(self));
    }

    pub fn OperatorQPointF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPainterPath__Element_OperatorQPointF(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPainterPath__Element_OperatorEqual(@ptrCast(self), @ptrCast(e));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPainterPath__Element_OperatorNotEqual(@ptrCast(self), @ptrCast(e));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainterPath__Element_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/painterpath.html#types
pub const enums = struct {
    pub const ElementType = enum {
        pub const MoveToElement: i32 = 0;
        pub const LineToElement: i32 = 1;
        pub const CurveToElement: i32 = 2;
        pub const CurveToDataElement: i32 = 3;
    };

};
