// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/ITIScodesandtextcontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ITIScodesandtextcontent in the package v2x_msg.
typedef struct v2x_msg__msg__ITIScodesandtextcontent
{
  int64_t itis;
  rosidl_runtime_c__String text;
} v2x_msg__msg__ITIScodesandtextcontent;

// Struct for a sequence of v2x_msg__msg__ITIScodesandtextcontent.
typedef struct v2x_msg__msg__ITIScodesandtextcontent__Sequence
{
  v2x_msg__msg__ITIScodesandtextcontent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__ITIScodesandtextcontent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__STRUCT_H_
