// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/LEDBatteryState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/led_battery_state.h"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_BATTERY_STATE__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'led_status'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LEDBatteryState in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__LEDBatteryState
{
  rosidl_runtime_c__int64__Sequence led_status;
} my_robot_interfaces__msg__LEDBatteryState;

// Struct for a sequence of my_robot_interfaces__msg__LEDBatteryState.
typedef struct my_robot_interfaces__msg__LEDBatteryState__Sequence
{
  my_robot_interfaces__msg__LEDBatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__LEDBatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_BATTERY_STATE__STRUCT_H_
