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
// constructor does no default initialization of fields.  It has two
// additions:
// 1.  An auto-generated zero_initialize() method to initialize fields to default
//     values.
// 2.  A factory function to generate a class and automatically call the zero
//     initializer on the class.

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

// This is a fake "Compound" class that I made up, that embeds a Float64 and
// primitive fields within it.  It doesn't exist in ROS2, but the below is what
// the generated code would like in current ROS2; that is, the default
// constructor does no default initialization of fields.  It has two additions:
// 1.  An auto-generated zero_initialize() method to initialize fields to default
//     values.
// 2.  A factory function to generate a class and automatically call the zero
//     initializer on the class.

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

std::shared_ptr<Compound> compoundFactory(bool default_initialize=true)
{
  std::shared_ptr<Compound> msg = std::make_shared<Compound>();
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

  // Instead, if you initialize the fields through the factory, then valgrind is happy.
  std::shared_ptr<std_msgs::msg::Float64> init = std_msgs::msg::float64Factory(true);
  std::cout << init->data << std::endl;

  // For compound types (such as Compound), the same problem applies
  //std::shared_ptr<std_msgs::msg::Compound> c_uninit = std_msgs::msg::compoundFactory(false);
  //std::cout << c_uninit->float64.data << std::endl;
  //std::cout << c_uninit->data << std::endl;

  // Having a factory to zero initialize all of the fields helps a lot.  The user still needs to remember to call this instead of instantiating the class directly.
  // For compound types (such as Compound), the same problem applies
  std::shared_ptr<std_msgs::msg::Compound> c_init = std_msgs::msg::compoundFactory(true);
  std::cout << c_init->float64.data << std::endl;
  std::cout << c_init->data << std::endl;

  return 0;
}
