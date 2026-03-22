const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbrushdatapointerdeleter.html
pub const qbrushdatapointerdeleter = struct {

    /// New constructs a new QBrushDataPointerDeleter object.
    pub fn New(other: ?*anyopaque) QtC.QBrushDataPointerDeleter {
        return qtc.QBrushDataPointerDeleter_new(@ptrCast(other));
    }


    /// New2 constructs a new QBrushDataPointerDeleter object.
    pub fn New2(other: ?*anyopaque) QtC.QBrushDataPointerDeleter {
        return qtc.QBrushDataPointerDeleter_new2(@ptrCast(other));
    }


    /// New3 constructs a new QBrushDataPointerDeleter object.
    pub fn New3(param1: ?*anyopaque) QtC.QBrushDataPointerDeleter {
        return qtc.QBrushDataPointerDeleter_new3(@ptrCast(param1));
    }


    /// New4 constructs a new QBrushDataPointerDeleter object.
    pub fn New4() QtC.QBrushDataPointerDeleter {
        return qtc.QBrushDataPointerDeleter_new4();
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBrushDataPointerDeleter_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBrushDataPointerDeleter_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorCall(self: ?*anyopaque, d: ?*anyopaque) void {
        qtc.QBrushDataPointerDeleter_OperatorCall(@ptrCast(self), @ptrCast(d));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBrushDataPointerDeleter_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBrushDataPointerDeleter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qbrush.html
pub const qbrush = struct {

    /// New constructs a new QBrush object.
    pub fn New() QtC.QBrush {
        return qtc.QBrush_new();
    }


    /// New2 constructs a new QBrush object.
    pub fn New2(bs: i32) QtC.QBrush {
        return qtc.QBrush_new2(@intCast(bs));
    }


    /// New3 constructs a new QBrush object.
    pub fn New3(color: ?*anyopaque) QtC.QBrush {
        return qtc.QBrush_new3(@ptrCast(color));
    }


    /// New4 constructs a new QBrush object.
    pub fn New4(color: i32) QtC.QBrush {
        return qtc.QBrush_new4(@intCast(color));
    }


    /// New5 constructs a new QBrush object.
    pub fn New5(color: ?*anyopaque, pixmap: ?*anyopaque) QtC.QBrush {
        return qtc.QBrush_new5(@ptrCast(color), @ptrCast(pixmap));
    }


    /// New6 constructs a new QBrush object.
    pub fn New6(color: i32, pixmap: ?*anyopaque) QtC.QBrush {
        return qtc.QBrush_new6(@intCast(color), @ptrCast(pixmap));
    }


    /// New7 constructs a new QBrush object.
    pub fn New7(pixmap: ?*anyopaque) QtC.QBrush {
        return qtc.QBrush_new7(@ptrCast(pixmap));
    }


    /// New8 constructs a new QBrush object.
    pub fn New8(image: ?*anyopaque) QtC.QBrush {
        return qtc.QBrush_new8(@ptrCast(image));
    }


    /// New9 constructs a new QBrush object.
    pub fn New9(brush: ?*anyopaque) QtC.QBrush {
        return qtc.QBrush_new9(@ptrCast(brush));
    }


    /// New10 constructs a new QBrush object.
    pub fn New10(gradient: ?*anyopaque) QtC.QBrush {
        return qtc.QBrush_new10(@ptrCast(gradient));
    }


    /// New11 constructs a new QBrush object.
    pub fn New11(color: ?*anyopaque, bs: i32) QtC.QBrush {
        return qtc.QBrush_new11(@ptrCast(color), @intCast(bs));
    }


    /// New12 constructs a new QBrush object.
    pub fn New12(color: i32, bs: i32) QtC.QBrush {
        return qtc.QBrush_new12(@intCast(color), @intCast(bs));
    }


    pub fn OperatorAssign(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QBrush_OperatorAssign(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBrush_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QBrush_OperatorQVariant(@ptrCast(self));
    }

    pub fn Style(self: ?*anyopaque, ) i32 {
        return qtc.QBrush_Style(@ptrCast(self));
    }

    pub fn SetStyle(self: ?*anyopaque, style: i32) void {
        qtc.QBrush_SetStyle(@ptrCast(self), @intCast(style));
    }

    pub fn Transform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QBrush_Transform(@ptrCast(self));
    }

    pub fn SetTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        qtc.QBrush_SetTransform(@ptrCast(self), @ptrCast(transform));
    }

    pub fn Texture(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QBrush_Texture(@ptrCast(self));
    }

    pub fn SetTexture(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QBrush_SetTexture(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn TextureImage(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QBrush_TextureImage(@ptrCast(self));
    }

    pub fn SetTextureImage(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QBrush_SetTextureImage(@ptrCast(self), @ptrCast(image));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QBrush_Color(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QBrush_SetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn SetColor2(self: ?*anyopaque, color: i32) void {
        qtc.QBrush_SetColor2(@ptrCast(self), @intCast(color));
    }

    pub fn Gradient(self: ?*anyopaque, ) QtC.QGradient {
        return qtc.QBrush_Gradient(@ptrCast(self));
    }

    pub fn IsOpaque(self: ?*anyopaque, ) bool {
        return qtc.QBrush_IsOpaque(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, b: ?*anyopaque) bool {
        return qtc.QBrush_OperatorEqual(@ptrCast(self), @ptrCast(b));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, b: ?*anyopaque) bool {
        return qtc.QBrush_OperatorNotEqual(@ptrCast(self), @ptrCast(b));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QBrush_IsDetached(@ptrCast(self));
    }

    pub fn DataPtr(self: ?*anyopaque, ) std::unique_ptr<QBrushData, QBrushDataPointerDeleter> {
        return @ptrCast(qtc.QBrush_DataPtr(@ptrCast(self)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBrush_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qbrushdata.html
pub const qbrushdata = struct {

    /// New constructs a new QBrushData object.
    pub fn New(param1: ?*anyopaque) QtC.QBrushData {
        return qtc.QBrushData_new(@ptrCast(param1));
    }


    pub fn Ref(self: ?*anyopaque, ) QtC.QAtomicInt {
        return qtc.QBrushData_Ref(@ptrCast(self));
    }

    pub fn SetRef(self: ?*anyopaque, ref: QtC.QAtomicInt) void {
        qtc.QBrushData_SetRef(@ptrCast(self), @ptrCast(ref));
    }

    pub fn Style(self: ?*anyopaque, ) i32 {
        return qtc.QBrushData_Style(@ptrCast(self));
    }

    pub fn SetStyle(self: ?*anyopaque, style: i32) void {
        qtc.QBrushData_SetStyle(@ptrCast(self), @intCast(style));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QBrushData_Color(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBrushData_SetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn Transform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QBrushData_Transform(@ptrCast(self));
    }

    pub fn SetTransform(self: ?*anyopaque, transform: QtC.QTransform) void {
        qtc.QBrushData_SetTransform(@ptrCast(self), @ptrCast(transform));
    }
};

/// https://doc.qt.io/qt-6/qgradient.html
pub const qgradient = struct {

    /// New constructs a new QGradient object.
    pub fn New() QtC.QGradient {
        return qtc.QGradient_new();
    }


    /// New2 constructs a new QGradient object.
    pub fn New2(param1: i32) QtC.QGradient {
        return qtc.QGradient_new2(@intCast(param1));
    }


    /// New3 constructs a new QGradient object.
    pub fn New3(param1: ?*anyopaque) QtC.QGradient {
        return qtc.QGradient_new3(@ptrCast(param1));
    }


    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QGradient_Type(@ptrCast(self));
    }

    pub fn SetSpread(self: ?*anyopaque, spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self), @intCast(spread));
    }

    pub fn Spread(self: ?*anyopaque, ) i32 {
        return qtc.QGradient_Spread(@ptrCast(self));
    }

    pub fn SetColorAt(self: ?*anyopaque, pos: f64, color: ?*anyopaque) void {
        qtc.QGradient_SetColorAt(@ptrCast(self), pos, @ptrCast(color));
    }

    pub fn SetStops(self: ?*anyopaque, stops: []const u8) void {
        qtc.QGradient_SetStops(@ptrCast(self), @ptrCast(stops));
    }

    pub fn Stops(self: ?*anyopaque, ) []const u8 {
        return qtc.QGradient_Stops(@ptrCast(self));
    }

    pub fn CoordinateMode(self: ?*anyopaque, ) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self));
    }

    pub fn SetCoordinateMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self), @intCast(mode));
    }

    pub fn InterpolationMode(self: ?*anyopaque, ) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self));
    }

    pub fn SetInterpolationMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self), @intCast(mode));
    }

    pub fn OperatorEqual(self: ?*anyopaque, gradient: ?*anyopaque) bool {
        return qtc.QGradient_OperatorEqual(@ptrCast(self), @ptrCast(gradient));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGradient_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlineargradient.html
pub const qlineargradient = struct {

    /// New constructs a new QLinearGradient object.
    pub fn New() QtC.QLinearGradient {
        return qtc.QLinearGradient_new();
    }


    /// New2 constructs a new QLinearGradient object.
    pub fn New2(start: ?*anyopaque, finalStop: ?*anyopaque) QtC.QLinearGradient {
        return qtc.QLinearGradient_new2(@ptrCast(start), @ptrCast(finalStop));
    }


    /// New3 constructs a new QLinearGradient object.
    pub fn New3(xStart: f64, yStart: f64, xFinalStop: f64, yFinalStop: f64) QtC.QLinearGradient {
        return qtc.QLinearGradient_new3(xStart, yStart, xFinalStop, yFinalStop);
    }


    /// New4 constructs a new QLinearGradient object.
    pub fn New4(param1: ?*anyopaque) QtC.QLinearGradient {
        return qtc.QLinearGradient_new4(@ptrCast(param1));
    }


    pub fn Start(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QLinearGradient_Start(@ptrCast(self));
    }

    pub fn SetStart(self: ?*anyopaque, start: ?*anyopaque) void {
        qtc.QLinearGradient_SetStart(@ptrCast(self), @ptrCast(start));
    }

    pub fn SetStart2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QLinearGradient_SetStart2(@ptrCast(self), x, y);
    }

    pub fn FinalStop(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QLinearGradient_FinalStop(@ptrCast(self));
    }

    pub fn SetFinalStop(self: ?*anyopaque, stop: ?*anyopaque) void {
        qtc.QLinearGradient_SetFinalStop(@ptrCast(self), @ptrCast(stop));
    }

    pub fn SetFinalStop2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QLinearGradient_SetFinalStop2(@ptrCast(self), x, y);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLinearGradient_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLinearGradient_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qradialgradient.html
pub const qradialgradient = struct {

    /// New constructs a new QRadialGradient object.
    pub fn New() QtC.QRadialGradient {
        return qtc.QRadialGradient_new();
    }


    /// New2 constructs a new QRadialGradient object.
    pub fn New2(center: ?*anyopaque, radius: f64, focalPoint: ?*anyopaque) QtC.QRadialGradient {
        return qtc.QRadialGradient_new2(@ptrCast(center), radius, @ptrCast(focalPoint));
    }


    /// New3 constructs a new QRadialGradient object.
    pub fn New3(cx: f64, cy: f64, radius: f64, fx: f64, fy: f64) QtC.QRadialGradient {
        return qtc.QRadialGradient_new3(cx, cy, radius, fx, fy);
    }


    /// New4 constructs a new QRadialGradient object.
    pub fn New4(center: ?*anyopaque, radius: f64) QtC.QRadialGradient {
        return qtc.QRadialGradient_new4(@ptrCast(center), radius);
    }


    /// New5 constructs a new QRadialGradient object.
    pub fn New5(cx: f64, cy: f64, radius: f64) QtC.QRadialGradient {
        return qtc.QRadialGradient_new5(cx, cy, radius);
    }


    /// New6 constructs a new QRadialGradient object.
    pub fn New6(center: ?*anyopaque, centerRadius: f64, focalPoint: ?*anyopaque, focalRadius: f64) QtC.QRadialGradient {
        return qtc.QRadialGradient_new6(@ptrCast(center), centerRadius, @ptrCast(focalPoint), focalRadius);
    }


    /// New7 constructs a new QRadialGradient object.
    pub fn New7(cx: f64, cy: f64, centerRadius: f64, fx: f64, fy: f64, focalRadius: f64) QtC.QRadialGradient {
        return qtc.QRadialGradient_new7(cx, cy, centerRadius, fx, fy, focalRadius);
    }


    /// New8 constructs a new QRadialGradient object.
    pub fn New8(param1: ?*anyopaque) QtC.QRadialGradient {
        return qtc.QRadialGradient_new8(@ptrCast(param1));
    }


    pub fn Center(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QRadialGradient_Center(@ptrCast(self));
    }

    pub fn SetCenter(self: ?*anyopaque, center: ?*anyopaque) void {
        qtc.QRadialGradient_SetCenter(@ptrCast(self), @ptrCast(center));
    }

    pub fn SetCenter2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QRadialGradient_SetCenter2(@ptrCast(self), x, y);
    }

    pub fn FocalPoint(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QRadialGradient_FocalPoint(@ptrCast(self));
    }

    pub fn SetFocalPoint(self: ?*anyopaque, focalPoint: ?*anyopaque) void {
        qtc.QRadialGradient_SetFocalPoint(@ptrCast(self), @ptrCast(focalPoint));
    }

    pub fn SetFocalPoint2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QRadialGradient_SetFocalPoint2(@ptrCast(self), x, y);
    }

    pub fn Radius(self: ?*anyopaque, ) f64 {
        return qtc.QRadialGradient_Radius(@ptrCast(self));
    }

    pub fn SetRadius(self: ?*anyopaque, radius: f64) void {
        qtc.QRadialGradient_SetRadius(@ptrCast(self), radius);
    }

    pub fn CenterRadius(self: ?*anyopaque, ) f64 {
        return qtc.QRadialGradient_CenterRadius(@ptrCast(self));
    }

    pub fn SetCenterRadius(self: ?*anyopaque, radius: f64) void {
        qtc.QRadialGradient_SetCenterRadius(@ptrCast(self), radius);
    }

    pub fn FocalRadius(self: ?*anyopaque, ) f64 {
        return qtc.QRadialGradient_FocalRadius(@ptrCast(self));
    }

    pub fn SetFocalRadius(self: ?*anyopaque, radius: f64) void {
        qtc.QRadialGradient_SetFocalRadius(@ptrCast(self), radius);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRadialGradient_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRadialGradient_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qconicalgradient.html
pub const qconicalgradient = struct {

    /// New constructs a new QConicalGradient object.
    pub fn New() QtC.QConicalGradient {
        return qtc.QConicalGradient_new();
    }


    /// New2 constructs a new QConicalGradient object.
    pub fn New2(center: ?*anyopaque, startAngle: f64) QtC.QConicalGradient {
        return qtc.QConicalGradient_new2(@ptrCast(center), startAngle);
    }


    /// New3 constructs a new QConicalGradient object.
    pub fn New3(cx: f64, cy: f64, startAngle: f64) QtC.QConicalGradient {
        return qtc.QConicalGradient_new3(cx, cy, startAngle);
    }


    /// New4 constructs a new QConicalGradient object.
    pub fn New4(param1: ?*anyopaque) QtC.QConicalGradient {
        return qtc.QConicalGradient_new4(@ptrCast(param1));
    }


    pub fn Center(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QConicalGradient_Center(@ptrCast(self));
    }

    pub fn SetCenter(self: ?*anyopaque, center: ?*anyopaque) void {
        qtc.QConicalGradient_SetCenter(@ptrCast(self), @ptrCast(center));
    }

    pub fn SetCenter2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QConicalGradient_SetCenter2(@ptrCast(self), x, y);
    }

    pub fn Angle(self: ?*anyopaque, ) f64 {
        return qtc.QConicalGradient_Angle(@ptrCast(self));
    }

    pub fn SetAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QConicalGradient_SetAngle(@ptrCast(self), angle);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QConicalGradient_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QConicalGradient_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgradient-qgradientdata.html
pub const qgradient__qgradientdata = struct {

    /// New constructs a new QGradient::QGradientData object.
    pub fn New(param1: ?*anyopaque) QtC.QGradient__QGradientData {
        return qtc.QGradient__QGradientData_new(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGradient__QGradientData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGradient__QGradientData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/brush.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const LinearGradient: i32 = 0;
        pub const RadialGradient: i32 = 1;
        pub const ConicalGradient: i32 = 2;
        pub const NoGradient: i32 = 3;
    };

    pub const Spread = enum {
        pub const PadSpread: i32 = 0;
        pub const ReflectSpread: i32 = 1;
        pub const RepeatSpread: i32 = 2;
    };

    pub const CoordinateMode = enum {
        pub const LogicalMode: i32 = 0;
        pub const StretchToDeviceMode: i32 = 1;
        pub const ObjectBoundingMode: i32 = 2;
        pub const ObjectMode: i32 = 3;
    };

    pub const InterpolationMode = enum {
        pub const ColorInterpolation: i32 = 0;
        pub const ComponentInterpolation: i32 = 1;
    };

    pub const Preset = enum {
        pub const WarmFlame: i32 = 1;
        pub const NightFade: i32 = 2;
        pub const SpringWarmth: i32 = 3;
        pub const JuicyPeach: i32 = 4;
        pub const YoungPassion: i32 = 5;
        pub const LadyLips: i32 = 6;
        pub const SunnyMorning: i32 = 7;
        pub const RainyAshville: i32 = 8;
        pub const FrozenDreams: i32 = 9;
        pub const WinterNeva: i32 = 10;
        pub const DustyGrass: i32 = 11;
        pub const TemptingAzure: i32 = 12;
        pub const HeavyRain: i32 = 13;
        pub const AmyCrisp: i32 = 14;
        pub const MeanFruit: i32 = 15;
        pub const DeepBlue: i32 = 16;
        pub const RipeMalinka: i32 = 17;
        pub const CloudyKnoxville: i32 = 18;
        pub const MalibuBeach: i32 = 19;
        pub const NewLife: i32 = 20;
        pub const TrueSunset: i32 = 21;
        pub const MorpheusDen: i32 = 22;
        pub const RareWind: i32 = 23;
        pub const NearMoon: i32 = 24;
        pub const WildApple: i32 = 25;
        pub const SaintPetersburg: i32 = 26;
        pub const PlumPlate: i32 = 28;
        pub const EverlastingSky: i32 = 29;
        pub const HappyFisher: i32 = 30;
        pub const Blessing: i32 = 31;
        pub const SharpeyeEagle: i32 = 32;
        pub const LadogaBottom: i32 = 33;
        pub const LemonGate: i32 = 34;
        pub const ItmeoBranding: i32 = 35;
        pub const ZeusMiracle: i32 = 36;
        pub const OldHat: i32 = 37;
        pub const StarWine: i32 = 38;
        pub const HappyAcid: i32 = 41;
        pub const AwesomePine: i32 = 42;
        pub const NewYork: i32 = 43;
        pub const ShyRainbow: i32 = 44;
        pub const MixedHopes: i32 = 46;
        pub const FlyHigh: i32 = 47;
        pub const StrongBliss: i32 = 48;
        pub const FreshMilk: i32 = 49;
        pub const SnowAgain: i32 = 50;
        pub const FebruaryInk: i32 = 51;
        pub const KindSteel: i32 = 52;
        pub const SoftGrass: i32 = 53;
        pub const GrownEarly: i32 = 54;
        pub const SharpBlues: i32 = 55;
        pub const ShadyWater: i32 = 56;
        pub const DirtyBeauty: i32 = 57;
        pub const GreatWhale: i32 = 58;
        pub const TeenNotebook: i32 = 59;
        pub const PoliteRumors: i32 = 60;
        pub const SweetPeriod: i32 = 61;
        pub const WideMatrix: i32 = 62;
        pub const SoftCherish: i32 = 63;
        pub const RedSalvation: i32 = 64;
        pub const BurningSpring: i32 = 65;
        pub const NightParty: i32 = 66;
        pub const SkyGlider: i32 = 67;
        pub const HeavenPeach: i32 = 68;
        pub const PurpleDivision: i32 = 69;
        pub const AquaSplash: i32 = 70;
        pub const SpikyNaga: i32 = 72;
        pub const LoveKiss: i32 = 73;
        pub const CleanMirror: i32 = 75;
        pub const PremiumDark: i32 = 76;
        pub const ColdEvening: i32 = 77;
        pub const CochitiLake: i32 = 78;
        pub const SummerGames: i32 = 79;
        pub const PassionateBed: i32 = 80;
        pub const MountainRock: i32 = 81;
        pub const DesertHump: i32 = 82;
        pub const JungleDay: i32 = 83;
        pub const PhoenixStart: i32 = 84;
        pub const OctoberSilence: i32 = 85;
        pub const FarawayRiver: i32 = 86;
        pub const AlchemistLab: i32 = 87;
        pub const OverSun: i32 = 88;
        pub const PremiumWhite: i32 = 89;
        pub const MarsParty: i32 = 90;
        pub const EternalConstance: i32 = 91;
        pub const JapanBlush: i32 = 92;
        pub const SmilingRain: i32 = 93;
        pub const CloudyApple: i32 = 94;
        pub const BigMango: i32 = 95;
        pub const HealthyWater: i32 = 96;
        pub const AmourAmour: i32 = 97;
        pub const RiskyConcrete: i32 = 98;
        pub const StrongStick: i32 = 99;
        pub const ViciousStance: i32 = 100;
        pub const PaloAlto: i32 = 101;
        pub const HappyMemories: i32 = 102;
        pub const MidnightBloom: i32 = 103;
        pub const Crystalline: i32 = 104;
        pub const PartyBliss: i32 = 106;
        pub const ConfidentCloud: i32 = 107;
        pub const LeCocktail: i32 = 108;
        pub const RiverCity: i32 = 109;
        pub const FrozenBerry: i32 = 110;
        pub const ChildCare: i32 = 112;
        pub const FlyingLemon: i32 = 113;
        pub const NewRetrowave: i32 = 114;
        pub const HiddenJaguar: i32 = 115;
        pub const AboveTheSky: i32 = 116;
        pub const Nega: i32 = 117;
        pub const DenseWater: i32 = 118;
        pub const Seashore: i32 = 120;
        pub const MarbleWall: i32 = 121;
        pub const CheerfulCaramel: i32 = 122;
        pub const NightSky: i32 = 123;
        pub const MagicLake: i32 = 124;
        pub const YoungGrass: i32 = 125;
        pub const ColorfulPeach: i32 = 126;
        pub const GentleCare: i32 = 127;
        pub const PlumBath: i32 = 128;
        pub const HappyUnicorn: i32 = 129;
        pub const AfricanField: i32 = 131;
        pub const SolidStone: i32 = 132;
        pub const OrangeJuice: i32 = 133;
        pub const GlassWater: i32 = 134;
        pub const NorthMiracle: i32 = 136;
        pub const FruitBlend: i32 = 137;
        pub const MillenniumPine: i32 = 138;
        pub const HighFlight: i32 = 139;
        pub const MoleHall: i32 = 140;
        pub const SpaceShift: i32 = 142;
        pub const ForestInei: i32 = 143;
        pub const RoyalGarden: i32 = 144;
        pub const RichMetal: i32 = 145;
        pub const JuicyCake: i32 = 146;
        pub const SmartIndigo: i32 = 147;
        pub const SandStrike: i32 = 148;
        pub const NorseBeauty: i32 = 149;
        pub const AquaGuidance: i32 = 150;
        pub const SunVeggie: i32 = 151;
        pub const SeaLord: i32 = 152;
        pub const BlackSea: i32 = 153;
        pub const GrassShampoo: i32 = 154;
        pub const LandingAircraft: i32 = 155;
        pub const WitchDance: i32 = 156;
        pub const SleeplessNight: i32 = 157;
        pub const AngelCare: i32 = 158;
        pub const CrystalRiver: i32 = 159;
        pub const SoftLipstick: i32 = 160;
        pub const SaltMountain: i32 = 161;
        pub const PerfectWhite: i32 = 162;
        pub const FreshOasis: i32 = 163;
        pub const StrictNovember: i32 = 164;
        pub const MorningSalad: i32 = 165;
        pub const DeepRelief: i32 = 166;
        pub const SeaStrike: i32 = 167;
        pub const NightCall: i32 = 168;
        pub const SupremeSky: i32 = 169;
        pub const LightBlue: i32 = 170;
        pub const MindCrawl: i32 = 171;
        pub const LilyMeadow: i32 = 172;
        pub const SugarLollipop: i32 = 173;
        pub const SweetDessert: i32 = 174;
        pub const MagicRay: i32 = 175;
        pub const TeenParty: i32 = 176;
        pub const FrozenHeat: i32 = 177;
        pub const GagarinView: i32 = 178;
        pub const FabledSunset: i32 = 179;
        pub const PerfectBlue: i32 = 180;
        pub const NumPresets: i32 = 181;
    };

};
