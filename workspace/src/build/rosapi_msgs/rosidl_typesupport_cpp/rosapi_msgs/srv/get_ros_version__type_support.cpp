// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:srv/GetROSVersion.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosapi_msgs/srv/detail/get_ros_version__functions.h"
#include "rosapi_msgs/srv/detail/get_ros_version__struct.hpp"
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

typedef struct _GetROSVersion_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetROSVersion_Request_type_support_ids_t;

static const _GetROSVersion_Request_type_support_ids_t _GetROSVersion_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetROSVersion_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetROSVersion_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetROSVersion_Request_type_support_symbol_names_t _GetROSVersion_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, GetROSVersion_Request)),
  }
};

typedef struct _GetROSVersion_Request_type_support_data_t
{
  void * data[2];
} _GetROSVersion_Request_type_support_data_t;

static _GetROSVersion_Request_type_support_data_t _GetROSVersion_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetROSVersion_Request_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_GetROSVersion_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetROSVersion_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetROSVersion_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetROSVersion_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetROSVersion_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetROSVersion_Request__get_type_hash,
  &rosapi_msgs__srv__GetROSVersion_Request__get_type_description,
  &rosapi_msgs__srv__GetROSVersion_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Request>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::GetROSVersion_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, GetROSVersion_Request)() {
  return get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Request>();
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
// #include "rosapi_msgs/srv/detail/get_ros_version__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/get_ros_version__struct.hpp"
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

typedef struct _GetROSVersion_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetROSVersion_Response_type_support_ids_t;

static const _GetROSVersion_Response_type_support_ids_t _GetROSVersion_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetROSVersion_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetROSVersion_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetROSVersion_Response_type_support_symbol_names_t _GetROSVersion_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, GetROSVersion_Response)),
  }
};

typedef struct _GetROSVersion_Response_type_support_data_t
{
  void * data[2];
} _GetROSVersion_Response_type_support_data_t;

static _GetROSVersion_Response_type_support_data_t _GetROSVersion_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetROSVersion_Response_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_GetROSVersion_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetROSVersion_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetROSVersion_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetROSVersion_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetROSVersion_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetROSVersion_Response__get_type_hash,
  &rosapi_msgs__srv__GetROSVersion_Response__get_type_description,
  &rosapi_msgs__srv__GetROSVersion_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Response>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::GetROSVersion_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, GetROSVersion_Response)() {
  return get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Response>();
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
// #include "rosapi_msgs/srv/detail/get_ros_version__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/get_ros_version__struct.hpp"
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

typedef struct _GetROSVersion_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetROSVersion_Event_type_support_ids_t;

static const _GetROSVersion_Event_type_support_ids_t _GetROSVersion_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetROSVersion_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetROSVersion_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetROSVersion_Event_type_support_symbol_names_t _GetROSVersion_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, GetROSVersion_Event)),
  }
};

typedef struct _GetROSVersion_Event_type_support_data_t
{
  void * data[2];
} _GetROSVersion_Event_type_support_data_t;

static _GetROSVersion_Event_type_support_data_t _GetROSVersion_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetROSVersion_Event_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_GetROSVersion_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetROSVersion_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetROSVersion_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetROSVersion_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetROSVersion_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetROSVersion_Event__get_type_hash,
  &rosapi_msgs__srv__GetROSVersion_Event__get_type_description,
  &rosapi_msgs__srv__GetROSVersion_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Event>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::GetROSVersion_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, GetROSVersion_Event)() {
  return get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Event>();
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
// #include "rosapi_msgs/srv/detail/get_ros_version__struct.hpp"
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

typedef struct _GetROSVersion_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetROSVersion_type_support_ids_t;

static const _GetROSVersion_type_support_ids_t _GetROSVersion_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetROSVersion_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetROSVersion_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetROSVersion_type_support_symbol_names_t _GetROSVersion_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, GetROSVersion)),
  }
};

typedef struct _GetROSVersion_type_support_data_t
{
  void * data[2];
} _GetROSVersion_type_support_data_t;

static _GetROSVersion_type_support_data_t _GetROSVersion_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetROSVersion_service_typesupport_map = {
  2,
  "rosapi_msgs",
  &_GetROSVersion_service_typesupport_ids.typesupport_identifier[0],
  &_GetROSVersion_service_typesupport_symbol_names.symbol_name[0],
  &_GetROSVersion_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetROSVersion_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetROSVersion_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rosapi_msgs::srv::GetROSVersion>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rosapi_msgs::srv::GetROSVersion>,
  &rosapi_msgs__srv__GetROSVersion__get_type_hash,
  &rosapi_msgs__srv__GetROSVersion__get_type_description,
  &rosapi_msgs__srv__GetROSVersion__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosapi_msgs::srv::GetROSVersion>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::GetROSVersion_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
