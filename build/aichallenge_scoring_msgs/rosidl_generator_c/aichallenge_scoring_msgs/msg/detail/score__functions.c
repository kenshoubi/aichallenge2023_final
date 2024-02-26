// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice
#include "aichallenge_scoring_msgs/msg/detail/score__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aichallenge_scoring_msgs__msg__Score__init(aichallenge_scoring_msgs__msg__Score * msg)
{
  if (!msg) {
    return false;
  }
  // distance_score
  // total_duration
  // task3_duration
  // is_distance_score_maxed_out
  // is_outside_lane
  // is_doing_task3
  // is_timeout
  // is_stopped
  // has_exceeded_speed_limit
  // has_finished_task1
  // has_finished_task2
  // has_finished_task3
  return true;
}

void
aichallenge_scoring_msgs__msg__Score__fini(aichallenge_scoring_msgs__msg__Score * msg)
{
  if (!msg) {
    return;
  }
  // distance_score
  // total_duration
  // task3_duration
  // is_distance_score_maxed_out
  // is_outside_lane
  // is_doing_task3
  // is_timeout
  // is_stopped
  // has_exceeded_speed_limit
  // has_finished_task1
  // has_finished_task2
  // has_finished_task3
}

bool
aichallenge_scoring_msgs__msg__Score__are_equal(const aichallenge_scoring_msgs__msg__Score * lhs, const aichallenge_scoring_msgs__msg__Score * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_score
  if (lhs->distance_score != rhs->distance_score) {
    return false;
  }
  // total_duration
  if (lhs->total_duration != rhs->total_duration) {
    return false;
  }
  // task3_duration
  if (lhs->task3_duration != rhs->task3_duration) {
    return false;
  }
  // is_distance_score_maxed_out
  if (lhs->is_distance_score_maxed_out != rhs->is_distance_score_maxed_out) {
    return false;
  }
  // is_outside_lane
  if (lhs->is_outside_lane != rhs->is_outside_lane) {
    return false;
  }
  // is_doing_task3
  if (lhs->is_doing_task3 != rhs->is_doing_task3) {
    return false;
  }
  // is_timeout
  if (lhs->is_timeout != rhs->is_timeout) {
    return false;
  }
  // is_stopped
  if (lhs->is_stopped != rhs->is_stopped) {
    return false;
  }
  // has_exceeded_speed_limit
  if (lhs->has_exceeded_speed_limit != rhs->has_exceeded_speed_limit) {
    return false;
  }
  // has_finished_task1
  if (lhs->has_finished_task1 != rhs->has_finished_task1) {
    return false;
  }
  // has_finished_task2
  if (lhs->has_finished_task2 != rhs->has_finished_task2) {
    return false;
  }
  // has_finished_task3
  if (lhs->has_finished_task3 != rhs->has_finished_task3) {
    return false;
  }
  return true;
}

bool
aichallenge_scoring_msgs__msg__Score__copy(
  const aichallenge_scoring_msgs__msg__Score * input,
  aichallenge_scoring_msgs__msg__Score * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_score
  output->distance_score = input->distance_score;
  // total_duration
  output->total_duration = input->total_duration;
  // task3_duration
  output->task3_duration = input->task3_duration;
  // is_distance_score_maxed_out
  output->is_distance_score_maxed_out = input->is_distance_score_maxed_out;
  // is_outside_lane
  output->is_outside_lane = input->is_outside_lane;
  // is_doing_task3
  output->is_doing_task3 = input->is_doing_task3;
  // is_timeout
  output->is_timeout = input->is_timeout;
  // is_stopped
  output->is_stopped = input->is_stopped;
  // has_exceeded_speed_limit
  output->has_exceeded_speed_limit = input->has_exceeded_speed_limit;
  // has_finished_task1
  output->has_finished_task1 = input->has_finished_task1;
  // has_finished_task2
  output->has_finished_task2 = input->has_finished_task2;
  // has_finished_task3
  output->has_finished_task3 = input->has_finished_task3;
  return true;
}

aichallenge_scoring_msgs__msg__Score *
aichallenge_scoring_msgs__msg__Score__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aichallenge_scoring_msgs__msg__Score * msg = (aichallenge_scoring_msgs__msg__Score *)allocator.allocate(sizeof(aichallenge_scoring_msgs__msg__Score), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aichallenge_scoring_msgs__msg__Score));
  bool success = aichallenge_scoring_msgs__msg__Score__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aichallenge_scoring_msgs__msg__Score__destroy(aichallenge_scoring_msgs__msg__Score * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aichallenge_scoring_msgs__msg__Score__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aichallenge_scoring_msgs__msg__Score__Sequence__init(aichallenge_scoring_msgs__msg__Score__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aichallenge_scoring_msgs__msg__Score * data = NULL;

  if (size) {
    data = (aichallenge_scoring_msgs__msg__Score *)allocator.zero_allocate(size, sizeof(aichallenge_scoring_msgs__msg__Score), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aichallenge_scoring_msgs__msg__Score__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aichallenge_scoring_msgs__msg__Score__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aichallenge_scoring_msgs__msg__Score__Sequence__fini(aichallenge_scoring_msgs__msg__Score__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aichallenge_scoring_msgs__msg__Score__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aichallenge_scoring_msgs__msg__Score__Sequence *
aichallenge_scoring_msgs__msg__Score__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aichallenge_scoring_msgs__msg__Score__Sequence * array = (aichallenge_scoring_msgs__msg__Score__Sequence *)allocator.allocate(sizeof(aichallenge_scoring_msgs__msg__Score__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aichallenge_scoring_msgs__msg__Score__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aichallenge_scoring_msgs__msg__Score__Sequence__destroy(aichallenge_scoring_msgs__msg__Score__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aichallenge_scoring_msgs__msg__Score__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aichallenge_scoring_msgs__msg__Score__Sequence__are_equal(const aichallenge_scoring_msgs__msg__Score__Sequence * lhs, const aichallenge_scoring_msgs__msg__Score__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aichallenge_scoring_msgs__msg__Score__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aichallenge_scoring_msgs__msg__Score__Sequence__copy(
  const aichallenge_scoring_msgs__msg__Score__Sequence * input,
  aichallenge_scoring_msgs__msg__Score__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aichallenge_scoring_msgs__msg__Score);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aichallenge_scoring_msgs__msg__Score * data =
      (aichallenge_scoring_msgs__msg__Score *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aichallenge_scoring_msgs__msg__Score__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aichallenge_scoring_msgs__msg__Score__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aichallenge_scoring_msgs__msg__Score__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
