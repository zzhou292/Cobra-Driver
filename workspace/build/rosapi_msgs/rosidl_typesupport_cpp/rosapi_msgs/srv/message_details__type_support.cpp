// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:srv/MessageDetails.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosapi_msgs/srv/detail/message_details__functions.h"
#include "rosapi_msgs/srv/detail/message_details__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageDetails_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageDetails_Request_type_support_ids_t;

static const _MessageDetails_Request_type_support_ids_t _MessageDetails_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageDetails_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageDetails_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageDetails_Request_type_support_symbol_names_t _MessageDetails_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, MessageDetails_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, MessageDetails_Request)),
  }
};

typedef struct _MessageDetails_Request_type_support_data_t
{
  void * data[2];
} _MessageDetails_Request_type_support_data_t;

static _MessageDetails_Request_type_support_data_t _MessageDetails_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageDetails_Request_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_MessageDetails_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MessageDetails_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MessageDetails_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageDetails_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageDetails_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__MessageDetails_Request__get_type_hash,
  &rosapi_msgs__srv__MessageDetails_Request__get_type_description,
  &rosapi_msgs__srv__MessageDetails_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Request>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::MessageDetails_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, MessageDetails_Request)() {
  return get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosapi_msgs/srv/detail/message_details__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/message_details__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageDetails_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageDetails_Response_type_support_ids_t;

static const _MessageDetails_Response_type_support_ids_t _MessageDetails_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageDetails_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageDetails_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageDetails_Response_type_support_symbol_names_t _MessageDetails_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, MessageDetails_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, MessageDetails_Response)),
  }
};

typedef struct _MessageDetails_Response_type_support_data_t
{
  void * data[2];
} _MessageDetails_Response_type_support_data_t;

static _MessageDetails_Response_type_support_data_t _MessageDetails_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageDetails_Response_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_MessageDetails_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MessageDetails_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MessageDetails_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageDetails_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageDetails_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__MessageDetails_Response__get_type_hash,
  &rosapi_msgs__srv__MessageDetails_Response__get_type_description,
  &rosapi_msgs__srv__MessageDetails_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Response>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::MessageDetails_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, MessageDetails_Response)() {
  return get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosapi_msgs/srv/detail/message_details__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/message_details__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageDetails_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageDetails_Event_type_support_ids_t;

static const _MessageDetails_Event_type_support_ids_t _MessageDetails_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageDetails_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageDetails_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageDetails_Event_type_support_symbol_names_t _MessageDetails_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, MessageDetails_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, MessageDetails_Event)),
  }
};

typedef struct _MessageDetails_Event_type_support_data_t
{
  void * data[2];
} _MessageDetails_Event_type_support_data_t;

static _MessageDetails_Event_type_support_data_t _MessageDetails_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageDetails_Event_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_MessageDetails_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MessageDetails_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MessageDetails_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageDetails_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageDetails_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__MessageDetails_Event__get_type_hash,
  &rosapi_msgs__srv__MessageDetails_Event__get_type_description,
  &rosapi_msgs__srv__MessageDetails_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Event>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::MessageDetails_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, MessageDetails_Event)() {
  return get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosapi_msgs/srv/detail/message_details__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageDetails_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageDetails_type_support_ids_t;

static const _MessageDetails_type_support_ids_t _MessageDetails_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageDetails_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageDetails_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageDetails_type_support_symbol_names_t _MessageDetails_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, MessageDetails)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, MessageDetails)),
  }
};

typedef struct _MessageDetails_type_support_data_t
{
  void * data[2];
} _MessageDetails_type_support_data_t;

static _MessageDetails_type_support_data_t _MessageDetails_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageDetails_service_typesupport_map = {
  2,
  "rosapi_msgs",
  &_MessageDetails_service_typesupport_ids.typesupport_identifier[0],
  &_MessageDetails_service_typesupport_symbol_names.symbol_name[0],
  &_MessageDetails_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MessageDetails_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageDetails_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::MessageDetails_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rosapi_msgs::srv::MessageDetails>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rosapi_msgs::srv::MessageDetails>,
  &rosapi_msgs__srv__MessageDetails__get_type_hash,
  &rosapi_msgs__srv__MessageDetails__get_type_description,
  &rosapi_msgs__srv__MessageDetails__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosapi_msgs::srv::MessageDetails>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::MessageDetails_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
