// Generated by gencpp from file t4ac_msgs/Node.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_NODE_H
#define T4AC_MSGS_MESSAGE_NODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace t4ac_msgs
{
template <class ContainerAllocator>
struct Node_
{
  typedef Node_<ContainerAllocator> Type;

  Node_()
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  Node_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::t4ac_msgs::Node_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::Node_<ContainerAllocator> const> ConstPtr;

}; // struct Node_

typedef ::t4ac_msgs::Node_<std::allocator<void> > Node;

typedef boost::shared_ptr< ::t4ac_msgs::Node > NodePtr;
typedef boost::shared_ptr< ::t4ac_msgs::Node const> NodeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::Node_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::Node_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::Node_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Node_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::Node_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Node_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Node_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Node_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Node_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Node_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Node_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Node_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a842b65f413084dc2b10fb484ea7f17";
  }

  static const char* value(const ::t4ac_msgs::Node_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a842b65f413084dULL;
  static const uint64_t static_value2 = 0xc2b10fb484ea7f17ULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/Node";
  }

  static const char* value(const ::t4ac_msgs::Node_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Node definition \n"
"\n"
"float64 x	# X\n"
"float64 y	# Y\n"
"float64 z	# Z\n"
;
  }

  static const char* value(const ::t4ac_msgs::Node_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::Node_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Node_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::Node_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::Node_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_NODE_H