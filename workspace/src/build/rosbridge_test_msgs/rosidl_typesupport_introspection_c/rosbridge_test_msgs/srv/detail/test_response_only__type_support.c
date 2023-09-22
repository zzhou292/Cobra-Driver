// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosbridge_test_msgs:srv/TestResponseOnly.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosbridge_test_msgs/srv/detail/test_response_only__rosidl_typesupport_introspection_c.h"
#include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosbridge_test_msgs/srv/detail/test_response_only__functions.h"
#include "rosbridge_test_msgs/srv/detail/test_response_only__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__srv__TestResponseOnly_Request__init(message_memory);
}

void rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_fini_function(void * message_memory)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__srv__TestResponseOnly_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_members = {
  "rosbridge_test_msgs__srv",  // message namespace
  "TestResponseOnly_Request",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__srv__TestResponseOnly_Request),
  rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_member_array,  // message members
  rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_type_support_handle = {
  0,
  &rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_members,
  get_message_typesupport_handle_function,
  &rosbridge_test_msgs__srv__TestResponseOnly_Request__get_type_hash,
  &rosbridge_test_msgs__srv__TestResponseOnly_Request__get_type_description,
  &rosbridge_test_msgs__srv__TestResponseOnly_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Request)() {
  if (!rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_response_only__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_response_only__functions.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_response_only__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__srv__TestResponseOnly_Response__init(message_memory);
}

void rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_fini_function(void * message_memory)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__srv__TestResponseOnly_Response, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_members = {
  "rosbridge_test_msgs__srv",  // message namespace
  "TestResponseOnly_Response",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__srv__TestResponseOnly_Response),
  rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_member_array,  // message members
  rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_type_support_handle = {
  0,
  &rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_members,
  get_message_typesupport_handle_function,
  &rosbridge_test_msgs__srv__TestResponseOnly_Response__get_type_hash,
  &rosbridge_test_msgs__srv__TestResponseOnly_Response__get_type_description,
  &rosbridge_test_msgs__srv__TestResponseOnly_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Response)() {
  if (!rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_response_only__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_response_only__functions.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_response_only__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "rosbridge_test_msgs/srv/test_response_only.h"
// Member `request`
// Member `response`
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_response_only__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__srv__TestResponseOnly_Event__init(message_memory);
}

void rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_fini_function(void * message_memory)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Event__fini(message_memory);
}

size_t rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__size_function__TestResponseOnly_Event__request(
  const void * untyped_member)
{
  const rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence * member =
    (const rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_const_function__TestResponseOnly_Event__request(
  const void * untyped_member, size_t index)
{
  const rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence * member =
    (const rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_function__TestResponseOnly_Event__request(
  void * untyped_member, size_t index)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence * member =
    (rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__fetch_function__TestResponseOnly_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosbridge_test_msgs__srv__TestResponseOnly_Request * item =
    ((const rosbridge_test_msgs__srv__TestResponseOnly_Request *)
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_const_function__TestResponseOnly_Event__request(untyped_member, index));
  rosbridge_test_msgs__srv__TestResponseOnly_Request * value =
    (rosbridge_test_msgs__srv__TestResponseOnly_Request *)(untyped_value);
  *value = *item;
}

void rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__assign_function__TestResponseOnly_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Request * item =
    ((rosbridge_test_msgs__srv__TestResponseOnly_Request *)
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_function__TestResponseOnly_Event__request(untyped_member, index));
  const rosbridge_test_msgs__srv__TestResponseOnly_Request * value =
    (const rosbridge_test_msgs__srv__TestResponseOnly_Request *)(untyped_value);
  *item = *value;
}

bool rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__resize_function__TestResponseOnly_Event__request(
  void * untyped_member, size_t size)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence * member =
    (rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence *)(untyped_member);
  rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence__fini(member);
  return rosbridge_test_msgs__srv__TestResponseOnly_Request__Sequence__init(member, size);
}

size_t rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__size_function__TestResponseOnly_Event__response(
  const void * untyped_member)
{
  const rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence * member =
    (const rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_const_function__TestResponseOnly_Event__response(
  const void * untyped_member, size_t index)
{
  const rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence * member =
    (const rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_function__TestResponseOnly_Event__response(
  void * untyped_member, size_t index)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence * member =
    (rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__fetch_function__TestResponseOnly_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosbridge_test_msgs__srv__TestResponseOnly_Response * item =
    ((const rosbridge_test_msgs__srv__TestResponseOnly_Response *)
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_const_function__TestResponseOnly_Event__response(untyped_member, index));
  rosbridge_test_msgs__srv__TestResponseOnly_Response * value =
    (rosbridge_test_msgs__srv__TestResponseOnly_Response *)(untyped_value);
  *value = *item;
}

void rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__assign_function__TestResponseOnly_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Response * item =
    ((rosbridge_test_msgs__srv__TestResponseOnly_Response *)
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_function__TestResponseOnly_Event__response(untyped_member, index));
  const rosbridge_test_msgs__srv__TestResponseOnly_Response * value =
    (const rosbridge_test_msgs__srv__TestResponseOnly_Response *)(untyped_value);
  *item = *value;
}

bool rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__resize_function__TestResponseOnly_Event__response(
  void * untyped_member, size_t size)
{
  rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence * member =
    (rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence *)(untyped_member);
  rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence__fini(member);
  return rosbridge_test_msgs__srv__TestResponseOnly_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__srv__TestResponseOnly_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rosbridge_test_msgs__srv__TestResponseOnly_Event, request),  // bytes offset in struct
    NULL,  // default value
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__size_function__TestResponseOnly_Event__request,  // size() function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_const_function__TestResponseOnly_Event__request,  // get_const(index) function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_function__TestResponseOnly_Event__request,  // get(index) function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__fetch_function__TestResponseOnly_Event__request,  // fetch(index, &value) function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__assign_function__TestResponseOnly_Event__request,  // assign(index, value) function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__resize_function__TestResponseOnly_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rosbridge_test_msgs__srv__TestResponseOnly_Event, response),  // bytes offset in struct
    NULL,  // default value
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__size_function__TestResponseOnly_Event__response,  // size() function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_const_function__TestResponseOnly_Event__response,  // get_const(index) function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__get_function__TestResponseOnly_Event__response,  // get(index) function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__fetch_function__TestResponseOnly_Event__response,  // fetch(index, &value) function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__assign_function__TestResponseOnly_Event__response,  // assign(index, value) function pointer
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__resize_function__TestResponseOnly_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_members = {
  "rosbridge_test_msgs__srv",  // message namespace
  "TestResponseOnly_Event",  // message name
  3,  // number of fields
  sizeof(rosbridge_test_msgs__srv__TestResponseOnly_Event),
  rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_member_array,  // message members
  rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_type_support_handle = {
  0,
  &rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_members,
  get_message_typesupport_handle_function,
  &rosbridge_test_msgs__srv__TestResponseOnly_Event__get_type_hash,
  &rosbridge_test_msgs__srv__TestResponseOnly_Event__get_type_description,
  &rosbridge_test_msgs__srv__TestResponseOnly_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Event)() {
  rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Request)();
  rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Response)();
  if (!rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_response_only__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_service_members = {
  "rosbridge_test_msgs__srv",  // service namespace
  "TestResponseOnly",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_type_support_handle,
  NULL,  // response message
  // rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_type_support_handle
  NULL  // event_message
  // rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_type_support_handle
};


static rosidl_service_type_support_t rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_service_type_support_handle = {
  0,
  &rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_service_members,
  get_service_typesupport_handle_function,
  &rosbridge_test_msgs__srv__TestResponseOnly_Request__rosidl_typesupport_introspection_c__TestResponseOnly_Request_message_type_support_handle,
  &rosbridge_test_msgs__srv__TestResponseOnly_Response__rosidl_typesupport_introspection_c__TestResponseOnly_Response_message_type_support_handle,
  &rosbridge_test_msgs__srv__TestResponseOnly_Event__rosidl_typesupport_introspection_c__TestResponseOnly_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rosbridge_test_msgs,
    srv,
    TestResponseOnly
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rosbridge_test_msgs,
    srv,
    TestResponseOnly
  ),
  &rosbridge_test_msgs__srv__TestResponseOnly__get_type_hash,
  &rosbridge_test_msgs__srv__TestResponseOnly__get_type_description,
  &rosbridge_test_msgs__srv__TestResponseOnly__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly)() {
  if (!rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_service_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, srv, TestResponseOnly_Event)()->data;
  }

  return &rosbridge_test_msgs__srv__detail__test_response_only__rosidl_typesupport_introspection_c__TestResponseOnly_service_type_support_handle;
}
