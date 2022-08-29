// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/SSM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/ssm__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/ssm__functions.h"
#include "v2x_msg/msg/detail/ssm__struct.h"


// Include directives for member types
// Member `status`
#include "v2x_msg/msg/signal_status.h"
// Member `status`
#include "v2x_msg/msg/detail/signal_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SSM__rosidl_typesupport_introspection_c__SSM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__SSM__init(message_memory);
}

void SSM__rosidl_typesupport_introspection_c__SSM_fini_function(void * message_memory)
{
  v2x_msg__msg__SSM__fini(message_memory);
}

size_t SSM__rosidl_typesupport_introspection_c__size_function__SignalStatus__status(
  const void * untyped_member)
{
  const v2x_msg__msg__SignalStatus__Sequence * member =
    (const v2x_msg__msg__SignalStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * SSM__rosidl_typesupport_introspection_c__get_const_function__SignalStatus__status(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__SignalStatus__Sequence * member =
    (const v2x_msg__msg__SignalStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SSM__rosidl_typesupport_introspection_c__get_function__SignalStatus__status(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__SignalStatus__Sequence * member =
    (v2x_msg__msg__SignalStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SSM__rosidl_typesupport_introspection_c__resize_function__SignalStatus__status(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__SignalStatus__Sequence * member =
    (v2x_msg__msg__SignalStatus__Sequence *)(untyped_member);
  v2x_msg__msg__SignalStatus__Sequence__fini(member);
  return v2x_msg__msg__SignalStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SSM__rosidl_typesupport_introspection_c__SSM_message_member_array[4] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SSM, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SSM, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequencenumber",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SSM, sequencenumber),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SSM, status),  // bytes offset in struct
    NULL,  // default value
    SSM__rosidl_typesupport_introspection_c__size_function__SignalStatus__status,  // size() function pointer
    SSM__rosidl_typesupport_introspection_c__get_const_function__SignalStatus__status,  // get_const(index) function pointer
    SSM__rosidl_typesupport_introspection_c__get_function__SignalStatus__status,  // get(index) function pointer
    SSM__rosidl_typesupport_introspection_c__resize_function__SignalStatus__status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SSM__rosidl_typesupport_introspection_c__SSM_message_members = {
  "v2x_msg__msg",  // message namespace
  "SSM",  // message name
  4,  // number of fields
  sizeof(v2x_msg__msg__SSM),
  SSM__rosidl_typesupport_introspection_c__SSM_message_member_array,  // message members
  SSM__rosidl_typesupport_introspection_c__SSM_init_function,  // function to initialize message memory (memory has to be allocated)
  SSM__rosidl_typesupport_introspection_c__SSM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SSM__rosidl_typesupport_introspection_c__SSM_message_type_support_handle = {
  0,
  &SSM__rosidl_typesupport_introspection_c__SSM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SSM)() {
  SSM__rosidl_typesupport_introspection_c__SSM_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SignalStatus)();
  if (!SSM__rosidl_typesupport_introspection_c__SSM_message_type_support_handle.typesupport_identifier) {
    SSM__rosidl_typesupport_introspection_c__SSM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SSM__rosidl_typesupport_introspection_c__SSM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
