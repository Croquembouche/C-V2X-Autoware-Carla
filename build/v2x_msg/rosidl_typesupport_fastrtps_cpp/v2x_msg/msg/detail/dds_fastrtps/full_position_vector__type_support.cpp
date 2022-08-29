// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/FullPositionVector.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/full_position_vector__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"

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
  const v2x_msg::msg::DDateTime &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::DDateTime &);
size_t get_serialized_size(
  const v2x_msg::msg::DDateTime &,
  size_t current_alignment);
size_t
max_serialized_size_DDateTime(
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
  const v2x_msg::msg::TransmissionAndSpeed &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::TransmissionAndSpeed &);
size_t get_serialized_size(
  const v2x_msg::msg::TransmissionAndSpeed &,
  size_t current_alignment);
size_t
max_serialized_size_TransmissionAndSpeed(
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
  const v2x_msg::msg::PositionalAccuracy &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::PositionalAccuracy &);
size_t get_serialized_size(
  const v2x_msg::msg::PositionalAccuracy &,
  size_t current_alignment);
size_t
max_serialized_size_PositionalAccuracy(
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
  const v2x_msg::msg::PositionConfidenceSet &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::PositionConfidenceSet &);
size_t get_serialized_size(
  const v2x_msg::msg::PositionConfidenceSet &,
  size_t current_alignment);
size_t
max_serialized_size_PositionConfidenceSet(
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
  const v2x_msg::msg::SpeedandHeadingandThrottleConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::SpeedandHeadingandThrottleConfidence &);
size_t get_serialized_size(
  const v2x_msg::msg::SpeedandHeadingandThrottleConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_SpeedandHeadingandThrottleConfidence(
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
  const v2x_msg::msg::FullPositionVector & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: utctime
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.utctime,
    cdr);
  // Member: longitude
  cdr << ros_message.longitude;
  // Member: lat
  cdr << ros_message.lat;
  // Member: elevation
  cdr << ros_message.elevation;
  // Member: heading
  cdr << ros_message.heading;
  // Member: speed
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.speed,
    cdr);
  // Member: posaccuracy
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.posaccuracy,
    cdr);
  // Member: timeconfidence
  cdr << ros_message.timeconfidence;
  // Member: posconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.posconfidence,
    cdr);
  // Member: speedconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.speedconfidence,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::FullPositionVector & ros_message)
{
  // Member: utctime
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.utctime);

  // Member: longitude
  cdr >> ros_message.longitude;

  // Member: lat
  cdr >> ros_message.lat;

  // Member: elevation
  cdr >> ros_message.elevation;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: speed
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.speed);

  // Member: posaccuracy
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.posaccuracy);

  // Member: timeconfidence
  cdr >> ros_message.timeconfidence;

  // Member: posconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.posconfidence);

  // Member: speedconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.speedconfidence);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::FullPositionVector & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: utctime

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.utctime, current_alignment);
  // Member: longitude
  {
    size_t item_size = sizeof(ros_message.longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat
  {
    size_t item_size = sizeof(ros_message.lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elevation
  {
    size_t item_size = sizeof(ros_message.elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.speed, current_alignment);
  // Member: posaccuracy

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.posaccuracy, current_alignment);
  // Member: timeconfidence
  {
    size_t item_size = sizeof(ros_message.timeconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: posconfidence

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.posconfidence, current_alignment);
  // Member: speedconfidence

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.speedconfidence, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_FullPositionVector(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: utctime
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_DDateTime(
        full_bounded, current_alignment);
    }
  }

  // Member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: elevation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_TransmissionAndSpeed(
        full_bounded, current_alignment);
    }
  }

  // Member: posaccuracy
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PositionalAccuracy(
        full_bounded, current_alignment);
    }
  }

  // Member: timeconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: posconfidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PositionConfidenceSet(
        full_bounded, current_alignment);
    }
  }

  // Member: speedconfidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_SpeedandHeadingandThrottleConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _FullPositionVector__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::FullPositionVector *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FullPositionVector__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::FullPositionVector *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FullPositionVector__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::FullPositionVector *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FullPositionVector__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FullPositionVector(full_bounded, 0);
}

static message_type_support_callbacks_t _FullPositionVector__callbacks = {
  "v2x_msg::msg",
  "FullPositionVector",
  _FullPositionVector__cdr_serialize,
  _FullPositionVector__cdr_deserialize,
  _FullPositionVector__get_serialized_size,
  _FullPositionVector__max_serialized_size
};

static rosidl_message_type_support_t _FullPositionVector__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FullPositionVector__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::FullPositionVector>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_FullPositionVector__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, FullPositionVector)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_FullPositionVector__handle;
}

#ifdef __cplusplus
}
#endif
