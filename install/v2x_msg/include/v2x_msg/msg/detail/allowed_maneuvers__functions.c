// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/allowed_maneuvers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__AllowedManeuvers__init(v2x_msg__msg__AllowedManeuvers * msg)
{
  if (!msg) {
    return false;
  }
  // maneuverstraightallowed
  // maneuverleftallowed
  // maneuverrightallowed
  // maneuveruturnallowed
  // maneuverleftturnonredallowed
  // maneverrightturnonredallowed
  // maneuverlanechangeallowed
  // maneuvernostoppingallowed
  // yieldallwaysrequired
  // gowithhalt
  // caution
  // reserved1
  return true;
}

void
v2x_msg__msg__AllowedManeuvers__fini(v2x_msg__msg__AllowedManeuvers * msg)
{
  if (!msg) {
    return;
  }
  // maneuverstraightallowed
  // maneuverleftallowed
  // maneuverrightallowed
  // maneuveruturnallowed
  // maneuverleftturnonredallowed
  // maneverrightturnonredallowed
  // maneuverlanechangeallowed
  // maneuvernostoppingallowed
  // yieldallwaysrequired
  // gowithhalt
  // caution
  // reserved1
}

bool
v2x_msg__msg__AllowedManeuvers__are_equal(const v2x_msg__msg__AllowedManeuvers * lhs, const v2x_msg__msg__AllowedManeuvers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // maneuverstraightallowed
  if (lhs->maneuverstraightallowed != rhs->maneuverstraightallowed) {
    return false;
  }
  // maneuverleftallowed
  if (lhs->maneuverleftallowed != rhs->maneuverleftallowed) {
    return false;
  }
  // maneuverrightallowed
  if (lhs->maneuverrightallowed != rhs->maneuverrightallowed) {
    return false;
  }
  // maneuveruturnallowed
  if (lhs->maneuveruturnallowed != rhs->maneuveruturnallowed) {
    return false;
  }
  // maneuverleftturnonredallowed
  if (lhs->maneuverleftturnonredallowed != rhs->maneuverleftturnonredallowed) {
    return false;
  }
  // maneverrightturnonredallowed
  if (lhs->maneverrightturnonredallowed != rhs->maneverrightturnonredallowed) {
    return false;
  }
  // maneuverlanechangeallowed
  if (lhs->maneuverlanechangeallowed != rhs->maneuverlanechangeallowed) {
    return false;
  }
  // maneuvernostoppingallowed
  if (lhs->maneuvernostoppingallowed != rhs->maneuvernostoppingallowed) {
    return false;
  }
  // yieldallwaysrequired
  if (lhs->yieldallwaysrequired != rhs->yieldallwaysrequired) {
    return false;
  }
  // gowithhalt
  if (lhs->gowithhalt != rhs->gowithhalt) {
    return false;
  }
  // caution
  if (lhs->caution != rhs->caution) {
    return false;
  }
  // reserved1
  if (lhs->reserved1 != rhs->reserved1) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__AllowedManeuvers__copy(
  const v2x_msg__msg__AllowedManeuvers * input,
  v2x_msg__msg__AllowedManeuvers * output)
{
  if (!input || !output) {
    return false;
  }
  // maneuverstraightallowed
  output->maneuverstraightallowed = input->maneuverstraightallowed;
  // maneuverleftallowed
  output->maneuverleftallowed = input->maneuverleftallowed;
  // maneuverrightallowed
  output->maneuverrightallowed = input->maneuverrightallowed;
  // maneuveruturnallowed
  output->maneuveruturnallowed = input->maneuveruturnallowed;
  // maneuverleftturnonredallowed
  output->maneuverleftturnonredallowed = input->maneuverleftturnonredallowed;
  // maneverrightturnonredallowed
  output->maneverrightturnonredallowed = input->maneverrightturnonredallowed;
  // maneuverlanechangeallowed
  output->maneuverlanechangeallowed = input->maneuverlanechangeallowed;
  // maneuvernostoppingallowed
  output->maneuvernostoppingallowed = input->maneuvernostoppingallowed;
  // yieldallwaysrequired
  output->yieldallwaysrequired = input->yieldallwaysrequired;
  // gowithhalt
  output->gowithhalt = input->gowithhalt;
  // caution
  output->caution = input->caution;
  // reserved1
  output->reserved1 = input->reserved1;
  return true;
}

v2x_msg__msg__AllowedManeuvers *
v2x_msg__msg__AllowedManeuvers__create()
{
  v2x_msg__msg__AllowedManeuvers * msg = (v2x_msg__msg__AllowedManeuvers *)malloc(sizeof(v2x_msg__msg__AllowedManeuvers));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__AllowedManeuvers));
  bool success = v2x_msg__msg__AllowedManeuvers__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__AllowedManeuvers__destroy(v2x_msg__msg__AllowedManeuvers * msg)
{
  if (msg) {
    v2x_msg__msg__AllowedManeuvers__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__AllowedManeuvers__Sequence__init(v2x_msg__msg__AllowedManeuvers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__AllowedManeuvers * data = NULL;
  if (size) {
    data = (v2x_msg__msg__AllowedManeuvers *)calloc(size, sizeof(v2x_msg__msg__AllowedManeuvers));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__AllowedManeuvers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__AllowedManeuvers__fini(&data[i - 1]);
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
v2x_msg__msg__AllowedManeuvers__Sequence__fini(v2x_msg__msg__AllowedManeuvers__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__AllowedManeuvers__fini(&array->data[i]);
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

v2x_msg__msg__AllowedManeuvers__Sequence *
v2x_msg__msg__AllowedManeuvers__Sequence__create(size_t size)
{
  v2x_msg__msg__AllowedManeuvers__Sequence * array = (v2x_msg__msg__AllowedManeuvers__Sequence *)malloc(sizeof(v2x_msg__msg__AllowedManeuvers__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__AllowedManeuvers__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__AllowedManeuvers__Sequence__destroy(v2x_msg__msg__AllowedManeuvers__Sequence * array)
{
  if (array) {
    v2x_msg__msg__AllowedManeuvers__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__AllowedManeuvers__Sequence__are_equal(const v2x_msg__msg__AllowedManeuvers__Sequence * lhs, const v2x_msg__msg__AllowedManeuvers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__AllowedManeuvers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__AllowedManeuvers__Sequence__copy(
  const v2x_msg__msg__AllowedManeuvers__Sequence * input,
  v2x_msg__msg__AllowedManeuvers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__AllowedManeuvers);
    v2x_msg__msg__AllowedManeuvers * data =
      (v2x_msg__msg__AllowedManeuvers *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__AllowedManeuvers__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__AllowedManeuvers__fini(&data[i]);
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
    if (!v2x_msg__msg__AllowedManeuvers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
