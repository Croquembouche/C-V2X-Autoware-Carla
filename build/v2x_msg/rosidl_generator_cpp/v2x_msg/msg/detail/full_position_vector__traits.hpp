// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_

#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'utctime'
#include "v2x_msg/msg/detail/d_date_time__traits.hpp"
// Member 'speed'
#include "v2x_msg/msg/detail/transmission_and_speed__traits.hpp"
// Member 'posaccuracy'
#include "v2x_msg/msg/detail/positional_accuracy__traits.hpp"
// Member 'posconfidence'
#include "v2x_msg/msg/detail/position_confidence_set__traits.hpp"
// Member 'speedconfidence'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::FullPositionVector & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: utctime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utctime:\n";
    to_yaml(msg.utctime, out, indentation + 2);
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed:\n";
    to_yaml(msg.speed, out, indentation + 2);
  }

  // member: posaccuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posaccuracy:\n";
    to_yaml(msg.posaccuracy, out, indentation + 2);
  }

  // member: timeconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeconfidence: ";
    value_to_yaml(msg.timeconfidence, out);
    out << "\n";
  }

  // member: posconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posconfidence:\n";
    to_yaml(msg.posconfidence, out, indentation + 2);
  }

  // member: speedconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speedconfidence:\n";
    to_yaml(msg.speedconfidence, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::FullPositionVector & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::FullPositionVector>()
{
  return "v2x_msg::msg::FullPositionVector";
}

template<>
inline const char * name<v2x_msg::msg::FullPositionVector>()
{
  return "v2x_msg/msg/FullPositionVector";
}

template<>
struct has_fixed_size<v2x_msg::msg::FullPositionVector>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::DDateTime>::value && has_fixed_size<v2x_msg::msg::PositionConfidenceSet>::value && has_fixed_size<v2x_msg::msg::PositionalAccuracy>::value && has_fixed_size<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>::value && has_fixed_size<v2x_msg::msg::TransmissionAndSpeed>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::FullPositionVector>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::DDateTime>::value && has_bounded_size<v2x_msg::msg::PositionConfidenceSet>::value && has_bounded_size<v2x_msg::msg::PositionalAccuracy>::value && has_bounded_size<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>::value && has_bounded_size<v2x_msg::msg::TransmissionAndSpeed>::value> {};

template<>
struct is_message<v2x_msg::msg::FullPositionVector>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_
