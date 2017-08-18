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

  Float64_(bool default_initialize=true)
  {
    if (default_initialize) {
      this->zero_initialize();
    }
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
}
}


int main(void)
{
  std::cout << "Start" << std::endl;

  // If you uncomment this and run this under valgrind, you'll see valgrind
  // complain about accessing an uninitialized variable, which makes sense.
  //std_msgs::msg::Float64 uninit(false);
  //std::cout << uninit.data << std::endl;

  // Instead, if you manually initialize the fields, then valgrind is happy.
  std_msgs::msg::Float64 init(true);
  std::cout << init.data << std::endl;

  return 0;
}