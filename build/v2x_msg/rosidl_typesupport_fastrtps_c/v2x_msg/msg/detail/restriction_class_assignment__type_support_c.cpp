// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/restriction_class_assignment__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/restriction_class_assignment__struct.h"
#include "v2x_msg/msg/detail/restriction_class_assignment__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "v2x_msg/msg/detail/restriction_user_type__functions.h"  // users

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__RestrictionUserType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__RestrictionUserType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RestrictionUserType)();


using _RestrictionClassAssignment__ros_msg_type = v2x_msg__msg__RestrictionClassAssignment;

static bool _RestrictionClassAssignment__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RestrictionClassAssignment__ros_msg_type * ros_message = static_cast<const _RestrictionClassAssignment__ros_msg_type *>(untyped_ros_message);
  // Field name: restrictionclassid
  {
    cdr << ros_message->restrictionclassid;
  }

  // Field name: users
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RestrictionUserType
      )()->data);
    size_t size = ros_message->users.size;
    auto array_ptr = ros_message->users.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _RestrictionClassAssignment__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RestrictionClassAssignment__ros_msg_type * ros_message = static_cast<_RestrictionClassAssignment__ros_msg_type *>(untyped_ros_message);
  // Field name: restrictionclassid
  {
    cdr >> ros_message->restrictionclassid;
  }

  // Field name: users
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RestrictionUserType
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->users.data) {
      v2x_msg__msg__RestrictionUserType__Sequence__fini(&ros_message->users);
    }
    if (!v2x_msg__msg__RestrictionUserType__Sequence__init(&ros_message->users, size)) {
      fprintf(stderr, "failed to create array for field 'users'");
      return false;
    }
    auto array_ptr = ros_message->users.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__RestrictionClassAssignment(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RestrictionClassAssignment__ros_msg_type * ros_message = static_cast<const _RestrictionClassAssignment__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name restrictionclassid
  {
    size_t item_size = sizeof(ros_message->restrictionclassid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name users
  {
    size_t array_size = ros_message->users.size;
    auto array_ptr = ros_message->users.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__RestrictionUserType(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RestrictionClassAssignment__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__RestrictionClassAssignment(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__RestrictionClassAssignment(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: restrictionclassid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: users
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__RestrictionUserType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RestrictionClassAssignment__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__RestrictionClassAssignment(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RestrictionClassAssignment = {
  "v2x_msg::msg",
  "RestrictionClassAssignment",
  _RestrictionClassAssignment__cdr_serialize,
  _RestrictionClassAssignment__cdr_deserialize,
  _RestrictionClassAssignment__get_serialized_size,
  _RestrictionClassAssignment__max_serialized_size
};

static rosidl_message_type_support_t _RestrictionClassAssignment__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RestrictionClassAssignment,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RestrictionClassAssignment)() {
  return &_RestrictionClassAssignment__type_support;
}

#if defined(__cplusplus)
}
#endif
