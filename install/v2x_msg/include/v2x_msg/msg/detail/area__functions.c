// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/Area.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/area__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `shapepointset`
#include "v2x_msg/msg/detail/shape_point_set__functions.h"
// Member `cirle`
#include "v2x_msg/msg/detail/circle__functions.h"
// Member `regionpointset`
#include "v2x_msg/msg/detail/region_point_set__functions.h"

bool
v2x_msg__msg__Area__init(v2x_msg__msg__Area * msg)
{
  if (!msg) {
    return false;
  }
  // shapepointset
  if (!v2x_msg__msg__ShapePointSet__init(&msg->shapepointset)) {
    v2x_msg__msg__Area__fini(msg);
    return false;
  }
  // cirle
  if (!v2x_msg__msg__Circle__init(&msg->cirle)) {
    v2x_msg__msg__Area__fini(msg);
    return false;
  }
  // regionpointset
  if (!v2x_msg__msg__RegionPointSet__init(&msg->regionpointset)) {
    v2x_msg__msg__Area__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__Area__fini(v2x_msg__msg__Area * msg)
{
  if (!msg) {
    return;
  }
  // shapepointset
  v2x_msg__msg__ShapePointSet__fini(&msg->shapepointset);
  // cirle
  v2x_msg__msg__Circle__fini(&msg->cirle);
  // regionpointset
  v2x_msg__msg__RegionPointSet__fini(&msg->regionpointset);
}

bool
v2x_msg__msg__Area__are_equal(const v2x_msg__msg__Area * lhs, const v2x_msg__msg__Area * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // shapepointset
  if (!v2x_msg__msg__ShapePointSet__are_equal(
      &(lhs->shapepointset), &(rhs->shapepointset)))
  {
    return false;
  }
  // cirle
  if (!v2x_msg__msg__Circle__are_equal(
      &(lhs->cirle), &(rhs->cirle)))
  {
    return false;
  }
  // regionpointset
  if (!v2x_msg__msg__RegionPointSet__are_equal(
      &(lhs->regionpointset), &(rhs->regionpointset)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__Area__copy(
  const v2x_msg__msg__Area * input,
  v2x_msg__msg__Area * output)
{
  if (!input || !output) {
    return false;
  }
  // shapepointset
  if (!v2x_msg__msg__ShapePointSet__copy(
      &(input->shapepointset), &(output->shapepointset)))
  {
    return false;
  }
  // cirle
  if (!v2x_msg__msg__Circle__copy(
      &(input->cirle), &(output->cirle)))
  {
    return false;
  }
  // regionpointset
  if (!v2x_msg__msg__RegionPointSet__copy(
      &(input->regionpointset), &(output->regionpointset)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__Area *
v2x_msg__msg__Area__create()
{
  v2x_msg__msg__Area * msg = (v2x_msg__msg__Area *)malloc(sizeof(v2x_msg__msg__Area));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__Area));
  bool success = v2x_msg__msg__Area__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__Area__destroy(v2x_msg__msg__Area * msg)
{
  if (msg) {
    v2x_msg__msg__Area__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__Area__Sequence__init(v2x_msg__msg__Area__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__Area * data = NULL;
  if (size) {
    data = (v2x_msg__msg__Area *)calloc(size, sizeof(v2x_msg__msg__Area));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__Area__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__Area__fini(&data[i - 1]);
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
v2x_msg__msg__Area__Sequence__fini(v2x_msg__msg__Area__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__Area__fini(&array->data[i]);
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

v2x_msg__msg__Area__Sequence *
v2x_msg__msg__Area__Sequence__create(size_t size)
{
  v2x_msg__msg__Area__Sequence * array = (v2x_msg__msg__Area__Sequence *)malloc(sizeof(v2x_msg__msg__Area__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__Area__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__Area__Sequence__destroy(v2x_msg__msg__Area__Sequence * array)
{
  if (array) {
    v2x_msg__msg__Area__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__Area__Sequence__are_equal(const v2x_msg__msg__Area__Sequence * lhs, const v2x_msg__msg__Area__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__Area__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__Area__Sequence__copy(
  const v2x_msg__msg__Area__Sequence * input,
  v2x_msg__msg__Area__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__Area);
    v2x_msg__msg__Area * data =
      (v2x_msg__msg__Area *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__Area__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__Area__fini(&data[i]);
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
    if (!v2x_msg__msg__Area__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
