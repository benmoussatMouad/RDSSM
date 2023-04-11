// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ssm_node:msg/SsmMessage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ssm_node/msg/detail/ssm_message__struct.h"
#include "ssm_node/msg/detail/ssm_message__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ssm_node
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _SsmMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SsmMessage_type_support_ids_t;

static const _SsmMessage_type_support_ids_t _SsmMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SsmMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SsmMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SsmMessage_type_support_symbol_names_t _SsmMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ssm_node, msg, SsmMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ssm_node, msg, SsmMessage)),
  }
};

typedef struct _SsmMessage_type_support_data_t
{
  void * data[2];
} _SsmMessage_type_support_data_t;

static _SsmMessage_type_support_data_t _SsmMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SsmMessage_message_typesupport_map = {
  2,
  "ssm_node",
  &_SsmMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SsmMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SsmMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SsmMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SsmMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace ssm_node

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ssm_node, msg, SsmMessage)() {
  return &::ssm_node::msg::rosidl_typesupport_c::SsmMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
