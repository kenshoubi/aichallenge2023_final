// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice

#ifndef AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__STRUCT_HPP_
#define AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aichallenge_scoring_msgs__msg__Score __attribute__((deprecated))
#else
# define DEPRECATED__aichallenge_scoring_msgs__msg__Score __declspec(deprecated)
#endif

namespace aichallenge_scoring_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Score_
{
  using Type = Score_<ContainerAllocator>;

  explicit Score_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_score = 0.0f;
      this->total_duration = 0.0f;
      this->task3_duration = 0.0f;
      this->is_distance_score_maxed_out = false;
      this->is_outside_lane = false;
      this->is_doing_task3 = false;
      this->is_timeout = false;
      this->is_stopped = false;
      this->has_exceeded_speed_limit = false;
      this->has_finished_task1 = false;
      this->has_finished_task2 = false;
      this->has_finished_task3 = false;
    }
  }

  explicit Score_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_score = 0.0f;
      this->total_duration = 0.0f;
      this->task3_duration = 0.0f;
      this->is_distance_score_maxed_out = false;
      this->is_outside_lane = false;
      this->is_doing_task3 = false;
      this->is_timeout = false;
      this->is_stopped = false;
      this->has_exceeded_speed_limit = false;
      this->has_finished_task1 = false;
      this->has_finished_task2 = false;
      this->has_finished_task3 = false;
    }
  }

  // field types and members
  using _distance_score_type =
    float;
  _distance_score_type distance_score;
  using _total_duration_type =
    float;
  _total_duration_type total_duration;
  using _task3_duration_type =
    float;
  _task3_duration_type task3_duration;
  using _is_distance_score_maxed_out_type =
    bool;
  _is_distance_score_maxed_out_type is_distance_score_maxed_out;
  using _is_outside_lane_type =
    bool;
  _is_outside_lane_type is_outside_lane;
  using _is_doing_task3_type =
    bool;
  _is_doing_task3_type is_doing_task3;
  using _is_timeout_type =
    bool;
  _is_timeout_type is_timeout;
  using _is_stopped_type =
    bool;
  _is_stopped_type is_stopped;
  using _has_exceeded_speed_limit_type =
    bool;
  _has_exceeded_speed_limit_type has_exceeded_speed_limit;
  using _has_finished_task1_type =
    bool;
  _has_finished_task1_type has_finished_task1;
  using _has_finished_task2_type =
    bool;
  _has_finished_task2_type has_finished_task2;
  using _has_finished_task3_type =
    bool;
  _has_finished_task3_type has_finished_task3;

  // setters for named parameter idiom
  Type & set__distance_score(
    const float & _arg)
  {
    this->distance_score = _arg;
    return *this;
  }
  Type & set__total_duration(
    const float & _arg)
  {
    this->total_duration = _arg;
    return *this;
  }
  Type & set__task3_duration(
    const float & _arg)
  {
    this->task3_duration = _arg;
    return *this;
  }
  Type & set__is_distance_score_maxed_out(
    const bool & _arg)
  {
    this->is_distance_score_maxed_out = _arg;
    return *this;
  }
  Type & set__is_outside_lane(
    const bool & _arg)
  {
    this->is_outside_lane = _arg;
    return *this;
  }
  Type & set__is_doing_task3(
    const bool & _arg)
  {
    this->is_doing_task3 = _arg;
    return *this;
  }
  Type & set__is_timeout(
    const bool & _arg)
  {
    this->is_timeout = _arg;
    return *this;
  }
  Type & set__is_stopped(
    const bool & _arg)
  {
    this->is_stopped = _arg;
    return *this;
  }
  Type & set__has_exceeded_speed_limit(
    const bool & _arg)
  {
    this->has_exceeded_speed_limit = _arg;
    return *this;
  }
  Type & set__has_finished_task1(
    const bool & _arg)
  {
    this->has_finished_task1 = _arg;
    return *this;
  }
  Type & set__has_finished_task2(
    const bool & _arg)
  {
    this->has_finished_task2 = _arg;
    return *this;
  }
  Type & set__has_finished_task3(
    const bool & _arg)
  {
    this->has_finished_task3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aichallenge_scoring_msgs::msg::Score_<ContainerAllocator> *;
  using ConstRawPtr =
    const aichallenge_scoring_msgs::msg::Score_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aichallenge_scoring_msgs::msg::Score_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aichallenge_scoring_msgs::msg::Score_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aichallenge_scoring_msgs::msg::Score_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aichallenge_scoring_msgs::msg::Score_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aichallenge_scoring_msgs::msg::Score_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aichallenge_scoring_msgs::msg::Score_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aichallenge_scoring_msgs::msg::Score_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aichallenge_scoring_msgs::msg::Score_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aichallenge_scoring_msgs__msg__Score
    std::shared_ptr<aichallenge_scoring_msgs::msg::Score_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aichallenge_scoring_msgs__msg__Score
    std::shared_ptr<aichallenge_scoring_msgs::msg::Score_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Score_ & other) const
  {
    if (this->distance_score != other.distance_score) {
      return false;
    }
    if (this->total_duration != other.total_duration) {
      return false;
    }
    if (this->task3_duration != other.task3_duration) {
      return false;
    }
    if (this->is_distance_score_maxed_out != other.is_distance_score_maxed_out) {
      return false;
    }
    if (this->is_outside_lane != other.is_outside_lane) {
      return false;
    }
    if (this->is_doing_task3 != other.is_doing_task3) {
      return false;
    }
    if (this->is_timeout != other.is_timeout) {
      return false;
    }
    if (this->is_stopped != other.is_stopped) {
      return false;
    }
    if (this->has_exceeded_speed_limit != other.has_exceeded_speed_limit) {
      return false;
    }
    if (this->has_finished_task1 != other.has_finished_task1) {
      return false;
    }
    if (this->has_finished_task2 != other.has_finished_task2) {
      return false;
    }
    if (this->has_finished_task3 != other.has_finished_task3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Score_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Score_

// alias to use template instance with default allocator
using Score =
  aichallenge_scoring_msgs::msg::Score_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aichallenge_scoring_msgs

#endif  // AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__STRUCT_HPP_
