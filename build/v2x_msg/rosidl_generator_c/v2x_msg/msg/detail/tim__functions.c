// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/TIM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/tim__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `urlb`
#include "rosidl_runtime_c/string_functions.h"
// Member `dataframes`
#include "v2x_msg/msg/detail/traveler_data_frame__functions.h"

bool
v2x_msg__msg__TIM__init(v2x_msg__msg__TIM * msg)
{
  if (!msg) {
    return false;
  }
  // msgcnt
  // timestamp
  // packetid
  // urlb
  if (!rosidl_runtime_c__String__init(&msg->urlb)) {
    v2x_msg__msg__TIM__fini(msg);
    return false;
  }
  // dataframes
  if (!v2x_msg__msg__TravelerDataFrame__Sequence__init(&msg->dataframes, 0)) {
    v2x_msg__msg__TIM__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__TIM__fini(v2x_msg__msg__TIM * msg)
{
  if (!msg) {
    return;
  }
  // msgcnt
  // timestamp
  // packetid
  // urlb
  rosidl_runtime_c__String__fini(&msg->urlb);
  // dataframes
  v2x_msg__msg__TravelerDataFrame__Sequence__fini(&msg->dataframes);
}

bool
v2x_msg__msg__TIM__are_equal(const v2x_msg__msg__TIM * lhs, const v2x_msg__msg__TIM * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msgcnt
  if (lhs->msgcnt != rhs->msgcnt) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // packetid
  if (lhs->packetid != rhs->packetid) {
    return false;
  }
  // urlb
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->urlb), &(rhs->urlb)))
  {
    return false;
  }
  // dataframes
  if (!v2x_msg__msg__TravelerDataFrame__Sequence__are_equal(
      &(lhs->dataframes), &(rhs->dataframes)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__TIM__copy(
  const v2x_msg__msg__TIM * input,
  v2x_msg__msg__TIM * output)
{
  if (!input || !output) {
    return false;
  }
  // msgcnt
  output->msgcnt = input->msgcnt;
  // timestamp
  output->timestamp = input->timestamp;
  // packetid
  output->packetid = input->packetid;
  // urlb
  if (!rosidl_runtime_c__String__copy(
      &(input->urlb), &(output->urlb)))
  {
    return false;
  }
  // dataframes
  if (!v2x_msg__msg__TravelerDataFrame__Sequence__copy(
      &(input->dataframes), &(output->dataframes)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__TIM *
v2x_msg__msg__TIM__create()
{
  v2x_msg__msg__TIM * msg = (v2x_msg__msg__TIM *)malloc(sizeof(v2x_msg__msg__TIM));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__TIM));
  bool success = v2x_msg__msg__TIM__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__TIM__destroy(v2x_msg__msg__TIM * msg)
{
  if (msg) {
    v2x_msg__msg__TIM__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__TIM__Sequence__init(v2x_msg__msg__TIM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__TIM * data = NULL;
  if (size) {
    data = (v2x_msg__msg__TIM *)calloc(size, sizeof(v2x_msg__msg__TIM));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__TIM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__TIM__fini(&data[i - 1]);
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
v2x_msg__msg__TIM__Sequence__fini(v2x_msg__msg__TIM__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__TIM__fini(&array->data[i]);
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

v2x_msg__msg__TIM__Sequence *
v2x_msg__msg__TIM__Sequence__create(size_t size)
{
  v2x_msg__msg__TIM__Sequence * array = (v2x_msg__msg__TIM__Sequence *)malloc(sizeof(v2x_msg__msg__TIM__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__TIM__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__TIM__Sequence__destroy(v2x_msg__msg__TIM__Sequence * array)
{
  if (array) {
    v2x_msg__msg__TIM__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__TIM__Sequence__are_equal(const v2x_msg__msg__TIM__Sequence * lhs, const v2x_msg__msg__TIM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__TIM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__TIM__Sequence__copy(
  const v2x_msg__msg__TIM__Sequence * input,
  v2x_msg__msg__TIM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__TIM);
    v2x_msg__msg__TIM * data =
      (v2x_msg__msg__TIM *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__TIM__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__TIM__fini(&data[i]);
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
    if (!v2x_msg__msg__TIM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
