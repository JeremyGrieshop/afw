# See the 'COPYING' file in the project root for licensing information.
#
# File list variables for subdir afw_server_fcgi
#
#----------------------------- N O T E -------------------------------------
#
# This file is generated by "afwdev generate".
#
# Do not change this file directly or the changes will be lost the next time
# this file is regenerated.
#
#----------------------------------------------------------------------------
#
# This files sets 3 list variables based on files and directories in srcdir
# afw_server_fcgi that are needed a build time:
#
#  AFWDEV_GENERATED_PUBLIC_HEADERS_LIST - All of the public header files.
#  AFWDEV_GENERATED_INCLUDE_DIRECTORIES_LIST - All of the build time include directories.
#  AFWDEV_GENERATED_SOURCE_LIST - All of the c source files to compile.
#
# After including this file, use cmake commands like list(FILTER ...) to modify
# the lists as needed.
#

# Header files that are installed for public use.
set(AFWDEV_GENERATED_PUBLIC_HEADERS_LIST 
    afw_server_fcgi_internal.h
    generated/afw_server_fcgi_const_objects.h
    generated/afw_server_fcgi_declare_helpers.h
    generated/afw_server_fcgi_generated.h
    generated/afw_server_fcgi_strings.h
    generated/afw_server_fcgi_version_info.h
)

# Full path of directories searched for headers at build time.
set(AFWDEV_GENERATED_INCLUDE_DIRECTORIES_LIST 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/generated
)

# Source files to compile.
set(AFWDEV_GENERATED_SOURCE_LIST 
    afw_server_fcgi.c
    afw_server_fcgi_main.c
    afw_server_fcgi_properties_object.c
    afw_server_fcgi_request.c
    generated/afw_server_fcgi_const_objects.c
    generated/afw_server_fcgi_generated.c
    generated/afw_server_fcgi_strings.c
)
