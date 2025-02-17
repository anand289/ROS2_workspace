// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/TestRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/test_robot.h"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TestRobot in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__TestRobot
{
  int64_t temp;
} my_robot_interfaces__msg__TestRobot;

// Struct for a sequence of my_robot_interfaces__msg__TestRobot.
typedef struct my_robot_interfaces__msg__TestRobot__Sequence
{
  my_robot_interfaces__msg__TestRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__TestRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__STRUCT_H_
