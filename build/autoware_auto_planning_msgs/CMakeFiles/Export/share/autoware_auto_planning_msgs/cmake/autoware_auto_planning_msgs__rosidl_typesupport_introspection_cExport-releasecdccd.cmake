#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "autoware_auto_planning_msgs::autoware_auto_planning_msgs__rosidl_typesupport_introspection_c" for configuration "Releasecdccd"
set_property(TARGET autoware_auto_planning_msgs::autoware_auto_planning_msgs__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(autoware_auto_planning_msgs::autoware_auto_planning_msgs__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libautoware_auto_planning_msgs__rosidl_typesupport_introspection_c.so"
  IMPORTED_SONAME_RELEASECDCCD "libautoware_auto_planning_msgs__rosidl_typesupport_introspection_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS autoware_auto_planning_msgs::autoware_auto_planning_msgs__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_autoware_auto_planning_msgs::autoware_auto_planning_msgs__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/libautoware_auto_planning_msgs__rosidl_typesupport_introspection_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
