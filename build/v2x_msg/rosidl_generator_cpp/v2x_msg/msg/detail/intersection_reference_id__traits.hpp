// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/IntersectionReferenceID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_REFERENCE_ID__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_REFERENCE_ID__TRAITS_HPP_

#include "v2x_msg/msg/detail/intersection_reference_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::IntersectionReferenceID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roadregulatorid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roadregulatorid: ";
    value_to_yaml(msg.roadregulatorid, out);
    out << "\n";
  }

  // member: intersectionid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersectionid: ";
    value_to_yaml(msg.intersectionid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::IntersectionReferenceID & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::IntersectionReferenceID>()
{
  return "v2x_msg::msg::IntersectionReferenceID";
}

template<>
inline const char * name<v2x_msg::msg::IntersectionReferenceID>()
{
  return "v2x_msg/msg/IntersectionReferenceID";
}

template<>
struct has_fixed_size<v2x_msg::msg::IntersectionReferenceID>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::IntersectionReferenceID>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::IntersectionReferenceID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_REFERENCE_ID__TRAITS_HPP_
