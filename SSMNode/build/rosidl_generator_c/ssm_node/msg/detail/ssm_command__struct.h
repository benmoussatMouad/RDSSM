// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ssm_node:msg/SsmCommand.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_COMMAND__STRUCT_H_
#define SSM_NODE__MSG__DETAIL__SSM_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SsmCommand in the package ssm_node.
typedef struct ssm_node__msg__SsmCommand
{
  rosidl_runtime_c__String name;
  uint8_t age;
} ssm_node__msg__SsmCommand;

// Struct for a sequence of ssm_node__msg__SsmCommand.
typedef struct ssm_node__msg__SsmCommand__Sequence
{
  ssm_node__msg__SsmCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ssm_node__msg__SsmCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SSM_NODE__MSG__DETAIL__SSM_COMMAND__STRUCT_H_
