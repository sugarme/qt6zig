const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcolorspace.html
pub const qcolorspace = struct {

    /// New constructs a new QColorSpace object.
    pub fn New() QtC.QColorSpace {
        return qtc.QColorSpace_new();
    }


    /// New2 constructs a new QColorSpace object.
    pub fn New2(namedColorSpace: i32) QtC.QColorSpace {
        return qtc.QColorSpace_new2(@intCast(namedColorSpace));
    }


    /// New3 constructs a new QColorSpace object.
    pub fn New3(whitePoint: QtC.QPointF, transferFunction: i32) QtC.QColorSpace {
        return qtc.QColorSpace_new3(@ptrCast(whitePoint), @intCast(transferFunction));
    }


    /// New4 constructs a new QColorSpace object.
    pub fn New4(whitePoint: QtC.QPointF, transferFunctionTable: []const u8) QtC.QColorSpace {
        return qtc.QColorSpace_new4(@ptrCast(whitePoint), @ptrCast(transferFunctionTable));
    }


    /// New5 constructs a new QColorSpace object.
    pub fn New5(primaries: i32, transferFunction: i32) QtC.QColorSpace {
        return qtc.QColorSpace_new5(@intCast(primaries), @intCast(transferFunction));
    }


    /// New6 constructs a new QColorSpace object.
    pub fn New6(primaries: i32, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new6(@intCast(primaries), gamma);
    }


    /// New7 constructs a new QColorSpace object.
    pub fn New7(primaries: i32, transferFunctionTable: []const u8) QtC.QColorSpace {
        return qtc.QColorSpace_new7(@intCast(primaries), @ptrCast(transferFunctionTable));
    }


    /// New8 constructs a new QColorSpace object.
    pub fn New8(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunction: i32) QtC.QColorSpace {
        return qtc.QColorSpace_new8(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), @intCast(transferFunction));
    }


    /// New9 constructs a new QColorSpace object.
    pub fn New9(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunctionTable: []const u8) QtC.QColorSpace {
        return qtc.QColorSpace_new9(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), @ptrCast(transferFunctionTable));
    }


    /// New10 constructs a new QColorSpace object.
    pub fn New10(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, redTransferFunctionTable: []const u8, greenTransferFunctionTable: []const u8, blueTransferFunctionTable: []const u8) QtC.QColorSpace {
        return qtc.QColorSpace_new10(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), @ptrCast(redTransferFunctionTable), @ptrCast(greenTransferFunctionTable), @ptrCast(blueTransferFunctionTable));
    }


    /// New11 constructs a new QColorSpace object.
    pub fn New11(colorSpace: ?*anyopaque) QtC.QColorSpace {
        return qtc.QColorSpace_new11(@ptrCast(colorSpace));
    }


    /// New12 constructs a new QColorSpace object.
    pub fn New12(whitePoint: QtC.QPointF, transferFunction: i32, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new12(@ptrCast(whitePoint), @intCast(transferFunction), gamma);
    }


    /// New13 constructs a new QColorSpace object.
    pub fn New13(primaries: i32, transferFunction: i32, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new13(@intCast(primaries), @intCast(transferFunction), gamma);
    }


    /// New14 constructs a new QColorSpace object.
    pub fn New14(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunction: i32, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new14(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), @intCast(transferFunction), gamma);
    }


    pub fn OperatorAssign(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QColorSpace_OperatorAssign(@ptrCast(self), @ptrCast(colorSpace));
    }

    pub fn Swap(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QColorSpace_Swap(@ptrCast(self), @ptrCast(colorSpace));
    }

    pub fn Primaries(self: ?*anyopaque, ) i32 {
        return qtc.QColorSpace_Primaries(@ptrCast(self));
    }

    pub fn TransferFunction(self: ?*anyopaque, ) i32 {
        return qtc.QColorSpace_TransferFunction(@ptrCast(self));
    }

    pub fn Gamma(self: ?*anyopaque, ) f32 {
        return qtc.QColorSpace_Gamma(@ptrCast(self));
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColorSpace_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolorspace.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QColorSpace_SetDescription(@ptrCast(self), description_str);
    }

    pub fn SetTransferFunction(self: ?*anyopaque, transferFunction: i32) void {
        qtc.QColorSpace_SetTransferFunction(@ptrCast(self), @intCast(transferFunction));
    }

    pub fn SetTransferFunction2(self: ?*anyopaque, transferFunctionTable: []const u8) void {
        qtc.QColorSpace_SetTransferFunction2(@ptrCast(self), @ptrCast(transferFunctionTable));
    }

    pub fn SetTransferFunctions(self: ?*anyopaque, redTransferFunctionTable: []const u8, greenTransferFunctionTable: []const u8, blueTransferFunctionTable: []const u8) void {
        qtc.QColorSpace_SetTransferFunctions(@ptrCast(self), @ptrCast(redTransferFunctionTable), @ptrCast(greenTransferFunctionTable), @ptrCast(blueTransferFunctionTable));
    }

    pub fn WithTransferFunction(self: ?*anyopaque, transferFunction: i32) QtC.QColorSpace {
        return qtc.QColorSpace_WithTransferFunction(@ptrCast(self), @intCast(transferFunction));
    }

    pub fn WithTransferFunction2(self: ?*anyopaque, transferFunctionTable: []const u8) QtC.QColorSpace {
        return qtc.QColorSpace_WithTransferFunction2(@ptrCast(self), @ptrCast(transferFunctionTable));
    }

    pub fn WithTransferFunctions(self: ?*anyopaque, redTransferFunctionTable: []const u8, greenTransferFunctionTable: []const u8, blueTransferFunctionTable: []const u8) QtC.QColorSpace {
        return qtc.QColorSpace_WithTransferFunctions(@ptrCast(self), @ptrCast(redTransferFunctionTable), @ptrCast(greenTransferFunctionTable), @ptrCast(blueTransferFunctionTable));
    }

    pub fn SetPrimaries(self: ?*anyopaque, primariesId: i32) void {
        qtc.QColorSpace_SetPrimaries(@ptrCast(self), @intCast(primariesId));
    }

    pub fn SetPrimaries2(self: ?*anyopaque, whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque) void {
        qtc.QColorSpace_SetPrimaries2(@ptrCast(self), @ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint));
    }

    pub fn SetWhitePoint(self: ?*anyopaque, whitePoint: QtC.QPointF) void {
        qtc.QColorSpace_SetWhitePoint(@ptrCast(self), @ptrCast(whitePoint));
    }

    pub fn WhitePoint(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QColorSpace_WhitePoint(@ptrCast(self));
    }

    pub fn TransformModel(self: ?*anyopaque, ) u8 {
        return qtc.QColorSpace_TransformModel(@ptrCast(self));
    }

    pub fn ColorModel(self: ?*anyopaque, ) i32 {
        return qtc.QColorSpace_ColorModel(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QColorSpace_Detach(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QColorSpace_IsValid(@ptrCast(self));
    }

    pub fn IsValidTarget(self: ?*anyopaque, ) bool {
        return qtc.QColorSpace_IsValidTarget(@ptrCast(self));
    }

    pub fn FromIccProfile(iccProfile: []u8) QtC.QColorSpace {
        const iccProfile_str = qtc.libqt_string{
    .len = iccProfile.len,
    .data = iccProfile.ptr,
};
return qtc.QColorSpace_FromIccProfile(iccProfile_str);
    }

    pub fn IccProfile(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QColorSpace_IccProfile(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcolorspace.IccProfile: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn TransformationToColorSpace(self: ?*anyopaque, colorspace: ?*anyopaque) QtC.QColorTransform {
        return qtc.QColorSpace_TransformationToColorSpace(@ptrCast(self), @ptrCast(colorspace));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QColorSpace_OperatorQVariant(@ptrCast(self));
    }

    pub fn SetTransferFunction22(self: ?*anyopaque, transferFunction: i32, gamma: f32) void {
        qtc.QColorSpace_SetTransferFunction22(@ptrCast(self), @intCast(transferFunction), gamma);
    }

    pub fn WithTransferFunction22(self: ?*anyopaque, transferFunction: i32, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_WithTransferFunction22(@ptrCast(self), @intCast(transferFunction), gamma);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColorSpace_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/colorspace.html#types
pub const enums = struct {
    pub const NamedColorSpace = enum {
        pub const SRgb: i32 = 1;
        pub const SRgbLinear: i32 = 2;
        pub const AdobeRgb: i32 = 3;
        pub const DisplayP3: i32 = 4;
        pub const ProPhotoRgb: i32 = 5;
        pub const Bt2020: i32 = 6;
        pub const Bt2100Pq: i32 = 7;
        pub const Bt2100Hlg: i32 = 8;
    };

    pub const Primaries = enum {
        pub const Custom: i32 = 0;
        pub const SRgb: i32 = 1;
        pub const AdobeRgb: i32 = 2;
        pub const DciP3D65: i32 = 3;
        pub const ProPhotoRgb: i32 = 4;
        pub const Bt2020: i32 = 5;
    };

    pub const TransferFunction = enum {
        pub const Custom: i32 = 0;
        pub const Linear: i32 = 1;
        pub const Gamma: i32 = 2;
        pub const SRgb: i32 = 3;
        pub const ProPhotoRgb: i32 = 4;
        pub const Bt2020: i32 = 5;
        pub const St2084: i32 = 6;
        pub const Hlg: i32 = 7;
    };

    pub const TransformModel = enum {
        pub const ThreeComponentMatrix: u8 = 0;
        pub const ElementListProcessing: u8 = 1;
    };

    pub const ColorModel = enum {
        pub const Undefined: u8 = 0;
        pub const Rgb: u8 = 1;
        pub const Gray: u8 = 2;
        pub const Cmyk: u8 = 3;
    };

};
