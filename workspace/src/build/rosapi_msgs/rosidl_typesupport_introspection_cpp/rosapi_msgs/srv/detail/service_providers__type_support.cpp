// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:srv/ServiceProviders.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosapi_msgs/srv/detail/service_providers__functions.h"
#include "rosapi_msgs/srv/detail/service_providers__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServiceProviders_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosapi_msgs::srv::ServiceProviders_Request(_init);
}

void ServiceProviders_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosapi_msgs::srv::ServiceProviders_Request *>(message_memory);
  typed_message->~ServiceProviders_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceProviders_Request_message_member_array[1] = {
  {
    "service",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::srv::ServiceProviders_Request, service),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceProviders_Request_message_members = {
  "rosapi_msgs::srv",  // message namespace
  "ServiceProviders_Request",  // message name
  1,  // number of fields
  sizeof(rosapi_msgs::srv::ServiceProviders_Request),
  ServiceProviders_Request_message_member_array,  // message members
  ServiceProviders_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceProviders_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceProviders_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceProviders_Request_message_members,
  get_message_typesupport_handle_function,
  &rosapi_msgs__srv__ServiceProviders_Request__get_type_hash,
  &rosapi_msgs__srv__ServiceProviders_Request__get_type_description,
  &rosapi_msgs__srv__ServiceProviders_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosapi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::ServiceProviders_Request>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceProviders_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, ServiceProviders_Request)() {
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceProviders_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosapi_msgs/srv/detail/service_providers__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/service_providers__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServiceProviders_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosapi_msgs::srv::ServiceProviders_Response(_init);
}

void ServiceProviders_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosapi_msgs::srv::ServiceProviders_Response *>(message_memory);
  typed_message->~ServiceProviders_Response();
}

size_t size_function__ServiceProviders_Response__providers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceProviders_Response__providers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceProviders_Response__providers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServiceProviders_Response__providers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ServiceProviders_Response__providers(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ServiceProviders_Response__providers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ServiceProviders_Response__providers(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ServiceProviders_Response__providers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceProviders_Response_message_member_array[1] = {
  {
    "providers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::srv::ServiceProviders_Response, providers),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceProviders_Response__providers,  // size() function pointer
    get_const_function__ServiceProviders_Response__providers,  // get_const(index) function pointer
    get_function__ServiceProviders_Response__providers,  // get(index) function pointer
    fetch_function__ServiceProviders_Response__providers,  // fetch(index, &value) function pointer
    assign_function__ServiceProviders_Response__providers,  // assign(index, value) function pointer
    resize_function__ServiceProviders_Response__providers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceProviders_Response_message_members = {
  "rosapi_msgs::srv",  // message namespace
  "ServiceProviders_Response",  // message name
  1,  // number of fields
  sizeof(rosapi_msgs::srv::ServiceProviders_Response),
  ServiceProviders_Response_message_member_array,  // message members
  ServiceProviders_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceProviders_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceProviders_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceProviders_Response_message_members,
  get_message_typesupport_handle_function,
  &rosapi_msgs__srv__ServiceProviders_Response__get_type_hash,
  &rosapi_msgs__srv__ServiceProviders_Response__get_type_description,
  &rosapi_msgs__srv__ServiceProviders_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosapi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::ServiceProviders_Response>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceProviders_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, ServiceProviders_Response)() {
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceProviders_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosapi_msgs/srv/detail/service_providers__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/service_providers__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServiceProviders_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosapi_msgs::srv::ServiceProviders_Event(_init);
}

void ServiceProviders_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosapi_msgs::srv::ServiceProviders_Event *>(message_memory);
  typed_message->~ServiceProviders_Event();
}

size_t size_function__ServiceProviders_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rosapi_msgs::srv::ServiceProviders_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceProviders_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rosapi_msgs::srv::ServiceProviders_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceProviders_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rosapi_msgs::srv::ServiceProviders_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServiceProviders_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rosapi_msgs::srv::ServiceProviders_Request *>(
    get_const_function__ServiceProviders_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<rosapi_msgs::srv::ServiceProviders_Request *>(untyped_value);
  value = item;
}

void assign_function__ServiceProviders_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rosapi_msgs::srv::ServiceProviders_Request *>(
    get_function__ServiceProviders_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const rosapi_msgs::srv::ServiceProviders_Request *>(untyped_value);
  item = value;
}

void resize_function__ServiceProviders_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rosapi_msgs::srv::ServiceProviders_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceProviders_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rosapi_msgs::srv::ServiceProviders_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceProviders_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rosapi_msgs::srv::ServiceProviders_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceProviders_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rosapi_msgs::srv::ServiceProviders_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServiceProviders_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rosapi_msgs::srv::ServiceProviders_Response *>(
    get_const_function__ServiceProviders_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<rosapi_msgs::srv::ServiceProviders_Response *>(untyped_value);
  value = item;
}

void assign_function__ServiceProviders_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rosapi_msgs::srv::ServiceProviders_Response *>(
    get_function__ServiceProviders_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const rosapi_msgs::srv::ServiceProviders_Response *>(untyped_value);
  item = value;
}

void resize_function__ServiceProviders_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rosapi_msgs::srv::ServiceProviders_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceProviders_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::srv::ServiceProviders_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosapi_msgs::srv::ServiceProviders_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rosapi_msgs::srv::ServiceProviders_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceProviders_Event__request,  // size() function pointer
    get_const_function__ServiceProviders_Event__request,  // get_const(index) function pointer
    get_function__ServiceProviders_Event__request,  // get(index) function pointer
    fetch_function__ServiceProviders_Event__request,  // fetch(index, &value) function pointer
    assign_function__ServiceProviders_Event__request,  // assign(index, value) function pointer
    resize_function__ServiceProviders_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosapi_msgs::srv::ServiceProviders_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rosapi_msgs::srv::ServiceProviders_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceProviders_Event__response,  // size() function pointer
    get_const_function__ServiceProviders_Event__response,  // get_const(index) function pointer
    get_function__ServiceProviders_Event__response,  // get(index) function pointer
    fetch_function__ServiceProviders_Event__response,  // fetch(index, &value) function pointer
    assign_function__ServiceProviders_Event__response,  // assign(index, value) function pointer
    resize_function__ServiceProviders_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceProviders_Event_message_members = {
  "rosapi_msgs::srv",  // message namespace
  "ServiceProviders_Event",  // message name
  3,  // number of fields
  sizeof(rosapi_msgs::srv::ServiceProviders_Event),
  ServiceProviders_Event_message_member_array,  // message members
  ServiceProviders_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceProviders_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceProviders_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceProviders_Event_message_members,
  get_message_typesupport_handle_function,
  &rosapi_msgs__srv__ServiceProviders_Event__get_type_hash,
  &rosapi_msgs__srv__ServiceProviders_Event__get_type_description,
  &rosapi_msgs__srv__ServiceProviders_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosapi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::ServiceProviders_Event>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceProviders_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, ServiceProviders_Event)() {
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceProviders_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "rosapi_msgs/srv/detail/service_providers__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/service_providers__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ServiceProviders_service_members = {
  "rosapi_msgs::srv",  // service namespace
  "ServiceProviders",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rosapi_msgs::srv::ServiceProviders>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ServiceProviders_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceProviders_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosapi_msgs::srv::ServiceProviders_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosapi_msgs::srv::ServiceProviders_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosapi_msgs::srv::ServiceProviders_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rosapi_msgs::srv::ServiceProviders>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rosapi_msgs::srv::ServiceProviders>,
  &rosapi_msgs__srv__ServiceProviders__get_type_hash,
  &rosapi_msgs__srv__ServiceProviders__get_type_description,
  &rosapi_msgs__srv__ServiceProviders__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosapi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosapi_msgs::srv::ServiceProviders>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceProviders_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosapi_msgs::srv::ServiceProviders_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosapi_msgs::srv::ServiceProviders_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosapi_msgs::srv::ServiceProviders_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, ServiceProviders)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rosapi_msgs::srv::ServiceProviders>();
}

#ifdef __cplusplus
}
#endif
