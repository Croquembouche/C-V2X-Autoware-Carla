// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/RegionPointSet.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/region_point_set__struct.hpp"
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

void RegionPointSet_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::RegionPointSet(_init);
}

void RegionPointSet_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::RegionPointSet *>(message_memory);
  typed_message->~RegionPointSet();
}

size_t size_function__RegionPointSet__nodelist(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::RegionOffsets> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RegionPointSet__nodelist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::RegionOffsets> *>(untyped_member);
  return &member[index];
}

void * get_function__RegionPointSet__nodelist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::RegionOffsets> *>(untyped_member);
  return &member[index];
}

void resize_function__RegionPointSet__nodelist(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::RegionOffsets> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RegionPointSet_message_member_array[3] = {
  {
    "anchor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::Position3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RegionPointSet, anchor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scale",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RegionPointSet, scale),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodelist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::RegionOffsets>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RegionPointSet, nodelist),  // bytes offset in struct
    nullptr,  // default value
    size_function__RegionPointSet__nodelist,  // size() function pointer
    get_const_function__RegionPointSet__nodelist,  // get_const(index) function pointer
    get_function__RegionPointSet__nodelist,  // get(index) function pointer
    resize_function__RegionPointSet__nodelist  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RegionPointSet_message_members = {
  "v2x_msg::msg",  // message namespace
  "RegionPointSet",  // message name
  3,  // number of fields
  sizeof(v2x_msg::msg::RegionPointSet),
  RegionPointSet_message_member_array,  // message members
  RegionPointSet_init_function,  // function to initialize message memory (memory has to be allocated)
  RegionPointSet_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RegionPointSet_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RegionPointSet_message_members,
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
get_message_type_support_handle<v2x_msg::msg::RegionPointSet>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::RegionPointSet_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, RegionPointSet)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::RegionPointSet_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
