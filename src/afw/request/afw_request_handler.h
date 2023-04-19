// See the 'COPYING' file in the project root for licensing information.
/*
 * Adaptive Framework Request Handler
 *
 * Copyright (c) 2010-2023 Clemson University
 *
 */

#ifndef __AFW_REQUEST_HANDLER_H__
#define __AFW_REQUEST_HANDLER_H__


/**
 * @addtogroup afw_c_api_public
 *
 * @{
 */

/**
 * @addtogroup afw_request_handler Request handler
 *
 * Provide afw_request_handler interface common support.
 * @{
 */

/**
 * @file afw_request_handler.h
 * @brief Header file for Adaptive Framework Request Handler
 */

#include "afw_interface.h"
#include "afw_request.h"

AFW_BEGIN_DECLARES

/** Instance of afw_request_handler_factory for adaptor request handler. */
AFW_DECLARE_CONST_DATA(afw_request_handler_factory_t)
afw_request_handler_factory_adaptor;


/**
 * @brief Create an adaptor request handler.
 * @param properties configuration.
 * @param p to use for request handler resources.
 * @param xctx of caller.
 * @return New instance of request handler adaptor.
 */
AFW_DECLARE(const afw_request_handler_t *)
afw_request_handler_adaptor_create_cede_p(
    const afw_object_t *properties,
    const afw_pool_t *p, afw_xctx_t *xctx);

/**
 * @brief Create a request handler for director.
 * @param server
 * @param config or NULL of config string.
 * @param p to use for request handler resources.
 * @param xctx of caller.
 * @return request handler instance.
 *
 * This should only be done by the server implementation.
 */
AFW_DECLARE(const afw_request_handler_t *) 
afw_request_handler_director_create(
    const afw_server_t *server,
    const afw_utf8_z_t *config_file,
    const afw_pool_t *p,
    afw_xctx_t *xctx);

AFW_END_DECLARES

/** @} */
/** @} */

#endif /* __AFW_REQUEST_HANDLER_H__ */
