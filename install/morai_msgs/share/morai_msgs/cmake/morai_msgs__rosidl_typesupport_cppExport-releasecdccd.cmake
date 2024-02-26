#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "morai_msgs::morai_msgs__rosidl_typesupport_cpp" for configuration "Releasecdccd"
set_property(TARGET morai_msgs::morai_msgs__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(morai_msgs::morai_msgs__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASECDCCD "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libmorai_msgs__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_RELEASECDCCD "libmorai_msgs__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS morai_msgs::morai_msgs__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_morai_msgs::morai_msgs__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libmorai_msgs__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
