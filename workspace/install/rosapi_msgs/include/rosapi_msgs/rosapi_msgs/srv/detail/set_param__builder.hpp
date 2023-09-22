// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/SetParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SET_PARAM__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SET_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/set_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_SetParam_Request_value
{
public:
  explicit Init_SetParam_Request_value(::rosapi_msgs::srv::SetParam_Request & msg)
  : msg_(msg)
  {}
  ::rosapi_msgs::srv::SetParam_Request value(::rosapi_msgs::srv::SetParam_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::SetParam_Request msg_;
};

class Init_SetParam_Request_name
{
public:
  Init_SetParam_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetParam_Request_value name(::rosapi_msgs::srv::SetParam_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetParam_Request_value(msg_);
  }

private:
  ::rosapi_msgs::srv::SetParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::SetParam_Request>()
{
  return rosapi_msgs::srv::builder::Init_SetParam_Request_name();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::SetParam_Response>()
{
  return ::rosapi_msgs::srv::SetParam_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_SetParam_Event_response
{
public:
  explicit Init_SetParam_Event_response(::rosapi_msgs::srv::SetParam_Event & msg)
  : msg_(msg)
  {}
  ::rosapi_msgs::srv::SetParam_Event response(::rosapi_msgs::srv::SetParam_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::SetParam_Event msg_;
};

class Init_SetParam_Event_request
{
public:
  explicit Init_SetParam_Event_request(::rosapi_msgs::srv::SetParam_Event & msg)
  : msg_(msg)
  {}
  Init_SetParam_Event_response request(::rosapi_msgs::srv::SetParam_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetParam_Event_response(msg_);
  }

private:
  ::rosapi_msgs::srv::SetParam_Event msg_;
};

class Init_SetParam_Event_info
{
public:
  Init_SetParam_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetParam_Event_request info(::rosapi_msgs::srv::SetParam_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetParam_Event_request(msg_);
  }

private:
  ::rosapi_msgs::srv::SetParam_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::SetParam_Event>()
{
  return rosapi_msgs::srv::builder::Init_SetParam_Event_info();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__SET_PARAM__BUILDER_HPP_
