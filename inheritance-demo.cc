#include <iostream>

#include <array>
#include <memory>
#include <string>
#include <vector>

namespace std_msgs
{

namespace msg
{

// This is a Float64 like it is currently in ROS2; that is, the default
// constructor does no default initialization of fields.

// message struct
template<class ContainerAllocator>
struct Float64_
{
  using Type = Float64_<ContainerAllocator>;

  Float64_()
  {
  }
  explicit Float64_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  using _data_type =
      double;
  _data_type data;

  Type * set__data(
    const double & _arg)
  {
    this->data = _arg;
    return this;
  }

  void zero_initialize()
  {
    this->data = 0.0;
  }
};

using Float64 =
    std_msgs::msg::Float64_<std::allocator<void>>;

template<class ContainerAllocator>
struct Float64_init_ : public Float64_<ContainerAllocator>
{
  using Type = Float64_init_<ContainerAllocator>;

  Float64_init_()
  {
    this->zero_initialize();
  }
  explicit Float64_init_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }
};

using Float64_init =
    std_msgs::msg::Float64_init_<std::allocator<void>>;

template<class ContainerAllocator>
struct Float64_uninit_ : public Float64_<ContainerAllocator>
{
  using Type = Float64_uninit_<ContainerAllocator>;

  Float64_uninit_()
  {
  }
  explicit Float64_uninit_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }
};

using Float64_uninit =
    std_msgs::msg::Float64_uninit_<std::allocator<void>>;


// This is a fake "Compound" class that I made up, that embeds a Float64 and
// primitive fields within it.  It doesn't exist in ROS2, but the below is what
// the generated code would like in current ROS2; that is, the default
// constructor does no default initialization of fields.

// message struct
template<class ContainerAllocator>
struct Compound_
{
  using Type = Compound_<ContainerAllocator>;

  Compound_()
  {
  }
  explicit Compound_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  using _float64_type =
      std_msgs::msg::Float64_<ContainerAllocator>;
  using _data_type =
      double;

  _float64_type float64;
  _data_type data;

  Type * set__float64(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->float64 = _arg;
    return this;
  }

  Type * set__data(
    const double & _arg)
  {
    this->data = _arg;
    return this;
  }

  void zero_initialize()
  {
    this->float64.zero_initialize();
    this->data = 0.0;
  }
};

using Compound =
    std_msgs::msg::Compound_<std::allocator<void>>;

template<class ContainerAllocator>
struct Compound_init_ : public Compound_<ContainerAllocator>
{
  using Type = Compound_init_<ContainerAllocator>;

  Compound_init_()
  {
    this->zero_initialize();
  }
  explicit Compound_init_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }
};

using Compound_init =
    std_msgs::msg::Compound_init_<std::allocator<void>>;

template<class ContainerAllocator>
struct Compound_uninit_ : public Compound_<ContainerAllocator>
{
  using Type = Compound_uninit_<ContainerAllocator>;

  Compound_uninit_()
  {
  }
  explicit Compound_uninit_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }
};

using Compound_uninit =
    std_msgs::msg::Compound_uninit_<std::allocator<void>>;

}
}

int main(void)
{
  std::cout << "Start" << std::endl;

  // If you uncomment this and run this under valgrind, you'll see valgrind
  // complain about accessing an uninitialized variable, which makes sense.
  //std_msgs::msg::Float64_uninit uninit;
  //std::cout << uninit.data << std::endl;

  // Instead, if you manually initialize the fields, then valgrind is happy.
  std_msgs::msg::Float64_init init;
  std::cout << init.data << std::endl;

  // For compound types (such as Compound), the same problem applies
  // std_msgs::msg::Compound_uninit c_uninit;
  // std::cout << c_uninit.data << std::endl;
  // std::cout << c_uninit.data << std::endl;

  // Manually initializing all of the fields for Compound types gets more tedious and error-prone.
  std_msgs::msg::Compound_init c_init;
  std::cout << c_init.float64.data << std::endl;
  std::cout << c_init.data << std::endl;

  return 0;
}
