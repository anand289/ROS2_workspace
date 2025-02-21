// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/alive_turtles.h"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'alive_turtles'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AliveTurtles in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__AliveTurtles
{
  rosidl_runtime_c__String__Sequence alive_turtles;
} my_robot_interfaces__msg__AliveTurtles;

// Struct for a sequence of my_robot_interfaces__msg__AliveTurtles.
typedef struct my_robot_interfaces__msg__AliveTurtles__Sequence
{
  my_robot_interfaces__msg__AliveTurtles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__AliveTurtles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_H_
