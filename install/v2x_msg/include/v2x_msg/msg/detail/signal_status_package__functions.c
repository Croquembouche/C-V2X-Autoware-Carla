// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/signal_status_package__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `requester`
#include "v2x_msg/msg/detail/signal_requester_info__functions.h"
// Member `inboundon`
// Member `outboundon`
#include "v2x_msg/msg/detail/intersection_access_point__functions.h"

bool
v2x_msg__msg__SignalStatusPackage__init(v2x_msg__msg__SignalStatusPackage * msg)
{
  if (!msg) {
    return false;
  }
  // requester
  if (!v2x_msg__msg__SignalRequesterInfo__init(&msg->requester)) {
    v2x_msg__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // inboundon
  if (!v2x_msg__msg__IntersectionAccessPoint__init(&msg->inboundon)) {
    v2x_msg__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // outboundon
  if (!v2x_msg__msg__IntersectionAccessPoint__init(&msg->outboundon)) {
    v2x_msg__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // minute
  // second
  // duration
  // status
  return true;
}

void
v2x_msg__msg__SignalStatusPackage__fini(v2x_msg__msg__SignalStatusPackage * msg)
{
  if (!msg) {
    return;
  }
  // requester
  v2x_msg__msg__SignalRequesterInfo__fini(&msg->requester);
  // inboundon
  v2x_msg__msg__IntersectionAccessPoint__fini(&msg->inboundon);
  // outboundon
  v2x_msg__msg__IntersectionAccessPoint__fini(&msg->outboundon);
  // minute
  // second
  // duration
  // status
}

bool
v2x_msg__msg__SignalStatusPackage__are_equal(const v2x_msg__msg__SignalStatusPackage * lhs, const v2x_msg__msg__SignalStatusPackage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // requester
  if (!v2x_msg__msg__SignalRequesterInfo__are_equal(
      &(lhs->requester), &(rhs->requester)))
  {
    return false;
  }
  // inboundon
  if (!v2x_msg__msg__IntersectionAccessPoint__are_equal(
      &(lhs->inboundon), &(rhs->inboundon)))
  {
    return false;
  }
  // outboundon
  if (!v2x_msg__msg__IntersectionAccessPoint__are_equal(
      &(lhs->outboundon), &(rhs->outboundon)))
  {
    return false;
  }
  // minute
  if (lhs->minute != rhs->minute) {
    return false;
  }
  // second
  if (lhs->second != rhs->second) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__SignalStatusPackage__copy(
  const v2x_msg__msg__SignalStatusPackage * input,
  v2x_msg__msg__SignalStatusPackage * output)
{
  if (!input || !output) {
    return false;
  }
  // requester
  if (!v2x_msg__msg__SignalRequesterInfo__copy(
      &(input->requester), &(output->requester)))
  {
    return false;
  }
  // inboundon
  if (!v2x_msg__msg__IntersectionAccessPoint__copy(
      &(input->inboundon), &(output->inboundon)))
  {
    return false;
  }
  // outboundon
  if (!v2x_msg__msg__IntersectionAccessPoint__copy(
      &(input->outboundon), &(output->outboundon)))
  {
    return false;
  }
  // minute
  output->minute = input->minute;
  // second
  output->second = input->second;
  // duration
  output->duration = input->duration;
  // status
  output->status = input->status;
  return true;
}

v2x_msg__msg__SignalStatusPackage *
v2x_msg__msg__SignalStatusPackage__create()
{
  v2x_msg__msg__SignalStatusPackage * msg = (v2x_msg__msg__SignalStatusPackage *)malloc(sizeof(v2x_msg__msg__SignalStatusPackage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__SignalStatusPackage));
  bool success = v2x_msg__msg__SignalStatusPackage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__SignalStatusPackage__destroy(v2x_msg__msg__SignalStatusPackage * msg)
{
  if (msg) {
    v2x_msg__msg__SignalStatusPackage__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__SignalStatusPackage__Sequence__init(v2x_msg__msg__SignalStatusPackage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__SignalStatusPackage * data = NULL;
  if (size) {
    data = (v2x_msg__msg__SignalStatusPackage *)calloc(size, sizeof(v2x_msg__msg__SignalStatusPackage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__SignalStatusPackage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__SignalStatusPackage__fini(&data[i - 1]);
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
v2x_msg__msg__SignalStatusPackage__Sequence__fini(v2x_msg__msg__SignalStatusPackage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__SignalStatusPackage__fini(&array->data[i]);
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

v2x_msg__msg__SignalStatusPackage__Sequence *
v2x_msg__msg__SignalStatusPackage__Sequence__create(size_t size)
{
  v2x_msg__msg__SignalStatusPackage__Sequence * array = (v2x_msg__msg__SignalStatusPackage__Sequence *)malloc(sizeof(v2x_msg__msg__SignalStatusPackage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__SignalStatusPackage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__SignalStatusPackage__Sequence__destroy(v2x_msg__msg__SignalStatusPackage__Sequence * array)
{
  if (array) {
    v2x_msg__msg__SignalStatusPackage__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__SignalStatusPackage__Sequence__are_equal(const v2x_msg__msg__SignalStatusPackage__Sequence * lhs, const v2x_msg__msg__SignalStatusPackage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__SignalStatusPackage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__SignalStatusPackage__Sequence__copy(
  const v2x_msg__msg__SignalStatusPackage__Sequence * input,
  v2x_msg__msg__SignalStatusPackage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__SignalStatusPackage);
    v2x_msg__msg__SignalStatusPackage * data =
      (v2x_msg__msg__SignalStatusPackage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__SignalStatusPackage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__SignalStatusPackage__fini(&data[i]);
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
    if (!v2x_msg__msg__SignalStatusPackage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
