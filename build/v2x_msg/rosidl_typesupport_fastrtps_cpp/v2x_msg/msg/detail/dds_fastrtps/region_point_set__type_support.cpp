// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/RegionPointSet.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/region_point_set__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/region_point_set__struct.hpp"

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
  const v2x_msg::msg::Position3D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::Position3D &);
size_t get_serialized_size(
  const v2x_msg::msg::Position3D &,
  size_t current_alignment);
size_t
max_serialized_size_Position3D(
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
  const v2x_msg::msg::RegionOffsets &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::RegionOffsets &);
size_t get_serialized_size(
  const v2x_msg::msg::RegionOffsets &,
  size_t current_alignment);
size_t
max_serialized_size_RegionOffsets(
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
  const v2x_msg::msg::RegionPointSet & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: anchor
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.anchor,
    cdr);
  // Member: scale
  cdr << ros_message.scale;
  // Member: nodelist
  {
    size_t size = ros_message.nodelist.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.nodelist[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::RegionPointSet & ros_message)
{
  // Member: anchor
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.anchor);

  // Member: scale
  cdr >> ros_message.scale;

  // Member: nodelist
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.nodelist.resize(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.nodelist[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::RegionPointSet & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: anchor

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.anchor, current_alignment);
  // Member: scale
  {
    size_t item_size = sizeof(ros_message.scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nodelist
  {
    size_t array_size = ros_message.nodelist.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.nodelist[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_RegionPointSet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: anchor
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_Position3D(
        full_bounded, current_alignment);
    }
  }

  // Member: scale
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nodelist
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_RegionOffsets(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RegionPointSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::RegionPointSet *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegionPointSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::RegionPointSet *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegionPointSet__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::RegionPointSet *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegionPointSet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegionPointSet(full_bounded, 0);
}

static message_type_support_callbacks_t _RegionPointSet__callbacks = {
  "v2x_msg::msg",
  "RegionPointSet",
  _RegionPointSet__cdr_serialize,
  _RegionPointSet__cdr_deserialize,
  _RegionPointSet__get_serialized_size,
  _RegionPointSet__max_serialized_size
};

static rosidl_message_type_support_t _RegionPointSet__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegionPointSet__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::RegionPointSet>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_RegionPointSet__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, RegionPointSet)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_RegionPointSet__handle;
}

#ifdef __cplusplus
}
#endif
