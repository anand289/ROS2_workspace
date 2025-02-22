// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/alive_turtles__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__AliveTurtles__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0xbd, 0x76, 0xf3, 0xa8, 0x5e, 0xd3, 0x0c,
      0xb1, 0x65, 0x54, 0xa4, 0xe7, 0xef, 0xdc, 0xad,
      0x66, 0x1b, 0x0d, 0xfa, 0x0f, 0xf1, 0x51, 0x0e,
      0x1b, 0x1c, 0x57, 0x51, 0x05, 0x72, 0xba, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__AliveTurtles__TYPE_NAME[] = "my_robot_interfaces/msg/AliveTurtles";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__AliveTurtles__FIELD_NAME__next_turtle[] = "next_turtle";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__AliveTurtles__FIELDS[] = {
  {
    {my_robot_interfaces__msg__AliveTurtles__FIELD_NAME__next_turtle, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__AliveTurtles__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__AliveTurtles__TYPE_NAME, 36, 36},
      {my_robot_interfaces__msg__AliveTurtles__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string next_turtle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__AliveTurtles__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__AliveTurtles__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 18, 18},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__AliveTurtles__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__AliveTurtles__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
