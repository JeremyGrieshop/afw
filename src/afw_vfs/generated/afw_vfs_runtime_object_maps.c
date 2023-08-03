// See the 'COPYING' file in the project root for licensing information.
/*
 * Adaptive Framework Runtime Object Mapping
 *
 * Copyright (c) 2010-2023 Clemson University
 *
 */

/*  ----------------------------- N O T E -------------------------------------
 *
 * This file is generated by "afwdev generate afw_vfs".
 *
 * Do not change this file directly or the changes will be lost the next time
 * this file is regenerated.
 *
 * -------------------------------------------------------------------------*/



/**
 * @file afw_vfs_runtime_object_maps.c
 * @brief Adaptive Framework runtime object mapping.
 */

#include "afw.h"
#include "afw_vfs_generated.h"
/*
 * generate/additional_includes/runtime_object_maps.h is added to generated
 * *runtime_object_maps.c.
 *
 * #include "../my_header.h"
 */


/* --------------------------------------------------------------------------- */



/* Runtime object map properties for _AdaptiveAdaptorTypeSpecific_vfs_retrieve_objects objects. */

static const afw_runtime_object_type_meta_t
impl_runtime_meta__AdaptiveAdaptorTypeSpecific_vfs_retrieve_objects = {
    &afw_vfs_s__AdaptiveAdaptorTypeSpecific_vfs_retrieve_objects,
    NULL,
    offsetof(afw_runtime_const_object_instance_t, properties),
    false,
};

AFW_RUNTIME_OBJECT_RTI( 
    impl_runtime_rti__AdaptiveAdaptorTypeSpecific_vfs_retrieve_objects,
    impl_runtime_meta__AdaptiveAdaptorTypeSpecific_vfs_retrieve_objects);


/* Runtime object map properties for _AdaptiveConf_adaptor_vfs objects. */

static const afw_runtime_object_type_meta_t
impl_runtime_meta__AdaptiveConf_adaptor_vfs = {
    &afw_vfs_s__AdaptiveConf_adaptor_vfs,
    NULL,
    offsetof(afw_runtime_const_object_instance_t, properties),
    false,
};

AFW_RUNTIME_OBJECT_RTI( 
    impl_runtime_rti__AdaptiveConf_adaptor_vfs,
    impl_runtime_meta__AdaptiveConf_adaptor_vfs);


/* Runtime object map properties for _AdaptiveFile_vfs objects. */

static const afw_runtime_object_type_meta_t
impl_runtime_meta__AdaptiveFile_vfs = {
    &afw_vfs_s__AdaptiveFile_vfs,
    NULL,
    offsetof(afw_runtime_const_object_instance_t, properties),
    false,
};

AFW_RUNTIME_OBJECT_RTI( 
    impl_runtime_rti__AdaptiveFile_vfs,
    impl_runtime_meta__AdaptiveFile_vfs);

/* NULL terminated list of rti pointers. */
static const afw_interface_implementation_rti_t * impl_rti[] = {
    &impl_runtime_rti__AdaptiveAdaptorTypeSpecific_vfs_retrieve_objects,
    &impl_runtime_rti__AdaptiveConf_adaptor_vfs,
    &impl_runtime_rti__AdaptiveFile_vfs,
    NULL
};

/* Register (afw_vfs_) runtime object maps. */
void afw_vfs_register_runtime_object_maps(
    afw_xctx_t *xctx)
{
    afw_runtime_resolve_and_register_object_map_infs(
        &impl_rti[0], 
        xctx);
}
