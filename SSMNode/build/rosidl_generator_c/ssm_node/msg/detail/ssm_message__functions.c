// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ssm_node:msg/SsmMessage.idl
// generated code does not contain a copyright notice
#include "ssm_node/msg/detail/ssm_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
ssm_node__msg__SsmMessage__init(ssm_node__msg__SsmMessage * msg)
{
  if (!msg) {
    return false;
  }
  // msg_type
  // res_type
  // cmd_type
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ssm_node__msg__SsmMessage__fini(msg);
    return false;
  }
  // suid
  // ssize
  // hsize
  // time
  // save_time
  // dssm_msg_len
  return true;
}

void
ssm_node__msg__SsmMessage__fini(ssm_node__msg__SsmMessage * msg)
{
  if (!msg) {
    return;
  }
  // msg_type
  // res_type
  // cmd_type
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // suid
  // ssize
  // hsize
  // time
  // save_time
  // dssm_msg_len
}

bool
ssm_node__msg__SsmMessage__are_equal(const ssm_node__msg__SsmMessage * lhs, const ssm_node__msg__SsmMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msg_type
  if (lhs->msg_type != rhs->msg_type) {
    return false;
  }
  // res_type
  if (lhs->res_type != rhs->res_type) {
    return false;
  }
  // cmd_type
  if (lhs->cmd_type != rhs->cmd_type) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // suid
  if (lhs->suid != rhs->suid) {
    return false;
  }
  // ssize
  if (lhs->ssize != rhs->ssize) {
    return false;
  }
  // hsize
  if (lhs->hsize != rhs->hsize) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // save_time
  if (lhs->save_time != rhs->save_time) {
    return false;
  }
  // dssm_msg_len
  if (lhs->dssm_msg_len != rhs->dssm_msg_len) {
    return false;
  }
  return true;
}

bool
ssm_node__msg__SsmMessage__copy(
  const ssm_node__msg__SsmMessage * input,
  ssm_node__msg__SsmMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // msg_type
  output->msg_type = input->msg_type;
  // res_type
  output->res_type = input->res_type;
  // cmd_type
  output->cmd_type = input->cmd_type;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // suid
  output->suid = input->suid;
  // ssize
  output->ssize = input->ssize;
  // hsize
  output->hsize = input->hsize;
  // time
  output->time = input->time;
  // save_time
  output->save_time = input->save_time;
  // dssm_msg_len
  output->dssm_msg_len = input->dssm_msg_len;
  return true;
}

ssm_node__msg__SsmMessage *
ssm_node__msg__SsmMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ssm_node__msg__SsmMessage * msg = (ssm_node__msg__SsmMessage *)allocator.allocate(sizeof(ssm_node__msg__SsmMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ssm_node__msg__SsmMessage));
  bool success = ssm_node__msg__SsmMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ssm_node__msg__SsmMessage__destroy(ssm_node__msg__SsmMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ssm_node__msg__SsmMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ssm_node__msg__SsmMessage__Sequence__init(ssm_node__msg__SsmMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ssm_node__msg__SsmMessage * data = NULL;

  if (size) {
    data = (ssm_node__msg__SsmMessage *)allocator.zero_allocate(size, sizeof(ssm_node__msg__SsmMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ssm_node__msg__SsmMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ssm_node__msg__SsmMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ssm_node__msg__SsmMessage__Sequence__fini(ssm_node__msg__SsmMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ssm_node__msg__SsmMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ssm_node__msg__SsmMessage__Sequence *
ssm_node__msg__SsmMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ssm_node__msg__SsmMessage__Sequence * array = (ssm_node__msg__SsmMessage__Sequence *)allocator.allocate(sizeof(ssm_node__msg__SsmMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ssm_node__msg__SsmMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ssm_node__msg__SsmMessage__Sequence__destroy(ssm_node__msg__SsmMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ssm_node__msg__SsmMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ssm_node__msg__SsmMessage__Sequence__are_equal(const ssm_node__msg__SsmMessage__Sequence * lhs, const ssm_node__msg__SsmMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ssm_node__msg__SsmMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ssm_node__msg__SsmMessage__Sequence__copy(
  const ssm_node__msg__SsmMessage__Sequence * input,
  ssm_node__msg__SsmMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ssm_node__msg__SsmMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ssm_node__msg__SsmMessage * data =
      (ssm_node__msg__SsmMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ssm_node__msg__SsmMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ssm_node__msg__SsmMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ssm_node__msg__SsmMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
