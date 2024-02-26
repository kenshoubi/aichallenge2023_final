// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice
#include "aichallenge_scoring_msgs/msg/detail/score__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aichallenge_scoring_msgs/msg/detail/score__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: distance_score
  cdr << ros_message.distance_score;
  // Member: total_duration
  cdr << ros_message.total_duration;
  // Member: task3_duration
  cdr << ros_message.task3_duration;
  // Member: is_distance_score_maxed_out
  cdr << (ros_message.is_distance_score_maxed_out ? true : false);
  // Member: is_outside_lane
  cdr << (ros_message.is_outside_lane ? true : false);
  // Member: is_doing_task3
  cdr << (ros_message.is_doing_task3 ? true : false);
  // Member: is_timeout
  cdr << (ros_message.is_timeout ? true : false);
  // Member: is_stopped
  cdr << (ros_message.is_stopped ? true : false);
  // Member: has_exceeded_speed_limit
  cdr << (ros_message.has_exceeded_speed_limit ? true : false);
  // Member: has_finished_task1
  cdr << (ros_message.has_finished_task1 ? true : false);
  // Member: has_finished_task2
  cdr << (ros_message.has_finished_task2 ? true : false);
  // Member: has_finished_task3
  cdr << (ros_message.has_finished_task3 ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aichallenge_scoring_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aichallenge_scoring_msgs::msg::Score & ros_message)
{
  // Member: distance_score
  cdr >> ros_message.distance_score;

  // Member: total_duration
  cdr >> ros_message.total_duration;

  // Member: task3_duration
  cdr >> ros_message.task3_duration;

  // Member: is_distance_score_maxed_out
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_distance_score_maxed_out = tmp ? true : false;
  }

  // Member: is_outside_lane
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_outside_lane = tmp ? true : false;
  }

  // Member: is_doing_task3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_doing_task3 = tmp ? true : false;
  }

  // Member: is_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_timeout = tmp ? true : false;
  }

  // Member: is_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_stopped = tmp ? true : false;
  }

  // Member: has_exceeded_speed_limit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_exceeded_speed_limit = tmp ? true : false;
  }

  // Member: has_finished_task1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_finished_task1 = tmp ? true : false;
  }

  // Member: has_finished_task2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_finished_task2 = tmp ? true : false;
  }

  // Member: has_finished_task3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_finished_task3 = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aichallenge_scoring_msgs
get_serialized_size(
  const aichallenge_scoring_msgs::msg::Score & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: distance_score
  {
    size_t item_size = sizeof(ros_message.distance_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_duration
  {
    size_t item_size = sizeof(ros_message.total_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: task3_duration
  {
    size_t item_size = sizeof(ros_message.task3_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_distance_score_maxed_out
  {
    size_t item_size = sizeof(ros_message.is_distance_score_maxed_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_outside_lane
  {
    size_t item_size = sizeof(ros_message.is_outside_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_doing_task3
  {
    size_t item_size = sizeof(ros_message.is_doing_task3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_timeout
  {
    size_t item_size = sizeof(ros_message.is_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_stopped
  {
    size_t item_size = sizeof(ros_message.is_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_exceeded_speed_limit
  {
    size_t item_size = sizeof(ros_message.has_exceeded_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_finished_task1
  {
    size_t item_size = sizeof(ros_message.has_finished_task1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_finished_task2
  {
    size_t item_size = sizeof(ros_message.has_finished_task2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_finished_task3
  {
    size_t item_size = sizeof(ros_message.has_finished_task3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aichallenge_scoring_msgs
max_serialized_size_Score(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: distance_score
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: total_duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: task3_duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_distance_score_maxed_out
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_outside_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_doing_task3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_stopped
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_exceeded_speed_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_finished_task1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_finished_task2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_finished_task3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Score__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const aichallenge_scoring_msgs::msg::Score *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Score__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aichallenge_scoring_msgs::msg::Score *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Score__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aichallenge_scoring_msgs::msg::Score *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Score__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Score(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Score__callbacks = {
  "aichallenge_scoring_msgs::msg",
  "Score",
  _Score__cdr_serialize,
  _Score__cdr_deserialize,
  _Score__get_serialized_size,
  _Score__max_serialized_size
};

static rosidl_message_type_support_t _Score__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Score__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aichallenge_scoring_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_aichallenge_scoring_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<aichallenge_scoring_msgs::msg::Score>()
{
  return &aichallenge_scoring_msgs::msg::typesupport_fastrtps_cpp::_Score__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aichallenge_scoring_msgs, msg, Score)() {
  return &aichallenge_scoring_msgs::msg::typesupport_fastrtps_cpp::_Score__handle;
}

#ifdef __cplusplus
}
#endif
