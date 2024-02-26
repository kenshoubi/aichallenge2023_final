// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice

#ifndef AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "aichallenge_scoring_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "aichallenge_scoring_msgs/msg/detail/score__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace aichallenge_scoring_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aichallenge_scoring_msgs
cdr_serialize(
  const aichallenge_scoring_msgs::msg::Score & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aichallenge_scoring_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aichallenge_scoring_msgs::msg::Score & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aichallenge_scoring_msgs
get_serialized_size(
  const aichallenge_scoring_msgs::msg::Score & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aichallenge_scoring_msgs
max_serialized_size_Score(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aichallenge_scoring_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aichallenge_scoring_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aichallenge_scoring_msgs, msg, Score)();

#ifdef __cplusplus
}
#endif

#endif  // AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
