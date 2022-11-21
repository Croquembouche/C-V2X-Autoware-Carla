// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__BSM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'coredata'
#include "v2x_msg/msg/detail/bsm_core_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__BSM __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__BSM __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSM_
{
  using Type = BSM_<ContainerAllocator>;

  explicit BSM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coredata(_init)
  {
    (void)_init;
  }

  explicit BSM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coredata(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _coredata_type =
    v2x_msg::msg::BSMCoreData_<ContainerAllocator>;
  _coredata_type coredata;

  // setters for named parameter idiom
  Type & set__coredata(
    const v2x_msg::msg::BSMCoreData_<ContainerAllocator> & _arg)
  {
    this->coredata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::BSM_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::BSM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::BSM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::BSM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::BSM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::BSM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::BSM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::BSM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::BSM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::BSM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__BSM
    std::shared_ptr<v2x_msg::msg::BSM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__BSM
    std::shared_ptr<v2x_msg::msg::BSM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSM_ & other) const
  {
    if (this->coredata != other.coredata) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSM_

// alias to use template instance with default allocator
using BSM =
  v2x_msg::msg::BSM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__BSM__STRUCT_HPP_
