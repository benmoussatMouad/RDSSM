// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ssm_node:msg/SsmCommand.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_COMMAND__BUILDER_HPP_
#define SSM_NODE__MSG__DETAIL__SSM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ssm_node/msg/detail/ssm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ssm_node
{

namespace msg
{

namespace builder
{

class Init_SsmCommand_age
{
public:
  explicit Init_SsmCommand_age(::ssm_node::msg::SsmCommand & msg)
  : msg_(msg)
  {}
  ::ssm_node::msg::SsmCommand age(::ssm_node::msg::SsmCommand::_age_type arg)
  {
    msg_.age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ssm_node::msg::SsmCommand msg_;
};

class Init_SsmCommand_name
{
public:
  Init_SsmCommand_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SsmCommand_age name(::ssm_node::msg::SsmCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SsmCommand_age(msg_);
  }

private:
  ::ssm_node::msg::SsmCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ssm_node::msg::SsmCommand>()
{
  return ssm_node::msg::builder::Init_SsmCommand_name();
}

}  // namespace ssm_node

#endif  // SSM_NODE__MSG__DETAIL__SSM_COMMAND__BUILDER_HPP_
