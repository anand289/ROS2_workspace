// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/LEDBatteryState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_interfaces/msg/detail/led_battery_state__functions.h"
#include "my_robot_interfaces/msg/detail/led_battery_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LEDBatteryState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::msg::LEDBatteryState(_init);
}

void LEDBatteryState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::msg::LEDBatteryState *>(message_memory);
  typed_message->~LEDBatteryState();
}

size_t size_function__LEDBatteryState__led_status(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LEDBatteryState__led_status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LEDBatteryState__led_status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LEDBatteryState__led_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__LEDBatteryState__led_status(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__LEDBatteryState__led_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__LEDBatteryState__led_status(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__LEDBatteryState__led_status(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LEDBatteryState_message_member_array[1] = {
  {
    "led_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::LEDBatteryState, led_status),  // bytes offset in struct
    nullptr,  // default value
    size_function__LEDBatteryState__led_status,  // size() function pointer
    get_const_function__LEDBatteryState__led_status,  // get_const(index) function pointer
    get_function__LEDBatteryState__led_status,  // get(index) function pointer
    fetch_function__LEDBatteryState__led_status,  // fetch(index, &value) function pointer
    assign_function__LEDBatteryState__led_status,  // assign(index, value) function pointer
    resize_function__LEDBatteryState__led_status  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LEDBatteryState_message_members = {
  "my_robot_interfaces::msg",  // message namespace
  "LEDBatteryState",  // message name
  1,  // number of fields
  sizeof(my_robot_interfaces::msg::LEDBatteryState),
  false,  // has_any_key_member_
  LEDBatteryState_message_member_array,  // message members
  LEDBatteryState_init_function,  // function to initialize message memory (memory has to be allocated)
  LEDBatteryState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LEDBatteryState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LEDBatteryState_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__msg__LEDBatteryState__get_type_hash,
  &my_robot_interfaces__msg__LEDBatteryState__get_type_description,
  &my_robot_interfaces__msg__LEDBatteryState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::msg::LEDBatteryState>()
{
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::LEDBatteryState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, msg, LEDBatteryState)() {
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::LEDBatteryState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
