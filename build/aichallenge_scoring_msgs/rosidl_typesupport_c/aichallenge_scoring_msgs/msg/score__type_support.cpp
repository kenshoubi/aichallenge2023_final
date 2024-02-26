// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "aichallenge_scoring_msgs/msg/detail/score__struct.h"
#include "aichallenge_scoring_msgs/msg/detail/score__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace aichallenge_scoring_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Score_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Score_type_support_ids_t;

static const _Score_type_support_ids_t _Score_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Score_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Score_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Score_type_support_symbol_names_t _Score_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aichallenge_scoring_msgs, msg, Score)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aichallenge_scoring_msgs, msg, Score)),
  }
};

typedef struct _Score_type_support_data_t
{
  void * data[2];
} _Score_type_support_data_t;

static _Score_type_support_data_t _Score_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Score_message_typesupport_map = {
  2,
  "aichallenge_scoring_msgs",
  &_Score_message_typesupport_ids.typesupport_identifier[0],
  &_Score_message_typesupport_symbol_names.symbol_name[0],
  &_Score_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Score_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Score_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace aichallenge_scoring_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aichallenge_scoring_msgs, msg, Score)() {
  return &::aichallenge_scoring_msgs::msg::rosidl_typesupport_c::Score_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
