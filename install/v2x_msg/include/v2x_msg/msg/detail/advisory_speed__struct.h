// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AdvisorySpeed in the package v2x_msg.
typedef struct v2x_msg__msg__AdvisorySpeed
{
  int64_t type;
  int64_t speed;
  int64_t confidence;
  int64_t zonelength;
  int64_t restrictionclassid;
} v2x_msg__msg__AdvisorySpeed;

// Struct for a sequence of v2x_msg__msg__AdvisorySpeed.
typedef struct v2x_msg__msg__AdvisorySpeed__Sequence
{
  v2x_msg__msg__AdvisorySpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__AdvisorySpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_
