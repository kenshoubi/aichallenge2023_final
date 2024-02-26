#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tier4_hmi_msgs::tier4_hmi_msgs__rosidl_typesupport_c" for configuration "Releasecdccd"
set_property(TARGET tier4_hmi_msgs::tier4_hmi_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(tier4_hmi_msgs::tier4_hmi_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASECDCCD "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libtier4_hmi_msgs__rosidl_typesupport_c.so"
  IMPORTED_SONAME_RELEASECDCCD "libtier4_hmi_msgs__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tier4_hmi_msgs::tier4_hmi_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_tier4_hmi_msgs::tier4_hmi_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libtier4_hmi_msgs__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
