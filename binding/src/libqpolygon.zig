const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpolygon.html
pub const qpolygon = struct {

    /// New constructs a new QPolygon object.
    pub fn New() QtC.QPolygon {
        return qtc.QPolygon_new();
    }


    /// New2 constructs a new QPolygon object.
    pub fn New2(v: []const u8) QtC.QPolygon {
        return qtc.QPolygon_new2(@ptrCast(v));
    }


    /// New3 constructs a new QPolygon object.
    pub fn New3(r: ?*anyopaque) QtC.QPolygon {
        return qtc.QPolygon_new3(@ptrCast(r));
    }


    /// New4 constructs a new QPolygon object.
    pub fn New4(nPoints: i32, points: *const i32) QtC.QPolygon {
        return qtc.QPolygon_new4(nPoints, @ptrCast(points));
    }


    /// New5 constructs a new QPolygon object.
    pub fn New5(r: ?*anyopaque, closed: bool) QtC.QPolygon {
        return qtc.QPolygon_new5(@ptrCast(r), closed);
    }


    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QPolygon_OperatorQVariant(@ptrCast(self));
    }

    pub fn Translate(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QPolygon_Translate(@ptrCast(self), dx, dy);
    }

    pub fn Translate2(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPolygon_Translate2(@ptrCast(self), @ptrCast(offset));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPolygon_BoundingRect(@ptrCast(self));
    }

    pub fn Point(self: ?*anyopaque, i: i32, x: *i32, y: *i32) void {
        qtc.QPolygon_Point(@ptrCast(self), i, @ptrCast(x), @ptrCast(y));
    }

    pub fn Point2(self: ?*anyopaque, i: i32) QtC.QPoint {
        return qtc.QPolygon_Point2(@ptrCast(self), i);
    }

    pub fn SetPoint(self: ?*anyopaque, index: i32, x: i32, y: i32) void {
        qtc.QPolygon_SetPoint(@ptrCast(self), index, x, y);
    }

    pub fn SetPoint2(self: ?*anyopaque, index: i32, p: ?*anyopaque) void {
        qtc.QPolygon_SetPoint2(@ptrCast(self), index, @ptrCast(p));
    }

    pub fn SetPoints(self: ?*anyopaque, nPoints: i32, points: *const i32) void {
        qtc.QPolygon_SetPoints(@ptrCast(self), nPoints, @ptrCast(points));
    }

    pub fn SetPoints2(self: ?*anyopaque, nPoints: i32, firstx: i32, firsty: i32, : ...) void {
        qtc.QPolygon_SetPoints2(@ptrCast(self), nPoints, firstx, firsty, );
    }

    pub fn PutPoints(self: ?*anyopaque, index: i32, nPoints: i32, points: *const i32) void {
        qtc.QPolygon_PutPoints(@ptrCast(self), index, nPoints, @ptrCast(points));
    }

    pub fn PutPoints2(self: ?*anyopaque, index: i32, nPoints: i32, firstx: i32, firsty: i32, : ...) void {
        qtc.QPolygon_PutPoints2(@ptrCast(self), index, nPoints, firstx, firsty, );
    }

    pub fn ContainsPoint(self: ?*anyopaque, pt: ?*anyopaque, fillRule: i32) bool {
        return qtc.QPolygon_ContainsPoint(@ptrCast(self), @ptrCast(pt), @intCast(fillRule));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPolygon_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpolygonf.html
pub const qpolygonf = struct {

    /// New constructs a new QPolygonF object.
    pub fn New() QtC.QPolygonF {
        return qtc.QPolygonF_new();
    }


    /// New2 constructs a new QPolygonF object.
    pub fn New2(v: []const u8) QtC.QPolygonF {
        return qtc.QPolygonF_new2(@ptrCast(v));
    }


    /// New3 constructs a new QPolygonF object.
    pub fn New3(r: ?*anyopaque) QtC.QPolygonF {
        return qtc.QPolygonF_new3(@ptrCast(r));
    }


    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QPolygonF_OperatorQVariant(@ptrCast(self));
    }

    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QPolygonF_Translate(@ptrCast(self), dx, dy);
    }

    pub fn Translate2(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPolygonF_Translate2(@ptrCast(self), @ptrCast(offset));
    }

    pub fn IsClosed(self: ?*anyopaque, ) bool {
        return qtc.QPolygonF_IsClosed(@ptrCast(self));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QPolygonF_BoundingRect(@ptrCast(self));
    }

    pub fn ContainsPoint(self: ?*anyopaque, pt: ?*anyopaque, fillRule: i32) bool {
        return qtc.QPolygonF_ContainsPoint(@ptrCast(self), @ptrCast(pt), @intCast(fillRule));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPolygonF_Delete(@ptrCast(self));
    }
};
