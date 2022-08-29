// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/EVA.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/eva__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `rsamsg`
#include "v2x_msg/msg/detail/rsa__functions.h"
// Member `details`
#include "v2x_msg/msg/detail/emergency_details__functions.h"

bool
v2x_msg__msg__EVA__init(v2x_msg__msg__EVA * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    v2x_msg__msg__EVA__fini(msg);
    return false;
  }
  // rsamsg
  if (!v2x_msg__msg__RSA__init(&msg->rsamsg)) {
    v2x_msg__msg__EVA__fini(msg);
    return false;
  }
  // responsetype
  // details
  if (!v2x_msg__msg__EmergencyDetails__init(&msg->details)) {
    v2x_msg__msg__EVA__fini(msg);
    return false;
  }
  // mass
  // basictype
  // vehicletype
  // responseequip
  // respondertype
  return true;
}

void
v2x_msg__msg__EVA__fini(v2x_msg__msg__EVA * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // rsamsg
  v2x_msg__msg__RSA__fini(&msg->rsamsg);
  // responsetype
  // details
  v2x_msg__msg__EmergencyDetails__fini(&msg->details);
  // mass
  // basictype
  // vehicletype
  // responseequip
  // respondertype
}

bool
v2x_msg__msg__EVA__are_equal(const v2x_msg__msg__EVA * lhs, const v2x_msg__msg__EVA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // rsamsg
  if (!v2x_msg__msg__RSA__are_equal(
      &(lhs->rsamsg), &(rhs->rsamsg)))
  {
    return false;
  }
  // responsetype
  if (lhs->responsetype != rhs->responsetype) {
    return false;
  }
  // details
  if (!v2x_msg__msg__EmergencyDetails__are_equal(
      &(lhs->details), &(rhs->details)))
  {
    return false;
  }
  // mass
  if (lhs->mass != rhs->mass) {
    return false;
  }
  // basictype
  if (lhs->basictype != rhs->basictype) {
    return false;
  }
  // vehicletype
  if (lhs->vehicletype != rhs->vehicletype) {
    return false;
  }
  // responseequip
  if (lhs->responseequip != rhs->responseequip) {
    return false;
  }
  // respondertype
  if (lhs->respondertype != rhs->respondertype) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__EVA__copy(
  const v2x_msg__msg__EVA * input,
  v2x_msg__msg__EVA * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // rsamsg
  if (!v2x_msg__msg__RSA__copy(
      &(input->rsamsg), &(output->rsamsg)))
  {
    return false;
  }
  // responsetype
  output->responsetype = input->responsetype;
  // details
  if (!v2x_msg__msg__EmergencyDetails__copy(
      &(input->details), &(output->details)))
  {
    return false;
  }
  // mass
  output->mass = input->mass;
  // basictype
  output->basictype = input->basictype;
  // vehicletype
  output->vehicletype = input->vehicletype;
  // responseequip
  output->responseequip = input->responseequip;
  // respondertype
  output->respondertype = input->respondertype;
  return true;
}

v2x_msg__msg__EVA *
v2x_msg__msg__EVA__create()
{
  v2x_msg__msg__EVA * msg = (v2x_msg__msg__EVA *)malloc(sizeof(v2x_msg__msg__EVA));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__EVA));
  bool success = v2x_msg__msg__EVA__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__EVA__destroy(v2x_msg__msg__EVA * msg)
{
  if (msg) {
    v2x_msg__msg__EVA__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__EVA__Sequence__init(v2x_msg__msg__EVA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__EVA * data = NULL;
  if (size) {
    data = (v2x_msg__msg__EVA *)calloc(size, sizeof(v2x_msg__msg__EVA));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__EVA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__EVA__fini(&data[i - 1]);
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
v2x_msg__msg__EVA__Sequence__fini(v2x_msg__msg__EVA__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__EVA__fini(&array->data[i]);
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

v2x_msg__msg__EVA__Sequence *
v2x_msg__msg__EVA__Sequence__create(size_t size)
{
  v2x_msg__msg__EVA__Sequence * array = (v2x_msg__msg__EVA__Sequence *)malloc(sizeof(v2x_msg__msg__EVA__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__EVA__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__EVA__Sequence__destroy(v2x_msg__msg__EVA__Sequence * array)
{
  if (array) {
    v2x_msg__msg__EVA__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__EVA__Sequence__are_equal(const v2x_msg__msg__EVA__Sequence * lhs, const v2x_msg__msg__EVA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__EVA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__EVA__Sequence__copy(
  const v2x_msg__msg__EVA__Sequence * input,
  v2x_msg__msg__EVA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__EVA);
    v2x_msg__msg__EVA * data =
      (v2x_msg__msg__EVA *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__EVA__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__EVA__fini(&data[i]);
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
    if (!v2x_msg__msg__EVA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
