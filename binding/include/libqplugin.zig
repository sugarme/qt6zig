const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpluginmetadata.html
pub const qpluginmetadata = struct {

    pub fn ArchRequirements() u8 {
        return qtc.QPluginMetaData_ArchRequirements();
    }

    pub fn Size(self: ?*anyopaque, ) u64 {
        return qtc.QPluginMetaData_Size(@ptrCast(self));
    }

    pub fn SetSize(self: ?*anyopaque, size: u64) void {
        qtc.QPluginMetaData_SetSize(@ptrCast(self), size);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstaticplugin.html
pub const qstaticplugin = struct {

    /// New constructs a new QStaticPlugin object.
    pub fn New(other: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new(@ptrCast(other));
    }


    /// New2 constructs a new QStaticPlugin object.
    pub fn New2(other: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new2(@ptrCast(other));
    }


    /// New3 constructs a new QStaticPlugin object.
    pub fn New3(param1: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticPlugin_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticPlugin_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn MetaData(self: ?*anyopaque, ) QtC.QJsonObject {
        return qtc.QStaticPlugin_MetaData(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStaticPlugin_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpluginmetadata-header.html
pub const qpluginmetadata__header = struct {

    /// New constructs a new QPluginMetaData::Header object.
    pub fn New(other: ?*anyopaque) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__Header_new(@ptrCast(other));
    }


    /// New2 constructs a new QPluginMetaData::Header object.
    pub fn New2(other: ?*anyopaque) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__Header_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPluginMetaData::Header object.
    pub fn New3(param1: ?*anyopaque) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__Header_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__Header_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__Header_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Version(self: ?*anyopaque, ) u8 {
        return qtc.QPluginMetaData__Header_Version(@ptrCast(self));
    }

    pub fn SetVersion(self: ?*anyopaque, version: u8) void {
        qtc.QPluginMetaData__Header_SetVersion(@ptrCast(self), version);
    }

    pub fn MajorVersion(self: ?*anyopaque, ) u8 {
        return qtc.QPluginMetaData__Header_MajorVersion(@ptrCast(self));
    }

    pub fn SetQtMajorVersion(self: ?*anyopaque, qt_major_version: u8) void {
        qtc.QPluginMetaData__Header_SetQtMajorVersion(@ptrCast(self), qt_major_version);
    }

    pub fn MinorVersion(self: ?*anyopaque, ) u8 {
        return qtc.QPluginMetaData__Header_MinorVersion(@ptrCast(self));
    }

    pub fn SetQtMinorVersion(self: ?*anyopaque, qt_minor_version: u8) void {
        qtc.QPluginMetaData__Header_SetQtMinorVersion(@ptrCast(self), qt_minor_version);
    }

    pub fn PluginArchRequirements(self: ?*anyopaque, ) u8 {
        return qtc.QPluginMetaData__Header_PluginArchRequirements(@ptrCast(self));
    }

    pub fn SetPluginArchRequirements(self: ?*anyopaque, plugin_arch_requirements: u8) void {
        qtc.QPluginMetaData__Header_SetPluginArchRequirements(@ptrCast(self), plugin_arch_requirements);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData__Header_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpluginmetadata-magicheader.html
pub const qpluginmetadata__magicheader = struct {

    /// New constructs a new QPluginMetaData::MagicHeader object.
    pub fn New(other: ?*anyopaque) QtC.QPluginMetaData__MagicHeader {
        return qtc.QPluginMetaData__MagicHeader_new(@ptrCast(other));
    }


    /// New2 constructs a new QPluginMetaData::MagicHeader object.
    pub fn New2(other: ?*anyopaque) QtC.QPluginMetaData__MagicHeader {
        return qtc.QPluginMetaData__MagicHeader_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPluginMetaData::MagicHeader object.
    pub fn New3() QtC.QPluginMetaData__MagicHeader {
        return qtc.QPluginMetaData__MagicHeader_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__MagicHeader_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__MagicHeader_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Header(self: ?*anyopaque, ) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__MagicHeader_Header(@ptrCast(self));
    }

    pub fn SetHeader(self: ?*anyopaque, header: QtC.QPluginMetaData__Header) void {
        qtc.QPluginMetaData__MagicHeader_SetHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData__MagicHeader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html
pub const qpluginmetadata__elfnoteheader = struct {

    /// New constructs a new QPluginMetaData::ElfNoteHeader object.
    pub fn New(other: ?*anyopaque) QtC.QPluginMetaData__ElfNoteHeader {
        return qtc.QPluginMetaData__ElfNoteHeader_new(@ptrCast(other));
    }


    /// New2 constructs a new QPluginMetaData::ElfNoteHeader object.
    pub fn New2(other: ?*anyopaque) QtC.QPluginMetaData__ElfNoteHeader {
        return qtc.QPluginMetaData__ElfNoteHeader_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPluginMetaData::ElfNoteHeader object.
    pub fn New3(payloadSize: u32) QtC.QPluginMetaData__ElfNoteHeader {
        return qtc.QPluginMetaData__ElfNoteHeader_new3(payloadSize);
    }


    /// New4 constructs a new QPluginMetaData::ElfNoteHeader object.
    pub fn New4(param1: ?*anyopaque) QtC.QPluginMetaData__ElfNoteHeader {
        return qtc.QPluginMetaData__ElfNoteHeader_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__ElfNoteHeader_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__ElfNoteHeader_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn NNamesz(self: ?*anyopaque, ) u32 {
        return qtc.QPluginMetaData__ElfNoteHeader_NNamesz(@ptrCast(self));
    }

    pub fn SetNNamesz(self: ?*anyopaque, n_namesz: u32) void {
        qtc.QPluginMetaData__ElfNoteHeader_SetNNamesz(@ptrCast(self), n_namesz);
    }

    pub fn NDescsz(self: ?*anyopaque, ) u32 {
        return qtc.QPluginMetaData__ElfNoteHeader_NDescsz(@ptrCast(self));
    }

    pub fn SetNDescsz(self: ?*anyopaque, n_descsz: u32) void {
        qtc.QPluginMetaData__ElfNoteHeader_SetNDescsz(@ptrCast(self), n_descsz);
    }

    pub fn NType(self: ?*anyopaque, ) u32 {
        return qtc.QPluginMetaData__ElfNoteHeader_NType(@ptrCast(self));
    }

    pub fn SetNType(self: ?*anyopaque, n_type: u32) void {
        qtc.QPluginMetaData__ElfNoteHeader_SetNType(@ptrCast(self), n_type);
    }

    pub fn Header(self: ?*anyopaque, ) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__ElfNoteHeader_Header(@ptrCast(self));
    }

    pub fn SetHeader(self: ?*anyopaque, header: QtC.QPluginMetaData__Header) void {
        qtc.QPluginMetaData__ElfNoteHeader_SetHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData__ElfNoteHeader_Delete(@ptrCast(self));
    }
};
