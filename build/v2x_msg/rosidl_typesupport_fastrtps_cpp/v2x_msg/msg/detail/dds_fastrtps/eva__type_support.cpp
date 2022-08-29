// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/EVA.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/eva__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/eva__struct.hpp"

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
bool cdr_serialize(
  const v2x_msg::msg::RSA &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::RSA &);
size_t get_serialized_size(
  const v2x_msg::msg::RSA &,
  size_t current_alignment);
size_t
max_serialized_size_RSA(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x_msg

namespace v2x_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x_msg::msg::EmergencyDetails &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::EmergencyDetails &);
size_t get_serialized_size(
  const v2x_msg::msg::EmergencyDetails &,
  size_t current_alignment);
size_t
max_serialized_size_EmergencyDetails(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x_msg


namespace v2x_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_serialize(
  const v2x_msg::msg::EVA & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: id
  cdr << ros_message.id;
  // Member: rsamsg
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rsamsg,
    cdr);
  // Member: responsetype
  cdr << ros_message.responsetype;
  // Member: details
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.details,
    cdr);
  // Member: mass
  cdr << ros_message.mass;
  // Member: basictype
  cdr << ros_message.basictype;
  // Member: vehicletype
  cdr << ros_message.vehicletype;
  // Member: responseequip
  cdr << ros_message.responseequip;
  // Member: respondertype
  cdr << ros_message.respondertype;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::EVA & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: id
  cdr >> ros_message.id;

  // Member: rsamsg
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rsamsg);

  // Member: responsetype
  cdr >> ros_message.responsetype;

  // Member: details
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.details);

  // Member: mass
  cdr >> ros_message.mass;

  // Member: basictype
  cdr >> ros_message.basictype;

  // Member: vehicletype
  cdr >> ros_message.vehicletype;

  // Member: responseequip
  cdr >> ros_message.responseequip;

  // Member: respondertype
  cdr >> ros_message.respondertype;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::EVA & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);
  // Member: rsamsg

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rsamsg, current_alignment);
  // Member: responsetype
  {
    size_t item_size = sizeof(ros_message.responsetype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: details

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.details, current_alignment);
  // Member: mass
  {
    size_t item_size = sizeof(ros_message.mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: basictype
  {
    size_t item_size = sizeof(ros_message.basictype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicletype
  {
    size_t item_size = sizeof(ros_message.vehicletype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: responseequip
  {
    size_t item_size = sizeof(ros_message.responseequip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: respondertype
  {
    size_t item_size = sizeof(ros_message.respondertype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_EVA(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rsamsg
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_RSA(
        full_bounded, current_alignment);
    }
  }

  // Member: responsetype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: details
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_EmergencyDetails(
        full_bounded, current_alignment);
    }
  }

  // Member: mass
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: basictype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vehicletype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: responseequip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: respondertype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EVA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::EVA *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EVA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::EVA *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EVA__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::EVA *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EVA__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EVA(full_bounded, 0);
}

static message_type_support_callbacks_t _EVA__callbacks = {
  "v2x_msg::msg",
  "EVA",
  _EVA__cdr_serialize,
  _EVA__cdr_deserialize,
  _EVA__get_serialized_size,
  _EVA__max_serialized_size
};

static rosidl_message_type_support_t _EVA__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EVA__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::EVA>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_EVA__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, EVA)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_EVA__handle;
}

#ifdef __cplusplus
}
#endif
