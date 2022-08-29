// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/OffsetSystem.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/offset_system__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `offset`
#include "v2x_msg/msg/detail/offset__functions.h"

bool
v2x_msg__msg__OffsetSystem__init(v2x_msg__msg__OffsetSystem * msg)
{
  if (!msg) {
    return false;
  }
  // scale
  // offset
  if (!v2x_msg__msg__Offset__init(&msg->offset)) {
    v2x_msg__msg__OffsetSystem__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__OffsetSystem__fini(v2x_msg__msg__OffsetSystem * msg)
{
  if (!msg) {
    return;
  }
  // scale
  // offset
  v2x_msg__msg__Offset__fini(&msg->offset);
}

bool
v2x_msg__msg__OffsetSystem__are_equal(const v2x_msg__msg__OffsetSystem * lhs, const v2x_msg__msg__OffsetSystem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scale
  if (lhs->scale != rhs->scale) {
    return false;
  }
  // offset
  if (!v2x_msg__msg__Offset__are_equal(
      &(lhs->offset), &(rhs->offset)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__OffsetSystem__copy(
  const v2x_msg__msg__OffsetSystem * input,
  v2x_msg__msg__OffsetSystem * output)
{
  if (!input || !output) {
    return false;
  }
  // scale
  output->scale = input->scale;
  // offset
  if (!v2x_msg__msg__Offset__copy(
      &(input->offset), &(output->offset)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__OffsetSystem *
v2x_msg__msg__OffsetSystem__create()
{
  v2x_msg__msg__OffsetSystem * msg = (v2x_msg__msg__OffsetSystem *)malloc(sizeof(v2x_msg__msg__OffsetSystem));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__OffsetSystem));
  bool success = v2x_msg__msg__OffsetSystem__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__OffsetSystem__destroy(v2x_msg__msg__OffsetSystem * msg)
{
  if (msg) {
    v2x_msg__msg__OffsetSystem__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__OffsetSystem__Sequence__init(v2x_msg__msg__OffsetSystem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__OffsetSystem * data = NULL;
  if (size) {
    data = (v2x_msg__msg__OffsetSystem *)calloc(size, sizeof(v2x_msg__msg__OffsetSystem));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__OffsetSystem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__OffsetSystem__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_msg__msg__OffsetSystem__Sequence__fini(v2x_msg__msg__OffsetSystem__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__OffsetSystem__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_msg__msg__OffsetSystem__Sequence *
v2x_msg__msg__OffsetSystem__Sequence__create(size_t size)
{
  v2x_msg__msg__OffsetSystem__Sequence * array = (v2x_msg__msg__OffsetSystem__Sequence *)malloc(sizeof(v2x_msg__msg__OffsetSystem__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__OffsetSystem__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__OffsetSystem__Sequence__destroy(v2x_msg__msg__OffsetSystem__Sequence * array)
{
  if (array) {
    v2x_msg__msg__OffsetSystem__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__OffsetSystem__Sequence__are_equal(const v2x_msg__msg__OffsetSystem__Sequence * lhs, const v2x_msg__msg__OffsetSystem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__OffsetSystem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__OffsetSystem__Sequence__copy(
  const v2x_msg__msg__OffsetSystem__Sequence * input,
  v2x_msg__msg__OffsetSystem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__OffsetSystem);
    v2x_msg__msg__OffsetSystem * data =
      (v2x_msg__msg__OffsetSystem *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__OffsetSystem__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__OffsetSystem__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__OffsetSystem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
