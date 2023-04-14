// See the 'COPYING' file in the project root for licensing information.
/*
 * Adaptive Framework Declare Helpers for afw_command_
 *
 * Copyright (c) 2010-2023 Clemson University
 *
 */

/*  ----------------------------- N O T E -------------------------------------
 *
 * This file is generated by "afwdev generate afw_command".
 *
 * Do not change this file directly or the changes will be lost the next time
 * this file is regenerated.
 *
 * -------------------------------------------------------------------------*/


#ifndef __AFW_COMMAND_DECLARE_HELPERS_H__
#define __AFW_COMMAND_DECLARE_HELPERS_H__


/**
 * @file afw_command_declare_helpers.h
 * @brief Adaptive Framework declare helpers for afw_command_
 */


#include <apr_general.h>


/**
 * AFW_COMMAND_BEGIN_DECLARES goes before declares and 
 * AFW_COMMAND_END_DECLARES at end in afw_command*.h files.
 */
#ifdef __cplusplus
#define AFW_COMMAND_BEGIN_DECLARES extern "C" {
#define AFW_COMMAND_END_DECLARES }
#else
#define AFW_COMMAND_BEGIN_DECLARES
#define AFW_COMMAND_END_DECLARES
#endif


/* #defines for declspec and calling convention. */
#define AFW_COMMAND_DECLSPEC_DECLARE extern
#define AFW_COMMAND_DECLSPEC_DEFINE
#define AFW_COMMAND_CALLING_CONVENTION
#define AFW_COMMAND_CALLING_CONVENTION_ELLIPSIS


/**
 * @brief Declare an internal variable for /src/afw_command/ source*.h files.
 * @param type of variable
 *
 * Use this macro to supply the storage specifier of a variable in a .h file
 * that is only intended to be accessed internally to a linked object.  There
 * must be a corresponding AFW_COMMAND_DEFINE_INTERNAL_CONST_DATA()
 * in a /src/afw_command/ source*.h files.
 * 
 * Any data declared this way is not considered part of the external API.
 */
#define AFW_COMMAND_DECLARE_INTERNAL_CONST_DATA(type) extern const type


/**
 * @brief Define an internal variable for /src/afw_command/ source*.c files.
 * @param type of variable
 *
 * Use this macro to supply the storage specifier of a variable in a .c files
 * that is only intended to be accessed internally to a linked object.  There
 * must be a corresponding AFW_COMMAND_DECLARE_INTERNAL_CONST_DATA()
 * in a /src/afw_command/ source*.h files.
 * 
 * Any data defined this way is not considered part of the external API. 
 */
#define AFW_COMMAND_DEFINE_INTERNAL_CONST_DATA(type) const type


/**
 * @brief Declare an internal function for /src/afw_command/ source*.h files.
 * @param type of return value.
 *
 * Use this macro to supply the storage specifier of a function in a .h file
 * that is only intended to be accessed internally to a linked object.  There
 * must be a corresponding AFW_COMMAND_DEFINE_INTERNAL()
 * in a /src/afw_command/ source*.c files.
 * 
 * Any function declared this way is not considered part of the external API.
 */
#define AFW_COMMAND_DECLARE_INTERNAL(type) extern type


/**
 * @brief Define an internal function for /src/afw_command/ source*.c files.
 * @param type of return value.
 *
 * Use this macro to supply the storage specifier of a function in a .c files
 * that is only intended to be accessed internally to a linked object.  There
 * must be a corresponding AFW_COMMAND_DECLARE_INTERNAL()
 * in a /src/afw_command/ source*.h files.
 * 
 * Any function defined this way is not considered part of the external API. 
 */
#define AFW_COMMAND_DEFINE_INTERNAL(type) type


/**
 * @brief Declare a public afw_command function.
 * @param type of return value.
 *
 * There must be a corresponding AFW_COMMAND_DEFINE()
 * in a /src/afw_command/ source*.c files.
 *
 * Example:
 *
 * const afw_utf8_t * afw_command_some_function(int a);
 *
 * is decorated this way:
 *
 * AFW_COMMAND_DECLARE(const afw_utf8_t *)
 * afw_command_some_function(int a);
 */
#define AFW_COMMAND_DECLARE(type) \
AFW_COMMAND_DECLSPEC_DECLARE \
type \
AFW_COMMAND_CALLING_CONVENTION


/**
 * @brief Declare a public afw_command function with variable arguments.
 * @param type of return value.
 *
 * There must be a corresponding AFW_COMMAND_DEFINE_ELLIPSIS()
 * in a /src/afw_command/ source*.c files.
 *
 * Example:
 *
 * const afw_utf8_t *
 * afw_command_some_function(int a, ...);
 *
 * is decorated this way:
 *
 * AFW_COMMAND_DECLARE_ELLIPSIS(const afw_utf8_t *)
 * afw_command_some_function(int a, ...);
 */
#define AFW_COMMAND_DECLARE_ELLIPSIS(type) \
AFW_COMMAND_DECLSPEC_DECLARE \
type \
AFW_COMMAND_CALLING_CONVENTION_ELLIPSIS


/**
 * @brief Declare a public afw_command variable.
 * @param type of variable
 *
 * There must be a corresponding AFW_COMMAND_DEFINE_CONST_DATA
 * in a /src/afw_command/ source*.c files.
 *
 * Example:
 *
 * extern const afw_utf8_t *
 * afw_command_a_string;
 *
 * is decorated this way:
 *
 * AFW_COMMAND_DECLARE_CONST_DATA(afw_utf8_t *)
 * afw_command_a_string;
 */
#define AFW_COMMAND_DECLARE_CONST_DATA(type) \
AFW_COMMAND_DECLSPEC_DECLARE \
const type


/**
 * @brief Define a public afw_command function.
 * @param type of return value.
 *
 * There must be a corresponding AFW_COMMAND_DECLARE()
 * in a /src/afw_command/ source*.h files.
 *
 * Example:
 *
 * const afw_utf8_t *
 * afw_command_some_function(int a) {...}
 *
 * is decorated this way:
 *
 * AFW_COMMAND_DEFINE(const afw_utf8_t *)
 * afw_command_some_function(int a) {...}
 */
#define AFW_COMMAND_DEFINE(type) \
AFW_COMMAND_DECLSPEC_DEFINE \
type \
AFW_COMMAND_CALLING_CONVENTION


/**
 * @brief Define a public afw_command function with variable arguments.
 * @param type of return value.
 *
 * There must be a corresponding AFW_COMMAND_DECLARE_ELLIPSIS()
 * in a /src/afw_command/ source*.h files.
 *
 * Example:
 *
 * const afw_utf8_t * 
 * afw_command_some_function(int a, ...) {...}
 *
 * is decorated this way:
 *
 * AFW_COMMAND_DEFINE_ELLIPSIS(const afw_utf8_t *) 
 * afw_command_some_function(int a, ...) {...}
 */
#define AFW_COMMAND_DEFINE_ELLIPSIS(type) \
AFW_COMMAND_DECLSPEC_DEFINE \
type \
AFW_COMMAND_CALLING_CONVENTION_ELLIPSIS


/**
 * @brief Define a public afw_command variable.
 * @param type of variable
 *
 * There must be a corresponding AFW_COMMAND_DECLARE_CONST_DATA
 * in a /src/afw_command/ source*.h files.
 *
 * Example:
 *
 * const afw_utf8_t *
 * afw_command_a_string;
 *
 * is decorated this way:
 *
 * AFW_COMMAND_DEFINE_CONST_DATA(afw_utf8_t *)
 * afw_command_a_string;
 */
#define AFW_COMMAND_DEFINE_CONST_DATA(type) \
AFW_COMMAND_DECLSPEC_DEFINE \
const type


#define AFW_COMMAND_CALLBACK \
AFW_COMMAND_CALLING_CONVENTION


#define AFW_COMMAND_CALLBACK_ELLIPSIS \
AFW_COMMAND_CALLING_CONVENTION_ELLIPSIS


#ifdef WIN32
#define AFW_COMMAND_DEFINE_DSO(type) __declspec(dllexport) type
#else
#define AFW_COMMAND_DEFINE_DSO(type) type
#endif


#ifdef AFW_COMMAND_DISABLE_INLINE
#define AFW_COMMAND_HAS_INLINE 0
#define AFW_COMMAND_INLINE
#else
#define AFW_COMMAND_HAS_INLINE APR_HAS_INLINE
#define AFW_COMMAND_INLINE APR_INLINE
#endif


/** AFW Inline. */
#define AFW_COMMAND_STATIC_INLINE static AFW_COMMAND_INLINE

#define AFW_COMMAND_DECLARE_STATIC(type) static type

#if defined(DOXYGEN)
#define AFW_COMMAND_DEFINE_STATIC_INLINE(type) type
#else
#define AFW_COMMAND_DEFINE_STATIC_INLINE(type) AFW_COMMAND_STATIC_INLINE type
#endif



#endif /* __AFW_COMMAND_DECLARE_HELPERS_H__ */
