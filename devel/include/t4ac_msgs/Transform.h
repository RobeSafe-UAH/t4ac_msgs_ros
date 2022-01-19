// Generated by gencpp from file t4ac_msgs/Transform.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_TRANSFORM_H
#define T4AC_MSGS_MESSAGE_TRANSFORM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <t4ac_msgs/Location.h>
#include <t4ac_msgs/Rotation.h>

namespace t4ac_msgs
{
template <class ContainerAllocator>
struct Transform_
{
  typedef Transform_<ContainerAllocator> Type;

  Transform_()
    : location()
    , rotation()  {
    }
  Transform_(const ContainerAllocator& _alloc)
    : location(_alloc)
    , rotation(_alloc)  {
  (void)_alloc;
    }



   typedef  ::t4ac_msgs::Location_<ContainerAllocator>  _location_type;
  _location_type location;

   typedef  ::t4ac_msgs::Rotation_<ContainerAllocator>  _rotation_type;
  _rotation_type rotation;





  typedef boost::shared_ptr< ::t4ac_msgs::Transform_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::Transform_<ContainerAllocator> const> ConstPtr;

}; // struct Transform_

typedef ::t4ac_msgs::Transform_<std::allocator<void> > Transform;

typedef boost::shared_ptr< ::t4ac_msgs::Transform > TransformPtr;
typedef boost::shared_ptr< ::t4ac_msgs::Transform const> TransformConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::Transform_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::Transform_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::Transform_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Transform_<ContainerAllocator2> & rhs)
{
  return lhs.location == rhs.location &&
    lhs.rotation == rhs.rotation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::Transform_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Transform_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Transform_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Transform_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Transform_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Transform_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Transform_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Transform_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::Transform_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8dd6f45800a6e91772e60f284726d823";
  }

  static const char* value(const ::t4ac_msgs::Transform_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8dd6f45800a6e917ULL;
  static const uint64_t static_value2 = 0x72e60f284726d823ULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::Transform_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/Transform";
  }

  static const char* value(const ::t4ac_msgs::Transform_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::Transform_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# T4ac Project\n"
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

  static const char* value(const ::t4ac_msgs::Transform_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::Transform_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.location);
      stream.next(m.rotation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Transform_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::Transform_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::Transform_<ContainerAllocator>& v)
  {
    s << indent << "location: ";
    s << std::endl;
    Printer< ::t4ac_msgs::Location_<ContainerAllocator> >::stream(s, indent + "  ", v.location);
    s << indent << "rotation: ";
    s << std::endl;
    Printer< ::t4ac_msgs::Rotation_<ContainerAllocator> >::stream(s, indent + "  ", v.rotation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_TRANSFORM_H
