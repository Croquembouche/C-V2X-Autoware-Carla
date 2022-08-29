// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/ITISSpeedLimit.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/itis_speed_limit__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/itis_speed_limit__functions.h"
#include "v2x_msg/msg/detail/itis_speed_limit__struct.h"


// Include directives for member types
// Member `item`
#include "v2x_msg/msg/itis_speed_limitcontent.h"
// Member `item`
#include "v2x_msg/msg/detail/itis_speed_limitcontent__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__ITISSpeedLimit__init(message_memory);
}

void ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_fini_function(void * message_memory)
{
  v2x_msg__msg__ITISSpeedLimit__fini(message_memory);
}

size_t ITISSpeedLimit__rosidl_typesupport_introspection_c__size_function__ITISSpeedLimitcontent__item(
  const void * untyped_member)
{
  const v2x_msg__msg__ITISSpeedLimitcontent__Sequence * member =
    (const v2x_msg__msg__ITISSpeedLimitcontent__Sequence *)(untyped_member);
  return member->size;
}

const void * ITISSpeedLimit__rosidl_typesupport_introspection_c__get_const_function__ITISSpeedLimitcontent__item(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__ITISSpeedLimitcontent__Sequence * member =
    (const v2x_msg__msg__ITISSpeedLimitcontent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ITISSpeedLimit__rosidl_typesupport_introspection_c__get_function__ITISSpeedLimitcontent__item(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__ITISSpeedLimitcontent__Sequence * member =
    (v2x_msg__msg__ITISSpeedLimitcontent__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ITISSpeedLimit__rosidl_typesupport_introspection_c__resize_function__ITISSpeedLimitcontent__item(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__ITISSpeedLimitcontent__Sequence * member =
    (v2x_msg__msg__ITISSpeedLimitcontent__Sequence *)(untyped_member);
  v2x_msg__msg__ITISSpeedLimitcontent__Sequence__fini(member);
  return v2x_msg__msg__ITISSpeedLimitcontent__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_member_array[1] = {
  {
    "item",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ITISSpeedLimit, item),  // bytes offset in struct
    NULL,  // default value
    ITISSpeedLimit__rosidl_typesupport_introspection_c__size_function__ITISSpeedLimitcontent__item,  // size() function pointer
    ITISSpeedLimit__rosidl_typesupport_introspection_c__get_const_function__ITISSpeedLimitcontent__item,  // get_const(index) function pointer
    ITISSpeedLimit__rosidl_typesupport_introspection_c__get_function__ITISSpeedLimitcontent__item,  // get(index) function pointer
    ITISSpeedLimit__rosidl_typesupport_introspection_c__resize_function__ITISSpeedLimitcontent__item  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_members = {
  "v2x_msg__msg",  // message namespace
  "ITISSpeedLimit",  // message name
  1,  // number of fields
  sizeof(v2x_msg__msg__ITISSpeedLimit),
  ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_member_array,  // message members
  ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_init_function,  // function to initialize message memory (memory has to be allocated)
  ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_type_support_handle = {
  0,
  &ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ITISSpeedLimit)() {
  ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ITISSpeedLimitcontent)();
  if (!ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_type_support_handle.typesupport_identifier) {
    ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ITISSpeedLimit__rosidl_typesupport_introspection_c__ITISSpeedLimit_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
