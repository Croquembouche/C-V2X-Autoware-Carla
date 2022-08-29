// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/restriction_user_type__struct.hpp"
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

void RestrictionUserType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::RestrictionUserType(_init);
}

void RestrictionUserType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::RestrictionUserType *>(message_memory);
  typed_message->~RestrictionUserType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RestrictionUserType_message_member_array[1] = {
  {
    "basictype",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RestrictionUserType, basictype),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RestrictionUserType_message_members = {
  "v2x_msg::msg",  // message namespace
  "RestrictionUserType",  // message name
  1,  // number of fields
  sizeof(v2x_msg::msg::RestrictionUserType),
  RestrictionUserType_message_member_array,  // message members
  RestrictionUserType_init_function,  // function to initialize message memory (memory has to be allocated)
  RestrictionUserType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RestrictionUserType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RestrictionUserType_message_members,
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
get_message_type_support_handle<v2x_msg::msg::RestrictionUserType>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::RestrictionUserType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, RestrictionUserType)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::RestrictionUserType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
