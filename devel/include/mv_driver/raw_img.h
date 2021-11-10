// Generated by gencpp from file mv_driver/raw_img.msg
// DO NOT EDIT!


#ifndef MV_DRIVER_MESSAGE_RAW_IMG_H
#define MV_DRIVER_MESSAGE_RAW_IMG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/Image.h>
#include <sensor_msgs/Image.h>

namespace mv_driver
{
template <class ContainerAllocator>
struct raw_img_
{
  typedef raw_img_<ContainerAllocator> Type;

  raw_img_()
    : color()
    , depth()  {
    }
  raw_img_(const ContainerAllocator& _alloc)
    : color(_alloc)
    , depth(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _color_type;
  _color_type color;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _depth_type;
  _depth_type depth;





  typedef boost::shared_ptr< ::mv_driver::raw_img_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mv_driver::raw_img_<ContainerAllocator> const> ConstPtr;

}; // struct raw_img_

typedef ::mv_driver::raw_img_<std::allocator<void> > raw_img;

typedef boost::shared_ptr< ::mv_driver::raw_img > raw_imgPtr;
typedef boost::shared_ptr< ::mv_driver::raw_img const> raw_imgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mv_driver::raw_img_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mv_driver::raw_img_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mv_driver::raw_img_<ContainerAllocator1> & lhs, const ::mv_driver::raw_img_<ContainerAllocator2> & rhs)
{
  return lhs.color == rhs.color &&
    lhs.depth == rhs.depth;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mv_driver::raw_img_<ContainerAllocator1> & lhs, const ::mv_driver::raw_img_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mv_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mv_driver::raw_img_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mv_driver::raw_img_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mv_driver::raw_img_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mv_driver::raw_img_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mv_driver::raw_img_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mv_driver::raw_img_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mv_driver::raw_img_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6b5aeff90d2304214393960f2a5a3312";
  }

  static const char* value(const ::mv_driver::raw_img_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6b5aeff90d230421ULL;
  static const uint64_t static_value2 = 0x4393960f2a5a3312ULL;
};

template<class ContainerAllocator>
struct DataType< ::mv_driver::raw_img_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mv_driver/raw_img";
  }

  static const char* value(const ::mv_driver::raw_img_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mv_driver::raw_img_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/Image color\n"
"sensor_msgs/Image depth\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mv_driver::raw_img_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mv_driver::raw_img_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.color);
      stream.next(m.depth);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct raw_img_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mv_driver::raw_img_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mv_driver::raw_img_<ContainerAllocator>& v)
  {
    s << indent << "color: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.color);
    s << indent << "depth: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.depth);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MV_DRIVER_MESSAGE_RAW_IMG_H
