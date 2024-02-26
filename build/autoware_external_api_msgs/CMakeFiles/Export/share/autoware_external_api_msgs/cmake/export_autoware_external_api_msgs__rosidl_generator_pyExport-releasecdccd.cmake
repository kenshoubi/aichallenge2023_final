#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "autoware_external_api_msgs::autoware_external_api_msgs__rosidl_generator_py" for configuration "Releasecdccd"
set_property(TARGET autoware_external_api_msgs::autoware_external_api_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(autoware_external_api_msgs::autoware_external_api_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libautoware_external_api_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_RELEASECDCCD "libautoware_external_api_msgs__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS autoware_external_api_msgs::autoware_external_api_msgs__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_autoware_external_api_msgs::autoware_external_api_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libautoware_external_api_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
