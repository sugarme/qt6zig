const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qprinter.html
pub const qprinter = struct {

    /// New constructs a new QPrinter object.
    pub fn New() QtC.QPrinter {
        return qtc.QPrinter_new();
    }


    /// New2 constructs a new QPrinter object.
    pub fn New2(printer: ?*anyopaque) QtC.QPrinter {
        return qtc.QPrinter_new2(@ptrCast(printer));
    }


    /// New3 constructs a new QPrinter object.
    pub fn New3(mode: i32) QtC.QPrinter {
        return qtc.QPrinter_new3(@intCast(mode));
    }


    /// New4 constructs a new QPrinter object.
    pub fn New4(printer: ?*anyopaque, mode: i32) QtC.QPrinter {
        return qtc.QPrinter_new4(@ptrCast(printer), @intCast(mode));
    }


    pub fn DevType(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_DevType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPrinter_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDevType(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_QBaseDevType(@ptrCast(self));
    }

    pub fn SetOutputFormat(self: ?*anyopaque, format: i32) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self), @intCast(format));
    }

    pub fn OutputFormat(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self));
    }

    pub fn SetPdfVersion(self: ?*anyopaque, version: i32) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self), @intCast(version));
    }

    pub fn PdfVersion(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self));
    }

    pub fn SetPrinterName(self: ?*anyopaque, printerName: []const u8) void {
        const printerName_str = qtc.libqt_string{
    .len = printerName.len,
    .data = printerName.ptr,
};
qtc.QPrinter_SetPrinterName(@ptrCast(self), printerName_str);
    }

    pub fn PrinterName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrinterName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrinterName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self));
    }

    pub fn SetOutputFileName(self: ?*anyopaque, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
    .len = outputFileName.len,
    .data = outputFileName.ptr,
};
qtc.QPrinter_SetOutputFileName(@ptrCast(self), outputFileName_str);
    }

    pub fn OutputFileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_OutputFileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.OutputFileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPrintProgram(self: ?*anyopaque, printProgram: []const u8) void {
        const printProgram_str = qtc.libqt_string{
    .len = printProgram.len,
    .data = printProgram.ptr,
};
qtc.QPrinter_SetPrintProgram(@ptrCast(self), printProgram_str);
    }

    pub fn PrintProgram(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrintProgram(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrintProgram: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDocName(self: ?*anyopaque, docName: []const u8) void {
        const docName_str = qtc.libqt_string{
    .len = docName.len,
    .data = docName.ptr,
};
qtc.QPrinter_SetDocName(@ptrCast(self), docName_str);
    }

    pub fn DocName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_DocName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.DocName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCreator(self: ?*anyopaque, creator: []const u8) void {
        const creator_str = qtc.libqt_string{
    .len = creator.len,
    .data = creator.ptr,
};
qtc.QPrinter_SetCreator(@ptrCast(self), creator_str);
    }

    pub fn Creator(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_Creator(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.Creator: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPageOrder(self: ?*anyopaque, pageOrder: i32) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self), @intCast(pageOrder));
    }

    pub fn PageOrder(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_PageOrder(@ptrCast(self));
    }

    pub fn SetResolution(self: ?*anyopaque, resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self), resolution);
    }

    pub fn Resolution(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self));
    }

    pub fn SetColorMode(self: ?*anyopaque, colorMode: i32) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self), @intCast(colorMode));
    }

    pub fn ColorMode(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_ColorMode(@ptrCast(self));
    }

    pub fn SetCollateCopies(self: ?*anyopaque, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self), collate);
    }

    pub fn CollateCopies(self: ?*anyopaque, ) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self));
    }

    pub fn SetFullPage(self: ?*anyopaque, fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self), fullPage);
    }

    pub fn FullPage(self: ?*anyopaque, ) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self));
    }

    pub fn SetCopyCount(self: ?*anyopaque, copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self), copyCount);
    }

    pub fn CopyCount(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self));
    }

    pub fn SupportsMultipleCopies(self: ?*anyopaque, ) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self));
    }

    pub fn SetPaperSource(self: ?*anyopaque, paperSource: i32) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self), @intCast(paperSource));
    }

    pub fn PaperSource(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_PaperSource(@ptrCast(self));
    }

    pub fn SetDuplex(self: ?*anyopaque, duplex: i32) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self), @intCast(duplex));
    }

    pub fn Duplex(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_Duplex(@ptrCast(self));
    }

    pub fn SupportedResolutions(self: ?*anyopaque, ) []const u8 {
        return qtc.QPrinter_SupportedResolutions(@ptrCast(self));
    }

    pub fn SupportedPaperSources(self: ?*anyopaque, ) []const u8 {
        return qtc.QPrinter_SupportedPaperSources(@ptrCast(self));
    }

    pub fn SetFontEmbeddingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self), enable);
    }

    pub fn FontEmbeddingEnabled(self: ?*anyopaque, ) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self));
    }

    pub fn PaperRect(self: ?*anyopaque, param1: i32) QtC.QRectF {
        return qtc.QPrinter_PaperRect(@ptrCast(self), @intCast(param1));
    }

    pub fn PageRect(self: ?*anyopaque, param1: i32) QtC.QRectF {
        return qtc.QPrinter_PageRect(@ptrCast(self), @intCast(param1));
    }

    pub fn PrinterSelectionOption(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrinterSelectionOption: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPrinterSelectionOption(self: ?*anyopaque, printerSelectionOption: []const u8) void {
        const printerSelectionOption_str = qtc.libqt_string{
    .len = printerSelectionOption.len,
    .data = printerSelectionOption.ptr,
};
qtc.QPrinter_SetPrinterSelectionOption(@ptrCast(self), printerSelectionOption_str);
    }

    pub fn NewPage(self: ?*anyopaque, ) bool {
        return qtc.QPrinter_NewPage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNewPage(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QPrinter_OnNewPage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNewPage(self: ?*anyopaque, ) bool {
        return qtc.QPrinter_QBaseNewPage(@ptrCast(self));
    }

    pub fn Abort(self: ?*anyopaque, ) bool {
        return qtc.QPrinter_Abort(@ptrCast(self));
    }

    pub fn PrinterState(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_PrinterState(@ptrCast(self));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPrinter_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QPrinter_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPrinter_QBasePaintEngine(@ptrCast(self));
    }

    pub fn PrintEngine(self: ?*anyopaque, ) QtC.QPrintEngine {
        return qtc.QPrinter_PrintEngine(@ptrCast(self));
    }

    pub fn SetFromTo(self: ?*anyopaque, fromPage: i32, toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self), fromPage, toPage);
    }

    pub fn FromPage(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self));
    }

    pub fn ToPage(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self));
    }

    pub fn SetPrintRange(self: ?*anyopaque, range: i32) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self), @intCast(range));
    }

    pub fn PrintRange(self: ?*anyopaque, ) i32 {
        return qtc.QPrinter_PrintRange(@ptrCast(self));
    }

    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPrinter_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPrinter_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPrinter_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    pub fn SetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QPrinter_SetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// Allows for overriding the related default method
    pub fn OnSetEngines(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrinter_OnSetEngines(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QPrinter_QBaseSetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPrinter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/printer.html#types
pub const enums = struct {
    pub const PrinterMode = enum {
        pub const ScreenResolution: i32 = 0;
        pub const PrinterResolution: i32 = 1;
        pub const HighResolution: i32 = 2;
    };

    pub const PageOrder = enum {
        pub const FirstPageFirst: i32 = 0;
        pub const LastPageFirst: i32 = 1;
    };

    pub const ColorMode = enum {
        pub const GrayScale: i32 = 0;
        pub const Color: i32 = 1;
    };

    pub const PaperSource = enum {
        pub const OnlyOne: i32 = 0;
        pub const Lower: i32 = 1;
        pub const Middle: i32 = 2;
        pub const Manual: i32 = 3;
        pub const Envelope: i32 = 4;
        pub const EnvelopeManual: i32 = 5;
        pub const Auto: i32 = 6;
        pub const Tractor: i32 = 7;
        pub const SmallFormat: i32 = 8;
        pub const LargeFormat: i32 = 9;
        pub const LargeCapacity: i32 = 10;
        pub const Cassette: i32 = 11;
        pub const FormSource: i32 = 12;
        pub const MaxPageSource: i32 = 13;
        pub const CustomSource: i32 = 14;
        pub const LastPaperSource: i32 = 14;
        pub const Upper: i32 = 0;
    };

    pub const PrinterState = enum {
        pub const Idle: i32 = 0;
        pub const Active: i32 = 1;
        pub const Aborted: i32 = 2;
        pub const Error: i32 = 3;
    };

    pub const OutputFormat = enum {
        pub const NativeFormat: i32 = 0;
        pub const PdfFormat: i32 = 1;
    };

    pub const PrintRange = enum {
        pub const AllPages: i32 = 0;
        pub const Selection: i32 = 1;
        pub const PageRange: i32 = 2;
        pub const CurrentPage: i32 = 3;
    };

    pub const Unit = enum {
        pub const Millimeter: i32 = 0;
        pub const Point: i32 = 1;
        pub const Inch: i32 = 2;
        pub const Pica: i32 = 3;
        pub const Didot: i32 = 4;
        pub const Cicero: i32 = 5;
        pub const DevicePixel: i32 = 6;
    };

    pub const DuplexMode = enum {
        pub const DuplexNone: i32 = 0;
        pub const DuplexAuto: i32 = 1;
        pub const DuplexLongSide: i32 = 2;
        pub const DuplexShortSide: i32 = 3;
    };

};
