#include <iostream>

#include <array>
#include <memory>
#include <string>
#include <vector>

// This is a Float64 like it is currently in ROS2; that is, the default
// constructor does no default initialization of fields.
namespace std_msgs
{

namespace msg
{

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

}
}

int main(void)
{
  std::cout << "Start" << std::endl;

  // If you uncomment this and run this under valgrind, you'll see valgrind
  // complain about accessing an uninitialized variable, which makes sense.
  //std_msgs::msg::Float64 uninit;
  //std::cout << uninit.data << std::endl;

  // Instead, if you manually initialize the fields with the helper, then valgrind is happy.
  std_msgs::msg::Float64 init;
  init.zero_initialize();
  std::cout << init.data << std::endl;

  // For compound types (such as Compound), the same problem applies
  //std::msgs::msg::Compound c_uninit;
  //std::cout << c_uninit.data << std::endl;
  //std::cout << c_uninit.data << std::endl;

  // Having a helper to zero initialize all of the fields helps a lot.  The user still needs to remember to call this.
  std_msgs::msg::Compound c_init;
  c_init.zero_initialize();
  std::cout << c_init.float64.data << std::endl;
  std::cout << c_init.data << std::endl;

  return 0;
}
