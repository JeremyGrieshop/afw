// See the 'COPYING' file in the project root for licensing information.
/*
 * Adaptive Framework Version (afw_ldap_) Header
 *
 * Copyright (c) 2010-2023 Clemson University
 *
 */

/*  ----------------------------- N O T E -------------------------------------
 *
 * This file is generated by "afwdev generate afw_ldap".
 *
 * Do not change this file directly or the changes will be lost the next time
 * this file is regenerated.
 *
 * -------------------------------------------------------------------------*/


#ifndef __AFW_LDAP_VERSION_INFO_H__
#define __AFW_LDAP_VERSION_INFO_H__


/**
 * @file afw_ldap_version_info.h
 * @brief Adaptive Framework Version (afw_ldap_) header.
 */


#include "afw_version_info.h"
#include "afw_git_info.h"

#define AFW_LDAP_VERSION_MAJOR 0
#define AFW_LDAP_VERSION_MINOR 9
#define AFW_LDAP_VERSION_PATCH 0
#define AFW_LDAP_VERSION_HEX ( \
    (AFW_VERSION_MAJOR << 16) | \
    (AFW_VERSION_MINOR <<  8) | \
    (AFW_VERSION_PATCH))
#define AFW_LDAP_VERSION_STRING "0.9.0"
#define AFW_LDAP_VERSION_WITH_GIT_INFO "0.9.0" \
    AFW_GIT_INFO_BRANCH_DESCRIBE
#define AFW_LDAP_VERSION_COMMAND_STRING "afw_ldap " \
    AFW_LDAP_VERSION_WITH_GIT_INFO


#endif /* __AFW_LDAP_VERSION_INFO_H__ */
