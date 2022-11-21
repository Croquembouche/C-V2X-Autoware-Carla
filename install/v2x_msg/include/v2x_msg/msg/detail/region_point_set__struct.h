// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RegionPointSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_POINT_SET__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__REGION_POINT_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__struct.h"
// Member 'nodelist'
#include "v2x_msg/msg/detail/region_offsets__struct.h"

// Struct defined in msg/RegionPointSet in the package v2x_msg.
typedef struct v2x_msg__msg__RegionPointSet
{
  v2x_msg__msg__Position3D anchor;
  int64_t scale;
  v2x_msg__msg__RegionOffsets__Sequence nodelist;
} v2x_msg__msg__RegionPointSet;

// Struct for a sequence of v2x_msg__msg__RegionPointSet.
typedef struct v2x_msg__msg__RegionPointSet__Sequence
{
  v2x_msg__msg__RegionPointSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RegionPointSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__REGION_POINT_SET__STRUCT_H_
