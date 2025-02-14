// See the 'COPYING' file in the project root for licensing information.
/*
 * Interface afw_value Implementation for compiled_value
 *
 * Copyright (c) 2010-2023 Clemson University
 *
 */


/**
 * @file afw_value_compiled_value.c
 * @brief Implementation of afw_value interface for compiled_value
 */

#include "afw_internal.h"


#define impl_afw_value_optional_release NULL
#define impl_afw_value_get_reference NULL

#define impl_afw_value_optional_get_optimized NULL

#define impl_afw_value_get_evaluated_meta \
    afw_value_internal_get_evaluated_meta_default

#define impl_afw_value_get_evaluated_metas \
    afw_value_internal_get_evaluated_metas_default

/* Declares and rti/inf defines for interface afw_value */
#define AFW_IMPLEMENTATION_ID "compiled_value"
#define AFW_IMPLEMENTATION_INF_SPECIFIER AFW_DEFINE_CONST_DATA
#define AFW_IMPLEMENTATION_INF_LABEL afw_value_compiled_value_inf
#include "afw_value_impl_declares.h"


/*
 * Implementation of method optional_evaluate for interface afw_value.
 */
const afw_value_t *
impl_afw_value_optional_evaluate(
    const afw_value_t * instance,
    const afw_pool_t * p,
    afw_xctx_t *xctx)
{
    const afw_value_compiled_value_t *self =
        (const afw_value_compiled_value_t *)instance;

    /* Return the result of calling root value's evaluate(). */
    return afw_value_evaluate(self->root_value, p, xctx);
}

/*
 * Implementation of method get_data_type for interface afw_value.
 */
const afw_data_type_t *
impl_afw_value_get_data_type(
    const afw_value_t * instance,
    afw_xctx_t *xctx)
{
    const afw_value_compiled_value_t *self =
        (const afw_value_compiled_value_t *)instance;

    /* Return the result of calling root value's get_data_type(). */
    return afw_value_get_data_type(self->root_value, xctx);
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
    const afw_value_compiled_value_t *self =
        (const afw_value_compiled_value_t *)instance;
    const afw_utf8_t *reference_id;

    reference_id = afw_value_compiler_listing_for_child(
        instance, writer, xctx);

    afw_value_compiler_listing_begin_value(writer, instance,
        self->contextual, xctx);
    afw_writer_write_z(writer, " See ---CompiledValue ", xctx);
    afw_writer_write_utf8(writer, reference_id, xctx);
    afw_writer_write_eol(writer, xctx);
}

/*
 * Implementation of method decompile for interface afw_value.
 */
void
impl_afw_value_decompile(
    const afw_value_t * instance,
    const afw_writer_t * writer,
    afw_xctx_t *xctx)
{
    const afw_value_compiled_value_t *self =
        (const afw_value_compiled_value_t *)instance;

    afw_value_decompile(self->root_value, writer, xctx);
    /*FIXME Improve

    if (self->annotation) {
        afw_writer_write_z(writer, "annotate(", xctx);
        if (writer->tab) {
            afw_writer_write_eol(writer, xctx);
            afw_writer_increment_indent(writer, xctx);
        }
        annotation.inf = &afw_value_evaluated_object_inf;
        annotation.internal = self->annotation;
        afw_value_decompile((const afw_value_t *)&annotation, writer, xctx);
        afw_writer_write_z(writer, ",", xctx);
        if (writer->tab) {
            afw_writer_write_eol(writer, xctx);
        }
        afw_value_decompile(self->value, writer, xctx);
        if (writer->tab) {
            afw_writer_write_eol(writer, xctx);
            afw_writer_decrement_indent(writer, xctx);
        }
        afw_writer_write_z(writer, ")", xctx);
    }
    else {
        afw_value_decompile(self->value, writer, xctx);
    }
     */
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
}
