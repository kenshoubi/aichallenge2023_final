#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "autoware_sensing_msgs::autoware_sensing_msgs__rosidl_typesupport_fastrtps_cpp" for configuration "Releasecdccd"
set_property(TARGET autoware_sensing_msgs::autoware_sensing_msgs__rosidl_typesupport_fastrtps_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(autoware_sensing_msgs::autoware_sensing_msgs__rosidl_typesupport_fastrtps_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libautoware_sensing_msgs__rosidl_typesupport_fastrtps_cpp.so"
  IMPORTED_SONAME_RELEASECDCCD "libautoware_sensing_msgs__rosidl_typesupport_fastrtps_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS autoware_sensing_msgs::autoware_sensing_msgs__rosidl_typesupport_fastrtps_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_autoware_sensing_msgs::autoware_sensing_msgs__rosidl_typesupport_fastrtps_cpp "${_IMPORT_PREFIX}/lib/libautoware_sensing_msgs__rosidl_typesupport_fastrtps_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
