// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ssm_node:msg/SsmMessage.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_MESSAGE__BUILDER_HPP_
#define SSM_NODE__MSG__DETAIL__SSM_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ssm_node/msg/detail/ssm_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ssm_node
{

namespace msg
{

namespace builder
{

class Init_SsmMessage_dssm_msg_len
{
public:
  explicit Init_SsmMessage_dssm_msg_len(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  ::ssm_node::msg::SsmMessage dssm_msg_len(::ssm_node::msg::SsmMessage::_dssm_msg_len_type arg)
  {
    msg_.dssm_msg_len = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_save_time
{
public:
  explicit Init_SsmMessage_save_time(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  Init_SsmMessage_dssm_msg_len save_time(::ssm_node::msg::SsmMessage::_save_time_type arg)
  {
    msg_.save_time = std::move(arg);
    return Init_SsmMessage_dssm_msg_len(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_time
{
public:
  explicit Init_SsmMessage_time(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  Init_SsmMessage_save_time time(::ssm_node::msg::SsmMessage::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_SsmMessage_save_time(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_hsize
{
public:
  explicit Init_SsmMessage_hsize(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  Init_SsmMessage_time hsize(::ssm_node::msg::SsmMessage::_hsize_type arg)
  {
    msg_.hsize = std::move(arg);
    return Init_SsmMessage_time(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_ssize
{
public:
  explicit Init_SsmMessage_ssize(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  Init_SsmMessage_hsize ssize(::ssm_node::msg::SsmMessage::_ssize_type arg)
  {
    msg_.ssize = std::move(arg);
    return Init_SsmMessage_hsize(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_suid
{
public:
  explicit Init_SsmMessage_suid(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  Init_SsmMessage_ssize suid(::ssm_node::msg::SsmMessage::_suid_type arg)
  {
    msg_.suid = std::move(arg);
    return Init_SsmMessage_ssize(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_name
{
public:
  explicit Init_SsmMessage_name(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  Init_SsmMessage_suid name(::ssm_node::msg::SsmMessage::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SsmMessage_suid(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_cmd_type
{
public:
  explicit Init_SsmMessage_cmd_type(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  Init_SsmMessage_name cmd_type(::ssm_node::msg::SsmMessage::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_SsmMessage_name(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_res_type
{
public:
  explicit Init_SsmMessage_res_type(::ssm_node::msg::SsmMessage & msg)
  : msg_(msg)
  {}
  Init_SsmMessage_cmd_type res_type(::ssm_node::msg::SsmMessage::_res_type_type arg)
  {
    msg_.res_type = std::move(arg);
    return Init_SsmMessage_cmd_type(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

class Init_SsmMessage_msg_type
{
public:
  Init_SsmMessage_msg_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SsmMessage_res_type msg_type(::ssm_node::msg::SsmMessage::_msg_type_type arg)
  {
    msg_.msg_type = std::move(arg);
    return Init_SsmMessage_res_type(msg_);
  }

private:
  ::ssm_node::msg::SsmMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ssm_node::msg::SsmMessage>()
{
  return ssm_node::msg::builder::Init_SsmMessage_msg_type();
}

}  // namespace ssm_node

#endif  // SSM_NODE__MSG__DETAIL__SSM_MESSAGE__BUILDER_HPP_
