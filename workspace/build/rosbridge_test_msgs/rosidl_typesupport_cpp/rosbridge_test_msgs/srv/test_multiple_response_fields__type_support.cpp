// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rosbridge_test_msgs:srv/TestMultipleResponseFields.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__functions.h"
#include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestMultipleResponseFields_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestMultipleResponseFields_Request_type_support_ids_t;

static const _TestMultipleResponseFields_Request_type_support_ids_t _TestMultipleResponseFields_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestMultipleResponseFields_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestMultipleResponseFields_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestMultipleResponseFields_Request_type_support_symbol_names_t _TestMultipleResponseFields_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Request)),
  }
};

typedef struct _TestMultipleResponseFields_Request_type_support_data_t
{
  void * data[2];
} _TestMultipleResponseFields_Request_type_support_data_t;

static _TestMultipleResponseFields_Request_type_support_data_t _TestMultipleResponseFields_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestMultipleResponseFields_Request_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestMultipleResponseFields_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TestMultipleResponseFields_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TestMultipleResponseFields_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestMultipleResponseFields_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestMultipleResponseFields_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__get_type_hash,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__get_type_description,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request>()
{
  return &::rosbridge_test_msgs::srv::rosidl_typesupport_cpp::TestMultipleResponseFields_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Request)() {
  return get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request>();
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
// #include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__struct.hpp"
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

namespace rosbridge_test_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestMultipleResponseFields_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestMultipleResponseFields_Response_type_support_ids_t;

static const _TestMultipleResponseFields_Response_type_support_ids_t _TestMultipleResponseFields_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestMultipleResponseFields_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestMultipleResponseFields_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestMultipleResponseFields_Response_type_support_symbol_names_t _TestMultipleResponseFields_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Response)),
  }
};

typedef struct _TestMultipleResponseFields_Response_type_support_data_t
{
  void * data[2];
} _TestMultipleResponseFields_Response_type_support_data_t;

static _TestMultipleResponseFields_Response_type_support_data_t _TestMultipleResponseFields_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestMultipleResponseFields_Response_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestMultipleResponseFields_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TestMultipleResponseFields_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TestMultipleResponseFields_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestMultipleResponseFields_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestMultipleResponseFields_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__get_type_hash,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__get_type_description,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response>()
{
  return &::rosbridge_test_msgs::srv::rosidl_typesupport_cpp::TestMultipleResponseFields_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Response)() {
  return get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response>();
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
// #include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__struct.hpp"
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

namespace rosbridge_test_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestMultipleResponseFields_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestMultipleResponseFields_Event_type_support_ids_t;

static const _TestMultipleResponseFields_Event_type_support_ids_t _TestMultipleResponseFields_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestMultipleResponseFields_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestMultipleResponseFields_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestMultipleResponseFields_Event_type_support_symbol_names_t _TestMultipleResponseFields_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Event)),
  }
};

typedef struct _TestMultipleResponseFields_Event_type_support_data_t
{
  void * data[2];
} _TestMultipleResponseFields_Event_type_support_data_t;

static _TestMultipleResponseFields_Event_type_support_data_t _TestMultipleResponseFields_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestMultipleResponseFields_Event_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestMultipleResponseFields_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TestMultipleResponseFields_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TestMultipleResponseFields_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestMultipleResponseFields_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestMultipleResponseFields_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Event__get_type_hash,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Event__get_type_description,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Event>()
{
  return &::rosbridge_test_msgs::srv::rosidl_typesupport_cpp::TestMultipleResponseFields_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields_Event)() {
  return get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Event>();
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
// #include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestMultipleResponseFields_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestMultipleResponseFields_type_support_ids_t;

static const _TestMultipleResponseFields_type_support_ids_t _TestMultipleResponseFields_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestMultipleResponseFields_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestMultipleResponseFields_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestMultipleResponseFields_type_support_symbol_names_t _TestMultipleResponseFields_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, srv, TestMultipleResponseFields)),
  }
};

typedef struct _TestMultipleResponseFields_type_support_data_t
{
  void * data[2];
} _TestMultipleResponseFields_type_support_data_t;

static _TestMultipleResponseFields_type_support_data_t _TestMultipleResponseFields_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestMultipleResponseFields_service_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestMultipleResponseFields_service_typesupport_ids.typesupport_identifier[0],
  &_TestMultipleResponseFields_service_typesupport_symbol_names.symbol_name[0],
  &_TestMultipleResponseFields_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TestMultipleResponseFields_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestMultipleResponseFields_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rosbridge_test_msgs::srv::TestMultipleResponseFields>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rosbridge_test_msgs::srv::TestMultipleResponseFields>,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields__get_type_hash,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields__get_type_description,
  &rosbridge_test_msgs__srv__TestMultipleResponseFields__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosbridge_test_msgs::srv::TestMultipleResponseFields>()
{
  return &::rosbridge_test_msgs::srv::rosidl_typesupport_cpp::TestMultipleResponseFields_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp