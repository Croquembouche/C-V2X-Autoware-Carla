// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SpeedandHeadingandThrottleConfidence_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::SpeedandHeadingandThrottleConfidence(_init);
}

void SpeedandHeadingandThrottleConfidence_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::SpeedandHeadingandThrottleConfidence *>(message_memory);
  typed_message->~SpeedandHeadingandThrottleConfidence();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpeedandHeadingandThrottleConfidence_message_member_array[3] = {
  {
    "heading",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::SpeedandHeadingandThrottleConfidence, heading),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::SpeedandHeadingandThrottleConfidence, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "throttle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::SpeedandHeadingandThrottleConfidence, throttle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpeedandHeadingandThrottleConfidence_message_members = {
  "v2x_msg::msg",  // message namespace
  "SpeedandHeadingandThrottleConfidence",  // message name
  3,  // number of fields
  sizeof(v2x_msg::msg::SpeedandHeadingandThrottleConfidence),
  SpeedandHeadingandThrottleConfidence_message_member_array,  // message members
  SpeedandHeadingandThrottleConfidence_init_function,  // function to initialize message memory (memory has to be allocated)
  SpeedandHeadingandThrottleConfidence_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpeedandHeadingandThrottleConfidence_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpeedandHeadingandThrottleConfidence_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2x_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::SpeedandHeadingandThrottleConfidence_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, SpeedandHeadingandThrottleConfidence)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::SpeedandHeadingandThrottleConfidence_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
