// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/alive_turtles.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/alive_turtles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_AliveTurtles_next_turtle
{
public:
  Init_AliveTurtles_next_turtle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::msg::AliveTurtles next_turtle(::my_robot_interfaces::msg::AliveTurtles::_next_turtle_type arg)
  {
    msg_.next_turtle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::AliveTurtles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::AliveTurtles>()
{
  return my_robot_interfaces::msg::builder::Init_AliveTurtles_next_turtle();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__BUILDER_HPP_
