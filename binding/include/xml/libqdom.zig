const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdomimplementation.html
pub const qdomimplementation = struct {

    /// New constructs a new QDomImplementation object.
    pub fn New() QtC.QDomImplementation {
        return qtc.QDomImplementation_new();
    }


    /// New2 constructs a new QDomImplementation object.
    pub fn New2(implementation: ?*anyopaque) QtC.QDomImplementation {
        return qtc.QDomImplementation_new2(@ptrCast(implementation));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomImplementation_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomImplementation_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomImplementation_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn HasFeature(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
    .len = feature.len,
    .data = feature.ptr,
};
const version_str = qtc.libqt_string{
    .len = version.len,
    .data = version.ptr,
};
return qtc.QDomImplementation_HasFeature(@ptrCast(self), feature_str, version_str);
    }

    pub fn CreateDocumentType(self: ?*anyopaque, qName: []const u8, publicId: []const u8, systemId: []const u8) QtC.QDomDocumentType {
        const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
const publicId_str = qtc.libqt_string{
    .len = publicId.len,
    .data = publicId.ptr,
};
const systemId_str = qtc.libqt_string{
    .len = systemId.len,
    .data = systemId.ptr,
};
return qtc.QDomImplementation_CreateDocumentType(@ptrCast(self), qName_str, publicId_str, systemId_str);
    }

    pub fn CreateDocument(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, doctype: ?*anyopaque) QtC.QDomDocument {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
return qtc.QDomImplementation_CreateDocument(@ptrCast(self), nsURI_str, qName_str, @ptrCast(doctype));
    }

    pub fn InvalidDataPolicy() i32 {
        return qtc.QDomImplementation_InvalidDataPolicy();
    }

    pub fn SetInvalidDataPolicy(policy: i32) void {
        qtc.QDomImplementation_SetInvalidDataPolicy(@intCast(policy));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QDomImplementation_IsNull(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomImplementation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomnode.html
pub const qdomnode = struct {

    /// New constructs a new QDomNode object.
    pub fn New() QtC.QDomNode {
        return qtc.QDomNode_new();
    }


    /// New2 constructs a new QDomNode object.
    pub fn New2(node: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_new2(@ptrCast(node));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNode_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    pub fn HasChildNodes(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    pub fn CloneNode(self: ?*anyopaque, ) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    pub fn Normalize(self: ?*anyopaque, ) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
    .len = feature.len,
    .data = feature.ptr,
};
const version_str = qtc.libqt_string{
    .len = version.len,
    .data = version.ptr,
};
return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    pub fn NodeName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NodeName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomNode_NodeType(@ptrCast(self));
    }

    pub fn ParentNode(self: ?*anyopaque, ) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    pub fn ChildNodes(self: ?*anyopaque, ) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    pub fn FirstChild(self: ?*anyopaque, ) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    pub fn LastChild(self: ?*anyopaque, ) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    pub fn PreviousSibling(self: ?*anyopaque, ) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    pub fn NextSibling(self: ?*anyopaque, ) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    pub fn Attributes(self: ?*anyopaque, ) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    pub fn OwnerDocument(self: ?*anyopaque, ) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    pub fn NamespaceURI(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NamespaceURI: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LocalName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.LocalName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HasAttributes(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    pub fn NodeValue(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NodeValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    pub fn Prefix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.Prefix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
    .len = pre.len,
    .data = pre.ptr,
};
qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    pub fn IsAttr(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    pub fn IsCDATASection(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    pub fn IsDocumentFragment(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    pub fn IsDocument(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    pub fn IsDocumentType(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    pub fn IsElement(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    pub fn IsEntityReference(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    pub fn IsText(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    pub fn IsEntity(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    pub fn IsNotation(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    pub fn IsProcessingInstruction(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    pub fn IsCharacterData(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    pub fn IsComment(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    pub fn ToAttr(self: ?*anyopaque, ) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    pub fn ToCDATASection(self: ?*anyopaque, ) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    pub fn ToDocumentFragment(self: ?*anyopaque, ) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    pub fn ToDocument(self: ?*anyopaque, ) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    pub fn ToDocumentType(self: ?*anyopaque, ) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    pub fn ToElement(self: ?*anyopaque, ) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    pub fn ToEntityReference(self: ?*anyopaque, ) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    pub fn ToText(self: ?*anyopaque, ) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    pub fn ToEntity(self: ?*anyopaque, ) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    pub fn ToNotation(self: ?*anyopaque, ) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    pub fn ToProcessingInstruction(self: ?*anyopaque, ) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    pub fn ToCharacterData(self: ?*anyopaque, ) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    pub fn ToComment(self: ?*anyopaque, ) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), param2);
    }

    pub fn FirstChildElement(self: ?*anyopaque, ) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    pub fn LastChildElement(self: ?*anyopaque, ) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    pub fn PreviousSiblingElement(self: ?*anyopaque, ) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    pub fn NextSiblingElement(self: ?*anyopaque, ) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    pub fn LineNumber(self: ?*anyopaque, ) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    pub fn ColumnNumber(self: ?*anyopaque, ) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), param2, @intCast(param3));
    }

    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
    .len = tagName.len,
    .data = tagName.ptr,
};
return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
    .len = tagName.len,
    .data = tagName.ptr,
};
const namespaceURI_str = qtc.libqt_string{
    .len = namespaceURI.len,
    .data = namespaceURI.ptr,
};
return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
    .len = tagName.len,
    .data = tagName.ptr,
};
return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
    .len = tagName.len,
    .data = tagName.ptr,
};
const namespaceURI_str = qtc.libqt_string{
    .len = namespaceURI.len,
    .data = namespaceURI.ptr,
};
return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
    .len = tagName.len,
    .data = tagName.ptr,
};
return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
    .len = tagName.len,
    .data = tagName.ptr,
};
const namespaceURI_str = qtc.libqt_string{
    .len = namespaceURI.len,
    .data = namespaceURI.ptr,
};
return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
    .len = taName.len,
    .data = taName.ptr,
};
return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
    .len = taName.len,
    .data = taName.ptr,
};
const namespaceURI_str = qtc.libqt_string{
    .len = namespaceURI.len,
    .data = namespaceURI.ptr,
};
return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNode_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomnodelist.html
pub const qdomnodelist = struct {

    /// New constructs a new QDomNodeList object.
    pub fn New() QtC.QDomNodeList {
        return qtc.QDomNodeList_new();
    }


    /// New2 constructs a new QDomNodeList object.
    pub fn New2(nodeList: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNodeList_new2(@ptrCast(nodeList));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNodeList_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNodeList_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNodeList_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn Item(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNodeList_Item(@ptrCast(self), index);
    }

    pub fn At(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNodeList_At(@ptrCast(self), index);
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QDomNodeList_Length(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QDomNodeList_Count(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i32 {
        return qtc.QDomNodeList_Size(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QDomNodeList_IsEmpty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNodeList_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomdocumenttype.html
pub const qdomdocumenttype = struct {

    /// New constructs a new QDomDocumentType object.
    pub fn New() QtC.QDomDocumentType {
        return qtc.QDomDocumentType_new();
    }


    /// New2 constructs a new QDomDocumentType object.
    pub fn New2(documentType: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomDocumentType_new2(@ptrCast(documentType));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocumentType_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocumentType_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Entities(self: ?*anyopaque, ) QtC.QDomNamedNodeMap {
        return qtc.QDomDocumentType_Entities(@ptrCast(self));
    }

    pub fn Notations(self: ?*anyopaque, ) QtC.QDomNamedNodeMap {
        return qtc.QDomDocumentType_Notations(@ptrCast(self));
    }

    pub fn PublicId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocumentType_PublicId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.PublicId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SystemId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocumentType_SystemId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.SystemId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn InternalSubset(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocumentType_InternalSubset(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.InternalSubset: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomDocumentType_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocumentType_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomdocument.html
pub const qdomdocument = struct {

    /// New constructs a new QDomDocument object.
    pub fn New() QtC.QDomDocument {
        return qtc.QDomDocument_new();
    }


    /// New2 constructs a new QDomDocument object.
    pub fn New2(name: []const u8) QtC.QDomDocument {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomDocument_new2(name_str);
    }


    /// New3 constructs a new QDomDocument object.
    pub fn New3(doctype: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomDocument_new3(@ptrCast(doctype));
    }


    /// New4 constructs a new QDomDocument object.
    pub fn New4(document: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomDocument_new4(@ptrCast(document));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocument_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn CreateElement(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
    .len = tagName.len,
    .data = tagName.ptr,
};
return qtc.QDomDocument_CreateElement(@ptrCast(self), tagName_str);
    }

    pub fn CreateDocumentFragment(self: ?*anyopaque, ) QtC.QDomDocumentFragment {
        return qtc.QDomDocument_CreateDocumentFragment(@ptrCast(self));
    }

    pub fn CreateTextNode(self: ?*anyopaque, data: []const u8) QtC.QDomText {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QDomDocument_CreateTextNode(@ptrCast(self), data_str);
    }

    pub fn CreateComment(self: ?*anyopaque, data: []const u8) QtC.QDomComment {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QDomDocument_CreateComment(@ptrCast(self), data_str);
    }

    pub fn CreateCDATASection(self: ?*anyopaque, data: []const u8) QtC.QDomCDATASection {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QDomDocument_CreateCDATASection(@ptrCast(self), data_str);
    }

    pub fn CreateProcessingInstruction(self: ?*anyopaque, target: []const u8, data: []const u8) QtC.QDomProcessingInstruction {
        const target_str = qtc.libqt_string{
    .len = target.len,
    .data = target.ptr,
};
const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QDomDocument_CreateProcessingInstruction(@ptrCast(self), target_str, data_str);
    }

    pub fn CreateAttribute(self: ?*anyopaque, name: []const u8) QtC.QDomAttr {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomDocument_CreateAttribute(@ptrCast(self), name_str);
    }

    pub fn CreateEntityReference(self: ?*anyopaque, name: []const u8) QtC.QDomEntityReference {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomDocument_CreateEntityReference(@ptrCast(self), name_str);
    }

    pub fn ElementsByTagName(self: ?*anyopaque, tagname: []const u8) QtC.QDomNodeList {
        const tagname_str = qtc.libqt_string{
    .len = tagname.len,
    .data = tagname.ptr,
};
return qtc.QDomDocument_ElementsByTagName(@ptrCast(self), tagname_str);
    }

    pub fn ImportNode(self: ?*anyopaque, importedNode: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomDocument_ImportNode(@ptrCast(self), @ptrCast(importedNode), deep);
    }

    pub fn CreateElementNS(self: ?*anyopaque, nsURI: []const u8, qName: []const u8) QtC.QDomElement {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
return qtc.QDomDocument_CreateElementNS(@ptrCast(self), nsURI_str, qName_str);
    }

    pub fn CreateAttributeNS(self: ?*anyopaque, nsURI: []const u8, qName: []const u8) QtC.QDomAttr {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
return qtc.QDomDocument_CreateAttributeNS(@ptrCast(self), nsURI_str, qName_str);
    }

    pub fn ElementsByTagNameNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomNodeList {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
return qtc.QDomDocument_ElementsByTagNameNS(@ptrCast(self), nsURI_str, localName_str);
    }

    pub fn ElementById(self: ?*anyopaque, elementId: []const u8) QtC.QDomElement {
        const elementId_str = qtc.libqt_string{
    .len = elementId.len,
    .data = elementId.ptr,
};
return qtc.QDomDocument_ElementById(@ptrCast(self), elementId_str);
    }

    pub fn Doctype(self: ?*anyopaque, ) QtC.QDomDocumentType {
        return qtc.QDomDocument_Doctype(@ptrCast(self));
    }

    pub fn Implementation(self: ?*anyopaque, ) QtC.QDomImplementation {
        return qtc.QDomDocument_Implementation(@ptrCast(self));
    }

    pub fn DocumentElement(self: ?*anyopaque, ) QtC.QDomElement {
        return qtc.QDomDocument_DocumentElement(@ptrCast(self));
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomDocument_NodeType(@ptrCast(self));
    }

    pub fn SetContent(self: ?*anyopaque, text: []u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QDomDocument_SetContent(@ptrCast(self), text_str, namespaceProcessing);
    }

    pub fn SetContent2(self: ?*anyopaque, text: []const u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QDomDocument_SetContent2(@ptrCast(self), text_str, namespaceProcessing);
    }

    pub fn SetContent3(self: ?*anyopaque, dev: ?*anyopaque, namespaceProcessing: bool) bool {
        return qtc.QDomDocument_SetContent3(@ptrCast(self), @ptrCast(dev), namespaceProcessing);
    }

    pub fn SetContent4(self: ?*anyopaque, text: []u8, errorMsg: []const u8) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent4(@ptrCast(self), text_str, errorMsg_str);
    }

    pub fn SetContent5(self: ?*anyopaque, text: []const u8, errorMsg: []const u8) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent5(@ptrCast(self), text_str, errorMsg_str);
    }

    pub fn SetContent6(self: ?*anyopaque, dev: ?*anyopaque, errorMsg: []const u8) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent6(@ptrCast(self), @ptrCast(dev), errorMsg_str);
    }

    pub fn SetContent7(self: ?*anyopaque, reader: ?*anyopaque, namespaceProcessing: bool) bool {
        return qtc.QDomDocument_SetContent7(@ptrCast(self), @ptrCast(reader), namespaceProcessing);
    }

    pub fn SetContent8(self: ?*anyopaque, data: []const u8) QtC.QDomDocument__ParseResult {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QDomDocument_SetContent8(@ptrCast(self), data_str);
    }

    pub fn SetContent9(self: ?*anyopaque, device: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent9(@ptrCast(self), @ptrCast(device));
    }

    pub fn SetContent10(self: ?*anyopaque, reader: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent10(@ptrCast(self), @ptrCast(reader));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocument_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToByteArray(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdomdocument.ToByteArray: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetContent32(self: ?*anyopaque, text: []u8, namespaceProcessing: bool, errorMsg: []const u8) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent32(@ptrCast(self), text_str, namespaceProcessing, errorMsg_str);
    }

    pub fn SetContent42(self: ?*anyopaque, text: []u8, namespaceProcessing: bool, errorMsg: []const u8, errorLine: *i32) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent42(@ptrCast(self), text_str, namespaceProcessing, errorMsg_str, @ptrCast(errorLine));
    }

    pub fn SetContent52(self: ?*anyopaque, text: []u8, namespaceProcessing: bool, errorMsg: []const u8, errorLine: *i32, errorColumn: *i32) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent52(@ptrCast(self), text_str, namespaceProcessing, errorMsg_str, @ptrCast(errorLine), @ptrCast(errorColumn));
    }

    pub fn SetContent33(self: ?*anyopaque, text: []const u8, namespaceProcessing: bool, errorMsg: []const u8) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent33(@ptrCast(self), text_str, namespaceProcessing, errorMsg_str);
    }

    pub fn SetContent43(self: ?*anyopaque, text: []const u8, namespaceProcessing: bool, errorMsg: []const u8, errorLine: *i32) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent43(@ptrCast(self), text_str, namespaceProcessing, errorMsg_str, @ptrCast(errorLine));
    }

    pub fn SetContent53(self: ?*anyopaque, text: []const u8, namespaceProcessing: bool, errorMsg: []const u8, errorLine: *i32, errorColumn: *i32) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent53(@ptrCast(self), text_str, namespaceProcessing, errorMsg_str, @ptrCast(errorLine), @ptrCast(errorColumn));
    }

    pub fn SetContent34(self: ?*anyopaque, dev: ?*anyopaque, namespaceProcessing: bool, errorMsg: []const u8) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent34(@ptrCast(self), @ptrCast(dev), namespaceProcessing, errorMsg_str);
    }

    pub fn SetContent44(self: ?*anyopaque, dev: ?*anyopaque, namespaceProcessing: bool, errorMsg: []const u8, errorLine: *i32) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent44(@ptrCast(self), @ptrCast(dev), namespaceProcessing, errorMsg_str, @ptrCast(errorLine));
    }

    pub fn SetContent54(self: ?*anyopaque, dev: ?*anyopaque, namespaceProcessing: bool, errorMsg: []const u8, errorLine: *i32, errorColumn: *i32) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent54(@ptrCast(self), @ptrCast(dev), namespaceProcessing, errorMsg_str, @ptrCast(errorLine), @ptrCast(errorColumn));
    }

    pub fn SetContent35(self: ?*anyopaque, text: []u8, errorMsg: []const u8, errorLine: *i32) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent35(@ptrCast(self), text_str, errorMsg_str, @ptrCast(errorLine));
    }

    pub fn SetContent45(self: ?*anyopaque, text: []u8, errorMsg: []const u8, errorLine: *i32, errorColumn: *i32) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent45(@ptrCast(self), text_str, errorMsg_str, @ptrCast(errorLine), @ptrCast(errorColumn));
    }

    pub fn SetContent36(self: ?*anyopaque, text: []const u8, errorMsg: []const u8, errorLine: *i32) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent36(@ptrCast(self), text_str, errorMsg_str, @ptrCast(errorLine));
    }

    pub fn SetContent46(self: ?*anyopaque, text: []const u8, errorMsg: []const u8, errorLine: *i32, errorColumn: *i32) bool {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent46(@ptrCast(self), text_str, errorMsg_str, @ptrCast(errorLine), @ptrCast(errorColumn));
    }

    pub fn SetContent37(self: ?*anyopaque, dev: ?*anyopaque, errorMsg: []const u8, errorLine: *i32) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent37(@ptrCast(self), @ptrCast(dev), errorMsg_str, @ptrCast(errorLine));
    }

    pub fn SetContent47(self: ?*anyopaque, dev: ?*anyopaque, errorMsg: []const u8, errorLine: *i32, errorColumn: *i32) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent47(@ptrCast(self), @ptrCast(dev), errorMsg_str, @ptrCast(errorLine), @ptrCast(errorColumn));
    }

    pub fn SetContent38(self: ?*anyopaque, reader: ?*anyopaque, namespaceProcessing: bool, errorMsg: []const u8) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent38(@ptrCast(self), @ptrCast(reader), namespaceProcessing, errorMsg_str);
    }

    pub fn SetContent48(self: ?*anyopaque, reader: ?*anyopaque, namespaceProcessing: bool, errorMsg: []const u8, errorLine: *i32) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent48(@ptrCast(self), @ptrCast(reader), namespaceProcessing, errorMsg_str, @ptrCast(errorLine));
    }

    pub fn SetContent55(self: ?*anyopaque, reader: ?*anyopaque, namespaceProcessing: bool, errorMsg: []const u8, errorLine: *i32, errorColumn: *i32) bool {
        const errorMsg_str = qtc.libqt_string{
    .len = errorMsg.len,
    .data = errorMsg.ptr,
};
return qtc.QDomDocument_SetContent55(@ptrCast(self), @ptrCast(reader), namespaceProcessing, errorMsg_str, @ptrCast(errorLine), @ptrCast(errorColumn));
    }

    pub fn SetContent22(self: ?*anyopaque, data: []const u8, options: i32) QtC.QDomDocument__ParseResult {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QDomDocument_SetContent22(@ptrCast(self), data_str, @intCast(options));
    }

    pub fn SetContent23(self: ?*anyopaque, device: ?*anyopaque, options: i32) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent23(@ptrCast(self), @ptrCast(device), @intCast(options));
    }

    pub fn SetContent24(self: ?*anyopaque, reader: ?*anyopaque, options: i32) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent24(@ptrCast(self), @ptrCast(reader), @intCast(options));
    }

    pub fn ToString1(self: ?*anyopaque, indent: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocument_ToString1(@ptrCast(self), indent);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToByteArray1(self: ?*anyopaque, indent: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray1(@ptrCast(self), indent);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdomdocument.ToByteArray1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomnamednodemap.html
pub const qdomnamednodemap = struct {

    /// New constructs a new QDomNamedNodeMap object.
    pub fn New() QtC.QDomNamedNodeMap {
        return qtc.QDomNamedNodeMap_new();
    }


    /// New2 constructs a new QDomNamedNodeMap object.
    pub fn New2(namedNodeMap: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNamedNodeMap_new2(@ptrCast(namedNodeMap));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNamedNodeMap_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNamedNodeMap_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNamedNodeMap_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomNamedNodeMap_NamedItem(@ptrCast(self), name_str);
    }

    pub fn SetNamedItem(self: ?*anyopaque, newNode: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_SetNamedItem(@ptrCast(self), @ptrCast(newNode));
    }

    pub fn RemoveNamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomNamedNodeMap_RemoveNamedItem(@ptrCast(self), name_str);
    }

    pub fn Item(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_Item(@ptrCast(self), index);
    }

    pub fn NamedItemNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomNode {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
return qtc.QDomNamedNodeMap_NamedItemNS(@ptrCast(self), nsURI_str, localName_str);
    }

    pub fn SetNamedItemNS(self: ?*anyopaque, newNode: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_SetNamedItemNS(@ptrCast(self), @ptrCast(newNode));
    }

    pub fn RemoveNamedItemNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomNode {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
return qtc.QDomNamedNodeMap_RemoveNamedItemNS(@ptrCast(self), nsURI_str, localName_str);
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QDomNamedNodeMap_Length(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QDomNamedNodeMap_Count(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i32 {
        return qtc.QDomNamedNodeMap_Size(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QDomNamedNodeMap_IsEmpty(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomNamedNodeMap_Contains(@ptrCast(self), name_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNamedNodeMap_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomdocumentfragment.html
pub const qdomdocumentfragment = struct {

    /// New constructs a new QDomDocumentFragment object.
    pub fn New() QtC.QDomDocumentFragment {
        return qtc.QDomDocumentFragment_new();
    }


    /// New2 constructs a new QDomDocumentFragment object.
    pub fn New2(documentFragment: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomDocumentFragment_new2(@ptrCast(documentFragment));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocumentFragment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomDocumentFragment_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocumentFragment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomcharacterdata.html
pub const qdomcharacterdata = struct {

    /// New constructs a new QDomCharacterData object.
    pub fn New() QtC.QDomCharacterData {
        return qtc.QDomCharacterData_new();
    }


    /// New2 constructs a new QDomCharacterData object.
    pub fn New2(characterData: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomCharacterData_new2(@ptrCast(characterData));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomCharacterData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn SubstringData(self: ?*anyopaque, offset: unsigned long, count: unsigned long, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), offset, count);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.SubstringData: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
    .len = arg.len,
    .data = arg.ptr,
};
qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    pub fn InsertData(self: ?*anyopaque, offset: unsigned long, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
    .len = arg.len,
    .data = arg.ptr,
};
qtc.QDomCharacterData_InsertData(@ptrCast(self), offset, arg_str);
    }

    pub fn DeleteData(self: ?*anyopaque, offset: unsigned long, count: unsigned long) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), offset, count);
    }

    pub fn ReplaceData(self: ?*anyopaque, offset: unsigned long, count: unsigned long, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
    .len = arg.len,
    .data = arg.ptr,
};
qtc.QDomCharacterData_ReplaceData(@ptrCast(self), offset, count, arg_str);
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_Data(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.Data: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomCharacterData_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomCharacterData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomattr.html
pub const qdomattr = struct {

    /// New constructs a new QDomAttr object.
    pub fn New() QtC.QDomAttr {
        return qtc.QDomAttr_new();
    }


    /// New2 constructs a new QDomAttr object.
    pub fn New2(attr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomAttr_new2(@ptrCast(attr));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomAttr_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomAttr_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Specified(self: ?*anyopaque, ) bool {
        return qtc.QDomAttr_Specified(@ptrCast(self));
    }

    pub fn OwnerElement(self: ?*anyopaque, ) QtC.QDomElement {
        return qtc.QDomAttr_OwnerElement(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomAttr_Value(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Value: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QDomAttr_SetValue(@ptrCast(self), value_str);
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomAttr_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomAttr_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomelement.html
pub const qdomelement = struct {

    /// New constructs a new QDomElement object.
    pub fn New() QtC.QDomElement {
        return qtc.QDomElement_new();
    }


    /// New2 constructs a new QDomElement object.
    pub fn New2(element: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomElement_new2(@ptrCast(element));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomElement_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Attribute(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QDomElement_Attribute(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Attribute: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAttribute(self: ?*anyopaque, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QDomElement_SetAttribute(@ptrCast(self), name_str, value_str);
    }

    pub fn SetAttribute2(self: ?*anyopaque, name: []const u8, value: i64) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDomElement_SetAttribute2(@ptrCast(self), name_str, value);
    }

    pub fn SetAttribute3(self: ?*anyopaque, name: []const u8, value: u64) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDomElement_SetAttribute3(@ptrCast(self), name_str, value);
    }

    pub fn SetAttribute4(self: ?*anyopaque, name: []const u8, value: i32) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDomElement_SetAttribute4(@ptrCast(self), name_str, value);
    }

    pub fn SetAttribute5(self: ?*anyopaque, name: []const u8, value: u32) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDomElement_SetAttribute5(@ptrCast(self), name_str, value);
    }

    pub fn SetAttribute6(self: ?*anyopaque, name: []const u8, value: f32) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDomElement_SetAttribute6(@ptrCast(self), name_str, value);
    }

    pub fn SetAttribute7(self: ?*anyopaque, name: []const u8, value: f64) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDomElement_SetAttribute7(@ptrCast(self), name_str, value);
    }

    pub fn RemoveAttribute(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDomElement_RemoveAttribute(@ptrCast(self), name_str);
    }

    pub fn AttributeNode(self: ?*anyopaque, name: []const u8) QtC.QDomAttr {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomElement_AttributeNode(@ptrCast(self), name_str);
    }

    pub fn SetAttributeNode(self: ?*anyopaque, newAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_SetAttributeNode(@ptrCast(self), @ptrCast(newAttr));
    }

    pub fn RemoveAttributeNode(self: ?*anyopaque, oldAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_RemoveAttributeNode(@ptrCast(self), @ptrCast(oldAttr));
    }

    pub fn ElementsByTagName(self: ?*anyopaque, tagname: []const u8) QtC.QDomNodeList {
        const tagname_str = qtc.libqt_string{
    .len = tagname.len,
    .data = tagname.ptr,
};
return qtc.QDomElement_ElementsByTagName(@ptrCast(self), tagname_str);
    }

    pub fn HasAttribute(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QDomElement_HasAttribute(@ptrCast(self), name_str);
    }

    pub fn AttributeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
const _str = qtc.QDomElement_AttributeNS(@ptrCast(self), nsURI_str, localName_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.AttributeNS: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAttributeNS(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: []const u8) void {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QDomElement_SetAttributeNS(@ptrCast(self), nsURI_str, qName_str, value_str);
    }

    pub fn SetAttributeNS2(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: i32) void {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
qtc.QDomElement_SetAttributeNS2(@ptrCast(self), nsURI_str, qName_str, value);
    }

    pub fn SetAttributeNS3(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: u32) void {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
qtc.QDomElement_SetAttributeNS3(@ptrCast(self), nsURI_str, qName_str, value);
    }

    pub fn SetAttributeNS4(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: i64) void {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
qtc.QDomElement_SetAttributeNS4(@ptrCast(self), nsURI_str, qName_str, value);
    }

    pub fn SetAttributeNS5(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: u64) void {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
qtc.QDomElement_SetAttributeNS5(@ptrCast(self), nsURI_str, qName_str, value);
    }

    pub fn SetAttributeNS6(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: f64) void {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const qName_str = qtc.libqt_string{
    .len = qName.len,
    .data = qName.ptr,
};
qtc.QDomElement_SetAttributeNS6(@ptrCast(self), nsURI_str, qName_str, value);
    }

    pub fn RemoveAttributeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) void {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
qtc.QDomElement_RemoveAttributeNS(@ptrCast(self), nsURI_str, localName_str);
    }

    pub fn AttributeNodeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomAttr {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
return qtc.QDomElement_AttributeNodeNS(@ptrCast(self), nsURI_str, localName_str);
    }

    pub fn SetAttributeNodeNS(self: ?*anyopaque, newAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_SetAttributeNodeNS(@ptrCast(self), @ptrCast(newAttr));
    }

    pub fn ElementsByTagNameNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomNodeList {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
return qtc.QDomElement_ElementsByTagNameNS(@ptrCast(self), nsURI_str, localName_str);
    }

    pub fn HasAttributeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) bool {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
return qtc.QDomElement_HasAttributeNS(@ptrCast(self), nsURI_str, localName_str);
    }

    pub fn TagName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomElement_TagName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.TagName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTagName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QDomElement_SetTagName(@ptrCast(self), name_str);
    }

    pub fn Attributes(self: ?*anyopaque, ) QtC.QDomNamedNodeMap {
        return qtc.QDomElement_Attributes(@ptrCast(self));
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomElement_NodeType(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomElement_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Attribute2(self: ?*anyopaque, name: []const u8, defValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const defValue_str = qtc.libqt_string{
    .len = defValue.len,
    .data = defValue.ptr,
};
const _str = qtc.QDomElement_Attribute2(@ptrCast(self), name_str, defValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Attribute2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AttributeNS3(self: ?*anyopaque, nsURI: []const u8, localName: []const u8, defValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const nsURI_str = qtc.libqt_string{
    .len = nsURI.len,
    .data = nsURI.ptr,
};
const localName_str = qtc.libqt_string{
    .len = localName.len,
    .data = localName.ptr,
};
const defValue_str = qtc.libqt_string{
    .len = defValue.len,
    .data = defValue.ptr,
};
const _str = qtc.QDomElement_AttributeNS3(@ptrCast(self), nsURI_str, localName_str, defValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.AttributeNS3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomElement_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomtext.html
pub const qdomtext = struct {

    /// New constructs a new QDomText object.
    pub fn New() QtC.QDomText {
        return qtc.QDomText_new();
    }


    /// New2 constructs a new QDomText object.
    pub fn New2(text: ?*anyopaque) QtC.QDomText {
        return qtc.QDomText_new2(@ptrCast(text));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomText_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn SplitText(self: ?*anyopaque, offset: i32) QtC.QDomText {
        return qtc.QDomText_SplitText(@ptrCast(self), offset);
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomText_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomText_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomcomment.html
pub const qdomcomment = struct {

    /// New constructs a new QDomComment object.
    pub fn New() QtC.QDomComment {
        return qtc.QDomComment_new();
    }


    /// New2 constructs a new QDomComment object.
    pub fn New2(comment: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomComment_new2(@ptrCast(comment));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomComment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomComment_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomComment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomcdatasection.html
pub const qdomcdatasection = struct {

    /// New constructs a new QDomCDATASection object.
    pub fn New() QtC.QDomCDATASection {
        return qtc.QDomCDATASection_new();
    }


    /// New2 constructs a new QDomCDATASection object.
    pub fn New2(cdataSection: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomCDATASection_new2(@ptrCast(cdataSection));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomCDATASection_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomCDATASection_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomCDATASection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomnotation.html
pub const qdomnotation = struct {

    /// New constructs a new QDomNotation object.
    pub fn New() QtC.QDomNotation {
        return qtc.QDomNotation_new();
    }


    /// New2 constructs a new QDomNotation object.
    pub fn New2(notation: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNotation_new2(@ptrCast(notation));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNotation_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn PublicId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNotation_PublicId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.PublicId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SystemId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNotation_SystemId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.SystemId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomNotation_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNotation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomentity.html
pub const qdomentity = struct {

    /// New constructs a new QDomEntity object.
    pub fn New() QtC.QDomEntity {
        return qtc.QDomEntity_new();
    }


    /// New2 constructs a new QDomEntity object.
    pub fn New2(entity: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomEntity_new2(@ptrCast(entity));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomEntity_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn PublicId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomEntity_PublicId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.PublicId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SystemId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomEntity_SystemId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.SystemId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NotationName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomEntity_NotationName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NotationName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomEntity_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomEntity_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomentityreference.html
pub const qdomentityreference = struct {

    /// New constructs a new QDomEntityReference object.
    pub fn New() QtC.QDomEntityReference {
        return qtc.QDomEntityReference_new();
    }


    /// New2 constructs a new QDomEntityReference object.
    pub fn New2(entityReference: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomEntityReference_new2(@ptrCast(entityReference));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomEntityReference_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomEntityReference_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomEntityReference_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomprocessinginstruction.html
pub const qdomprocessinginstruction = struct {

    /// New constructs a new QDomProcessingInstruction object.
    pub fn New() QtC.QDomProcessingInstruction {
        return qtc.QDomProcessingInstruction_new();
    }


    /// New2 constructs a new QDomProcessingInstruction object.
    pub fn New2(processingInstruction: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomProcessingInstruction_new2(@ptrCast(processingInstruction));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomProcessingInstruction_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Target(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomProcessingInstruction_Target(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Target: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Data(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomProcessingInstruction_Data(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Data: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
qtc.QDomProcessingInstruction_SetData(@ptrCast(self), data_str);
    }

    pub fn NodeType(self: ?*anyopaque, ) i32 {
        return qtc.QDomProcessingInstruction_NodeType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomProcessingInstruction_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomdocument-parseresult.html
pub const qdomdocument__parseresult = struct {

    /// New constructs a new QDomDocument::ParseResult object.
    pub fn New(param1: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument__ParseResult_new(@ptrCast(param1));
    }


    pub fn ErrorMessage(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const errorMessage_str = qtc.QDomDocument__ParseResult_ErrorMessage(@ptrCast(self));
defer qtc.libqt_string_free(&errorMessage_str);
const errorMessage_ret = allocator.alloc(u8, errorMessage_str.len) catch @panic("qdomdocument::parseresult.ErrorMessage: Memory allocation failed");
@memcpy(errorMessage_ret, errorMessage_str.data[0..errorMessage_str.len]);
return  errorMessage_ret;
    }

    pub fn SetErrorMessage(self: ?*anyopaque, errorMessage: []const u8) void {
        const errorMessage_str = qtc.libqt_string{
    .len = errorMessage.len,
    .data = errorMessage.ptr,
};
qtc.QDomDocument__ParseResult_SetErrorMessage(@ptrCast(self), errorMessage_str);
    }

    pub fn ErrorLine(self: ?*anyopaque, ) i64 {
        return qtc.QDomDocument__ParseResult_ErrorLine(@ptrCast(self));
    }

    pub fn SetErrorLine(self: ?*anyopaque, errorLine: i64) void {
        qtc.QDomDocument__ParseResult_SetErrorLine(@ptrCast(self), errorLine);
    }

    pub fn ErrorColumn(self: ?*anyopaque, ) i64 {
        return qtc.QDomDocument__ParseResult_ErrorColumn(@ptrCast(self));
    }

    pub fn SetErrorColumn(self: ?*anyopaque, errorColumn: i64) void {
        qtc.QDomDocument__ParseResult_SetErrorColumn(@ptrCast(self), errorColumn);
    }

    pub fn Operatorbool(self: ?*anyopaque, ) bool {
        return qtc.QDomDocument__ParseResult_Operatorbool(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDomDocument__ParseResult_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocument__ParseResult_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/dom.html#types
pub const enums = struct {
    pub const InvalidDataPolicy = enum {
        pub const AcceptInvalidChars: i32 = 0;
        pub const DropInvalidChars: i32 = 1;
        pub const ReturnNullNode: i32 = 2;
    };

    pub const NodeType = enum {
        pub const ElementNode: i32 = 1;
        pub const AttributeNode: i32 = 2;
        pub const TextNode: i32 = 3;
        pub const CDATASectionNode: i32 = 4;
        pub const EntityReferenceNode: i32 = 5;
        pub const EntityNode: i32 = 6;
        pub const ProcessingInstructionNode: i32 = 7;
        pub const CommentNode: i32 = 8;
        pub const DocumentNode: i32 = 9;
        pub const DocumentTypeNode: i32 = 10;
        pub const DocumentFragmentNode: i32 = 11;
        pub const NotationNode: i32 = 12;
        pub const BaseNode: i32 = 21;
        pub const CharacterDataNode: i32 = 22;
    };

    pub const EncodingPolicy = enum {
        pub const EncodingFromDocument: i32 = 1;
        pub const EncodingFromTextStream: i32 = 2;
    };

    pub const ParseOption = enum {
        pub const Default: i32 = 0;
        pub const UseNamespaceProcessing: i32 = 1;
        pub const PreserveSpacingOnlyNodes: i32 = 2;
    };

};
