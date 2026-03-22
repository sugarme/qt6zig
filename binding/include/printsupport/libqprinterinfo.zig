const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qprinterinfo.html
pub const qprinterinfo = struct {

    /// New constructs a new QPrinterInfo object.
    pub fn New() QtC.QPrinterInfo {
        return qtc.QPrinterInfo_new();
    }


    /// New2 constructs a new QPrinterInfo object.
    pub fn New2(other: ?*anyopaque) QtC.QPrinterInfo {
        return qtc.QPrinterInfo_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPrinterInfo object.
    pub fn New3(printer: ?*anyopaque) QtC.QPrinterInfo {
        return qtc.QPrinterInfo_new3(@ptrCast(printer));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPrinterInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn PrinterName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_PrinterName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.PrinterName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Location(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_Location(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.Location: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MakeAndModel(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_MakeAndModel(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.MakeAndModel: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QPrinterInfo_IsNull(@ptrCast(self));
    }

    pub fn IsDefault(self: ?*anyopaque, ) bool {
        return qtc.QPrinterInfo_IsDefault(@ptrCast(self));
    }

    pub fn IsRemote(self: ?*anyopaque, ) bool {
        return qtc.QPrinterInfo_IsRemote(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QPrinterInfo_State(@ptrCast(self));
    }

    pub fn SupportedPageSizes(self: ?*anyopaque, ) []const u8 {
        return qtc.QPrinterInfo_SupportedPageSizes(@ptrCast(self));
    }

    pub fn DefaultPageSize(self: ?*anyopaque, ) QtC.QPageSize {
        return qtc.QPrinterInfo_DefaultPageSize(@ptrCast(self));
    }

    pub fn SupportsCustomPageSizes(self: ?*anyopaque, ) bool {
        return qtc.QPrinterInfo_SupportsCustomPageSizes(@ptrCast(self));
    }

    pub fn MinimumPhysicalPageSize(self: ?*anyopaque, ) QtC.QPageSize {
        return qtc.QPrinterInfo_MinimumPhysicalPageSize(@ptrCast(self));
    }

    pub fn MaximumPhysicalPageSize(self: ?*anyopaque, ) QtC.QPageSize {
        return qtc.QPrinterInfo_MaximumPhysicalPageSize(@ptrCast(self));
    }

    pub fn SupportedResolutions(self: ?*anyopaque, ) []const u8 {
        return qtc.QPrinterInfo_SupportedResolutions(@ptrCast(self));
    }

    pub fn DefaultDuplexMode(self: ?*anyopaque, ) i32 {
        return qtc.QPrinterInfo_DefaultDuplexMode(@ptrCast(self));
    }

    pub fn SupportedDuplexModes(self: ?*anyopaque, ) []const u8 {
        return qtc.QPrinterInfo_SupportedDuplexModes(@ptrCast(self));
    }

    pub fn DefaultColorMode(self: ?*anyopaque, ) i32 {
        return qtc.QPrinterInfo_DefaultColorMode(@ptrCast(self));
    }

    pub fn SupportedColorModes(self: ?*anyopaque, ) []const u8 {
        return qtc.QPrinterInfo_SupportedColorModes(@ptrCast(self));
    }

    pub fn AvailablePrinterNames() []const u8 {
        return qtc.QPrinterInfo_AvailablePrinterNames();
    }

    pub fn AvailablePrinters() []const u8 {
        return qtc.QPrinterInfo_AvailablePrinters();
    }

    pub fn DefaultPrinterName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_DefaultPrinterName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.DefaultPrinterName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DefaultPrinter() QtC.QPrinterInfo {
        return qtc.QPrinterInfo_DefaultPrinter();
    }

    pub fn PrinterInfo(printerName: []const u8) QtC.QPrinterInfo {
        const printerName_str = qtc.libqt_string{
    .len = printerName.len,
    .data = printerName.ptr,
};
return qtc.QPrinterInfo_PrinterInfo(printerName_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPrinterInfo_Delete(@ptrCast(self));
    }
};
