// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/restriction_class_assignment__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/restriction_class_assignment__functions.h"
#include "v2x_msg/msg/detail/restriction_class_assignment__struct.h"


// Include directives for member types
// Member `users`
#include "v2x_msg/msg/restriction_user_type.h"
// Member `users`
#include "v2x_msg/msg/detail/restriction_user_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__RestrictionClassAssignment__init(message_memory);
}

void RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_fini_function(void * message_memory)
{
  v2x_msg__msg__RestrictionClassAssignment__fini(message_memory);
}

size_t RestrictionClassAssignment__rosidl_typesupport_introspection_c__size_function__RestrictionUserType__users(
  const void * untyped_member)
{
  const v2x_msg__msg__RestrictionUserType__Sequence * member =
    (const v2x_msg__msg__RestrictionUserType__Sequence *)(untyped_member);
  return member->size;
}

const void * RestrictionClassAssignment__rosidl_typesupport_introspection_c__get_const_function__RestrictionUserType__users(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__RestrictionUserType__Sequence * member =
    (const v2x_msg__msg__RestrictionUserType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RestrictionClassAssignment__rosidl_typesupport_introspection_c__get_function__RestrictionUserType__users(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__RestrictionUserType__Sequence * member =
    (v2x_msg__msg__RestrictionUserType__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RestrictionClassAssignment__rosidl_typesupport_introspection_c__resize_function__RestrictionUserType__users(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__RestrictionUserType__Sequence * member =
    (v2x_msg__msg__RestrictionUserType__Sequence *)(untyped_member);
  v2x_msg__msg__RestrictionUserType__Sequence__fini(member);
  return v2x_msg__msg__RestrictionUserType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_member_array[2] = {
  {
    "restrictionclassid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RestrictionClassAssignment, restrictionclassid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "users",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RestrictionClassAssignment, users),  // bytes offset in struct
    NULL,  // default value
    RestrictionClassAssignment__rosidl_typesupport_introspection_c__size_function__RestrictionUserType__users,  // size() function pointer
    RestrictionClassAssignment__rosidl_typesupport_introspection_c__get_const_function__RestrictionUserType__users,  // get_const(index) function pointer
    RestrictionClassAssignment__rosidl_typesupport_introspection_c__get_function__RestrictionUserType__users,  // get(index) function pointer
    RestrictionClassAssignment__rosidl_typesupport_introspection_c__resize_function__RestrictionUserType__users  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_members = {
  "v2x_msg__msg",  // message namespace
  "RestrictionClassAssignment",  // message name
  2,  // number of fields
  sizeof(v2x_msg__msg__RestrictionClassAssignment),
  RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_member_array,  // message members
  RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_init_function,  // function to initialize message memory (memory has to be allocated)
  RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_type_support_handle = {
  0,
  &RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RestrictionClassAssignment)() {
  RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RestrictionUserType)();
  if (!RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_type_support_handle.typesupport_identifier) {
    RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RestrictionClassAssignment__rosidl_typesupport_introspection_c__RestrictionClassAssignment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
