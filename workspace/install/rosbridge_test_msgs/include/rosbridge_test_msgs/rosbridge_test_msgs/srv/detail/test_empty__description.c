// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosbridge_test_msgs:srv/TestEmpty.idl
// generated code does not contain a copyright notice

#include "rosbridge_test_msgs/srv/detail/test_empty__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestEmpty__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x2d, 0x91, 0xb7, 0x54, 0xf9, 0x7f, 0xad,
      0x2c, 0xa0, 0x8b, 0x9c, 0x65, 0xcf, 0x9d, 0x86,
      0x84, 0xf4, 0xc5, 0xbb, 0x40, 0xce, 0xec, 0x72,
      0xb2, 0xc1, 0x87, 0xcc, 0x97, 0x09, 0x26, 0xd6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestEmpty_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0xa7, 0x6c, 0x65, 0xcd, 0x91, 0x21, 0x02,
      0x5a, 0xd2, 0x2a, 0x72, 0xf9, 0xa7, 0xc6, 0x92,
      0x96, 0x6b, 0x92, 0x22, 0xcd, 0x4c, 0xca, 0xcb,
      0xac, 0x4c, 0x6d, 0xd7, 0xb9, 0x94, 0xd7, 0x6c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestEmpty_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0xc2, 0x10, 0xf7, 0x2e, 0xc5, 0xa1, 0x45,
      0xaf, 0x46, 0x87, 0x0b, 0x85, 0x8e, 0x8d, 0x6c,
      0x26, 0x92, 0xf9, 0xe4, 0x10, 0xa7, 0x08, 0xcc,
      0x3f, 0xa2, 0x2b, 0x7a, 0x5f, 0x3e, 0x17, 0xa5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestEmpty_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0xf7, 0xa9, 0xc0, 0x78, 0x12, 0xe4, 0xf3,
      0x2f, 0xa7, 0x87, 0xe6, 0xab, 0x95, 0xb0, 0x64,
      0x00, 0xcf, 0x58, 0x80, 0xdb, 0x34, 0x8b, 0x71,
      0xf4, 0x82, 0x4d, 0x1e, 0x9a, 0x0d, 0x9c, 0x68,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rosbridge_test_msgs__srv__TestEmpty__TYPE_NAME[] = "rosbridge_test_msgs/srv/TestEmpty";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rosbridge_test_msgs__srv__TestEmpty_Event__TYPE_NAME[] = "rosbridge_test_msgs/srv/TestEmpty_Event";
static char rosbridge_test_msgs__srv__TestEmpty_Request__TYPE_NAME[] = "rosbridge_test_msgs/srv/TestEmpty_Request";
static char rosbridge_test_msgs__srv__TestEmpty_Response__TYPE_NAME[] = "rosbridge_test_msgs/srv/TestEmpty_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rosbridge_test_msgs__srv__TestEmpty__FIELD_NAME__request_message[] = "request_message";
static char rosbridge_test_msgs__srv__TestEmpty__FIELD_NAME__response_message[] = "response_message";
static char rosbridge_test_msgs__srv__TestEmpty__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rosbridge_test_msgs__srv__TestEmpty__FIELDS[] = {
  {
    {rosbridge_test_msgs__srv__TestEmpty__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosbridge_test_msgs__srv__TestEmpty_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosbridge_test_msgs__srv__TestEmpty_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosbridge_test_msgs__srv__TestEmpty_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosbridge_test_msgs__srv__TestEmpty__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestEmpty__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbridge_test_msgs__srv__TestEmpty__TYPE_NAME, 33, 33},
      {rosbridge_test_msgs__srv__TestEmpty__FIELDS, 3, 3},
    },
    {rosbridge_test_msgs__srv__TestEmpty__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosbridge_test_msgs__srv__TestEmpty_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosbridge_test_msgs__srv__TestEmpty_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosbridge_test_msgs__srv__TestEmpty_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosbridge_test_msgs__srv__TestEmpty_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rosbridge_test_msgs__srv__TestEmpty_Request__FIELDS[] = {
  {
    {rosbridge_test_msgs__srv__TestEmpty_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestEmpty_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbridge_test_msgs__srv__TestEmpty_Request__TYPE_NAME, 41, 41},
      {rosbridge_test_msgs__srv__TestEmpty_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosbridge_test_msgs__srv__TestEmpty_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rosbridge_test_msgs__srv__TestEmpty_Response__FIELDS[] = {
  {
    {rosbridge_test_msgs__srv__TestEmpty_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestEmpty_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbridge_test_msgs__srv__TestEmpty_Response__TYPE_NAME, 42, 42},
      {rosbridge_test_msgs__srv__TestEmpty_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosbridge_test_msgs__srv__TestEmpty_Event__FIELD_NAME__info[] = "info";
static char rosbridge_test_msgs__srv__TestEmpty_Event__FIELD_NAME__request[] = "request";
static char rosbridge_test_msgs__srv__TestEmpty_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rosbridge_test_msgs__srv__TestEmpty_Event__FIELDS[] = {
  {
    {rosbridge_test_msgs__srv__TestEmpty_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosbridge_test_msgs__srv__TestEmpty_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosbridge_test_msgs__srv__TestEmpty_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosbridge_test_msgs__srv__TestEmpty_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestEmpty_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestEmpty_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbridge_test_msgs__srv__TestEmpty_Event__TYPE_NAME, 39, 39},
      {rosbridge_test_msgs__srv__TestEmpty_Event__FIELDS, 3, 3},
    },
    {rosbridge_test_msgs__srv__TestEmpty_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosbridge_test_msgs__srv__TestEmpty_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosbridge_test_msgs__srv__TestEmpty_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestEmpty__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbridge_test_msgs__srv__TestEmpty__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 4, 4},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestEmpty_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbridge_test_msgs__srv__TestEmpty_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestEmpty_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbridge_test_msgs__srv__TestEmpty_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestEmpty_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbridge_test_msgs__srv__TestEmpty_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestEmpty__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbridge_test_msgs__srv__TestEmpty__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosbridge_test_msgs__srv__TestEmpty_Event__get_individual_type_description_source(NULL);
    sources[3] = *rosbridge_test_msgs__srv__TestEmpty_Request__get_individual_type_description_source(NULL);
    sources[4] = *rosbridge_test_msgs__srv__TestEmpty_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestEmpty_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbridge_test_msgs__srv__TestEmpty_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestEmpty_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbridge_test_msgs__srv__TestEmpty_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestEmpty_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbridge_test_msgs__srv__TestEmpty_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosbridge_test_msgs__srv__TestEmpty_Request__get_individual_type_description_source(NULL);
    sources[3] = *rosbridge_test_msgs__srv__TestEmpty_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}