const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpixelformat.html
pub const qpixelformat = struct {

    /// New constructs a new QPixelFormat object.
    pub fn New(other: ?*anyopaque) QtC.QPixelFormat {
        return qtc.QPixelFormat_new(@ptrCast(other));
    }


    /// New2 constructs a new QPixelFormat object.
    pub fn New2(other: ?*anyopaque) QtC.QPixelFormat {
        return qtc.QPixelFormat_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPixelFormat object.
    pub fn New3() QtC.QPixelFormat {
        return qtc.QPixelFormat_new3();
    }


    /// New4 constructs a new QPixelFormat object.
    pub fn New4(colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, alphaSize: u8, alphaUsage: i32, alphaPosition: i32, premultiplied: i32, typeInterpretation: i32) QtC.QPixelFormat {
        return qtc.QPixelFormat_new4(@intCast(colorModel), firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, @intCast(alphaUsage), @intCast(alphaPosition), @intCast(premultiplied), @intCast(typeInterpretation));
    }


    /// New5 constructs a new QPixelFormat object.
    pub fn New5(param1: ?*anyopaque) QtC.QPixelFormat {
        return qtc.QPixelFormat_new5(@ptrCast(param1));
    }


    /// New6 constructs a new QPixelFormat object.
    pub fn New6(colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, alphaSize: u8, alphaUsage: i32, alphaPosition: i32, premultiplied: i32, typeInterpretation: i32, byteOrder: i32) QtC.QPixelFormat {
        return qtc.QPixelFormat_new6(@intCast(colorModel), firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, @intCast(alphaUsage), @intCast(alphaPosition), @intCast(premultiplied), @intCast(typeInterpretation), @intCast(byteOrder));
    }


    /// New7 constructs a new QPixelFormat object.
    pub fn New7(colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, alphaSize: u8, alphaUsage: i32, alphaPosition: i32, premultiplied: i32, typeInterpretation: i32, byteOrder: i32, subEnum: u8) QtC.QPixelFormat {
        return qtc.QPixelFormat_new7(@intCast(colorModel), firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, @intCast(alphaUsage), @intCast(alphaPosition), @intCast(premultiplied), @intCast(typeInterpretation), @intCast(byteOrder), subEnum);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixelFormat_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixelFormat_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ColorModel(self: ?*anyopaque, ) i32 {
        return qtc.QPixelFormat_ColorModel(@ptrCast(self));
    }

    pub fn ChannelCount(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_ChannelCount(@ptrCast(self));
    }

    pub fn RedSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_RedSize(@ptrCast(self));
    }

    pub fn GreenSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_GreenSize(@ptrCast(self));
    }

    pub fn BlueSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_BlueSize(@ptrCast(self));
    }

    pub fn CyanSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_CyanSize(@ptrCast(self));
    }

    pub fn MagentaSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_MagentaSize(@ptrCast(self));
    }

    pub fn YellowSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_YellowSize(@ptrCast(self));
    }

    pub fn BlackSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_BlackSize(@ptrCast(self));
    }

    pub fn HueSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_HueSize(@ptrCast(self));
    }

    pub fn SaturationSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_SaturationSize(@ptrCast(self));
    }

    pub fn LightnessSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_LightnessSize(@ptrCast(self));
    }

    pub fn BrightnessSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_BrightnessSize(@ptrCast(self));
    }

    pub fn AlphaSize(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_AlphaSize(@ptrCast(self));
    }

    pub fn BitsPerPixel(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_BitsPerPixel(@ptrCast(self));
    }

    pub fn AlphaUsage(self: ?*anyopaque, ) i32 {
        return qtc.QPixelFormat_AlphaUsage(@ptrCast(self));
    }

    pub fn AlphaPosition(self: ?*anyopaque, ) i32 {
        return qtc.QPixelFormat_AlphaPosition(@ptrCast(self));
    }

    pub fn Premultiplied(self: ?*anyopaque, ) i32 {
        return qtc.QPixelFormat_Premultiplied(@ptrCast(self));
    }

    pub fn TypeInterpretation(self: ?*anyopaque, ) i32 {
        return qtc.QPixelFormat_TypeInterpretation(@ptrCast(self));
    }

    pub fn ByteOrder(self: ?*anyopaque, ) i32 {
        return qtc.QPixelFormat_ByteOrder(@ptrCast(self));
    }

    pub fn YuvLayout(self: ?*anyopaque, ) i32 {
        return qtc.QPixelFormat_YuvLayout(@ptrCast(self));
    }

    pub fn SubEnum(self: ?*anyopaque, ) u8 {
        return qtc.QPixelFormat_SubEnum(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPixelFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/pixelformat.html#types
pub const enums = struct {
    pub const ColorModel = enum {
        pub const RGB: i32 = 0;
        pub const BGR: i32 = 1;
        pub const Indexed: i32 = 2;
        pub const Grayscale: i32 = 3;
        pub const CMYK: i32 = 4;
        pub const HSL: i32 = 5;
        pub const HSV: i32 = 6;
        pub const YUV: i32 = 7;
        pub const Alpha: i32 = 8;
    };

    pub const AlphaUsage = enum {
        pub const UsesAlpha: i32 = 0;
        pub const IgnoresAlpha: i32 = 1;
    };

    pub const AlphaPosition = enum {
        pub const AtBeginning: i32 = 0;
        pub const AtEnd: i32 = 1;
    };

    pub const AlphaPremultiplied = enum {
        pub const NotPremultiplied: i32 = 0;
        pub const Premultiplied: i32 = 1;
    };

    pub const TypeInterpretation = enum {
        pub const UnsignedInteger: i32 = 0;
        pub const UnsignedShort: i32 = 1;
        pub const UnsignedByte: i32 = 2;
        pub const FloatingPoint: i32 = 3;
    };

    pub const YUVLayout = enum {
        pub const YUV444: i32 = 0;
        pub const YUV422: i32 = 1;
        pub const YUV411: i32 = 2;
        pub const YUV420P: i32 = 3;
        pub const YUV420SP: i32 = 4;
        pub const YV12: i32 = 5;
        pub const UYVY: i32 = 6;
        pub const YUYV: i32 = 7;
        pub const NV12: i32 = 8;
        pub const NV21: i32 = 9;
        pub const IMC1: i32 = 10;
        pub const IMC2: i32 = 11;
        pub const IMC3: i32 = 12;
        pub const IMC4: i32 = 13;
        pub const Y8: i32 = 14;
        pub const Y16: i32 = 15;
    };

    pub const ByteOrder = enum {
        pub const LittleEndian: i32 = 0;
        pub const BigEndian: i32 = 1;
        pub const CurrentSystemEndian: i32 = 2;
    };

};
