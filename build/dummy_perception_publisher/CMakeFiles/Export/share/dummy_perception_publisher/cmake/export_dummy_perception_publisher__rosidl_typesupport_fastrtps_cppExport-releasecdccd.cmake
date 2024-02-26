#----------------------------------------------------------------
# Generated CMake target import file for configuration "Releasecdccd".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dummy_perception_publisher::dummy_perception_publisher__rosidl_typesupport_fastrtps_cpp" for configuration "Releasecdccd"
set_property(TARGET dummy_perception_publisher::dummy_perception_publisher__rosidl_typesupport_fastrtps_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASECDCCD)
set_target_properties(dummy_perception_publisher::dummy_perception_publisher__rosidl_typesupport_fastrtps_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASECDCCD "${_IMPORT_PREFIX}/lib/libdummy_perception_publisher__rosidl_typesupport_fastrtps_cpp.so"
  IMPORTED_SONAME_RELEASECDCCD "libdummy_perception_publisher__rosidl_typesupport_fastrtps_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS dummy_perception_publisher::dummy_perception_publisher__rosidl_typesupport_fastrtps_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_dummy_perception_publisher::dummy_perception_publisher__rosidl_typesupport_fastrtps_cpp "${_IMPORT_PREFIX}/lib/libdummy_perception_publisher__rosidl_typesupport_fastrtps_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
