// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosapi_msgs:srv/GetActionServers.idl
// generated code does not contain a copyright notice

#include "rosapi_msgs/srv/detail/get_action_servers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__GetActionServers__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0xdd, 0xbf, 0x4e, 0xdb, 0xdd, 0x50, 0xfd,
      0x83, 0x0e, 0x70, 0x0d, 0x46, 0x4b, 0x40, 0xc8,
      0x2b, 0xd4, 0x9f, 0xb0, 0xe4, 0x89, 0x25, 0xa4,
      0x63, 0x80, 0x96, 0xf4, 0x78, 0xbf, 0x32, 0x75,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__GetActionServers_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6d, 0xca, 0x92, 0x1f, 0x46, 0xa0, 0x49, 0x43,
      0xd1, 0xb5, 0xb9, 0x85, 0x78, 0x3e, 0xc3, 0x50,
      0xa5, 0xde, 0x33, 0x2e, 0xe6, 0x72, 0x54, 0x08,
      0x66, 0x80, 0x2c, 0x29, 0x33, 0x95, 0xec, 0xa9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__GetActionServers_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0xa6, 0xf2, 0x49, 0xde, 0xd1, 0xa2, 0xfc,
      0x83, 0x32, 0xf2, 0xb7, 0x4a, 0x4e, 0x98, 0xf0,
      0x0c, 0xdc, 0xd4, 0x12, 0x09, 0xd1, 0x89, 0x84,
      0x33, 0x62, 0x61, 0x55, 0x01, 0x97, 0x1e, 0xff,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__GetActionServers_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x3f, 0x90, 0x5b, 0x19, 0x04, 0x01, 0x68,
      0x12, 0xb7, 0x0d, 0x0b, 0xb7, 0x5c, 0xd2, 0xa6,
      0x53, 0x21, 0x74, 0xb5, 0x7b, 0x82, 0x9e, 0x38,
      0x65, 0x1b, 0xf9, 0xb3, 0xbe, 0x8a, 0xea, 0x84,
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

static char rosapi_msgs__srv__GetActionServers__TYPE_NAME[] = "rosapi_msgs/srv/GetActionServers";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rosapi_msgs__srv__GetActionServers_Event__TYPE_NAME[] = "rosapi_msgs/srv/GetActionServers_Event";
static char rosapi_msgs__srv__GetActionServers_Request__TYPE_NAME[] = "rosapi_msgs/srv/GetActionServers_Request";
static char rosapi_msgs__srv__GetActionServers_Response__TYPE_NAME[] = "rosapi_msgs/srv/GetActionServers_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rosapi_msgs__srv__GetActionServers__FIELD_NAME__request_message[] = "request_message";
static char rosapi_msgs__srv__GetActionServers__FIELD_NAME__response_message[] = "response_message";
static char rosapi_msgs__srv__GetActionServers__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__GetActionServers__FIELDS[] = {
  {
    {rosapi_msgs__srv__GetActionServers__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__GetActionServers_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__GetActionServers_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__GetActionServers_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__GetActionServers__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__GetActionServers__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__GetActionServers__TYPE_NAME, 32, 32},
      {rosapi_msgs__srv__GetActionServers__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__GetActionServers__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__srv__GetActionServers_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__GetActionServers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosapi_msgs__srv__GetActionServers_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__GetActionServers_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__GetActionServers_Request__FIELDS[] = {
  {
    {rosapi_msgs__srv__GetActionServers_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
rosapi_msgs__srv__GetActionServers_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__GetActionServers_Request__TYPE_NAME, 40, 40},
      {rosapi_msgs__srv__GetActionServers_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__GetActionServers_Response__FIELD_NAME__action_servers[] = "action_servers";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__GetActionServers_Response__FIELDS[] = {
  {
    {rosapi_msgs__srv__GetActionServers_Response__FIELD_NAME__action_servers, 14, 14},
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
rosapi_msgs__srv__GetActionServers_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__GetActionServers_Response__TYPE_NAME, 41, 41},
      {rosapi_msgs__srv__GetActionServers_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__GetActionServers_Event__FIELD_NAME__info[] = "info";
static char rosapi_msgs__srv__GetActionServers_Event__FIELD_NAME__request[] = "request";
static char rosapi_msgs__srv__GetActionServers_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__GetActionServers_Event__FIELDS[] = {
  {
    {rosapi_msgs__srv__GetActionServers_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__GetActionServers_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__GetActionServers_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__GetActionServers_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__GetActionServers_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__GetActionServers_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__GetActionServers_Event__TYPE_NAME, 38, 38},
      {rosapi_msgs__srv__GetActionServers_Event__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__GetActionServers_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__srv__GetActionServers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__GetActionServers_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "---\n"
  "string[] action_servers";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__GetActionServers__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__GetActionServers__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__GetActionServers_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__GetActionServers_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__GetActionServers_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__GetActionServers_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__GetActionServers_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__GetActionServers_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__GetActionServers__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__GetActionServers__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__srv__GetActionServers_Event__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__GetActionServers_Request__get_individual_type_description_source(NULL);
    sources[4] = *rosapi_msgs__srv__GetActionServers_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__GetActionServers_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__GetActionServers_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__GetActionServers_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__GetActionServers_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__GetActionServers_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__GetActionServers_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__srv__GetActionServers_Request__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__GetActionServers_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
