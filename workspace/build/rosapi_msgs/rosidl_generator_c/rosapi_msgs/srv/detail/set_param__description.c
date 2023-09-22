// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosapi_msgs:srv/SetParam.idl
// generated code does not contain a copyright notice

#include "rosapi_msgs/srv/detail/set_param__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__SetParam__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0xa4, 0x91, 0x89, 0x63, 0xca, 0x29, 0x6f,
      0xb2, 0x2c, 0x59, 0x60, 0x79, 0x53, 0xe4, 0x26,
      0xaf, 0xb3, 0xa4, 0x1c, 0x4c, 0x13, 0x15, 0x0b,
      0xf8, 0x69, 0x7d, 0x03, 0x34, 0x30, 0x80, 0xcb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__SetParam_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0xab, 0x32, 0xd6, 0x18, 0xde, 0x36, 0xe5,
      0x3b, 0x14, 0xe1, 0x3e, 0x94, 0xc1, 0x7e, 0x87,
      0x9c, 0x13, 0xe3, 0x76, 0xd3, 0xc2, 0x62, 0x0c,
      0x90, 0x94, 0x02, 0x1c, 0x85, 0x34, 0xfe, 0xfc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__SetParam_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0x65, 0x64, 0xbb, 0x54, 0x79, 0xf7, 0x6c,
      0x39, 0x74, 0x26, 0x40, 0x38, 0xd3, 0x0c, 0x26,
      0xd8, 0x84, 0x68, 0x7f, 0xb6, 0xe0, 0x9a, 0x18,
      0x74, 0x13, 0xcc, 0x43, 0xf5, 0x8c, 0x2b, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__SetParam_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0x6c, 0xfd, 0x63, 0xef, 0x0f, 0x22, 0xd2,
      0x31, 0xb5, 0xe8, 0x77, 0x71, 0x4b, 0x94, 0x60,
      0x89, 0x9a, 0xa3, 0x36, 0x1d, 0x73, 0x39, 0xef,
      0x14, 0xd2, 0x6a, 0x7e, 0xc1, 0x19, 0x6c, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char rosapi_msgs__srv__SetParam__TYPE_NAME[] = "rosapi_msgs/srv/SetParam";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rosapi_msgs__srv__SetParam_Event__TYPE_NAME[] = "rosapi_msgs/srv/SetParam_Event";
static char rosapi_msgs__srv__SetParam_Request__TYPE_NAME[] = "rosapi_msgs/srv/SetParam_Request";
static char rosapi_msgs__srv__SetParam_Response__TYPE_NAME[] = "rosapi_msgs/srv/SetParam_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rosapi_msgs__srv__SetParam__FIELD_NAME__request_message[] = "request_message";
static char rosapi_msgs__srv__SetParam__FIELD_NAME__response_message[] = "response_message";
static char rosapi_msgs__srv__SetParam__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__SetParam__FIELDS[] = {
  {
    {rosapi_msgs__srv__SetParam__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__SetParam_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__SetParam_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__SetParam_Event__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__SetParam__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam_Event__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__SetParam__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__SetParam__TYPE_NAME, 24, 24},
      {rosapi_msgs__srv__SetParam__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__SetParam__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__srv__SetParam_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__SetParam_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosapi_msgs__srv__SetParam_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__SetParam_Request__FIELD_NAME__name[] = "name";
static char rosapi_msgs__srv__SetParam_Request__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__SetParam_Request__FIELDS[] = {
  {
    {rosapi_msgs__srv__SetParam_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam_Request__FIELD_NAME__value, 5, 5},
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
rosapi_msgs__srv__SetParam_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__SetParam_Request__TYPE_NAME, 32, 32},
      {rosapi_msgs__srv__SetParam_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__SetParam_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__SetParam_Response__FIELDS[] = {
  {
    {rosapi_msgs__srv__SetParam_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
rosapi_msgs__srv__SetParam_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__SetParam_Response__TYPE_NAME, 33, 33},
      {rosapi_msgs__srv__SetParam_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__SetParam_Event__FIELD_NAME__info[] = "info";
static char rosapi_msgs__srv__SetParam_Event__FIELD_NAME__request[] = "request";
static char rosapi_msgs__srv__SetParam_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__SetParam_Event__FIELDS[] = {
  {
    {rosapi_msgs__srv__SetParam_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__SetParam_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__SetParam_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__SetParam_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__SetParam_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__SetParam_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__SetParam_Event__TYPE_NAME, 30, 30},
      {rosapi_msgs__srv__SetParam_Event__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__SetParam_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__srv__SetParam_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__SetParam_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string value\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__SetParam__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__SetParam__TYPE_NAME, 24, 24},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__SetParam_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__SetParam_Request__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__SetParam_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__SetParam_Response__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__SetParam_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__SetParam_Event__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__SetParam__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__SetParam__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__srv__SetParam_Event__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__SetParam_Request__get_individual_type_description_source(NULL);
    sources[4] = *rosapi_msgs__srv__SetParam_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__SetParam_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__SetParam_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__SetParam_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__SetParam_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__SetParam_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__SetParam_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__srv__SetParam_Request__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__SetParam_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
