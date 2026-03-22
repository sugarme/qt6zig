const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstyleoption.html
pub const qstyleoption = struct {

    /// New constructs a new QStyleOption object.
    pub fn New() QtC.QStyleOption {
        return qtc.QStyleOption_new();
    }


    /// New2 constructs a new QStyleOption object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOption {
        return qtc.QStyleOption_new2(@ptrCast(other));
    }


    /// New3 constructs a new QStyleOption object.
    pub fn New3(version: i32) QtC.QStyleOption {
        return qtc.QStyleOption_new3(version);
    }


    /// New4 constructs a new QStyleOption object.
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleOption {
        return qtc.QStyleOption_new4(version, typeVal);
    }


    pub fn Version(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), version);
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), _type);
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    pub fn Direction(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn FontMetrics(self: ?*anyopaque, ) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    pub fn Palette(self: ?*anyopaque, ) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    pub fn StyleObject(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOption_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionfocusrect.html
pub const qstyleoptionfocusrect = struct {

    /// New constructs a new QStyleOptionFocusRect object.
    pub fn New() QtC.QStyleOptionFocusRect {
        return qtc.QStyleOptionFocusRect_new();
    }


    /// New2 constructs a new QStyleOptionFocusRect object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionFocusRect {
        return qtc.QStyleOptionFocusRect_new2(@ptrCast(other));
    }


    pub fn BackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QStyleOptionFocusRect_BackgroundColor(@ptrCast(self));
    }

    pub fn SetBackgroundColor(self: ?*anyopaque, backgroundColor: QtC.QColor) void {
        qtc.QStyleOptionFocusRect_SetBackgroundColor(@ptrCast(self), @ptrCast(backgroundColor));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionFocusRect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionframe.html
pub const qstyleoptionframe = struct {

    /// New constructs a new QStyleOptionFrame object.
    pub fn New() QtC.QStyleOptionFrame {
        return qtc.QStyleOptionFrame_new();
    }


    /// New2 constructs a new QStyleOptionFrame object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionFrame {
        return qtc.QStyleOptionFrame_new2(@ptrCast(other));
    }


    pub fn LineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionFrame_LineWidth(@ptrCast(self));
    }

    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionFrame_SetLineWidth(@ptrCast(self), lineWidth);
    }

    pub fn MidLineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionFrame_MidLineWidth(@ptrCast(self));
    }

    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionFrame_SetMidLineWidth(@ptrCast(self), midLineWidth);
    }

    pub fn Features(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionFrame_Features(@ptrCast(self));
    }

    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionFrame_SetFeatures(@ptrCast(self), @intCast(features));
    }

    pub fn FrameShape(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionFrame_FrameShape(@ptrCast(self));
    }

    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QStyleOptionFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html
pub const qstyleoptiontabwidgetframe = struct {

    /// New constructs a new QStyleOptionTabWidgetFrame object.
    pub fn New() QtC.QStyleOptionTabWidgetFrame {
        return qtc.QStyleOptionTabWidgetFrame_new();
    }


    /// New2 constructs a new QStyleOptionTabWidgetFrame object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTabWidgetFrame {
        return qtc.QStyleOptionTabWidgetFrame_new2(@ptrCast(other));
    }


    pub fn LineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTabWidgetFrame_LineWidth(@ptrCast(self));
    }

    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetLineWidth(@ptrCast(self), lineWidth);
    }

    pub fn MidLineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTabWidgetFrame_MidLineWidth(@ptrCast(self));
    }

    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetMidLineWidth(@ptrCast(self), midLineWidth);
    }

    pub fn Shape(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTabWidgetFrame_Shape(@ptrCast(self));
    }

    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetShape(@ptrCast(self), @intCast(shape));
    }

    pub fn TabBarSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_TabBarSize(@ptrCast(self));
    }

    pub fn SetTabBarSize(self: ?*anyopaque, tabBarSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetTabBarSize(@ptrCast(self), @ptrCast(tabBarSize));
    }

    pub fn RightCornerWidgetSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_RightCornerWidgetSize(@ptrCast(self));
    }

    pub fn SetRightCornerWidgetSize(self: ?*anyopaque, rightCornerWidgetSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetRightCornerWidgetSize(@ptrCast(self), @ptrCast(rightCornerWidgetSize));
    }

    pub fn LeftCornerWidgetSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_LeftCornerWidgetSize(@ptrCast(self));
    }

    pub fn SetLeftCornerWidgetSize(self: ?*anyopaque, leftCornerWidgetSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetLeftCornerWidgetSize(@ptrCast(self), @ptrCast(leftCornerWidgetSize));
    }

    pub fn TabBarRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QStyleOptionTabWidgetFrame_TabBarRect(@ptrCast(self));
    }

    pub fn SetTabBarRect(self: ?*anyopaque, tabBarRect: QtC.QRect) void {
        qtc.QStyleOptionTabWidgetFrame_SetTabBarRect(@ptrCast(self), @ptrCast(tabBarRect));
    }

    pub fn SelectedTabRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QStyleOptionTabWidgetFrame_SelectedTabRect(@ptrCast(self));
    }

    pub fn SetSelectedTabRect(self: ?*anyopaque, selectedTabRect: QtC.QRect) void {
        qtc.QStyleOptionTabWidgetFrame_SetSelectedTabRect(@ptrCast(self), @ptrCast(selectedTabRect));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTabWidgetFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html
pub const qstyleoptiontabbarbase = struct {

    /// New constructs a new QStyleOptionTabBarBase object.
    pub fn New() QtC.QStyleOptionTabBarBase {
        return qtc.QStyleOptionTabBarBase_new();
    }


    /// New2 constructs a new QStyleOptionTabBarBase object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTabBarBase {
        return qtc.QStyleOptionTabBarBase_new2(@ptrCast(other));
    }


    pub fn Shape(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTabBarBase_Shape(@ptrCast(self));
    }

    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTabBarBase_SetShape(@ptrCast(self), @intCast(shape));
    }

    pub fn TabBarRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QStyleOptionTabBarBase_TabBarRect(@ptrCast(self));
    }

    pub fn SetTabBarRect(self: ?*anyopaque, tabBarRect: QtC.QRect) void {
        qtc.QStyleOptionTabBarBase_SetTabBarRect(@ptrCast(self), @ptrCast(tabBarRect));
    }

    pub fn SelectedTabRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QStyleOptionTabBarBase_SelectedTabRect(@ptrCast(self));
    }

    pub fn SetSelectedTabRect(self: ?*anyopaque, selectedTabRect: QtC.QRect) void {
        qtc.QStyleOptionTabBarBase_SetSelectedTabRect(@ptrCast(self), @ptrCast(selectedTabRect));
    }

    pub fn DocumentMode(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionTabBarBase_DocumentMode(@ptrCast(self));
    }

    pub fn SetDocumentMode(self: ?*anyopaque, documentMode: bool) void {
        qtc.QStyleOptionTabBarBase_SetDocumentMode(@ptrCast(self), documentMode);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTabBarBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionheader.html
pub const qstyleoptionheader = struct {

    /// New constructs a new QStyleOptionHeader object.
    pub fn New() QtC.QStyleOptionHeader {
        return qtc.QStyleOptionHeader_new();
    }


    /// New2 constructs a new QStyleOptionHeader object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionHeader {
        return qtc.QStyleOptionHeader_new2(@ptrCast(other));
    }


    pub fn Section(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self));
    }

    pub fn SetSection(self: ?*anyopaque, section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self), section);
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionheader.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionHeader_SetText(@ptrCast(self), text_str);
    }

    pub fn TextAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self));
    }

    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionHeader_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn IconAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self));
    }

    pub fn SetIconAlignment(self: ?*anyopaque, iconAlignment: i32) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self), @intCast(iconAlignment));
    }

    pub fn Position(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self), @intCast(position));
    }

    pub fn SelectedPosition(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self));
    }

    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self), @intCast(selectedPosition));
    }

    pub fn SortIndicator(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self));
    }

    pub fn SetSortIndicator(self: ?*anyopaque, sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self), @intCast(sortIndicator));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self));
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionHeader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionheaderv2.html
pub const qstyleoptionheaderv2 = struct {

    /// New constructs a new QStyleOptionHeaderV2 object.
    pub fn New() QtC.QStyleOptionHeaderV2 {
        return qtc.QStyleOptionHeaderV2_new();
    }


    /// New2 constructs a new QStyleOptionHeaderV2 object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionHeaderV2 {
        return qtc.QStyleOptionHeaderV2_new2(@ptrCast(other));
    }


    pub fn TextElideMode(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeaderV2_TextElideMode(@ptrCast(self));
    }

    pub fn SetTextElideMode(self: ?*anyopaque, textElideMode: i32) void {
        qtc.QStyleOptionHeaderV2_SetTextElideMode(@ptrCast(self), @intCast(textElideMode));
    }

    pub fn IsSectionDragTarget(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionHeaderV2_IsSectionDragTarget(@ptrCast(self));
    }

    pub fn SetIsSectionDragTarget(self: ?*anyopaque, isSectionDragTarget: bool) void {
        qtc.QStyleOptionHeaderV2_SetIsSectionDragTarget(@ptrCast(self), isSectionDragTarget);
    }

    pub fn Unused(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionHeaderV2_Unused(@ptrCast(self));
    }

    pub fn SetUnused(self: ?*anyopaque, unused: i32) void {
        qtc.QStyleOptionHeaderV2_SetUnused(@ptrCast(self), unused);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionHeaderV2_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionbutton.html
pub const qstyleoptionbutton = struct {

    /// New constructs a new QStyleOptionButton object.
    pub fn New() QtC.QStyleOptionButton {
        return qtc.QStyleOptionButton_new();
    }


    /// New2 constructs a new QStyleOptionButton object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionButton {
        return qtc.QStyleOptionButton_new2(@ptrCast(other));
    }


    pub fn Features(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionButton_Features(@ptrCast(self));
    }

    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionButton_SetFeatures(@ptrCast(self), @intCast(features));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionButton_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionbutton.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionButton_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionButton_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionButton_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionButton_IconSize(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionButton_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionButton_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontab.html
pub const qstyleoptiontab = struct {

    /// New constructs a new QStyleOptionTab object.
    pub fn New() QtC.QStyleOptionTab {
        return qtc.QStyleOptionTab_new();
    }


    /// New2 constructs a new QStyleOptionTab object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTab {
        return qtc.QStyleOptionTab_new2(@ptrCast(other));
    }


    pub fn Shape(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTab_Shape(@ptrCast(self));
    }

    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTab_SetShape(@ptrCast(self), @intCast(shape));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionTab_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontab.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionTab_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionTab_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionTab_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn Row(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTab_Row(@ptrCast(self));
    }

    pub fn SetRow(self: ?*anyopaque, row: i32) void {
        qtc.QStyleOptionTab_SetRow(@ptrCast(self), row);
    }

    pub fn Position(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTab_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionTab_SetPosition(@ptrCast(self), @intCast(position));
    }

    pub fn SelectedPosition(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTab_SelectedPosition(@ptrCast(self));
    }

    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionTab_SetSelectedPosition(@ptrCast(self), @intCast(selectedPosition));
    }

    pub fn CornerWidgets(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTab_CornerWidgets(@ptrCast(self));
    }

    pub fn SetCornerWidgets(self: ?*anyopaque, cornerWidgets: i32) void {
        qtc.QStyleOptionTab_SetCornerWidgets(@ptrCast(self), @intCast(cornerWidgets));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionTab_IconSize(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    pub fn DocumentMode(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionTab_DocumentMode(@ptrCast(self));
    }

    pub fn SetDocumentMode(self: ?*anyopaque, documentMode: bool) void {
        qtc.QStyleOptionTab_SetDocumentMode(@ptrCast(self), documentMode);
    }

    pub fn LeftButtonSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionTab_LeftButtonSize(@ptrCast(self));
    }

    pub fn SetLeftButtonSize(self: ?*anyopaque, leftButtonSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetLeftButtonSize(@ptrCast(self), @ptrCast(leftButtonSize));
    }

    pub fn RightButtonSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionTab_RightButtonSize(@ptrCast(self));
    }

    pub fn SetRightButtonSize(self: ?*anyopaque, rightButtonSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetRightButtonSize(@ptrCast(self), @ptrCast(rightButtonSize));
    }

    pub fn Features(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTab_Features(@ptrCast(self));
    }

    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionTab_SetFeatures(@ptrCast(self), @intCast(features));
    }

    pub fn TabIndex(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTab_TabIndex(@ptrCast(self));
    }

    pub fn SetTabIndex(self: ?*anyopaque, tabIndex: i32) void {
        qtc.QStyleOptionTab_SetTabIndex(@ptrCast(self), tabIndex);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTab_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbar.html
pub const qstyleoptiontoolbar = struct {

    /// New constructs a new QStyleOptionToolBar object.
    pub fn New() QtC.QStyleOptionToolBar {
        return qtc.QStyleOptionToolBar_new();
    }


    /// New2 constructs a new QStyleOptionToolBar object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolBar {
        return qtc.QStyleOptionToolBar_new2(@ptrCast(other));
    }


    pub fn PositionOfLine(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolBar_PositionOfLine(@ptrCast(self));
    }

    pub fn SetPositionOfLine(self: ?*anyopaque, positionOfLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionOfLine(@ptrCast(self), @intCast(positionOfLine));
    }

    pub fn PositionWithinLine(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolBar_PositionWithinLine(@ptrCast(self));
    }

    pub fn SetPositionWithinLine(self: ?*anyopaque, positionWithinLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionWithinLine(@ptrCast(self), @intCast(positionWithinLine));
    }

    pub fn ToolBarArea(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolBar_ToolBarArea(@ptrCast(self));
    }

    pub fn SetToolBarArea(self: ?*anyopaque, toolBarArea: i32) void {
        qtc.QStyleOptionToolBar_SetToolBarArea(@ptrCast(self), @intCast(toolBarArea));
    }

    pub fn Features(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolBar_Features(@ptrCast(self));
    }

    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionToolBar_SetFeatures(@ptrCast(self), @intCast(features));
    }

    pub fn LineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolBar_LineWidth(@ptrCast(self));
    }

    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetLineWidth(@ptrCast(self), lineWidth);
    }

    pub fn MidLineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolBar_MidLineWidth(@ptrCast(self));
    }

    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetMidLineWidth(@ptrCast(self), midLineWidth);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionprogressbar.html
pub const qstyleoptionprogressbar = struct {

    /// New constructs a new QStyleOptionProgressBar object.
    pub fn New() QtC.QStyleOptionProgressBar {
        return qtc.QStyleOptionProgressBar_new();
    }


    /// New2 constructs a new QStyleOptionProgressBar object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionProgressBar {
        return qtc.QStyleOptionProgressBar_new2(@ptrCast(other));
    }


    pub fn Minimum(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionProgressBar_Minimum(@ptrCast(self));
    }

    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QStyleOptionProgressBar_SetMinimum(@ptrCast(self), minimum);
    }

    pub fn Maximum(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionProgressBar_Maximum(@ptrCast(self));
    }

    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QStyleOptionProgressBar_SetMaximum(@ptrCast(self), maximum);
    }

    pub fn Progress(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionProgressBar_Progress(@ptrCast(self));
    }

    pub fn SetProgress(self: ?*anyopaque, progress: i32) void {
        qtc.QStyleOptionProgressBar_SetProgress(@ptrCast(self), progress);
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionProgressBar_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionprogressbar.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionProgressBar_SetText(@ptrCast(self), text_str);
    }

    pub fn TextAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionProgressBar_TextAlignment(@ptrCast(self));
    }

    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionProgressBar_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    pub fn TextVisible(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionProgressBar_TextVisible(@ptrCast(self));
    }

    pub fn SetTextVisible(self: ?*anyopaque, textVisible: bool) void {
        qtc.QStyleOptionProgressBar_SetTextVisible(@ptrCast(self), textVisible);
    }

    pub fn InvertedAppearance(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionProgressBar_InvertedAppearance(@ptrCast(self));
    }

    pub fn SetInvertedAppearance(self: ?*anyopaque, invertedAppearance: bool) void {
        qtc.QStyleOptionProgressBar_SetInvertedAppearance(@ptrCast(self), invertedAppearance);
    }

    pub fn BottomToTop(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionProgressBar_BottomToTop(@ptrCast(self));
    }

    pub fn SetBottomToTop(self: ?*anyopaque, bottomToTop: bool) void {
        qtc.QStyleOptionProgressBar_SetBottomToTop(@ptrCast(self), bottomToTop);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionProgressBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionmenuitem.html
pub const qstyleoptionmenuitem = struct {

    /// New constructs a new QStyleOptionMenuItem object.
    pub fn New() QtC.QStyleOptionMenuItem {
        return qtc.QStyleOptionMenuItem_new();
    }


    /// New2 constructs a new QStyleOptionMenuItem object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionMenuItem {
        return qtc.QStyleOptionMenuItem_new2(@ptrCast(other));
    }


    pub fn MenuItemType(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionMenuItem_MenuItemType(@ptrCast(self));
    }

    pub fn SetMenuItemType(self: ?*anyopaque, menuItemType: i32) void {
        qtc.QStyleOptionMenuItem_SetMenuItemType(@ptrCast(self), @intCast(menuItemType));
    }

    pub fn CheckType(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionMenuItem_CheckType(@ptrCast(self));
    }

    pub fn SetCheckType(self: ?*anyopaque, checkType: i32) void {
        qtc.QStyleOptionMenuItem_SetCheckType(@ptrCast(self), @intCast(checkType));
    }

    pub fn Checked(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionMenuItem_Checked(@ptrCast(self));
    }

    pub fn SetChecked(self: ?*anyopaque, checked: bool) void {
        qtc.QStyleOptionMenuItem_SetChecked(@ptrCast(self), checked);
    }

    pub fn MenuHasCheckableItems(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionMenuItem_MenuHasCheckableItems(@ptrCast(self));
    }

    pub fn SetMenuHasCheckableItems(self: ?*anyopaque, menuHasCheckableItems: bool) void {
        qtc.QStyleOptionMenuItem_SetMenuHasCheckableItems(@ptrCast(self), menuHasCheckableItems);
    }

    pub fn MenuRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QStyleOptionMenuItem_MenuRect(@ptrCast(self));
    }

    pub fn SetMenuRect(self: ?*anyopaque, menuRect: QtC.QRect) void {
        qtc.QStyleOptionMenuItem_SetMenuRect(@ptrCast(self), @ptrCast(menuRect));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionMenuItem_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionmenuitem.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionMenuItem_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionMenuItem_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionMenuItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn MaxIconWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionMenuItem_MaxIconWidth(@ptrCast(self));
    }

    pub fn SetMaxIconWidth(self: ?*anyopaque, maxIconWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetMaxIconWidth(@ptrCast(self), maxIconWidth);
    }

    pub fn ReservedShortcutWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionMenuItem_ReservedShortcutWidth(@ptrCast(self));
    }

    pub fn SetReservedShortcutWidth(self: ?*anyopaque, reservedShortcutWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetReservedShortcutWidth(@ptrCast(self), reservedShortcutWidth);
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QStyleOptionMenuItem_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionMenuItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionMenuItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiondockwidget.html
pub const qstyleoptiondockwidget = struct {

    /// New constructs a new QStyleOptionDockWidget object.
    pub fn New() QtC.QStyleOptionDockWidget {
        return qtc.QStyleOptionDockWidget_new();
    }


    /// New2 constructs a new QStyleOptionDockWidget object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionDockWidget {
        return qtc.QStyleOptionDockWidget_new2(@ptrCast(other));
    }


    pub fn Title(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.QStyleOptionDockWidget_Title(@ptrCast(self));
defer qtc.libqt_string_free(&title_str);
const title_ret = allocator.alloc(u8, title_str.len) catch @panic("qstyleoptiondockwidget.Title: Memory allocation failed");
@memcpy(title_ret, title_str.data[0..title_str.len]);
return  title_ret;
    }

    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QStyleOptionDockWidget_SetTitle(@ptrCast(self), title_str);
    }

    pub fn Closable(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionDockWidget_Closable(@ptrCast(self));
    }

    pub fn SetClosable(self: ?*anyopaque, closable: bool) void {
        qtc.QStyleOptionDockWidget_SetClosable(@ptrCast(self), closable);
    }

    pub fn Movable(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionDockWidget_Movable(@ptrCast(self));
    }

    pub fn SetMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QStyleOptionDockWidget_SetMovable(@ptrCast(self), movable);
    }

    pub fn Floatable(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionDockWidget_Floatable(@ptrCast(self));
    }

    pub fn SetFloatable(self: ?*anyopaque, floatable: bool) void {
        qtc.QStyleOptionDockWidget_SetFloatable(@ptrCast(self), floatable);
    }

    pub fn VerticalTitleBar(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionDockWidget_VerticalTitleBar(@ptrCast(self));
    }

    pub fn SetVerticalTitleBar(self: ?*anyopaque, verticalTitleBar: bool) void {
        qtc.QStyleOptionDockWidget_SetVerticalTitleBar(@ptrCast(self), verticalTitleBar);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionDockWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionviewitem.html
pub const qstyleoptionviewitem = struct {

    /// New constructs a new QStyleOptionViewItem object.
    pub fn New() QtC.QStyleOptionViewItem {
        return qtc.QStyleOptionViewItem_new();
    }


    /// New2 constructs a new QStyleOptionViewItem object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionViewItem {
        return qtc.QStyleOptionViewItem_new2(@ptrCast(other));
    }


    pub fn DisplayAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionViewItem_DisplayAlignment(@ptrCast(self));
    }

    pub fn SetDisplayAlignment(self: ?*anyopaque, displayAlignment: i32) void {
        qtc.QStyleOptionViewItem_SetDisplayAlignment(@ptrCast(self), @intCast(displayAlignment));
    }

    pub fn DecorationAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionViewItem_DecorationAlignment(@ptrCast(self));
    }

    pub fn SetDecorationAlignment(self: ?*anyopaque, decorationAlignment: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationAlignment(@ptrCast(self), @intCast(decorationAlignment));
    }

    pub fn TextElideMode(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionViewItem_TextElideMode(@ptrCast(self));
    }

    pub fn SetTextElideMode(self: ?*anyopaque, textElideMode: i32) void {
        qtc.QStyleOptionViewItem_SetTextElideMode(@ptrCast(self), @intCast(textElideMode));
    }

    pub fn DecorationPosition(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionViewItem_DecorationPosition(@ptrCast(self));
    }

    pub fn SetDecorationPosition(self: ?*anyopaque, decorationPosition: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationPosition(@ptrCast(self), @intCast(decorationPosition));
    }

    pub fn DecorationSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionViewItem_DecorationSize(@ptrCast(self));
    }

    pub fn SetDecorationSize(self: ?*anyopaque, decorationSize: QtC.QSize) void {
        qtc.QStyleOptionViewItem_SetDecorationSize(@ptrCast(self), @ptrCast(decorationSize));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QStyleOptionViewItem_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionViewItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn ShowDecorationSelected(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionViewItem_ShowDecorationSelected(@ptrCast(self));
    }

    pub fn SetShowDecorationSelected(self: ?*anyopaque, showDecorationSelected: bool) void {
        qtc.QStyleOptionViewItem_SetShowDecorationSelected(@ptrCast(self), showDecorationSelected);
    }

    pub fn Features(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionViewItem_Features(@ptrCast(self));
    }

    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionViewItem_SetFeatures(@ptrCast(self), @intCast(features));
    }

    pub fn Locale(self: ?*anyopaque, ) QtC.QLocale {
        return qtc.QStyleOptionViewItem_Locale(@ptrCast(self));
    }

    pub fn SetLocale(self: ?*anyopaque, locale: QtC.QLocale) void {
        qtc.QStyleOptionViewItem_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QStyleOptionViewItem_Widget(@ptrCast(self));
    }

    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyleOptionViewItem_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Index(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QStyleOptionViewItem_Index(@ptrCast(self));
    }

    pub fn SetIndex(self: ?*anyopaque, index: QtC.QModelIndex) void {
        qtc.QStyleOptionViewItem_SetIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn CheckState(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionViewItem_CheckState(@ptrCast(self));
    }

    pub fn SetCheckState(self: ?*anyopaque, checkState: i32) void {
        qtc.QStyleOptionViewItem_SetCheckState(@ptrCast(self), @intCast(checkState));
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionViewItem_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionViewItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionViewItem_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionviewitem.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionViewItem_SetText(@ptrCast(self), text_str);
    }

    pub fn ViewItemPosition(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionViewItem_ViewItemPosition(@ptrCast(self));
    }

    pub fn SetViewItemPosition(self: ?*anyopaque, viewItemPosition: i32) void {
        qtc.QStyleOptionViewItem_SetViewItemPosition(@ptrCast(self), @intCast(viewItemPosition));
    }

    pub fn BackgroundBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QStyleOptionViewItem_BackgroundBrush(@ptrCast(self));
    }

    pub fn SetBackgroundBrush(self: ?*anyopaque, backgroundBrush: QtC.QBrush) void {
        qtc.QStyleOptionViewItem_SetBackgroundBrush(@ptrCast(self), @ptrCast(backgroundBrush));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionViewItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbox.html
pub const qstyleoptiontoolbox = struct {

    /// New constructs a new QStyleOptionToolBox object.
    pub fn New() QtC.QStyleOptionToolBox {
        return qtc.QStyleOptionToolBox_new();
    }


    /// New2 constructs a new QStyleOptionToolBox object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolBox {
        return qtc.QStyleOptionToolBox_new2(@ptrCast(other));
    }


    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionToolBox_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontoolbox.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionToolBox_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionToolBox_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionToolBox_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn Position(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolBox_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionToolBox_SetPosition(@ptrCast(self), @intCast(position));
    }

    pub fn SelectedPosition(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolBox_SelectedPosition(@ptrCast(self));
    }

    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionToolBox_SetSelectedPosition(@ptrCast(self), @intCast(selectedPosition));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionrubberband.html
pub const qstyleoptionrubberband = struct {

    /// New constructs a new QStyleOptionRubberBand object.
    pub fn New() QtC.QStyleOptionRubberBand {
        return qtc.QStyleOptionRubberBand_new();
    }


    /// New2 constructs a new QStyleOptionRubberBand object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionRubberBand {
        return qtc.QStyleOptionRubberBand_new2(@ptrCast(other));
    }


    pub fn Shape(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionRubberBand_Shape(@ptrCast(self));
    }

    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionRubberBand_SetShape(@ptrCast(self), @intCast(shape));
    }

    pub fn Opaque(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionRubberBand_Opaque(@ptrCast(self));
    }

    pub fn SetOpaque(self: ?*anyopaque, _opaque: bool) void {
        qtc.QStyleOptionRubberBand_SetOpaque(@ptrCast(self), _opaque);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionRubberBand_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptioncomplex.html
pub const qstyleoptioncomplex = struct {

    /// New constructs a new QStyleOptionComplex object.
    pub fn New() QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new();
    }


    /// New2 constructs a new QStyleOptionComplex object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new2(@ptrCast(other));
    }


    /// New3 constructs a new QStyleOptionComplex object.
    pub fn New3(version: i32) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new3(version);
    }


    /// New4 constructs a new QStyleOptionComplex object.
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new4(version, typeVal);
    }


    pub fn SubControls(self: ?*anyopaque, ) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    pub fn ActiveSubControls(self: ?*anyopaque, ) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionComplex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionslider.html
pub const qstyleoptionslider = struct {

    /// New constructs a new QStyleOptionSlider object.
    pub fn New() QtC.QStyleOptionSlider {
        return qtc.QStyleOptionSlider_new();
    }


    /// New2 constructs a new QStyleOptionSlider object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSlider {
        return qtc.QStyleOptionSlider_new2(@ptrCast(other));
    }


    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_Orientation(@ptrCast(self));
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QStyleOptionSlider_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn Minimum(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_Minimum(@ptrCast(self));
    }

    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QStyleOptionSlider_SetMinimum(@ptrCast(self), minimum);
    }

    pub fn Maximum(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_Maximum(@ptrCast(self));
    }

    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QStyleOptionSlider_SetMaximum(@ptrCast(self), maximum);
    }

    pub fn TickPosition(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_TickPosition(@ptrCast(self));
    }

    pub fn SetTickPosition(self: ?*anyopaque, tickPosition: i32) void {
        qtc.QStyleOptionSlider_SetTickPosition(@ptrCast(self), @intCast(tickPosition));
    }

    pub fn TickInterval(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_TickInterval(@ptrCast(self));
    }

    pub fn SetTickInterval(self: ?*anyopaque, tickInterval: i32) void {
        qtc.QStyleOptionSlider_SetTickInterval(@ptrCast(self), tickInterval);
    }

    pub fn UpsideDown(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionSlider_UpsideDown(@ptrCast(self));
    }

    pub fn SetUpsideDown(self: ?*anyopaque, upsideDown: bool) void {
        qtc.QStyleOptionSlider_SetUpsideDown(@ptrCast(self), upsideDown);
    }

    pub fn SliderPosition(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_SliderPosition(@ptrCast(self));
    }

    pub fn SetSliderPosition(self: ?*anyopaque, sliderPosition: i32) void {
        qtc.QStyleOptionSlider_SetSliderPosition(@ptrCast(self), sliderPosition);
    }

    pub fn SliderValue(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_SliderValue(@ptrCast(self));
    }

    pub fn SetSliderValue(self: ?*anyopaque, sliderValue: i32) void {
        qtc.QStyleOptionSlider_SetSliderValue(@ptrCast(self), sliderValue);
    }

    pub fn SingleStep(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_SingleStep(@ptrCast(self));
    }

    pub fn SetSingleStep(self: ?*anyopaque, singleStep: i32) void {
        qtc.QStyleOptionSlider_SetSingleStep(@ptrCast(self), singleStep);
    }

    pub fn PageStep(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSlider_PageStep(@ptrCast(self));
    }

    pub fn SetPageStep(self: ?*anyopaque, pageStep: i32) void {
        qtc.QStyleOptionSlider_SetPageStep(@ptrCast(self), pageStep);
    }

    pub fn NotchTarget(self: ?*anyopaque, ) f64 {
        return qtc.QStyleOptionSlider_NotchTarget(@ptrCast(self));
    }

    pub fn SetNotchTarget(self: ?*anyopaque, notchTarget: f64) void {
        qtc.QStyleOptionSlider_SetNotchTarget(@ptrCast(self), notchTarget);
    }

    pub fn DialWrapping(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionSlider_DialWrapping(@ptrCast(self));
    }

    pub fn SetDialWrapping(self: ?*anyopaque, dialWrapping: bool) void {
        qtc.QStyleOptionSlider_SetDialWrapping(@ptrCast(self), dialWrapping);
    }

    pub fn KeyboardModifiers(self: ?*anyopaque, ) i64 {
        return qtc.QStyleOptionSlider_KeyboardModifiers(@ptrCast(self));
    }

    pub fn SetKeyboardModifiers(self: ?*anyopaque, keyboardModifiers: i64) void {
        qtc.QStyleOptionSlider_SetKeyboardModifiers(@ptrCast(self), @intCast(keyboardModifiers));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSlider_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionspinbox.html
pub const qstyleoptionspinbox = struct {

    /// New constructs a new QStyleOptionSpinBox object.
    pub fn New() QtC.QStyleOptionSpinBox {
        return qtc.QStyleOptionSpinBox_new();
    }


    /// New2 constructs a new QStyleOptionSpinBox object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSpinBox {
        return qtc.QStyleOptionSpinBox_new2(@ptrCast(other));
    }


    pub fn ButtonSymbols(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSpinBox_ButtonSymbols(@ptrCast(self));
    }

    pub fn SetButtonSymbols(self: ?*anyopaque, buttonSymbols: i32) void {
        qtc.QStyleOptionSpinBox_SetButtonSymbols(@ptrCast(self), @intCast(buttonSymbols));
    }

    pub fn StepEnabled(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSpinBox_StepEnabled(@ptrCast(self));
    }

    pub fn SetStepEnabled(self: ?*anyopaque, stepEnabled: i32) void {
        qtc.QStyleOptionSpinBox_SetStepEnabled(@ptrCast(self), @intCast(stepEnabled));
    }

    pub fn Frame(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionSpinBox_Frame(@ptrCast(self));
    }

    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QStyleOptionSpinBox_SetFrame(@ptrCast(self), frame);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSpinBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html
pub const qstyleoptiontoolbutton = struct {

    /// New constructs a new QStyleOptionToolButton object.
    pub fn New() QtC.QStyleOptionToolButton {
        return qtc.QStyleOptionToolButton_new();
    }


    /// New2 constructs a new QStyleOptionToolButton object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolButton {
        return qtc.QStyleOptionToolButton_new2(@ptrCast(other));
    }


    pub fn Features(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolButton_Features(@ptrCast(self));
    }

    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionToolButton_SetFeatures(@ptrCast(self), @intCast(features));
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionToolButton_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionToolButton_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionToolButton_IconSize(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionToolButton_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionToolButton_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontoolbutton.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionToolButton_SetText(@ptrCast(self), text_str);
    }

    pub fn ArrowType(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolButton_ArrowType(@ptrCast(self));
    }

    pub fn SetArrowType(self: ?*anyopaque, arrowType: i32) void {
        qtc.QStyleOptionToolButton_SetArrowType(@ptrCast(self), @intCast(arrowType));
    }

    pub fn ToolButtonStyle(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionToolButton_ToolButtonStyle(@ptrCast(self));
    }

    pub fn SetToolButtonStyle(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QStyleOptionToolButton_SetToolButtonStyle(@ptrCast(self), @intCast(toolButtonStyle));
    }

    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QStyleOptionToolButton_Pos(@ptrCast(self));
    }

    pub fn SetPos(self: ?*anyopaque, pos: QtC.QPoint) void {
        qtc.QStyleOptionToolButton_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QStyleOptionToolButton_Font(@ptrCast(self));
    }

    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionToolButton_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolButton_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptioncombobox.html
pub const qstyleoptioncombobox = struct {

    /// New constructs a new QStyleOptionComboBox object.
    pub fn New() QtC.QStyleOptionComboBox {
        return qtc.QStyleOptionComboBox_new();
    }


    /// New2 constructs a new QStyleOptionComboBox object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionComboBox {
        return qtc.QStyleOptionComboBox_new2(@ptrCast(other));
    }


    pub fn Editable(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionComboBox_Editable(@ptrCast(self));
    }

    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QStyleOptionComboBox_SetEditable(@ptrCast(self), editable);
    }

    pub fn PopupRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QStyleOptionComboBox_PopupRect(@ptrCast(self));
    }

    pub fn SetPopupRect(self: ?*anyopaque, popupRect: QtC.QRect) void {
        qtc.QStyleOptionComboBox_SetPopupRect(@ptrCast(self), @ptrCast(popupRect));
    }

    pub fn Frame(self: ?*anyopaque, ) bool {
        return qtc.QStyleOptionComboBox_Frame(@ptrCast(self));
    }

    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QStyleOptionComboBox_SetFrame(@ptrCast(self), frame);
    }

    pub fn CurrentText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const currentText_str = qtc.QStyleOptionComboBox_CurrentText(@ptrCast(self));
defer qtc.libqt_string_free(&currentText_str);
const currentText_ret = allocator.alloc(u8, currentText_str.len) catch @panic("qstyleoptioncombobox.CurrentText: Memory allocation failed");
@memcpy(currentText_ret, currentText_str.data[0..currentText_str.len]);
return  currentText_ret;
    }

    pub fn SetCurrentText(self: ?*anyopaque, currentText: []const u8) void {
        const currentText_str = qtc.libqt_string{
    .len = currentText.len,
    .data = currentText.ptr,
};
qtc.QStyleOptionComboBox_SetCurrentText(@ptrCast(self), currentText_str);
    }

    pub fn CurrentIcon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionComboBox_CurrentIcon(@ptrCast(self));
    }

    pub fn SetCurrentIcon(self: ?*anyopaque, currentIcon: QtC.QIcon) void {
        qtc.QStyleOptionComboBox_SetCurrentIcon(@ptrCast(self), @ptrCast(currentIcon));
    }

    pub fn IconSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStyleOptionComboBox_IconSize(@ptrCast(self));
    }

    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionComboBox_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    pub fn TextAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionComboBox_TextAlignment(@ptrCast(self));
    }

    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionComboBox_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionComboBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontitlebar.html
pub const qstyleoptiontitlebar = struct {

    /// New constructs a new QStyleOptionTitleBar object.
    pub fn New() QtC.QStyleOptionTitleBar {
        return qtc.QStyleOptionTitleBar_new();
    }


    /// New2 constructs a new QStyleOptionTitleBar object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTitleBar {
        return qtc.QStyleOptionTitleBar_new2(@ptrCast(other));
    }


    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionTitleBar_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontitlebar.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionTitleBar_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) QtC.QIcon {
        return qtc.QStyleOptionTitleBar_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionTitleBar_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    pub fn TitleBarState(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionTitleBar_TitleBarState(@ptrCast(self));
    }

    pub fn SetTitleBarState(self: ?*anyopaque, titleBarState: i32) void {
        qtc.QStyleOptionTitleBar_SetTitleBarState(@ptrCast(self), titleBarState);
    }

    pub fn TitleBarFlags(self: ?*anyopaque, ) i64 {
        return qtc.QStyleOptionTitleBar_TitleBarFlags(@ptrCast(self));
    }

    pub fn SetTitleBarFlags(self: ?*anyopaque, titleBarFlags: i64) void {
        qtc.QStyleOptionTitleBar_SetTitleBarFlags(@ptrCast(self), @intCast(titleBarFlags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTitleBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiongroupbox.html
pub const qstyleoptiongroupbox = struct {

    /// New constructs a new QStyleOptionGroupBox object.
    pub fn New() QtC.QStyleOptionGroupBox {
        return qtc.QStyleOptionGroupBox_new();
    }


    /// New2 constructs a new QStyleOptionGroupBox object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionGroupBox {
        return qtc.QStyleOptionGroupBox_new2(@ptrCast(other));
    }


    pub fn Features(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionGroupBox_Features(@ptrCast(self));
    }

    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionGroupBox_SetFeatures(@ptrCast(self), @intCast(features));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionGroupBox_Text(@ptrCast(self));
defer qtc.libqt_string_free(&text_str);
const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiongroupbox.Text: Memory allocation failed");
@memcpy(text_ret, text_str.data[0..text_str.len]);
return  text_ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStyleOptionGroupBox_SetText(@ptrCast(self), text_str);
    }

    pub fn TextAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionGroupBox_TextAlignment(@ptrCast(self));
    }

    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionGroupBox_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    pub fn TextColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QStyleOptionGroupBox_TextColor(@ptrCast(self));
    }

    pub fn SetTextColor(self: ?*anyopaque, textColor: QtC.QColor) void {
        qtc.QStyleOptionGroupBox_SetTextColor(@ptrCast(self), @ptrCast(textColor));
    }

    pub fn LineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionGroupBox_LineWidth(@ptrCast(self));
    }

    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetLineWidth(@ptrCast(self), lineWidth);
    }

    pub fn MidLineWidth(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionGroupBox_MidLineWidth(@ptrCast(self));
    }

    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetMidLineWidth(@ptrCast(self), midLineWidth);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionGroupBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionsizegrip.html
pub const qstyleoptionsizegrip = struct {

    /// New constructs a new QStyleOptionSizeGrip object.
    pub fn New() QtC.QStyleOptionSizeGrip {
        return qtc.QStyleOptionSizeGrip_new();
    }


    /// New2 constructs a new QStyleOptionSizeGrip object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSizeGrip {
        return qtc.QStyleOptionSizeGrip_new2(@ptrCast(other));
    }


    pub fn Corner(self: ?*anyopaque, ) i32 {
        return qtc.QStyleOptionSizeGrip_Corner(@ptrCast(self));
    }

    pub fn SetCorner(self: ?*anyopaque, corner: i32) void {
        qtc.QStyleOptionSizeGrip_SetCorner(@ptrCast(self), @intCast(corner));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSizeGrip_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html
pub const qstyleoptiongraphicsitem = struct {

    /// New constructs a new QStyleOptionGraphicsItem object.
    pub fn New() QtC.QStyleOptionGraphicsItem {
        return qtc.QStyleOptionGraphicsItem_new();
    }


    /// New2 constructs a new QStyleOptionGraphicsItem object.
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionGraphicsItem {
        return qtc.QStyleOptionGraphicsItem_new2(@ptrCast(other));
    }


    pub fn ExposedRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QStyleOptionGraphicsItem_ExposedRect(@ptrCast(self));
    }

    pub fn SetExposedRect(self: ?*anyopaque, exposedRect: QtC.QRectF) void {
        qtc.QStyleOptionGraphicsItem_SetExposedRect(@ptrCast(self), @ptrCast(exposedRect));
    }

    pub fn LevelOfDetailFromTransform(worldTransform: ?*anyopaque) f64 {
        return qtc.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(@ptrCast(worldTransform));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionGraphicsItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturn.html
pub const qstylehintreturn = struct {

    /// New constructs a new QStyleHintReturn object.
    pub fn New(other: ?*anyopaque) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new(@ptrCast(other));
    }


    /// New2 constructs a new QStyleHintReturn object.
    pub fn New2() QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new2();
    }


    /// New3 constructs a new QStyleHintReturn object.
    pub fn New3(param1: ?*anyopaque) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new3(@ptrCast(param1));
    }


    /// New4 constructs a new QStyleHintReturn object.
    pub fn New4(version: i32) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new4(version);
    }


    /// New5 constructs a new QStyleHintReturn object.
    pub fn New5(version: i32, typeVal: i32) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new5(version, typeVal);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleHintReturn_CopyAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Version(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self));
    }

    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self), version);
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self));
    }

    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self), _type);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturn_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturn_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturnmask.html
pub const qstylehintreturnmask = struct {

    /// New constructs a new QStyleHintReturnMask object.
    pub fn New() QtC.QStyleHintReturnMask {
        return qtc.QStyleHintReturnMask_new();
    }


    /// New2 constructs a new QStyleHintReturnMask object.
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturnMask {
        return qtc.QStyleHintReturnMask_new2(@ptrCast(param1));
    }


    pub fn Region(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QStyleHintReturnMask_Region(@ptrCast(self));
    }

    pub fn SetRegion(self: ?*anyopaque, region: QtC.QRegion) void {
        qtc.QStyleHintReturnMask_SetRegion(@ptrCast(self), @ptrCast(region));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturnMask_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturnMask_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturnvariant.html
pub const qstylehintreturnvariant = struct {

    /// New constructs a new QStyleHintReturnVariant object.
    pub fn New() QtC.QStyleHintReturnVariant {
        return qtc.QStyleHintReturnVariant_new();
    }


    /// New2 constructs a new QStyleHintReturnVariant object.
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturnVariant {
        return qtc.QStyleHintReturnVariant_new2(@ptrCast(param1));
    }


    pub fn Variant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QStyleHintReturnVariant_Variant(@ptrCast(self));
    }

    pub fn SetVariant(self: ?*anyopaque, variant: QtC.QVariant) void {
        qtc.QStyleHintReturnVariant_SetVariant(@ptrCast(self), @ptrCast(variant));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturnVariant_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturnVariant_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/styleoption.html#types
pub const enums = struct {
    pub const OptionType = enum {
        pub const SO_Default: i32 = 0;
        pub const SO_FocusRect: i32 = 1;
        pub const SO_Button: i32 = 2;
        pub const SO_Tab: i32 = 3;
        pub const SO_MenuItem: i32 = 4;
        pub const SO_Frame: i32 = 5;
        pub const SO_ProgressBar: i32 = 6;
        pub const SO_ToolBox: i32 = 7;
        pub const SO_Header: i32 = 8;
        pub const SO_DockWidget: i32 = 9;
        pub const SO_ViewItem: i32 = 10;
        pub const SO_TabWidgetFrame: i32 = 11;
        pub const SO_TabBarBase: i32 = 12;
        pub const SO_RubberBand: i32 = 13;
        pub const SO_ToolBar: i32 = 14;
        pub const SO_GraphicsItem: i32 = 15;
        pub const SO_Complex: i32 = 983040;
        pub const SO_Slider: i32 = 983041;
        pub const SO_SpinBox: i32 = 983042;
        pub const SO_ToolButton: i32 = 983043;
        pub const SO_ComboBox: i32 = 983044;
        pub const SO_TitleBar: i32 = 983045;
        pub const SO_GroupBox: i32 = 983046;
        pub const SO_SizeGrip: i32 = 983047;
        pub const SO_CustomBase: i32 = 3840;
        pub const SO_ComplexCustomBase: i32 = 251658240;
    };

    pub const StyleOptionType = enum {
        pub const Type: i32 = 0;
    };

    pub const StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const FrameFeature = enum {
        pub const None: i32 = 0;
        pub const Flat: i32 = 1;
        pub const Rounded: i32 = 2;
    };

    pub const SectionPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneSection: i32 = 3;
    };

    pub const SelectedPosition = enum {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
        pub const NextAndPreviousAreSelected: i32 = 3;
    };

    pub const SortIndicator = enum {
        pub const None: i32 = 0;
        pub const SortUp: i32 = 1;
        pub const SortDown: i32 = 2;
    };

    pub const ButtonFeature = enum {
        pub const None: i32 = 0;
        pub const Flat: i32 = 1;
        pub const HasMenu: i32 = 2;
        pub const DefaultButton: i32 = 4;
        pub const AutoDefaultButton: i32 = 8;
        pub const CommandLinkButton: i32 = 16;
    };

    pub const TabPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneTab: i32 = 3;
        pub const Moving: i32 = 4;
    };

    pub const CornerWidget = enum {
        pub const NoCornerWidgets: i32 = 0;
        pub const LeftCornerWidget: i32 = 1;
        pub const RightCornerWidget: i32 = 2;
    };

    pub const TabFeature = enum {
        pub const None: i32 = 0;
        pub const HasFrame: i32 = 1;
    };

    pub const ToolBarPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOne: i32 = 3;
    };

    pub const ToolBarFeature = enum {
        pub const None: i32 = 0;
        pub const Movable: i32 = 1;
    };

    pub const MenuItemType = enum {
        pub const Normal: i32 = 0;
        pub const DefaultItem: i32 = 1;
        pub const Separator: i32 = 2;
        pub const SubMenu: i32 = 3;
        pub const Scroller: i32 = 4;
        pub const TearOff: i32 = 5;
        pub const Margin: i32 = 6;
        pub const EmptyArea: i32 = 7;
    };

    pub const CheckType = enum {
        pub const NotCheckable: i32 = 0;
        pub const Exclusive: i32 = 1;
        pub const NonExclusive: i32 = 2;
    };

    pub const Position = enum {
        pub const Left: i32 = 0;
        pub const Right: i32 = 1;
        pub const Top: i32 = 2;
        pub const Bottom: i32 = 3;
    };

    pub const ViewItemFeature = enum {
        pub const None: i32 = 0;
        pub const WrapText: i32 = 1;
        pub const Alternate: i32 = 2;
        pub const HasCheckIndicator: i32 = 4;
        pub const HasDisplay: i32 = 8;
        pub const HasDecoration: i32 = 16;
    };

    pub const ViewItemPosition = enum {
        pub const Invalid: i32 = 0;
        pub const Beginning: i32 = 1;
        pub const Middle: i32 = 2;
        pub const End: i32 = 3;
        pub const OnlyOne: i32 = 4;
    };

    pub const ToolButtonFeature = enum {
        pub const None: i32 = 0;
        pub const Arrow: i32 = 1;
        pub const Menu: i32 = 4;
        pub const MenuButtonPopup: i32 = 4;
        pub const PopupDelay: i32 = 8;
        pub const HasMenu: i32 = 16;
    };

    pub const HintReturnType = enum {
        pub const SH_Default: i32 = 61440;
        pub const SH_Mask: i32 = 61441;
        pub const SH_Variant: i32 = 61442;
    };

};
