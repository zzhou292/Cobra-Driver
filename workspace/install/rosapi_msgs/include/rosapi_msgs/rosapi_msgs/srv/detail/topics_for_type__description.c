// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosapi_msgs:srv/TopicsForType.idl
// generated code does not contain a copyright notice

#include "rosapi_msgs/srv/detail/topics_for_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__TopicsForType__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0xf1, 0x93, 0xf3, 0x25, 0x08, 0xdd, 0x6c,
      0x9e, 0xf4, 0x28, 0x32, 0x6f, 0x00, 0xd0, 0xae,
      0xf2, 0xf5, 0x85, 0xd1, 0x54, 0x36, 0xfe, 0xc6,
      0x5b, 0x26, 0x2e, 0x6d, 0xdc, 0xe2, 0x0c, 0x96,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__TopicsForType_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x13, 0xb1, 0xe8, 0x0f, 0xf3, 0x9d, 0x1c,
      0xba, 0x1d, 0x18, 0x80, 0x3c, 0x26, 0xf3, 0x91,
      0x6a, 0x14, 0x5e, 0x98, 0xc3, 0xc1, 0xe1, 0xb1,
      0xa8, 0x91, 0x6d, 0x9b, 0xa7, 0x8d, 0x0b, 0x69,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__TopicsForType_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0xa9, 0xd3, 0xc9, 0x0f, 0xfe, 0x14, 0xd7,
      0xc6, 0x55, 0xe5, 0x0a, 0x49, 0x90, 0x9f, 0xd3,
      0x2d, 0x31, 0x3a, 0x9c, 0x1f, 0x94, 0x52, 0xc1,
      0xb8, 0x6f, 0xbd, 0x41, 0x1f, 0x31, 0xff, 0x8f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__TopicsForType_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x44, 0x92, 0x9b, 0xc6, 0x9f, 0x06, 0x6b,
      0x33, 0x14, 0xed, 0x1f, 0x4d, 0xa2, 0x33, 0x71,
      0x3e, 0xd8, 0x1d, 0xe7, 0xa8, 0x46, 0x1d, 0xe2,
      0xf8, 0xe9, 0x67, 0x32, 0xe4, 0x46, 0x23, 0x57,
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

static char rosapi_msgs__srv__TopicsForType__TYPE_NAME[] = "rosapi_msgs/srv/TopicsForType";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rosapi_msgs__srv__TopicsForType_Event__TYPE_NAME[] = "rosapi_msgs/srv/TopicsForType_Event";
static char rosapi_msgs__srv__TopicsForType_Request__TYPE_NAME[] = "rosapi_msgs/srv/TopicsForType_Request";
static char rosapi_msgs__srv__TopicsForType_Response__TYPE_NAME[] = "rosapi_msgs/srv/TopicsForType_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rosapi_msgs__srv__TopicsForType__FIELD_NAME__request_message[] = "request_message";
static char rosapi_msgs__srv__TopicsForType__FIELD_NAME__response_message[] = "response_message";
static char rosapi_msgs__srv__TopicsForType__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__TopicsForType__FIELDS[] = {
  {
    {rosapi_msgs__srv__TopicsForType__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__TopicsForType_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__TopicsForType_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__TopicsForType_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__TopicsForType__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__TopicsForType__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__TopicsForType__TYPE_NAME, 29, 29},
      {rosapi_msgs__srv__TopicsForType__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__TopicsForType__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__srv__TopicsForType_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__TopicsForType_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosapi_msgs__srv__TopicsForType_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__TopicsForType_Request__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__TopicsForType_Request__FIELDS[] = {
  {
    {rosapi_msgs__srv__TopicsForType_Request__FIELD_NAME__type, 4, 4},
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
rosapi_msgs__srv__TopicsForType_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__TopicsForType_Request__TYPE_NAME, 37, 37},
      {rosapi_msgs__srv__TopicsForType_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__TopicsForType_Response__FIELD_NAME__topics[] = "topics";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__TopicsForType_Response__FIELDS[] = {
  {
    {rosapi_msgs__srv__TopicsForType_Response__FIELD_NAME__topics, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__TopicsForType_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__TopicsForType_Response__TYPE_NAME, 38, 38},
      {rosapi_msgs__srv__TopicsForType_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__TopicsForType_Event__FIELD_NAME__info[] = "info";
static char rosapi_msgs__srv__TopicsForType_Event__FIELD_NAME__request[] = "request";
static char rosapi_msgs__srv__TopicsForType_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__TopicsForType_Event__FIELDS[] = {
  {
    {rosapi_msgs__srv__TopicsForType_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__TopicsForType_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__TopicsForType_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__TopicsForType_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__TopicsForType_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__TopicsForType_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__TopicsForType_Event__TYPE_NAME, 35, 35},
      {rosapi_msgs__srv__TopicsForType_Event__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__TopicsForType_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__srv__TopicsForType_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__TopicsForType_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string type\n"
  "---\n"
  "string[] topics";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__TopicsForType__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__TopicsForType__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__TopicsForType_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__TopicsForType_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__TopicsForType_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__TopicsForType_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__TopicsForType_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__TopicsForType_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__TopicsForType__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__TopicsForType__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__srv__TopicsForType_Event__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__TopicsForType_Request__get_individual_type_description_source(NULL);
    sources[4] = *rosapi_msgs__srv__TopicsForType_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__TopicsForType_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__TopicsForType_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__TopicsForType_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__TopicsForType_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__TopicsForType_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__TopicsForType_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__srv__TopicsForType_Request__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__TopicsForType_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}