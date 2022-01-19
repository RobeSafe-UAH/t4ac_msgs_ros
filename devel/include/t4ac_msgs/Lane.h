// Generated by gencpp from file t4ac_msgs/Lane.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_LANE_H
#define T4AC_MSGS_MESSAGE_LANE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <t4ac_msgs/Way.h>
#include <t4ac_msgs/Way.h>

namespace t4ac_msgs
{
template <class ContainerAllocator>
struct Lane_
{
  typedef Lane_<ContainerAllocator> Type;

  Lane_()
    : left()
    , right()
    , role()  {
    }
  Lane_(const ContainerAllocator& _alloc)
    : left(_alloc)
    , right(_alloc)
    , role(_alloc)  {
  (void)_alloc;
    }



   typedef  ::t4ac_msgs::Way_<ContainerAllocator>  _left_type;
  _left_type left;

   typedef  ::t4ac_msgs::Way_<ContainerAllocator>  _right_type;
  _right_type right;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _role_type;
  _role_type role;





  typedef boost::shared_ptr< ::t4ac_msgs::Lane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::Lane_<ContainerAllocator> const> ConstPtr;

}; // struct Lane_

typedef ::t4ac_msgs::Lane_<std::allocator<void> > Lane;

typedef boost::shared_ptr< ::t4ac_msgs::Lane > LanePtr;
typedef boost::shared_ptr< ::t4ac_msgs::Lane const> LaneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::Lane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::Lane_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::Lane_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Lane_<ContainerAllocator2> & rhs)
{
  return lhs.left == rhs.left &&
    lhs.right == rhs.right &&
    lhs.role == rhs.role;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::Lane_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Lane_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Lane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Lane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Lane_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "392f655a22f5ea3284af2c1a7aca7f99";
  }

  static const char* value(const ::t4ac_msgs::Lane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x392f655a22f5ea32ULL;
  static const uint64_t static_value2 = 0x84af2c1a7aca7f99ULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/Lane";
  }

  static const char* value(const ::t4ac_msgs::Lane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Lane definition (from the Carla library) in ROS message format\n"
"#\n"
"# Lanes are mapped using PythonAPI from Carla.\n"
"# They are made up from one \"Way\" that determine its left and right bounds\n"
"\n"
"#uint8 speedlimit	# mapped max speed in km/h\n"
"Way left		# mapped left boundary\n"
"Way right		# mapped right boundary \n"
"string role     	# Role: current, backside, left, right\n"
"\n"
"#--OPTIONAL--\n"
"#int32 lane_id 		# lane id from xodr\n"
"#bool is_junction	# true if is on a junction \n"
"#float lane_width	# horizontal size of the road\n"
"\n"
"#string type		# mapped type of lanelet\n"
"\n"
"================================================================================\n"
"MSG: t4ac_msgs/Way\n"
"# Way definition \n"
"\n"
"Node[] way	# list of nodes\n"
"\n"
"\n"
"================================================================================\n"
"MSG: t4ac_msgs/Node\n"
"## Node definition \n"
"\n"
"float64 x	# X\n"
"float64 y	# Y\n"
"float64 z	# Z\n"
;
  }

  static const char* value(const ::t4ac_msgs::Lane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::Lane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left);
      stream.next(m.right);
      stream.next(m.role);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::Lane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::Lane_<ContainerAllocator>& v)
  {
    s << indent << "left: ";
    s << std::endl;
    Printer< ::t4ac_msgs::Way_<ContainerAllocator> >::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    s << std::endl;
    Printer< ::t4ac_msgs::Way_<ContainerAllocator> >::stream(s, indent + "  ", v.right);
    s << indent << "role: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.role);
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_LANE_H
