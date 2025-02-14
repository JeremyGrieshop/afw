// See the 'COPYING' file in the project root for licensing information.
/*
 * Adaptive Framework Core Data Types 
 *
 * Copyright (c) 2010-2023 Clemson University
 *
 */

/*  ----------------------------- N O T E -------------------------------------
 *
 * This file is generated by "afwdev generate afw".
 *
 * Do not change this file directly or the changes will be lost the next time
 * this file is regenerated.
 *
 * -------------------------------------------------------------------------*/



/**
 * @file afw_data_type_date_binding.c
 * @brief Adaptive Framework core data types.
 */

#include "afw.h"
#include "afw_runtime_object_maps.h"
#include "afw_value_internal.h"

/* Declaration for method optional_release for managed value. */
AFW_DECLARE_STATIC(void)
impl_afw_value_managed_optional_release(
    const afw_value_t *instance,
    afw_xctx_t *xctx);


/* Declaration for method get_reference for unmanaged value. */
AFW_DECLARE_STATIC(const afw_value_t *)
impl_afw_value_unmanaged_get_reference(
    const afw_value_t *instance,
    const afw_pool_t *p,
    afw_xctx_t *xctx);


/* Declaration for method get_reference for managed value. */
AFW_DECLARE_STATIC(const afw_value_t *)
impl_afw_value_managed_get_reference(
    const afw_value_t *instance,
    const afw_pool_t *p,
    afw_xctx_t *xctx);


/* Declaration for method get_reference for permanent value. */
AFW_DECLARE_STATIC(const afw_value_t *)
impl_afw_value_permanent_get_reference(
    const afw_value_t *instance,
    const afw_pool_t *p,
    afw_xctx_t *xctx);


#define impl_afw_value_get_evaluated_meta \
    afw_value_internal_get_evaluated_meta_default

#define impl_afw_value_get_evaluated_metas \
    afw_value_internal_get_evaluated_metas_default

/* This is fully evaluated so optional_evaluate method is NULL. */
#define impl_afw_value_optional_evaluate NULL

/* The optimized value is the same as the value itself. */
#define impl_afw_value_optional_get_optimized NULL

/* Inf specific is always data type. */
#define AFW_IMPLEMENTATION_SPECIFIC (const void *)&afw_data_type_date_direct

/* Define inf variables for data_type and is_evaluated_of_data_type. */
#define AFW_IMPLEMENTATION_INF_VARIABLES \
    (const void *)&afw_data_type_date_direct, \
    (const void *)&afw_data_type_date_direct

/* Declares and rti/inf defines for interface afw_value */
/* This is the inf for unmanaged date values. For this one */
/* optional_release is NULL and get_reference returns new reference. */
#define AFW_IMPLEMENTATION_ID "date"
#define AFW_IMPLEMENTATION_INF_SPECIFIER AFW_DEFINE_CONST_DATA
#define AFW_IMPLEMENTATION_INF_LABEL afw_value_evaluated_date_inf
#define impl_afw_value_optional_release NULL
#define impl_afw_value_get_reference impl_afw_value_unmanaged_get_reference
#include "afw_value_impl_declares.h"
#undef AFW_IMPLEMENTATION_ID
#undef AFW_IMPLEMENTATION_INF_LABEL
#undef impl_afw_value_optional_release
#undef impl_afw_value_get_reference

/* Declares and rti/inf defines for interface afw_value */
/* This is the inf for managed date values. For this one */
/* optional_release releases value and get_reference returns new reference. */
#define AFW_IMPLEMENTATION_ID "managed_date"
#define AFW_IMPLEMENTATION_INF_LABEL afw_value_managed_date_inf
#define impl_afw_value_optional_release impl_afw_value_managed_optional_release
#define impl_afw_value_get_reference impl_afw_value_managed_get_reference
#define AFW_VALUE_INF_ONLY 1
#include "afw_value_impl_declares.h"
#undef AFW_IMPLEMENTATION_ID
#undef AFW_IMPLEMENTATION_INF_LABEL
#undef impl_afw_value_optional_release
#undef impl_afw_value_get_reference
#undef AFW_VALUE_INF_ONLY

/* Declares and rti/inf defines for interface afw_value */
/* This is the inf for permanent date values. For this one */
/* optional_release is NULL and get_reference returns instance asis. */
#define AFW_IMPLEMENTATION_ID "permanent_date"
#define AFW_IMPLEMENTATION_INF_LABEL afw_value_permanent_date_inf
#define impl_afw_value_optional_release NULL
#define impl_afw_value_get_reference impl_afw_value_permanent_get_reference
#define AFW_VALUE_INF_ONLY 1
#include "afw_value_impl_declares.h"
#undef AFW_IMPLEMENTATION_ID
#undef AFW_IMPLEMENTATION_INF_LABEL
#undef impl_afw_value_optional_release
#undef impl_afw_value_get_reference
#undef AFW_VALUE_INF_ONLY

static const afw_value_string_t
impl_data_type_date_id_value = {
    &afw_value_evaluated_string_inf,
    AFW_UTF8_LITERAL("date")
};

AFW_DEFINE_CONST_DATA(afw_value_t *)
afw_data_type_date_id_value =
{
    (const afw_value_t *)&impl_data_type_date_id_value
};

static const afw_utf8_t
impl_data_type_path_date =
    AFW_UTF8_LITERAL("/afw/_AdaptiveDataType_/date");

/* Data type date object. */
static const afw_runtime_object_indirect_t
impl_data_type_object_date = {
    {
        &afw_runtime_inf__AdaptiveDataType_,
        NULL,
        {
            NULL,
            NULL,
            &afw_s_date,
            &afw_s__AdaptiveDataType_,
            &impl_data_type_path_date
        }
    },
    (void *)&afw_data_type_date_direct
};

/* Value for empty list of date. */
AFW_DEFINE_INTERNAL_CONST_DATA(afw_list_wrapper_for_array_self_t)
impl_empty_list_of_date;

/* Value for empty list of date. */
AFW_DEFINE_INTERNAL_CONST_DATA(afw_value_list_t)
impl_value_empty_list_of_date;

/* Data type date instance. */
AFW_DEFINE_INTERNAL_CONST_DATA(afw_data_type_t)
afw_data_type_date_direct = {
    &afw_data_type_date_inf,
    (const afw_object_t *)&impl_data_type_object_date,
    AFW_UTF8_LITERAL("date"),
    AFW_UTF8_LITERAL("A date"),
    AFW_UTF8_LITERAL("Data type date holds a calendar date in format CCYY-MM-DD."),
    AFW_UTF8_LITERAL(""),
    afw_data_type_number_date,
    AFW_UTF8_LITERAL("1.3.6.1.4.1.1466.115.121.1.24"),
    AFW_UTF8_LITERAL("string"),
    AFW_UTF8_LITERAL("date"),
    AFW_UTF8_LITERAL("afw_date_t"),
    sizeof(afw_date_t),
    (const afw_list_t *)&impl_empty_list_of_date,
    (const afw_value_t *)&impl_value_empty_list_of_date,
    &afw_value_evaluated_date_inf,
    afw_compile_type_error,
    false,
    false,
    false,
    true,
    true
};

/* Value for empty list of date. */
AFW_DEFINE_INTERNAL_CONST_DATA(afw_list_wrapper_for_array_self_t)
impl_empty_list_of_date = {
    &afw_list_wrapper_for_array_inf,
    &afw_data_type_date_direct,
    0
};

/* Value for empty list of date. */
AFW_DEFINE_INTERNAL_CONST_DATA(afw_value_list_t)
impl_value_empty_list_of_date = {
    &afw_value_permanent_list_inf,
    (const afw_list_t *)&impl_empty_list_of_date
};

/* Data type struct for date. */
AFW_DEFINE_CONST_DATA(afw_data_type_t *)
afw_data_type_date =
    &afw_data_type_date_direct;

/* Set property function for data type date values. */
AFW_DEFINE(void)
afw_object_set_property_as_date(
    const afw_object_t *object,
    const afw_utf8_t *property_name,
    const afw_date_t * internal,
    afw_xctx_t *xctx)
{
    const afw_value_t *v;

    if (!object->p) {
        AFW_THROW_ERROR_Z(general,
            "Object must have a pool",
            xctx);
    }

    v = afw_value_create_date(internal, object->p, xctx);
    afw_object_set_property(object, property_name, v, xctx);
}

/* Typesafe cast of data type date. */
AFW_DEFINE(const afw_date_t *)
afw_value_as_date(const afw_value_t *value, afw_xctx_t *xctx)
{
    value = afw_value_evaluate(value, xctx->p, xctx);
    if (!AFW_VALUE_IS_DATA_TYPE(value, date))
    {
        const afw_utf8_t *data_type_id;

        if (!value) {
            AFW_THROW_ERROR_Z(general,
                "Typesafe error: expecting 'date' but "
                "encountered '<undefined>'",
                xctx);
        }

        data_type_id = afw_value_get_quick_data_type_id(value);
        AFW_THROW_ERROR_FZ(general, xctx,
            "Typesafe error: expecting 'date' but "
            "encountered " AFW_UTF8_FMT_Q ,
            AFW_UTF8_FMT_OPTIONAL_UNDEFINED_ARG(data_type_id));
    }
    return &(((const afw_value_date_t *)value)->internal);
}

/* Allocate function for unmanaged data type date values. */
AFW_DEFINE(afw_value_date_t *)
afw_value_allocate_date(const afw_pool_t *p, afw_xctx_t *xctx)
{
    afw_value_date_t *result;

    result = afw_pool_calloc(p, sizeof(afw_value_date_t),
        xctx);
    result->inf = &afw_value_evaluated_date_inf;
    return result;
}

/* Create function for unmanaged data type date value. */
AFW_DEFINE(const afw_value_t *)
afw_value_create_date(const afw_date_t * internal,
    const afw_pool_t *p, afw_xctx_t *xctx)
{
    afw_value_date_t *v;

    v = afw_value_allocate_date(p, xctx);
    if (internal) {
        memcpy(&v->internal, internal, sizeof(afw_date_t));
    }
    return (const afw_value_t *)v;
}

/* Allocate function for managed data type date values. */
AFW_DEFINE(afw_value_date_t *)
afw_value_allocate_managed_date(const afw_pool_t *p, afw_xctx_t *xctx)
{
    afw_value_date_t *result;

    result = afw_pool_calloc(p, sizeof(afw_value_date_t),
        xctx);
    result->inf = &afw_value_managed_date_inf;
    return result;
}

/* Create function for data type date value. */
AFW_DEFINE(const afw_value_t *)
afw_value_create_managed_date(const afw_date_t * internal,
    const afw_pool_t *p, afw_xctx_t *xctx)
{
    afw_value_date_t *v;

    v = afw_value_allocate_managed_date(p, xctx);
    if (internal) {
        memcpy(&v->internal, internal, sizeof(afw_date_t));
    }
    return (const afw_value_t *)v;
}

/* Allocate function for permanent data type date values. */
AFW_DEFINE(afw_value_date_t *)
afw_value_allocate_permanent_date(const afw_pool_t *p, afw_xctx_t *xctx)
{
    afw_value_date_t *result;

    result = afw_pool_calloc(p, sizeof(afw_value_date_t),
        xctx);
    result->inf = &afw_value_permanent_date_inf;
    return result;
}

/* Create function for data type date value. */
AFW_DEFINE(const afw_value_t *)
afw_value_create_permanent_date(const afw_date_t * internal,
    const afw_pool_t *p, afw_xctx_t *xctx)
{
    afw_value_date_t *v;

    v = afw_value_allocate_permanent_date(p, xctx);
    if (internal) {
        memcpy(&v->internal, internal, sizeof(afw_date_t));
    }
    return (const afw_value_t *)v;
}

/* Convert data type date string to afw_date_t *. */
AFW_DEFINE(void)
afw_data_type_date_to_internal(afw_date_t *to_internal,
    const afw_utf8_t *from_utf8, const afw_pool_t *p, afw_xctx_t *xctx)
{
    afw_data_type_utf8_to_internal(
        &afw_data_type_date_direct,
        (void *)to_internal, from_utf8, p, xctx);
}

/*  Convert data type date internal representation to utf-8. */
AFW_DEFINE(const afw_utf8_t *)
afw_data_type_date_to_utf8(const afw_date_t * internal,
    const afw_pool_t *p, afw_xctx_t *xctx)
{
    return afw_data_type_internal_to_utf8(
        &afw_data_type_date_direct,
        internal, p, xctx);
}

/* Get property function for data type date values. */
AFW_DEFINE(const afw_date_t *)
afw_object_get_property_as_date_source(
    const afw_object_t *object,
    const afw_utf8_t *property_name,
    const afw_utf8_z_t *source_z,
    const afw_pool_t *p,
    afw_xctx_t *xctx)
{
    const afw_value_t *value;

    value = afw_object_get_property(object, property_name, xctx);
    if (!value) return NULL;

    value = afw_value_evaluate(value, p, xctx);
    if (!AFW_VALUE_IS_DATA_TYPE(value, date))
    {
        const afw_utf8_t *data_type_id;

        data_type_id = afw_value_get_quick_data_type_id(value);
        afw_error_set_fz(afw_error_code_general, source_z, xctx,
            "Typesafe error: expecting 'date' but "
            "encountered " AFW_UTF8_FMT_Q,
            AFW_UTF8_FMT_OPTIONAL_UNDEFINED_ARG(data_type_id));
        longjmp(((xctx)->current_try->throw_jmp_buf), afw_error_code_general);
    }
    return &(((const afw_value_date_t *)value)->internal);
}

/* Get next property function for data type date values. */
AFW_DEFINE(const afw_date_t *)
afw_object_get_next_property_as_date_source(
    const afw_object_t *object,
    const afw_iterator_t * *iterator,
    const afw_utf8_t * *property_name,
    const afw_utf8_z_t *source_z,
    const afw_pool_t *p,
    afw_xctx_t *xctx)
{
    const afw_value_t *value;

    value = afw_object_get_next_property(object, iterator, property_name, xctx);
    if (!value) return NULL;

    value = afw_value_evaluate(value, p, xctx);
    if (!AFW_VALUE_IS_DATA_TYPE(value, date))
    {
        const afw_utf8_t *data_type_id;

        data_type_id = afw_value_get_quick_data_type_id(value);
        afw_error_set_fz(afw_error_code_general, source_z, xctx,
            "Typesafe error: expecting 'date' but "
            "encountered " AFW_UTF8_FMT_Q,
            AFW_UTF8_FMT_OPTIONAL_UNDEFINED_ARG(data_type_id));
        longjmp(((xctx)->current_try->throw_jmp_buf), afw_error_code_general);
    }
    return &(((const afw_value_date_t *)value)->internal);
}

/* Implementation of method optional_release for managed value. */
AFW_DECLARE_STATIC(void)
impl_afw_value_managed_optional_release(
    const afw_value_t *instance,
    afw_xctx_t *xctx)
{
    /** @todo this needs to release reference of value or free it. */
}

/* Implementation of method get_reference for  unmanaged value. */
AFW_DECLARE_STATIC(const afw_value_t *)
impl_afw_value_unmanaged_get_reference(
    const afw_value_t *instance,
    const afw_pool_t *p,
    afw_xctx_t *xctx)
{
    /** @todo this needs to addref or return a copy. */
    return instance;
}


/* Implementation of method get_reference for managed value. */
AFW_DECLARE_STATIC(const afw_value_t *)
impl_afw_value_managed_get_reference(
    const afw_value_t *instance,
    const afw_pool_t *p,
    afw_xctx_t *xctx)
{
    /* For unmanaged value, just return the instance passed. */
    return instance;
}


/* Implementation of method get_reference for permanent value. */
AFW_DECLARE_STATIC(const afw_value_t *)
impl_afw_value_permanent_get_reference(
    const afw_value_t *instance,
    const afw_pool_t *p,
    afw_xctx_t *xctx)
{
    /* For unmanaged value, just return the instance passed. */
    return instance;
}

/*
 * Implementation of method get_data_type for interface afw_value.
 */
const afw_data_type_t *
impl_afw_value_get_data_type(
    const afw_value_t *instance,
    afw_xctx_t *xctx)
{
    return afw_data_type_date;
}

/*
 * Implementation of method compiler_listing for interface afw_value.
 */
void
impl_afw_value_produce_compiler_listing(
    const afw_value_t *instance,
    const afw_writer_t *writer,
    afw_xctx_t *xctx)
{
    afw_data_type_value_compiler_listing(
        afw_data_type_date,
        writer, instance, xctx);
}

/*
 * Implementation of method decompile for interface afw_value.
 */
void
impl_afw_value_decompile(
    const afw_value_t *instance,
    const afw_writer_t *writer,
    afw_xctx_t *xctx)
{
    afw_data_type_write_as_expression(
        afw_data_type_date,
        writer,
        (const void *)&(((const afw_value_evaluated_t *)instance)->internal),
        xctx);
}

/*
 * Implementation of method get_info for interface afw_value.
 */
void
impl_afw_value_get_info(
    const afw_value_t *instance,
    afw_value_info_t *info,
    const afw_pool_t *p,
    afw_xctx_t *xctx)
{
    afw_memory_clear(info);
    info->value_inf_id = &instance->inf->rti.implementation_id;
    info->optimized_value = instance;
    info->optimized_value_data_type = afw_data_type_date;
}


/* Get next value from list of date. */
AFW_DEFINE(const afw_date_t *)
afw_list_of_date_get_next_source(
    const afw_list_t *instance,
    const afw_iterator_t * *iterator,
    const afw_utf8_z_t *source_z,
    afw_xctx_t *xctx)
{
    const void *internal;
    const afw_data_type_t *data_type;

    afw_list_get_next_internal(instance, iterator, &data_type, &internal, xctx);
    if (!internal) {
        return NULL;
    }
    if (data_type != afw_data_type_date) {
        const afw_utf8_t *data_type_id;

        data_type_id = &data_type->data_type_id;
        afw_error_set_fz(afw_error_code_general, source_z, xctx,
            "Typesafe error: expecting 'date' but "
            "encountered " AFW_UTF8_FMT_Q,
            AFW_UTF8_FMT_OPTIONAL_UNDEFINED_ARG(data_type_id));
        longjmp(((xctx)->current_try->throw_jmp_buf), afw_error_code_general);
    }
    return (const afw_date_t *)internal;
}

/* Add value from list of date */
AFW_DEFINE(void)
afw_list_of_date_add(
    const afw_list_t *instance,
    const afw_date_t *value,
    afw_xctx_t *xctx)
{
    const afw_list_setter_t *setter;

    setter = afw_list_get_setter(instance, xctx);
    if (!setter) {
        AFW_LIST_ERROR_OBJECT_IMMUTABLE;
    }

    afw_list_setter_add_internal(setter, 
        afw_data_type_date,
        (const void *)value, xctx);
}

/* Remove value from list of date */
AFW_DEFINE(void)
afw_list_of_date_remove(
    const afw_list_t *instance,
    const afw_date_t *value,
    afw_xctx_t *xctx)
{
    const afw_list_setter_t *setter;

    setter = afw_list_get_setter(instance, xctx);
    if (!setter) {
        AFW_LIST_ERROR_OBJECT_IMMUTABLE;
    }

    afw_list_setter_remove_internal(setter, 
        afw_data_type_date,
        (const void *)value, xctx);
}
