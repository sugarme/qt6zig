const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qformlayout.html
pub const qformlayout = struct {

    /// New constructs a new QFormLayout object.
    pub fn New(parent: ?*anyopaque) QtC.QFormLayout {
        return qtc.QFormLayout_new(@ptrCast(parent));
    }


    /// New2 constructs a new QFormLayout object.
    pub fn New2() QtC.QFormLayout {
        return qtc.QFormLayout_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFormLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFieldGrowthPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QFormLayout_SetFieldGrowthPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn FieldGrowthPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_FieldGrowthPolicy(@ptrCast(self));
    }

    pub fn SetRowWrapPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QFormLayout_SetRowWrapPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn RowWrapPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_RowWrapPolicy(@ptrCast(self));
    }

    pub fn SetLabelAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QFormLayout_SetLabelAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn LabelAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_LabelAlignment(@ptrCast(self));
    }

    pub fn SetFormAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QFormLayout_SetFormAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn FormAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_FormAlignment(@ptrCast(self));
    }

    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QFormLayout_SetHorizontalSpacing(@ptrCast(self), spacing);
    }

    pub fn HorizontalSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_HorizontalSpacing(@ptrCast(self));
    }

    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QFormLayout_SetVerticalSpacing(@ptrCast(self), spacing);
    }

    pub fn VerticalSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_VerticalSpacing(@ptrCast(self));
    }

    pub fn Spacing(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_Spacing(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QFormLayout_OnSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSpacing(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_QBaseSpacing(@ptrCast(self));
    }

    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QFormLayout_SetSpacing(@ptrCast(self), spacing);
    }

    /// Allows for overriding the related default method
    pub fn OnSetSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFormLayout_OnSetSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QFormLayout_QBaseSetSpacing(@ptrCast(self), spacing);
    }

    pub fn AddRow(self: ?*anyopaque, label: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QFormLayout_AddRow(@ptrCast(self), @ptrCast(label), @ptrCast(field));
    }

    pub fn AddRow2(self: ?*anyopaque, label: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QFormLayout_AddRow2(@ptrCast(self), @ptrCast(label), @ptrCast(field));
    }

    pub fn AddRow3(self: ?*anyopaque, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = qtc.libqt_string{
    .len = labelText.len,
    .data = labelText.ptr,
};
qtc.QFormLayout_AddRow3(@ptrCast(self), labelText_str, @ptrCast(field));
    }

    pub fn AddRow4(self: ?*anyopaque, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = qtc.libqt_string{
    .len = labelText.len,
    .data = labelText.ptr,
};
qtc.QFormLayout_AddRow4(@ptrCast(self), labelText_str, @ptrCast(field));
    }

    pub fn AddRow5(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QFormLayout_AddRow5(@ptrCast(self), @ptrCast(widget));
    }

    pub fn AddRow6(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QFormLayout_AddRow6(@ptrCast(self), @ptrCast(layout));
    }

    pub fn InsertRow(self: ?*anyopaque, row: i32, label: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QFormLayout_InsertRow(@ptrCast(self), row, @ptrCast(label), @ptrCast(field));
    }

    pub fn InsertRow2(self: ?*anyopaque, row: i32, label: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QFormLayout_InsertRow2(@ptrCast(self), row, @ptrCast(label), @ptrCast(field));
    }

    pub fn InsertRow3(self: ?*anyopaque, row: i32, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = qtc.libqt_string{
    .len = labelText.len,
    .data = labelText.ptr,
};
qtc.QFormLayout_InsertRow3(@ptrCast(self), row, labelText_str, @ptrCast(field));
    }

    pub fn InsertRow4(self: ?*anyopaque, row: i32, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = qtc.libqt_string{
    .len = labelText.len,
    .data = labelText.ptr,
};
qtc.QFormLayout_InsertRow4(@ptrCast(self), row, labelText_str, @ptrCast(field));
    }

    pub fn InsertRow5(self: ?*anyopaque, row: i32, widget: ?*anyopaque) void {
        qtc.QFormLayout_InsertRow5(@ptrCast(self), row, @ptrCast(widget));
    }

    pub fn InsertRow6(self: ?*anyopaque, row: i32, layout: ?*anyopaque) void {
        qtc.QFormLayout_InsertRow6(@ptrCast(self), row, @ptrCast(layout));
    }

    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        qtc.QFormLayout_RemoveRow(@ptrCast(self), row);
    }

    pub fn RemoveRow2(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QFormLayout_RemoveRow2(@ptrCast(self), @ptrCast(widget));
    }

    pub fn RemoveRow3(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QFormLayout_RemoveRow3(@ptrCast(self), @ptrCast(layout));
    }

    pub fn TakeRow(self: ?*anyopaque, row: i32) QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout_TakeRow(@ptrCast(self), row);
    }

    pub fn TakeRow2(self: ?*anyopaque, widget: ?*anyopaque) QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout_TakeRow2(@ptrCast(self), @ptrCast(widget));
    }

    pub fn TakeRow3(self: ?*anyopaque, layout: ?*anyopaque) QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout_TakeRow3(@ptrCast(self), @ptrCast(layout));
    }

    pub fn SetItem(self: ?*anyopaque, row: i32, role: i32, item: ?*anyopaque) void {
        qtc.QFormLayout_SetItem(@ptrCast(self), row, @intCast(role), @ptrCast(item));
    }

    pub fn SetWidget(self: ?*anyopaque, row: i32, role: i32, widget: ?*anyopaque) void {
        qtc.QFormLayout_SetWidget(@ptrCast(self), row, @intCast(role), @ptrCast(widget));
    }

    pub fn SetLayout(self: ?*anyopaque, row: i32, role: i32, layout: ?*anyopaque) void {
        qtc.QFormLayout_SetLayout(@ptrCast(self), row, @intCast(role), @ptrCast(layout));
    }

    pub fn SetRowVisible(self: ?*anyopaque, row: i32, on: bool) void {
        qtc.QFormLayout_SetRowVisible(@ptrCast(self), row, on);
    }

    pub fn SetRowVisible2(self: ?*anyopaque, widget: ?*anyopaque, on: bool) void {
        qtc.QFormLayout_SetRowVisible2(@ptrCast(self), @ptrCast(widget), on);
    }

    pub fn SetRowVisible3(self: ?*anyopaque, layout: ?*anyopaque, on: bool) void {
        qtc.QFormLayout_SetRowVisible3(@ptrCast(self), @ptrCast(layout), on);
    }

    pub fn IsRowVisible(self: ?*anyopaque, row: i32) bool {
        return qtc.QFormLayout_IsRowVisible(@ptrCast(self), row);
    }

    pub fn IsRowVisible2(self: ?*anyopaque, widget: ?*anyopaque) bool {
        return qtc.QFormLayout_IsRowVisible2(@ptrCast(self), @ptrCast(widget));
    }

    pub fn IsRowVisible3(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QFormLayout_IsRowVisible3(@ptrCast(self), @ptrCast(layout));
    }

    pub fn ItemAt(self: ?*anyopaque, row: i32, role: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_ItemAt(@ptrCast(self), row, @intCast(role));
    }

    pub fn GetItemPosition(self: ?*anyopaque, index: i32, rowPtr: *i32, rolePtr: *i32) void {
        qtc.QFormLayout_GetItemPosition(@ptrCast(self), index, @ptrCast(rowPtr), @intCast(rolePtr));
    }

    pub fn GetWidgetPosition(self: ?*anyopaque, widget: ?*anyopaque, rowPtr: *i32, rolePtr: *i32) void {
        qtc.QFormLayout_GetWidgetPosition(@ptrCast(self), @ptrCast(widget), @ptrCast(rowPtr), @intCast(rolePtr));
    }

    pub fn GetLayoutPosition(self: ?*anyopaque, layout: ?*anyopaque, rowPtr: *i32, rolePtr: *i32) void {
        qtc.QFormLayout_GetLayoutPosition(@ptrCast(self), @ptrCast(layout), @ptrCast(rowPtr), @intCast(rolePtr));
    }

    pub fn LabelForField(self: ?*anyopaque, field: ?*anyopaque) QtC.QWidget {
        return qtc.QFormLayout_LabelForField(@ptrCast(self), @ptrCast(field));
    }

    pub fn LabelForField2(self: ?*anyopaque, field: ?*anyopaque) QtC.QWidget {
        return qtc.QFormLayout_LabelForField2(@ptrCast(self), @ptrCast(field));
    }

    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QFormLayout_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnAddItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnAddItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QFormLayout_QBaseAddItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn ItemAt2(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_ItemAt2(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QFormLayout_OnItemAt2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt2(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_QBaseItemAt2(@ptrCast(self), index);
    }

    pub fn TakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_TakeAt(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnTakeAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QFormLayout_OnTakeAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_QBaseTakeAt(@ptrCast(self), index);
    }

    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QFormLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QFormLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QFormLayout_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QFormLayout_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QFormLayout_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QFormLayout_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QFormLayout_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QFormLayout_QBaseSizeHint(@ptrCast(self));
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QFormLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnInvalidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInvalidate(self: ?*anyopaque, ) void {
        qtc.QFormLayout_QBaseInvalidate(@ptrCast(self));
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QFormLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QFormLayout_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QFormLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QFormLayout_HeightForWidth(@ptrCast(self), width);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QFormLayout_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QFormLayout_QBaseHeightForWidth(@ptrCast(self), width);
    }

    pub fn ExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QFormLayout_OnExpandingDirections(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QFormLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_QBaseCount(@ptrCast(self));
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QFormLayout_RowCount(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFormLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFormLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qformlayout-takerowresult.html
pub const qformlayout__takerowresult = struct {

    /// New constructs a new QFormLayout::TakeRowResult object.
    pub fn New() QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout__TakeRowResult_new();
    }


    /// New2 constructs a new QFormLayout::TakeRowResult object.
    pub fn New2(param1: ?*anyopaque) QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout__TakeRowResult_new2(@ptrCast(param1));
    }


    pub fn LabelItem(self: ?*anyopaque, ) QtC.QLayoutItem {
        return qtc.QFormLayout__TakeRowResult_LabelItem(@ptrCast(self));
    }

    pub fn SetLabelItem(self: ?*anyopaque, labelItem: ?*anyopaque) void {
        qtc.QFormLayout__TakeRowResult_SetLabelItem(@ptrCast(self), @ptrCast(labelItem));
    }

    pub fn FieldItem(self: ?*anyopaque, ) QtC.QLayoutItem {
        return qtc.QFormLayout__TakeRowResult_FieldItem(@ptrCast(self));
    }

    pub fn SetFieldItem(self: ?*anyopaque, fieldItem: ?*anyopaque) void {
        qtc.QFormLayout__TakeRowResult_SetFieldItem(@ptrCast(self), @ptrCast(fieldItem));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormLayout__TakeRowResult_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/formlayout.html#types
pub const enums = struct {
    pub const FieldGrowthPolicy = enum {
        pub const FieldsStayAtSizeHint: i32 = 0;
        pub const ExpandingFieldsGrow: i32 = 1;
        pub const AllNonFixedFieldsGrow: i32 = 2;
    };

    pub const RowWrapPolicy = enum {
        pub const DontWrapRows: i32 = 0;
        pub const WrapLongRows: i32 = 1;
        pub const WrapAllRows: i32 = 2;
    };

    pub const ItemRole = enum {
        pub const LabelRole: i32 = 0;
        pub const FieldRole: i32 = 1;
        pub const SpanningRole: i32 = 2;
    };

};
