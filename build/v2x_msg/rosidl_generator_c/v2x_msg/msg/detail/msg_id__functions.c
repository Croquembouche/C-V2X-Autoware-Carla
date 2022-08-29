// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/MsgID.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/msg_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `furtherinfoid`
#include "rosidl_runtime_c/string_functions.h"
// Member `roadsignid`
#include "v2x_msg/msg/detail/road_sign_id__functions.h"

bool
v2x_msg__msg__MsgID__init(v2x_msg__msg__MsgID * msg)
{
  if (!msg) {
    return false;
  }
  // furtherinfoid
  if (!rosidl_runtime_c__String__init(&msg->furtherinfoid)) {
    v2x_msg__msg__MsgID__fini(msg);
    return false;
  }
  // roadsignid
  if (!v2x_msg__msg__RoadSignID__init(&msg->roadsignid)) {
    v2x_msg__msg__MsgID__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__MsgID__fini(v2x_msg__msg__MsgID * msg)
{
  if (!msg) {
    return;
  }
  // furtherinfoid
  rosidl_runtime_c__String__fini(&msg->furtherinfoid);
  // roadsignid
  v2x_msg__msg__RoadSignID__fini(&msg->roadsignid);
}

bool
v2x_msg__msg__MsgID__are_equal(const v2x_msg__msg__MsgID * lhs, const v2x_msg__msg__MsgID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // furtherinfoid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->furtherinfoid), &(rhs->furtherinfoid)))
  {
    return false;
  }
  // roadsignid
  if (!v2x_msg__msg__RoadSignID__are_equal(
      &(lhs->roadsignid), &(rhs->roadsignid)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__MsgID__copy(
  const v2x_msg__msg__MsgID * input,
  v2x_msg__msg__MsgID * output)
{
  if (!input || !output) {
    return false;
  }
  // furtherinfoid
  if (!rosidl_runtime_c__String__copy(
      &(input->furtherinfoid), &(output->furtherinfoid)))
  {
    return false;
  }
  // roadsignid
  if (!v2x_msg__msg__RoadSignID__copy(
      &(input->roadsignid), &(output->roadsignid)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__MsgID *
v2x_msg__msg__MsgID__create()
{
  v2x_msg__msg__MsgID * msg = (v2x_msg__msg__MsgID *)malloc(sizeof(v2x_msg__msg__MsgID));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__MsgID));
  bool success = v2x_msg__msg__MsgID__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__MsgID__destroy(v2x_msg__msg__MsgID * msg)
{
  if (msg) {
    v2x_msg__msg__MsgID__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__MsgID__Sequence__init(v2x_msg__msg__MsgID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__MsgID * data = NULL;
  if (size) {
    data = (v2x_msg__msg__MsgID *)calloc(size, sizeof(v2x_msg__msg__MsgID));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__MsgID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__MsgID__fini(&data[i - 1]);
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
v2x_msg__msg__MsgID__Sequence__fini(v2x_msg__msg__MsgID__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__MsgID__fini(&array->data[i]);
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

v2x_msg__msg__MsgID__Sequence *
v2x_msg__msg__MsgID__Sequence__create(size_t size)
{
  v2x_msg__msg__MsgID__Sequence * array = (v2x_msg__msg__MsgID__Sequence *)malloc(sizeof(v2x_msg__msg__MsgID__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__MsgID__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__MsgID__Sequence__destroy(v2x_msg__msg__MsgID__Sequence * array)
{
  if (array) {
    v2x_msg__msg__MsgID__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__MsgID__Sequence__are_equal(const v2x_msg__msg__MsgID__Sequence * lhs, const v2x_msg__msg__MsgID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__MsgID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__MsgID__Sequence__copy(
  const v2x_msg__msg__MsgID__Sequence * input,
  v2x_msg__msg__MsgID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__MsgID);
    v2x_msg__msg__MsgID * data =
      (v2x_msg__msg__MsgID *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__MsgID__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__MsgID__fini(&data[i]);
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
    if (!v2x_msg__msg__MsgID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
