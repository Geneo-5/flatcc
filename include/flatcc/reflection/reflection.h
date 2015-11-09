#ifndef REFLECTION_H
#define REFLECTION_H

/* Generated by flatcc 0.1.0 FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_H
#include "flatbuffers_common.h"
#endif
#ifndef alignas
#include <stdalign.h>
#endif
#if __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#undef flatbuffers_identifier
#define flatbuffers_identifier "BFBS"
#undef flatbuffers_extension
#define flatbuffers_extension ".bfbs"
#ifndef FLATBUFFERS_WRAP_NAMESPACE
#define FLATBUFFERS_WRAP_NAMESPACE(ns, x) ns ## _ ## x
#endif


typedef const struct reflection_Type_table *reflection_Type_table_t;
typedef const flatbuffers_uoffset_t *reflection_Type_vec_t;
typedef flatbuffers_uoffset_t *reflection_Type_mutable_vec_t;
typedef const struct reflection_EnumVal_table *reflection_EnumVal_table_t;
typedef const flatbuffers_uoffset_t *reflection_EnumVal_vec_t;
typedef flatbuffers_uoffset_t *reflection_EnumVal_mutable_vec_t;
typedef const struct reflection_Enum_table *reflection_Enum_table_t;
typedef const flatbuffers_uoffset_t *reflection_Enum_vec_t;
typedef flatbuffers_uoffset_t *reflection_Enum_mutable_vec_t;
typedef const struct reflection_Field_table *reflection_Field_table_t;
typedef const flatbuffers_uoffset_t *reflection_Field_vec_t;
typedef flatbuffers_uoffset_t *reflection_Field_mutable_vec_t;
typedef const struct reflection_Object_table *reflection_Object_table_t;
typedef const flatbuffers_uoffset_t *reflection_Object_vec_t;
typedef flatbuffers_uoffset_t *reflection_Object_mutable_vec_t;
typedef const struct reflection_Schema_table *reflection_Schema_table_t;
typedef const flatbuffers_uoffset_t *reflection_Schema_vec_t;
typedef flatbuffers_uoffset_t *reflection_Schema_mutable_vec_t;

typedef int8_t reflection_BaseType_enum_t;
__flatbuffers_define_integer_type(reflection_BaseType, reflection_BaseType_enum_t, 8)
static const reflection_BaseType_enum_t reflection_BaseType_None = 0;
static const reflection_BaseType_enum_t reflection_BaseType_UType = 1;
static const reflection_BaseType_enum_t reflection_BaseType_Bool = 2;
static const reflection_BaseType_enum_t reflection_BaseType_Byte = 3;
static const reflection_BaseType_enum_t reflection_BaseType_UByte = 4;
static const reflection_BaseType_enum_t reflection_BaseType_Short = 5;
static const reflection_BaseType_enum_t reflection_BaseType_UShort = 6;
static const reflection_BaseType_enum_t reflection_BaseType_Int = 7;
static const reflection_BaseType_enum_t reflection_BaseType_UInt = 8;
static const reflection_BaseType_enum_t reflection_BaseType_Long = 9;
static const reflection_BaseType_enum_t reflection_BaseType_ULong = 10;
static const reflection_BaseType_enum_t reflection_BaseType_Float = 11;
static const reflection_BaseType_enum_t reflection_BaseType_Double = 12;
static const reflection_BaseType_enum_t reflection_BaseType_String = 13;
static const reflection_BaseType_enum_t reflection_BaseType_Vector = 14;
static const reflection_BaseType_enum_t reflection_BaseType_Obj = 15;
static const reflection_BaseType_enum_t reflection_BaseType_Union = 16;

static inline const char *reflection_BaseType_name(reflection_BaseType_enum_t value)
{
    switch (value) {
    case 0: return "None";
    case 1: return "UType";
    case 2: return "Bool";
    case 3: return "Byte";
    case 4: return "UByte";
    case 5: return "Short";
    case 6: return "UShort";
    case 7: return "Int";
    case 8: return "UInt";
    case 9: return "Long";
    case 10: return "ULong";
    case 11: return "Float";
    case 12: return "Double";
    case 13: return "String";
    case 14: return "Vector";
    case 15: return "Obj";
    case 16: return "Union";
    default: return "";
    }
}



struct reflection_Type_table { uint8_t unused__; };

#ifndef reflection_Type_identifier
#define reflection_Type_identifier flatbuffers_identifier
#endif
static inline flatbuffers_uoffset_t reflection_Type_vec_len(reflection_Type_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Type_table_t reflection_Type_vec_at(reflection_Type_vec_t vec, flatbuffers_uoffset_t i)
__flatbuffers_offset_vec_at(reflection_Type_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Type)

static inline reflection_BaseType_enum_t reflection_Type_base_type(reflection_Type_table_t t)
__flatbuffers_scalar_field(reflection_BaseType, 0, 0, t)
static inline int reflection_Type_base_type_is_present(reflection_Type_table_t t)
__flatbuffers_field_present(0, t)

static inline reflection_BaseType_enum_t reflection_Type_element(reflection_Type_table_t t)
__flatbuffers_scalar_field(reflection_BaseType, 1, 0, t)
static inline int reflection_Type_element_is_present(reflection_Type_table_t t)
__flatbuffers_field_present(1, t)

static inline int32_t reflection_Type_index(reflection_Type_table_t t)
__flatbuffers_scalar_field(flatbuffers_int32, 2, -1, t)
static inline int reflection_Type_index_is_present(reflection_Type_table_t t)
__flatbuffers_field_present(2, t)


struct reflection_EnumVal_table { uint8_t unused__; };

#ifndef reflection_EnumVal_identifier
#define reflection_EnumVal_identifier flatbuffers_identifier
#endif
static inline flatbuffers_uoffset_t reflection_EnumVal_vec_len(reflection_EnumVal_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_EnumVal_table_t reflection_EnumVal_vec_at(reflection_EnumVal_vec_t vec, flatbuffers_uoffset_t i)
__flatbuffers_offset_vec_at(reflection_EnumVal_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_EnumVal)

static inline flatbuffers_string_t reflection_EnumVal_name(reflection_EnumVal_table_t t)
__flatbuffers_vector_field(flatbuffers_string_t, 0, t, 1)
static inline int reflection_EnumVal_name_is_present(reflection_EnumVal_table_t t)
__flatbuffers_field_present(0, t)

static inline int64_t reflection_EnumVal_value(reflection_EnumVal_table_t t)
__flatbuffers_scalar_field(flatbuffers_int64, 1, 0, t)
/* Note: find only works on vectors sorted by this field. */
__flatbuffers_define_find_by_scalar_field(reflection_EnumVal, value, int64_t)
__flatbuffers_define_sort_by_scalar_field(reflection_EnumVal, value, int64_t, flatbuffers_uoffset_t)
#define reflection_EnumVal_vec_find reflection_EnumVal_vec_find_by_value
#define reflection_EnumVal_vec_sort reflection_EnumVal_vec_sort_by_value
static inline int reflection_EnumVal_value_is_present(reflection_EnumVal_table_t t)
__flatbuffers_field_present(1, t)

static inline reflection_Object_table_t reflection_EnumVal_object(reflection_EnumVal_table_t t)
__flatbuffers_table_field(reflection_Object_table_t, 2, t, 0)
static inline int reflection_EnumVal_object_is_present(reflection_EnumVal_table_t t)
__flatbuffers_field_present(2, t)


struct reflection_Enum_table { uint8_t unused__; };

#ifndef reflection_Enum_identifier
#define reflection_Enum_identifier flatbuffers_identifier
#endif
static inline flatbuffers_uoffset_t reflection_Enum_vec_len(reflection_Enum_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Enum_table_t reflection_Enum_vec_at(reflection_Enum_vec_t vec, flatbuffers_uoffset_t i)
__flatbuffers_offset_vec_at(reflection_Enum_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Enum)

static inline flatbuffers_string_t reflection_Enum_name(reflection_Enum_table_t t)
__flatbuffers_vector_field(flatbuffers_string_t, 0, t, 1)
/* Note: find only works on vectors sorted by this field. */
static inline flatbuffers_uoffset_t reflection_Enum_vec_find_by_name(reflection_Enum_vec_t vec, const char *s)
__flatbuffers_find_by_string_field(reflection_Enum_name, vec, reflection_Enum_vec_at, reflection_Enum_vec_len, s)
static inline flatbuffers_uoffset_t reflection_Enum_vec_find_n_by_name(reflection_Enum_vec_t vec, const char *s, int n)
__flatbuffers_find_by_string_n_field(reflection_Enum_name, vec, reflection_Enum_vec_at, reflection_Enum_vec_len, s, n)
__flatbuffers_define_sort_by_string_field(reflection_Enum, name)
#define reflection_Enum_vec_find reflection_Enum_vec_find_by_name
#define reflection_Enum_vec_find_n reflection_Enum_vec_find_n_by_name
#define reflection_Enum_vec_sort reflection_Enum_vec_sort_by_name
static inline int reflection_Enum_name_is_present(reflection_Enum_table_t t)
__flatbuffers_field_present(0, t)

static inline reflection_EnumVal_vec_t reflection_Enum_values(reflection_Enum_table_t t)
__flatbuffers_vector_field(reflection_EnumVal_vec_t, 1, t, 1)
static inline int reflection_Enum_values_is_present(reflection_Enum_table_t t)
__flatbuffers_field_present(1, t)

static inline flatbuffers_bool_t reflection_Enum_is_union(reflection_Enum_table_t t)
__flatbuffers_scalar_field(flatbuffers_bool, 2, 0, t)
static inline int reflection_Enum_is_union_is_present(reflection_Enum_table_t t)
__flatbuffers_field_present(2, t)

static inline reflection_Type_table_t reflection_Enum_underlying_type(reflection_Enum_table_t t)
__flatbuffers_table_field(reflection_Type_table_t, 3, t, 1)
static inline int reflection_Enum_underlying_type_is_present(reflection_Enum_table_t t)
__flatbuffers_field_present(3, t)


struct reflection_Field_table { uint8_t unused__; };

#ifndef reflection_Field_identifier
#define reflection_Field_identifier flatbuffers_identifier
#endif
static inline flatbuffers_uoffset_t reflection_Field_vec_len(reflection_Field_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Field_table_t reflection_Field_vec_at(reflection_Field_vec_t vec, flatbuffers_uoffset_t i)
__flatbuffers_offset_vec_at(reflection_Field_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Field)

static inline flatbuffers_string_t reflection_Field_name(reflection_Field_table_t t)
__flatbuffers_vector_field(flatbuffers_string_t, 0, t, 1)
/* Note: find only works on vectors sorted by this field. */
static inline flatbuffers_uoffset_t reflection_Field_vec_find_by_name(reflection_Field_vec_t vec, const char *s)
__flatbuffers_find_by_string_field(reflection_Field_name, vec, reflection_Field_vec_at, reflection_Field_vec_len, s)
static inline flatbuffers_uoffset_t reflection_Field_vec_find_n_by_name(reflection_Field_vec_t vec, const char *s, int n)
__flatbuffers_find_by_string_n_field(reflection_Field_name, vec, reflection_Field_vec_at, reflection_Field_vec_len, s, n)
__flatbuffers_define_sort_by_string_field(reflection_Field, name)
#define reflection_Field_vec_find reflection_Field_vec_find_by_name
#define reflection_Field_vec_find_n reflection_Field_vec_find_n_by_name
#define reflection_Field_vec_sort reflection_Field_vec_sort_by_name
static inline int reflection_Field_name_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(0, t)

static inline reflection_Type_table_t reflection_Field_type(reflection_Field_table_t t)
__flatbuffers_table_field(reflection_Type_table_t, 1, t, 1)
static inline int reflection_Field_type_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(1, t)

static inline uint16_t reflection_Field_id(reflection_Field_table_t t)
__flatbuffers_scalar_field(flatbuffers_uint16, 2, 0, t)
static inline int reflection_Field_id_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(2, t)

static inline uint16_t reflection_Field_offset(reflection_Field_table_t t)
__flatbuffers_scalar_field(flatbuffers_uint16, 3, 0, t)
static inline int reflection_Field_offset_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(3, t)

static inline int64_t reflection_Field_default_integer(reflection_Field_table_t t)
__flatbuffers_scalar_field(flatbuffers_int64, 4, 0, t)
static inline int reflection_Field_default_integer_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(4, t)

static inline double reflection_Field_default_real(reflection_Field_table_t t)
__flatbuffers_scalar_field(flatbuffers_double, 5, 0.000000, t)
static inline int reflection_Field_default_real_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(5, t)

static inline flatbuffers_bool_t reflection_Field_deprecated(reflection_Field_table_t t)
__flatbuffers_scalar_field(flatbuffers_bool, 6, 0, t)
static inline int reflection_Field_deprecated_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(6, t)

static inline flatbuffers_bool_t reflection_Field_required(reflection_Field_table_t t)
__flatbuffers_scalar_field(flatbuffers_bool, 7, 0, t)
static inline int reflection_Field_required_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(7, t)

static inline flatbuffers_bool_t reflection_Field_key(reflection_Field_table_t t)
__flatbuffers_scalar_field(flatbuffers_bool, 8, 0, t)
static inline int reflection_Field_key_is_present(reflection_Field_table_t t)
__flatbuffers_field_present(8, t)


struct reflection_Object_table { uint8_t unused__; };

#ifndef reflection_Object_identifier
#define reflection_Object_identifier flatbuffers_identifier
#endif
static inline flatbuffers_uoffset_t reflection_Object_vec_len(reflection_Object_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Object_table_t reflection_Object_vec_at(reflection_Object_vec_t vec, flatbuffers_uoffset_t i)
__flatbuffers_offset_vec_at(reflection_Object_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Object)

static inline flatbuffers_string_t reflection_Object_name(reflection_Object_table_t t)
__flatbuffers_vector_field(flatbuffers_string_t, 0, t, 1)
/* Note: find only works on vectors sorted by this field. */
static inline flatbuffers_uoffset_t reflection_Object_vec_find_by_name(reflection_Object_vec_t vec, const char *s)
__flatbuffers_find_by_string_field(reflection_Object_name, vec, reflection_Object_vec_at, reflection_Object_vec_len, s)
static inline flatbuffers_uoffset_t reflection_Object_vec_find_n_by_name(reflection_Object_vec_t vec, const char *s, int n)
__flatbuffers_find_by_string_n_field(reflection_Object_name, vec, reflection_Object_vec_at, reflection_Object_vec_len, s, n)
__flatbuffers_define_sort_by_string_field(reflection_Object, name)
#define reflection_Object_vec_find reflection_Object_vec_find_by_name
#define reflection_Object_vec_find_n reflection_Object_vec_find_n_by_name
#define reflection_Object_vec_sort reflection_Object_vec_sort_by_name
static inline int reflection_Object_name_is_present(reflection_Object_table_t t)
__flatbuffers_field_present(0, t)

static inline reflection_Field_vec_t reflection_Object_fields(reflection_Object_table_t t)
__flatbuffers_vector_field(reflection_Field_vec_t, 1, t, 1)
static inline int reflection_Object_fields_is_present(reflection_Object_table_t t)
__flatbuffers_field_present(1, t)

static inline flatbuffers_bool_t reflection_Object_is_struct(reflection_Object_table_t t)
__flatbuffers_scalar_field(flatbuffers_bool, 2, 0, t)
static inline int reflection_Object_is_struct_is_present(reflection_Object_table_t t)
__flatbuffers_field_present(2, t)

static inline int32_t reflection_Object_minalign(reflection_Object_table_t t)
__flatbuffers_scalar_field(flatbuffers_int32, 3, 0, t)
static inline int reflection_Object_minalign_is_present(reflection_Object_table_t t)
__flatbuffers_field_present(3, t)

static inline int32_t reflection_Object_bytesize(reflection_Object_table_t t)
__flatbuffers_scalar_field(flatbuffers_int32, 4, 0, t)
static inline int reflection_Object_bytesize_is_present(reflection_Object_table_t t)
__flatbuffers_field_present(4, t)


struct reflection_Schema_table { uint8_t unused__; };

#ifndef reflection_Schema_identifier
#define reflection_Schema_identifier flatbuffers_identifier
#endif
static inline flatbuffers_uoffset_t reflection_Schema_vec_len(reflection_Schema_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Schema_table_t reflection_Schema_vec_at(reflection_Schema_vec_t vec, flatbuffers_uoffset_t i)
__flatbuffers_offset_vec_at(reflection_Schema_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Schema)

static inline reflection_Object_vec_t reflection_Schema_objects(reflection_Schema_table_t t)
__flatbuffers_vector_field(reflection_Object_vec_t, 0, t, 1)
static inline int reflection_Schema_objects_is_present(reflection_Schema_table_t t)
__flatbuffers_field_present(0, t)

static inline reflection_Enum_vec_t reflection_Schema_enums(reflection_Schema_table_t t)
__flatbuffers_vector_field(reflection_Enum_vec_t, 1, t, 1)
static inline int reflection_Schema_enums_is_present(reflection_Schema_table_t t)
__flatbuffers_field_present(1, t)

static inline flatbuffers_string_t reflection_Schema_file_ident(reflection_Schema_table_t t)
__flatbuffers_vector_field(flatbuffers_string_t, 2, t, 0)
static inline int reflection_Schema_file_ident_is_present(reflection_Schema_table_t t)
__flatbuffers_field_present(2, t)

static inline flatbuffers_string_t reflection_Schema_file_ext(reflection_Schema_table_t t)
__flatbuffers_vector_field(flatbuffers_string_t, 3, t, 0)
static inline int reflection_Schema_file_ext_is_present(reflection_Schema_table_t t)
__flatbuffers_field_present(3, t)

static inline reflection_Object_table_t reflection_Schema_root_table(reflection_Schema_table_t t)
__flatbuffers_table_field(reflection_Object_table_t, 4, t, 0)
static inline int reflection_Schema_root_table_is_present(reflection_Schema_table_t t)
__flatbuffers_field_present(4, t)


#if __clang__
#pragma clang diagnostic pop
#endif
#endif /* REFLECTION_H */
