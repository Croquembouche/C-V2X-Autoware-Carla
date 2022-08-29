// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ITIScodesandtextcontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ITIScodesandtextcontent __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ITIScodesandtextcontent __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ITIScodesandtextcontent_
{
  using Type = ITIScodesandtextcontent_<ContainerAllocator>;

  explicit ITIScodesandtextcontent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->itis = 0ll;
      this->text = "";
    }
  }

  explicit ITIScodesandtextcontent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->itis = 0ll;
      this->text = "";
    }
  }

  // field types and members
  using _itis_type =
    int64_t;
  _itis_type itis;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__itis(
    const int64_t & _arg)
  {
    this->itis = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ITIScodesandtextcontent
    std::shared_ptr<v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ITIScodesandtextcontent
    std::shared_ptr<v2x_msg::msg::ITIScodesandtextcontent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ITIScodesandtextcontent_ & other) const
  {
    if (this->itis != other.itis) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const ITIScodesandtextcontent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ITIScodesandtextcontent_

// alias to use template instance with default allocator
using ITIScodesandtextcontent =
  v2x_msg::msg::ITIScodesandtextcontent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__STRUCT_HPP_
