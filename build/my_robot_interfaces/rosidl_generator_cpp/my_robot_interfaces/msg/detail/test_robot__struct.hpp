// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:msg/TestRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/test_robot.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__msg__TestRobot __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__msg__TestRobot __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestRobot_
{
  using Type = TestRobot_<ContainerAllocator>;

  explicit TestRobot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0ll;
    }
  }

  explicit TestRobot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0ll;
    }
  }

  // field types and members
  using _temp_type =
    int64_t;
  _temp_type temp;

  // setters for named parameter idiom
  Type & set__temp(
    const int64_t & _arg)
  {
    this->temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::msg::TestRobot_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::msg::TestRobot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::TestRobot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::TestRobot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::TestRobot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::TestRobot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::TestRobot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::TestRobot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::TestRobot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::TestRobot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__msg__TestRobot
    std::shared_ptr<my_robot_interfaces::msg::TestRobot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__msg__TestRobot
    std::shared_ptr<my_robot_interfaces::msg::TestRobot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRobot_ & other) const
  {
    if (this->temp != other.temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRobot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRobot_

// alias to use template instance with default allocator
using TestRobot =
  my_robot_interfaces::msg::TestRobot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TEST_ROBOT__STRUCT_HPP_
