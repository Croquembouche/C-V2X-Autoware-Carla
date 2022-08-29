// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/emergency_details__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/emergency_details__functions.h"
#include "v2x_msg/msg/detail/emergency_details__struct.h"


// Include directives for member types
// Member `events`
#include "v2x_msg/msg/privileged_events.h"
// Member `events`
#include "v2x_msg/msg/detail/privileged_events__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__EmergencyDetails__init(message_memory);
}

void EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_fini_function(void * message_memory)
{
  v2x_msg__msg__EmergencyDetails__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array[6] = {
  {
    "notused",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__EmergencyDetails, notused),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sirenuse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__EmergencyDetails, sirenuse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lightsuse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__EmergencyDetails, lightsuse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__EmergencyDetails, multi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__EmergencyDetails, events),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "responsetype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__EmergencyDetails, responsetype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_members = {
  "v2x_msg__msg",  // message namespace
  "EmergencyDetails",  // message name
  6,  // number of fields
  sizeof(v2x_msg__msg__EmergencyDetails),
  EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array,  // message members
  EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_type_support_handle = {
  0,
  &EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, EmergencyDetails)() {
  EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, PrivilegedEvents)();
  if (!EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_type_support_handle.typesupport_identifier) {
    EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
