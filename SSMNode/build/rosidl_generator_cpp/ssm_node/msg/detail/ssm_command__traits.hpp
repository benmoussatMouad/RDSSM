// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ssm_node:msg/SsmCommand.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_COMMAND__TRAITS_HPP_
#define SSM_NODE__MSG__DETAIL__SSM_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ssm_node/msg/detail/ssm_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ssm_node
{

namespace msg
{

inline void to_flow_style_yaml(
  const SsmCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SsmCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SsmCommand & msg, bool use_flow_style = false)
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
  const ssm_node::msg::SsmCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ssm_node::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ssm_node::msg::to_yaml() instead")]]
inline std::string to_yaml(const ssm_node::msg::SsmCommand & msg)
{
  return ssm_node::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ssm_node::msg::SsmCommand>()
{
  return "ssm_node::msg::SsmCommand";
}

template<>
inline const char * name<ssm_node::msg::SsmCommand>()
{
  return "ssm_node/msg/SsmCommand";
}

template<>
struct has_fixed_size<ssm_node::msg::SsmCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ssm_node::msg::SsmCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ssm_node::msg::SsmCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SSM_NODE__MSG__DETAIL__SSM_COMMAND__TRAITS_HPP_
