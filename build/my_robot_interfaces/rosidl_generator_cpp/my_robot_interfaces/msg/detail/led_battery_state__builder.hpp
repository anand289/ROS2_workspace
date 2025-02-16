// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/LEDBatteryState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/led_battery_state.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_BATTERY_STATE__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_BATTERY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/led_battery_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_LEDBatteryState_led_status
{
public:
  Init_LEDBatteryState_led_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::msg::LEDBatteryState led_status(::my_robot_interfaces::msg::LEDBatteryState::_led_status_type arg)
  {
    msg_.led_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::LEDBatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::LEDBatteryState>()
{
  return my_robot_interfaces::msg::builder::Init_LEDBatteryState_led_status();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_BATTERY_STATE__BUILDER_HPP_
