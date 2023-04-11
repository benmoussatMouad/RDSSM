// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ssm_node:msg/SsmCommand.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_COMMAND__FUNCTIONS_H_
#define SSM_NODE__MSG__DETAIL__SSM_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ssm_node/msg/rosidl_generator_c__visibility_control.h"

#include "ssm_node/msg/detail/ssm_command__struct.h"

/// Initialize msg/SsmCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ssm_node__msg__SsmCommand
 * )) before or use
 * ssm_node__msg__SsmCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
bool
ssm_node__msg__SsmCommand__init(ssm_node__msg__SsmCommand * msg);

/// Finalize msg/SsmCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
void
ssm_node__msg__SsmCommand__fini(ssm_node__msg__SsmCommand * msg);

/// Create msg/SsmCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ssm_node__msg__SsmCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
ssm_node__msg__SsmCommand *
ssm_node__msg__SsmCommand__create();

/// Destroy msg/SsmCommand message.
/**
 * It calls
 * ssm_node__msg__SsmCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
void
ssm_node__msg__SsmCommand__destroy(ssm_node__msg__SsmCommand * msg);

/// Check for msg/SsmCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
bool
ssm_node__msg__SsmCommand__are_equal(const ssm_node__msg__SsmCommand * lhs, const ssm_node__msg__SsmCommand * rhs);

/// Copy a msg/SsmCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
bool
ssm_node__msg__SsmCommand__copy(
  const ssm_node__msg__SsmCommand * input,
  ssm_node__msg__SsmCommand * output);

/// Initialize array of msg/SsmCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * ssm_node__msg__SsmCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
bool
ssm_node__msg__SsmCommand__Sequence__init(ssm_node__msg__SsmCommand__Sequence * array, size_t size);

/// Finalize array of msg/SsmCommand messages.
/**
 * It calls
 * ssm_node__msg__SsmCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
void
ssm_node__msg__SsmCommand__Sequence__fini(ssm_node__msg__SsmCommand__Sequence * array);

/// Create array of msg/SsmCommand messages.
/**
 * It allocates the memory for the array and calls
 * ssm_node__msg__SsmCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
ssm_node__msg__SsmCommand__Sequence *
ssm_node__msg__SsmCommand__Sequence__create(size_t size);

/// Destroy array of msg/SsmCommand messages.
/**
 * It calls
 * ssm_node__msg__SsmCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
void
ssm_node__msg__SsmCommand__Sequence__destroy(ssm_node__msg__SsmCommand__Sequence * array);

/// Check for msg/SsmCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
bool
ssm_node__msg__SsmCommand__Sequence__are_equal(const ssm_node__msg__SsmCommand__Sequence * lhs, const ssm_node__msg__SsmCommand__Sequence * rhs);

/// Copy an array of msg/SsmCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ssm_node
bool
ssm_node__msg__SsmCommand__Sequence__copy(
  const ssm_node__msg__SsmCommand__Sequence * input,
  ssm_node__msg__SsmCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SSM_NODE__MSG__DETAIL__SSM_COMMAND__FUNCTIONS_H_
