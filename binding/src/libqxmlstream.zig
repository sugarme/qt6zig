const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qxmlstreamattribute.html
pub const qxmlstreamattribute = struct {

    /// New constructs a new QXmlStreamAttribute object.
    pub fn New() QtC.QXmlStreamAttribute {
        return qtc.QXmlStreamAttribute_new();
    }


    /// New2 constructs a new QXmlStreamAttribute object.
    pub fn New2(qualifiedName: []const u8, value: []const u8) QtC.QXmlStreamAttribute {
        const qualifiedName_str = qtc.libqt_string{
    .len = qualifiedName.len,
    .data = qualifiedName.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
return qtc.QXmlStreamAttribute_new2(qualifiedName_str, value_str);
    }


    /// New3 constructs a new QXmlStreamAttribute object.
    pub fn New3(namespaceUri: []const u8, name: []const u8, value: []const u8) QtC.QXmlStreamAttribute {
        const namespaceUri_str = qtc.libqt_string{
    .len = namespaceUri.len,
    .data = namespaceUri.ptr,
};
const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
return qtc.QXmlStreamAttribute_new3(namespaceUri_str, name_str, value_str);
    }


    /// New4 constructs a new QXmlStreamAttribute object.
    pub fn New4(param1: ?*anyopaque) QtC.QXmlStreamAttribute {
        return qtc.QXmlStreamAttribute_new4(@ptrCast(param1));
    }


    pub fn IsDefault(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamAttribute_IsDefault(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamAttribute_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamattributes.html
pub const qxmlstreamattributes = struct {

    /// New constructs a new QXmlStreamAttributes object.
    pub fn New() QtC.QXmlStreamAttributes {
        return qtc.QXmlStreamAttributes_new();
    }


    pub fn Append(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8, value: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
    .len = namespaceUri.len,
    .data = namespaceUri.ptr,
};
const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QXmlStreamAttributes_Append(@ptrCast(self), namespaceUri_str, name_str, value_str);
    }

    pub fn Append2(self: ?*anyopaque, qualifiedName: []const u8, value: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
    .len = qualifiedName.len,
    .data = qualifiedName.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QXmlStreamAttributes_Append2(@ptrCast(self), qualifiedName_str, value_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamAttributes_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html
pub const qxmlstreamnamespacedeclaration = struct {

    /// New constructs a new QXmlStreamNamespaceDeclaration object.
    pub fn New() QtC.QXmlStreamNamespaceDeclaration {
        return qtc.QXmlStreamNamespaceDeclaration_new();
    }


    /// New2 constructs a new QXmlStreamNamespaceDeclaration object.
    pub fn New2(prefix: []const u8, namespaceUri: []const u8) QtC.QXmlStreamNamespaceDeclaration {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
const namespaceUri_str = qtc.libqt_string{
    .len = namespaceUri.len,
    .data = namespaceUri.ptr,
};
return qtc.QXmlStreamNamespaceDeclaration_new2(prefix_str, namespaceUri_str);
    }


    /// New3 constructs a new QXmlStreamNamespaceDeclaration object.
    pub fn New3(param1: ?*anyopaque) QtC.QXmlStreamNamespaceDeclaration {
        return qtc.QXmlStreamNamespaceDeclaration_new3(@ptrCast(param1));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamNamespaceDeclaration_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html
pub const qxmlstreamnotationdeclaration = struct {

    /// New constructs a new QXmlStreamNotationDeclaration object.
    pub fn New() QtC.QXmlStreamNotationDeclaration {
        return qtc.QXmlStreamNotationDeclaration_new();
    }


    /// New2 constructs a new QXmlStreamNotationDeclaration object.
    pub fn New2(param1: ?*anyopaque) QtC.QXmlStreamNotationDeclaration {
        return qtc.QXmlStreamNotationDeclaration_new2(@ptrCast(param1));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamNotationDeclaration_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html
pub const qxmlstreamentitydeclaration = struct {

    /// New constructs a new QXmlStreamEntityDeclaration object.
    pub fn New() QtC.QXmlStreamEntityDeclaration {
        return qtc.QXmlStreamEntityDeclaration_new();
    }


    /// New2 constructs a new QXmlStreamEntityDeclaration object.
    pub fn New2(param1: ?*anyopaque) QtC.QXmlStreamEntityDeclaration {
        return qtc.QXmlStreamEntityDeclaration_new2(@ptrCast(param1));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamEntityDeclaration_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamentityresolver.html
pub const qxmlstreamentityresolver = struct {

    /// New constructs a new QXmlStreamEntityResolver object.
    pub fn New() QtC.QXmlStreamEntityResolver {
        return qtc.QXmlStreamEntityResolver_new();
    }


    pub fn ResolveEntity(self: ?*anyopaque, publicId: []const u8, systemId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const publicId_str = qtc.libqt_string{
    .len = publicId.len,
    .data = publicId.ptr,
};
const systemId_str = qtc.libqt_string{
    .len = systemId.len,
    .data = systemId.ptr,
};
const _str = qtc.QXmlStreamEntityResolver_ResolveEntity(@ptrCast(self), publicId_str, systemId_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveEntity: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnResolveEntity(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveEntity(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResolveEntity(self: ?*anyopaque, publicId: []const u8, systemId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const publicId_str = qtc.libqt_string{
    .len = publicId.len,
    .data = publicId.ptr,
};
const systemId_str = qtc.libqt_string{
    .len = systemId.len,
    .data = systemId.ptr,
};
const _str = qtc.QXmlStreamEntityResolver_QBaseResolveEntity(@ptrCast(self), publicId_str, systemId_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveEntity: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ResolveUndeclaredEntity(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QXmlStreamEntityResolver_ResolveUndeclaredEntity(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveUndeclaredEntity: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnResolveUndeclaredEntity(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveUndeclaredEntity(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResolveUndeclaredEntity(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QXmlStreamEntityResolver_QBaseResolveUndeclaredEntity(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveUndeclaredEntity: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamEntityResolver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamreader.html
pub const qxmlstreamreader = struct {

    /// New constructs a new QXmlStreamReader object.
    pub fn New() QtC.QXmlStreamReader {
        return qtc.QXmlStreamReader_new();
    }


    /// New2 constructs a new QXmlStreamReader object.
    pub fn New2(device: ?*anyopaque) QtC.QXmlStreamReader {
        return qtc.QXmlStreamReader_new2(@ptrCast(device));
    }


    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QXmlStreamReader_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QXmlStreamReader_Device(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QXmlStreamReader_Clear(@ptrCast(self));
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_AtEnd(@ptrCast(self));
    }

    pub fn ReadNext(self: ?*anyopaque, ) i32 {
        return qtc.QXmlStreamReader_ReadNext(@ptrCast(self));
    }

    pub fn ReadNextStartElement(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_ReadNextStartElement(@ptrCast(self));
    }

    pub fn SkipCurrentElement(self: ?*anyopaque, ) void {
        qtc.QXmlStreamReader_SkipCurrentElement(@ptrCast(self));
    }

    pub fn TokenType(self: ?*anyopaque, ) i32 {
        return qtc.QXmlStreamReader_TokenType(@ptrCast(self));
    }

    pub fn TokenString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXmlStreamReader_TokenString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.TokenString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNamespaceProcessing(self: ?*anyopaque, namespaceProcessing: bool) void {
        qtc.QXmlStreamReader_SetNamespaceProcessing(@ptrCast(self), namespaceProcessing);
    }

    pub fn NamespaceProcessing(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_NamespaceProcessing(@ptrCast(self));
    }

    pub fn IsStartDocument(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsStartDocument(@ptrCast(self));
    }

    pub fn IsEndDocument(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsEndDocument(@ptrCast(self));
    }

    pub fn IsStartElement(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsStartElement(@ptrCast(self));
    }

    pub fn IsEndElement(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsEndElement(@ptrCast(self));
    }

    pub fn IsCharacters(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsCharacters(@ptrCast(self));
    }

    pub fn IsWhitespace(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsWhitespace(@ptrCast(self));
    }

    pub fn IsCDATA(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsCDATA(@ptrCast(self));
    }

    pub fn IsComment(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsComment(@ptrCast(self));
    }

    pub fn IsDTD(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsDTD(@ptrCast(self));
    }

    pub fn IsEntityReference(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsEntityReference(@ptrCast(self));
    }

    pub fn IsProcessingInstruction(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsProcessingInstruction(@ptrCast(self));
    }

    pub fn IsStandaloneDocument(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_IsStandaloneDocument(@ptrCast(self));
    }

    pub fn HasStandaloneDeclaration(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_HasStandaloneDeclaration(@ptrCast(self));
    }

    pub fn LineNumber(self: ?*anyopaque, ) i64 {
        return qtc.QXmlStreamReader_LineNumber(@ptrCast(self));
    }

    pub fn ColumnNumber(self: ?*anyopaque, ) i64 {
        return qtc.QXmlStreamReader_ColumnNumber(@ptrCast(self));
    }

    pub fn CharacterOffset(self: ?*anyopaque, ) i64 {
        return qtc.QXmlStreamReader_CharacterOffset(@ptrCast(self));
    }

    pub fn Attributes(self: ?*anyopaque, ) QtC.QXmlStreamAttributes {
        return qtc.QXmlStreamReader_Attributes(@ptrCast(self));
    }

    pub fn ReadElementText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXmlStreamReader_ReadElementText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ReadElementText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NamespaceDeclarations(self: ?*anyopaque, ) []const u8 {
        return qtc.QXmlStreamReader_NamespaceDeclarations(@ptrCast(self));
    }

    pub fn AddExtraNamespaceDeclaration(self: ?*anyopaque, extraNamespaceDeclaraction: ?*anyopaque) void {
        qtc.QXmlStreamReader_AddExtraNamespaceDeclaration(@ptrCast(self), @ptrCast(extraNamespaceDeclaraction));
    }

    pub fn AddExtraNamespaceDeclarations(self: ?*anyopaque, extraNamespaceDeclaractions: []const u8) void {
        qtc.QXmlStreamReader_AddExtraNamespaceDeclarations(@ptrCast(self), @ptrCast(extraNamespaceDeclaractions));
    }

    pub fn NotationDeclarations(self: ?*anyopaque, ) []const u8 {
        return qtc.QXmlStreamReader_NotationDeclarations(@ptrCast(self));
    }

    pub fn EntityDeclarations(self: ?*anyopaque, ) []const u8 {
        return qtc.QXmlStreamReader_EntityDeclarations(@ptrCast(self));
    }

    pub fn EntityExpansionLimit(self: ?*anyopaque, ) i32 {
        return qtc.QXmlStreamReader_EntityExpansionLimit(@ptrCast(self));
    }

    pub fn SetEntityExpansionLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QXmlStreamReader_SetEntityExpansionLimit(@ptrCast(self), limit);
    }

    pub fn RaiseError(self: ?*anyopaque, ) void {
        qtc.QXmlStreamReader_RaiseError(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXmlStreamReader_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QXmlStreamReader_Error(@ptrCast(self));
    }

    pub fn HasError(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamReader_HasError(@ptrCast(self));
    }

    pub fn SetEntityResolver(self: ?*anyopaque, resolver: ?*anyopaque) void {
        qtc.QXmlStreamReader_SetEntityResolver(@ptrCast(self), @ptrCast(resolver));
    }

    pub fn EntityResolver(self: ?*anyopaque, ) QtC.QXmlStreamEntityResolver {
        return qtc.QXmlStreamReader_EntityResolver(@ptrCast(self));
    }

    pub fn ReadElementText1(self: ?*anyopaque, behaviour: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXmlStreamReader_ReadElementText1(@ptrCast(self), @intCast(behaviour));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ReadElementText1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RaiseError1(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
    .len = message.len,
    .data = message.ptr,
};
qtc.QXmlStreamReader_RaiseError1(@ptrCast(self), message_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamwriter.html
pub const qxmlstreamwriter = struct {

    /// New constructs a new QXmlStreamWriter object.
    pub fn New() QtC.QXmlStreamWriter {
        return qtc.QXmlStreamWriter_new();
    }


    /// New2 constructs a new QXmlStreamWriter object.
    pub fn New2(device: ?*anyopaque) QtC.QXmlStreamWriter {
        return qtc.QXmlStreamWriter_new2(@ptrCast(device));
    }


    /// New3 constructs a new QXmlStreamWriter object.
    pub fn New3(array: []u8) QtC.QXmlStreamWriter {
        const array_str = qtc.libqt_string{
    .len = array.len,
    .data = array.ptr,
};
return qtc.QXmlStreamWriter_new3(array_str);
    }


    /// New4 constructs a new QXmlStreamWriter object.
    pub fn New4(stringVal: []const u8) QtC.QXmlStreamWriter {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QXmlStreamWriter_new4(stringVal_str);
    }


    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QXmlStreamWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QXmlStreamWriter_Device(@ptrCast(self));
    }

    pub fn SetAutoFormatting(self: ?*anyopaque, autoFormatting: bool) void {
        qtc.QXmlStreamWriter_SetAutoFormatting(@ptrCast(self), autoFormatting);
    }

    pub fn AutoFormatting(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamWriter_AutoFormatting(@ptrCast(self));
    }

    pub fn SetAutoFormattingIndent(self: ?*anyopaque, spacesOrTabs: i32) void {
        qtc.QXmlStreamWriter_SetAutoFormattingIndent(@ptrCast(self), spacesOrTabs);
    }

    pub fn AutoFormattingIndent(self: ?*anyopaque, ) i32 {
        return qtc.QXmlStreamWriter_AutoFormattingIndent(@ptrCast(self));
    }

    pub fn WriteAttribute3(self: ?*anyopaque, attribute: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteAttribute3(@ptrCast(self), @ptrCast(attribute));
    }

    pub fn WriteAttributes(self: ?*anyopaque, attributes: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteAttributes(@ptrCast(self), @ptrCast(attributes));
    }

    pub fn WriteEndDocument(self: ?*anyopaque, ) void {
        qtc.QXmlStreamWriter_WriteEndDocument(@ptrCast(self));
    }

    pub fn WriteEndElement(self: ?*anyopaque, ) void {
        qtc.QXmlStreamWriter_WriteEndElement(@ptrCast(self));
    }

    pub fn WriteStartDocument(self: ?*anyopaque, ) void {
        qtc.QXmlStreamWriter_WriteStartDocument(@ptrCast(self));
    }

    pub fn WriteCurrentToken(self: ?*anyopaque, reader: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteCurrentToken(@ptrCast(self), @ptrCast(reader));
    }

    pub fn HasError(self: ?*anyopaque, ) bool {
        return qtc.QXmlStreamWriter_HasError(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/xmlstream.html#types
pub const enums = struct {
    pub const TokenType = enum {
        pub const NoToken: i32 = 0;
        pub const Invalid: i32 = 1;
        pub const StartDocument: i32 = 2;
        pub const EndDocument: i32 = 3;
        pub const StartElement: i32 = 4;
        pub const EndElement: i32 = 5;
        pub const Characters: i32 = 6;
        pub const Comment: i32 = 7;
        pub const DTD: i32 = 8;
        pub const EntityReference: i32 = 9;
        pub const ProcessingInstruction: i32 = 10;
    };

    pub const ReadElementTextBehaviour = enum {
        pub const ErrorOnUnexpectedElement: i32 = 0;
        pub const IncludeChildElements: i32 = 1;
        pub const SkipChildElements: i32 = 2;
    };

    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const UnexpectedElementError: i32 = 1;
        pub const CustomError: i32 = 2;
        pub const NotWellFormedError: i32 = 3;
        pub const PrematureEndOfDocumentError: i32 = 4;
    };

};
