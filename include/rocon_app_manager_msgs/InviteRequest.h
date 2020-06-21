// Generated by gencpp from file rocon_app_manager_msgs/InviteRequest.msg
// DO NOT EDIT!


#ifndef ROCON_APP_MANAGER_MSGS_MESSAGE_INVITEREQUEST_H
#define ROCON_APP_MANAGER_MSGS_MESSAGE_INVITEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rocon_app_manager_msgs
{
template <class ContainerAllocator>
struct InviteRequest_
{
  typedef InviteRequest_<ContainerAllocator> Type;

  InviteRequest_()
    : remote_target_name()
    , application_namespace()
    , cancel(false)  {
    }
  InviteRequest_(const ContainerAllocator& _alloc)
    : remote_target_name(_alloc)
    , application_namespace(_alloc)
    , cancel(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _remote_target_name_type;
  _remote_target_name_type remote_target_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _application_namespace_type;
  _application_namespace_type application_namespace;

   typedef uint8_t _cancel_type;
  _cancel_type cancel;




  typedef boost::shared_ptr< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InviteRequest_

typedef ::rocon_app_manager_msgs::InviteRequest_<std::allocator<void> > InviteRequest;

typedef boost::shared_ptr< ::rocon_app_manager_msgs::InviteRequest > InviteRequestPtr;
typedef boost::shared_ptr< ::rocon_app_manager_msgs::InviteRequest const> InviteRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_app_manager_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rocon_std_msgs': ['/opt/ros/indigo/share/rocon_std_msgs/cmake/../msg'], 'rocon_service_pair_msgs': ['/opt/ros/indigo/share/rocon_service_pair_msgs/cmake/../msg'], 'rocon_app_manager_msgs': ['/tmp/binarydeb/ros-indigo-rocon-app-manager-msgs-0.7.12/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4bed4f247c648d28c7c34a7504917911";
  }

  static const char* value(const ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4bed4f247c648d28ULL;
  static const uint64_t static_value2 = 0xc7c34a7504917911ULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_app_manager_msgs/InviteRequest";
  }

  static const char* value(const ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
string remote_target_name\n\
\n\
\n\
\n\
\n\
\n\
string application_namespace\n\
bool cancel\n\
";
  }

  static const char* value(const ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.remote_target_name);
      stream.next(m.application_namespace);
      stream.next(m.cancel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InviteRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_app_manager_msgs::InviteRequest_<ContainerAllocator>& v)
  {
    s << indent << "remote_target_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.remote_target_name);
    s << indent << "application_namespace: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.application_namespace);
    s << indent << "cancel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cancel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_APP_MANAGER_MSGS_MESSAGE_INVITEREQUEST_H