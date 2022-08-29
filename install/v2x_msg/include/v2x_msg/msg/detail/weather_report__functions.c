// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/WeatherReport.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/weather_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__WeatherReport__init(v2x_msg__msg__WeatherReport * msg)
{
  if (!msg) {
    return false;
  }
  // israining
  // rainrate
  // precipsituation
  // solarradiation
  // friction
  return true;
}

void
v2x_msg__msg__WeatherReport__fini(v2x_msg__msg__WeatherReport * msg)
{
  if (!msg) {
    return;
  }
  // israining
  // rainrate
  // precipsituation
  // solarradiation
  // friction
}

bool
v2x_msg__msg__WeatherReport__are_equal(const v2x_msg__msg__WeatherReport * lhs, const v2x_msg__msg__WeatherReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // israining
  if (lhs->israining != rhs->israining) {
    return false;
  }
  // rainrate
  if (lhs->rainrate != rhs->rainrate) {
    return false;
  }
  // precipsituation
  if (lhs->precipsituation != rhs->precipsituation) {
    return false;
  }
  // solarradiation
  if (lhs->solarradiation != rhs->solarradiation) {
    return false;
  }
  // friction
  if (lhs->friction != rhs->friction) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__WeatherReport__copy(
  const v2x_msg__msg__WeatherReport * input,
  v2x_msg__msg__WeatherReport * output)
{
  if (!input || !output) {
    return false;
  }
  // israining
  output->israining = input->israining;
  // rainrate
  output->rainrate = input->rainrate;
  // precipsituation
  output->precipsituation = input->precipsituation;
  // solarradiation
  output->solarradiation = input->solarradiation;
  // friction
  output->friction = input->friction;
  return true;
}

v2x_msg__msg__WeatherReport *
v2x_msg__msg__WeatherReport__create()
{
  v2x_msg__msg__WeatherReport * msg = (v2x_msg__msg__WeatherReport *)malloc(sizeof(v2x_msg__msg__WeatherReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__WeatherReport));
  bool success = v2x_msg__msg__WeatherReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__WeatherReport__destroy(v2x_msg__msg__WeatherReport * msg)
{
  if (msg) {
    v2x_msg__msg__WeatherReport__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__WeatherReport__Sequence__init(v2x_msg__msg__WeatherReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__WeatherReport * data = NULL;
  if (size) {
    data = (v2x_msg__msg__WeatherReport *)calloc(size, sizeof(v2x_msg__msg__WeatherReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__WeatherReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__WeatherReport__fini(&data[i - 1]);
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
v2x_msg__msg__WeatherReport__Sequence__fini(v2x_msg__msg__WeatherReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__WeatherReport__fini(&array->data[i]);
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

v2x_msg__msg__WeatherReport__Sequence *
v2x_msg__msg__WeatherReport__Sequence__create(size_t size)
{
  v2x_msg__msg__WeatherReport__Sequence * array = (v2x_msg__msg__WeatherReport__Sequence *)malloc(sizeof(v2x_msg__msg__WeatherReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__WeatherReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__WeatherReport__Sequence__destroy(v2x_msg__msg__WeatherReport__Sequence * array)
{
  if (array) {
    v2x_msg__msg__WeatherReport__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__WeatherReport__Sequence__are_equal(const v2x_msg__msg__WeatherReport__Sequence * lhs, const v2x_msg__msg__WeatherReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__WeatherReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__WeatherReport__Sequence__copy(
  const v2x_msg__msg__WeatherReport__Sequence * input,
  v2x_msg__msg__WeatherReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__WeatherReport);
    v2x_msg__msg__WeatherReport * data =
      (v2x_msg__msg__WeatherReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__WeatherReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__WeatherReport__fini(&data[i]);
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
    if (!v2x_msg__msg__WeatherReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
