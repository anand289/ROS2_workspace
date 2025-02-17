// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/TestRobot.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_interfaces/msg/detail/test_robot__functions.h"
#include "my_robot_interfaces/msg/detail/test_robot__struct.hpp"
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

void TestRobot_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::msg::TestRobot(_init);
}

void TestRobot_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::msg::TestRobot *>(message_memory);
  typed_message->~TestRobot();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestRobot_message_member_array[1] = {
  {
    "temp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::TestRobot, temp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestRobot_message_members = {
  "my_robot_interfaces::msg",  // message namespace
  "TestRobot",  // message name
  1,  // number of fields
  sizeof(my_robot_interfaces::msg::TestRobot),
  false,  // has_any_key_member_
  TestRobot_message_member_array,  // message members
  TestRobot_init_function,  // function to initialize message memory (memory has to be allocated)
  TestRobot_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestRobot_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestRobot_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__msg__TestRobot__get_type_hash,
  &my_robot_interfaces__msg__TestRobot__get_type_description,
  &my_robot_interfaces__msg__TestRobot__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::msg::TestRobot>()
{
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::TestRobot_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, msg, TestRobot)() {
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::TestRobot_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
