// Generated by gencpp from file t4ac_msgs/Traffic_Sign_List.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_TRAFFIC_SIGN_LIST_H
#define T4AC_MSGS_MESSAGE_TRAFFIC_SIGN_LIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <t4ac_msgs/Traffic_Sign.h>

namespace t4ac_msgs
{
template <class ContainerAllocator>
struct Traffic_Sign_List_
{
  typedef Traffic_Sign_List_<ContainerAllocator> Type;

  Traffic_Sign_List_()
    : header()
    , traffic_sign_list()  {
    }
  Traffic_Sign_List_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , traffic_sign_list(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >::other >  _traffic_sign_list_type;
  _traffic_sign_list_type traffic_sign_list;





  typedef boost::shared_ptr< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> const> ConstPtr;

}; // struct Traffic_Sign_List_

typedef ::t4ac_msgs::Traffic_Sign_List_<std::allocator<void> > Traffic_Sign_List;

typedef boost::shared_ptr< ::t4ac_msgs::Traffic_Sign_List > Traffic_Sign_ListPtr;
typedef boost::shared_ptr< ::t4ac_msgs::Traffic_Sign_List const> Traffic_Sign_ListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.traffic_sign_list == rhs.traffic_sign_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ae27e70cc0ba73939e81197c217bc42";
  }

  static const char* value(const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ae27e70cc0ba739ULL;
  static const uint64_t static_value2 = 0x39e81197c217bc42ULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/Traffic_Sign_List";
  }

  static const char* value(const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Techs4AgeCar project\n"
"\n"
"Header header                          # Frame and timestamp information\n"
"\n"
"Traffic_Sign[] traffic_sign_list       # Currently observed traffic signs, including the involved lanes\n"
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
"MSG: t4ac_msgs/Traffic_Sign\n"
"# Techs4AgeCar project\n"
"\n"
"string type                                    # Traffic Sign type\n"
"uint8[] lanes                                  # Lanes involved\n"
"\n"
"float64   x1                                   # Top-left x coordinate\n"
"float64   y1                                   # Top-left y coordinate \n"
"float64   x2                                   # Bottom-right x coordinate\n"
"float64   y2                                   # Bottom-right y coordinate \n"
"geometry_msgs/PoseWithCovariance local_pose    # 3D Centroid x,y,z (Ego-vehicle frame)\n"
"geometry_msgs/PoseWithCovariance global_pose   # 3D Centroid x,y,z (Map frame)\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.traffic_sign_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Traffic_Sign_List_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::Traffic_Sign_List_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "traffic_sign_list[]" << std::endl;
    for (size_t i = 0; i < v.traffic_sign_list.size(); ++i)
    {
      s << indent << "  traffic_sign_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >::stream(s, indent + "    ", v.traffic_sign_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_TRAFFIC_SIGN_LIST_H
