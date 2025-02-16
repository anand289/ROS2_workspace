// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/LEDBatteryState.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/led_battery_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__LEDBatteryState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x0a, 0x40, 0x1d, 0xdc, 0x38, 0xda, 0x8b,
      0xc7, 0xd5, 0x0e, 0x1b, 0x8b, 0xaa, 0x07, 0x74,
      0x92, 0x83, 0x1e, 0xbe, 0x22, 0xd4, 0xd0, 0x77,
      0x8d, 0x63, 0x8b, 0x38, 0x88, 0xe8, 0x71, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__LEDBatteryState__TYPE_NAME[] = "my_robot_interfaces/msg/LEDBatteryState";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__LEDBatteryState__FIELD_NAME__led_status[] = "led_status";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__LEDBatteryState__FIELDS[] = {
  {
    {my_robot_interfaces__msg__LEDBatteryState__FIELD_NAME__led_status, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__LEDBatteryState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__LEDBatteryState__TYPE_NAME, 39, 39},
      {my_robot_interfaces__msg__LEDBatteryState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64[] led_status ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__LEDBatteryState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__LEDBatteryState__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 19, 19},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__LEDBatteryState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__LEDBatteryState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
