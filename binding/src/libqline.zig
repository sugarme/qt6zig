const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qline.html
pub const qline = struct {

    /// New constructs a new QLine object.
    pub fn New(other: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new(@ptrCast(other));
    }


    /// New2 constructs a new QLine object.
    pub fn New2(other: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new2(@ptrCast(other));
    }


    /// New3 constructs a new QLine object.
    pub fn New3() QtC.QLine {
        return qtc.QLine_new3();
    }


    /// New4 constructs a new QLine object.
    pub fn New4(pt1: ?*anyopaque, pt2: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new4(@ptrCast(pt1), @ptrCast(pt2));
    }


    /// New5 constructs a new QLine object.
    pub fn New5(x1: i32, y1: i32, x2: i32, y2: i32) QtC.QLine {
        return qtc.QLine_new5(x1, y1, x2, y2);
    }


    /// New6 constructs a new QLine object.
    pub fn New6(param1: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLine_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLine_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QLine_IsNull(@ptrCast(self));
    }

    pub fn P1(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QLine_P1(@ptrCast(self));
    }

    pub fn P2(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QLine_P2(@ptrCast(self));
    }

    pub fn X1(self: ?*anyopaque, ) i32 {
        return qtc.QLine_X1(@ptrCast(self));
    }

    pub fn Y1(self: ?*anyopaque, ) i32 {
        return qtc.QLine_Y1(@ptrCast(self));
    }

    pub fn X2(self: ?*anyopaque, ) i32 {
        return qtc.QLine_X2(@ptrCast(self));
    }

    pub fn Y2(self: ?*anyopaque, ) i32 {
        return qtc.QLine_Y2(@ptrCast(self));
    }

    pub fn Dx(self: ?*anyopaque, ) i32 {
        return qtc.QLine_Dx(@ptrCast(self));
    }

    pub fn Dy(self: ?*anyopaque, ) i32 {
        return qtc.QLine_Dy(@ptrCast(self));
    }

    pub fn Translate(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QLine_Translate(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translate2(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QLine_Translate2(@ptrCast(self), dx, dy);
    }

    pub fn Translated(self: ?*anyopaque, p: ?*anyopaque) QtC.QLine {
        return qtc.QLine_Translated(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translated2(self: ?*anyopaque, dx: i32, dy: i32) QtC.QLine {
        return qtc.QLine_Translated2(@ptrCast(self), dx, dy);
    }

    pub fn Center(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QLine_Center(@ptrCast(self));
    }

    pub fn SetP1(self: ?*anyopaque, p1: ?*anyopaque) void {
        qtc.QLine_SetP1(@ptrCast(self), @ptrCast(p1));
    }

    pub fn SetP2(self: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLine_SetP2(@ptrCast(self), @ptrCast(p2));
    }

    pub fn SetPoints(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLine_SetPoints(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    pub fn SetLine(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QLine_SetLine(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn ToLineF(self: ?*anyopaque, ) QtC.QLineF {
        return qtc.QLine_ToLineF(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlinef.html
pub const qlinef = struct {

    /// New constructs a new QLineF object.
    pub fn New(other: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new(@ptrCast(other));
    }


    /// New2 constructs a new QLineF object.
    pub fn New2(other: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new2(@ptrCast(other));
    }


    /// New3 constructs a new QLineF object.
    pub fn New3() QtC.QLineF {
        return qtc.QLineF_new3();
    }


    /// New4 constructs a new QLineF object.
    pub fn New4(pt1: ?*anyopaque, pt2: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new4(@ptrCast(pt1), @ptrCast(pt2));
    }


    /// New5 constructs a new QLineF object.
    pub fn New5(x1: f64, y1: f64, x2: f64, y2: f64) QtC.QLineF {
        return qtc.QLineF_new5(x1, y1, x2, y2);
    }


    /// New6 constructs a new QLineF object.
    pub fn New6(line: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new6(@ptrCast(line));
    }


    /// New7 constructs a new QLineF object.
    pub fn New7(param1: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new7(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLineF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLineF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn FromPolar(length: f64, angle: f64) QtC.QLineF {
        return qtc.QLineF_FromPolar(length, angle);
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QLineF_IsNull(@ptrCast(self));
    }

    pub fn P1(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QLineF_P1(@ptrCast(self));
    }

    pub fn P2(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QLineF_P2(@ptrCast(self));
    }

    pub fn X1(self: ?*anyopaque, ) f64 {
        return qtc.QLineF_X1(@ptrCast(self));
    }

    pub fn Y1(self: ?*anyopaque, ) f64 {
        return qtc.QLineF_Y1(@ptrCast(self));
    }

    pub fn X2(self: ?*anyopaque, ) f64 {
        return qtc.QLineF_X2(@ptrCast(self));
    }

    pub fn Y2(self: ?*anyopaque, ) f64 {
        return qtc.QLineF_Y2(@ptrCast(self));
    }

    pub fn Dx(self: ?*anyopaque, ) f64 {
        return qtc.QLineF_Dx(@ptrCast(self));
    }

    pub fn Dy(self: ?*anyopaque, ) f64 {
        return qtc.QLineF_Dy(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) f64 {
        return qtc.QLineF_Length(@ptrCast(self));
    }

    pub fn SetLength(self: ?*anyopaque, lenVal: f64) void {
        qtc.QLineF_SetLength(@ptrCast(self), lenVal);
    }

    pub fn Angle(self: ?*anyopaque, ) f64 {
        return qtc.QLineF_Angle(@ptrCast(self));
    }

    pub fn SetAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QLineF_SetAngle(@ptrCast(self), angle);
    }

    pub fn AngleTo(self: ?*anyopaque, l: ?*anyopaque) f64 {
        return qtc.QLineF_AngleTo(@ptrCast(self), @ptrCast(l));
    }

    pub fn UnitVector(self: ?*anyopaque, ) QtC.QLineF {
        return qtc.QLineF_UnitVector(@ptrCast(self));
    }

    pub fn NormalVector(self: ?*anyopaque, ) QtC.QLineF {
        return qtc.QLineF_NormalVector(@ptrCast(self));
    }

    pub fn Intersects(self: ?*anyopaque, l: ?*anyopaque) i32 {
        return qtc.QLineF_Intersects(@ptrCast(self), @ptrCast(l));
    }

    pub fn PointAt(self: ?*anyopaque, t: f64) QtC.QPointF {
        return qtc.QLineF_PointAt(@ptrCast(self), t);
    }

    pub fn Translate(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QLineF_Translate(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translate2(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QLineF_Translate2(@ptrCast(self), dx, dy);
    }

    pub fn Translated(self: ?*anyopaque, p: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_Translated(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translated2(self: ?*anyopaque, dx: f64, dy: f64) QtC.QLineF {
        return qtc.QLineF_Translated2(@ptrCast(self), dx, dy);
    }

    pub fn Center(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QLineF_Center(@ptrCast(self));
    }

    pub fn SetP1(self: ?*anyopaque, p1: ?*anyopaque) void {
        qtc.QLineF_SetP1(@ptrCast(self), @ptrCast(p1));
    }

    pub fn SetP2(self: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLineF_SetP2(@ptrCast(self), @ptrCast(p2));
    }

    pub fn SetPoints(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLineF_SetPoints(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    pub fn SetLine(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QLineF_SetLine(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn ToLine(self: ?*anyopaque, ) QtC.QLine {
        return qtc.QLineF_ToLine(@ptrCast(self));
    }

    pub fn Intersects2(self: ?*anyopaque, l: ?*anyopaque, intersectionPoint: ?*anyopaque) i32 {
        return qtc.QLineF_Intersects2(@ptrCast(self), @ptrCast(l), @ptrCast(intersectionPoint));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLineF_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/line.html#types
pub const enums = struct {
    pub const IntersectionType = enum {
        pub const NoIntersection: i32 = 0;
        pub const BoundedIntersection: i32 = 1;
        pub const UnboundedIntersection: i32 = 2;
    };

};
