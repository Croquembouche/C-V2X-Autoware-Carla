// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/movement_event__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/movement_event__functions.h"
#include "v2x_msg/msg/detail/movement_event__struct.h"


// Include directives for member types
// Member `timing`
#include "v2x_msg/msg/time_change_details.h"
// Member `timing`
#include "v2x_msg/msg/detail/time_change_details__rosidl_typesupport_introspection_c.h"
// Member `speeds`
#include "v2x_msg/msg/advisory_speed.h"
// Member `speeds`
#include "v2x_msg/msg/detail/advisory_speed__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__MovementEvent__init(message_memory);
}

void MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_fini_function(void * message_memory)
{
  v2x_msg__msg__MovementEvent__fini(message_memory);
}

size_t MovementEvent__rosidl_typesupport_introspection_c__size_function__AdvisorySpeed__speeds(
  const void * untyped_member)
{
  const v2x_msg__msg__AdvisorySpeed__Sequence * member =
    (const v2x_msg__msg__AdvisorySpeed__Sequence *)(untyped_member);
  return member->size;
}

const void * MovementEvent__rosidl_typesupport_introspection_c__get_const_function__AdvisorySpeed__speeds(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__AdvisorySpeed__Sequence * member =
    (const v2x_msg__msg__AdvisorySpeed__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MovementEvent__rosidl_typesupport_introspection_c__get_function__AdvisorySpeed__speeds(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__AdvisorySpeed__Sequence * member =
    (v2x_msg__msg__AdvisorySpeed__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MovementEvent__rosidl_typesupport_introspection_c__resize_function__AdvisorySpeed__speeds(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__AdvisorySpeed__Sequence * member =
    (v2x_msg__msg__AdvisorySpeed__Sequence *)(untyped_member);
  v2x_msg__msg__AdvisorySpeed__Sequence__fini(member);
  return v2x_msg__msg__AdvisorySpeed__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_member_array[3] = {
  {
    "movementphasestate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MovementEvent, movementphasestate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MovementEvent, timing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speeds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MovementEvent, speeds),  // bytes offset in struct
    NULL,  // default value
    MovementEvent__rosidl_typesupport_introspection_c__size_function__AdvisorySpeed__speeds,  // size() function pointer
    MovementEvent__rosidl_typesupport_introspection_c__get_const_function__AdvisorySpeed__speeds,  // get_const(index) function pointer
    MovementEvent__rosidl_typesupport_introspection_c__get_function__AdvisorySpeed__speeds,  // get(index) function pointer
    MovementEvent__rosidl_typesupport_introspection_c__resize_function__AdvisorySpeed__speeds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_members = {
  "v2x_msg__msg",  // message namespace
  "MovementEvent",  // message name
  3,  // number of fields
  sizeof(v2x_msg__msg__MovementEvent),
  MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_member_array,  // message members
  MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_type_support_handle = {
  0,
  &MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, MovementEvent)() {
  MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, TimeChangeDetails)();
  MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, AdvisorySpeed)();
  if (!MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_type_support_handle.typesupport_identifier) {
    MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MovementEvent__rosidl_typesupport_introspection_c__MovementEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
