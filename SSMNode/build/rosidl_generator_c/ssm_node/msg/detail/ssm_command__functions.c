// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ssm_node:msg/SsmCommand.idl
// generated code does not contain a copyright notice
#include "ssm_node/msg/detail/ssm_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
ssm_node__msg__SsmCommand__init(ssm_node__msg__SsmCommand * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ssm_node__msg__SsmCommand__fini(msg);
    return false;
  }
  // age
  return true;
}

void
ssm_node__msg__SsmCommand__fini(ssm_node__msg__SsmCommand * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // age
}

bool
ssm_node__msg__SsmCommand__are_equal(const ssm_node__msg__SsmCommand * lhs, const ssm_node__msg__SsmCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  return true;
}

bool
ssm_node__msg__SsmCommand__copy(
  const ssm_node__msg__SsmCommand * input,
  ssm_node__msg__SsmCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // age
  output->age = input->age;
  return true;
}

ssm_node__msg__SsmCommand *
ssm_node__msg__SsmCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ssm_node__msg__SsmCommand * msg = (ssm_node__msg__SsmCommand *)allocator.allocate(sizeof(ssm_node__msg__SsmCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ssm_node__msg__SsmCommand));
  bool success = ssm_node__msg__SsmCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ssm_node__msg__SsmCommand__destroy(ssm_node__msg__SsmCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ssm_node__msg__SsmCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ssm_node__msg__SsmCommand__Sequence__init(ssm_node__msg__SsmCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ssm_node__msg__SsmCommand * data = NULL;

  if (size) {
    data = (ssm_node__msg__SsmCommand *)allocator.zero_allocate(size, sizeof(ssm_node__msg__SsmCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ssm_node__msg__SsmCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ssm_node__msg__SsmCommand__fini(&data[i - 1]);
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
ssm_node__msg__SsmCommand__Sequence__fini(ssm_node__msg__SsmCommand__Sequence * array)
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
      ssm_node__msg__SsmCommand__fini(&array->data[i]);
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

ssm_node__msg__SsmCommand__Sequence *
ssm_node__msg__SsmCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ssm_node__msg__SsmCommand__Sequence * array = (ssm_node__msg__SsmCommand__Sequence *)allocator.allocate(sizeof(ssm_node__msg__SsmCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ssm_node__msg__SsmCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ssm_node__msg__SsmCommand__Sequence__destroy(ssm_node__msg__SsmCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ssm_node__msg__SsmCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ssm_node__msg__SsmCommand__Sequence__are_equal(const ssm_node__msg__SsmCommand__Sequence * lhs, const ssm_node__msg__SsmCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ssm_node__msg__SsmCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ssm_node__msg__SsmCommand__Sequence__copy(
  const ssm_node__msg__SsmCommand__Sequence * input,
  ssm_node__msg__SsmCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ssm_node__msg__SsmCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ssm_node__msg__SsmCommand * data =
      (ssm_node__msg__SsmCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ssm_node__msg__SsmCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ssm_node__msg__SsmCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ssm_node__msg__SsmCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
