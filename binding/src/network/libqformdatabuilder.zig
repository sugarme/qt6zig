const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qformdatapartbuilder.html
pub const qformdatapartbuilder = struct {

    /// New constructs a new QFormDataPartBuilder object.
    pub fn New() QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_new();
    }


    /// New2 constructs a new QFormDataPartBuilder object.
    pub fn New2(param1: ?*anyopaque) QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_new2(@ptrCast(param1));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFormDataPartBuilder_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetBody(self: ?*anyopaque, data: []const u8) QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_SetBody(@ptrCast(self), @ptrCast(data));
    }

    pub fn SetBodyDevice(self: ?*anyopaque, body: ?*anyopaque) QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_SetBodyDevice(@ptrCast(self), @ptrCast(body));
    }

    pub fn SetHeaders(self: ?*anyopaque, headers: ?*anyopaque) QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_SetHeaders(@ptrCast(self), @ptrCast(headers));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormDataPartBuilder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qformdatabuilder.html
pub const qformdatabuilder = struct {

    /// New constructs a new QFormDataBuilder object.
    pub fn New() QtC.QFormDataBuilder {
        return qtc.QFormDataBuilder_new();
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFormDataBuilder_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormDataBuilder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/formdatabuilder.html#types
pub const enums = struct {
    pub const Option = enum {
        pub const Default: i32 = 0;
        pub const OmitRfc8187EncodedFilename: i32 = 1;
        pub const UseRfc7578PercentEncodedFilename: i32 = 2;
        pub const PreferLatin1EncodedFilename: i32 = 4;
        pub const StrictRfc7578: i32 = 3;
    };

};
