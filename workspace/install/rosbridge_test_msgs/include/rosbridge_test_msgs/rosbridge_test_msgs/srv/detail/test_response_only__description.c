// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosbridge_test_msgs:srv/TestResponseOnly.idl
// generated code does not contain a copyright notice

#include "rosbridge_test_msgs/srv/detail/test_response_only__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestResponseOnly__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x00, 0x75, 0x58, 0x4d, 0x32, 0x36, 0x51,
      0x95, 0x58, 0xac, 0x1e, 0xcc, 0x59, 0x19, 0x49,
      0xd4, 0xd8, 0x2d, 0xd2, 0x11, 0x13, 0x8a, 0xfc,
      0x54, 0x2b, 0xd0, 0x63, 0x87, 0x2e, 0x58, 0xf6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestResponseOnly_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0x3d, 0xc4, 0xbe, 0x5a, 0x4d, 0xc1, 0x0e,
      0x4c, 0xf2, 0x1e, 0xd6, 0xe6, 0xb6, 0xe9, 0xcf,
      0x36, 0xf4, 0x75, 0x46, 0x39, 0x76, 0x2d, 0x32,
      0xa6, 0x6e, 0x85, 0x60, 0xb8, 0x2e, 0x86, 0xaa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestResponseOnly_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0x8c, 0xe9, 0x60, 0xfe, 0xbd, 0x2d, 0x4a,
      0x29, 0xad, 0xaa, 0x3d, 0x3c, 0x38, 0xca, 0x80,
      0x95, 0x9c, 0x22, 0x1b, 0x0c, 0xdb, 0x7e, 0x38,
      0xf4, 0xf6, 0x2c, 0x93, 0xa7, 0xbf, 0x86, 0xc5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestResponseOnly_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xf4, 0x40, 0x6d, 0xa2, 0xb6, 0xb2, 0xf3,
      0x36, 0xa7, 0x99, 0xf9, 0x25, 0x11, 0x99, 0x8c,
      0x7c, 0x2d, 0xd5, 0xa4, 0x83, 0x78, 0x3b, 0x0d,
      0xa9, 0x99, 0x3a, 0xaa, 0xa8, 0x6c, 0x34, 0xd4,
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

static char rosbridge_test_msgs__srv__TestResponseOnly__TYPE_NAME[] = "rosbridge_test_msgs/srv/TestResponseOnly";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rosbridge_test_msgs__srv__TestResponseOnly_Event__TYPE_NAME[] = "rosbridge_test_msgs/srv/TestResponseOnly_Event";
static char rosbridge_test_msgs__srv__TestResponseOnly_Request__TYPE_NAME[] = "rosbridge_test_msgs/srv/TestResponseOnly_Request";
static char rosbridge_test_msgs__srv__TestResponseOnly_Response__TYPE_NAME[] = "rosbridge_test_msgs/srv/TestResponseOnly_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rosbridge_test_msgs__srv__TestResponseOnly__FIELD_NAME__request_message[] = "request_message";
static char rosbridge_test_msgs__srv__TestResponseOnly__FIELD_NAME__response_message[] = "response_message";
static char rosbridge_test_msgs__srv__TestResponseOnly__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rosbridge_test_msgs__srv__TestResponseOnly__FIELDS[] = {
  {
    {rosbridge_test_msgs__srv__TestResponseOnly__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosbridge_test_msgs__srv__TestResponseOnly_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosbridge_test_msgs__srv__TestResponseOnly_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosbridge_test_msgs__srv__TestResponseOnly_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosbridge_test_msgs__srv__TestResponseOnly__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestResponseOnly__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbridge_test_msgs__srv__TestResponseOnly__TYPE_NAME, 40, 40},
      {rosbridge_test_msgs__srv__TestResponseOnly__FIELDS, 3, 3},
    },
    {rosbridge_test_msgs__srv__TestResponseOnly__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosbridge_test_msgs__srv__TestResponseOnly_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosbridge_test_msgs__srv__TestResponseOnly_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosbridge_test_msgs__srv__TestResponseOnly_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosbridge_test_msgs__srv__TestResponseOnly_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rosbridge_test_msgs__srv__TestResponseOnly_Request__FIELDS[] = {
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
rosbridge_test_msgs__srv__TestResponseOnly_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbridge_test_msgs__srv__TestResponseOnly_Request__TYPE_NAME, 48, 48},
      {rosbridge_test_msgs__srv__TestResponseOnly_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosbridge_test_msgs__srv__TestResponseOnly_Response__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field rosbridge_test_msgs__srv__TestResponseOnly_Response__FIELDS[] = {
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Response__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestResponseOnly_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbridge_test_msgs__srv__TestResponseOnly_Response__TYPE_NAME, 49, 49},
      {rosbridge_test_msgs__srv__TestResponseOnly_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosbridge_test_msgs__srv__TestResponseOnly_Event__FIELD_NAME__info[] = "info";
static char rosbridge_test_msgs__srv__TestResponseOnly_Event__FIELD_NAME__request[] = "request";
static char rosbridge_test_msgs__srv__TestResponseOnly_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rosbridge_test_msgs__srv__TestResponseOnly_Event__FIELDS[] = {
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosbridge_test_msgs__srv__TestResponseOnly_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosbridge_test_msgs__srv__TestResponseOnly_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosbridge_test_msgs__srv__TestResponseOnly_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {rosbridge_test_msgs__srv__TestResponseOnly_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestResponseOnly_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbridge_test_msgs__srv__TestResponseOnly_Event__TYPE_NAME, 46, 46},
      {rosbridge_test_msgs__srv__TestResponseOnly_Event__FIELDS, 3, 3},
    },
    {rosbridge_test_msgs__srv__TestResponseOnly_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosbridge_test_msgs__srv__TestResponseOnly_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosbridge_test_msgs__srv__TestResponseOnly_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "int32 data";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestResponseOnly__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbridge_test_msgs__srv__TestResponseOnly__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestResponseOnly_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbridge_test_msgs__srv__TestResponseOnly_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestResponseOnly_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbridge_test_msgs__srv__TestResponseOnly_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestResponseOnly_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbridge_test_msgs__srv__TestResponseOnly_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestResponseOnly__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbridge_test_msgs__srv__TestResponseOnly__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosbridge_test_msgs__srv__TestResponseOnly_Event__get_individual_type_description_source(NULL);
    sources[3] = *rosbridge_test_msgs__srv__TestResponseOnly_Request__get_individual_type_description_source(NULL);
    sources[4] = *rosbridge_test_msgs__srv__TestResponseOnly_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestResponseOnly_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbridge_test_msgs__srv__TestResponseOnly_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestResponseOnly_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbridge_test_msgs__srv__TestResponseOnly_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestResponseOnly_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbridge_test_msgs__srv__TestResponseOnly_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosbridge_test_msgs__srv__TestResponseOnly_Request__get_individual_type_description_source(NULL);
    sources[3] = *rosbridge_test_msgs__srv__TestResponseOnly_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
