// Generated by gencpp from file stdr_msgs/AddRfidTagRequest.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_ADDRFIDTAGREQUEST_H
#define STDR_MSGS_MESSAGE_ADDRFIDTAGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <stdr_msgs/RfidTag.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct AddRfidTagRequest_
{
  typedef AddRfidTagRequest_<ContainerAllocator> Type;

  AddRfidTagRequest_()
    : newTag()  {
    }
  AddRfidTagRequest_(const ContainerAllocator& _alloc)
    : newTag(_alloc)  {
  (void)_alloc;
    }



   typedef  ::stdr_msgs::RfidTag_<ContainerAllocator>  _newTag_type;
  _newTag_type newTag;




  typedef boost::shared_ptr< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddRfidTagRequest_

typedef ::stdr_msgs::AddRfidTagRequest_<std::allocator<void> > AddRfidTagRequest;

typedef boost::shared_ptr< ::stdr_msgs::AddRfidTagRequest > AddRfidTagRequestPtr;
typedef boost::shared_ptr< ::stdr_msgs::AddRfidTagRequest const> AddRfidTagRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/tmp/binarydeb/ros-indigo-stdr-msgs-0.3.2/msg', '/tmp/binarydeb/ros-indigo-stdr-msgs-0.3.2/obj-x86_64-linux-gnu/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e6bb1380792d35db5a38d02485c68a1d";
  }

  static const char* value(const ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe6bb1380792d35dbULL;
  static const uint64_t static_value2 = 0x5a38d02485c68a1dULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/AddRfidTagRequest";
  }

  static const char* value(const ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/RfidTag newTag\n\
\n\
================================================================================\n\
MSG: stdr_msgs/RfidTag\n\
# Rfid tag description\n\
\n\
string tag_id\n\
string message\n\
geometry_msgs/Pose2D pose # sensor pose, relative to the map origin\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.newTag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddRfidTagRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::AddRfidTagRequest_<ContainerAllocator>& v)
  {
    s << indent << "newTag: ";
    s << std::endl;
    Printer< ::stdr_msgs::RfidTag_<ContainerAllocator> >::stream(s, indent + "  ", v.newTag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_ADDRFIDTAGREQUEST_H
