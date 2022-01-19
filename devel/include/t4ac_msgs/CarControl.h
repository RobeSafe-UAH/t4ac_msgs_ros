// Generated by gencpp from file t4ac_msgs/CarControl.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_CARCONTROL_H
#define T4AC_MSGS_MESSAGE_CARCONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace t4ac_msgs
{
template <class ContainerAllocator>
struct CarControl_
{
  typedef CarControl_<ContainerAllocator> Type;

  CarControl_()
    : header()
    , velocity(0.0)
    , steer(0.0)  {
    }
  CarControl_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , velocity(0.0)
    , steer(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef double _steer_type;
  _steer_type steer;





  typedef boost::shared_ptr< ::t4ac_msgs::CarControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::CarControl_<ContainerAllocator> const> ConstPtr;

}; // struct CarControl_

typedef ::t4ac_msgs::CarControl_<std::allocator<void> > CarControl;

typedef boost::shared_ptr< ::t4ac_msgs::CarControl > CarControlPtr;
typedef boost::shared_ptr< ::t4ac_msgs::CarControl const> CarControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::CarControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::CarControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::CarControl_<ContainerAllocator1> & lhs, const ::t4ac_msgs::CarControl_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.velocity == rhs.velocity &&
    lhs.steer == rhs.steer;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::CarControl_<ContainerAllocator1> & lhs, const ::t4ac_msgs::CarControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::CarControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::CarControl_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::CarControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::CarControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::CarControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::CarControl_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::CarControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "593bf145fceaee9e80fa4f5142286ff5";
  }

  static const char* value(const ::t4ac_msgs::CarControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x593bf145fceaee9eULL;
  static const uint64_t static_value2 = 0x80fa4f5142286ff5ULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::CarControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/CarControl";
  }

  static const char* value(const ::t4ac_msgs::CarControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::CarControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Techs4AgeCar Project\n"
"\n"
"# Car control command\n"
"\n"
"Header header\n"
"float64 velocity            # forward velocity (m/s), negative is reverse\n"
"float64 steer               # steer in m-1 in front wheel \n"
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

  static const char* value(const ::t4ac_msgs::CarControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::CarControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.velocity);
      stream.next(m.steer);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::CarControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::CarControl_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "steer: ";
    Printer<double>::stream(s, indent + "  ", v.steer);
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_CARCONTROL_H