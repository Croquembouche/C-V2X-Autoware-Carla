// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/RegionOffsets.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/region_offsets__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/region_offsets__functions.h"
#include "v2x_msg/msg/detail/region_offsets__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__RegionOffsets__init(message_memory);
}

void RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_fini_function(void * message_memory)
{
  v2x_msg__msg__RegionOffsets__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_message_member_array[3] = {
  {
    "xoffset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RegionOffsets, xoffset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yoffset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RegionOffsets, yoffset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zoffset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RegionOffsets, zoffset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_message_members = {
  "v2x_msg__msg",  // message namespace
  "RegionOffsets",  // message name
  3,  // number of fields
  sizeof(v2x_msg__msg__RegionOffsets),
  RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_message_member_array,  // message members
  RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_init_function,  // function to initialize message memory (memory has to be allocated)
  RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_message_type_support_handle = {
  0,
  &RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RegionOffsets)() {
  if (!RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_message_type_support_handle.typesupport_identifier) {
    RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegionOffsets__rosidl_typesupport_introspection_c__RegionOffsets_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
