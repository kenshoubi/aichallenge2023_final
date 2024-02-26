// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice
#include "aichallenge_scoring_msgs/msg/detail/score__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aichallenge_scoring_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aichallenge_scoring_msgs/msg/detail/score__struct.h"
#include "aichallenge_scoring_msgs/msg/detail/score__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Score__ros_msg_type = aichallenge_scoring_msgs__msg__Score;

static bool _Score__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Score__ros_msg_type * ros_message = static_cast<const _Score__ros_msg_type *>(untyped_ros_message);
  // Field name: distance_score
  {
    cdr << ros_message->distance_score;
  }

  // Field name: total_duration
  {
    cdr << ros_message->total_duration;
  }

  // Field name: task3_duration
  {
    cdr << ros_message->task3_duration;
  }

  // Field name: is_distance_score_maxed_out
  {
    cdr << (ros_message->is_distance_score_maxed_out ? true : false);
  }

  // Field name: is_outside_lane
  {
    cdr << (ros_message->is_outside_lane ? true : false);
  }

  // Field name: is_doing_task3
  {
    cdr << (ros_message->is_doing_task3 ? true : false);
  }

  // Field name: is_timeout
  {
    cdr << (ros_message->is_timeout ? true : false);
  }

  // Field name: is_stopped
  {
    cdr << (ros_message->is_stopped ? true : false);
  }

  // Field name: has_exceeded_speed_limit
  {
    cdr << (ros_message->has_exceeded_speed_limit ? true : false);
  }

  // Field name: has_finished_task1
  {
    cdr << (ros_message->has_finished_task1 ? true : false);
  }

  // Field name: has_finished_task2
  {
    cdr << (ros_message->has_finished_task2 ? true : false);
  }

  // Field name: has_finished_task3
  {
    cdr << (ros_message->has_finished_task3 ? true : false);
  }

  return true;
}

static bool _Score__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Score__ros_msg_type * ros_message = static_cast<_Score__ros_msg_type *>(untyped_ros_message);
  // Field name: distance_score
  {
    cdr >> ros_message->distance_score;
  }

  // Field name: total_duration
  {
    cdr >> ros_message->total_duration;
  }

  // Field name: task3_duration
  {
    cdr >> ros_message->task3_duration;
  }

  // Field name: is_distance_score_maxed_out
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_distance_score_maxed_out = tmp ? true : false;
  }

  // Field name: is_outside_lane
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_outside_lane = tmp ? true : false;
  }

  // Field name: is_doing_task3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_doing_task3 = tmp ? true : false;
  }

  // Field name: is_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_timeout = tmp ? true : false;
  }

  // Field name: is_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_stopped = tmp ? true : false;
  }

  // Field name: has_exceeded_speed_limit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_exceeded_speed_limit = tmp ? true : false;
  }

  // Field name: has_finished_task1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_finished_task1 = tmp ? true : false;
  }

  // Field name: has_finished_task2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_finished_task2 = tmp ? true : false;
  }

  // Field name: has_finished_task3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_finished_task3 = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aichallenge_scoring_msgs
size_t get_serialized_size_aichallenge_scoring_msgs__msg__Score(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Score__ros_msg_type * ros_message = static_cast<const _Score__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name distance_score
  {
    size_t item_size = sizeof(ros_message->distance_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_duration
  {
    size_t item_size = sizeof(ros_message->total_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task3_duration
  {
    size_t item_size = sizeof(ros_message->task3_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_distance_score_maxed_out
  {
    size_t item_size = sizeof(ros_message->is_distance_score_maxed_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_outside_lane
  {
    size_t item_size = sizeof(ros_message->is_outside_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_doing_task3
  {
    size_t item_size = sizeof(ros_message->is_doing_task3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_timeout
  {
    size_t item_size = sizeof(ros_message->is_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_stopped
  {
    size_t item_size = sizeof(ros_message->is_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_exceeded_speed_limit
  {
    size_t item_size = sizeof(ros_message->has_exceeded_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_finished_task1
  {
    size_t item_size = sizeof(ros_message->has_finished_task1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_finished_task2
  {
    size_t item_size = sizeof(ros_message->has_finished_task2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_finished_task3
  {
    size_t item_size = sizeof(ros_message->has_finished_task3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Score__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aichallenge_scoring_msgs__msg__Score(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aichallenge_scoring_msgs
size_t max_serialized_size_aichallenge_scoring_msgs__msg__Score(
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

  // member: distance_score
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: task3_duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_distance_score_maxed_out
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_outside_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_doing_task3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_stopped
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_exceeded_speed_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_finished_task1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_finished_task2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_finished_task3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Score__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aichallenge_scoring_msgs__msg__Score(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Score = {
  "aichallenge_scoring_msgs::msg",
  "Score",
  _Score__cdr_serialize,
  _Score__cdr_deserialize,
  _Score__get_serialized_size,
  _Score__max_serialized_size
};

static rosidl_message_type_support_t _Score__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Score,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aichallenge_scoring_msgs, msg, Score)() {
  return &_Score__type_support;
}

#if defined(__cplusplus)
}
#endif
