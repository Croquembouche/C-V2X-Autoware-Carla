// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/allowed_maneuvers__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/allowed_maneuvers__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace v2x_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_serialize(
  const v2x_msg::msg::AllowedManeuvers & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: maneuverstraightallowed
  cdr << ros_message.maneuverstraightallowed;
  // Member: maneuverleftallowed
  cdr << ros_message.maneuverleftallowed;
  // Member: maneuverrightallowed
  cdr << ros_message.maneuverrightallowed;
  // Member: maneuveruturnallowed
  cdr << ros_message.maneuveruturnallowed;
  // Member: maneuverleftturnonredallowed
  cdr << ros_message.maneuverleftturnonredallowed;
  // Member: maneverrightturnonredallowed
  cdr << ros_message.maneverrightturnonredallowed;
  // Member: maneuverlanechangeallowed
  cdr << ros_message.maneuverlanechangeallowed;
  // Member: maneuvernostoppingallowed
  cdr << ros_message.maneuvernostoppingallowed;
  // Member: yieldallwaysrequired
  cdr << ros_message.yieldallwaysrequired;
  // Member: gowithhalt
  cdr << ros_message.gowithhalt;
  // Member: caution
  cdr << ros_message.caution;
  // Member: reserved1
  cdr << ros_message.reserved1;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::AllowedManeuvers & ros_message)
{
  // Member: maneuverstraightallowed
  cdr >> ros_message.maneuverstraightallowed;

  // Member: maneuverleftallowed
  cdr >> ros_message.maneuverleftallowed;

  // Member: maneuverrightallowed
  cdr >> ros_message.maneuverrightallowed;

  // Member: maneuveruturnallowed
  cdr >> ros_message.maneuveruturnallowed;

  // Member: maneuverleftturnonredallowed
  cdr >> ros_message.maneuverleftturnonredallowed;

  // Member: maneverrightturnonredallowed
  cdr >> ros_message.maneverrightturnonredallowed;

  // Member: maneuverlanechangeallowed
  cdr >> ros_message.maneuverlanechangeallowed;

  // Member: maneuvernostoppingallowed
  cdr >> ros_message.maneuvernostoppingallowed;

  // Member: yieldallwaysrequired
  cdr >> ros_message.yieldallwaysrequired;

  // Member: gowithhalt
  cdr >> ros_message.gowithhalt;

  // Member: caution
  cdr >> ros_message.caution;

  // Member: reserved1
  cdr >> ros_message.reserved1;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::AllowedManeuvers & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: maneuverstraightallowed
  {
    size_t item_size = sizeof(ros_message.maneuverstraightallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maneuverleftallowed
  {
    size_t item_size = sizeof(ros_message.maneuverleftallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maneuverrightallowed
  {
    size_t item_size = sizeof(ros_message.maneuverrightallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maneuveruturnallowed
  {
    size_t item_size = sizeof(ros_message.maneuveruturnallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maneuverleftturnonredallowed
  {
    size_t item_size = sizeof(ros_message.maneuverleftturnonredallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maneverrightturnonredallowed
  {
    size_t item_size = sizeof(ros_message.maneverrightturnonredallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maneuverlanechangeallowed
  {
    size_t item_size = sizeof(ros_message.maneuverlanechangeallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maneuvernostoppingallowed
  {
    size_t item_size = sizeof(ros_message.maneuvernostoppingallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yieldallwaysrequired
  {
    size_t item_size = sizeof(ros_message.yieldallwaysrequired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gowithhalt
  {
    size_t item_size = sizeof(ros_message.gowithhalt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: caution
  {
    size_t item_size = sizeof(ros_message.caution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t item_size = sizeof(ros_message.reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_AllowedManeuvers(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: maneuverstraightallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: maneuverleftallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: maneuverrightallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: maneuveruturnallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: maneuverleftturnonredallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: maneverrightturnonredallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: maneuverlanechangeallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: maneuvernostoppingallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yieldallwaysrequired
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gowithhalt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: caution
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserved1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _AllowedManeuvers__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::AllowedManeuvers *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AllowedManeuvers__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::AllowedManeuvers *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AllowedManeuvers__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::AllowedManeuvers *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AllowedManeuvers__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AllowedManeuvers(full_bounded, 0);
}

static message_type_support_callbacks_t _AllowedManeuvers__callbacks = {
  "v2x_msg::msg",
  "AllowedManeuvers",
  _AllowedManeuvers__cdr_serialize,
  _AllowedManeuvers__cdr_deserialize,
  _AllowedManeuvers__get_serialized_size,
  _AllowedManeuvers__max_serialized_size
};

static rosidl_message_type_support_t _AllowedManeuvers__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AllowedManeuvers__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2x_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2x_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_msg::msg::AllowedManeuvers>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_AllowedManeuvers__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, AllowedManeuvers)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_AllowedManeuvers__handle;
}

#ifdef __cplusplus
}
#endif
