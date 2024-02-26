#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pointcloud_preprocessor::pointcloud_preprocessor_filter_base" for configuration "Releasecdccd"
set_property(TARGET pointcloud_preprocessor::pointcloud_preprocessor_filter_base APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(pointcloud_preprocessor::pointcloud_preprocessor_filter_base PROPERTIES
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libpointcloud_preprocessor_filter_base.so"
  IMPORTED_SONAME_RELEASECDCCD "libpointcloud_preprocessor_filter_base.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS pointcloud_preprocessor::pointcloud_preprocessor_filter_base )
list(APPEND _IMPORT_CHECK_FILES_FOR_pointcloud_preprocessor::pointcloud_preprocessor_filter_base "${_IMPORT_PREFIX}/lib/libpointcloud_preprocessor_filter_base.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
