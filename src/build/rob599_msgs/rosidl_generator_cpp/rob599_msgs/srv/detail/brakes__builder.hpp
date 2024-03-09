// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_msgs:srv/Brakes.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS__SRV__DETAIL__BRAKES__BUILDER_HPP_
#define ROB599_MSGS__SRV__DETAIL__BRAKES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_msgs/srv/detail/brakes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_msgs
{

namespace srv
{

namespace builder
{

class Init_Brakes_Request_data
{
public:
  Init_Brakes_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_msgs::srv::Brakes_Request data(::rob599_msgs::srv::Brakes_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs::srv::Brakes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs::srv::Brakes_Request>()
{
  return rob599_msgs::srv::builder::Init_Brakes_Request_data();
}

}  // namespace rob599_msgs


namespace rob599_msgs
{

namespace srv
{

namespace builder
{

class Init_Brakes_Response_success
{
public:
  Init_Brakes_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_msgs::srv::Brakes_Response success(::rob599_msgs::srv::Brakes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs::srv::Brakes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs::srv::Brakes_Response>()
{
  return rob599_msgs::srv::builder::Init_Brakes_Response_success();
}

}  // namespace rob599_msgs

#endif  // ROB599_MSGS__SRV__DETAIL__BRAKES__BUILDER_HPP_
