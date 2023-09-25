// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosbridge_test_msgs:srv/TestArrayRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosbridge_test_msgs/srv/detail/test_array_request__rosidl_typesupport_introspection_c.h"
#include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosbridge_test_msgs/srv/detail/test_array_request__functions.h"
#include "rosbridge_test_msgs/srv/detail/test_array_request__struct.h"


// Include directives for member types
// Member `int_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__srv__TestArrayRequest_Request__init(message_memory);
}

void TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_fini_function(void * message_memory)
{
  rosbridge_test_msgs__srv__TestArrayRequest_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_member_array[1] = {
  {
    "int_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__srv__TestArrayRequest_Request, int_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_members = {
  "rosbridge_test_msgs__srv",  // message namespace
  "TestArrayRequest_Request",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__srv__TestArrayRequest_Request),
  TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_member_array,  // message members
  TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_type_support_handle = {
  0,
  &TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestArrayRequest_Request)() {
  if (!TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_type_support_handle.typesupport_identifier) {
    TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestArrayRequest_Request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_array_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_array_request__functions.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_array_request__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__srv__TestArrayRequest_Response__init(message_memory);
}

void TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_fini_function(void * message_memory)
{
  rosbridge_test_msgs__srv__TestArrayRequest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__srv__TestArrayRequest_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_members = {
  "rosbridge_test_msgs__srv",  // message namespace
  "TestArrayRequest_Response",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__srv__TestArrayRequest_Response),
  TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_member_array,  // message members
  TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_type_support_handle = {
  0,
  &TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestArrayRequest_Response)() {
  if (!TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_type_support_handle.typesupport_identifier) {
    TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestArrayRequest_Response__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_array_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_service_members = {
  "rosbridge_test_msgs__srv",  // service namespace
  "TestArrayRequest",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_Request_message_type_support_handle,
  NULL  // response message
  // rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_Response_message_type_support_handle
};

static rosidl_service_type_support_t rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_service_type_support_handle = {
  0,
  &rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestArrayRequest_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestArrayRequest_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestArrayRequest)() {
  if (!rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_service_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestArrayRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestArrayRequest_Response)()->data;
  }

  return &rosbridge_test_msgs__srv__detail__test_array_request__rosidl_typesupport_introspection_c__TestArrayRequest_service_type_support_handle;
}
