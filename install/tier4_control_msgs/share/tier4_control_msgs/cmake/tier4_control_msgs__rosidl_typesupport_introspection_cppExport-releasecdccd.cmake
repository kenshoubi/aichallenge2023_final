#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tier4_control_msgs::tier4_control_msgs__rosidl_typesupport_introspection_cpp" for configuration "Releasecdccd"
set_property(TARGET tier4_control_msgs::tier4_control_msgs__rosidl_typesupport_introspection_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(tier4_control_msgs::tier4_control_msgs__rosidl_typesupport_introspection_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libtier4_control_msgs__rosidl_typesupport_introspection_cpp.so"
  IMPORTED_SONAME_RELEASECDCCD "libtier4_control_msgs__rosidl_typesupport_introspection_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tier4_control_msgs::tier4_control_msgs__rosidl_typesupport_introspection_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_tier4_control_msgs::tier4_control_msgs__rosidl_typesupport_introspection_cpp "${_IMPORT_PREFIX}/lib/libtier4_control_msgs__rosidl_typesupport_introspection_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
