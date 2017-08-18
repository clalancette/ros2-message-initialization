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

std::shared_ptr<Float64> float64Factory(bool default_initialize=true)
{
  std::shared_ptr<Float64> msg = std::make_shared<Float64>();
  if (default_initialize) {
    msg->zero_initialize();
  }
  return msg;
}

}
}


int main(void)
{
  std::cout << "Start" << std::endl;

  // If you uncomment this and run this under valgrind, you'll see valgrind
  // complain about accessing an uninitialized variable, which makes sense.
  //std::shared_ptr<std_msgs::msg::Float64> uninit = std_msgs::msg::float64Factory(false);
  //std::cout << uninit->data << std::endl;

  // Instead, if you manually initialize the fields, then valgrind is happy.
  std::shared_ptr<std_msgs::msg::Float64> init = std_msgs::msg::float64Factory(true);
  std::cout << init->data << std::endl;

  return 0;
}
