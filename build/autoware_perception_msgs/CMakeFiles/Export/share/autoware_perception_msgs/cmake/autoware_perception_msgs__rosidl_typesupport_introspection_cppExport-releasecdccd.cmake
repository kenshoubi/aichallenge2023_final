#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "autoware_perception_msgs::autoware_perception_msgs__rosidl_typesupport_introspection_cpp" for configuration "Releasecdccd"
set_property(TARGET autoware_perception_msgs::autoware_perception_msgs__rosidl_typesupport_introspection_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(autoware_perception_msgs::autoware_perception_msgs__rosidl_typesupport_introspection_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libautoware_perception_msgs__rosidl_typesupport_introspection_cpp.so"
  IMPORTED_SONAME_RELEASECDCCD "libautoware_perception_msgs__rosidl_typesupport_introspection_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS autoware_perception_msgs::autoware_perception_msgs__rosidl_typesupport_introspection_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_autoware_perception_msgs::autoware_perception_msgs__rosidl_typesupport_introspection_cpp "${_IMPORT_PREFIX}/lib/libautoware_perception_msgs__rosidl_typesupport_introspection_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
