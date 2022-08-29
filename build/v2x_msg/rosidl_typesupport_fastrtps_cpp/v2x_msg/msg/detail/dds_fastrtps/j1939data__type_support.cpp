// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/J1939data.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/j1939data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/j1939data__struct.hpp"

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
  const v2x_msg::msg::TireData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::TireData &);
size_t get_serialized_size(
  const v2x_msg::msg::TireData &,
  size_t current_alignment);
size_t
max_serialized_size_TireData(
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
  const v2x_msg::msg::AxleWeight &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::AxleWeight &);
size_t get_serialized_size(
  const v2x_msg::msg::AxleWeight &,
  size_t current_alignment);
size_t
max_serialized_size_AxleWeight(
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
  const v2x_msg::msg::J1939data & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tires
  {
    size_t size = ros_message.tires.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tires[i],
        cdr);
    }
  }
  // Member: axles
  {
    size_t size = ros_message.axles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.axles[i],
        cdr);
    }
  }
  // Member: trailerweight
  cdr << ros_message.trailerweight;
  // Member: cargoweight
  cdr << ros_message.cargoweight;
  // Member: steeringaxletemperture
  cdr << ros_message.steeringaxletemperture;
  // Member: driveaxlelocation
  cdr << ros_message.driveaxlelocation;
  // Member: driveaxleliftairpressure
  cdr << ros_message.driveaxleliftairpressure;
  // Member: driveaxletemperature
  cdr << ros_message.driveaxletemperature;
  // Member: driveaxlelubpressure
  cdr << ros_message.driveaxlelubpressure;
  // Member: steeringaxlelubepressure
  cdr << ros_message.steeringaxlelubepressure;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::J1939data & ros_message)
{
  // Member: tires
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.tires.resize(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tires[i]);
    }
  }

  // Member: axles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.axles.resize(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.axles[i]);
    }
  }

  // Member: trailerweight
  cdr >> ros_message.trailerweight;

  // Member: cargoweight
  cdr >> ros_message.cargoweight;

  // Member: steeringaxletemperture
  cdr >> ros_message.steeringaxletemperture;

  // Member: driveaxlelocation
  cdr >> ros_message.driveaxlelocation;

  // Member: driveaxleliftairpressure
  cdr >> ros_message.driveaxleliftairpressure;

  // Member: driveaxletemperature
  cdr >> ros_message.driveaxletemperature;

  // Member: driveaxlelubpressure
  cdr >> ros_message.driveaxlelubpressure;

  // Member: steeringaxlelubepressure
  cdr >> ros_message.steeringaxlelubepressure;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::J1939data & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tires
  {
    size_t array_size = ros_message.tires.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tires[index], current_alignment);
    }
  }
  // Member: axles
  {
    size_t array_size = ros_message.axles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.axles[index], current_alignment);
    }
  }
  // Member: trailerweight
  {
    size_t item_size = sizeof(ros_message.trailerweight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cargoweight
  {
    size_t item_size = sizeof(ros_message.cargoweight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steeringaxletemperture
  {
    size_t item_size = sizeof(ros_message.steeringaxletemperture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driveaxlelocation
  {
    size_t item_size = sizeof(ros_message.driveaxlelocation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driveaxleliftairpressure
  {
    size_t item_size = sizeof(ros_message.driveaxleliftairpressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driveaxletemperature
  {
    size_t item_size = sizeof(ros_message.driveaxletemperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driveaxlelubpressure
  {
    size_t item_size = sizeof(ros_message.driveaxlelubpressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steeringaxlelubepressure
  {
    size_t item_size = sizeof(ros_message.steeringaxlelubepressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_J1939data(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: tires
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_TireData(
        full_bounded, current_alignment);
    }
  }

  // Member: axles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_AxleWeight(
        full_bounded, current_alignment);
    }
  }

  // Member: trailerweight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cargoweight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steeringaxletemperture
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driveaxlelocation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driveaxleliftairpressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driveaxletemperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driveaxlelubpressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steeringaxlelubepressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _J1939data__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::J1939data *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _J1939data__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::J1939data *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _J1939data__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::J1939data *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _J1939data__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_J1939data(full_bounded, 0);
}

static message_type_support_callbacks_t _J1939data__callbacks = {
  "v2x_msg::msg",
  "J1939data",
  _J1939data__cdr_serialize,
  _J1939data__cdr_deserialize,
  _J1939data__get_serialized_size,
  _J1939data__max_serialized_size
};

static rosidl_message_type_support_t _J1939data__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_J1939data__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::J1939data>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_J1939data__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, J1939data)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_J1939data__handle;
}

#ifdef __cplusplus
}
#endif
