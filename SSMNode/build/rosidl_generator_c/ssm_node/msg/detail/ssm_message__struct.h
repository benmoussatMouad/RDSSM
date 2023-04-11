// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ssm_node:msg/SsmMessage.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_MESSAGE__STRUCT_H_
#define SSM_NODE__MSG__DETAIL__SSM_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/SsmMessage in the package ssm_node.
typedef struct ssm_node__msg__SsmMessage
{
  uint64_t msg_type;
  uint64_t res_type;
  int16_t cmd_type;
  rosidl_runtime_c__String name;
  int32_t suid;
  uint64_t ssize;
  uint64_t hsize;
  double time;
  double save_time;
  int32_t dssm_msg_len;
} ssm_node__msg__SsmMessage;

// Struct for a sequence of ssm_node__msg__SsmMessage.
typedef struct ssm_node__msg__SsmMessage__Sequence
{
  ssm_node__msg__SsmMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ssm_node__msg__SsmMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SSM_NODE__MSG__DETAIL__SSM_MESSAGE__STRUCT_H_
