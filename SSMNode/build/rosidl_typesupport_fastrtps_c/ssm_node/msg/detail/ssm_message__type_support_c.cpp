// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ssm_node:msg/SsmMessage.idl
// generated code does not contain a copyright notice
#include "ssm_node/msg/detail/ssm_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ssm_node/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ssm_node/msg/detail/ssm_message__struct.h"
#include "ssm_node/msg/detail/ssm_message__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _SsmMessage__ros_msg_type = ssm_node__msg__SsmMessage;

static bool _SsmMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SsmMessage__ros_msg_type * ros_message = static_cast<const _SsmMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_type
  {
    cdr << ros_message->msg_type;
  }

  // Field name: res_type
  {
    cdr << ros_message->res_type;
  }

  // Field name: cmd_type
  {
    cdr << ros_message->cmd_type;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: suid
  {
    cdr << ros_message->suid;
  }

  // Field name: ssize
  {
    cdr << ros_message->ssize;
  }

  // Field name: hsize
  {
    cdr << ros_message->hsize;
  }

  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: save_time
  {
    cdr << ros_message->save_time;
  }

  // Field name: dssm_msg_len
  {
    cdr << ros_message->dssm_msg_len;
  }

  return true;
}

static bool _SsmMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SsmMessage__ros_msg_type * ros_message = static_cast<_SsmMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_type
  {
    cdr >> ros_message->msg_type;
  }

  // Field name: res_type
  {
    cdr >> ros_message->res_type;
  }

  // Field name: cmd_type
  {
    cdr >> ros_message->cmd_type;
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: suid
  {
    cdr >> ros_message->suid;
  }

  // Field name: ssize
  {
    cdr >> ros_message->ssize;
  }

  // Field name: hsize
  {
    cdr >> ros_message->hsize;
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: save_time
  {
    cdr >> ros_message->save_time;
  }

  // Field name: dssm_msg_len
  {
    cdr >> ros_message->dssm_msg_len;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ssm_node
size_t get_serialized_size_ssm_node__msg__SsmMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SsmMessage__ros_msg_type * ros_message = static_cast<const _SsmMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msg_type
  {
    size_t item_size = sizeof(ros_message->msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name res_type
  {
    size_t item_size = sizeof(ros_message->res_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_type
  {
    size_t item_size = sizeof(ros_message->cmd_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name suid
  {
    size_t item_size = sizeof(ros_message->suid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ssize
  {
    size_t item_size = sizeof(ros_message->ssize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hsize
  {
    size_t item_size = sizeof(ros_message->hsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name save_time
  {
    size_t item_size = sizeof(ros_message->save_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dssm_msg_len
  {
    size_t item_size = sizeof(ros_message->dssm_msg_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SsmMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ssm_node__msg__SsmMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ssm_node
size_t max_serialized_size_ssm_node__msg__SsmMessage(
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

  // member: msg_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: res_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cmd_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: name
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
  // member: suid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ssize
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hsize
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: save_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dssm_msg_len
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SsmMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ssm_node__msg__SsmMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SsmMessage = {
  "ssm_node::msg",
  "SsmMessage",
  _SsmMessage__cdr_serialize,
  _SsmMessage__cdr_deserialize,
  _SsmMessage__get_serialized_size,
  _SsmMessage__max_serialized_size
};

static rosidl_message_type_support_t _SsmMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SsmMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ssm_node, msg, SsmMessage)() {
  return &_SsmMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
