// UBSAN runtime stubs - provides no-op implementations for undefined behavior
// sanitizer handlers that Qt6 static libraries may reference.
// This allows linking Qt6 libs built with UBSAN without including the full
// sanitizer runtime.

#include <stdint.h>

typedef struct {
    const char *filename;
    uint32_t line;
    uint32_t column;
} source_location_t;

typedef struct {
    source_location_t loc;
    const void *type;
    unsigned char log_alignment;
    unsigned char type_check_kind;
} type_mismatch_data_v1;

typedef struct {
    source_location_t loc;
} overflow_data;

typedef struct {
    source_location_t loc;
    const void *type;
} invalid_value_data;

typedef struct {
    source_location_t loc;
} pointer_overflow_data;

typedef struct {
    source_location_t loc;
    const void *lhs_type;
    const void *rhs_type;
} shift_out_of_bounds_data;

typedef struct {
    source_location_t loc;
    const void *array_type;
    const void *index_type;
} out_of_bounds_data;

typedef struct {
    source_location_t loc;
} unreachable_data;

typedef struct {
    source_location_t loc;
} nonnull_arg_data;

void __ubsan_handle_type_mismatch_v1(type_mismatch_data_v1 *data, uintptr_t ptr) {
    (void)data; (void)ptr;
}

void __ubsan_handle_add_overflow(overflow_data *data, uintptr_t lhs, uintptr_t rhs) {
    (void)data; (void)lhs; (void)rhs;
}

void __ubsan_handle_sub_overflow(overflow_data *data, uintptr_t lhs, uintptr_t rhs) {
    (void)data; (void)lhs; (void)rhs;
}

void __ubsan_handle_mul_overflow(overflow_data *data, uintptr_t lhs, uintptr_t rhs) {
    (void)data; (void)lhs; (void)rhs;
}

void __ubsan_handle_negate_overflow(overflow_data *data, uintptr_t val) {
    (void)data; (void)val;
}

void __ubsan_handle_divrem_overflow(overflow_data *data, uintptr_t lhs, uintptr_t rhs) {
    (void)data; (void)lhs; (void)rhs;
}

void __ubsan_handle_load_invalid_value(invalid_value_data *data, uintptr_t val) {
    (void)data; (void)val;
}

void __ubsan_handle_pointer_overflow(pointer_overflow_data *data, uintptr_t base, uintptr_t result) {
    (void)data; (void)base; (void)result;
}

void __ubsan_handle_shift_out_of_bounds(shift_out_of_bounds_data *data, uintptr_t lhs, uintptr_t rhs) {
    (void)data; (void)lhs; (void)rhs;
}

void __ubsan_handle_out_of_bounds(out_of_bounds_data *data, uintptr_t idx) {
    (void)data; (void)idx;
}

void __ubsan_handle_builtin_unreachable(unreachable_data *data) {
    (void)data;
}

void __ubsan_handle_nonnull_arg(nonnull_arg_data *data) {
    (void)data;
}

void __ubsan_handle_nonnull_return_v1(source_location_t *loc1, source_location_t *loc2) {
    (void)loc1; (void)loc2;
}

void __ubsan_handle_float_cast_overflow(void *data, uintptr_t val) {
    (void)data; (void)val;
}

void __ubsan_handle_invalid_builtin(void *data) {
    (void)data;
}

void __ubsan_handle_alignment_assumption(void *data, uintptr_t ptr, uintptr_t align, uintptr_t offset) {
    (void)data; (void)ptr; (void)align; (void)offset;
}

void __ubsan_handle_missing_return(void *data) {
    (void)data;
}

void __ubsan_handle_implicit_conversion(void *data, uintptr_t from, uintptr_t to) {
    (void)data; (void)from; (void)to;
}

void __ubsan_handle_vla_bound_not_positive(void *data, uintptr_t val) {
    (void)data; (void)val;
}

void __ubsan_handle_function_type_mismatch(void *data, uintptr_t val) {
    (void)data; (void)val;
}

void __ubsan_handle_cfi_check_fail(void *data, uintptr_t val, uintptr_t valid) {
    (void)data; (void)val; (void)valid;
}
