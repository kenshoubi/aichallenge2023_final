// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice

#ifndef AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__BUILDER_HPP_
#define AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aichallenge_scoring_msgs/msg/detail/score__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aichallenge_scoring_msgs
{

namespace msg
{

namespace builder
{

class Init_Score_has_finished_task3
{
public:
  explicit Init_Score_has_finished_task3(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  ::aichallenge_scoring_msgs::msg::Score has_finished_task3(::aichallenge_scoring_msgs::msg::Score::_has_finished_task3_type arg)
  {
    msg_.has_finished_task3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_has_finished_task2
{
public:
  explicit Init_Score_has_finished_task2(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_has_finished_task3 has_finished_task2(::aichallenge_scoring_msgs::msg::Score::_has_finished_task2_type arg)
  {
    msg_.has_finished_task2 = std::move(arg);
    return Init_Score_has_finished_task3(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_has_finished_task1
{
public:
  explicit Init_Score_has_finished_task1(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_has_finished_task2 has_finished_task1(::aichallenge_scoring_msgs::msg::Score::_has_finished_task1_type arg)
  {
    msg_.has_finished_task1 = std::move(arg);
    return Init_Score_has_finished_task2(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_has_exceeded_speed_limit
{
public:
  explicit Init_Score_has_exceeded_speed_limit(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_has_finished_task1 has_exceeded_speed_limit(::aichallenge_scoring_msgs::msg::Score::_has_exceeded_speed_limit_type arg)
  {
    msg_.has_exceeded_speed_limit = std::move(arg);
    return Init_Score_has_finished_task1(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_is_stopped
{
public:
  explicit Init_Score_is_stopped(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_has_exceeded_speed_limit is_stopped(::aichallenge_scoring_msgs::msg::Score::_is_stopped_type arg)
  {
    msg_.is_stopped = std::move(arg);
    return Init_Score_has_exceeded_speed_limit(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_is_timeout
{
public:
  explicit Init_Score_is_timeout(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_is_stopped is_timeout(::aichallenge_scoring_msgs::msg::Score::_is_timeout_type arg)
  {
    msg_.is_timeout = std::move(arg);
    return Init_Score_is_stopped(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_is_doing_task3
{
public:
  explicit Init_Score_is_doing_task3(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_is_timeout is_doing_task3(::aichallenge_scoring_msgs::msg::Score::_is_doing_task3_type arg)
  {
    msg_.is_doing_task3 = std::move(arg);
    return Init_Score_is_timeout(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_is_outside_lane
{
public:
  explicit Init_Score_is_outside_lane(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_is_doing_task3 is_outside_lane(::aichallenge_scoring_msgs::msg::Score::_is_outside_lane_type arg)
  {
    msg_.is_outside_lane = std::move(arg);
    return Init_Score_is_doing_task3(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_is_distance_score_maxed_out
{
public:
  explicit Init_Score_is_distance_score_maxed_out(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_is_outside_lane is_distance_score_maxed_out(::aichallenge_scoring_msgs::msg::Score::_is_distance_score_maxed_out_type arg)
  {
    msg_.is_distance_score_maxed_out = std::move(arg);
    return Init_Score_is_outside_lane(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_task3_duration
{
public:
  explicit Init_Score_task3_duration(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_is_distance_score_maxed_out task3_duration(::aichallenge_scoring_msgs::msg::Score::_task3_duration_type arg)
  {
    msg_.task3_duration = std::move(arg);
    return Init_Score_is_distance_score_maxed_out(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_total_duration
{
public:
  explicit Init_Score_total_duration(::aichallenge_scoring_msgs::msg::Score & msg)
  : msg_(msg)
  {}
  Init_Score_task3_duration total_duration(::aichallenge_scoring_msgs::msg::Score::_total_duration_type arg)
  {
    msg_.total_duration = std::move(arg);
    return Init_Score_task3_duration(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

class Init_Score_distance_score
{
public:
  Init_Score_distance_score()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Score_total_duration distance_score(::aichallenge_scoring_msgs::msg::Score::_distance_score_type arg)
  {
    msg_.distance_score = std::move(arg);
    return Init_Score_total_duration(msg_);
  }

private:
  ::aichallenge_scoring_msgs::msg::Score msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aichallenge_scoring_msgs::msg::Score>()
{
  return aichallenge_scoring_msgs::msg::builder::Init_Score_distance_score();
}

}  // namespace aichallenge_scoring_msgs

#endif  // AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__BUILDER_HPP_
