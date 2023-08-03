# See the 'COPYING' file in the project root for licensing information.
#
# Produce the *git_info.h file
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
# This sets various cmake variables and adds a custom target that will run every
# build to produce a *git_info.h file with current git version information.
#

# Set git_info name.
set(AFW_PACKAGE_GIT_INFO_NAME ${afw_package_afwPackageLabel}_git_info)

# Set git_info header name.
set(AFW_PACKAGE_GIT_INFO_HEADER_NAME ${AFW_PACKAGE_GIT_INFO_NAME}.h)

# Set AFW_PACKAGE_GIT_INFO_SCRIPT_PATH with the path to the shell script to
# generate the *git_info.h header. If running on WIN32, the bash command
# is required to run this script.
set(AFW_PACKAGE_GIT_INFO_SCRIPT_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${AFW_PACKAGE_GIT_INFO_NAME}.sh)
if (WIN32)
    set(AFW_PACKAGE_GIT_INFO_SCRIPT_PATH
        "bash ${AFW_PACKAGE_GIT_INFO_SCRIPT_PATH}")
endif()

# Add a custom target to generate *_git_info.h every build.
add_custom_target(
    ${AFW_PACKAGE_GIT_INFO_NAME} ALL
    COMMAND ${AFW_PACKAGE_GIT_INFO_SCRIPT_PATH}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/generated
    COMMENT "Generating git info header file"
)

add_library(${PROJECT_NAME} INTERFACE)
add_dependencies(${PROJECT_NAME} ${AFW_PACKAGE_GIT_INFO_NAME})
target_include_directories(${PROJECT_NAME} INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/generated ${CMAKE_BINARY_DIR}>
    $<INSTALL_INTERFACE:${AFW_PACKAGE_INSTALL_INCLUDEDIR}>
)

install(FILES "generated/${AFW_PACKAGE_GIT_INFO_HEADER_NAME}"
    DESTINATION ${AFW_PACKAGE_INSTALL_INCLUDEDIR}
)

