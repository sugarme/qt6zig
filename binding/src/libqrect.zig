const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrect.html
pub const qrect = struct {

    /// New constructs a new QRect object.
    pub fn New(other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new(@ptrCast(other));
    }


    /// New2 constructs a new QRect object.
    pub fn New2(other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new2(@ptrCast(other));
    }


    /// New3 constructs a new QRect object.
    pub fn New3() QtC.QRect {
        return qtc.QRect_new3();
    }


    /// New4 constructs a new QRect object.
    pub fn New4(topleft: ?*anyopaque, bottomright: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new4(@ptrCast(topleft), @ptrCast(bottomright));
    }


    /// New5 constructs a new QRect object.
    pub fn New5(topleft: ?*anyopaque, size: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new5(@ptrCast(topleft), @ptrCast(size));
    }


    /// New6 constructs a new QRect object.
    pub fn New6(left: i32, top: i32, width: i32, height: i32) QtC.QRect {
        return qtc.QRect_new6(left, top, width, height);
    }


    /// New7 constructs a new QRect object.
    pub fn New7(param1: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new7(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRect_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRect_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QRect_IsNull(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QRect_IsEmpty(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QRect_IsValid(@ptrCast(self));
    }

    pub fn Left(self: ?*anyopaque, ) i32 {
        return qtc.QRect_Left(@ptrCast(self));
    }

    pub fn Top(self: ?*anyopaque, ) i32 {
        return qtc.QRect_Top(@ptrCast(self));
    }

    pub fn Right(self: ?*anyopaque, ) i32 {
        return qtc.QRect_Right(@ptrCast(self));
    }

    pub fn Bottom(self: ?*anyopaque, ) i32 {
        return qtc.QRect_Bottom(@ptrCast(self));
    }

    pub fn Normalized(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRect_Normalized(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QRect_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QRect_Y(@ptrCast(self));
    }

    pub fn SetLeft(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetLeft(@ptrCast(self), pos);
    }

    pub fn SetTop(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetTop(@ptrCast(self), pos);
    }

    pub fn SetRight(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetRight(@ptrCast(self), pos);
    }

    pub fn SetBottom(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetBottom(@ptrCast(self), pos);
    }

    pub fn SetX(self: ?*anyopaque, x: i32) void {
        qtc.QRect_SetX(@ptrCast(self), x);
    }

    pub fn SetY(self: ?*anyopaque, y: i32) void {
        qtc.QRect_SetY(@ptrCast(self), y);
    }

    pub fn SetTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetTopLeft(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetBottomRight(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetTopRight(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    pub fn TopLeft(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QRect_TopLeft(@ptrCast(self));
    }

    pub fn BottomRight(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QRect_BottomRight(@ptrCast(self));
    }

    pub fn TopRight(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QRect_TopRight(@ptrCast(self));
    }

    pub fn BottomLeft(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QRect_BottomLeft(@ptrCast(self));
    }

    pub fn Center(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QRect_Center(@ptrCast(self));
    }

    pub fn MoveLeft(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveLeft(@ptrCast(self), pos);
    }

    pub fn MoveTop(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveTop(@ptrCast(self), pos);
    }

    pub fn MoveRight(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveRight(@ptrCast(self), pos);
    }

    pub fn MoveBottom(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveBottom(@ptrCast(self), pos);
    }

    pub fn MoveTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveTopLeft(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveBottomRight(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveTopRight(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveCenter(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveCenter(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translate(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QRect_Translate(@ptrCast(self), dx, dy);
    }

    pub fn Translate2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_Translate2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translated(self: ?*anyopaque, dx: i32, dy: i32) QtC.QRect {
        return qtc.QRect_Translated(@ptrCast(self), dx, dy);
    }

    pub fn Translated2(self: ?*anyopaque, p: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Translated2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRect_Transposed(@ptrCast(self));
    }

    pub fn MoveTo(self: ?*anyopaque, x: i32, t: i32) void {
        qtc.QRect_MoveTo(@ptrCast(self), x, t);
    }

    pub fn MoveTo2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveTo2(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetRect(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QRect_SetRect(@ptrCast(self), x, y, w, h);
    }

    pub fn GetRect(self: ?*anyopaque, x: *i32, y: *i32, w: *i32, h: *i32) void {
        qtc.QRect_GetRect(@ptrCast(self), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    pub fn SetCoords(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_SetCoords(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GetCoords(self: ?*anyopaque, x1: *i32, y1: *i32, x2: *i32, y2: *i32) void {
        qtc.QRect_GetCoords(@ptrCast(self), @ptrCast(x1), @ptrCast(y1), @ptrCast(x2), @ptrCast(y2));
    }

    pub fn Adjust(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_Adjust(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn Adjusted(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) QtC.QRect {
        return qtc.QRect_Adjusted(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QRect_Size(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QRect_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QRect_Height(@ptrCast(self));
    }

    pub fn SetWidth(self: ?*anyopaque, w: i32) void {
        qtc.QRect_SetWidth(@ptrCast(self), w);
    }

    pub fn SetHeight(self: ?*anyopaque, h: i32) void {
        qtc.QRect_SetHeight(@ptrCast(self), h);
    }

    pub fn SetSize(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QRect_SetSize(@ptrCast(self), @ptrCast(s));
    }

    pub fn OperatorBitwiseOr(self: ?*anyopaque, r: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorBitwiseOr(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseAnd(self: ?*anyopaque, r: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRect_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRect_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn Contains(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRect_Contains(@ptrCast(self), @ptrCast(r));
    }

    pub fn Contains2(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QRect_Contains2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Contains3(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QRect_Contains3(@ptrCast(self), x, y);
    }

    pub fn Contains4(self: ?*anyopaque, x: i32, y: i32, proper: bool) bool {
        return qtc.QRect_Contains4(@ptrCast(self), x, y, proper);
    }

    pub fn United(self: ?*anyopaque, other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_United(@ptrCast(self), @ptrCast(other));
    }

    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Intersected(@ptrCast(self), @ptrCast(other));
    }

    pub fn Intersects(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRect_Intersects(@ptrCast(self), @ptrCast(r));
    }

    pub fn MarginsAdded(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_MarginsAdded(@ptrCast(self), @ptrCast(margins));
    }

    pub fn MarginsRemoved(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_MarginsRemoved(@ptrCast(self), @ptrCast(margins));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    pub fn Span(p1: ?*anyopaque, p2: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Span(@ptrCast(p1), @ptrCast(p2));
    }

    pub fn ToRectF(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QRect_ToRectF(@ptrCast(self));
    }

    pub fn Contains22(self: ?*anyopaque, r: ?*anyopaque, proper: bool) bool {
        return qtc.QRect_Contains22(@ptrCast(self), @ptrCast(r), proper);
    }

    pub fn Contains23(self: ?*anyopaque, p: ?*anyopaque, proper: bool) bool {
        return qtc.QRect_Contains23(@ptrCast(self), @ptrCast(p), proper);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qrectf.html
pub const qrectf = struct {

    /// New constructs a new QRectF object.
    pub fn New(other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new(@ptrCast(other));
    }


    /// New2 constructs a new QRectF object.
    pub fn New2(other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new2(@ptrCast(other));
    }


    /// New3 constructs a new QRectF object.
    pub fn New3() QtC.QRectF {
        return qtc.QRectF_new3();
    }


    /// New4 constructs a new QRectF object.
    pub fn New4(topleft: ?*anyopaque, size: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new4(@ptrCast(topleft), @ptrCast(size));
    }


    /// New5 constructs a new QRectF object.
    pub fn New5(topleft: ?*anyopaque, bottomRight: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new5(@ptrCast(topleft), @ptrCast(bottomRight));
    }


    /// New6 constructs a new QRectF object.
    pub fn New6(left: f64, top: f64, width: f64, height: f64) QtC.QRectF {
        return qtc.QRectF_new6(left, top, width, height);
    }


    /// New7 constructs a new QRectF object.
    pub fn New7(rect: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new7(@ptrCast(rect));
    }


    /// New8 constructs a new QRectF object.
    pub fn New8(param1: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new8(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRectF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRectF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QRectF_IsNull(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QRectF_IsEmpty(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QRectF_IsValid(@ptrCast(self));
    }

    pub fn Normalized(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QRectF_Normalized(@ptrCast(self));
    }

    pub fn Left(self: ?*anyopaque, ) f64 {
        return qtc.QRectF_Left(@ptrCast(self));
    }

    pub fn Top(self: ?*anyopaque, ) f64 {
        return qtc.QRectF_Top(@ptrCast(self));
    }

    pub fn Right(self: ?*anyopaque, ) f64 {
        return qtc.QRectF_Right(@ptrCast(self));
    }

    pub fn Bottom(self: ?*anyopaque, ) f64 {
        return qtc.QRectF_Bottom(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) f64 {
        return qtc.QRectF_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) f64 {
        return qtc.QRectF_Y(@ptrCast(self));
    }

    pub fn SetLeft(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetLeft(@ptrCast(self), pos);
    }

    pub fn SetTop(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetTop(@ptrCast(self), pos);
    }

    pub fn SetRight(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetRight(@ptrCast(self), pos);
    }

    pub fn SetBottom(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetBottom(@ptrCast(self), pos);
    }

    pub fn SetX(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetX(@ptrCast(self), pos);
    }

    pub fn SetY(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetY(@ptrCast(self), pos);
    }

    pub fn TopLeft(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QRectF_TopLeft(@ptrCast(self));
    }

    pub fn BottomRight(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QRectF_BottomRight(@ptrCast(self));
    }

    pub fn TopRight(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QRectF_TopRight(@ptrCast(self));
    }

    pub fn BottomLeft(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QRectF_BottomLeft(@ptrCast(self));
    }

    pub fn Center(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QRectF_Center(@ptrCast(self));
    }

    pub fn SetTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetTopLeft(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetBottomRight(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetTopRight(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveLeft(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveLeft(@ptrCast(self), pos);
    }

    pub fn MoveTop(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveTop(@ptrCast(self), pos);
    }

    pub fn MoveRight(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveRight(@ptrCast(self), pos);
    }

    pub fn MoveBottom(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveBottom(@ptrCast(self), pos);
    }

    pub fn MoveTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveTopLeft(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveBottomRight(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveTopRight(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    pub fn MoveCenter(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveCenter(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QRectF_Translate(@ptrCast(self), dx, dy);
    }

    pub fn Translate2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_Translate2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translated(self: ?*anyopaque, dx: f64, dy: f64) QtC.QRectF {
        return qtc.QRectF_Translated(@ptrCast(self), dx, dy);
    }

    pub fn Translated2(self: ?*anyopaque, p: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Translated2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QRectF_Transposed(@ptrCast(self));
    }

    pub fn MoveTo(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QRectF_MoveTo(@ptrCast(self), x, y);
    }

    pub fn MoveTo2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveTo2(@ptrCast(self), @ptrCast(p));
    }

    pub fn SetRect(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QRectF_SetRect(@ptrCast(self), x, y, w, h);
    }

    pub fn GetRect(self: ?*anyopaque, x: *f64, y: *f64, w: *f64, h: *f64) void {
        qtc.QRectF_GetRect(@ptrCast(self), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    pub fn SetCoords(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_SetCoords(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn GetCoords(self: ?*anyopaque, x1: *f64, y1: *f64, x2: *f64, y2: *f64) void {
        qtc.QRectF_GetCoords(@ptrCast(self), @ptrCast(x1), @ptrCast(y1), @ptrCast(x2), @ptrCast(y2));
    }

    pub fn Adjust(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_Adjust(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn Adjusted(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) QtC.QRectF {
        return qtc.QRectF_Adjusted(@ptrCast(self), x1, y1, x2, y2);
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QRectF_Size(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QRectF_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) f64 {
        return qtc.QRectF_Height(@ptrCast(self));
    }

    pub fn SetWidth(self: ?*anyopaque, w: f64) void {
        qtc.QRectF_SetWidth(@ptrCast(self), w);
    }

    pub fn SetHeight(self: ?*anyopaque, h: f64) void {
        qtc.QRectF_SetHeight(@ptrCast(self), h);
    }

    pub fn SetSize(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QRectF_SetSize(@ptrCast(self), @ptrCast(s));
    }

    pub fn OperatorBitwiseOr(self: ?*anyopaque, r: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorBitwiseOr(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseAnd(self: ?*anyopaque, r: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRectF_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRectF_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn Contains(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRectF_Contains(@ptrCast(self), @ptrCast(r));
    }

    pub fn Contains2(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QRectF_Contains2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Contains3(self: ?*anyopaque, x: f64, y: f64) bool {
        return qtc.QRectF_Contains3(@ptrCast(self), x, y);
    }

    pub fn United(self: ?*anyopaque, other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_United(@ptrCast(self), @ptrCast(other));
    }

    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Intersected(@ptrCast(self), @ptrCast(other));
    }

    pub fn Intersects(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRectF_Intersects(@ptrCast(self), @ptrCast(r));
    }

    pub fn MarginsAdded(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_MarginsAdded(@ptrCast(self), @ptrCast(margins));
    }

    pub fn MarginsRemoved(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_MarginsRemoved(@ptrCast(self), @ptrCast(margins));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    pub fn ToRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRectF_ToRect(@ptrCast(self));
    }

    pub fn ToAlignedRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRectF_ToAlignedRect(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRectF_Delete(@ptrCast(self));
    }
};
