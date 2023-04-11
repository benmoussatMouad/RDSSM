// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ssm_node:msg/SsmMessage.idl
// generated code does not contain a copyright notice

#ifndef SSM_NODE__MSG__DETAIL__SSM_MESSAGE__STRUCT_HPP_
#define SSM_NODE__MSG__DETAIL__SSM_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ssm_node__msg__SsmMessage __attribute__((deprecated))
#else
# define DEPRECATED__ssm_node__msg__SsmMessage __declspec(deprecated)
#endif

namespace ssm_node
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SsmMessage_
{
  using Type = SsmMessage_<ContainerAllocator>;

  explicit SsmMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_type = 0ull;
      this->res_type = 0ull;
      this->cmd_type = 0;
      this->name = "";
      this->suid = 0l;
      this->ssize = 0ull;
      this->hsize = 0ull;
      this->time = 0.0;
      this->save_time = 0.0;
      this->dssm_msg_len = 0l;
    }
  }

  explicit SsmMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_type = 0ull;
      this->res_type = 0ull;
      this->cmd_type = 0;
      this->name = "";
      this->suid = 0l;
      this->ssize = 0ull;
      this->hsize = 0ull;
      this->time = 0.0;
      this->save_time = 0.0;
      this->dssm_msg_len = 0l;
    }
  }

  // field types and members
  using _msg_type_type =
    uint64_t;
  _msg_type_type msg_type;
  using _res_type_type =
    uint64_t;
  _res_type_type res_type;
  using _cmd_type_type =
    int16_t;
  _cmd_type_type cmd_type;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _suid_type =
    int32_t;
  _suid_type suid;
  using _ssize_type =
    uint64_t;
  _ssize_type ssize;
  using _hsize_type =
    uint64_t;
  _hsize_type hsize;
  using _time_type =
    double;
  _time_type time;
  using _save_time_type =
    double;
  _save_time_type save_time;
  using _dssm_msg_len_type =
    int32_t;
  _dssm_msg_len_type dssm_msg_len;

  // setters for named parameter idiom
  Type & set__msg_type(
    const uint64_t & _arg)
  {
    this->msg_type = _arg;
    return *this;
  }
  Type & set__res_type(
    const uint64_t & _arg)
  {
    this->res_type = _arg;
    return *this;
  }
  Type & set__cmd_type(
    const int16_t & _arg)
  {
    this->cmd_type = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__suid(
    const int32_t & _arg)
  {
    this->suid = _arg;
    return *this;
  }
  Type & set__ssize(
    const uint64_t & _arg)
  {
    this->ssize = _arg;
    return *this;
  }
  Type & set__hsize(
    const uint64_t & _arg)
  {
    this->hsize = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__save_time(
    const double & _arg)
  {
    this->save_time = _arg;
    return *this;
  }
  Type & set__dssm_msg_len(
    const int32_t & _arg)
  {
    this->dssm_msg_len = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ssm_node::msg::SsmMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ssm_node::msg::SsmMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ssm_node::msg::SsmMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ssm_node::msg::SsmMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ssm_node::msg::SsmMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ssm_node::msg::SsmMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ssm_node::msg::SsmMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ssm_node::msg::SsmMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ssm_node::msg::SsmMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ssm_node::msg::SsmMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ssm_node__msg__SsmMessage
    std::shared_ptr<ssm_node::msg::SsmMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ssm_node__msg__SsmMessage
    std::shared_ptr<ssm_node::msg::SsmMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SsmMessage_ & other) const
  {
    if (this->msg_type != other.msg_type) {
      return false;
    }
    if (this->res_type != other.res_type) {
      return false;
    }
    if (this->cmd_type != other.cmd_type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->suid != other.suid) {
      return false;
    }
    if (this->ssize != other.ssize) {
      return false;
    }
    if (this->hsize != other.hsize) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->save_time != other.save_time) {
      return false;
    }
    if (this->dssm_msg_len != other.dssm_msg_len) {
      return false;
    }
    return true;
  }
  bool operator!=(const SsmMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SsmMessage_

// alias to use template instance with default allocator
using SsmMessage =
  ssm_node::msg::SsmMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ssm_node

#endif  // SSM_NODE__MSG__DETAIL__SSM_MESSAGE__STRUCT_HPP_
