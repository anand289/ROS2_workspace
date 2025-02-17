// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/TestRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/test_robot.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/test_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestRobot_temp
{
public:
  Init_TestRobot_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::msg::TestRobot temp(::my_robot_interfaces::msg::TestRobot::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::TestRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::TestRobot>()
{
  return my_robot_interfaces::msg::builder::Init_TestRobot_temp();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__BUILDER_HPP_
