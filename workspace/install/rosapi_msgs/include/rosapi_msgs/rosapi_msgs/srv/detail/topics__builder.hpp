// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/Topics.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__TOPICS__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__TOPICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/topics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Topics_Request>()
{
  return ::rosapi_msgs::srv::Topics_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_Topics_Response_types
{
public:
  explicit Init_Topics_Response_types(::rosapi_msgs::srv::Topics_Response & msg)
  : msg_(msg)
  {}
  ::rosapi_msgs::srv::Topics_Response types(::rosapi_msgs::srv::Topics_Response::_types_type arg)
  {
    msg_.types = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::Topics_Response msg_;
};

class Init_Topics_Response_topics
{
public:
  Init_Topics_Response_topics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Topics_Response_types topics(::rosapi_msgs::srv::Topics_Response::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return Init_Topics_Response_types(msg_);
  }

private:
  ::rosapi_msgs::srv::Topics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Topics_Response>()
{
  return rosapi_msgs::srv::builder::Init_Topics_Response_topics();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_Topics_Event_response
{
public:
  explicit Init_Topics_Event_response(::rosapi_msgs::srv::Topics_Event & msg)
  : msg_(msg)
  {}
  ::rosapi_msgs::srv::Topics_Event response(::rosapi_msgs::srv::Topics_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::Topics_Event msg_;
};

class Init_Topics_Event_request
{
public:
  explicit Init_Topics_Event_request(::rosapi_msgs::srv::Topics_Event & msg)
  : msg_(msg)
  {}
  Init_Topics_Event_response request(::rosapi_msgs::srv::Topics_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Topics_Event_response(msg_);
  }

private:
  ::rosapi_msgs::srv::Topics_Event msg_;
};

class Init_Topics_Event_info
{
public:
  Init_Topics_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Topics_Event_request info(::rosapi_msgs::srv::Topics_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Topics_Event_request(msg_);
  }

private:
  ::rosapi_msgs::srv::Topics_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Topics_Event>()
{
  return rosapi_msgs::srv::builder::Init_Topics_Event_info();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__TOPICS__BUILDER_HPP_