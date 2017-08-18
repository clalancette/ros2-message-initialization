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
  //std_msgs::msg::Float64 uninit;
  //std::cout << uninit.data << std::endl;

  // Instead, if you manually initialize the fields, then valgrind is happy.
  std_msgs::msg::Float64 init;
  init.set__data(0.0);
  std::cout << init.data << std::endl;

  return 0;
}
