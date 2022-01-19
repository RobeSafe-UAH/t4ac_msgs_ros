// Generated by gencpp from file t4ac_msgs/Path.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_PATH_H
#define T4AC_MSGS_MESSAGE_PATH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <t4ac_msgs/Waypoint.h>

namespace t4ac_msgs
{
template <class ContainerAllocator>
struct Path_
{
  typedef Path_<ContainerAllocator> Type;

  Path_()
    : header()
    , waypoints()  {
    }
  Path_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , waypoints(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::t4ac_msgs::Waypoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::t4ac_msgs::Waypoint_<ContainerAllocator> >::other >  _waypoints_type;
  _waypoints_type waypoints;





  typedef boost::shared_ptr< ::t4ac_msgs::Path_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::Path_<ContainerAllocator> const> ConstPtr;

}; // struct Path_

typedef ::t4ac_msgs::Path_<std::allocator<void> > Path;

typedef boost::shared_ptr< ::t4ac_msgs::Path > PathPtr;
typedef boost::shared_ptr< ::t4ac_msgs::Path const> PathConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::Path_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::Path_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::Path_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Path_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.waypoints == rhs.waypoints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::Path_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Path_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Path_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Path_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Path_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Path_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Path_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Path_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::Path_<ContainerAllocator> >
{
  static const char* value()
  {
    return "444244d17b0e55fdb5a84a86b1e77ac2";
  }

  static const char* value(const ::t4ac_msgs::Path_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x444244d17b0e55fdULL;
  static const uint64_t static_value2 = 0xb5a84a86b1e77ac2ULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::Path_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/Path";
  }

  static const char* value(const ::t4ac_msgs::Path_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::Path_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# T4ac Project \n"
"\n"
"Header header\n"
"Waypoint[] waypoints\n"
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
"MSG: t4ac_msgs/Waypoint\n"
"# T4ac Project \n"
"\n"
"Header header\n"
"int32 id\n"
"Transform transform\n"
"int32 road_id\n"
"int32 lane_id\n"
"int32 junction\n"
"float64 s\n"
"float64 lane_width\n"
"string lane_change\n"
"string lane_type\n"
"string right_lane_marking\n"
"string left_lane_marking\n"
"int32 vmax\n"
"string vunit\n"
"================================================================================\n"
"MSG: t4ac_msgs/Transform\n"
"# T4ac Project\n"
"\n"
"Location location\n"
"Rotation rotation\n"
"================================================================================\n"
"MSG: t4ac_msgs/Location\n"
"# T4ac Project \n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: t4ac_msgs/Rotation\n"
"# T4ac Project \n"
"\n"
"float64 pitch\n"
"float64 yaw\n"
"float64 roll\n"
;
  }

  static const char* value(const ::t4ac_msgs::Path_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::Path_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.waypoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Path_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::Path_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::Path_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::t4ac_msgs::Waypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_PATH_H
