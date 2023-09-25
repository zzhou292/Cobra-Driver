// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosapi_msgs:srv/Subscribers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosapi_msgs/srv/detail/subscribers__rosidl_typesupport_introspection_c.h"
#include "rosapi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosapi_msgs/srv/detail/subscribers__functions.h"
#include "rosapi_msgs/srv/detail/subscribers__struct.h"


// Include directives for member types
// Member `topic`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi_msgs__srv__Subscribers_Request__init(message_memory);
}

void Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_fini_function(void * message_memory)
{
  rosapi_msgs__srv__Subscribers_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_message_member_array[1] = {
  {
    "topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__srv__Subscribers_Request, topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_message_members = {
  "rosapi_msgs__srv",  // message namespace
  "Subscribers_Request",  // message name
  1,  // number of fields
  sizeof(rosapi_msgs__srv__Subscribers_Request),
  Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_message_member_array,  // message members
  Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_message_type_support_handle = {
  0,
  &Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, Subscribers_Request)() {
  if (!Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_message_type_support_handle.typesupport_identifier) {
    Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Subscribers_Request__rosidl_typesupport_introspection_c__Subscribers_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosapi_msgs/srv/detail/subscribers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosapi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosapi_msgs/srv/detail/subscribers__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/subscribers__struct.h"


// Include directives for member types
// Member `subscribers`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi_msgs__srv__Subscribers_Response__init(message_memory);
}

void Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_fini_function(void * message_memory)
{
  rosapi_msgs__srv__Subscribers_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_message_member_array[1] = {
  {
    "subscribers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__srv__Subscribers_Response, subscribers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_message_members = {
  "rosapi_msgs__srv",  // message namespace
  "Subscribers_Response",  // message name
  1,  // number of fields
  sizeof(rosapi_msgs__srv__Subscribers_Response),
  Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_message_member_array,  // message members
  Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_message_type_support_handle = {
  0,
  &Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, Subscribers_Response)() {
  if (!Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_message_type_support_handle.typesupport_identifier) {
    Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Subscribers_Response__rosidl_typesupport_introspection_c__Subscribers_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosapi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosapi_msgs/srv/detail/subscribers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_service_members = {
  "rosapi_msgs__srv",  // service namespace
  "Subscribers",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_Request_message_type_support_handle,
  NULL  // response message
  // rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_Response_message_type_support_handle
};

static rosidl_service_type_support_t rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_service_type_support_handle = {
  0,
  &rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, Subscribers_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, Subscribers_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, Subscribers)() {
  if (!rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_service_type_support_handle.typesupport_identifier) {
    rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, Subscribers_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, Subscribers_Response)()->data;
  }

  return &rosapi_msgs__srv__detail__subscribers__rosidl_typesupport_introspection_c__Subscribers_service_type_support_handle;
}
