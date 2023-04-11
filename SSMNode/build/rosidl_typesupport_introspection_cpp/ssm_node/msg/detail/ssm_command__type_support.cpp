// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ssm_node:msg/SsmCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ssm_node/msg/detail/ssm_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ssm_node
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SsmCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ssm_node::msg::SsmCommand(_init);
}

void SsmCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ssm_node::msg::SsmCommand *>(message_memory);
  typed_message->~SsmCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SsmCommand_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ssm_node::msg::SsmCommand, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "age",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ssm_node::msg::SsmCommand, age),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SsmCommand_message_members = {
  "ssm_node::msg",  // message namespace
  "SsmCommand",  // message name
  2,  // number of fields
  sizeof(ssm_node::msg::SsmCommand),
  SsmCommand_message_member_array,  // message members
  SsmCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  SsmCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SsmCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SsmCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ssm_node


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ssm_node::msg::SsmCommand>()
{
  return &::ssm_node::msg::rosidl_typesupport_introspection_cpp::SsmCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ssm_node, msg, SsmCommand)() {
  return &::ssm_node::msg::rosidl_typesupport_introspection_cpp::SsmCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
