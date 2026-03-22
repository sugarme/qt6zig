const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextdocumentwriter.html
pub const qtextdocumentwriter = struct {

    /// New constructs a new QTextDocumentWriter object.
    pub fn New() QtC.QTextDocumentWriter {
        return qtc.QTextDocumentWriter_new();
    }


    /// New2 constructs a new QTextDocumentWriter object.
    pub fn New2(device: ?*anyopaque, format: []u8) QtC.QTextDocumentWriter {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QTextDocumentWriter_new2(@ptrCast(device), format_str);
    }


    /// New3 constructs a new QTextDocumentWriter object.
    pub fn New3(fileName: []const u8) QtC.QTextDocumentWriter {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QTextDocumentWriter_new3(fileName_str);
    }


    /// New4 constructs a new QTextDocumentWriter object.
    pub fn New4(fileName: []const u8, format: []u8) QtC.QTextDocumentWriter {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QTextDocumentWriter_new4(fileName_str, format_str);
    }


    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QTextDocumentWriter_SetFormat(@ptrCast(self), format_str);
    }

    pub fn Format(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QTextDocumentWriter_Format(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtextdocumentwriter.Format: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QTextDocumentWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QTextDocumentWriter_Device(@ptrCast(self));
    }

    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QTextDocumentWriter_SetFileName(@ptrCast(self), fileName_str);
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocumentWriter_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentwriter.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Write(self: ?*anyopaque, document: ?*anyopaque) bool {
        return qtc.QTextDocumentWriter_Write(@ptrCast(self), @ptrCast(document));
    }

    pub fn Write2(self: ?*anyopaque, fragment: ?*anyopaque) bool {
        return qtc.QTextDocumentWriter_Write2(@ptrCast(self), @ptrCast(fragment));
    }

    pub fn SupportedDocumentFormats() []const u8 {
        return qtc.QTextDocumentWriter_SupportedDocumentFormats();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextDocumentWriter_Delete(@ptrCast(self));
    }
};
