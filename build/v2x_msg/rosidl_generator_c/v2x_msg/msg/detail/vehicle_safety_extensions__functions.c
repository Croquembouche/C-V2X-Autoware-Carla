// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/vehicle_safety_extensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `vehicleeventflags`
// Member `texteriorlights`
#include "rosidl_runtime_c/string_functions.h"
// Member `pathhistory`
#include "v2x_msg/msg/detail/path_history__functions.h"
// Member `pathprediction`
#include "v2x_msg/msg/detail/path_prediction__functions.h"

bool
v2x_msg__msg__VehicleSafetyExtensions__init(v2x_msg__msg__VehicleSafetyExtensions * msg)
{
  if (!msg) {
    return false;
  }
  // vehicleeventflags
  if (!rosidl_runtime_c__String__init(&msg->vehicleeventflags)) {
    v2x_msg__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // pathhistory
  if (!v2x_msg__msg__PathHistory__init(&msg->pathhistory)) {
    v2x_msg__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__init(&msg->pathprediction)) {
    v2x_msg__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // texteriorlights
  if (!rosidl_runtime_c__String__init(&msg->texteriorlights)) {
    v2x_msg__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__VehicleSafetyExtensions__fini(v2x_msg__msg__VehicleSafetyExtensions * msg)
{
  if (!msg) {
    return;
  }
  // vehicleeventflags
  rosidl_runtime_c__String__fini(&msg->vehicleeventflags);
  // pathhistory
  v2x_msg__msg__PathHistory__fini(&msg->pathhistory);
  // pathprediction
  v2x_msg__msg__PathPrediction__fini(&msg->pathprediction);
  // texteriorlights
  rosidl_runtime_c__String__fini(&msg->texteriorlights);
}

bool
v2x_msg__msg__VehicleSafetyExtensions__are_equal(const v2x_msg__msg__VehicleSafetyExtensions * lhs, const v2x_msg__msg__VehicleSafetyExtensions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicleeventflags
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vehicleeventflags), &(rhs->vehicleeventflags)))
  {
    return false;
  }
  // pathhistory
  if (!v2x_msg__msg__PathHistory__are_equal(
      &(lhs->pathhistory), &(rhs->pathhistory)))
  {
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__are_equal(
      &(lhs->pathprediction), &(rhs->pathprediction)))
  {
    return false;
  }
  // texteriorlights
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->texteriorlights), &(rhs->texteriorlights)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__VehicleSafetyExtensions__copy(
  const v2x_msg__msg__VehicleSafetyExtensions * input,
  v2x_msg__msg__VehicleSafetyExtensions * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicleeventflags
  if (!rosidl_runtime_c__String__copy(
      &(input->vehicleeventflags), &(output->vehicleeventflags)))
  {
    return false;
  }
  // pathhistory
  if (!v2x_msg__msg__PathHistory__copy(
      &(input->pathhistory), &(output->pathhistory)))
  {
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__copy(
      &(input->pathprediction), &(output->pathprediction)))
  {
    return false;
  }
  // texteriorlights
  if (!rosidl_runtime_c__String__copy(
      &(input->texteriorlights), &(output->texteriorlights)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__VehicleSafetyExtensions *
v2x_msg__msg__VehicleSafetyExtensions__create()
{
  v2x_msg__msg__VehicleSafetyExtensions * msg = (v2x_msg__msg__VehicleSafetyExtensions *)malloc(sizeof(v2x_msg__msg__VehicleSafetyExtensions));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__VehicleSafetyExtensions));
  bool success = v2x_msg__msg__VehicleSafetyExtensions__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__VehicleSafetyExtensions__destroy(v2x_msg__msg__VehicleSafetyExtensions * msg)
{
  if (msg) {
    v2x_msg__msg__VehicleSafetyExtensions__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__VehicleSafetyExtensions__Sequence__init(v2x_msg__msg__VehicleSafetyExtensions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__VehicleSafetyExtensions * data = NULL;
  if (size) {
    data = (v2x_msg__msg__VehicleSafetyExtensions *)calloc(size, sizeof(v2x_msg__msg__VehicleSafetyExtensions));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__VehicleSafetyExtensions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__VehicleSafetyExtensions__fini(&data[i - 1]);
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
v2x_msg__msg__VehicleSafetyExtensions__Sequence__fini(v2x_msg__msg__VehicleSafetyExtensions__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__VehicleSafetyExtensions__fini(&array->data[i]);
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

v2x_msg__msg__VehicleSafetyExtensions__Sequence *
v2x_msg__msg__VehicleSafetyExtensions__Sequence__create(size_t size)
{
  v2x_msg__msg__VehicleSafetyExtensions__Sequence * array = (v2x_msg__msg__VehicleSafetyExtensions__Sequence *)malloc(sizeof(v2x_msg__msg__VehicleSafetyExtensions__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__VehicleSafetyExtensions__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__VehicleSafetyExtensions__Sequence__destroy(v2x_msg__msg__VehicleSafetyExtensions__Sequence * array)
{
  if (array) {
    v2x_msg__msg__VehicleSafetyExtensions__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__VehicleSafetyExtensions__Sequence__are_equal(const v2x_msg__msg__VehicleSafetyExtensions__Sequence * lhs, const v2x_msg__msg__VehicleSafetyExtensions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__VehicleSafetyExtensions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__VehicleSafetyExtensions__Sequence__copy(
  const v2x_msg__msg__VehicleSafetyExtensions__Sequence * input,
  v2x_msg__msg__VehicleSafetyExtensions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__VehicleSafetyExtensions);
    v2x_msg__msg__VehicleSafetyExtensions * data =
      (v2x_msg__msg__VehicleSafetyExtensions *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__VehicleSafetyExtensions__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__VehicleSafetyExtensions__fini(&data[i]);
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
    if (!v2x_msg__msg__VehicleSafetyExtensions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
