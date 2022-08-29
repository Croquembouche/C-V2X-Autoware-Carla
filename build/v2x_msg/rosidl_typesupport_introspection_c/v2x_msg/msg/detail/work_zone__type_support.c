// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/WorkZone.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/work_zone__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/work_zone__functions.h"
#include "v2x_msg/msg/detail/work_zone__struct.h"


// Include directives for member types
// Member `item`
#include "v2x_msg/msg/work_zonecontent.h"
// Member `item`
#include "v2x_msg/msg/detail/work_zonecontent__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WorkZone__rosidl_typesupport_introspection_c__WorkZone_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__WorkZone__init(message_memory);
}

void WorkZone__rosidl_typesupport_introspection_c__WorkZone_fini_function(void * message_memory)
{
  v2x_msg__msg__WorkZone__fini(message_memory);
}

size_t WorkZone__rosidl_typesupport_introspection_c__size_function__WorkZonecontent__item(
  const void * untyped_member)
{
  const v2x_msg__msg__WorkZonecontent__Sequence * member =
    (const v2x_msg__msg__WorkZonecontent__Sequence *)(untyped_member);
  return member->size;
}

const void * WorkZone__rosidl_typesupport_introspection_c__get_const_function__WorkZonecontent__item(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__WorkZonecontent__Sequence * member =
    (const v2x_msg__msg__WorkZonecontent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * WorkZone__rosidl_typesupport_introspection_c__get_function__WorkZonecontent__item(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__WorkZonecontent__Sequence * member =
    (v2x_msg__msg__WorkZonecontent__Sequence *)(untyped_member);
  return &member->data[index];
}

bool WorkZone__rosidl_typesupport_introspection_c__resize_function__WorkZonecontent__item(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__WorkZonecontent__Sequence * member =
    (v2x_msg__msg__WorkZonecontent__Sequence *)(untyped_member);
  v2x_msg__msg__WorkZonecontent__Sequence__fini(member);
  return v2x_msg__msg__WorkZonecontent__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_member_array[1] = {
  {
    "item",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__WorkZone, item),  // bytes offset in struct
    NULL,  // default value
    WorkZone__rosidl_typesupport_introspection_c__size_function__WorkZonecontent__item,  // size() function pointer
    WorkZone__rosidl_typesupport_introspection_c__get_const_function__WorkZonecontent__item,  // get_const(index) function pointer
    WorkZone__rosidl_typesupport_introspection_c__get_function__WorkZonecontent__item,  // get(index) function pointer
    WorkZone__rosidl_typesupport_introspection_c__resize_function__WorkZonecontent__item  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_members = {
  "v2x_msg__msg",  // message namespace
  "WorkZone",  // message name
  1,  // number of fields
  sizeof(v2x_msg__msg__WorkZone),
  WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_member_array,  // message members
  WorkZone__rosidl_typesupport_introspection_c__WorkZone_init_function,  // function to initialize message memory (memory has to be allocated)
  WorkZone__rosidl_typesupport_introspection_c__WorkZone_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_type_support_handle = {
  0,
  &WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, WorkZone)() {
  WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, WorkZonecontent)();
  if (!WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_type_support_handle.typesupport_identifier) {
    WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WorkZone__rosidl_typesupport_introspection_c__WorkZone_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
