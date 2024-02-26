// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
// generated code does not contain a copyright notice

#ifndef AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__FUNCTIONS_H_
#define AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aichallenge_scoring_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "aichallenge_scoring_msgs/msg/detail/score__struct.h"

/// Initialize msg/Score message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aichallenge_scoring_msgs__msg__Score
 * )) before or use
 * aichallenge_scoring_msgs__msg__Score__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
bool
aichallenge_scoring_msgs__msg__Score__init(aichallenge_scoring_msgs__msg__Score * msg);

/// Finalize msg/Score message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
void
aichallenge_scoring_msgs__msg__Score__fini(aichallenge_scoring_msgs__msg__Score * msg);

/// Create msg/Score message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aichallenge_scoring_msgs__msg__Score__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
aichallenge_scoring_msgs__msg__Score *
aichallenge_scoring_msgs__msg__Score__create();

/// Destroy msg/Score message.
/**
 * It calls
 * aichallenge_scoring_msgs__msg__Score__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
void
aichallenge_scoring_msgs__msg__Score__destroy(aichallenge_scoring_msgs__msg__Score * msg);

/// Check for msg/Score message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
bool
aichallenge_scoring_msgs__msg__Score__are_equal(const aichallenge_scoring_msgs__msg__Score * lhs, const aichallenge_scoring_msgs__msg__Score * rhs);

/// Copy a msg/Score message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
bool
aichallenge_scoring_msgs__msg__Score__copy(
  const aichallenge_scoring_msgs__msg__Score * input,
  aichallenge_scoring_msgs__msg__Score * output);

/// Initialize array of msg/Score messages.
/**
 * It allocates the memory for the number of elements and calls
 * aichallenge_scoring_msgs__msg__Score__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
bool
aichallenge_scoring_msgs__msg__Score__Sequence__init(aichallenge_scoring_msgs__msg__Score__Sequence * array, size_t size);

/// Finalize array of msg/Score messages.
/**
 * It calls
 * aichallenge_scoring_msgs__msg__Score__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
void
aichallenge_scoring_msgs__msg__Score__Sequence__fini(aichallenge_scoring_msgs__msg__Score__Sequence * array);

/// Create array of msg/Score messages.
/**
 * It allocates the memory for the array and calls
 * aichallenge_scoring_msgs__msg__Score__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
aichallenge_scoring_msgs__msg__Score__Sequence *
aichallenge_scoring_msgs__msg__Score__Sequence__create(size_t size);

/// Destroy array of msg/Score messages.
/**
 * It calls
 * aichallenge_scoring_msgs__msg__Score__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
void
aichallenge_scoring_msgs__msg__Score__Sequence__destroy(aichallenge_scoring_msgs__msg__Score__Sequence * array);

/// Check for msg/Score message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
bool
aichallenge_scoring_msgs__msg__Score__Sequence__are_equal(const aichallenge_scoring_msgs__msg__Score__Sequence * lhs, const aichallenge_scoring_msgs__msg__Score__Sequence * rhs);

/// Copy an array of msg/Score messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aichallenge_scoring_msgs
bool
aichallenge_scoring_msgs__msg__Score__Sequence__copy(
  const aichallenge_scoring_msgs__msg__Score__Sequence * input,
  aichallenge_scoring_msgs__msg__Score__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AICHALLENGE_SCORING_MSGS__MSG__DETAIL__SCORE__FUNCTIONS_H_
