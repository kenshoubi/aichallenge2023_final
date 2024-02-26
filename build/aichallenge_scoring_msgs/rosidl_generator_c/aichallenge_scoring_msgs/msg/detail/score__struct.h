// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice

#ifndef AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__STRUCT_H_
#define AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Score in the package aichallenge_scoring_msgs.
typedef struct aichallenge_scoring_msgs__msg__Score
{
  float distance_score;
  float total_duration;
  float task3_duration;
  bool is_distance_score_maxed_out;
  bool is_outside_lane;
  bool is_doing_task3;
  bool is_timeout;
  bool is_stopped;
  bool has_exceeded_speed_limit;
  bool has_finished_task1;
  bool has_finished_task2;
  bool has_finished_task3;
} aichallenge_scoring_msgs__msg__Score;

// Struct for a sequence of aichallenge_scoring_msgs__msg__Score.
typedef struct aichallenge_scoring_msgs__msg__Score__Sequence
{
  aichallenge_scoring_msgs__msg__Score * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aichallenge_scoring_msgs__msg__Score__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__STRUCT_H_
