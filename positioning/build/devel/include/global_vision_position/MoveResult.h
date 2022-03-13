// Generated by gencpp from file global_vision_position/MoveResult.msg
// DO NOT EDIT!


#ifndef GLOBAL_VISION_POSITION_MESSAGE_MOVERESULT_H
#define GLOBAL_VISION_POSITION_MESSAGE_MOVERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace global_vision_position
{
template <class ContainerAllocator>
struct MoveResult_
{
  typedef MoveResult_<ContainerAllocator> Type;

  MoveResult_()
    : car_final_x(0.0)
    , car_final_y(0.0)
    , car_final_theta(0.0)  {
    }
  MoveResult_(const ContainerAllocator& _alloc)
    : car_final_x(0.0)
    , car_final_y(0.0)
    , car_final_theta(0.0)  {
  (void)_alloc;
    }



   typedef double _car_final_x_type;
  _car_final_x_type car_final_x;

   typedef double _car_final_y_type;
  _car_final_y_type car_final_y;

   typedef double _car_final_theta_type;
  _car_final_theta_type car_final_theta;





  typedef boost::shared_ptr< ::global_vision_position::MoveResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::global_vision_position::MoveResult_<ContainerAllocator> const> ConstPtr;

}; // struct MoveResult_

typedef ::global_vision_position::MoveResult_<std::allocator<void> > MoveResult;

typedef boost::shared_ptr< ::global_vision_position::MoveResult > MoveResultPtr;
typedef boost::shared_ptr< ::global_vision_position::MoveResult const> MoveResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::global_vision_position::MoveResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::global_vision_position::MoveResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace global_vision_position

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'global_vision_position': ['/home/jason/Downloads/global_vision_position_ros/positioning/build/devel/share/global_vision_position/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::global_vision_position::MoveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::global_vision_position::MoveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::global_vision_position::MoveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::global_vision_position::MoveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::global_vision_position::MoveResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::global_vision_position::MoveResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::global_vision_position::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e38af6ac246dae4cfc91e60fb6a21bf6";
  }

  static const char* value(const ::global_vision_position::MoveResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe38af6ac246dae4cULL;
  static const uint64_t static_value2 = 0xfc91e60fb6a21bf6ULL;
};

template<class ContainerAllocator>
struct DataType< ::global_vision_position::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "global_vision_position/MoveResult";
  }

  static const char* value(const ::global_vision_position::MoveResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::global_vision_position::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the result\n\
float64 car_final_x\n\
float64 car_final_y\n\
float64 car_final_theta\n\
";
  }

  static const char* value(const ::global_vision_position::MoveResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::global_vision_position::MoveResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.car_final_x);
      stream.next(m.car_final_y);
      stream.next(m.car_final_theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::global_vision_position::MoveResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::global_vision_position::MoveResult_<ContainerAllocator>& v)
  {
    s << indent << "car_final_x: ";
    Printer<double>::stream(s, indent + "  ", v.car_final_x);
    s << indent << "car_final_y: ";
    Printer<double>::stream(s, indent + "  ", v.car_final_y);
    s << indent << "car_final_theta: ";
    Printer<double>::stream(s, indent + "  ", v.car_final_theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GLOBAL_VISION_POSITION_MESSAGE_MOVERESULT_H
