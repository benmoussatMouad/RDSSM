// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ssm_node:msg/SsmMessage.idl
// generated code does not contain a copyright notice
#include "ssm_node/msg/detail/ssm_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ssm_node/msg/detail/ssm_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ssm_node
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
cdr_serialize(
  const ssm_node::msg::SsmMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: msg_type
  cdr << ros_message.msg_type;
  // Member: res_type
  cdr << ros_message.res_type;
  // Member: cmd_type
  cdr << ros_message.cmd_type;
  // Member: name
  cdr << ros_message.name;
  // Member: suid
  cdr << ros_message.suid;
  // Member: ssize
  cdr << ros_message.ssize;
  // Member: hsize
  cdr << ros_message.hsize;
  // Member: time
  cdr << ros_message.time;
  // Member: save_time
  cdr << ros_message.save_time;
  // Member: dssm_msg_len
  cdr << ros_message.dssm_msg_len;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ssm_node::msg::SsmMessage & ros_message)
{
  // Member: msg_type
  cdr >> ros_message.msg_type;

  // Member: res_type
  cdr >> ros_message.res_type;

  // Member: cmd_type
  cdr >> ros_message.cmd_type;

  // Member: name
  cdr >> ros_message.name;

  // Member: suid
  cdr >> ros_message.suid;

  // Member: ssize
  cdr >> ros_message.ssize;

  // Member: hsize
  cdr >> ros_message.hsize;

  // Member: time
  cdr >> ros_message.time;

  // Member: save_time
  cdr >> ros_message.save_time;

  // Member: dssm_msg_len
  cdr >> ros_message.dssm_msg_len;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
get_serialized_size(
  const ssm_node::msg::SsmMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: msg_type
  {
    size_t item_size = sizeof(ros_message.msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: res_type
  {
    size_t item_size = sizeof(ros_message.res_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmd_type
  {
    size_t item_size = sizeof(ros_message.cmd_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: suid
  {
    size_t item_size = sizeof(ros_message.suid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ssize
  {
    size_t item_size = sizeof(ros_message.ssize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hsize
  {
    size_t item_size = sizeof(ros_message.hsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: save_time
  {
    size_t item_size = sizeof(ros_message.save_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dssm_msg_len
  {
    size_t item_size = sizeof(ros_message.dssm_msg_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssm_node
max_serialized_size_SsmMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: msg_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: res_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cmd_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: suid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ssize
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hsize
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: save_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dssm_msg_len
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SsmMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ssm_node::msg::SsmMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SsmMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ssm_node::msg::SsmMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SsmMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ssm_node::msg::SsmMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SsmMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SsmMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SsmMessage__callbacks = {
  "ssm_node::msg",
  "SsmMessage",
  _SsmMessage__cdr_serialize,
  _SsmMessage__cdr_deserialize,
  _SsmMessage__get_serialized_size,
  _SsmMessage__max_serialized_size
};

static rosidl_message_type_support_t _SsmMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SsmMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ssm_node

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ssm_node
const rosidl_message_type_support_t *
get_message_type_support_handle<ssm_node::msg::SsmMessage>()
{
  return &ssm_node::msg::typesupport_fastrtps_cpp::_SsmMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ssm_node, msg, SsmMessage)() {
  return &ssm_node::msg::typesupport_fastrtps_cpp::_SsmMessage__handle;
}

#ifdef __cplusplus
}
#endif
