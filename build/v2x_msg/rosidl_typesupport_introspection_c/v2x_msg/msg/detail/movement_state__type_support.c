// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/MovementState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/movement_state__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/movement_state__functions.h"
#include "v2x_msg/msg/detail/movement_state__struct.h"


// Include directives for member types
// Member `movementname`
#include "rosidl_runtime_c/string_functions.h"
// Member `statetimespeed`
#include "v2x_msg/msg/movement_event.h"
// Member `statetimespeed`
#include "v2x_msg/msg/detail/movement_event__rosidl_typesupport_introspection_c.h"
// Member `maneuverassistlist`
#include "v2x_msg/msg/connection_maneuver_assist.h"
// Member `maneuverassistlist`
#include "v2x_msg/msg/detail/connection_maneuver_assist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MovementState__rosidl_typesupport_introspection_c__MovementState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__MovementState__init(message_memory);
}

void MovementState__rosidl_typesupport_introspection_c__MovementState_fini_function(void * message_memory)
{
  v2x_msg__msg__MovementState__fini(message_memory);
}

size_t MovementState__rosidl_typesupport_introspection_c__size_function__MovementEvent__statetimespeed(
  const void * untyped_member)
{
  const v2x_msg__msg__MovementEvent__Sequence * member =
    (const v2x_msg__msg__MovementEvent__Sequence *)(untyped_member);
  return member->size;
}

const void * MovementState__rosidl_typesupport_introspection_c__get_const_function__MovementEvent__statetimespeed(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__MovementEvent__Sequence * member =
    (const v2x_msg__msg__MovementEvent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MovementState__rosidl_typesupport_introspection_c__get_function__MovementEvent__statetimespeed(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__MovementEvent__Sequence * member =
    (v2x_msg__msg__MovementEvent__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MovementState__rosidl_typesupport_introspection_c__resize_function__MovementEvent__statetimespeed(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__MovementEvent__Sequence * member =
    (v2x_msg__msg__MovementEvent__Sequence *)(untyped_member);
  v2x_msg__msg__MovementEvent__Sequence__fini(member);
  return v2x_msg__msg__MovementEvent__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[4] = {
  {
    "movementname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MovementState, movementname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signalgroupid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MovementState, signalgroupid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "statetimespeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MovementState, statetimespeed),  // bytes offset in struct
    NULL,  // default value
    MovementState__rosidl_typesupport_introspection_c__size_function__MovementEvent__statetimespeed,  // size() function pointer
    MovementState__rosidl_typesupport_introspection_c__get_const_function__MovementEvent__statetimespeed,  // get_const(index) function pointer
    MovementState__rosidl_typesupport_introspection_c__get_function__MovementEvent__statetimespeed,  // get(index) function pointer
    MovementState__rosidl_typesupport_introspection_c__resize_function__MovementEvent__statetimespeed  // resize(index) function pointer
  },
  {
    "maneuverassistlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MovementState, maneuverassistlist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MovementState__rosidl_typesupport_introspection_c__MovementState_message_members = {
  "v2x_msg__msg",  // message namespace
  "MovementState",  // message name
  4,  // number of fields
  sizeof(v2x_msg__msg__MovementState),
  MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array,  // message members
  MovementState__rosidl_typesupport_introspection_c__MovementState_init_function,  // function to initialize message memory (memory has to be allocated)
  MovementState__rosidl_typesupport_introspection_c__MovementState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle = {
  0,
  &MovementState__rosidl_typesupport_introspection_c__MovementState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, MovementState)() {
  MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, MovementEvent)();
  MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ConnectionManeuverAssist)();
  if (!MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle.typesupport_identifier) {
    MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
