// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/TestRobot.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/test_robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__TestRobot__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xd7, 0xf1, 0xd0, 0xf0, 0x1f, 0xc0, 0x35,
      0x63, 0x49, 0x9e, 0x3c, 0xc8, 0x11, 0x09, 0xdf,
      0x39, 0xc8, 0xa7, 0x15, 0x2d, 0x72, 0x2a, 0xcf,
      0xdc, 0x28, 0x4c, 0x38, 0xdc, 0x72, 0x42, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__TestRobot__TYPE_NAME[] = "my_robot_interfaces/msg/TestRobot";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__TestRobot__FIELD_NAME__temp[] = "temp";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__TestRobot__FIELDS[] = {
  {
    {my_robot_interfaces__msg__TestRobot__FIELD_NAME__temp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__TestRobot__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__TestRobot__TYPE_NAME, 33, 33},
      {my_robot_interfaces__msg__TestRobot__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 temp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__TestRobot__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__TestRobot__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__TestRobot__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__TestRobot__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
