// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:srv/GetROSVersion.idl
// generated code does not contain a copyright notice
#include "rosapi_msgs/srv/detail/get_ros_version__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosapi_msgs/srv/detail/get_ros_version__functions.h"
#include "rosapi_msgs/srv/detail/get_ros_version__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rosapi_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
cdr_serialize(
  const rosapi_msgs::srv::GetROSVersion_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosapi_msgs::srv::GetROSVersion_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
get_serialized_size(
  const rosapi_msgs::srv::GetROSVersion_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
max_serialized_size_GetROSVersion_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetROSVersion_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosapi_msgs::srv::GetROSVersion_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetROSVersion_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosapi_msgs::srv::GetROSVersion_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetROSVersion_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosapi_msgs::srv::GetROSVersion_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetROSVersion_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetROSVersion_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetROSVersion_Request__callbacks = {
  "rosapi_msgs::srv",
  "GetROSVersion_Request",
  _GetROSVersion_Request__cdr_serialize,
  _GetROSVersion_Request__cdr_deserialize,
  _GetROSVersion_Request__get_serialized_size,
  _GetROSVersion_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetROSVersion_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetROSVersion_Request__callbacks,
  get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetROSVersion_Request__get_type_hash,
  &rosapi_msgs__srv__GetROSVersion_Request__get_type_description,
  &rosapi_msgs__srv__GetROSVersion_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosapi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Request>()
{
  return &rosapi_msgs::srv::typesupport_fastrtps_cpp::_GetROSVersion_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion_Request)() {
  return &rosapi_msgs::srv::typesupport_fastrtps_cpp::_GetROSVersion_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rosapi_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
cdr_serialize(
  const rosapi_msgs::srv::GetROSVersion_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: version
  cdr << ros_message.version;
  // Member: distro
  cdr << ros_message.distro;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosapi_msgs::srv::GetROSVersion_Response & ros_message)
{
  // Member: version
  cdr >> ros_message.version;

  // Member: distro
  cdr >> ros_message.distro;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
get_serialized_size(
  const rosapi_msgs::srv::GetROSVersion_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: version
  {
    size_t item_size = sizeof(ros_message.version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distro
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.distro.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
max_serialized_size_GetROSVersion_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: distro
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetROSVersion_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosapi_msgs::srv::GetROSVersion_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetROSVersion_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosapi_msgs::srv::GetROSVersion_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetROSVersion_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosapi_msgs::srv::GetROSVersion_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetROSVersion_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetROSVersion_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetROSVersion_Response__callbacks = {
  "rosapi_msgs::srv",
  "GetROSVersion_Response",
  _GetROSVersion_Response__cdr_serialize,
  _GetROSVersion_Response__cdr_deserialize,
  _GetROSVersion_Response__get_serialized_size,
  _GetROSVersion_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetROSVersion_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetROSVersion_Response__callbacks,
  get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetROSVersion_Response__get_type_hash,
  &rosapi_msgs__srv__GetROSVersion_Response__get_type_description,
  &rosapi_msgs__srv__GetROSVersion_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosapi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Response>()
{
  return &rosapi_msgs::srv::typesupport_fastrtps_cpp::_GetROSVersion_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion_Response)() {
  return &rosapi_msgs::srv::typesupport_fastrtps_cpp::_GetROSVersion_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace service_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  service_msgs::msg::ServiceEventInfo &);
size_t get_serialized_size(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace service_msgs

// functions for rosapi_msgs::srv::GetROSVersion_Request already declared above

// functions for rosapi_msgs::srv::GetROSVersion_Response already declared above


namespace rosapi_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
cdr_serialize(
  const rosapi_msgs::srv::GetROSVersion_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rosapi_msgs::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }
  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rosapi_msgs::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosapi_msgs::srv::GetROSVersion_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      rosapi_msgs::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      rosapi_msgs::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
get_serialized_size(
  const rosapi_msgs::srv::GetROSVersion_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info

  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);
  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosapi_msgs::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }
  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosapi_msgs::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
max_serialized_size_GetROSVersion_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rosapi_msgs::srv::typesupport_fastrtps_cpp::max_serialized_size_GetROSVersion_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rosapi_msgs::srv::typesupport_fastrtps_cpp::max_serialized_size_GetROSVersion_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetROSVersion_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosapi_msgs::srv::GetROSVersion_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetROSVersion_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosapi_msgs::srv::GetROSVersion_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetROSVersion_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosapi_msgs::srv::GetROSVersion_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetROSVersion_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetROSVersion_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetROSVersion_Event__callbacks = {
  "rosapi_msgs::srv",
  "GetROSVersion_Event",
  _GetROSVersion_Event__cdr_serialize,
  _GetROSVersion_Event__cdr_deserialize,
  _GetROSVersion_Event__get_serialized_size,
  _GetROSVersion_Event__max_serialized_size
};

static rosidl_message_type_support_t _GetROSVersion_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetROSVersion_Event__callbacks,
  get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetROSVersion_Event__get_type_hash,
  &rosapi_msgs__srv__GetROSVersion_Event__get_type_description,
  &rosapi_msgs__srv__GetROSVersion_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosapi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Event>()
{
  return &rosapi_msgs::srv::typesupport_fastrtps_cpp::_GetROSVersion_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion_Event)() {
  return &rosapi_msgs::srv::typesupport_fastrtps_cpp::_GetROSVersion_Event__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace rosapi_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetROSVersion__callbacks = {
  "rosapi_msgs::srv",
  "GetROSVersion",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _GetROSVersion__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetROSVersion__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetROSVersion_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rosapi_msgs::srv::GetROSVersion>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rosapi_msgs::srv::GetROSVersion>,
  &rosapi_msgs__srv__GetROSVersion__get_type_hash,
  &rosapi_msgs__srv__GetROSVersion__get_type_description,
  &rosapi_msgs__srv__GetROSVersion__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosapi_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<rosapi_msgs::srv::GetROSVersion>()
{
  return &rosapi_msgs::srv::typesupport_fastrtps_cpp::_GetROSVersion__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetROSVersion)() {
  return &rosapi_msgs::srv::typesupport_fastrtps_cpp::_GetROSVersion__handle;
}

#ifdef __cplusplus
}
#endif
