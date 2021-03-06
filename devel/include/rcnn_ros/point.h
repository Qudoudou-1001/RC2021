// Generated by gencpp from file rcnn_ros/point.msg
// DO NOT EDIT!


#ifndef RCNN_ROS_MESSAGE_POINT_H
#define RCNN_ROS_MESSAGE_POINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rcnn_ros
{
template <class ContainerAllocator>
struct point_
{
  typedef point_<ContainerAllocator> Type;

  point_()
    : x(0)
    , y(0)  {
    }
  point_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)  {
  (void)_alloc;
    }



   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::rcnn_ros::point_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rcnn_ros::point_<ContainerAllocator> const> ConstPtr;

}; // struct point_

typedef ::rcnn_ros::point_<std::allocator<void> > point;

typedef boost::shared_ptr< ::rcnn_ros::point > pointPtr;
typedef boost::shared_ptr< ::rcnn_ros::point const> pointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rcnn_ros::point_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rcnn_ros::point_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rcnn_ros::point_<ContainerAllocator1> & lhs, const ::rcnn_ros::point_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rcnn_ros::point_<ContainerAllocator1> & lhs, const ::rcnn_ros::point_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rcnn_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rcnn_ros::point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rcnn_ros::point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rcnn_ros::point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rcnn_ros::point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rcnn_ros::point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rcnn_ros::point_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rcnn_ros::point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd7b43fd41d4c47bf5c703cc7d016709";
  }

  static const char* value(const ::rcnn_ros::point_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd7b43fd41d4c47bULL;
  static const uint64_t static_value2 = 0xf5c703cc7d016709ULL;
};

template<class ContainerAllocator>
struct DataType< ::rcnn_ros::point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rcnn_ros/point";
  }

  static const char* value(const ::rcnn_ros::point_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rcnn_ros::point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 x\n"
"int32 y\n"
;
  }

  static const char* value(const ::rcnn_ros::point_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rcnn_ros::point_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct point_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rcnn_ros::point_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rcnn_ros::point_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RCNN_ROS_MESSAGE_POINT_H
