// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice

#ifndef AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__TRAITS_HPP_
#define AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aichallenge_scoring_msgs/msg/detail/score__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aichallenge_scoring_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Score & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_score
  {
    out << "distance_score: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_score, out);
    out << ", ";
  }

  // member: total_duration
  {
    out << "total_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.total_duration, out);
    out << ", ";
  }

  // member: task3_duration
  {
    out << "task3_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.task3_duration, out);
    out << ", ";
  }

  // member: is_distance_score_maxed_out
  {
    out << "is_distance_score_maxed_out: ";
    rosidl_generator_traits::value_to_yaml(msg.is_distance_score_maxed_out, out);
    out << ", ";
  }

  // member: is_outside_lane
  {
    out << "is_outside_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.is_outside_lane, out);
    out << ", ";
  }

  // member: is_doing_task3
  {
    out << "is_doing_task3: ";
    rosidl_generator_traits::value_to_yaml(msg.is_doing_task3, out);
    out << ", ";
  }

  // member: is_timeout
  {
    out << "is_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.is_timeout, out);
    out << ", ";
  }

  // member: is_stopped
  {
    out << "is_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stopped, out);
    out << ", ";
  }

  // member: has_exceeded_speed_limit
  {
    out << "has_exceeded_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.has_exceeded_speed_limit, out);
    out << ", ";
  }

  // member: has_finished_task1
  {
    out << "has_finished_task1: ";
    rosidl_generator_traits::value_to_yaml(msg.has_finished_task1, out);
    out << ", ";
  }

  // member: has_finished_task2
  {
    out << "has_finished_task2: ";
    rosidl_generator_traits::value_to_yaml(msg.has_finished_task2, out);
    out << ", ";
  }

  // member: has_finished_task3
  {
    out << "has_finished_task3: ";
    rosidl_generator_traits::value_to_yaml(msg.has_finished_task3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Score & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_score: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_score, out);
    out << "\n";
  }

  // member: total_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.total_duration, out);
    out << "\n";
  }

  // member: task3_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task3_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.task3_duration, out);
    out << "\n";
  }

  // member: is_distance_score_maxed_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_distance_score_maxed_out: ";
    rosidl_generator_traits::value_to_yaml(msg.is_distance_score_maxed_out, out);
    out << "\n";
  }

  // member: is_outside_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_outside_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.is_outside_lane, out);
    out << "\n";
  }

  // member: is_doing_task3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_doing_task3: ";
    rosidl_generator_traits::value_to_yaml(msg.is_doing_task3, out);
    out << "\n";
  }

  // member: is_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.is_timeout, out);
    out << "\n";
  }

  // member: is_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stopped, out);
    out << "\n";
  }

  // member: has_exceeded_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_exceeded_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.has_exceeded_speed_limit, out);
    out << "\n";
  }

  // member: has_finished_task1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_finished_task1: ";
    rosidl_generator_traits::value_to_yaml(msg.has_finished_task1, out);
    out << "\n";
  }

  // member: has_finished_task2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_finished_task2: ";
    rosidl_generator_traits::value_to_yaml(msg.has_finished_task2, out);
    out << "\n";
  }

  // member: has_finished_task3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_finished_task3: ";
    rosidl_generator_traits::value_to_yaml(msg.has_finished_task3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Score & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aichallenge_scoring_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aichallenge_scoring_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aichallenge_scoring_msgs::msg::Score & msg,
  std::ostream & out, size_t indentation = 0)
{
  aichallenge_scoring_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aichallenge_scoring_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aichallenge_scoring_msgs::msg::Score & msg)
{
  return aichallenge_scoring_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aichallenge_scoring_msgs::msg::Score>()
{
  return "aichallenge_scoring_msgs::msg::Score";
}

template<>
inline const char * name<aichallenge_scoring_msgs::msg::Score>()
{
  return "aichallenge_scoring_msgs/msg/Score";
}

template<>
struct has_fixed_size<aichallenge_scoring_msgs::msg::Score>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aichallenge_scoring_msgs::msg::Score>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aichallenge_scoring_msgs::msg::Score>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__TRAITS_HPP_
