// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:srv/SetParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SET_PARAM__TRAITS_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SET_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosapi_msgs/srv/detail/set_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetParam_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetParam_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::SetParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::SetParam_Request & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::SetParam_Request>()
{
  return "rosapi_msgs::srv::SetParam_Request";
}

template<>
inline const char * name<rosapi_msgs::srv::SetParam_Request>()
{
  return "rosapi_msgs/srv/SetParam_Request";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::SetParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::SetParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::SetParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetParam_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetParam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetParam_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::SetParam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::SetParam_Response & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::SetParam_Response>()
{
  return "rosapi_msgs::srv::SetParam_Response";
}

template<>
inline const char * name<rosapi_msgs::srv::SetParam_Response>()
{
  return "rosapi_msgs/srv/SetParam_Response";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::SetParam_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::SetParam_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosapi_msgs::srv::SetParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetParam_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetParam_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetParam_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::SetParam_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::SetParam_Event & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::SetParam_Event>()
{
  return "rosapi_msgs::srv::SetParam_Event";
}

template<>
inline const char * name<rosapi_msgs::srv::SetParam_Event>()
{
  return "rosapi_msgs/srv/SetParam_Event";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::SetParam_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::SetParam_Event>
  : std::integral_constant<bool, has_bounded_size<rosapi_msgs::srv::SetParam_Request>::value && has_bounded_size<rosapi_msgs::srv::SetParam_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rosapi_msgs::srv::SetParam_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::SetParam>()
{
  return "rosapi_msgs::srv::SetParam";
}

template<>
inline const char * name<rosapi_msgs::srv::SetParam>()
{
  return "rosapi_msgs/srv/SetParam";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::SetParam>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi_msgs::srv::SetParam_Request>::value &&
    has_fixed_size<rosapi_msgs::srv::SetParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi_msgs::srv::SetParam>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi_msgs::srv::SetParam_Request>::value &&
    has_bounded_size<rosapi_msgs::srv::SetParam_Response>::value
  >
{
};

template<>
struct is_service<rosapi_msgs::srv::SetParam>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi_msgs::srv::SetParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi_msgs::srv::SetParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__SRV__DETAIL__SET_PARAM__TRAITS_HPP_
