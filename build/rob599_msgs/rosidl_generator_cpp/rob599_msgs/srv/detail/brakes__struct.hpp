// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rob599_msgs:srv/Brakes.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS__SRV__DETAIL__BRAKES__STRUCT_HPP_
#define ROB599_MSGS__SRV__DETAIL__BRAKES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rob599_msgs__srv__Brakes_Request __attribute__((deprecated))
#else
# define DEPRECATED__rob599_msgs__srv__Brakes_Request __declspec(deprecated)
#endif

namespace rob599_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Brakes_Request_
{
  using Type = Brakes_Request_<ContainerAllocator>;

  explicit Brakes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit Brakes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_msgs::srv::Brakes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_msgs::srv::Brakes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_msgs::srv::Brakes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_msgs::srv::Brakes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::Brakes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::Brakes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::Brakes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::Brakes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_msgs::srv::Brakes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_msgs::srv::Brakes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_msgs__srv__Brakes_Request
    std::shared_ptr<rob599_msgs::srv::Brakes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_msgs__srv__Brakes_Request
    std::shared_ptr<rob599_msgs::srv::Brakes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Brakes_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Brakes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Brakes_Request_

// alias to use template instance with default allocator
using Brakes_Request =
  rob599_msgs::srv::Brakes_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_msgs


#ifndef _WIN32
# define DEPRECATED__rob599_msgs__srv__Brakes_Response __attribute__((deprecated))
#else
# define DEPRECATED__rob599_msgs__srv__Brakes_Response __declspec(deprecated)
#endif

namespace rob599_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Brakes_Response_
{
  using Type = Brakes_Response_<ContainerAllocator>;

  explicit Brakes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Brakes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_msgs::srv::Brakes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_msgs::srv::Brakes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_msgs::srv::Brakes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_msgs::srv::Brakes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::Brakes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::Brakes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::Brakes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::Brakes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_msgs::srv::Brakes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_msgs::srv::Brakes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_msgs__srv__Brakes_Response
    std::shared_ptr<rob599_msgs::srv::Brakes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_msgs__srv__Brakes_Response
    std::shared_ptr<rob599_msgs::srv::Brakes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Brakes_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Brakes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Brakes_Response_

// alias to use template instance with default allocator
using Brakes_Response =
  rob599_msgs::srv::Brakes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_msgs

namespace rob599_msgs
{

namespace srv
{

struct Brakes
{
  using Request = rob599_msgs::srv::Brakes_Request;
  using Response = rob599_msgs::srv::Brakes_Response;
};

}  // namespace srv

}  // namespace rob599_msgs

#endif  // ROB599_MSGS__SRV__DETAIL__BRAKES__STRUCT_HPP_
