// Generated by gencpp from file t4ac_msgs/BEV_trackers_list.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_BEV_TRACKERS_LIST_H
#define T4AC_MSGS_MESSAGE_BEV_TRACKERS_LIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <t4ac_msgs/BEV_tracker.h>

namespace t4ac_msgs
{
template <class ContainerAllocator>
struct BEV_trackers_list_
{
  typedef BEV_trackers_list_<ContainerAllocator> Type;

  BEV_trackers_list_()
    : header()
    , bev_trackers_list()  {
    }
  BEV_trackers_list_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bev_trackers_list(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >::other >  _bev_trackers_list_type;
  _bev_trackers_list_type bev_trackers_list;





  typedef boost::shared_ptr< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> const> ConstPtr;

}; // struct BEV_trackers_list_

typedef ::t4ac_msgs::BEV_trackers_list_<std::allocator<void> > BEV_trackers_list;

typedef boost::shared_ptr< ::t4ac_msgs::BEV_trackers_list > BEV_trackers_listPtr;
typedef boost::shared_ptr< ::t4ac_msgs::BEV_trackers_list const> BEV_trackers_listConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator1> & lhs, const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.bev_trackers_list == rhs.bev_trackers_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator1> & lhs, const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >
{
  static const char* value()
  {
    return "75647be9b87b8cac8b063a214b8fbc18";
  }

  static const char* value(const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x75647be9b87b8cacULL;
  static const uint64_t static_value2 = 0x8b063a214b8fbc18ULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/BEV_trackers_list";
  }

  static const char* value(const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Techs4AgeCar project\n"
"\n"
"Header header                              # Frame and timestamp information\n"
"\n"
"BEV_tracker[] bev_trackers_list  # List of tracked_obstacles\n"
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
"\n"
"================================================================================\n"
"MSG: t4ac_msgs/BEV_tracker\n"
"# Techs4AgeCar project\n"
"\n"
"string type      # Object type\n"
"uint16 object_id # Object ID\n"
"\n"
"float64   x      # BEV x centroid\n"
"float64   y      # BEV y centroid \n"
"float64   w      # BEV width of the object\n"
"float64   l      # BEV length of the object\n"
"float64   o      # Object orientation\n"
"\n"
"\n"
;
  }

  static const char* value(const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bev_trackers_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BEV_trackers_list_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::BEV_trackers_list_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bev_trackers_list[]" << std::endl;
    for (size_t i = 0; i < v.bev_trackers_list.size(); ++i)
    {
      s << indent << "  bev_trackers_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >::stream(s, indent + "    ", v.bev_trackers_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_BEV_TRACKERS_LIST_H
