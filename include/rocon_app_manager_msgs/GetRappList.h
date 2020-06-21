// Generated by gencpp from file rocon_app_manager_msgs/GetRappList.msg
// DO NOT EDIT!


#ifndef ROCON_APP_MANAGER_MSGS_MESSAGE_GETRAPPLIST_H
#define ROCON_APP_MANAGER_MSGS_MESSAGE_GETRAPPLIST_H

#include <ros/service_traits.h>


#include <rocon_app_manager_msgs/GetRappListRequest.h>
#include <rocon_app_manager_msgs/GetRappListResponse.h>


namespace rocon_app_manager_msgs
{

struct GetRappList
{

typedef GetRappListRequest Request;
typedef GetRappListResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetRappList
} // namespace rocon_app_manager_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rocon_app_manager_msgs::GetRappList > {
  static const char* value()
  {
    return "68cf30e80880962b92b2794f1f078c7f";
  }

  static const char* value(const ::rocon_app_manager_msgs::GetRappList&) { return value(); }
};

template<>
struct DataType< ::rocon_app_manager_msgs::GetRappList > {
  static const char* value()
  {
    return "rocon_app_manager_msgs/GetRappList";
  }

  static const char* value(const ::rocon_app_manager_msgs::GetRappList&) { return value(); }
};


// service_traits::MD5Sum< ::rocon_app_manager_msgs::GetRappListRequest> should match 
// service_traits::MD5Sum< ::rocon_app_manager_msgs::GetRappList > 
template<>
struct MD5Sum< ::rocon_app_manager_msgs::GetRappListRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rocon_app_manager_msgs::GetRappList >::value();
  }
  static const char* value(const ::rocon_app_manager_msgs::GetRappListRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rocon_app_manager_msgs::GetRappListRequest> should match 
// service_traits::DataType< ::rocon_app_manager_msgs::GetRappList > 
template<>
struct DataType< ::rocon_app_manager_msgs::GetRappListRequest>
{
  static const char* value()
  {
    return DataType< ::rocon_app_manager_msgs::GetRappList >::value();
  }
  static const char* value(const ::rocon_app_manager_msgs::GetRappListRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rocon_app_manager_msgs::GetRappListResponse> should match 
// service_traits::MD5Sum< ::rocon_app_manager_msgs::GetRappList > 
template<>
struct MD5Sum< ::rocon_app_manager_msgs::GetRappListResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rocon_app_manager_msgs::GetRappList >::value();
  }
  static const char* value(const ::rocon_app_manager_msgs::GetRappListResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rocon_app_manager_msgs::GetRappListResponse> should match 
// service_traits::DataType< ::rocon_app_manager_msgs::GetRappList > 
template<>
struct DataType< ::rocon_app_manager_msgs::GetRappListResponse>
{
  static const char* value()
  {
    return DataType< ::rocon_app_manager_msgs::GetRappList >::value();
  }
  static const char* value(const ::rocon_app_manager_msgs::GetRappListResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROCON_APP_MANAGER_MSGS_MESSAGE_GETRAPPLIST_H