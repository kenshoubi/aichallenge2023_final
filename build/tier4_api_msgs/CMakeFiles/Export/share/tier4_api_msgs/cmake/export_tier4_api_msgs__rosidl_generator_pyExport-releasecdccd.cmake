#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tier4_api_msgs::tier4_api_msgs__rosidl_generator_py" for configuration "Releasecdccd"
set_property(TARGET tier4_api_msgs::tier4_api_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(tier4_api_msgs::tier4_api_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libtier4_api_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_RELEASECDCCD "libtier4_api_msgs__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tier4_api_msgs::tier4_api_msgs__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_tier4_api_msgs::tier4_api_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libtier4_api_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
