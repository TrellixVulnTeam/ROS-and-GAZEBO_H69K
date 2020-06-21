// Generated by gencpp from file yocs_msgs/ColumnList.msg
// DO NOT EDIT!


#ifndef YOCS_MSGS_MESSAGE_COLUMNLIST_H
#define YOCS_MSGS_MESSAGE_COLUMNLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <yocs_msgs/Column.h>

namespace yocs_msgs
{
template <class ContainerAllocator>
struct ColumnList_
{
  typedef ColumnList_<ContainerAllocator> Type;

  ColumnList_()
    : obstacles()  {
    }
  ColumnList_(const ContainerAllocator& _alloc)
    : obstacles(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::yocs_msgs::Column_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::yocs_msgs::Column_<ContainerAllocator> >::other >  _obstacles_type;
  _obstacles_type obstacles;




  typedef boost::shared_ptr< ::yocs_msgs::ColumnList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yocs_msgs::ColumnList_<ContainerAllocator> const> ConstPtr;

}; // struct ColumnList_

typedef ::yocs_msgs::ColumnList_<std::allocator<void> > ColumnList;

typedef boost::shared_ptr< ::yocs_msgs::ColumnList > ColumnListPtr;
typedef boost::shared_ptr< ::yocs_msgs::ColumnList const> ColumnListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yocs_msgs::ColumnList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yocs_msgs::ColumnList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yocs_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'yocs_msgs': ['/tmp/binarydeb/ros-indigo-yocs-msgs-0.6.3/msg', '/tmp/binarydeb/ros-indigo-yocs-msgs-0.6.3/obj-x86_64-linux-gnu/devel/share/yocs_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::ColumnList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::ColumnList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::ColumnList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::ColumnList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::ColumnList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::ColumnList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yocs_msgs::ColumnList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fdf98d2a8a0cfe17000cdb66889826b6";
  }

  static const char* value(const ::yocs_msgs::ColumnList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfdf98d2a8a0cfe17ULL;
  static const uint64_t static_value2 = 0x000cdb66889826b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::yocs_msgs::ColumnList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yocs_msgs/ColumnList";
  }

  static const char* value(const ::yocs_msgs::ColumnList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yocs_msgs::ColumnList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Virtual column obstacles\n\
\n\
Column[] obstacles\n\
\n\
================================================================================\n\
MSG: yocs_msgs/Column\n\
# Virtual column obstacle; a cylinder vertically aligned\n\
#  - Orientation is ignored\n\
#  - Z provides the lower border of the column (normally 0)\n\
\n\
string  name\n\
float32 radius\n\
float32 height\n\
geometry_msgs/PoseWithCovarianceStamped pose\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovarianceStamped\n\
# This expresses an estimated pose with a reference coordinate frame and timestamp\n\
\n\
Header header\n\
PoseWithCovariance pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::yocs_msgs::ColumnList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yocs_msgs::ColumnList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.obstacles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ColumnList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yocs_msgs::ColumnList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yocs_msgs::ColumnList_<ContainerAllocator>& v)
  {
    s << indent << "obstacles[]" << std::endl;
    for (size_t i = 0; i < v.obstacles.size(); ++i)
    {
      s << indent << "  obstacles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::yocs_msgs::Column_<ContainerAllocator> >::stream(s, indent + "    ", v.obstacles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOCS_MSGS_MESSAGE_COLUMNLIST_H