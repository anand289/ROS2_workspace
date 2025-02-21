// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/alive_turtles.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/msg/detail/alive_turtles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AliveTurtles & msg,
  std::ostream & out)
{
  out << "{";
  // member: alive_turtles
  {
    if (msg.alive_turtles.size() == 0) {
      out << "alive_turtles: []";
    } else {
      out << "alive_turtles: [";
      size_t pending_items = msg.alive_turtles.size();
      for (auto item : msg.alive_turtles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AliveTurtles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: alive_turtles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alive_turtles.size() == 0) {
      out << "alive_turtles: []\n";
    } else {
      out << "alive_turtles:\n";
      for (auto item : msg.alive_turtles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AliveTurtles & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::msg::AliveTurtles & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::msg::AliveTurtles & msg)
{
  return my_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::msg::AliveTurtles>()
{
  return "my_robot_interfaces::msg::AliveTurtles";
}

template<>
inline const char * name<my_robot_interfaces::msg::AliveTurtles>()
{
  return "my_robot_interfaces/msg/AliveTurtles";
}

template<>
struct has_fixed_size<my_robot_interfaces::msg::AliveTurtles>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::msg::AliveTurtles>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::msg::AliveTurtles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__TRAITS_HPP_
