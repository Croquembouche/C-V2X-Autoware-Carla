// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/AntennaOffsetSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AntennaOffsetSet in the package v2x_msg.
typedef struct v2x_msg__msg__AntennaOffsetSet
{
  int64_t antoffsetx;
  int64_t antoffsety;
  int64_t antoffsetz;
} v2x_msg__msg__AntennaOffsetSet;

// Struct for a sequence of v2x_msg__msg__AntennaOffsetSet.
typedef struct v2x_msg__msg__AntennaOffsetSet__Sequence
{
  v2x_msg__msg__AntennaOffsetSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__AntennaOffsetSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_H_
