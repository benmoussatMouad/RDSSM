// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ssm_node:msg/SsmCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ssm_node/msg/detail/ssm_command__rosidl_typesupport_introspection_c.h"
#include "ssm_node/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ssm_node/msg/detail/ssm_command__functions.h"
#include "ssm_node/msg/detail/ssm_command__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ssm_node__msg__SsmCommand__init(message_memory);
}

void ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_fini_function(void * message_memory)
{
  ssm_node__msg__SsmCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ssm_node__msg__SsmCommand, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ssm_node__msg__SsmCommand, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_message_members = {
  "ssm_node__msg",  // message namespace
  "SsmCommand",  // message name
  2,  // number of fields
  sizeof(ssm_node__msg__SsmCommand),
  ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_message_member_array,  // message members
  ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_message_type_support_handle = {
  0,
  &ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ssm_node
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ssm_node, msg, SsmCommand)() {
  if (!ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_message_type_support_handle.typesupport_identifier) {
    ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ssm_node__msg__SsmCommand__rosidl_typesupport_introspection_c__SsmCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
