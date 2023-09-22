// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosapi_msgs:srv/ServiceResponseDetails.idl
// generated code does not contain a copyright notice

#include "rosapi_msgs/srv/detail/service_response_details__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__ServiceResponseDetails__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x9f, 0x3f, 0xdc, 0x30, 0x8c, 0x55, 0xb6,
      0xed, 0xd8, 0xc8, 0xc6, 0xf3, 0xca, 0x4c, 0xba,
      0xb8, 0x9e, 0xd8, 0x90, 0xbf, 0x6a, 0xe3, 0x61,
      0x14, 0x0e, 0x37, 0x01, 0x5a, 0x7c, 0x18, 0x18,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__ServiceResponseDetails_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xd4, 0x67, 0xd8, 0x85, 0xf9, 0x4f, 0x0f,
      0x78, 0x57, 0x1d, 0x90, 0x51, 0x0a, 0x37, 0x03,
      0x9c, 0xc3, 0xd9, 0x11, 0xed, 0x89, 0x8d, 0x6f,
      0x4b, 0x58, 0x88, 0xbc, 0xe0, 0x06, 0x9d, 0xaf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__ServiceResponseDetails_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0xc8, 0xba, 0xed, 0x04, 0x6f, 0xac, 0x40,
      0x01, 0xa3, 0xcb, 0xf6, 0x87, 0x16, 0xeb, 0x54,
      0xe6, 0x9c, 0xe5, 0x40, 0x37, 0x7a, 0x4b, 0x9c,
      0xad, 0x1c, 0x6b, 0xde, 0x0f, 0x63, 0x13, 0x78,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__ServiceResponseDetails_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0xc5, 0xf2, 0x97, 0xb7, 0x52, 0x0e, 0xc1,
      0x43, 0xc5, 0x54, 0xf0, 0xd5, 0xd6, 0x56, 0x4a,
      0x24, 0x17, 0x50, 0x00, 0x43, 0xf1, 0x9d, 0x7f,
      0xe6, 0xa4, 0x07, 0xa4, 0xeb, 0xbc, 0x29, 0x22,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "rosapi_msgs/msg/detail/type_def__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rosapi_msgs__msg__TypeDef__EXPECTED_HASH = {1, {
    0xdc, 0xd2, 0x54, 0x91, 0x39, 0xd3, 0xfd, 0xb4,
    0x32, 0xe7, 0xf9, 0x25, 0xfe, 0x79, 0xe9, 0xfb,
    0x4f, 0x02, 0x88, 0x9c, 0x79, 0xbe, 0x45, 0xf7,
    0x48, 0x2c, 0x34, 0x67, 0x06, 0x73, 0x49, 0x28,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rosapi_msgs__srv__ServiceResponseDetails__TYPE_NAME[] = "rosapi_msgs/srv/ServiceResponseDetails";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rosapi_msgs__msg__TypeDef__TYPE_NAME[] = "rosapi_msgs/msg/TypeDef";
static char rosapi_msgs__srv__ServiceResponseDetails_Event__TYPE_NAME[] = "rosapi_msgs/srv/ServiceResponseDetails_Event";
static char rosapi_msgs__srv__ServiceResponseDetails_Request__TYPE_NAME[] = "rosapi_msgs/srv/ServiceResponseDetails_Request";
static char rosapi_msgs__srv__ServiceResponseDetails_Response__TYPE_NAME[] = "rosapi_msgs/srv/ServiceResponseDetails_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rosapi_msgs__srv__ServiceResponseDetails__FIELD_NAME__request_message[] = "request_message";
static char rosapi_msgs__srv__ServiceResponseDetails__FIELD_NAME__response_message[] = "response_message";
static char rosapi_msgs__srv__ServiceResponseDetails__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__ServiceResponseDetails__FIELDS[] = {
  {
    {rosapi_msgs__srv__ServiceResponseDetails__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__ServiceResponseDetails_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__ServiceResponseDetails_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__ServiceResponseDetails_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__ServiceResponseDetails__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__msg__TypeDef__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__ServiceResponseDetails__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__ServiceResponseDetails__TYPE_NAME, 38, 38},
      {rosapi_msgs__srv__ServiceResponseDetails__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__ServiceResponseDetails__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rosapi_msgs__msg__TypeDef__EXPECTED_HASH, rosapi_msgs__msg__TypeDef__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__msg__TypeDef__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__ServiceResponseDetails_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosapi_msgs__srv__ServiceResponseDetails_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rosapi_msgs__srv__ServiceResponseDetails_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__ServiceResponseDetails_Request__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__ServiceResponseDetails_Request__FIELDS[] = {
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Request__FIELD_NAME__type, 4, 4},
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
rosapi_msgs__srv__ServiceResponseDetails_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__ServiceResponseDetails_Request__TYPE_NAME, 46, 46},
      {rosapi_msgs__srv__ServiceResponseDetails_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__ServiceResponseDetails_Response__FIELD_NAME__typedefs[] = "typedefs";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__ServiceResponseDetails_Response__FIELDS[] = {
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Response__FIELD_NAME__typedefs, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rosapi_msgs__msg__TypeDef__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__ServiceResponseDetails_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rosapi_msgs__msg__TypeDef__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__ServiceResponseDetails_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__ServiceResponseDetails_Response__TYPE_NAME, 47, 47},
      {rosapi_msgs__srv__ServiceResponseDetails_Response__FIELDS, 1, 1},
    },
    {rosapi_msgs__srv__ServiceResponseDetails_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rosapi_msgs__msg__TypeDef__EXPECTED_HASH, rosapi_msgs__msg__TypeDef__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rosapi_msgs__msg__TypeDef__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__ServiceResponseDetails_Event__FIELD_NAME__info[] = "info";
static char rosapi_msgs__srv__ServiceResponseDetails_Event__FIELD_NAME__request[] = "request";
static char rosapi_msgs__srv__ServiceResponseDetails_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__ServiceResponseDetails_Event__FIELDS[] = {
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__ServiceResponseDetails_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__ServiceResponseDetails_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__ServiceResponseDetails_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__msg__TypeDef__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__ServiceResponseDetails_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__ServiceResponseDetails_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__ServiceResponseDetails_Event__TYPE_NAME, 44, 44},
      {rosapi_msgs__srv__ServiceResponseDetails_Event__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__ServiceResponseDetails_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rosapi_msgs__msg__TypeDef__EXPECTED_HASH, rosapi_msgs__msg__TypeDef__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__msg__TypeDef__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__ServiceResponseDetails_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosapi_msgs__srv__ServiceResponseDetails_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string type\n"
  "---\n"
  "TypeDef[] typedefs";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__ServiceResponseDetails__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__ServiceResponseDetails__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__ServiceResponseDetails_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__ServiceResponseDetails_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__ServiceResponseDetails_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__ServiceResponseDetails_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__ServiceResponseDetails_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__ServiceResponseDetails_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__ServiceResponseDetails__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__ServiceResponseDetails__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__msg__TypeDef__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__ServiceResponseDetails_Event__get_individual_type_description_source(NULL);
    sources[4] = *rosapi_msgs__srv__ServiceResponseDetails_Request__get_individual_type_description_source(NULL);
    sources[5] = *rosapi_msgs__srv__ServiceResponseDetails_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__ServiceResponseDetails_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__ServiceResponseDetails_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__ServiceResponseDetails_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__ServiceResponseDetails_Response__get_individual_type_description_source(NULL),
    sources[1] = *rosapi_msgs__msg__TypeDef__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__ServiceResponseDetails_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__ServiceResponseDetails_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__msg__TypeDef__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__ServiceResponseDetails_Request__get_individual_type_description_source(NULL);
    sources[4] = *rosapi_msgs__srv__ServiceResponseDetails_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
