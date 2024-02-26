# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_aichallenge_scoring_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED aichallenge_scoring_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(aichallenge_scoring_FOUND FALSE)
  elseif(NOT aichallenge_scoring_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(aichallenge_scoring_FOUND FALSE)
  endif()
  return()
endif()
set(_aichallenge_scoring_CONFIG_INCLUDED TRUE)

# output package information
if(NOT aichallenge_scoring_FIND_QUIETLY)
  message(STATUS "Found aichallenge_scoring: 0.0.1 (${aichallenge_scoring_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'aichallenge_scoring' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${aichallenge_scoring_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(aichallenge_scoring_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${aichallenge_scoring_DIR}/${_extra}")
endforeach()
