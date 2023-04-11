// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ssm_node:msg/SsmCommand.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SSM_NODE__MSG__DETAIL__SSM_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ssm_node/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ssm_node/msg/detail/ssm_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ssm_node
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
cdr_serialize(
  const ssm_node::msg::SsmCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ssm_node::msg::SsmCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
get_serialized_size(
  const ssm_node::msg::SsmCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
max_serialized_size_SsmCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ssm_node

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ssm_node, msg, SsmCommand)();

#ifdef __cplusplus
}
#endif

#endif  // SSM_NODE__MSG__DETAIL__SSM_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
