// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ssm_node:msg/SsmMessage.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_MESSAGE__TRAITS_HPP_
#define SSM_NODE__MSG__DETAIL__SSM_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ssm_node/msg/detail/ssm_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ssm_node
{

namespace msg
{

inline void to_flow_style_yaml(
  const SsmMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: msg_type
  {
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << ", ";
  }

  // member: res_type
  {
    out << "res_type: ";
    rosidl_generator_traits::value_to_yaml(msg.res_type, out);
    out << ", ";
  }

  // member: cmd_type
  {
    out << "cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_type, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: suid
  {
    out << "suid: ";
    rosidl_generator_traits::value_to_yaml(msg.suid, out);
    out << ", ";
  }

  // member: ssize
  {
    out << "ssize: ";
    rosidl_generator_traits::value_to_yaml(msg.ssize, out);
    out << ", ";
  }

  // member: hsize
  {
    out << "hsize: ";
    rosidl_generator_traits::value_to_yaml(msg.hsize, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: save_time
  {
    out << "save_time: ";
    rosidl_generator_traits::value_to_yaml(msg.save_time, out);
    out << ", ";
  }

  // member: dssm_msg_len
  {
    out << "dssm_msg_len: ";
    rosidl_generator_traits::value_to_yaml(msg.dssm_msg_len, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SsmMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << "\n";
  }

  // member: res_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res_type: ";
    rosidl_generator_traits::value_to_yaml(msg.res_type, out);
    out << "\n";
  }

  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_type, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: suid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suid: ";
    rosidl_generator_traits::value_to_yaml(msg.suid, out);
    out << "\n";
  }

  // member: ssize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssize: ";
    rosidl_generator_traits::value_to_yaml(msg.ssize, out);
    out << "\n";
  }

  // member: hsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hsize: ";
    rosidl_generator_traits::value_to_yaml(msg.hsize, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: save_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save_time: ";
    rosidl_generator_traits::value_to_yaml(msg.save_time, out);
    out << "\n";
  }

  // member: dssm_msg_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dssm_msg_len: ";
    rosidl_generator_traits::value_to_yaml(msg.dssm_msg_len, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SsmMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ssm_node

namespace rosidl_generator_traits
{

[[deprecated("use ssm_node::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ssm_node::msg::SsmMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ssm_node::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ssm_node::msg::to_yaml() instead")]]
inline std::string to_yaml(const ssm_node::msg::SsmMessage & msg)
{
  return ssm_node::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ssm_node::msg::SsmMessage>()
{
  return "ssm_node::msg::SsmMessage";
}

template<>
inline const char * name<ssm_node::msg::SsmMessage>()
{
  return "ssm_node/msg/SsmMessage";
}

template<>
struct has_fixed_size<ssm_node::msg::SsmMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ssm_node::msg::SsmMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ssm_node::msg::SsmMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SSM_NODE__MSG__DETAIL__SSM_MESSAGE__TRAITS_HPP_
